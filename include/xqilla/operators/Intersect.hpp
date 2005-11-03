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

   Op Intersect 
The intersect operator takes two node sequences as operands and returns a sequence containing all the nodes that occur in both operands.
*/

#ifndef _INTERSECT_HPP
#define _INTERSECT_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/XQOperator.hpp>

class PATHAN_EXPORT Intersect : public XQOperator
{
public:
  static const XMLCh name[];

  Intersect(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** exectutes the operator*/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif 
