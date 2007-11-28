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

#include "../config/xqilla_config.h"
#include <xqilla/runtime/ClosureResult.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>

using namespace std;

ClosureResult::ClosureResult(const ASTNode *ast, DynamicContext *context, const VariableStore *sourceScope)
  : ResultImpl(ast),
    varStore_(context->getMemoryManager()),
    result_(0)
{
  if(sourceScope == 0) sourceScope = context->getVariableStore();

  // TBD copy context item? - jpcs

  // Copy the variables we need into our local storage
  varStore_.cacheVariableStore(ast->getStaticAnalysis(), sourceScope);

  try {
    AutoVariableStoreReset reset(context, &varStore_);
    result_ = ast->createResult(context);
  }
  catch(...) {
    varStore_.clear();
    throw;
  }
}

Item::Ptr ClosureResult::next(DynamicContext *context)
{
  AutoVariableStoreReset reset(context, &varStore_);
  return result_->next(context);
}
