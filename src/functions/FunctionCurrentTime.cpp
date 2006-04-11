/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionCurrentTime.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include "../utils/DateUtils.hpp"
#include <stdio.h> // for sprintf

const XMLCh FunctionCurrentTime::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionCurrentTime::minArgs = 0;
const unsigned int FunctionCurrentTime::maxArgs = 0;

/**
 * fn:current-time() as xs:time
**/

FunctionCurrentTime::FunctionCurrentTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "empty()", args, memMgr)
{
}

ASTNode* FunctionCurrentTime::staticResolution(StaticContext *context) {
  _src.getStaticType().flags = StaticType::TIME_TYPE;
  _src.currentTimeUsed(true);
  return resolveArguments(context);
}

Sequence FunctionCurrentTime::collapseTreeInternal(DynamicContext* context, int flags) const
{
  return Sequence(DateUtils::getCurrentTime(context), context->getMemoryManager());
}
















