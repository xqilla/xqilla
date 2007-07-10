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
#include <xqilla/ast/XQTextConstructor.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/events/EventHandler.hpp>

#include <xercesc/framework/XMLBuffer.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

XQTextConstructor::XQTextConstructor(ASTNode *value, XPath2MemoryManager* mm)
  : XQDOMConstructor(mm),
    m_nodeType(Node::text_string),
    m_value(value)
{
  setType(ASTNode::DOM_CONSTRUCTOR);
}

void XQTextConstructor::generateEvents(EventHandler *events, DynamicContext *context,
                                       bool preserveNS, bool preserveType) const
{
  XMLBuffer value;
  if(getStringValue(m_value, value, context))
    events->textEvent(value.getRawBuffer());
}

ASTNode* XQTextConstructor::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  m_value = new (mm) XQAtomize(m_value, mm);
  m_value->setLocationInfo(this);

  m_value = m_value->staticResolution(context);

  return this;
}

ASTNode* XQTextConstructor::staticTyping(StaticContext *context)
{
  _src.clear();

  m_value = m_value->staticTyping(context);
  _src.add(m_value->getStaticResolutionContext());

  _src.getStaticType().flags = StaticType::TEXT_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);
  return this; // Never constant fold
}

const XMLCh* XQTextConstructor::getNodeType() const
{
  return m_nodeType;
}

const ASTNode *XQTextConstructor::getValue() const
{
  return m_value;
}

void XQTextConstructor::setValue(ASTNode *value)
{
  m_value = value;
}

