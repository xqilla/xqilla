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

#ifndef _SELFAXIS_HPP
#define _SELFAXIS_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/runtime/ResultImpl.hpp>
#include <xqilla/items/Node.hpp>

class PATHAN_EXPORT SelfAxis : public ResultImpl
{
public:
  SelfAxis(Node::Ptr contextNode, DynamicContext *context);
  Item::Ptr next(DynamicContext *context);
  std::string asString(DynamicContext *context, int indent) const;
private:
  bool toDo_;
  Node::Ptr contextNode_;
};

#endif

