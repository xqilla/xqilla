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
   Equals operator function
*/

#ifndef _EQUALS_HPP
#define _EQUALS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/operators/ComparisonOperator.hpp>

class Collation;

/** OpEqualsEquals operator function*/
class PATHAN_EXPORT Equals : public ComparisonOperator
{
public:
  static const XMLCh name[];

  Equals(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  static bool equals(const Item::Ptr &arg1, const Item::Ptr &arg2, Collation* collation, DynamicContext* context);

  static bool equals(const AnyAtomicType::Ptr &arg1, const AnyAtomicType::Ptr &arg2, Collation* collation, DynamicContext* context);

  bool execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _EQUALS_HPP

