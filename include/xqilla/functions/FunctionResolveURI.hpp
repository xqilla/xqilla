/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */


#ifndef _FUNCTIONRESOLVEURI_HPP
#define _FUNCTIONRESOLVEURI_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ConstantFoldingFunction.hpp>

/***
 *  Returns an absolute anyURI given a base URI and a relative URI.
 *
 *  fn:resolve-uri(anyURI $relative) => anyURI
 *  fn:resolve-uri(anyURI $relative, anyURI $base) => anyURI
 */
class XQILLA_API FunctionResolveURI : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionResolveURI(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
 /** 
  * Returns an absolute anyURI given a base URI and a relative URI.
  **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

};

#endif // _FUNCTIONRESOLVEURI_HPP





