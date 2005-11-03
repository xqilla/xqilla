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
 * fn:prefix-from-QName function
 */

#ifndef _FUNCTIONPREFIXFROMQNAME_HPP
#define _FUNCTIONPREFIXFROMQNAME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xqilla/runtime/Sequence.hpp>

class PATHAN_EXPORT FunctionPrefixFromQName : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionPrefixFromQName(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns the prefix part of a QName, eg for foo:bar it returns foo */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONPREFIXFROMQNAME_HPP
