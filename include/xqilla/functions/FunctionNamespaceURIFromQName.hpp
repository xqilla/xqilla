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

 * xf:namespace-uri-from-QName function

*/

#ifndef _FUNCTIONGETNAMESPACEURIFROMQNAME_HPP
#define _FUNCTIONGETNAMESPACEURIFROMQNAME_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

class PATHAN_EXPORT FunctionNamespaceURIFromQName : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionNamespaceURIFromQName(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns the namespace part of a QName*/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONGETNAMESPACEURIFROMQNAME_HPP
