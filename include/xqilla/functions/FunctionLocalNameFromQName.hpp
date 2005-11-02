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
 * fn:local-name-from-QName function
 */

#ifndef _FUNCTIONGETLOCALNAMEFROMQNAME_HPP
#define _FUNCTIONGETLOCALNAMEFROMQNAME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>
#include <xqilla/runtime/Sequence.hpp>

/** Name function */
class PATHAN_EXPORT FunctionLocalNameFromQName : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionLocalNameFromQName(const VectorOfDataItems &args, XPath2MemoryManager* memMgr);
  
  /** Returns the local-name part of a QName, eg for foo:bar it returns bar */
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
};

#endif // _FUNCTIONGETLOCALNAMEFROMQNAME_HPP
