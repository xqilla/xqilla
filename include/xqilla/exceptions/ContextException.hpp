/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

/*

  ContextException

*/

#ifndef _CONTEXTEXCEPTION_HPP
#define _CONTEXTEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for DSLPath parser */

class PATHAN_EXPORT ContextException : public DSLException
{
public:

  ContextException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("ContextException"), functionName, reason, file, line) {};
};

#endif // _CONTEXTEXCEPTION_HPP

