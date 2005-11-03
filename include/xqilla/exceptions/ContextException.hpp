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

  ContextException

*/

#ifndef _CONTEXTEXCEPTION_HPP
#define _CONTEXTEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for DSLPath parser */

class XQILLA_API ContextException : public DSLException
{
public:

  ContextException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("ContextException"), functionName, reason, file, line) {};
};

#endif // _CONTEXTEXCEPTION_HPP

