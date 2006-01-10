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

#ifndef _ATOMIZERESULT_HPP
#define _ATOMIZERESULT_HPP

#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/ResultImpl.hpp>

class XQILLA_API AtomizeResult : public ResultImpl
{
public:
  AtomizeResult(const Result &parent, DynamicContext *context);

  Item::Ptr next(DynamicContext *context);

  std::string asString(DynamicContext *context, int indent) const;

private:
  Result _parent;
  Result _sub;
};

#endif
