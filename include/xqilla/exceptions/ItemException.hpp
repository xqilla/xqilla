/*
 * Copyright (c) 2003, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*
   Item Exception.  Should be thrown only from Item hierarchy
*/

#ifndef _ITEMEXCEPTION_HPP
#define _ITEMEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for tests. Inherit from this if you need to throw an exception
    in the test suite.*/
class PATHAN_EXPORT ItemException : public DSLException
{
public:
  
  ItemException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("ItemException"), functionName, reason, file, line) {};
};

#endif // _ITEMEXCEPTION_HPP
