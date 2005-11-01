/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionSum.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/ast/DataItemSequence.hpp>
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

FunctionSum::FunctionSum(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : AggregateFunction(name, minArgs, maxArgs, "anyAtomicType*,anyAtomicType?", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Sequence FunctionSum::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Sequence sequence(memMgr);
  try {
    sequence = validateSequence(getParamNumber(1,context,DataItem::UNORDERED), context);
  } catch (IllegalArgumentException &e) {
    DSLthrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));
  }

  if(sequence.isEmpty())
    if(getNumArgs() == 1)
      return Sequence(context->getPathanFactory()->createDouble(0.0, context), memMgr);
    else
      return getParamNumber(2,context);
  if(sequence.getLength()==1 && isNumericNaN(sequence.first()))
    return sequence;

  // check for types that don't support addition
  const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )sequence.first();
  if (!atom->isNumericValue() && 
      !context->isTypeOrDerivedFromType(atom->getTypeURI(), atom->getTypeName(), FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION) &&
      !context->isTypeOrDerivedFromType(atom->getTypeURI(), atom->getTypeName(), FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_YEARMONTHDURATION))
    DSLthrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));

  Sequence::iterator i = sequence.begin();
  Item::Ptr sum = *i;
  ++i;

  for(; i != sequence.end(); ++i) {
    try {
      sum = Plus::plus(*i, sum, context);
    } catch (IllegalArgumentException &e) {
      DSLthrow(IllegalArgumentException, X("FunctionSum::collapseTreeInternal"), X("Invalid argument to fn:sum() function"));
    }  
  } 

	return Sequence(sum, memMgr);
}
