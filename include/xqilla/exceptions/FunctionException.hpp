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
  FunctionException - exception class for functions
*/

#ifndef _FUNCTIONEXCEPTION_HPP
#define _FUNCTIONEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for tests. Inherit from this if you need to throw an exception
    in the test suite.*/
class XQILLA_API FunctionException : public DSLException
{
public:

  FunctionException(const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line)
    : DSLException(X("FunctionException"), functionName, reason, file, line) {};
};

#endif // _FUNCTIONEXCEPTION_HPP
