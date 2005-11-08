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
#include <sstream>

#include <xqilla/functions/FunctionSubsequence.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

const XMLCh FunctionSubsequence::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_b, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_q, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionSubsequence::minArgs = 2;
const unsigned int FunctionSubsequence::maxArgs = 3;

/**
 * fn:subsequence($sourceSeq as item()*, $startingLoc as xs:double) as item()*
 * fn:subsequence($sourceSeq as item()*, $startingLoc as xs:double, $length as xs:double) as item()*
**/

FunctionSubsequence::FunctionSubsequence(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*, double, double", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::NODE_TYPE | StaticResolutionContext::OTHER_TYPE;
}

Result FunctionSubsequence::createResult(DynamicContext* context, int flags) const
{
  return new SubsequenceResult(this, flags, context);
}

FunctionSubsequence::SubsequenceResult::SubsequenceResult(const FunctionSubsequence *func, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _func(func),
    _length(0),
    _one(0),
    _i(0),
    _source(0)
{
}

Item::Ptr FunctionSubsequence::SubsequenceResult::next(DynamicContext *context)
{
  if(_one == NULLRCP) {
    _one = context->getItemFactory()->createDouble(1, context);
    _source = _func->getParamNumber(1, context);
    if(_func->getNumArgs()>2) {
      _length = ((const Numeric::Ptr )_func->getParamNumber(3, context).next(context))->round(context);
    }

    _i = _one;
    const Numeric::Ptr position = ((const Numeric::Ptr )_func->getParamNumber(2, context).next(context))->round(context);
    while(_i->lessThan(position, context) && _source.next(context) != NULLRCP) {
      _i = _i->add(_one, context);
    }
    _i = _one;
  }

  if(_length != NULLRCP && _i->greaterThan(_length, context)) {
    return 0;
  }

  _i = _i->add(_one, context);
  return _source.next(context);
}

std::string FunctionSubsequence::SubsequenceResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<subsequence/>" << std::endl;

  return oss.str();
}
