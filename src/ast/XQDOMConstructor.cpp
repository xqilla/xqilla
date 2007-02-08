/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/items/ATQNameConstructor.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/events/ContentSequenceFilter.hpp>

#include <xercesc/util/XMLChar.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQDOMConstructor::XQDOMConstructor(XPath2MemoryManager* mm)
  : ASTNodeImpl(mm)
{
}

Sequence XQDOMConstructor::createSequence(DynamicContext *context, int flags) const 
{
  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  generateEvents(builder.get(), context, true, true);
  builder->endEvent();
  return builder->getSequence();
}

bool XQDOMConstructor::getStringValue(const VectorOfASTNodes* m_children, XMLBuffer &value, DynamicContext *context)
{
  bool bSomethingFound=false;
  for(VectorOfASTNodes::const_iterator itCont = m_children->begin();
      itCont != m_children->end (); ++itCont) {
    if(getStringValue(*itCont, value, context))
      bSomethingFound = true;
  }
  return bSomethingFound;
}

bool XQDOMConstructor::getStringValue(const ASTNode *child, XMLBuffer &value, DynamicContext *context)
{
  bool bSomethingFound=false;
  Result childList = child->createResult(context);
  Item::Ptr item;
  bool addSpace = false;
  while((item = childList->next(context)) != NULLRCP) {
    if(addSpace) value.append(' ');
    else addSpace = true;
    value.append(item->asString(context));
    bSomethingFound=true;
  }
  return bSomethingFound;
}

void XQDOMConstructor::unescapeEntities(XMLBuffer& buff) const
{
  const XMLCh* value=buff.getRawBuffer();
  unsigned int len=buff.getLen();
  int j=0;
  XMLCh* dst=(XMLCh*)value;
  for(unsigned int i=0;i<len;i++)
  {
    if(value[i]==chAmpersand) // entity reference
    {
      if(XMLString::compareNString(value+i+1,XMLUni::fgAmp,3)==0 && *(value+i+1+3)==chSemiColon) {
        dst[j++]=chAmpersand; i+=4;
      } else if(XMLString::compareNString(value+i+1,XMLUni::fgQuot,4)==0 && *(value+i+1+4)==chSemiColon) {
        dst[j++]=chDoubleQuote; i+=5;
      } else if(XMLString::compareNString(value+i+1,XMLUni::fgApos,4)==0 && *(value+i+1+4)==chSemiColon) {
        dst[j++]=chSingleQuote; i+=5;
      } else if(XMLString::compareNString(value+i+1,XMLUni::fgLT,2)==0 && *(value+i+1+2)==chSemiColon) {
        dst[j++]=chOpenAngle; i+=3;
      } else if(XMLString::compareNString(value+i+1,XMLUni::fgGT,2)==0 && *(value+i+1+2)==chSemiColon) {
        dst[j++]=chCloseAngle; i+=3;
      } else if(*(value+i+1)==chPound) {
        unsigned int number = 0;
        unsigned int radix = 10;
        i+=2;
        if(*(value+i)==chLatin_x)
        {
          i++;
          radix=16;
        }
        unsigned int k=i;
        while(k<len && value[k]!=chSemiColon) k++;
        if(k==len)
          XQThrow(ASTException,X("DOM Constructor"),X("Unterminated entity reference [err:XPST0003]."));
        for(unsigned int q=i;q<k;q++)
        {
          unsigned int nextVal;
          XMLCh nextCh=*(value+q);
          if ((nextCh >= chDigit_0) && (nextCh <= chDigit_9))
            nextVal = (unsigned int)(nextCh - chDigit_0);
          else if ((nextCh >= chLatin_A) && (nextCh <= chLatin_F))
            nextVal= (unsigned int)(10 + (nextCh - chLatin_A));
          else if ((nextCh >= chLatin_a) && (nextCh <= chLatin_f))
            nextVal = (unsigned int)(10 + (nextCh - chLatin_a));
          else
            XQThrow(ASTException,X("DOM Constructor"),X("Unterminated entity reference [err:XPST0003]."));
          if (nextVal >= radix)
            XQThrow(ASTException,X("DOM Constructor"),X("Invalid digit inside entity reference [err:XPST0003]."));
          else
            number = (number * radix) + nextVal;
        }
        if(!XMLChar1_0::isXMLChar(number))
          XQThrow(ASTException,X("DOM Constructor"),X("Entity reference is not a valid XML character [err:XPST0003]."));
        if (number <= 0xFFFD)
          dst[j++]=number;
        else if (number >= 0x10000 && number <= 0x10FFFF)
        {
          number -= 0x10000;
          dst[j++]= XMLCh((number >> 10) + 0xD800);
          dst[j++]= XMLCh((number & 0x3FF) + 0xDC00);
        }
        i=k;
      } else
        XQThrow(ASTException,X("DOM Constructor"),X("Invalid entity reference [err:XPST0003]."));
    }
    else
      dst[j++]=value[i];
  }
  dst[j++]=0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XQContentSequence::XQContentSequence(ASTNode *expr, XPath2MemoryManager* mm)
  : ASTNodeImpl(mm),
    expr_(expr)
{
  setType(ASTNode::CONTENT_SEQUENCE);
}

ASTNode* XQContentSequence::staticResolution(StaticContext *context)
{
  expr_ = expr_->staticResolution(context);
  return this;
}

ASTNode *XQContentSequence::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.copy(expr_->getStaticResolutionContext());

  if(!expr_->getStaticResolutionContext().getStaticType().containsType(StaticType::DOCUMENT_TYPE)) {
    ASTNode *pChild = expr_;
    if((unsigned int)pChild->getType() == ASTNode::DEBUG_HOOK)
      pChild = ((XQDebugHook*)pChild)->m_impl;

    // Not needed if the wrapped expression is a DOM_CONSTRUCTOR
    if((unsigned int)pChild->getType() == ASTNode::DOM_CONSTRUCTOR) {
      return expr_->staticTyping(context);
    }
  }

  if(_src.getStaticType().containsType(StaticType::ANY_ATOMIC_TYPE)) {
    _src.getStaticType().typeIntersect(~StaticType::ANY_ATOMIC_TYPE);
    _src.getStaticType().typeUnion(StaticType::TEXT_TYPE);
  }

  _src.forceNoFolding(true);
  _src.creative(true);
  return this;
}

