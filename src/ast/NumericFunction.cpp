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
#include <xqilla/ast/NumericFunction.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

NumericFunction::NumericFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name,argsFrom, argsTo, paramDecl, args, memMgr) 
{ 
}

Result NumericFunction::getParamNumber(unsigned int number, DynamicContext* context, int flags) const 
{
	return getParamNumber(number,number,context,flags);
}

Result NumericFunction::getParamNumber(unsigned int paramNumber, unsigned int signatureNumber, DynamicContext* context, int flags) const
{
  Sequence arg = XQFunction::getParamNumber(paramNumber, signatureNumber, context, flags).toSequence(context);

  if (arg.isEmpty()) {
    return arg;
  } else  if (arg.first()->isAtomicValue() && ((const AnyAtomicType::Ptr)arg.first())->isNumericValue()) {
    return arg;
  } else {
    DSLthrow(FunctionException,X("NumericFunction::getParamNumber"), X("Non-numeric argument in numeric function."));
  }
}

bool NumericFunction::isNaN(const Numeric::Ptr &number) const
{
  const XMLCh* numType=number->getPrimitiveTypeName();
  if(XPath2Utils::equals(numType,XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_FLOAT) &&
      ((const ATFloatOrDerived::Ptr)number)->isNaN())
     return true;
  if(XPath2Utils::equals(numType,XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE) &&
      ((const ATDoubleOrDerived::Ptr)number)->isNaN())
     return true;
  return false;
}

bool NumericFunction::isINF(const Numeric::Ptr &number) const
{
  const XMLCh* numType=number->getPrimitiveTypeName();
  if(XPath2Utils::equals(numType,XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_FLOAT) &&
      ((const ATFloatOrDerived::Ptr)number)->isInfinite())
     return true;
  if(XPath2Utils::equals(numType,XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE) &&
      ((const ATDoubleOrDerived::Ptr)number)->isInfinite())
     return true;
  return false;
}
