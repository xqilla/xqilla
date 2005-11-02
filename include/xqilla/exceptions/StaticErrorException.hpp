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

#ifndef _STATICERROREXCEPTION_HPP
#define _STATICERROREXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** 
 * This means that an error was found while parsing or when doing static analysis of the expression
 */

class PATHAN_EXPORT StaticErrorException : public DSLException
{
public:
  StaticErrorException(const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line)
    : DSLException(X("StaticErrorException"), functionName, reason, file, line) {};
};

#endif // _STATICERROREXCEPTION_HPP
