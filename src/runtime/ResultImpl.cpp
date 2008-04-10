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
#include <sstream>

#include <xqilla/runtime/ResultImpl.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/runtime/ResultBufferImpl.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

ResultImpl::ResultImpl(const LocationInfo *o)
  : resultPointer_(0)
{
  setLocationInfo(o);
}

static inline bool getEffectiveBooleanValueInternal(const Item::Ptr &first, const Item::Ptr &second, DynamicContext* context, const LocationInfo *info)
{
  // If its operand is a singleton value ...
  if(second.isNull() && first->isAtomicValue()) {
    const AnyAtomicType::Ptr atom=first;
    // ... of type xs:boolean or derived from xs:boolean, fn:boolean returns the value of its operand unchanged.
    if(atom->getPrimitiveTypeIndex() == AnyAtomicType::BOOLEAN)
        return ((const ATBooleanOrDerived::Ptr)atom)->isTrue();

    // ... of type xs:string, xdt:untypedAtomic, or a type derived from one of these, fn:boolean returns false 
    // if the operand value has zero length; otherwise it returns true.
    if((atom->getPrimitiveTypeIndex() == AnyAtomicType::STRING || 
        atom->getPrimitiveTypeIndex() == AnyAtomicType::ANY_URI || 
        atom->getPrimitiveTypeIndex() == AnyAtomicType::UNTYPED_ATOMIC))
      return !XPath2Utils::equals(atom->asString(context), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString);

    // ... of any numeric type or derived from a numeric type, fn:boolean returns false if the operand value is 
    // NaN or is numerically equal to zero; otherwise it returns true.
    if(atom->isNumericValue()) {
      const Numeric::Ptr number=atom;
      return (!number->isZero() && !number->isNaN());
    }
  }

  // In all other cases, fn:boolean raises a type error. 
  XQThrow3(XPath2TypeMatchException,X("ResultImpl::getEffectiveBooleanValue"), X("Effective Boolean Value cannot be extracted from this type [err:FORG0006]"), info);
  return true;
}

bool ResultImpl::getEffectiveBooleanValue(DynamicContext* context, const LocationInfo *info)
{
  // Control our own scoped pointer
  Result me(this);

  const Item::Ptr first = me->next(context);
  if(first.isNull()) return false;
  if(first->isNode()) return true;
  return getEffectiveBooleanValueInternal(first, me->next(context), context, info);
}

bool ResultImpl::getEffectiveBooleanValue(const Item::Ptr &first, const Item::Ptr &second, DynamicContext* context, const LocationInfo *info)
{
  // From $ 15.1.4 of the F&O specs:
  // The effective boolean value of an operand is defined as follows:
  //
  // If its operand is an empty sequence, fn:boolean returns false.
  if(first.isNull()) {
    return false;
  }

  // If its operand is a sequence whose first item is a node, fn:boolean returns true.
  if(first->isNode())
    return true;

  return getEffectiveBooleanValueInternal(first, second, context, info);
}

Item::Ptr ResultImpl::next(DynamicContext *context)
{
  // Store resultPointer_ locally, as "this" may get deleted
  Result &resultPointer = *resultPointer_;

  Item::Ptr item;
  do {
    item = resultPointer->nextOrTail(resultPointer, context);
  } while(item.isNull() && !resultPointer.isNull());
  
  return item;
}

Item::Ptr ResultImpl::nextOrTail(Result &tail, DynamicContext *context)
{
  Item::Ptr item = next(context);
  if(item.isNull()) {
    tail = 0;
  }
  return item;
}

Sequence ResultImpl::toSequence(DynamicContext *context)
{
  // Control our own scoped pointer
  Result me(this);

  Sequence result(context->getMemoryManager());

  Item::Ptr item = 0;
  while((item = me->next(context)) != NULLRCP) {
    result.addItem(item);
  }

  return result;
}

ResultBufferImpl *ResultImpl::toResultBuffer(unsigned int readCount)
{
  // Control our own scoped pointer
  Result me(this);

  return new ResultBufferImpl(me, readCount);
}

std::string ResultImpl::getIndent(int indent)
{
  std::ostringstream oss;

  for(int i = 0; i < indent; ++i) {
    oss << "  ";
  }

  return oss.str();
}
