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


#ifndef _FUNCTIONRESOLVEURI_HPP
#define _FUNCTIONRESOLVEURI_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xercesc/util/XMLUTF8Transcoder.hpp>
#include <xercesc/util/TransService.hpp>
#include <xercesc/util/XMLUri.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/***
 *  Returns an absolute anyURI given a base URI and a relative URI.
 *
 *  fn:resolve-uri(anyURI $relative) => anyURI
 *  fn:resolve-uri(anyURI $relative, anyURI $base) => anyURI
 */
class PATHAN_EXPORT FunctionResolveURI : public ConstantFoldingFunction
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