Sequence XQContentSequence::createSequence(DynamicContext* context, int flags) const
{
  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  generateEvents(builder.get(), context, true, true);
  builder->endEvent();
  return builder->getSequence();
}

void XQContentSequence::generateEvents(EventHandler *events, DynamicContext *context,
                                       bool preserveNS, bool preserveType) const
{
  preserveNS = context->getPreserveNamespaces();
  preserveType = context->getConstructionMode() == StaticContext::CONSTRUCTION_MODE_PRESERVE;

  ContentSequenceFilter filter(events);
  expr_->generateEvents(&filter, context, preserveNS, preserveType);
}

////////////////////////////////////////////////////////////////////////////////////////////////////
XQDirectName::XQDirectName(const XMLCh *qname, bool isAttr, XPath2MemoryManager* mm)
  : ASTNodeImpl(mm),
    qname_(qname),
    isAttr_(isAttr)
{
  setType(ASTNode::DIRECT_NAME);
}

ASTNode *XQDirectName::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  const XMLCh* prefix = XPath2NSUtils::getPrefix(qname_, context->getMemoryManager());
  const XMLCh* uri = 0;
  if(prefix == 0 || *prefix == 0) {
    // If qname has no prefix
    if(!isAttr_)
      uri = context->getDefaultElementAndTypeNS();
  }
  else {
    // If qname has a prefix
    uri = context->getUriBoundToPrefix(prefix, this);
  }

  ATQNameConstructor *constr = new (mm)
    ATQNameConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                       SchemaSymbols::fgDT_QNAME,
                       uri, prefix, XPath2NSUtils::getLocalName(qname_));

  return (new (mm) XQSequence(constr, mm))->staticResolution(context);
}

ASTNode *XQDirectName::staticTyping(StaticContext *context)
{
  // Never happens
  return this;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XQNameExpression::XQNameExpression(ASTNode *expr, XPath2MemoryManager* mm)
  : ASTNodeImpl(mm),
    expr_(expr)
{
  setType(ASTNode::NAME_EXPRESSION);
}

ASTNode* XQNameExpression::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  expr_ = new (mm) XQAtomize(expr_, mm);
  expr_->setLocationInfo(this);
  SequenceType *seqType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING),
                                                SequenceType::EXACTLY_ONE);
  seqType->setLocationInfo(this);
  expr_ = new (mm) XQTreatAs(expr_, seqType, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  return this;
}

ASTNode *XQNameExpression::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.getStaticType().flags = StaticType::QNAME_TYPE;

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticResolutionContext());

  if(expr_->getStaticResolutionContext().getStaticType().isType(StaticType::QNAME_TYPE)) {
    return expr_;
  }

  if(!expr_->getStaticResolutionContext().getStaticType().
     containsType(StaticType::QNAME_TYPE|StaticType::STRING_TYPE|StaticType::UNTYPED_ATOMIC_TYPE)) {
    XQThrow(XPath2TypeMatchException,X("XQNameExpression::staticTyping"),
            X("The name expression must be a single xs:QName, xs:string or xs:untypedAtomic [err:XPTY0004]"));
  }

  if(expr_->isConstant()) {
    return constantFold(context);
  }
  return this;
}

Result XQNameExpression::createResult(DynamicContext* context, int flags) const
{
  return new NameExpressionResult(this);
}

Item::Ptr XQNameExpression::NameExpressionResult::getSingleResult(DynamicContext *context) const
{
    AnyAtomicType::Ptr itemName = ast_->getExpression()->createResult(context)->next(context);

    switch(itemName->getPrimitiveTypeIndex()) {
    case AnyAtomicType::QNAME:
      return itemName;
    case AnyAtomicType::STRING:
    case AnyAtomicType::UNTYPED_ATOMIC:
      try {
        return context->getItemFactory()->createDerivedFromAtomicType(AnyAtomicType::QNAME, itemName->asString(context), context);
      }
      catch(XQException &ex) {
        XQThrow(ASTException,X("XQNameExpression::NameExpressionResult::getSingleResult"),
                X("The name expression cannot be converted to a xs:QName [err:XQDY0074]"));
      }
    default:
      break;
    }

    XQThrow(XPath2TypeMatchException,X("XQNameExpression::NameExpressionResult::getSingleResult"),
            X("The name expression must be a single xs:QName, xs:string or xs:untypedAtomic [err:XPTY0004]"));
}

