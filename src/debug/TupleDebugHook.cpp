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
 * $Id: TupleDebugHook.cpp 531 2008-04-10 23:23:07Z jpcs $
 */

#include <xqilla/debug/TupleDebugHook.hpp>
#include <xqilla/debug/DebugListener.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XQException.hpp>

XERCES_CPP_NAMESPACE_USE;

TupleDebugHook::TupleDebugHook(TupleNode *parent)
  : TupleNode(DEBUG_HOOK, parent)
{
  setLocationInfo(parent);
}

TupleNode *TupleDebugHook::staticResolution(StaticContext *context)
{
  parent_ = parent_->staticResolution(context);
  return this;
}

TupleNode *TupleDebugHook::staticTypingSetup(unsigned int &min, unsigned int &max, StaticContext *context)
{
  parent_ = parent_->staticTypingSetup(min, max, context);
  return this;
}

TupleNode *TupleDebugHook::staticTypingTeardown(StaticContext *context, StaticAnalysis &usedSrc)
{
  parent_ = parent_->staticTypingTeardown(context, usedSrc);
  return this;
}

class TupleNodeInfo : public DebugListener::Info {
public:
  TupleNodeInfo(const TupleNode *ast)
    : tuple_(ast) {}

  const ASTNode *getASTNode() const { return 0; }
  const TupleNode *getTupleNode() const { return tuple_; }
  const LocationInfo *getLocationInfo() const { return tuple_; }

  const TupleNode *tuple_;
};

class TupleDebugHookResult : public TupleResult
{
public:
  TupleDebugHookResult(const TupleNode *expr, DynamicContext *context)
    : TupleResult(expr),
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

  ~TupleDebugHookResult()
  {
    context_->getDebugListener()->end(&info_, context_);
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
    context->getDebugListener()->enter(&info_, context);
    try {
      bool result = parent_->next(context);
      context->getDebugListener()->exit(&info_, context);
      return result;
    }
    catch(XQException &ex) {
      context->getDebugListener()->error(ex, &info_, context);
      context->getDebugListener()->exit(&info_, context);
      throw;
    }
  }

private:
  DynamicContext *context_;
  TupleNodeInfo info_;
  TupleResult::Ptr parent_;
};

TupleResult::Ptr TupleDebugHook::createResult(DynamicContext* context) const
{
  return new TupleDebugHookResult(parent_, context);
}

