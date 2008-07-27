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
#include <xqilla/debug/DebugListener.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

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

class ASTNodeInfo : public DebugListener::Info {
public:
  ASTNodeInfo(const ASTNode *ast)
    : ast_(ast) {}

  const ASTNode *getASTNode() const { return ast_; }
  const TupleNode *getTupleNode() const { return 0; }
  const LocationInfo *getLocationInfo() const { return ast_; }

  const ASTNode *ast_;
};

class ASTDebugHookResult : public ResultImpl
{
public:
  ASTDebugHookResult(const ASTNode *expr, DynamicContext *context)
    : ResultImpl(expr),
      context_(context),
      info_(expr),
      parent_(0)
  {
    context->getDebugListener()->start(&info_, context);
    try {
      parent_ = expr->createResult(context);
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &info_, context);
      context->getDebugListener()->end(&info_, context);
      throw;
    }
  }
  
  ASTDebugHookResult(const Result &contextItems, const ASTNode *expr, DynamicContext *context)
    : ResultImpl(expr),
      context_(context),
      info_(expr),
      parent_(0)
  {
    context->getDebugListener()->start(&info_, context);
    try {
      parent_ = expr->iterateResult(contextItems, context);
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &info_, context);
      context->getDebugListener()->end(&info_, context);
      throw;
    }
  }

  ~ASTDebugHookResult()
  {
    context_->getDebugListener()->end(&info_, context_);
  }
  
  Item::Ptr next(DynamicContext *context)
  {
    context->getDebugListener()->enter(&info_, context);
    try {
      Item::Ptr item = parent_->next(context);
      context->getDebugListener()->exit(&info_, context);
      return item;
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &info_, context);
      context->getDebugListener()->exit(&info_, context);
      throw;
    }
  }

protected:
  DynamicContext *context_;
  ASTNodeInfo info_;
  Result parent_;
};

Result ASTDebugHook::createResult(DynamicContext *context, int flags) const
{
  if(!context->getDebugListener())
    return expr_->createResult(context);

  if(context->getDebugListener()->doLazyEvaluation())
    return new ASTDebugHookResult(expr_, context);

  ASTNodeInfo info(expr_);
  context->getDebugListener()->start(&info, context);
  context->getDebugListener()->enter(&info, context);
  Sequence result(context->getMemoryManager());
  try {
    result = expr_->createResult(context)->toSequence(context);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &info, context);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
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

  ASTNodeInfo info(expr_);
  context->getDebugListener()->start(&info, context);
  context->getDebugListener()->enter(&info, context);
  try {
    expr_->generateAndTailCall(events, context, preserveNS, preserveType);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &info, context);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
    throw;
  }

  return 0;
}

PendingUpdateList ASTDebugHook::createUpdateList(DynamicContext *context) const
{
  if(!context->getDebugListener())
    return expr_->createUpdateList(context);

  ASTNodeInfo info(expr_);
  context->getDebugListener()->start(&info, context);
  context->getDebugListener()->enter(&info, context);
  PendingUpdateList pul;
  try {
    pul = expr_->createUpdateList(context);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
  }
  catch(XQException &ex) {
    context->getDebugListener()->error(ex, &info, context);
    context->getDebugListener()->exit(&info, context);
    context->getDebugListener()->end(&info, context);
    throw;
  }

  return pul;
}

