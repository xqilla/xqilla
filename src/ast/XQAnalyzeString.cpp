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

#include "../config/xqilla_config.h"
#include <assert.h>
#include <sstream>

#include <xqilla/ast/XQAnalyzeString.hpp>
#include <xqilla/ast/XQFunctionConversion.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/exceptions/ASTException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/RegexGroupStore.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/regx/Match.hpp>
#include <xercesc/util/XMLExceptMsgs.hpp>
#include <xercesc/util/ParseException.hpp>

XERCES_CPP_NAMESPACE_USE
using namespace std;

XQAnalyzeString::XQAnalyzeString(XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    expr_(0),
    regex_(0),
    flags_(0),
    match_(0),
    nonMatch_(0)
{
  setType(ASTNode::ANALYZE_STRING);
}

ASTNode* XQAnalyzeString::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  SequenceType *seqType = new (mm) SequenceType(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                SchemaSymbols::fgDT_STRING,
                                                SequenceType::EXACTLY_ONE, mm);
  seqType->setLocationInfo(this);

  expr_ = new (mm) XQFunctionConversion(expr_, seqType, mm);
  expr_ = expr_->staticResolution(context);

  regex_ = regex_->staticResolution(context);

  if(flags_)
    flags_ = flags_->staticResolution(context);

  match_ = match_->staticResolution(context);
  nonMatch_ = nonMatch_->staticResolution(context);

  return this;
}

ASTNode *XQAnalyzeString::staticTyping(StaticContext *context)
{
  _src.clear();

  expr_ = expr_->staticTyping(context);
  _src.add(expr_->getStaticAnalysis());

  // TBD Precompile the regex - jpcs
  regex_ = regex_->staticTyping(context);
  _src.add(regex_->getStaticAnalysis());

  if(flags_) {
    flags_ = flags_->staticTyping(context);
    _src.add(flags_->getStaticAnalysis());
  }

  StaticType ciType(StaticType::STRING_TYPE, 1, 1);
  AutoContextItemTypeReset contextTypeReset(context, ciType);
  
  match_ = match_->staticTyping(context);
  _src.add(match_->getStaticAnalysis());
  _src.getStaticType() = match_->getStaticAnalysis().getStaticType();

  nonMatch_ = nonMatch_->staticTyping(context);
  _src.add(nonMatch_->getStaticAnalysis());
  _src.getStaticType().typeConcat(nonMatch_->getStaticAnalysis().getStaticType());

  _src.getStaticType().multiply(0, StaticType::UNLIMITED);

  if(!_src.isUsed()) {
    return constantFold(context);
  }
  return this;
}

class AnalyzeStringResult : public ResultImpl, private RegexGroupStore
{
public:
  AnalyzeStringResult(const XQAnalyzeString *ast)
    : ResultImpl(ast),
      ast_(ast),
      input_(0),
      matches_(10, true),
      contextPos_(0),
      contextItem_(0),
      currentMatch_(0),
      mm_(0),
      result_(0)
  {
  }

