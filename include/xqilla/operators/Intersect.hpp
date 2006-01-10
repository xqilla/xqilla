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

   Op Intersect 
The intersect operator takes two node sequences as operands and returns a sequence containing all the nodes that occur in both operands.
*/

#ifndef _INTERSECT_HPP
#define _INTERSECT_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQOperator.hpp>

class XQILLA_API Intersect : public XQOperator
{
public:
  static const XMLCh name[];

  Intersect(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** exectutes the operator*/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif 
