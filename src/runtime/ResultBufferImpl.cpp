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
