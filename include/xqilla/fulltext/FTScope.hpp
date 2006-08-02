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

#ifndef _FTSCOPE_HPP
#define _FTSCOPE_HPP

#include <xqilla/fulltext/FTOption.hpp>

class XQILLA_API FTScope : public FTOption
{
public:
  enum Type {
    SAME,
    DIFFERENT
  };

  FTScope(Type type, FTUnit unit, XPath2MemoryManager *memMgr)
    : FTOption(FTSelection::SCOPE, memMgr), type_(type), unit_(unit), arg_(0) {}
  FTScope(FTSelection *arg, Type type, FTUnit unit, XPath2MemoryManager *memMgr)
    : FTOption(FTSelection::SCOPE, memMgr), type_(type), unit_(unit), arg_(arg) {}

  virtual FTSelection *staticResolution(StaticContext *context);
  virtual FTSelection *optimize(FTContext *context, bool execute) const;
  virtual AllMatches::Ptr execute(FTContext *ftcontext) const;

  virtual void setArgument(FTSelection *arg) { arg_ = arg; }
  const FTSelection *getArgument() const { return arg_; }
  Type getType() const { return type_; }
  FTUnit getUnit() const { return unit_; }

private:
  Type type_;
  FTUnit unit_;
  FTSelection *arg_;
};

class FTScopeSameMatches : public AllMatches
{
public:
  FTScopeSameMatches(FTOption::FTUnit unit, const AllMatches::Ptr &arg)
    : unit_(unit), arg_(arg) {}
  Match::Ptr next(DynamicContext *context);

private:
  FTOption::FTUnit unit_;
  AllMatches::Ptr arg_;
};

class FTScopeDifferentMatches : public AllMatches
{
public:
  FTScopeDifferentMatches(FTOption::FTUnit unit, const AllMatches::Ptr &arg)
    : unit_(unit), arg_(arg) {}
  Match::Ptr next(DynamicContext *context);

private:
  FTOption::FTUnit unit_;
  AllMatches::Ptr arg_;
};

#endif
