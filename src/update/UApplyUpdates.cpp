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

#include <xqilla/update/UApplyUpdates.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/UpdateFactory.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

UApplyUpdates::UApplyUpdates(ASTNode *expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    expr_(expr)
{
  setType(ASTNode::UAPPLY_UPDATES);
}

ASTNode* UApplyUpdates::staticResolution(StaticContext *context)
{
  expr_ = expr_->staticResolution(context);
  return this;
}

ASTNode *UApplyUpdates::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticResolutionContext());

  if(!expr_->getStaticResolutionContext().isUpdating()) {
    return expr_;
  }

  _src.updating(false);
  return this;
}

Sequence UApplyUpdates::createSequence(DynamicContext* context, int flags) const
{
  AutoDelete<UpdateFactory> ufactory(context->createUpdateFactory());
  ufactory->applyUpdates(expr_->createUpdateList(context), context);
  return Sequence(context->getMemoryManager());
}

