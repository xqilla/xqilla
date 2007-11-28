/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
 *     Oracle. All rights reserved.
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

#include <sstream>

#include "../config/xqilla_config.h"
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/axis/NodeTest.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/exceptions/TypeErrorException.hpp>
#include <xqilla/utils/PrintAST.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

XQStep::XQStep(Axis axis, NodeTest* nodeTest, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
    nodeTest_(nodeTest),
    axis_(axis)
{
  setType(ASTNode::STEP);
}

XQStep::~XQStep()
{
}

unsigned int XQStep::getAxisProperties(Axis axis)
{
  unsigned int properties = 0;
  // properties depend on the axis of the step
  switch (axis) {
  case SELF:
    properties |= StaticAnalysis::ONENODE | StaticAnalysis::SELF;
    // Fall through
  case CHILD:
  case ATTRIBUTE:
  case NAMESPACE:
    properties |= StaticAnalysis::SUBTREE | StaticAnalysis::PEER;
    break;
  case DESCENDANT:
  case DESCENDANT_OR_SELF:
    properties |= StaticAnalysis::SUBTREE;
    break;
  case FOLLOWING_SIBLING:
  case PRECEDING_SIBLING:
    properties |= StaticAnalysis::PEER;
    break;
  case PARENT:
    properties |= StaticAnalysis::PEER | StaticAnalysis::ONENODE;
    break;
  default:
    break;
  }
  properties |= StaticAnalysis::GROUPED | StaticAnalysis::SAMEDOC;

  if(isForwardAxis(axis) || axis == PARENT) {
    properties |= StaticAnalysis::DOCORDER;
  }

  return properties;
}

ASTNode* XQStep::staticResolution(StaticContext *context)
{
  nodeTest_->staticResolution(context, this);
  return this;
}

ASTNode *XQStep::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.setProperties(getAxisProperties(axis_));
  _src.contextItemUsed(true);

  bool isExact;
  nodeTest_->getStaticType(_src.getStaticType(), context, isExact, this);

  switch(axis_) {
  case SELF:
    _src.getStaticType().typeIntersect(context->getContextItemType());
    break;
  case ATTRIBUTE:
    _src.getStaticType().typeIntersect(StaticType::ATTRIBUTE_TYPE);
    break;
  case NAMESPACE:
    _src.getStaticType().typeIntersect(StaticType::NAMESPACE_TYPE);
    break;
  case CHILD:
  case DESCENDANT:
  case FOLLOWING:
  case FOLLOWING_SIBLING:
  case PRECEDING:
  case PRECEDING_SIBLING:
    _src.getStaticType().typeIntersect(StaticType::ELEMENT_TYPE | StaticType::TEXT_TYPE | StaticType::PI_TYPE |
                                       StaticType::COMMENT_TYPE);
    break;
  case ANCESTOR:
  case PARENT:
    _src.getStaticType().typeIntersect(StaticType::DOCUMENT_TYPE | StaticType::ELEMENT_TYPE);
    break;
  case DESCENDANT_OR_SELF:
  case ANCESTOR_OR_SELF:
    // Could be any type
    break;
  }

  return this;
}

Result XQStep::createResult(DynamicContext* context, int flags) const 
{
  return new StepResult(axis_, nodeTest_, this);
}

bool XQStep::isForwardAxis(Axis axis)
{
  switch(axis) {
  case ANCESTOR:
  case ANCESTOR_OR_SELF:
  case PARENT:
  case PRECEDING:
  case PRECEDING_SIBLING:
    return false;

  case ATTRIBUTE:
  case CHILD:
  case DESCENDANT:
  case DESCENDANT_OR_SELF:
  case FOLLOWING:
  case FOLLOWING_SIBLING:
  case NAMESPACE:
  case SELF:
    return true;
  }
  return false;
}

const NodeTest *XQStep::getNodeTest() const {
  return nodeTest_;
}

void XQStep::setNodeTest(NodeTest *nt) {
  nodeTest_ = nt;
}

XQStep::Axis XQStep::getAxis() const {
  return axis_;
}

void XQStep::setAxis(XQStep::Axis a) {
  axis_ = a;
}

StepResult::StepResult(XQStep::Axis axis, const NodeTest *nt, const LocationInfo *location)
  : ResultImpl(location),
    toDo_(true),
    result_(0),
    axis_(axis),
    nodeTest_(nt)
{
}

Item::Ptr StepResult::next(DynamicContext *context)
{
  if(toDo_) {
    toDo_ = false;

    Item::Ptr item = context->getContextItem();

    if(item == NULLRCP) {
      XQThrow(TypeErrorException,X("StepResult::next"), X("It is an error for the context item to be undefined when using it [err:XPDY0002]"));
    }
    if(!item->isNode()) {
      XQThrow(TypeErrorException,X("StepResult::next"), X("An attempt was made to perform an axis step when the Context Item was not a node [err:XPTY0020]"));
    }

    result_ = ((Node*)item.get())->getAxisResult(axis_, nodeTest_, context, this);
  }

  return result_->next(context);
}

std::string StepResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<step name=\"" << PrintAST::getAxisName(axis_) << "\"/>" << std::endl;

  return oss.str();
}
