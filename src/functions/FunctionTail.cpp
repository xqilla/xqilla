/*
 * Copyright (c) 2004, 2010,
 *     Oracle and/or its affiliates. All rights reserved.
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
 */

#include "../config/xqilla_config.h"

#include <xqilla/functions/FunctionTail.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/context/DynamicContext.hpp>

XERCES_CPP_NAMESPACE_USE;

const XMLCh FunctionTail::name[] = {
  chLatin_t, chLatin_a, chLatin_i,
  chLatin_l, chNull 
};
const unsigned int FunctionTail::minArgs = 1;
const unsigned int FunctionTail::maxArgs = 1;

/**
 * fn:tail($target as item()*) as item()*
 */

FunctionTail::FunctionTail(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
}

ASTNode* FunctionTail::staticResolution(StaticContext *context)
{
  return resolveArguments(context);
}

ASTNode *FunctionTail::staticTypingImpl(StaticContext *context)
{
  _src.clear();

  ASTNode *result = calculateSRCForArguments(context);
  if(result != this) return result;

  _src.getStaticType() = _args[0]->getStaticAnalysis().getStaticType();

  unsigned int min = _src.getStaticType().getMin();
  if(min > 0) --min;

  unsigned int max = _src.getStaticType().getMax();
  if(max > 0 && max != StaticType::UNLIMITED) --max;

  _src.getStaticType().setCardinality(min, max);

  return this;
}

Result FunctionTail::createResult(DynamicContext* context, int flags) const
{
  Result result = getParamNumber(1, context);
  result->next(context);
  return result;
}

