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
