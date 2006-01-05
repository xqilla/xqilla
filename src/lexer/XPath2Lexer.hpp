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
  Interface to XPathLexer that gives a yylex function as
  required by Bison.
*/

#ifndef _XPATHLEXER_HPP
#define _XPATHLEXER_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/schema/SequenceType.hpp>

#ifndef YY_CHAR
#define YY_CHAR unsigned short
#endif

class NodeTest;
class QualifiedName;

typedef union {

  ASTNode* astNodeImpl;
  XMLCh *wString;
  NodeTest *nodeTest;
  XQStep::Axis axis;
  QualifiedName *qName;
  VectorOfASTNodes *astNodeStore;
  SequenceType* sequenceType;
  SequenceType::OccurrenceIndicator occurrence;
  SequenceType::ItemType* itemType;
  VectorOfVariableBinding* variableBinding;
} yystype;

#define YYSTYPE yystype


/** Adapter for XPathLexer that gives a yylex function as required
    by Bison. Basically Bison expects an integer as the return type,
    with 0 meaning end of input. If the returned token type has an
    associated chunk of data, we should store it in lvalp. The
    pcontrol pointer is the only way to pass control data to the yylex
    function, and is cast back to a DSLPathParserControl structure,
    then the Lexer instance included in that is used to actually grab
    tokens. **/
int yylex(YYSTYPE *lvalp, void *pcontrol);

#endif    









