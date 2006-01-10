/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>
#include <xqilla/runtime/LazySequenceResult.hpp>
#include <xqilla/context/DynamicContext.hpp>

LazySequenceResult::LazySequenceResult(DynamicContext *context)
  : ResultImpl(context),
    toInit_(true),
    seq_(context->getMemoryManager())
{
}

Item::Ptr LazySequenceResult::next(DynamicContext *context)
{
  if(toInit_) {
    toInit_ = false;
    getResult(seq_, context);
    it_ = seq_.begin();
  }

  if(it_ == seq_.end()) {
    return 0;
  }
  else {
    return *(it_++);
  }
}

Sequence LazySequenceResult::toSequence(DynamicContext *context)
{
  if(toInit_) {
    toInit_ = false;
    if(context == 0) context = context_;
    getResult(seq_, context);
    it_ = seq_.begin();
  }

  return seq_;
}
