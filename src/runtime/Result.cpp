/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
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
#include <assert.h>
#include <sstream>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/ResultImpl.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/schema/SequenceType.hpp>

EmptyResult Result::_empty(0);

Result::Result(const Item::Ptr &item)
  : _impl(new SequenceResult(0, item))
{
  _impl->incrementRefCount();
}

Result::Result(const Sequence &seq)
  : _impl(new SequenceResult(0, seq))
{
  _impl->incrementRefCount();
}

Result::Result(ResultImpl *impl)
  : _impl(impl)
{
  if(_impl) _impl->incrementRefCount();
}

Result::Result(const Result &o)
  : _impl(o._impl)
{
  if(_impl) _impl->incrementRefCount();
}

Result::~Result()
{
  if(_impl) _impl->decrementRefCount();
}

EmptyResult* Result::getEmpty() const
{
  return &_empty;
}

