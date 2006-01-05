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
#include <xqilla/functions/FunctionSum.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/exceptions/IllegalArgumentException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/mapm/m_apm.h>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

const XMLCh FunctionSum::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionSum::minArgs = 1;
const unsigned int FunctionSum::maxArgs = 2;

/**
 * fn:sum($arg as xdt:anyAtomicType*) as xdt:anyAtomicType
 * fn:sum($arg as xdt:anyAtomicType*, $zero as xdt:anyAtomicType?) as xdt:anyAtomicType?
**/

FunctionSum::FunctionSum(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : AggregateFunction(name, minArgs, maxArgs, "anyAtomicType*,anyAtomicType?", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE | StaticType::OTHER_TYPE;
}

Sequence FunctionSum::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Sequence sequence(memMgr);
  try {
    sequence = validateSequence(getParamNumber(1,context,ASTNode::UNORDERED), context);
  } catch (IllegalArgumentException &e) {
    XQThrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));
  }

  if(sequence.isEmpty())
    if(getNumArgs() == 1)
      return Sequence(context->getItemFactory()->createDouble(0.0, context), memMgr);
    else
      return getParamNumber(2,context);

  // check for types that don't support addition
  const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )sequence.first();
  if(!atom->isNumericValue() && 
     atom->getPrimitiveTypeIndex() != AnyAtomicType::DAY_TIME_DURATION &&
     atom->getPrimitiveTypeIndex() != AnyAtomicType::YEAR_MONTH_DURATION)
    XQThrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));

  return Sequence(sum(sequence, context), memMgr);
}

Item::Ptr FunctionSum::sum(const Sequence &sequence, DynamicContext *context)
{
  if(sequence.getLength() == 1)
    return sequence.first();

  Sequence::const_iterator i = sequence.begin();
  Item::Ptr sum = *i;
  ++i;

  for(; i != sequence.end(); ++i) {
    try {
      sum = Plus::plus(*i, sum, context);
    } catch (IllegalArgumentException &e) {
      XQThrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));
    }  
  } 

  return sum;
}
