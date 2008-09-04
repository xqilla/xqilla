/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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

#include <xqilla/ast/XQInlineFunction.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/runtime/SingleResult.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

#include "../items/impl/FunctionRefImpl.hpp"

XERCES_CPP_NAMESPACE_USE;
using namespace std;

XQInlineFunction::XQInlineFunction(XQUserFunction *func, XPath2MemoryManager *mm)
  : ASTNodeImpl(INLINE_FUNCTION, mm),
    func_(func),
    instance_(0)
{
}

XQInlineFunction::XQInlineFunction(XQUserFunction *func, ASTNode *instance, XPath2MemoryManager *mm)
  : ASTNodeImpl(INLINE_FUNCTION, mm),
    func_(func),
    instance_(instance)
{
}

ASTNode *XQInlineFunction::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  func_->staticResolutionStage1(context);

  size_t numArgs = func_->getArgumentSpecs() ? func_->getArgumentSpecs()->size() : 0;
  instance_ = FunctionRefImpl::createInstance(func_, numArgs, mm, this);
  instance_ = instance_->staticResolution(context);

  func_->staticResolutionStage2(context);

  return this;
}

ASTNode *XQInlineFunction::staticTyping(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  _src.clear();

  func_->staticTyping(context);
  _src.addExceptContextFlags(func_->getBodyStaticAnalysis());

  StaticAnalysis instanceVarSrc(mm);
  instanceVarSrc.getStaticType() = StaticType(StaticType::ITEM_TYPE, 0, StaticType::UNLIMITED);

  VariableTypeStore *varStore = context->getVariableTypeStore();
  varStore->addLogicalBlockScope();

  size_t numArgs = func_->getArgumentSpecs() ? func_->getArgumentSpecs()->size() : 0;
  for(unsigned int i = 0; i < numArgs; ++i) {
    XMLBuffer buf(20);
    buf.set(FunctionRefImpl::argVarPrefix);
    XPath2Utils::numToBuf(i, buf);

    varStore->declareVar(0, mm->getPooledString(buf.getRawBuffer()), instanceVarSrc);
  }

  {
    AutoMessageListenerReset reset(context); // Turn off warnings
    instance_ = instance_->staticTyping(context);
  }

  varStore->removeScope();

  _src.getStaticType() = StaticType(mm, numArgs, instance_->getStaticAnalysis().getStaticType());

  return this;
}

class InlineFunctionResult : public SingleResult
{
public:
  InlineFunctionResult(const XQInlineFunction *ast)
    : SingleResult(ast),
      ast_(ast)
  {
  }

  virtual Item::Ptr getSingleResult(DynamicContext *context) const
  {
    size_t numArgs = ast_->func_->getArgumentSpecs() ? ast_->func_->getArgumentSpecs()->size() : 0;
    return new FunctionRefImpl(ast_->instance_, numArgs, ast_->func_->getBodyStaticAnalysis(), context);
  }

  string asString(DynamicContext *context, int indent) const { return ""; }

private:
  const XQInlineFunction *ast_;
};

Result XQInlineFunction::createResult(DynamicContext *context, int flags) const
{
  return new InlineFunctionResult(this);
}