  virtual Item::Ptr next(DynamicContext *context)
  {
    XPath2MemoryManager *mm = context->getMemoryManager();

    if(input_ == 0) {
      input_ = ast_->getExpression()->createResult(context)->next(context)->asString(context);
      const XMLCh *pattern = ast_->getRegex()->createResult(context)->next(context)->asString(context);

      const XMLCh *options = XMLUni::fgZeroLenString;
      if(ast_->getFlags())
        options = ast_->getFlags()->createResult(context)->next(context)->asString(context);
  
      //Check that the options are valid - throw an exception if not (can have s,m,i and x)
      //Note: Are allowed to duplicate the letters.
      const XMLCh* cursor = options;
      for(; *cursor != 0; ++cursor){
        switch(*cursor) {
        case chLatin_s:
        case chLatin_m:
        case chLatin_i:
        case chLatin_x:
          break;
        default:
          XQThrow(ASTException, X("AnalyzeStringResult::next"),X("Invalid regular expression flags [err:XTDE1145]."));
        }
      }

      mm_ = mm;

      // Always turn off head character optimisation, since it is broken
      XMLBuffer optionsBuf;
      optionsBuf.set(options);
      optionsBuf.append(chLatin_H);

      try {
        // Parse and execute the regular expression
        RegularExpression regEx(pattern, optionsBuf.getRawBuffer(), mm);
        regEx.allMatches(input_, 0, XMLString::stringLen(input_), &matches_);
      }
      catch (ParseException &e){ 
        XMLBuffer buf;
        buf.set(X("Invalid regular expression: "));
        buf.append(e.getMessage());
        buf.append(X(" [err:XTDE1140]"));
        XQThrow(ASTException, X("AnalyzeStringResult::next"), buf.getRawBuffer());
      }
      catch (RuntimeException &e){ 
        if(e.getCode()==XMLExcepts::Regex_RepPatMatchesZeroString)
          XQThrow(ASTException, X("AnalyzeStringResult::next"), X("The pattern matches the zero-length string [err:XTDE1150]"));
        else 
          XQThrow(ASTException, X("AnalyzeStringResult::next"), e.getMessage());
      }

      int tokStart = 0;

      unsigned int i = 0;
      for(; i < matches_.size(); ++i) {
        Match *match = matches_.elementAt(i);
        int matchStart = match->getStartPos(0);
        int matchEnd = match->getEndPos(0);

        if(tokStart < matchStart) {
          const XMLCh *str = XPath2Utils::subString(input_, tokStart, matchStart - tokStart, mm);
          strings_.push_back(pair<const XMLCh*, Match*>(str, 0));
        }

        const XMLCh *str = XPath2Utils::subString(input_, matchStart, matchEnd - matchStart, mm);
        strings_.push_back(pair<const XMLCh*, Match*>(str, match));

        tokStart = matchEnd;
      }
    }

    AutoContextInfoReset autoReset(context);
    AutoRegexGroupStoreReset regexReset(context, this);

    context->setContextSize(strings_.size());
    context->setContextPosition(contextPos_);
    context->setContextItem(contextItem_);

    Item::Ptr item;
    while((item = result_->next(context)).isNull()) {
      context->testInterrupt();

      autoReset.resetContextInfo();
      regexReset.reset();

      if(contextPos_ < strings_.size()) {
        contextItem_ = context->getItemFactory()->createString(strings_[contextPos_].first, context);
        currentMatch_ = strings_[contextPos_].second;
        ++contextPos_;

        context->setContextSize(strings_.size());
        context->setContextPosition(contextPos_);
        context->setContextItem(contextItem_);
        context->setRegexGroupStore(this);

        if(currentMatch_) {
          result_ = ast_->getMatch()->createResult(context);
        }
        else {
          result_ = ast_->getNonMatch()->createResult(context);
        }
      }
      else {
        return 0;
      }
    }

    return item;
  }

  virtual std::string asString(DynamicContext *context, int indent) const { return ""; }

private:
  virtual const XMLCh *getGroup(int index) const
  {
    if(currentMatch_ == 0 || index < 0 || index >= currentMatch_->getNoGroups())
      return 0;

    int matchStart = currentMatch_->getStartPos(index);
    return XPath2Utils::subString(input_, matchStart, currentMatch_->getEndPos(index) - matchStart, mm_);
  }

  const XQAnalyzeString *ast_;

  const XMLCh *input_;
  RefVectorOf<Match> matches_;
  vector<pair<const XMLCh*, Match*> > strings_;

  size_t contextPos_;
  Item::Ptr contextItem_;
  Match *currentMatch_;
  XPath2MemoryManager *mm_;

  Result result_;
};

Result XQAnalyzeString::createResult(DynamicContext* context, int flags) const
{
  return new AnalyzeStringResult(this);
}
