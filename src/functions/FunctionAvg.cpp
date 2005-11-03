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
#include <xqilla/context/XQillaFactory.hpp>

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
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Sequence FunctionAvg::collapseTreeInternal(DynamicContext* context, int flags) const
{
  Sequence sequence(context->getMemoryManager());
  try {
    sequence = validateSequence(getParamNumber(1,context), context);
  } catch (IllegalArgumentException &e) {
    DSLthrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function"));
  }
	if(sequence.isEmpty())
		return Sequence(context->getMemoryManager());

  // check for types that don't support addition and division by an integer
  const AnyAtomicType::Ptr atom = (const AnyAtomicType::Ptr )sequence.first();
  if (!atom->isNumericValue() && 
      !context->isTypeOrDerivedFromType(atom->getTypeURI(), atom->getTypeName(), FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_DAYTIMEDURATION) &&
      !context->isTypeOrDerivedFromType(atom->getTypeURI(), atom->getTypeName(), FunctionConstructor::XMLChXPath2DatatypesURI, ATDurationOrDerived::fgDT_YEARMONTHDURATION))
    DSLthrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function"));

  FunctionSum fnSum(_args, context->getMemoryManager());
  Result sum = 0;
  try {
    sum = fnSum.collapseTree(context);
  } catch (IllegalArgumentException &e) {
    DSLthrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function"));
  }

  VectorOfASTNodes divArgs = VectorOfASTNodes(XQillaAllocator<ASTNode*>(context->getMemoryManager()));
  XQSequence seq1(sum, context, context->getMemoryManager());
  divArgs.push_back(&seq1);

  XQSequence seq2(context->getXQillaFactory()->createDecimal((long)sequence.getLength(), context),
                        context, context->getMemoryManager());
  divArgs.push_back(&seq2);

  Divide divide(divArgs, context->getMemoryManager());
  Sequence avg(context->getMemoryManager()); 
  try {
    avg = divide.collapseTree(context);
  } catch (XPath2ErrorException &e) {
    DSLthrow(IllegalArgumentException, X("FunctionAvg::collapseTreeInternal()"), X("Invalid argument to fn:avg() function"));
  }
	return avg;
}
