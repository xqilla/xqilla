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

#ifndef LETTUPLE_HPP
#define LETTUPLE_HPP

#include <xqilla/ast/TupleNode.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

class ASTNode;

class XQILLA_API LetTuple : public TupleNode
{
public:
  LetTuple(TupleNode *parent, const XMLCh *varQName, ASTNode *expr, XPath2MemoryManager *mm);

  const XMLCh *getVarURI() const { return varURI_; }
  const XMLCh *getVarName() const { return varName_; }

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  virtual TupleNode *staticResolution(StaticContext *context);
  virtual TupleNode *staticTypingSetup(StaticContext *context);
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticResolutionContext &usedSrc);

  virtual TupleResult::Ptr createResult(DynamicContext* context) const;

private:
  const XMLCh *varQName_, *varURI_, *varName_;
  StaticResolutionContext varSrc_;
  ASTNode *expr_;
};

#endif
