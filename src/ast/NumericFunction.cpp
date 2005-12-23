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
