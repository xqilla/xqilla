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

#ifndef _EMPTYRESULT_HPP
#define _EMPTYRESULT_HPP

#include <xqilla/runtime/ResultImpl.hpp>

class XQILLA_API EmptyResult : public ResultImpl
{
public:
  EmptyResult();

  Item::Ptr next(DynamicContext *context);

  std::string asString(DynamicContext *context, int indent) const;
};

#endif
