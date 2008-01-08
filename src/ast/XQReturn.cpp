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

#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/TupleNode.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

XQReturn::XQReturn(TupleNode *parent, ASTNode *expr, XPath2MemoryManager *mm)
  : ASTNodeImpl(mm),
    parent_(parent),
    expr_(expr)
{
  setType(RETURN);
}

ASTNode *XQReturn::staticResolution(StaticContext *context)
{
  parent_ = parent_->staticResolution(context);
  expr_ = expr_->staticResolution(context);

  return this;
}

ASTNode *XQReturn::staticTyping(StaticContext *context)
{
  _src.clear();

  parent_ = parent_->staticTypingSetup(context);

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticAnalysis());
  _src.getStaticType() = expr_->getStaticAnalysis().getStaticType();

  parent_ = parent_->staticTypingTeardown(context, _src);

  if(!_src.isUsed()) {
    return constantFold(context);
  }
  return this;
}

class ReturnResult : public ResultImpl
{
public:
  ReturnResult(const XQReturn *ast, const TupleResult::Ptr parent)
    : ResultImpl(ast),
      ast_(ast),
      parent_(parent),
      result_(0)
  {
  }

  virtual Item::Ptr next(DynamicContext *context)
  {
    AutoVariableStoreReset reset(context, parent_);
    Item::Ptr item;
    while((item = result_->next(context)).isNull()) {
      context->testInterrupt();

      reset.reset();
      if(parent_.isNull() || !parent_->next(context)) return 0;

      context->setVariableStore(parent_);
      result_ = ast_->getExpression()->createResult(context);
    }

    return item;
  }

  virtual std::string asString(DynamicContext *context, int indent) const { return ""; }

private:
  const XQReturn *ast_;
  TupleResult::Ptr parent_;
  Result result_;
};

Result XQReturn::createResult(DynamicContext* context, int flags) const
{
  return new ReturnResult(this, parent_->createResult(context));
}

void XQReturn::generateEvents(EventHandler *events, DynamicContext *context,
                              bool preserveNS, bool preserveType) const
{
    AutoVariableStoreReset reset(context);

    TupleResult::Ptr tuples = parent_->createResult(context);
    while(tuples->next(context)) {
      context->setVariableStore(tuples);
      expr_->generateEvents(events, context, preserveNS, preserveType);
      reset.reset();
    }
}

PendingUpdateList XQReturn::createUpdateList(DynamicContext *context) const
{
    AutoVariableStoreReset reset(context);

    PendingUpdateList result;
    TupleResult::Ptr tuples = parent_->createResult(context);
    while(tuples->next(context)) {
      context->setVariableStore(tuples);
      result.mergeUpdates(expr_->createUpdateList(context));
      reset.reset();
    }

    return result;
}

