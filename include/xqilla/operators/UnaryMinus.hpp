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
   UnaryMinus operator function
*/

#ifndef _UNARYMINUS_HPP
#define _UNARYMINUS_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/operators/ArithmeticOperator.hpp>

/** Unary Minus operator function*/
class PATHAN_EXPORT UnaryMinus : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  UnaryMinus(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _UNARYMINUS_HPP

