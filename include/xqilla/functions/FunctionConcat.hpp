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
  Concat operator function
*/

#ifndef _FUNCTIONCONCAT_HPP
#define _FUNCTIONCONCAT_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Concat operator function*/
class PATHAN_EXPORT FunctionConcat : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  ///Constructor.
  FunctionConcat(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
protected:
  /** concatenates two strings. Takes two strings, and gives a string */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONCONCAT_HPP
