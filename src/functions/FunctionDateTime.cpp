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
#include <xqilla/functions/FunctionDateTime.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATDateTimeOrDerived.hpp>
#include <xqilla/items/ATTimeOrDerived.hpp>
#include <xqilla/items/ATDateOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>

const XMLCh FunctionDateTime::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
const unsigned int FunctionDateTime::minArgs = 2;
const unsigned int FunctionDateTime::maxArgs = 2;

/**
 * fn:dateTime($arg1 as xs:date, $arg2 as xs:time) as xs:dateTime
**/

FunctionDateTime::FunctionDateTime(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "date, time", args, memMgr)
{
}

ASTNode* FunctionDateTime::staticResolution(StaticContext *context)
{
  _src.getStaticType().flags = StaticType::DATE_TIME_TYPE;
  return resolveArguments(context, /*checkTimezone*/true);
}

Sequence FunctionDateTime::collapseTreeInternal(DynamicContext* context, int flags) const
{
    Sequence arg1= getParamNumber(1, context)->toSequence(context);
    const ATDateOrDerived::Ptr date=arg1.first();
    Sequence arg2= getParamNumber(2, context)->toSequence(context);
    const ATTimeOrDerived::Ptr time=arg2.first();

    Timezone::Ptr finalTZ;
    // determine the timezone of the result
    if(date->hasTimezone())
    {
        finalTZ=date->getTimezone();
        if(time->hasTimezone())
        {
            const Timezone::Ptr timeTZ=time->getTimezone();
            if(!timeTZ->equals(finalTZ))
                XQThrow(FunctionException, X("FunctionDateTime::collapseTreeInternal"), X("Both arguments to fn:dateTime have a timezone specified [err:FORG0008]"));
        }
    }
    else if(time->hasTimezone())
        finalTZ=time->getTimezone();

    // convert the time into a duration
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buff(64, context->getMemoryManager());
    buff.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P);
    buff.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T);
    if(!time->getHours()->isZero())
    {
        buff.append(time->getHours()->asString(context));
        buff.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_H);
    }
    if(!time->getMinutes()->isZero())
    {
        buff.append(time->getMinutes()->asString(context));
        buff.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M);
    }
    buff.append(time->getSeconds()->asString(context));
    buff.append(XERCES_CPP_NAMESPACE_QUALIFIER chLatin_S);
    ATDurationOrDerived::Ptr timeAsDur=context->getItemFactory()->createDayTimeDuration(buff.getRawBuffer(), context);

    // convert the date into a dateTime, with no timezone
    const ATDateTimeOrDerived::Ptr dateTime=date->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA, 
                                                         XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DATETIME, 
                                                         context);

    // add them
    const ATDateTimeOrDerived::Ptr result=dateTime->addDayTimeDuration(timeAsDur, context);
    if(finalTZ.notNull())
        return Sequence(result->setTimezone(finalTZ, context), context->getMemoryManager());
    return Sequence(result, context->getMemoryManager());
}
















