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

  XPath2TypeCastException - exception class for casting errors

*/

#ifndef _XPATH2TYPECASTEXCEPTION_HPP
#define _XPATH2TYPECASTEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for data items */
class PATHAN_EXPORT XPath2TypeCastException : public DSLException
{
public:

  XPath2TypeCastException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("XPath2TypeCastException"), functionName, reason, file, line) {};
};

#endif // _XPATH2TYPECASTEXCEPTION_HPP
