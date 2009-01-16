/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2009
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
 */

#ifndef _FTWORDS_HPP
#define _FTWORDS_HPP

#include <xqilla/fulltext/FTSelection.hpp>
#include <xqilla/runtime/Result.hpp>

class ASTNode;

class XQILLA_API FTWords : public FTSelection
{
public:
  /// Enumeration representing the way to match words and phrases
  enum FTAnyallOption {
    ANY,
    ANY_WORD,
    ALL,
    ALL_WORDS,
    PHRASE
  };

  FTWords(ASTNode *expr, FTAnyallOption option, XPath2MemoryManager *memMgr);

  virtual FTSelection *staticResolution(StaticContext *context);
  virtual FTSelection *staticTyping(StaticContext *context, StaticTyper *styper);
  virtual FTSelection *optimize(FTContext *context) const;
  virtual AllMatches::Ptr execute(FTContext *ftcontext) const;

  ASTNode *getExpr() const { return expr_; }
  void setExpr(ASTNode *expr) { expr_ = expr; }
  FTAnyallOption getOption() const { return option_; }

private:
  FTSelection *optimizeAnyWord(Result strings, FTContext *ftcontext) const;
  FTSelection *optimizeAllWords(Result strings, FTContext *ftcontext) const;
  FTSelection *optimizePhrase(Result strings, FTContext *ftcontext) const;
  FTSelection *optimizeAny(Result strings, FTContext *ftcontext) const;
  FTSelection *optimizeAll(Result strings, FTContext *ftcontext) const;

  AllMatches::Ptr executeAnyWord(Result strings, FTContext *ftcontext) const;
  AllMatches::Ptr executeAllWords(Result strings, FTContext *ftcontext) const;
  AllMatches::Ptr executePhrase(Result strings, FTContext *ftcontext) const;
  AllMatches::Ptr executeAny(Result strings, FTContext *ftcontext) const;
  AllMatches::Ptr executeAll(Result strings, FTContext *ftcontext) const;

  ASTNode *expr_;
  FTAnyallOption option_;
};

class XQILLA_API FTWord : public FTSelection
{
public:
  FTWord(const XMLCh *queryString, XPath2MemoryManager *memMgr);

  virtual FTSelection *staticResolution(StaticContext *context);
  virtual FTSelection *staticTyping(StaticContext *context, StaticTyper *styper);
  virtual FTSelection *optimize(FTContext *context) const;
  virtual AllMatches::Ptr execute(FTContext *ftcontext) const;

  const XMLCh *getQueryString() const { return queryString_; }

private:
  const XMLCh *queryString_;
};

class FTStringSearchMatches : public AllMatches
{
public:
  FTStringSearchMatches(const LocationInfo *info, const XMLCh *queryString, FTContext *ftcontext);
  Match::Ptr next(DynamicContext *context);

private:
  unsigned int queryPos_;
  TokenStream::Ptr tokenStream_;
};

#endif
