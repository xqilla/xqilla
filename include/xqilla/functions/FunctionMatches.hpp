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

  matches function

*/

#ifndef _FUNCTIONMATCHES_HPP
#define _FUNCTIONMATCHES_HPP

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Matches function. */
class PATHAN_EXPORT FunctionMatches : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionMatches(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** XPath function: returns true if string1 matches the regExp supplied as string2, otherwise returns false. **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONMATCHES_HPP
