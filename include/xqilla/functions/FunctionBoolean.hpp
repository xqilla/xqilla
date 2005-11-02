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

  Boolean function

*/

#ifndef _FUNCTIONBOOLEAN_HPP
#define _FUNCTIONBOOLEAN_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Boolean operator function, and exists functions. Warning, you may need to think
    about this one, but in fact, these two functions have the same behaviour. */
class PATHAN_EXPORT FunctionBoolean : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor. Sets arg def to NOT_OPTIONAL
  FunctionBoolean(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /** Returns the argument as a boolean. Sets result to value of getNextBool() **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONBOOLEAN_HPP
