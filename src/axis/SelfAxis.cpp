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
#include <xqilla/axis/SelfAxis.hpp>

#include <xqilla/items/Node.hpp>

SelfAxis::SelfAxis(Node::Ptr contextNode, DynamicContext *context)
  : ResultImpl(context),
    toDo_(true),
    contextNode_(contextNode)
{
}

Item::Ptr SelfAxis::next(DynamicContext *context)
{
  if(toDo_) {
    toDo_ = false;
    return contextNode_;
  }
  else {
    return 0;
  }
}

std::string SelfAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<self_axis/>";
}
