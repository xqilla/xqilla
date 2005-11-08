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

  ASTException - exception class for ASTNodes

*/

#ifndef _ASTEXCEPTION_HPP
#define _ASTEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for data items */

class XQILLA_API ASTException : public XQException
{
public:

  ASTException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : XQException(X("ASTException"), functionName, reason, file, line) {};
};

#endif
