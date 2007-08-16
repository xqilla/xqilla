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
