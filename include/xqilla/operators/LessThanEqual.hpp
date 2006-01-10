/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

/*
   LessThanEqual operator function
*/

#ifndef _LESSTHANEQUAL_HPP
#define _LESSTHANEQUAL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpLessThanEqual operator function*/
class XQILLA_API LessThanEqual : public ComparisonOperator
{
public:
  static const XMLCh name[];

  LessThanEqual(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool less_than_equal(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _LESSTHANEQUAL_HPP

