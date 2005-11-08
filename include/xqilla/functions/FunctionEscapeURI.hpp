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

/*

  (string $uri-part, boolean $escape-reserved) => string
  Applies the URI escaping rules to the string supplied
  

*/

#ifndef _FUNCTIONESCAPEURI_HPP
#define _FUNCTIONESCAPEURI_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xercesc/util/XMLUTF8Transcoder.hpp>
#include <xercesc/util/TransService.hpp>
#include <xercesc/util/XMLUni.hpp>

#include <xqilla/ast/ConstantFoldingFunction.hpp>

/** Substring function. */
class XQILLA_API FunctionEscapeURI : public ConstantFoldingFunction
{
public:
  static const XMLCh name[];
  static const unsigned int minArgs;
  static const unsigned int maxArgs;

  FunctionEscapeURI(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr);
  
  /** Returns param1 after applying URI escaping rules - the value of param2 determines exactly which set of 
   *  characters is escaped**/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

private:
 //The UTF-8 XML Transcoder
 //XMLUTF8Transcoder transcoder;
  
 //Returns the escape character sequence for the given character
 XMLCh* escapeChar(XMLCh c) const;
 
};

#endif // _FUNCTIONESCAPEURI_HPP





