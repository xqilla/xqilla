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

#ifndef XQORDERINGCHANGE_HPP
#define XQORDERINGCHANGE_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/context/StaticContext.hpp>

class XQILLA_API XQOrderingChange : public ASTNodeImpl
{
public:
  XQOrderingChange(StaticContext::NodeSetOrdering ordering, ASTNode* astNode, XPath2MemoryManager* expr);

  virtual Result createResult(DynamicContext *context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  StaticContext::NodeSetOrdering getOrderingValue() const;
  ASTNode* getExpr() const;
  void setExpr(ASTNode *expr);

protected:
  StaticContext::NodeSetOrdering m_nOrdering;
  ASTNode* m_pExpr;
};

#endif
