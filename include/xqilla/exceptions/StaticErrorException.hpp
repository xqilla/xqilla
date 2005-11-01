/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
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
