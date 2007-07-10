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

#include <xqilla/ast/ContextTuple.hpp>
#include <xqilla/context/DynamicContext.hpp>

TupleNode *ContextTuple::staticResolution(StaticContext *context)
{
  return this;
}

TupleNode *ContextTuple::staticTypingSetup(StaticContext *context)
{
  return this;
}

TupleNode *ContextTuple::staticTypingTeardown(StaticContext *context, StaticResolutionContext &usedSrc)
{
  return this;
}

class ContextTupleResult : public TupleResult
{
public:
  ContextTupleResult(const LocationInfo *loc)
    : TupleResult(loc),
      varStore_(0)
  {
  }

  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const
  {
    return varStore_->getVar(namespaceURI, name);
  }

  virtual bool next(DynamicContext *context)
  {
    if(varStore_ != 0) return false;

    varStore_ = context->getVariableStore();
    return true;
  }

private:
  const VariableStore *varStore_;
};

TupleResult::Ptr ContextTuple::createResult(DynamicContext* context) const
{
  return new ContextTupleResult(this);
}

