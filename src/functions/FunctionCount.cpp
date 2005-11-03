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

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionCount.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/ItemFactory.hpp>

const XMLCh FunctionCount::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionCount::minArgs = 1;
const unsigned int FunctionCount::maxArgs = 1;

/**
 * fn:count($arg as item()*) as xs:integer
**/

FunctionCount::FunctionCount(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE;
}

Sequence FunctionCount::collapseTreeInternal(DynamicContext* context, int flags) const
{
  Sequence arg = getParamNumber(1,context,ASTNode::UNORDERED);
	return Sequence(context->getItemFactory()->createInteger((long)arg.getLength(), context), context->getMemoryManager());
}

