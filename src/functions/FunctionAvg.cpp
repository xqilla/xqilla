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
#include <xqilla/functions/FunctionAvg.hpp>
#include <xqilla/functions/FunctionSum.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/context/ItemFactory.hpp>

const XMLCh FunctionAvg::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_v, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionAvg::minArgs = 1;
const unsigned int FunctionAvg::maxArgs = 1;

/**
 * fn:avg($arg as xdt:anyAtomicType*) as xdt:anyAtomicType?
**/

FunctionAvg::FunctionAvg(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : AggregateFunction(name, minArgs, maxArgs, "anyAtomicType*", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE | StaticType::OTHER_TYPE;
}

Sequence FunctionAvg::collapseTreeInternal(DynamicContext* context, int flags) const
{
  Sequence sequence(context->getMemoryManager());
  try {
    sequence = validateSequence(getParamNumber(1,context), context);
  } catch (IllegalArgumentException &e) {
    XQThrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function [err:FORG0006]."));
  }

  if(sequence.isEmpty())
    return Sequence(context->getMemoryManager());

  // check for types that don't support addition and division by an integer
  const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )sequence.first();
  if(!atom->isNumericValue() && 
     atom->getPrimitiveTypeIndex() != AnyAtomicType::DAY_TIME_DURATION &&
     atom->getPrimitiveTypeIndex() != AnyAtomicType::YEAR_MONTH_DURATION)
    XQThrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function [err:FORG0006]."));

  if(sequence.getLength() == 1)
    return sequence;

  AnyAtomicType::Ptr sum;
  try {
    sum = (AnyAtomicType::Ptr)FunctionSum::sum(sequence, context);
  }
  catch(IllegalArgumentException &) {
    XQThrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function [err:FORG0006]."));
  }

  Numeric::Ptr count = context->getItemFactory()->createDecimal((long)sequence.getLength(), context);

  if(sum->isNumericValue()) {
    return Sequence(((Numeric*)sum.get())->divide(count, context), context->getMemoryManager());
  }
  else {
    // It must be a duration type
    return Sequence(((ATDurationOrDerived*)sum.get())->divide(count, context), context->getMemoryManager());
  }
}
