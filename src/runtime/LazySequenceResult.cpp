/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/pathan_config.h"
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
