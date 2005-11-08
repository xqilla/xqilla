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
#include <xqilla/functions/FunctionReverse.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>

const XMLCh FunctionReverse::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_v,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
const unsigned int FunctionReverse::minArgs = 1;
const unsigned int FunctionReverse::maxArgs = 1;

/**
 * fn:reverse($arg as item()*) as item()*
 */

FunctionReverse::FunctionReverse(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::NODE_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Sequence FunctionReverse::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Sequence origSeq = getParamNumber(1, context).toSequence(context);
  // empty or singleton sequences are identical when reversed
  unsigned int len=origSeq.getLength();
  if(len<2)
    return origSeq;

  Sequence result(len,memMgr);
  for(Sequence::reverse_iterator i=origSeq.rbegin();i!=origSeq.rend();i++)
    result.addItem(*i);
  
  return result;
}
