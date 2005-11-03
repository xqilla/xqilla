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

#include "../config/xqilla_config.h"
#include <xqilla/axis/ChildAxis.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xqilla/items/Node.hpp>

ChildAxis::ChildAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory),
    child_(0)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *ChildAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    child_ = getFirstChild(contextNode_);
  }
  else if(child_ != 0) {
    child_ = getNextSibling(child_);
  }

  return child_;
}

std::string ChildAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<child_axis/>";
}
