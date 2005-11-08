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

#include <sstream>

#include "../config/xqilla_config.h"
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/axis/NodeTest.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/exceptions/TypeErrorException.hpp>
#include <xqilla/utils/PrintAST.hpp>

XQStep::XQStep(Axis axis, NodeTest* nodeTest, XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr),
    nodeTest_(nodeTest),
    axis_(axis)
{
  setType(ASTNode::STEP);
}

XQStep::~XQStep()
{
	//no-op
}


ASTNode* XQStep::staticResolution(StaticContext *context)
{
  unsigned int properties = 0;
  // properties depend on the axis of the step
  switch (axis_) {
  case SELF:
    properties |= StaticResolutionContext::ONENODE;
    // Fall through
  case CHILD:
  case ATTRIBUTE:
  case NAMESPACE:
    properties |= StaticResolutionContext::SUBTREE | StaticResolutionContext::PEER;
    break;
  case DESCENDANT:
  case DESCENDANT_OR_SELF:
    properties |= StaticResolutionContext::SUBTREE;
    break;
  case FOLLOWING_SIBLING:
  case PRECEDING_SIBLING:
    properties |= StaticResolutionContext::PEER;
    break;
  case PARENT:
    properties |= StaticResolutionContext::PEER | StaticResolutionContext::ONENODE;
    break;
  default:
    break;
  }
  properties |= StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::SAMEDOC;

  _src.setProperties(properties);
  _src.getStaticType().flags = StaticResolutionContext::NODE_TYPE;
  _src.contextItemUsed(true);
  nodeTest_->staticResolution(context);
  return resolvePredicates(context);
}

Result XQStep::createResult(DynamicContext* context, int flags) const 
{
  return new StepResult(this, context);
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

Result XQStep::postPredicateResultHook(Result &result, DynamicContext* context, int flags) const
{
  // parent axis doesn't need reordering
  if(!(context->getNodeSetOrdering()==StaticContext::ORDERING_UNORDERED || flags & ASTNode::UNORDERED) &&
     !isForwardAxis(axis_) && axis_ != PARENT) {
    // Reorder reverse axis results
    return result.sortIntoDocumentOrder(context);
  }
  else {
    return result;
  }
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

XQStep::StepResult::StepResult(const XQStep *step, DynamicContext *context)
  : ResultImpl(context),
    toDo_(true),
    result_(0),
    step_(step)
{
}

Item::Ptr XQStep::StepResult::next(DynamicContext *context)
{
  if(toDo_) {
    toDo_ = false;

    Item::Ptr item = context->getContextItem();

    if(item == NULLRCP || !item->isNode()) {
      XQThrow(TypeErrorException,X("XQStep::StepResult::next"), X("An attempt was made to perform an axis step when the Context Item was not a node [err:XPTY0020]"));
    }

    result_ = ((Node*)item.get())->getAxisResult(step_->getAxis(), step_->getNodeTest(), context);
  }

  return result_.next(context);
}

std::string XQStep::StepResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<step name=\"" << PrintAST::getAxisName(step_->getAxis()) << "\"/>" << std::endl;

  return oss.str();
}
