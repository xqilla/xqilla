/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/fulltext/FTContent.hpp>
#include <xqilla/fulltext/FTDistance.hpp>
#include <xqilla/context/DynamicContext.hpp>

FTSelection *FTContent::staticResolution(StaticContext *context)
{
  arg_ = arg_->staticResolution(context);
  src_.add(arg_->getStaticResolutionContext());

  return this;
}

FTSelection *FTContent::optimize(FTContext *ftcontext, bool execute) const
{
  XPath2MemoryManager *mm = ftcontext->context->getMemoryManager();

  FTSelection *newarg = arg_->optimize(ftcontext, execute);
  if(newarg == 0) return 0;

  if(type_ == ENTIRE_CONTENT) {
    newarg = new (mm) FTDistanceLiteral(newarg, FTRange::EXACTLY, 0, 0, FTOption::WORDS, mm);
    newarg = new (mm) FTContent(newarg, AT_START, mm);
    return new (mm) FTContent(newarg, AT_END, mm);
  }

  return new (mm) FTContent(newarg, type_, mm);
}

AllMatches::Ptr FTContent::execute(FTContext *ftcontext) const
{
  switch(type_) {
  case AT_START:
    return new FTContentAtStartMatches(arg_->execute(ftcontext));
  case AT_END:
    return new FTContentAtEndMatches(arg_->execute(ftcontext));
  default:
    // ENTIRE_CONTENT is handled by optimize()
    assert(0);
    break;
  }
  return 0;
}

Match::Ptr FTContentAtStartMatches::next(DynamicContext *context)
{
  if(arg_.isNull()) return 0;

  StringMatches::const_iterator smallest;
  Match::Ptr match(0);
  while(match.isNull()) {
    match = arg_->next(context);
    if(match.isNull()) {
      arg_ = 0;
      return 0;
    }

    StringMatches::const_iterator i = match->getStringIncludes().begin();
    StringMatches::const_iterator end = match->getStringIncludes().end();
    if(i != end) {
      smallest = i;
      for(++i; i != end; ++i) {
        if(i->tokenInfo->getPosition() < smallest->tokenInfo->getPosition()) {
          smallest = i;
        }
      }
    }
    else {
      match = 0;
    }
  }

  Match::Ptr result = new Match();
  StringMatches::const_iterator i = match->getStringIncludes().begin();
  StringMatches::const_iterator end = match->getStringIncludes().end();
  for(; i != end; ++i) {
    if(i == smallest) {
      StringMatch sm(*i);
      sm.startToken = true;
      result->addStringInclude(sm);
    }
    else {
      result->addStringInclude(*i);
    }
  }
  result->addStringExcludes(match->getStringExcludes());

  return result;
}

Match::Ptr FTContentAtEndMatches::next(DynamicContext *context)
{
  if(arg_.isNull()) return 0;

  StringMatches::const_iterator largest;
  Match::Ptr match(0);
  while(match.isNull()) {
    match = arg_->next(context);
    if(match.isNull()) {
      arg_ = 0;
      return 0;
    }

    StringMatches::const_iterator i = match->getStringIncludes().begin();
    StringMatches::const_iterator end = match->getStringIncludes().end();
    if(i != end) {
      largest = i;
      for(++i; i != end; ++i) {
        if(i->tokenInfo->getPosition() > largest->tokenInfo->getPosition()) {
          largest = i;
        }
      }
    }
    else {
      match = 0;
    }
  }

  Match::Ptr result = new Match();
  StringMatches::const_iterator i = match->getStringIncludes().begin();
  StringMatches::const_iterator end = match->getStringIncludes().end();
  for(; i != end; ++i) {
    if(i == largest) {
      StringMatch sm(*i);
      sm.endToken = true;
      result->addStringInclude(sm);
    }
    else {
      result->addStringInclude(*i);
    }
  }
  result->addStringExcludes(match->getStringExcludes());

  return result;
}
