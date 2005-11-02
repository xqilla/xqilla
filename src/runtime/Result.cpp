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
#include <xqilla/runtime/SortIntoDocumentOrderResult.hpp>
#include <xqilla/runtime/AtomizeResult.hpp>

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

bool Result::isNull() const
{
  return _impl == 0;
}

Result Result::convertFunctionArg(const SequenceType* sequenceType, const StaticResolutionContext::StaticType &stype, DynamicContext* context)
{
  return sequenceType->convertFunctionArg(*this, stype, context);
}

const XMLCh* Result::castAsSingleString(DynamicContext* context)
{
	return next(context)->asString(context);
}

Result Result::matches(const SequenceType* sequenceType, DynamicContext* context)
{
  return sequenceType->matches(*this, context);
}

Result Result::atomize(DynamicContext* context)
{
  return new AtomizeResult(*this, context);
}

bool Result::getEffectiveBooleanValue(DynamicContext* context)
{
  if(_impl) {
    return _impl->getEffectiveBooleanValue(context);
  }
  else {
    return false;
  }
}

Result Result::sortIntoDocumentOrder(DynamicContext *context)
{
  if(_impl) {
    return new SortIntoDocumentOrderResult(*this, context);
  }
  else {
    return 0;
  }  
}

Sequence Result::toSequence(DynamicContext *context)
{
  if(_impl) {
    return _impl->toSequence(context);
  }
  else {
    return Sequence(context->getMemoryManager());
  }
}

Result::operator Sequence()
{
  assert(_impl != 0);
  return _impl->toSequence();
}

std::string Result::asString(DynamicContext *context, int indent) const
{
  if(_impl) {
    return _impl->asString(context, indent);
  }
  else {
    std::ostringstream oss;
    oss << ResultImpl::getIndent(indent);
    oss << "<null/>" << std::endl;
    return oss.str();
  }
}
