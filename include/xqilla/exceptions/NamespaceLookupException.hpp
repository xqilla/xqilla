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

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/exceptions/DSLException.hpp>

/** exception class for DSLPath parser */

class PATHAN_EXPORT NamespaceLookupException : public DSLException
{
public:

  NamespaceLookupException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("NamespaceLookupException"), functionName, reason, file, line) {};
};

#endif // _XPATHPARSEEXCEPTION_HPP

