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

#ifndef _TYPENOTFOUNDEXCEPTION_HPP
#define _TYPENOTFOUNDEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/DSLException.hpp>

class XQILLA_API TypeNotFoundException : public DSLException
{
public:
  
  TypeNotFoundException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("TypeNotFoundException"), functionName, reason, file, line) {};
};

#endif // _TYPENOTFOUNDEXCEPTION_HPP
