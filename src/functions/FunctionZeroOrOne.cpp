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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/pathan_config.h"
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
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::NODE_TYPE | StaticResolutionContext::OTHER_TYPE;
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
    DSLthrow(FunctionException, X("FunctionZeroOrOne::ZeroOrOneResult::next"),X("fn:zero-or-one called with a sequence containing more than one item [err:FORG0003]"));
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
