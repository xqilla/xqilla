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
   UnaryMinus operator function
*/

#ifndef _UNARYMINUS_HPP
#define _UNARYMINUS_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/operators/ArithmeticOperator.hpp>

/** Unary Minus operator function*/
class XQILLA_API UnaryMinus : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  UnaryMinus(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  void calculateStaticType();
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _UNARYMINUS_HPP

