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
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/ast/XQAtomize.hpp>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLChar.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQAttributeConstructor::XQAttributeConstructor(ASTNode* name, VectorOfASTNodes* children, XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_name(name),
    m_children(children)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}

Sequence XQAttributeConstructor::collapseTreeInternal(DynamicContext *context, int flags) const 
{
  Node::Ptr result;
  try
  {
    AnyAtomicType::Ptr itemName = m_name->collapseTree(context)->next(context);
    const ATQNameOrDerived* pQName = (const ATQNameOrDerived*)itemName.get();
    const XMLCh *nodePrefix = pQName->getPrefix();
    const XMLCh *nodeUri = pQName->getURI();
    const XMLCh *nodeName = pQName->getName();

    if((nodeUri==NULL && XPath2Utils::equals(nodeName, XMLUni::fgXMLNSString)) ||
       XPath2Utils::equals(nodeUri, XMLUni::fgXMLNSURIName))
      XQThrow(ASTException,X("DOM Constructor"),X("A computed attribute constructor cannot create a namespace declaration [err:XQDY0044]"));

    XMLBuffer value;
    getStringValue(m_children, value, context);
    result = context->getItemFactory()->createAttributeNode(nodeUri, nodePrefix, nodeName, value.getRawBuffer(),
                                                            context);
  }
  catch(DOMException& e) {
    XQThrow(ASTException,X("AttributeConstructor"),e.getMessage());
  }
  if(result.notNull())
    return Sequence(result, context->getMemoryManager());
  return Sequence(context->getMemoryManager());
}

ASTNode* XQAttributeConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  // and run static resolution
  m_name = new (mm) XQNameExpression(m_name, mm);
  m_name->setLocationInfo(this);
  m_name = m_name->staticResolution(context);

  unsigned int i;
  for (i=0;i<m_children->size();i++) {
    // normalize whitespace and expand entities in string literals
    if((*m_children)[i]->getType()==LITERAL)
    {
      AutoDelete<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(mm);
      XQLiteral *lit = (XQLiteral*)(*m_children)[i];
      Item::Ptr item = lit->getItemConstructor()->createItem(dContext);
      if(((AnyAtomicType*)(const Item*)item)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
      {
        const XMLCh* str=item->asString(dContext);
        XMLBuffer buff(XMLString::stringLen(str)+1, mm);
        buff.append(str);
        XMLString::replaceWS(buff.getRawBuffer(), mm);
        unescapeEntities(buff);
        AnyAtomicTypeConstructor *newIC = new (mm)
          AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                   SchemaSymbols::fgDT_STRING,
                                   mm->getPooledString(buff.getRawBuffer()), AnyAtomicType::STRING);
        lit->setItemConstructor(newIC);
      }
    }
    // atomize content and run static resolution 
    (*m_children)[i] = new (mm) XQAtomize((*m_children)[i], mm);
    (*m_children)[i]->setLocationInfo(this);

    (*m_children)[i] = (*m_children)[i]->staticResolution(context);

  }

  return this;
}

ASTNode* XQAttributeConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  m_name = m_name->staticTyping(context);
  _src.add(m_name->getStaticResolutionContext());

  unsigned int i;
  for(i = 0; i < m_children->size(); ++i) {
    (*m_children)[i] = (*m_children)[i]->staticTyping(context);
    _src.add((*m_children)[i]->getStaticResolutionContext());
  }

  _src.getStaticType().flags = StaticType::ATTRIBUTE_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  return this; // Never constant fold
}

const XMLCh* XQAttributeConstructor::getNodeType() const
{
  return Node::attribute_string;
}

const ASTNode *XQAttributeConstructor::getName() const
{
  return m_name;
}

const VectorOfASTNodes *XQAttributeConstructor::getChildren() const
{
  return m_children;
}

void XQAttributeConstructor::setName(ASTNode *name)
{
  m_name = name;
}
