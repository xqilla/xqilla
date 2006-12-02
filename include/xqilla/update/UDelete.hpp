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

#ifndef _UDELETE_HPP
#define _UDELETE_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API UDelete : public ASTNodeImpl
{
public:
  UDelete(ASTNode *expr, XPath2MemoryManager* memMgr);

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

  const ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

protected:
  ASTNode *expr_;
};

#endif
