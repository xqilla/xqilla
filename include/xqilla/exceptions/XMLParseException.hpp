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

  XMLParseException - exception class for parsing XML

*/

#ifndef _XMLPARSEEXCEPTION_HPP
#define _XMLPARSEEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for parsing XML */
class XQILLA_API XMLParseException : public XQException
{
public:

  XMLParseException(const XMLCh* const functionName, const XMLCh* const reason, const char *file, int line)
    : XQException(X("XMLParseException"), functionName, reason, file, line) {};
};

#endif // _XMLPARSEEXCEPTION_HPP

