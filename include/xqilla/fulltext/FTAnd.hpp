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

#ifndef _FTAND_HPP
#define _FTAND_HPP

#include <xqilla/fulltext/FTSelection.hpp>

#include <list>

class XQILLA_API FTAnd : public FTSelection
{
public:
  FTAnd(XPath2MemoryManager *memMgr);
  FTAnd(FTSelection *left, FTSelection *right, XPath2MemoryManager *memMgr);

  virtual FTSelection *staticResolution(StaticContext *context);
  virtual FTSelection *optimize(FTContext *context, bool execute) const;
  virtual AllMatches::Ptr execute(FTContext *ftcontext) const;

  const VectorOfFTSelections &getArguments() const { return args_; }
  void addArg(FTSelection *sel) { args_.push_back(sel); }

private:
  VectorOfFTSelections args_;
};

class BufferedMatches : public AllMatches
{
public:
  typedef RefCountPointer<BufferedMatches> Ptr;

  BufferedMatches(const AllMatches::Ptr matches);

  Match::Ptr current();
  Match::Ptr next(DynamicContext *context);
  void reset();

private:
  AllMatches::Ptr matches_;
  std::list<Match::Ptr> buffer_;
  std::list<Match::Ptr>::iterator it_;
};

class FTConjunctionMatches : public AllMatches
{
public:
  FTConjunctionMatches();

  void addMatches(const AllMatches::Ptr &m);

  Match::Ptr next(DynamicContext *context);

private:
  bool toDo_;
  std::vector<BufferedMatches::Ptr> args_;
};

#endif
