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
    properties |= StaticResolutionContext::ONENODE | StaticResolutionContext::DOCORDER |
	    StaticResolutionContext::SUBTREE | StaticResolutionContext::PEER;
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
  properties |= StaticResolutionContext::GROUPED | StaticResolutionContext::SAMEDOC;

  if(isForwardAxis(axis) || axis == PARENT) {
    properties |= StaticResolutionContext::DOCORDER;
  }

  return properties;
}

ASTNode* XQStep::staticResolution(StaticContext *context)
{
  _src.setProperties(getAxisProperties(axis_));
  _src.getStaticType().flags = StaticType::NODE_TYPE;
  _src.contextItemUsed(true);
  nodeTest_->staticResolution(context, this);
  return this;
}

Result XQStep::createResult(DynamicContext* context, int flags) const 
{
  return new StepResult(this);
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

XQStep::StepResult::StepResult(const XQStep *step)
  : ResultImpl(step),
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

    if(item == NULLRCP) {
      XQThrow(TypeErrorException,X("XQStep::StepResult::next"), X("It is an error for the context item to be undefined when using it [err:XPDY0002]"));
    }
    if(!item->isNode()) {
      XQThrow(TypeErrorException,X("XQStep::StepResult::next"), X("An attempt was made to perform an axis step when the Context Item was not a node [err:XPTY0020]"));
    }

    result_ = ((Node*)item.get())->getAxisResult(step_->getAxis(), step_->getNodeTest(), context, this);
  }

  return result_->next(context);
}

std::string XQStep::StepResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<step name=\"" << PrintAST::getAxisName(step_->getAxis()) << "\"/>" << std::endl;

  return oss.str();
}
