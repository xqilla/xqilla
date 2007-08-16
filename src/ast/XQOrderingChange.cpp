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

#include <sstream>

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>

XQOrderingChange::XQOrderingChange(StaticContext::NodeSetOrdering ordering, ASTNode* astNode, XPath2MemoryManager* expr)
  : ASTNodeImpl(expr),
    m_nOrdering(ordering),
    m_pExpr(astNode)
{
  setType(ASTNode::ORDERING_CHANGE);
}

Result XQOrderingChange::createResult(DynamicContext *context, int flags) const
{
  return m_pExpr->createResult(context);
}

ASTNode* XQOrderingChange::staticResolution(StaticContext* context)
{
  AutoNodeSetOrderingReset orderReset(context, m_nOrdering);
  m_pExpr = m_pExpr->staticResolution(context);
  return this;
}

ASTNode *XQOrderingChange::staticTyping(StaticContext *context)
{
  _src.clear();
  m_pExpr = m_pExpr->staticTyping(context);
  _src.copy(m_pExpr->getStaticAnalysis());
  return this;
}

StaticContext::NodeSetOrdering XQOrderingChange::getOrderingValue() const
{
  return m_nOrdering;
}

ASTNode* XQOrderingChange::getExpr() const
{
  return m_pExpr;
}

void XQOrderingChange::setExpr(ASTNode *expr)
{
	m_pExpr = expr;
}
