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
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/runtime/ResultBuffer.hpp>
#include <xqilla/runtime/ClosureResult.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/utils/XStr.hpp>

LetTuple::LetTuple(TupleNode *parent, const XMLCh *varQName, ASTNode *expr, XPath2MemoryManager *mm)
  : TupleNode(LET, parent, mm),
    seqType(0),
    varQName_(varQName),
    varURI_(0),
    varName_(0),
    varSrc_(mm),
    expr_(expr)
{
}

TupleNode *LetTuple::staticResolution(StaticContext *context)
{
  parent_ = parent_->staticResolution(context);

  if(varName_ == 0) {
    varURI_ = context->getUriBoundToPrefix(XPath2NSUtils::getPrefix(varQName_, context->getMemoryManager()), this);
    varName_ = XPath2NSUtils::getLocalName(varQName_);
  }

  expr_ = expr_->staticResolution(context);

  return this;
}

static TupleNode *findLetAncestor(TupleNode *ancestor, const StaticAnalysis &exprSrc)
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
      break;
    }
    default: break;
    }

    ancestor = ancestor->getParent();
  }

  return found;
}

TupleNode *LetTuple::staticTypingSetup(unsigned int &min, unsigned int &max, StaticContext *context)
{
  parent_ = parent_->staticTypingSetup(min, max, context);

  VariableTypeStore* varStore = context->getVariableTypeStore();

  // call static resolution on the value
  expr_ = expr_->staticTyping(context);

  if(expr_->getStaticAnalysis().isUpdating()) {
    XQThrow(StaticErrorException,X("LetTuple::staticTypingSetup"),
            X("It is a static error for the let expression of a FLWOR expression "
              "to be an updating expression [err:XUST0001]"));
  }

  varStore->addLogicalBlockScope();

  // Declare the variable binding
  varSrc_.getStaticType() = expr_->getStaticAnalysis().getStaticType();
  varSrc_.setProperties(expr_->getStaticAnalysis().getProperties());
  varStore->declareVar(varURI_, varName_, varSrc_);

  // Push back if possible
  if(!expr_->getStaticAnalysis().isCreative()) {
    TupleNode *found = findLetAncestor(parent_, expr_->getStaticAnalysis());
    if(found) {
      TupleNode *tmp = parent_;
      parent_ = found->getParent();
      found->setParent(this);
      return tmp;
    }
  }

  return this;
}

TupleNode *LetTuple::staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc)
{
  // Remove our variable binding and the scope we added
  context->getVariableTypeStore()->removeScope();

  // Remove our binding variable from the StaticAnalysis data (removing it if it's not used)
  // TBD Use counts for the variable - jpcs
  if(!usedSrc.removeVariable(varURI_, varName_)) {
    return parent_->staticTypingTeardown(context, usedSrc);
  }

  usedSrc.add(expr_->getStaticAnalysis());
  parent_ = parent_->staticTypingTeardown(context, usedSrc);

  // TBD Combine LetTuple that compute the same expression? - jpcs

  return this;
}

class LetTupleResult : public TupleResult
{
public:
  LetTupleResult(const LetTuple *ast, const TupleResult::Ptr &parent)
    : TupleResult(ast),
      ast_(ast),
      parent_(parent),
      values_(0)
  {
  }

  virtual Result getVar(const XMLCh *namespaceURI, const XMLCh *name) const
  {
    if(XPath2Utils::equals(name, ast_->getVarName()) && XPath2Utils::equals(namespaceURI, ast_->getVarURI()))
      return values_.createResult();

    return parent_->getVar(namespaceURI, name);
  }

  virtual void getInScopeVariables(std::vector<std::pair<const XMLCh*, const XMLCh*> > &variables) const
  {
    variables.push_back(std::pair<const XMLCh*, const XMLCh*>(ast_->getVarURI(), ast_->getVarName()));
    parent_->getInScopeVariables(variables);
  }

  virtual bool next(DynamicContext *context)
  {
    context->testInterrupt();

    if(!parent_->next(context))
      return false;

    // TBD Use counts for the variable - jpcs
    values_ = ResultBuffer(ClosureResult::create(ast_->getExpression(), context, parent_));
    return true;
  }

private:
  const LetTuple *ast_;
  TupleResult::Ptr parent_;
  mutable ResultBuffer values_;
};

TupleResult::Ptr LetTuple::createResult(DynamicContext* context) const
{
  return new LetTupleResult(this, parent_->createResult(context));
}

