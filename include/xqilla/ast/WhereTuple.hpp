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

#ifndef WHERETUPLE_HPP
#define WHERETUPLE_HPP

#include <xqilla/ast/TupleNode.hpp>

class ASTNode;

class XQILLA_API WhereTuple : public TupleNode
{
public:
  WhereTuple(TupleNode *parent, ASTNode *expr);

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  virtual TupleNode *staticResolution(StaticContext *context);
  virtual TupleNode *staticTypingSetup(StaticContext *context);
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc);

  virtual TupleResult::Ptr createResult(DynamicContext* context) const;

private:
  ASTNode *expr_;
};

#endif
