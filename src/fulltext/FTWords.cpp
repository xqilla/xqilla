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

#include "../config/xqilla_config.h"
#include <xqilla/fulltext/FTWords.hpp>
#include <xqilla/fulltext/FTOr.hpp>
#include <xqilla/fulltext/FTAnd.hpp>
#include <xqilla/fulltext/FTOrder.hpp>
#include <xqilla/fulltext/Tokenizer.hpp>
#include <xqilla/fulltext/FTRange.hpp>
#include <xqilla/fulltext/FTDistance.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/XQTreatAs.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

FTWords::FTWords(ASTNode *expr, FTAnyallOption option, XPath2MemoryManager *memMgr)
    : FTSelection(FTSelection::WORDS, memMgr),
      expr_(expr),
      option_(option)
{
}

FTSelection *FTWords::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *seqType = new (mm) SequenceType(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                SchemaSymbols::fgDT_STRING,
                                                SequenceType::STAR, mm);
  seqType->setLocationInfo(this);

  expr_ = new (mm) XQAtomize(expr_, mm);
  expr_->setLocationInfo(this);
  expr_ = new (mm) XQTreatAs(expr_, seqType, mm);
  expr_->setLocationInfo(this);
  expr_ = expr_->staticResolution(context);

  return this;
}

FTSelection *FTWords::staticTyping(StaticContext *context, StaticTyper *styper)
{
  src_.clear();

  expr_ = expr_->staticTyping(context, styper);
  src_.add(expr_->getStaticAnalysis());

  return this;
}

FTSelection *FTWords::optimize(FTContext *ftcontext) const
{
  if(expr_->isConstant()) {
    Result strings = expr_->createResult(ftcontext->context);

    switch(option_) {
    case ANY_WORD: {
      return optimizeAnyWord(strings, ftcontext)->
        optimize(ftcontext);
    }
    case ALL_WORDS: {
      return optimizeAllWords(strings, ftcontext)->
        optimize(ftcontext);
    }
    case PHRASE: {
      return optimizePhrase(strings, ftcontext)->
        optimize(ftcontext);
    }
    case ANY: {
      return optimizeAny(strings, ftcontext)->
        optimize(ftcontext);
    }
    case ALL: {
      return optimizeAll(strings, ftcontext)->
        optimize(ftcontext);
    }
    }
  }

  return const_cast<FTWords*>(this);
}

FTSelection *FTWords::optimizeAnyWord(Result strings, FTContext *ftcontext) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTOr *ftor = new (mm) FTOr(mm);
  ftor->setLocationInfo(this);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    TokenStream::Ptr stream = ftcontext->tokenizer->
      tokenize(item->asString(ftcontext->context), ftcontext->context->getMemoryManager());
    TokenInfo::Ptr token;
    while((token = stream->next()).notNull()) {
      FTSelection *word = new (mm) FTWord(token->getWord(), mm);
      word->setLocationInfo(this);
      ftor->addArg(word);
    }
  }

  return ftor;
}

AllMatches::Ptr FTWords::executeAnyWord(Result strings, FTContext *ftcontext) const
{
  FTDisjunctionMatches *disjunction = new FTDisjunctionMatches(this);
  AllMatches::Ptr result(disjunction);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    TokenStream::Ptr stream = ftcontext->tokenizer->
      tokenize(item->asString(ftcontext->context), ftcontext->context->getMemoryManager());
    TokenInfo::Ptr token;
    while((token = stream->next()).notNull()) {
      disjunction->addMatches(new FTStringSearchMatches(this, token->getWord(), ftcontext));
    }
  }

  return result;
}

FTSelection *FTWords::optimizeAllWords(Result strings, FTContext *ftcontext) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTAnd *ftand = new (mm) FTAnd(mm);
  ftand->setLocationInfo(this);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    TokenStream::Ptr stream = ftcontext->tokenizer->
      tokenize(item->asString(ftcontext->context), ftcontext->context->getMemoryManager());
    TokenInfo::Ptr token;
    while((token = stream->next()).notNull()) {
      FTSelection *word = new (mm) FTWord(token->getWord(), mm);
      word->setLocationInfo(this);
      ftand->addArg(word);
    }
  }

  return ftand;
}

