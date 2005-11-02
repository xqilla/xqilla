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
   LessThan operator function
*/

#ifndef _LESSTHAN_HPP
#define _LESSTHAN_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpLessThan operator function*/
class PATHAN_EXPORT LessThan : public ComparisonOperator
{
public:
  static const XMLCh name[];

  LessThan(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  static bool less_than(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _LESSTHAN_HPP

