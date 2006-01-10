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
#include <xqilla/axis/PrecedingAxis.hpp>

#include <xqilla/items/Node.hpp>

#include <xercesc/dom/DOMAttr.hpp>
#include <xercesc/dom/DOMElement.hpp>

PrecedingAxis::PrecedingAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory),
    parent_(0),
    node_(0)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *PrecedingAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    node_ = contextNode_;
    parent_ = getParent(node_);
  }
  
  if(node_ != 0) {
    const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *result =
      getPreviousSibling(node_);

    while(result == 0) {
      node_ = getParent(node_);
      if(node_ != 0 && node_ == parent_) {
        parent_ = getParent(parent_);
        result = getPreviousSibling(node_);
      }
      else {
        break;
      }
    }

    while(result != 0) {
      node_ = result;
      result = getLastChild(node_);
    }
  }

  return node_;
}

std::string PrecedingAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<preceding_axis/>";
}
