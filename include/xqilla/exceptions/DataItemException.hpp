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

  DataItemException - exception class for ASTNodes

*/

#ifndef _DATAITEMEXCEPTION_HPP
#define _DATAITEMEXCEPTION_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for data items */

class PATHAN_EXPORT DataItemException : public DSLException
{
public:

  DataItemException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("XQException"), functionName, reason, file, line) {};
};

#endif // _DATAITEMEXCEPTION_HPP
