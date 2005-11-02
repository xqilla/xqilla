/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#ifndef _ATOMIZERESULT_HPP
#define _ATOMIZERESULT_HPP

#include <xqilla/runtime/Result.hpp>
#include <xqilla/runtime/ResultImpl.hpp>

class PATHAN_EXPORT AtomizeResult : public ResultImpl
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
