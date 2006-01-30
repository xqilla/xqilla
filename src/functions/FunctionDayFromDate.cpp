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
#include <xqilla/functions/FunctionDayFromDate.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>

const XMLCh FunctionDayFromDate::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_y, 
  XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_f, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chDash, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionDayFromDate::minArgs = 1;
const unsigned int FunctionDayFromDate::maxArgs = 1;

/*
 * fn:day-from-date($arg as xs:date?) as xs:integer?
 */

FunctionDayFromDate::FunctionDayFromDate(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "date?", args, memMgr)
{
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE;
}

ASTNode* FunctionDayFromDate::staticResolution(StaticContext *context)
{
  return resolveArguments(context, /*checkTimezone*/true);
}

Sequence FunctionDayFromDate::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

  Sequence arg=getParamNumber(1,context)->toSequence(context);
  if(arg.isEmpty())
    return Sequence(memMgr);

  return Sequence(((const ATDateOrDerived*)(const Item*)arg.first())->getDays(), memMgr);
}
















