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

#ifndef _TYPENOTFOUNDEXCEPTION_HPP
#define _TYPENOTFOUNDEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>

class XQILLA_API TypeNotFoundException : public XQException
{
public:
  
  TypeNotFoundException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : XQException(X("TypeNotFoundException"), functionName, reason, file, line) {};
};

#endif // _TYPENOTFOUNDEXCEPTION_HPP