AllMatches::Ptr FTWords::executeAllWords(Result strings, FTContext *ftcontext) const
{
  FTConjunctionMatches *conjunction = new FTConjunctionMatches(this);
  AllMatches::Ptr result(conjunction);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    TokenStream::Ptr stream = ftcontext->tokenizer->
      tokenize(item->asString(ftcontext->context), ftcontext->context->getMemoryManager());
    TokenInfo::Ptr token;
    while((token = stream->next()).notNull()) {
      conjunction->addMatches(new FTStringSearchMatches(this, token->getWord(), ftcontext));
    }
  }

  return result;
}

FTSelection *FTWords::optimizePhrase(Result strings, FTContext *ftcontext) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTSelection *result = new (mm) FTOrder(optimizeAllWords(strings, ftcontext), mm);
  result->setLocationInfo(this);

  result = new (mm) FTDistanceLiteral(result, FTRange::EXACTLY, 0, 0, FTOption::WORDS, mm);
  result->setLocationInfo(this);

  return result;
}

AllMatches::Ptr FTWords::executePhrase(Result strings, FTContext *ftcontext) const
{
  AllMatches::Ptr result = executeAllWords(strings, ftcontext);
  result = new FTOrderMatches(this, result);
  result = new FTDistanceExactlyMatches(this, 0, FTOption::WORDS, result);
  return result;
}

FTSelection *FTWords::optimizeAny(Result strings, FTContext *ftcontext) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTOr *ftor = new (mm) FTOr(mm);
  ftor->setLocationInfo(this);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    ftor->addArg(optimizePhrase(item, ftcontext));
  }

  return ftor;
}

AllMatches::Ptr FTWords::executeAny(Result strings, FTContext *ftcontext) const
{
  FTDisjunctionMatches *disjunction = new FTDisjunctionMatches(this);
  AllMatches::Ptr result(disjunction);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    disjunction->addMatches(executePhrase(item, ftcontext));
  }

  return result;
}

FTSelection *FTWords::optimizeAll(Result strings, FTContext *ftcontext) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTAnd *ftand = new (mm) FTAnd(mm);
  ftand->setLocationInfo(this);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    ftand->addArg(optimizePhrase(item, ftcontext));
  }

  return ftand;
}

AllMatches::Ptr FTWords::executeAll(Result strings, FTContext *ftcontext) const
{
  FTConjunctionMatches *conjunction = new FTConjunctionMatches(this);
  AllMatches::Ptr result(conjunction);

  Item::Ptr item;
  while((item = strings->next(ftcontext->context)).notNull()) {
    conjunction->addMatches(executePhrase(item, ftcontext));
  }

  return result;
}

AllMatches::Ptr FTWords::execute(FTContext *ftcontext) const
{
  Result strings = expr_->createResult(ftcontext->context);

  switch(option_) {
  case ANY_WORD: {
    return executeAnyWord(strings, ftcontext);
  }
  case ALL_WORDS: {
    return executeAllWords(strings, ftcontext);
  }
  case PHRASE: {
    return executePhrase(strings, ftcontext);
  }
  case ANY: {
    return executeAny(strings, ftcontext);
  }
  case ALL: {
    return executeAll(strings, ftcontext);
  }
  }
  return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

FTWord::FTWord(const XMLCh *queryString, XPath2MemoryManager *memMgr)
  : FTSelection(WORD, memMgr),
    queryString_(queryString)
{
}

FTSelection *FTWord::staticResolution(StaticContext *context)
{
  return this;
}

FTSelection *FTWord::staticTyping(StaticContext *context, StaticTyper *styper)
{
  src_.clear();
  return this;
}

FTSelection *FTWord::optimize(FTContext *context) const
{
  return const_cast<FTWord*>(this);
}

AllMatches::Ptr FTWord::execute(FTContext *ftcontext) const
{
  return new FTStringSearchMatches(this, queryString_, ftcontext);
}

////////////////////////////////////////////////////////////////////////////////////////////////////

FTStringSearchMatches::FTStringSearchMatches(const LocationInfo *info, const XMLCh *queryString, FTContext *ftcontext)
  : AllMatches(info),
    queryPos_(ftcontext->queryPos++),
    tokenStream_(ftcontext->tokenStore->findTokens(queryString))
{
}

Match::Ptr FTStringSearchMatches::next(DynamicContext *context)
{
  if(tokenStream_.isNull()) return 0;

  TokenInfo::Ptr token = tokenStream_->next();
  if(token.isNull()) {
    tokenStream_ = 0;
    return 0;
  }

  // TBD query position
  Match::Ptr match = new Match();
  match->addStringInclude(queryPos_, token);
  return match;
}
