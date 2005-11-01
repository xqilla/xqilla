/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*
   Illegal Argument exception.  Should be thrown when arguments given are not as expected
*/

#ifndef _ILLEGALARGUMENTEXCEPTION_HPP
#define _ILLEGALARGUMENTEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for tests. Inherit from this if you need to throw an exception
    in the test suite.*/
class PATHAN_EXPORT IllegalArgumentException : public DSLException
{
public:
  
  IllegalArgumentException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("IllegalArgumentException"), functionName, reason, file, line) {};
};

#endif // _ILLEGALARGUMENTEXCEPTION_HPP
