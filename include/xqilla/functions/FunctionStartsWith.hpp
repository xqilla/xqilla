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

  StartsWith function

*/

#ifndef _FUNCTIONSTARTSWITH_HPP
#define _FUNCTIONSTARTSWITH_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** StartsWith function. */
class PATHAN_EXPORT FunctionStartsWith : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionStartsWith(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /** XPath function. returns true if string1 starts with string2 **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONSTARTSWITH_HPP
