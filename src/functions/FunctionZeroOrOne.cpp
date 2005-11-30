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

#include <xqilla/functions/FunctionZeroOrOne.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>

const XMLCh FunctionZeroOrOne::name[] = { 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionZeroOrOne::minArgs = 1;
const unsigned int FunctionZeroOrOne::maxArgs = 1;

/*
 * fn:zero-or-one($arg as item()*) as item()?
 */

FunctionZeroOrOne::FunctionZeroOrOne(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE | StaticType::NODE_TYPE | StaticType::OTHER_TYPE;
}

Result FunctionZeroOrOne::createResult(DynamicContext* context, int flags) const
{
  return new ZeroOrOneResult(this, flags, context);
}

FunctionZeroOrOne::ZeroOrOneResult::ZeroOrOneResult(const FunctionZeroOrOne *func, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _func(func),
    _arg(0),
    _argNo(0)
{
}

Item::Ptr FunctionZeroOrOne::ZeroOrOneResult::next(DynamicContext *context)
{
  if(_arg.isNull()) {
    _arg = _func->getParamNumber(1, context, ASTNode::RETURN_TWO|(_flags & ~ASTNode::RETURN_ONE));
  }

  const Item::Ptr result = _arg.next(context);
  ++_argNo;

  if(_argNo == 2 && result != NULLRCP) {
    XQThrow(FunctionException, X("FunctionZeroOrOne::ZeroOrOneResult::next"),X("fn:zero-or-one called with a sequence containing more than one item [err:FORG0003]"));
  }

  return result;
}

std::string FunctionZeroOrOne::ZeroOrOneResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<zeroorone/>" << std::endl;

  return oss.str();
}
