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
   Item Exception.  Should be thrown only from Item hierarchy
*/

#ifndef _ITEMEXCEPTION_HPP
#define _ITEMEXCEPTION_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/exceptions/DSLException.hpp>
#include <xqilla/utils/XStr.hpp>

/** exception class for tests. Inherit from this if you need to throw an exception
    in the test suite.*/
class XQILLA_API ItemException : public DSLException
{
public:
  
  ItemException(const XMLCh *functionName, const XMLCh *reason, const char *file, int line)
    : DSLException(X("ItemException"), functionName, reason, file, line) {};
};

#endif // _ITEMEXCEPTION_HPP
