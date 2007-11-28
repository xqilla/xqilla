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

#include <xqilla/update/UApplyUpdates.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/UpdateFactory.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

UApplyUpdates::UApplyUpdates(ASTNode *expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    expr_(expr),
    valMode_(DocumentCache::VALIDATION_SKIP)
{
  setType(ASTNode::UAPPLY_UPDATES);
}

ASTNode* UApplyUpdates::staticResolution(StaticContext *context)
{
  expr_ = expr_->staticResolution(context);
  valMode_ = context->getRevalidationMode();
  return this;
}

ASTNode *UApplyUpdates::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticAnalysis());

  if(!expr_->getStaticAnalysis().isUpdating()) {
    return expr_;
  }

  _src.updating(false);
  return this;
}

Sequence UApplyUpdates::createSequence(DynamicContext* context, int flags) const
{
  AutoDelete<UpdateFactory> ufactory(context->createUpdateFactory());
  ufactory->applyUpdates(expr_->createUpdateList(context), context, valMode_);
  return Sequence(context->getMemoryManager());
}

