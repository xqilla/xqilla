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
#include <sstream>
#include <xqilla/runtime/EmptyResult.hpp>

EmptyResult::EmptyResult(DynamicContext *context)
  : ResultImpl(context)
{
}

Item::Ptr EmptyResult::next(DynamicContext *context)
{
  return 0;
}

std::string EmptyResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<empty/>" << std::endl;

  return oss.str();
}
