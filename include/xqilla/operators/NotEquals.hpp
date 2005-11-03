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
   NotEquals operator function
*/

#ifndef _NOTEQUALS_HPP
#define _NOTEQUALS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpNotEquals operator function*/
class PATHAN_EXPORT NotEquals : public ComparisonOperator
{
public:
  static const XMLCh name[];

  NotEquals(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool not_equals(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _NOTEQUALS_HPP
