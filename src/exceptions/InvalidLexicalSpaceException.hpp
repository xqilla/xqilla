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

  Invalid Lexical Space Exception: thrown when a value is not in the appropriate lexical space

*/

#ifndef _INVALIDLEXICALSPACEEXCEPTION_HPP
#define _INVALIDLEXICALSPACEEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

class XQILLA_API InvalidLexicalSpaceException : public XQException
{
public:
  
  InvalidLexicalSpaceException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : XQException(X("InvalidLexicalSpaceException"), functionName, reason, file, line) {};
};

#endif // _INVALIDLEXICALSPACEEXCEPTION_HPP
