/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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

#ifndef XSLT2LEXER_HPP
#define XSLT2LEXER_HPP

#include "../config/xqilla_config.h"

#ifdef HAVE_FAXPP

extern "C" {
#include <faxpp/parser.h>
}
#include "XQLexer.hpp"

#include <xercesc/framework/XMLBuffer.hpp>

struct InstructionInfo;
class DynamicContext;
class XQillaNSResolverImpl;

class XSLT2Lexer : public Lexer
{
public:
  XSLT2Lexer(DynamicContext *context, const XERCES_CPP_NAMESPACE_QUALIFIER InputSource &srcToUse, XQilla::Language lang = XQilla::XSLT2);
  virtual ~XSLT2Lexer();

  virtual int yylex(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC);

  virtual XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *getNSResolver() const;

protected:
  enum State {
    LANG_TOKEN,
    ATTRS,
    NEXT_EVENT,
    CURRENT_EVENT
  };

  struct ElementStackEntry
  {
    ElementStackEntry();
    ElementStackEntry(ElementStackEntry *p);

    bool reportWhitespace() const;

    const InstructionInfo *info;
    bool xmlSpacePreserve;

    XQillaNSResolverImpl *nsResolver;

    ElementStackEntry *prev;
  };

  int lang_token_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC);
  int attrs_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC);
  int next_event_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC);
  int current_event_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC);

  ASTNode *wrap(ASTNode *result) const;
  ASTNode *makeDirectName(const XMLCh *prefix, const XMLCh *name) const;
  ASTNode *makeQNameLiteral(const XMLCh *uri, const XMLCh *prefix, const XMLCh *name) const;
  ASTNode *makeStringLiteral(const XMLCh *value) const;

  void setLocation(YYLTYPE* pYYLOC, const FAXPP_Event *event);
  void setLocation(YYLTYPE* pYYLOC, const FAXPP_Attribute *attr);
  void setErrorLocation(YYLTYPE* pYYLOC);

  void popElementStack();

  DynamicContext *context_;

  FAXPP_Parser *parser_;
  AutoDelete<XERCES_CPP_NAMESPACE_QUALIFIER BinInputStream> stream_;
  AutoDelete<Lexer> childLexer_;

  ElementStackEntry *elementStack_;

  State state_;
  unsigned int index_;
  bool selfClose_;

  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer textBuffer_;
  bool textToCreate_;
};

#endif

#endif
