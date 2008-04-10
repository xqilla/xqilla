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

#ifndef XQANALYZESTRING_HPP
#define XQANALYZESTRING_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQAnalyzeString : public ASTNodeImpl
{
public:
  XQAnalyzeString(XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext *context, int flags=0) const;
  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *item) { expr_ = item; }
  ASTNode *getRegex() const { return regex_; }
  void setRegex(ASTNode *item) { regex_ = item; }
  ASTNode *getFlags() const { return flags_; }
  void setFlags(ASTNode *item) { flags_ = item; }
  ASTNode *getMatch() const { return match_; }
  void setMatch(ASTNode *item) { match_ = item; }
  ASTNode *getNonMatch() const { return nonMatch_; }
  void setNonMatch(ASTNode *item) { nonMatch_ = item; }

protected:
  ASTNode *expr_;
  ASTNode *regex_;
  ASTNode *flags_;
  ASTNode *match_;
  ASTNode *nonMatch_;
};

#endif
