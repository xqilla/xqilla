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

EmptyResult Result::_empty;

Result::Result(const Sequence &seq)
  : _impl(new SequenceResult(seq))
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
