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

#ifndef FORTUPLE_HPP
#define FORTUPLE_HPP

#include <xqilla/ast/TupleNode.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

class ASTNode;

class XQILLA_API ForTuple : public TupleNode
{
public:
  ForTuple(TupleNode *parent, const XMLCh *varQName, const XMLCh *posQName, ASTNode *expr,
           XPath2MemoryManager *mm);

  const XMLCh *getVarURI() const { return varURI_; }
  const XMLCh *getVarName() const { return varName_; }

  const XMLCh *getPosURI() const { return posURI_; }
  const XMLCh *getPosName() const { return posName_; }

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  const StaticResolutionContext &getVarSRC() const { return varSrc_; }

  virtual TupleNode *staticResolution(StaticContext *context);
  virtual TupleNode *staticTypingSetup(StaticContext *context);
  virtual TupleNode *staticTypingTeardown(StaticContext *context, StaticResolutionContext &usedSrc);

  virtual TupleResult::Ptr createResult(DynamicContext* context) const;

private:
  const XMLCh *varQName_, *varURI_, *varName_;
  const XMLCh *posQName_, *posURI_, *posName_;
  StaticResolutionContext varSrc_, posSrc_;
  ASTNode *expr_;
};

#endif
