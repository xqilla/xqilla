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

/*

  QueryInterruptedException

*/

#ifndef _QUERYINTERRUPTEDEXCEPTION_HPP
#define _QUERYINTERRUPTEDEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for interrupted queries */

class XQILLA_API QueryInterruptedException : public XQException
{
public:

  QueryInterruptedException(const XMLCh *functionName, const XMLCh *reason, const LocationInfo *info, const char *file, int line)
    : XQException(X("QueryInterruptedException"), functionName, reason, info, file, line) {};
};

#endif // _QUERYINTERRUPTEDEXCEPTION_HPP

