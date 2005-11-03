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
 * Sum function -- takes a sequence, returns a value of the same type as the items which is 
 *                 the sum of the values.
*/

#ifndef _FUNCTIONSUM_HPP
#define _FUNCTIONSUM_HPP

#include <xqilla/ast/AggregateFunction.hpp>

/** Sum operator function*/
class XQILLA_API FunctionSum : public AggregateFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionSum(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Takes a list of nodes and sums their values */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};
#endif // _FUNCTIONSUM_HPP
