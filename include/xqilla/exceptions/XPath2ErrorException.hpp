/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*

  XPath2ErrorException - handles cases in the specification where the `error value' is returned

*/

#ifndef _XPATH2ERROREXCEPTON_HPP
#define _XPATH2ERROREXCEPTON_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for data items */
class PATHAN_EXPORT XPath2ErrorException : public DSLException
{
public:
  
  XPath2ErrorException(const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line)
    : DSLException(X("XPath2ErrorException"), functionName, reason, file, line) {};
};

#endif // _XPATH2ERROREXCEPTON_HPP
