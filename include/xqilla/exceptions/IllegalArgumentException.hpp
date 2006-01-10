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
   Illegal Argument exception.  Should be thrown when arguments given are not as expected
*/

#ifndef _ILLEGALARGUMENTEXCEPTION_HPP
#define _ILLEGALARGUMENTEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for tests. Inherit from this if you need to throw an exception
    in the test suite.*/
class XQILLA_API IllegalArgumentException : public XQException
{
public:
  
  IllegalArgumentException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : XQException(X("IllegalArgumentException"), functionName, reason, file, line) {};
};

#endif // _ILLEGALARGUMENTEXCEPTION_HPP
