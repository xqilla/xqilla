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
#include <xqilla/functions/FunctionData.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/context/DynamicContext.hpp>

const XMLCh FunctionData::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionData::minArgs = 1;
const unsigned int FunctionData::maxArgs = 1;

/*
 * fn:data($arg as item()*) as xdt:anyAtomicType*
 */

FunctionData::FunctionData(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
}

ASTNode* FunctionData::staticResolution(StaticContext *context)
{
  bool allConstant = true;
  for(VectorOfASTNodes::iterator i = _args.begin(); i != _args.end(); ++i) {
    *i = (*i)->staticResolution(context);
    _src.getStaticType() = (*i)->getStaticResolutionContext().getStaticType();
    _src.add((*i)->getStaticResolutionContext());
    if(!(*i)->isConstant()) {
      allConstant = false;
    }
    break; // should only be one
  }

  if(_src.getStaticType().flags & StaticResolutionContext::NODE_TYPE) {
    _src.getStaticType().flags &= ~StaticResolutionContext::NODE_TYPE;
    _src.getStaticType().flags |= StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
  }
  else {
    // If the parameter has no nodes, this function does nothing
    _args.front()->addPredicates(getPredicates());
    return _args.front();
  }

  if(allConstant) {
    return constantFold(context);
  }
  else {
    return resolvePredicates(context);
  }
}

Result FunctionData::createResult(DynamicContext* context, int flags) const
{
  return getParamNumber(1, context, flags).atomize(context);
}
















