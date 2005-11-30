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

#include <xqilla/functions/FunctionRemove.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

const XMLCh FunctionRemove::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_v, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionRemove::minArgs = 2;
const unsigned int FunctionRemove::maxArgs = 2;

/**
 * fn:remove($target as item()*, $position as xs:integer) as item()*
 */

FunctionRemove::FunctionRemove(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*, integer", args, memMgr)
{
  // TBD - could do better here - jpcs
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE | StaticType::NODE_TYPE | StaticType::OTHER_TYPE;
}

Result FunctionRemove::createResult(DynamicContext* context, int flags) const
{
  return new RemoveResult(this, flags, context);
}

FunctionRemove::RemoveResult::RemoveResult(const FunctionRemove *func, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _func(func),
    _position(0),
    _one(0),
    _i(0),
    _removeDone(false),
    _target(0)
{
}

Item::Ptr FunctionRemove::RemoveResult::next(DynamicContext *context)
{
  if(_position == NULLRCP) {
    _position = ((const ATDecimalOrDerived::Ptr )_func->getParamNumber(2, context).next(context));
    _one = context->getItemFactory()->createInteger(1, context);
    _i = _one;
    _target = _func->getParamNumber(1, context);
  }

  if(!_removeDone) {
    if(_position->equals((const AnyAtomicType::Ptr)_i, context)) {
      _target.next(context);
      _removeDone = true;
    }
    else {
      _i = _i->add(_one, context);
    }
  }

  return _target.next(context);
}

std::string FunctionRemove::RemoveResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<remove/>" << std::endl;

  return oss.str();
}
