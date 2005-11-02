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
#include <xqilla/functions/FunctionBoolean.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/PathanFactory.hpp>

const XMLCh FunctionBoolean::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_b, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionBoolean::minArgs = 1;
const unsigned int FunctionBoolean::maxArgs = 1;

/**
 * fn:boolean($arg as item()*) as xs:boolean
**/

FunctionBoolean::FunctionBoolean(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "item()*", args, memMgr)
{
}

Sequence FunctionBoolean::collapseTreeInternal(DynamicContext* context, int flags) const
{
  bool result = getParamNumber(1,context,DataItem::UNORDERED|DataItem::RETURN_TWO)
    .getEffectiveBooleanValue(context);
  return Sequence(context->getPathanFactory()->createBoolean(result, context),
                  context->getMemoryManager());
}
