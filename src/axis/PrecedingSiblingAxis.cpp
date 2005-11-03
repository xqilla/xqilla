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
#include <xqilla/axis/PrecedingSiblingAxis.hpp>
#include <xercesc/dom/DOMNode.hpp>

PrecedingSiblingAxis::PrecedingSiblingAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory),
    sibling_(0)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *PrecedingSiblingAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    sibling_ = getPreviousSibling(contextNode_);
  }
  else if(sibling_ != 0) {
    sibling_ = getPreviousSibling(sibling_);
  }

  return sibling_;
}

std::string PrecedingSiblingAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<preceding_sibling_axis/>";
}
