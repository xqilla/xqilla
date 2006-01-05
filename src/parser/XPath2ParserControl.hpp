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

/*
  Definition of parser control struct.

  This is needed by Xparser.y, test.cpp and ../lexer/XPathLexer.cpp.
*/

#ifndef _XPATHPARSERCONTROL_HPP
#define _XPATHPARSERCONTROL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/context/StaticContext.hpp>

class xxFlexLexer;
class XPath2MemoryManager;

class XQILLA_API XPathParserControl {

public:
  ASTNode* result;
  xxFlexLexer *lexer;
  const StaticContext* context;
	XPath2MemoryManager* memMgr;

  XPathParserControl()
    : result(NULL),
      lexer(NULL),
      context(NULL),
      memMgr(NULL)
  {
  };

};

#endif // _XPATHPARSERC:ONTROL_HPP
