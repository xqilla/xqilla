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

#ifndef _TYPEERROREXCEPTION_HPP
#define _TYPEERROREXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** 
 * This means that an error was found while manipulating typed data
 */

class XQILLA_API TypeErrorException : public XQException
{
public:
  TypeErrorException(const XMLCh* const functionName, const XMLCh* const reason, const LocationInfo *info, const char *file, int line)
    : XQException(X("TypeErrorException"), functionName, reason, info, file, line) {};
};

#endif // _TYPEERROREXCEPTION_HPP
