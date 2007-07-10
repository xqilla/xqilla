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

#ifndef XQRETURN_HPP
#define XQRETURN_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class TupleNode;

class XQILLA_API XQReturn : public ASTNodeImpl
{
public:
  XQReturn(TupleNode *parent, ASTNode *expr, XPath2MemoryManager *mm);

  const TupleNode *getParent() const { return parent_; }
  void setParent(TupleNode *parent) { parent_ = parent; }

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual void generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const;
  virtual PendingUpdateList createUpdateList(DynamicContext *context) const;

private:
  TupleNode *parent_;
  ASTNode *expr_;
};

#endif
