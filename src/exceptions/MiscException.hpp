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

/*

  XPath2ErrorException - handles cases in the specification where the `error value' is returned

*/

#ifndef _MISCEXCEPTION_HPP
#define _MISCEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for miscellaneous errors */
class XQILLA_API MiscException : public DSLException
{
public:
  
  MiscException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("MiscException"), functionName, reason, file, line) {};
};

#endif // _MISCEXCEPTION_HPP
