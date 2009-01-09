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
 * $Id: FunctionAbs.cpp 531 2008-04-10 23:23:07Z jpcs $
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionLog.hpp>

#include <xqilla/items/Numeric.hpp>
#include <xqilla/context/DynamicContext.hpp>

const XMLCh FunctionLog::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionLog::minArgs = 1;
const unsigned int FunctionLog::maxArgs = 1;

/*
 * math:log($arg as numeric?) as numeric?
 */
FunctionLog::FunctionLog(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : EXSLTMathFunction(name, minArgs, maxArgs, "anyAtomicType?", args, memMgr)
{
}

ASTNode *FunctionLog::staticTypingImpl(StaticContext *context)
{
  _src.clear();
  _src.getStaticType() = StaticType(StaticType::NUMERIC_TYPE, 0, 1);
  return NumericFunction::staticTypingImpl(context);
}

Result FunctionLog::createResult(DynamicContext* context, int flags) const
{
  Numeric::Ptr num = getNumericParam(1, context);
  if(num.isNull()) return 0;
  return (Item::Ptr)num->log(context);
}
