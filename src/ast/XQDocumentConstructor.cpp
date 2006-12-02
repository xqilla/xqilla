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
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/items/Node.hpp>

#include <xercesc/dom/DOM.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQDocumentConstructor::XQDocumentConstructor(ASTNode *value, XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_value(value)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}

Sequence XQDocumentConstructor::collapseTreeInternal(DynamicContext *context, int flags) const 
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  try
  {
    std::vector<Node::Ptr> childList;
    Result children = m_value->collapseTree(context);
    Item::Ptr child;
    while((child = children->next(context)).notNull())
    {
      assert(child->isNode());
      Node::Ptr sourceNode = (Node::Ptr)child;

      if(sourceNode->dmNodeKind() == Node::attribute_string)
        XQThrow(ASTException,X("XQDocumentConstructor::collapseTreeInternal"),
                X("An attribute node cannot be a child of a document [err:XPTY0004]."));
      else if(sourceNode->dmNodeKind() == Node::text_string) {
        // Ensure it's not empty
        if(!XPath2Utils::equals(sourceNode->dmStringValue(context),0))
          childList.push_back(sourceNode);
      }
      else childList.push_back(sourceNode);
    }

    return Sequence(context->getItemFactory()->createDocumentNode(childList, context), mm);
  }
  catch(DOMException& e) {
    XQThrow(ASTException,X("XQDocumentConstructor::collapseTreeInternal"),e.getMessage());
  }
}

ASTNode* XQDocumentConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  m_value = new (mm) XQContentSequence(m_value, /*copy*/false, mm);
  m_value->setLocationInfo(this);

  m_value = m_value->staticResolution(context);

  return this;
}

ASTNode* XQDocumentConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  m_value = m_value->staticTyping(context);
  _src.add(m_value->getStaticResolutionContext());

  _src.getStaticType().flags = StaticType::DOCUMENT_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  return this; // Never constant fold
}

const XMLCh* XQDocumentConstructor::getNodeType() const
{
  return Node::document_string;
}

const ASTNode *XQDocumentConstructor::getValue() const
{
  return m_value;
}

void XQDocumentConstructor::setValue(ASTNode *value)
{
  m_value = value;
}

