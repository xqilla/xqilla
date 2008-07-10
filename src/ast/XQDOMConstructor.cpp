/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/items/ATQNameConstructor.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/events/ContentSequenceFilter.hpp>
#include <xqilla/events/QueryPathTreeFilter.hpp>
#include <xqilla/runtime/ClosureResult.hpp>

#include <xercesc/util/XMLChar.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQDOMConstructor::XQDOMConstructor(XPath2MemoryManager* mm)
  : ASTNodeImpl(mm),
    queryPathTree_(0)
{
}

Sequence XQDOMConstructor::createSequence(DynamicContext *context, int flags) const 
{
  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  if(context->getProjection() && queryPathTree_ != 0) {
    QueryPathTreeFilter qptf(queryPathTree_, builder.get());
    generateAndTailCall(&qptf, context, true, true);
    qptf.endEvent();
  }
  else {
    generateAndTailCall(builder.get(), context, true, true);
    builder->endEvent();
  }
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
  _src.copy(expr_->getStaticAnalysis());

  if(!expr_->getStaticAnalysis().getStaticType().containsType(StaticType::DOCUMENT_TYPE|StaticType::ANY_ATOMIC_TYPE)) {
    ASTNode *pChild = expr_;

    // Not needed if the wrapped expression is a DOM_CONSTRUCTOR
    if(pChild->getType() == ASTNode::DOM_CONSTRUCTOR) {
      return expr_->staticTyping(context);
    }
  }

  _src.getStaticType().substitute(StaticType::ANY_ATOMIC_TYPE, StaticType::TEXT_TYPE);

  _src.creative(true);
  return this;
}

Sequence XQContentSequence::createSequence(DynamicContext* context, int flags) const
{
  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  generateAndTailCall(builder.get(), context, true, true);
  builder->endEvent();
  return builder->getSequence();
}

EventGenerator::Ptr XQContentSequence::generateEvents(EventHandler *events, DynamicContext *context,
                                                 bool preserveNS, bool preserveType) const
{
  preserveNS = context->getPreserveNamespaces();
  preserveType = context->getConstructionMode() == StaticContext::CONSTRUCTION_MODE_PRESERVE;

  if(!expr_->getStaticAnalysis().getStaticType().containsType(StaticType::DOCUMENT_TYPE|StaticType::ANY_ATOMIC_TYPE)) {
    return new ClosureEventGenerator(expr_, context, preserveNS, preserveType);
  }

  ContentSequenceFilter filter(events);
  expr_->generateAndTailCall(&filter, context, preserveNS, preserveType);
  return 0;
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

  _src.getStaticType() = StaticType::QNAME_TYPE;

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticAnalysis());

  if(expr_->getStaticAnalysis().getStaticType().isType(StaticType::QNAME_TYPE)) {
    return expr_;
  }

  if(!expr_->getStaticAnalysis().getStaticType().
     containsType(StaticType::QNAME_TYPE|StaticType::STRING_TYPE|StaticType::UNTYPED_ATOMIC_TYPE)) {
    XMLBuffer buf;
    buf.set(X("The name expression must be a single xs:QName, xs:string or xs:untypedAtomic"));
    buf.append(X(" - the expression has a static type of "));
    expr_->getStaticAnalysis().getStaticType().typeToBuf(buf);
    buf.append(X(" [err:XPTY0004]"));
    XQThrow(XPath2TypeMatchException, X("XQNameExpression::staticTyping"), buf.getRawBuffer());
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

    XMLBuffer buf;
    buf.set(X("The name expression must be a single xs:QName, xs:string or xs:untypedAtomic"));
    buf.append(X(" - found item of type "));
    itemName->typeToBuffer(context, buf);
    buf.append(X(" [err:XPTY0004]"));
    XQThrow(XPath2TypeMatchException, X("XQNameExpression::NameExpressionResult::getSingleResult"), buf.getRawBuffer());
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XQSimpleContent::XQSimpleContent(VectorOfASTNodes *children, XPath2MemoryManager* mm)
  : ASTNodeImpl(mm),
    children_(children)
{
  setType(ASTNode::SIMPLE_CONTENT);
}

ASTNode* XQSimpleContent::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  unsigned int i;
  for(i = 0;i < children_->size(); ++i) {
    // atomize content and run static resolution 
    (*children_)[i] = new (mm) XQAtomize((*children_)[i], mm);
    (*children_)[i]->setLocationInfo(this);

    (*children_)[i] = (*children_)[i]->staticResolution(context);
  }

  return this;
}

ASTNode *XQSimpleContent::staticTyping(StaticContext *context)
{
  _src.clear();

  bool constant = true;
  unsigned int i;
  for(i = 0; i < children_->size(); ++i) {
    (*children_)[i] = (*children_)[i]->staticTyping(context);
    _src.add((*children_)[i]->getStaticAnalysis());

    if((*children_)[i]->getStaticAnalysis().isUpdating()) {
      XQThrow(StaticErrorException,X("XQSimpleContent::staticTyping"),
              X("It is a static error for the a value expression of an attribute constructor "
                "to be an updating expression [err:XUST0001]"));
    }

    if(!(*children_)[i]->isConstant()) constant = false;
  }

  _src.getStaticType() = StaticType::STRING_TYPE;

  if(constant) {
    return constantFold(context);
  }
  return this;
}

Result XQSimpleContent::createResult(DynamicContext* context, int flags) const
{
  return new SimpleContentResult(this);
}

Item::Ptr XQSimpleContent::SimpleContentResult::getSingleResult(DynamicContext *context) const
{
  // TBD separator - jpcs
  XMLBuffer value;
  XQDOMConstructor::getStringValue(ast_->getChildren(), value, context);
  return context->getItemFactory()->createString(value.getRawBuffer(), context);
}

