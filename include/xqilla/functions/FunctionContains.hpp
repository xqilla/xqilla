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

  Contains function

*/

#ifndef _FUNCTIONCONTAINS_HPP
#define _FUNCTIONCONTAINS_HPP

#include <xqilla/framework/XQillaExport.hpp>


#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Contains function. */
class XQILLA_API FunctionContains : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionContains(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** XPath function. returns true if string1 conatins string2 **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONCONTAINS_HPP
