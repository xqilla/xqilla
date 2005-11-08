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

  NamespaceLookupException - exception class for DSLPath parser

*/

#ifndef _NAMESPACELOOKUPEXCPETION_HPP
#define _NAMESPACELOOKUPEXCPETION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/XQException.hpp>

/** exception class for DSLPath parser */

class XQILLA_API NamespaceLookupException : public XQException
{
public:

  NamespaceLookupException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : XQException(X("NamespaceLookupException"), functionName, reason, file, line) {};
};

#endif // _XPATHPARSEEXCEPTION_HPP

