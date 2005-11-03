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
  xf:min(anyAtomicType* $srcval) => anyAtomicType?
  xf:min(anyAtomicType* $srcval, string $collationLiteral) => anyAtomicType?  
*/

#ifndef _FUNCTIONMIN_HPP
#define _FUNCTIONMIN_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/AggregateFunction.hpp>

class PATHAN_EXPORT FunctionMin : public AggregateFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor. Sets arg def to NOT_OPTIONAL.
  FunctionMin(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns the maximum value from the given sequence. **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONMIN_HPP
