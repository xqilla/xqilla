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
#include "ResultBufferImpl.hpp"

ResultBufferImpl::ResultBufferImpl(const Result &result)
  : _refCount(0),
    _result(result),
    _done(false)
{
  // Do nothing
}

ResultBufferImpl::~ResultBufferImpl()
{
  // Do nothing
}

void ResultBufferImpl::incrementRefCount()
{
  ++_refCount;
}

void ResultBufferImpl::decrementRefCount()
{
  if(--_refCount == 0) {
    delete this;
  }
}

const Item::Ptr ResultBufferImpl::item(unsigned int index, DynamicContext *context)
{
  while(!_done && index >= _items.size()) {
    const Item::Ptr item = _result.next(context);
    if(item == NULLRCP) {
      _done = true;
    }
    else {
      _items.push_back(item);
    }
  }

  if(index >= _items.size()) {
    return 0;
  }
  else {
    return _items[index];
  }
}
