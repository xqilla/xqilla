/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */


#ifndef _FUNCTIONRESOLVEURI_HPP
#define _FUNCTIONRESOLVEURI_HPP

#include <xqilla/framework/XQillaExport.hpp>
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





