/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
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
