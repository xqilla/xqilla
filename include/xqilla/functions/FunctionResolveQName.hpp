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
 * resolve-QName function
 */

#ifndef _FUNCTIONRESOLVEQNAME_HPP
#define _FUNCTIONRESOLVEQNAME_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** resolve-QName function. */
class XQILLA_API FunctionResolveQName : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionResolveQName(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns an QName with the lexical form given in the first argument. The 
   *  prefix is resolved using the in-scope namespaces for a given element. **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONRESOLVEQNAME_HPP
