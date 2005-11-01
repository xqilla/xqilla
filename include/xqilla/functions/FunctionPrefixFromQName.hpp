/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
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

  FunctionPrefixFromQName(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /** Returns the prefix part of a QName, eg for foo:bar it returns foo */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONPREFIXFROMQNAME_HPP
