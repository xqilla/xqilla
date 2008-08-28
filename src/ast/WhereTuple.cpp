/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include <xqilla/ast/ForTuple.hpp>
#include <xqilla/ast/LetTuple.hpp>
#include <xqilla/ast/WhereTuple.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/operators/And.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/ast/XQEffectiveBooleanValue.hpp>

WhereTuple::WhereTuple(TupleNode *parent, ASTNode *expr, XPath2MemoryManager *mm)
  : TupleNode(WHERE, parent, mm),
    expr_(expr)
{
}

TupleNode *WhereTuple::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  parent_ = parent_->staticResolution(context);

  if(expr_->getType() != ASTNode::OPERATOR || ((XQOperator*)expr_)->getOperatorName() != And::name) {
    expr_ = new (mm) XQEffectiveBooleanValue(expr_, mm);
    expr_->setLocationInfo(this);
  }

  expr_ = expr_->staticResolution(context);

  return this;
}

static TupleNode *findWhereAncestor(TupleNode *ancestor, const StaticAnalysis &exprSrc)
{
  // Find the furthest ancestor that we can safely be placed before
  TupleNode *found = 0;

  while(ancestor != 0) {
    switch(ancestor->getType()) {
    case TupleNode::FOR: {
      ForTuple *f = (ForTuple*)ancestor;
      if((f->getVarName() && exprSrc.isVariableUsed(f->getVarURI(), f->getVarName())) ||
         (f->getPosName() && exprSrc.isVariableUsed(f->getPosURI(), f->getPosName()))) {
        return found;
      }
      found = ancestor;
      break;
    }
    case TupleNode::LET: {
      LetTuple *f = (LetTuple*)ancestor;
      if((f->getVarName() && exprSrc.isVariableUsed(f->getVarURI(), f->getVarName()))) {
        return found;
      }
      found = ancestor;
      break;
    }
    default: break;
    }

    ancestor = ancestor->getParent();
  }

  return found;
}

TupleNode *WhereTuple::staticTypingSetup(unsigned int &min, unsigned int &max, StaticContext *context)
{
  // Split if expr_ is the And operator
  if(expr_->getType() == ASTNode::OPERATOR && ((XQOperator*)expr_)->getOperatorName() == And::name) {
    XPath2MemoryManager *mm = context->getMemoryManager();

    And *andOp = (And*)expr_;
    TupleNode *result = parent_;
    for(unsigned int index = 0; index < andOp->getNumArgs(); ++index) {
      result = new (mm) WhereTuple(result, andOp->getArgument(index), mm);
      result->setLocationInfo(this);
    }

    parent_ = 0;
    expr_ = 0;
    this->release();

    return result->staticTypingSetup(min, max, context);
  }

  parent_ = parent_->staticTypingSetup(min, max, context);

  // call static resolution on the value
  expr_ = expr_->staticTyping(context);

  if(expr_->getStaticAnalysis().isUpdating()) {
    XQThrow(StaticErrorException,X("WhereTuple::staticTypingSetup"),
            X("It is a static error for the where expression of a FLWOR expression "
              "to be an updating expression [err:XUST0001]"));
  }

  min = 0;

  // Push back if possible
  TupleNode *found = findWhereAncestor(parent_, expr_->getStaticAnalysis());
  if(found) {
    TupleNode *tmp = parent_;
    parent_ = found->getParent();
    found->setParent(this);
    return tmp;
  }

  return this;
}

TupleNode *WhereTuple::staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc)
{
  usedSrc.add(expr_->getStaticAnalysis());
  parent_ = parent_->staticTypingTeardown(context, usedSrc);

  return this;
}

class WhereTupleResult : public TupleResult
{
public:
  WhereTupleResult(const WhereTuple *ast, const TupleResult::Ptr &parent)
    : TupleResult(ast),
      ast_(ast),
      parent_(parent)
  {
  }

  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const
  {
    return parent_->getVar(namespaceURI, name);
  }

  virtual void getInScopeVariables(std::vector<std::pair<const XMLCh*, const XMLCh*> > &variables) const
  {
    parent_->getInScopeVariables(variables);
  }

  virtual bool next(DynamicContext *context)
  {
    while(parent_->next(context)) {
      context->testInterrupt();

      AutoVariableStoreReset reset(context, parent_);
      if(((ATBooleanOrDerived*)ast_->getExpression()->createResult(context)->next(context).get())->isTrue())
        return true;
    }

    return false;
  }

private:
  const WhereTuple *ast_;
  TupleResult::Ptr parent_;
};

TupleResult::Ptr WhereTuple::createResult(DynamicContext* context) const
{
  return new WhereTupleResult(this, parent_->createResult(context));
}

