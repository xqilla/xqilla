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

#ifndef _DYNAMICERROREXCEPTION_HPP
#define _DYNAMICERROREXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** 
 * This means that an error was found while evaluating the expression
 */

class XQILLA_API DynamicErrorException : public XQException
{
public:
  DynamicErrorException(const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line)
    : XQException(X("DynamicErrorException"), functionName, reason, file, line) {};
};

#endif // _DYNAMICERROREXCEPTION_HPP
