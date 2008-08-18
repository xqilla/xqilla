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

#include <xqilla/debug/ASTDebugHook.hpp>

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/debug/DebugListener.hpp>
#include <xqilla/debug/StackFrame.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/utils/PrintAST.hpp>

ASTDebugHook::ASTDebugHook(ASTNode *astNode, XPath2MemoryManager *mm)
  : ASTNodeImpl(DEBUG_HOOK, mm),
    expr_(astNode)
{
  _src.copy(expr_->getStaticAnalysis());
  setLocationInfo(expr_);
}

bool ASTDebugHook::isConstant() const
{
  return expr_->isConstant();
}

bool ASTDebugHook::isDateOrTimeAndHasNoTimezone(StaticContext* context) const
{
  return expr_->isDateOrTimeAndHasNoTimezone(context);
}

ASTNode *ASTDebugHook::staticResolution(StaticContext* context)
{
  expr_ = expr_->staticResolution(context);
  return this;
}

ASTNode *ASTDebugHook::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.copy(expr_->getStaticAnalysis());

  return this;
}

class ASTStackFrame : public StackFrame {
public:
  ASTStackFrame(const ASTNode *ast, DynamicContext *context)
    : StackFrame(ast, context) {}

  const ASTNode *getASTNode() const { return (ASTNode*)location_; }
  const TupleNode *getTupleNode() const { return 0; }
  virtual std::string getQueryPlan() const
  {
    return PrintAST::print(getASTNode(), context_, 0);
  }
};

class ASTDebugHookResult : public ResultImpl
{
public:
  ASTDebugHookResult(const ASTNode *expr, DynamicContext *context)
    : ResultImpl(expr),
      context_(context),
      frame_(expr, context),
      parent_(0)
  {
    AutoStackFrameReset reset(context, &frame_);
    context->getDebugListener()->start(&frame_, context);
    try {
      parent_ = expr->createResult(context);
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &frame_, context);
      context->getDebugListener()->end(&frame_, context);
      throw;
    }
  }
  
  ASTDebugHookResult(const Result &contextItems, const ASTNode *expr, DynamicContext *context)
    : ResultImpl(expr),
      context_(context),
      frame_(expr, context),
      parent_(0)
  {
    AutoStackFrameReset reset(context, &frame_);
    context->getDebugListener()->start(&frame_, context);
    try {
      parent_ = expr->iterateResult(contextItems, context);
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &frame_, context);
      context->getDebugListener()->end(&frame_, context);
      throw;
    }
  }

  ~ASTDebugHookResult()
  {
    AutoStackFrameReset reset(context_, &frame_);
    context_->getDebugListener()->end(&frame_, context_);
  }
  
  Item::Ptr next(DynamicContext *context)
  {
    AutoStackFrameReset reset(context, &frame_);
    context->getDebugListener()->enter(&frame_, context);
    try {
      Item::Ptr item = parent_->next(context);
      context->getDebugListener()->exit(&frame_, context);
      return item;
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &frame_, context);
      context->getDebugListener()->exit(&frame_, context);
      throw;
    }
  }

protected:
  DynamicContext *context_;
  ASTStackFrame frame_;
  Result parent_;
};

Result ASTDebugHook::createResult(DynamicContext *context, int flags) const
{
  if(!context->getDebugListener())
    return expr_->createResult(context);

  if(context->getDebugListener()->doLazyEvaluation())
    return new ASTDebugHookResult(expr_, context);

  ASTStackFrame frame(expr_, context);
  AutoStackFrameReset reset(context, &frame);

  context->getDebugListener()->start(&frame, context);
  context->getDebugListener()->enter(&frame, context);
  Sequence result(context->getMemoryManager());
  try {
    result = expr_->createResult(context)->toSequence(context);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &frame, context);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
    throw;
  }

  return result;
}

Result ASTDebugHook::iterateResult(const Result &contextItems, DynamicContext *context) const
{
  if(!context->getDebugListener())
    return expr_->iterateResult(contextItems, context);

  if(context->getDebugListener()->doLazyEvaluation() &&
     context->getDebugListener()->doFocusOptimizations())
    return new ASTDebugHookResult(contextItems, expr_, context);

  return ASTNodeImpl::iterateResult(contextItems, context);
}

EventGenerator::Ptr ASTDebugHook::generateEvents(EventHandler *events, DynamicContext *context,
                                             bool preserveNS, bool preserveType) const
{
  if(!context->getDebugListener())
    return expr_->generateEvents(events, context, preserveNS, preserveType);

  ASTStackFrame frame(expr_, context);
  AutoStackFrameReset reset(context, &frame);

  context->getDebugListener()->start(&frame, context);
  context->getDebugListener()->enter(&frame, context);
  try {
    expr_->generateAndTailCall(events, context, preserveNS, preserveType);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &frame, context);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
    throw;
  }

  return 0;
}

PendingUpdateList ASTDebugHook::createUpdateList(DynamicContext *context) const
{
  if(!context->getDebugListener())
    return expr_->createUpdateList(context);

  ASTStackFrame frame(expr_, context);
  AutoStackFrameReset reset(context, &frame);

  context->getDebugListener()->start(&frame, context);
  context->getDebugListener()->enter(&frame, context);
  PendingUpdateList pul;
  try {
    pul = expr_->createUpdateList(context);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &frame, context);
    context->getDebugListener()->exit(&frame, context);
    context->getDebugListener()->end(&frame, context);
    throw;
  }

  return pul;
}

