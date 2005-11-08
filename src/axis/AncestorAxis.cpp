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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/axis/AncestorAxis.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>

AncestorAxis::AncestorAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context, const AxisNodeFactory &factory)
  : Axis(contextNode, nodeObj, nodeTest, context, factory),
    ancestor_(0)
{
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *AncestorAxis::nextNode()
{
  if(toDo_) {
    // initialise
    toDo_ = false;
    ancestor_ = contextNode_;
  }

  if(ancestor_ != 0) {
    ancestor_ = getParent(ancestor_);
  }

  return ancestor_;
}

std::string AncestorAxis::asString(DynamicContext *context, int indent) const
{
  return getIndent(indent) + "<ancestor_axis/>";
}
