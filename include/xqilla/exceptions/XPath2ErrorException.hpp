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
