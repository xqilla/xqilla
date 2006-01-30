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
#include <xqilla/ast/NumericFunction.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATFloatOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

NumericFunction::NumericFunction(const XMLCh* name, unsigned int argsFrom, unsigned int argsTo, const char* paramDecl, const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name,argsFrom, argsTo, paramDecl, args, memMgr) 
{ 
}

Numeric::Ptr NumericFunction::getNumericParam(unsigned int number, DynamicContext *context, int flags) const
{
  Result arg = XQFunction::getParamNumber(number, context, flags);
  Item::Ptr item = arg->next(context);

  if(item.isNull()) {
    return 0;
  }
  else if(item->isAtomicValue() && ((const AnyAtomicType *)item.get())->isNumericValue()) {
    return (const Numeric *)item.get();
  } else {
    XQThrow(FunctionException,X("NumericFunction::getParamNumber"), X("Non-numeric argument in numeric function [err:XPTY0004]"));
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
