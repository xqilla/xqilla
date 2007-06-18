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

#include <xqilla/update/UDelete.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

UDelete::UDelete(ASTNode *expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    expr_(expr)
{
  setType(ASTNode::UDELETE);
}

ASTNode *UDelete::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *seqType = new (mm) SequenceType(new (mm) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE),
                                                SequenceType::STAR);
  seqType->setLocationInfo(this);

  // TBD The error here should be [err:XUTY0007] - jpcs
  expr_ = new (mm) XQTreatAs(expr_, seqType, mm);
  expr_->setLocationInfo(this);

  expr_ = expr_->staticResolution(context);
  return this;
}

ASTNode *UDelete::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticResolutionContext());

  if(expr_->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UDelete::staticTyping"),
            X("It is a static error for the target expression of a delete expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.updating(true);
  return this;
}

PendingUpdateList UDelete::createUpdateList(DynamicContext *context) const
{
  PendingUpdateList pul;

  Result targets = expr_->createResult(context);
  Item::Ptr item;
  while((item = targets->next(context)).notNull()) {
    pul.addUpdate(PendingUpdate(PendingUpdate::PUDELETE, (Node*)item.get(), this));
  }

  return pul;
}

