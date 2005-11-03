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
   GreaterThanEqual operator function
*/

#ifndef _GREATERTHANEQUAL_HPP
#define _GREATERTHANEQUAL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpGreaterThanEqual operator function*/
class XQILLA_API GreaterThanEqual : public ComparisonOperator
{
public:
  static const XMLCh name[];

  GreaterThanEqual(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool greater_than_equal(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _GREATERTHANEQUAL_HPP

