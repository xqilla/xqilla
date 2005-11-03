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
   Divide operator function
*/

#ifndef _DIVIDE_HPP
#define _DIVIDE_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/operators/ArithmeticOperator.hpp>

/** OpDivide operator function*/
class PATHAN_EXPORT Divide : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  Divide(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _DIVIDE_HPP


