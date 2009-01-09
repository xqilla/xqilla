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
#include <xqilla/functions/FunctionPower.hpp>

#include <xqilla/items/Numeric.hpp>
#include <xqilla/context/DynamicContext.hpp>

XERCES_CPP_NAMESPACE_USE

const XMLCh FunctionPower::name[] = {
  chLatin_p, chLatin_o, chLatin_w, chLatin_e,  chLatin_r,  chNull 
};
const unsigned int FunctionPower::minArgs = 2;
const unsigned int FunctionPower::maxArgs = 2;

/*
 * math:power($arg as numeric?, $arg as numeric?) as numeric?
 */
FunctionPower::FunctionPower(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : EXSLTMathFunction(name, minArgs, maxArgs, "anyAtomicType?, anyAtomicType?", args, memMgr)
{
}

ASTNode *FunctionPower::staticTypingImpl(StaticContext *context)
{
  _src.clear();
  _src.getStaticType() = StaticType(StaticType::NUMERIC_TYPE, 0, 1);
  return NumericFunction::staticTypingImpl(context);
}

Result FunctionPower::createResult(DynamicContext* context, int flags) const
{
  Numeric::Ptr base = getNumericParam(1, context);
  if(base.isNull()) return 0;
  Numeric::Ptr pow = getNumericParam(2, context);
  if(pow.isNull()) return 0;
  return (Item::Ptr)base->power(pow, context);
}
