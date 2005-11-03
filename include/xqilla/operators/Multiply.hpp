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
   Multiply operator function
*/

#ifndef _MULTIPLY_HPP
#define _MULTIPLY_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/operators/ArithmeticOperator.hpp>

/** OpTimes operator function*/
class XQILLA_API Multiply : public ArithmeticOperator
{
public:
  static const XMLCh name[];

  Multiply(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  Item::Ptr execute(const AnyAtomicType::Ptr &atom1, const AnyAtomicType::Ptr &atom2, DynamicContext *context) const;
};

#endif // _FUNCTIONOPTIMES_HPP

