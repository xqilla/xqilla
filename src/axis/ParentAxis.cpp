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
#include <xqilla/axis/ParentAxis.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMAttr.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xqilla/items/Node.hpp>

ParentAxis::ParentAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *ParentAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    return getParent(contextNode_);
  }
  else {
    return 0;
  }
}

std::string ParentAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<parent_axis/>";
}
