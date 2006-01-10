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
  xf:max(anyAtomicType* $srcval) => anyAtomicType?
  xf:max(anyAtomicType* $srcval, string $collationLiteral) => anyAtomicType?
*/

#ifndef _FUNCTIONMAX_HPP
#define _FUNCTIONMAX_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/AggregateFunction.hpp>

class XQILLA_API FunctionMax : public AggregateFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor. Sets arg def to NOT_OPTIONAL.
  FunctionMax(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns the maximum value from the given sequence. **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONMAX_HPP
