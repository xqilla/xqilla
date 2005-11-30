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
#include <sstream>

#include <xqilla/utils/PrintAST.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xqilla/exceptions/TypeErrorException.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <set>

XQNav::XQNav(XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr),
    _isSorted(-1),
    _properties(0),
	  _steps(XQillaAllocator<StepInfo>(memMgr))
{
  setType(ASTNode::NAVIGATION);
  _gotoRoot = false;
}


XQNav::~XQNav()
{
  //no-op
}

Result XQNav::createResult(DynamicContext* context, int flags) const
{
  Result result(0);
  flags &= ~(RETURN_ONE | RETURN_TWO);

  if(_gotoRoot) {
    result = new GotoRootResult(context);
  }

  Steps::const_iterator end = _steps.end();
  for(Steps::const_iterator it = _steps.begin(); it != end; ++it) {
    if(it->usesContextSize) {
      // We need the context size, so convert to a Sequence to work it out
      Sequence seq(result.toSequence(context));
      result = new StepResult(new SequenceResult(seq), it->step, seq.getLength(), flags, context);
    }
    else if(!it->step->getStaticResolutionContext().areContextFlagsUsed()) {
      result = it->step->collapseTree(context, flags);
    }
    else {
      result = new StepResult(result, it->step, 0, flags, context);
    }

    const StaticType &st = it->step->getStaticResolutionContext().getStaticType();
    if(it == (end-1)) {
      // the last step allows either nodes or atomic items
      if((st.flags & StaticType::NODE_TYPE) &&
         ((st.flags & StaticType::NUMERIC_TYPE) ||
          (st.flags & StaticType::OTHER_TYPE))) {
        result = new LastStepCheckResult(result, context);
      }
    }
    else {
      if((st.flags & StaticType::NUMERIC_TYPE) ||
         (st.flags & StaticType::OTHER_TYPE)) {
        result = new IntermediateStepCheckResult(result, context);
      }
    }
  }

  if(getIsSorted()) {
    return result;
  }
  else if(context->getNodeSetOrdering()==StaticContext::ORDERING_UNORDERED ||
     flags & ASTNode::UNORDERED) {
    return new UniqueNodesResult(result, context);
  }
  else {
    return result.sortIntoDocumentOrder(context);
  }
}

void XQNav::addStep(XQStep::Axis axis, NodeTest* nodeTest)
{
  _steps.push_back(new (getMemoryManager()) XQStep(axis, nodeTest, getMemoryManager()));
}

void XQNav::addStep(const StepInfo &step)
{
  _steps.push_back(step);
}

void XQNav::addStepFront(ASTNode* step)
{
  _steps.insert(_steps.begin(), step);
}

void XQNav::setGotoRootFirst(bool gotoRoot)
{
  _gotoRoot = gotoRoot;
}

ASTNode* XQNav::staticResolution(StaticContext *context)
{
  Steps newSteps(XQillaAllocator<StepInfo>(context->getMemoryManager()));

  StaticType oldContextItemType = context->getContextItemType();

  if(_gotoRoot) {
    _src.contextItemUsed(true);
    StaticType newContextItemType;
    newContextItemType.flags = StaticType::NODE_TYPE;
    context->setContextItemType(newContextItemType);
  }

  Steps::iterator begin = _steps.begin();
  Steps::iterator end = _steps.end();
  Steps::iterator it = begin;
  for(; it != end; ++it) {
    // Statically resolve our step
    ASTNode *step = it->step->staticResolution(context);
    const StaticResolutionContext &stepSrc = step->getStaticResolutionContext();
    context->setContextItemType(stepSrc.getStaticType());

    if(stepSrc.areContextFlagsUsed() || _src.isNoFoldingForced()) {
      newSteps.push_back(StepInfo(step, stepSrc.isContextSizeUsed()));

      if(it != begin || _gotoRoot) {
        // Remove context item usage
        _src.addExceptContextFlags(stepSrc);
      }
      else {
        _src.add(stepSrc);
      }
    }
    else {
      // Constant fold, by clearing all our previous steps (and the root pseudo-step)
      // and just having our most recent step.
      // This is only possible because the result of steps has to be nodes, and
      // duplicates are removed, which means we aren't forced to execute a constant
      // step a set number of times.
      _gotoRoot = false;
      newSteps.clear();
      newSteps.push_back(StepInfo(step, stepSrc.isContextSizeUsed()));
      _src.add(stepSrc);
    }
  }

  _steps = newSteps;
  newSteps.clear();

  it = _steps.begin();
  end = _steps.end();
  for(; it != end; ++it) {
    // Special case, to optimise //foo or //descendant::foo
    if(it->step->getType() == ASTNode::STEP) {
      XQStep *step = (XQStep*)it->step;
      NodeTest *nodetest = (NodeTest*)step->getNodeTest();

      // Check for a step with a type wildcard
      if(nodetest->getTypeWildcard() && (it + 1) != end) {
        const ASTNode *peek = (it + 1)->step;
        if(peek->getType() == ASTNode::STEP) {
          const XQStep *peekstep = (XQStep*)peek;
          // If the next node is CHILD or DESCENDANT axis, then
          // this step must have children
          if(peekstep->getAxis() == XQStep::CHILD || peekstep->getAxis() == XQStep::DESCENDANT) {

            // Check for a descendant-or-self axis
            if(step->getAxis() == XQStep::DESCENDANT_OR_SELF &&
               step->getPredicates().empty()) {

              bool usesContextPositionOrSize = false;
              Predicates::const_iterator it2 = peekstep->getPredicates().begin();
              Predicates::const_iterator end2 = peekstep->getPredicates().end();
              for(; it2 != end2; ++it2) {
                if(it2->pred->getStaticResolutionContext().isContextPositionUsed() ||
                   it2->pred->getStaticResolutionContext().isContextSizeUsed() ||
                   it2->pred->getStaticResolutionContext().getStaticType().flags & StaticType::NUMERIC_TYPE) {
                  usesContextPositionOrSize = true;
                  break;
                }
              }

              if(!usesContextPositionOrSize) {
                // This is a descendant-or-self::node()/child::foo that we can optimise into descendant::foo
                ++it;
                const_cast<XQStep*>(peekstep)->setAxis(XQStep::DESCENDANT);
              }
            }

            nodetest->setHasChildren();
          }
          // If the next node is ATTRIBUTE axis, then this step needs to be
          // an element
          else if(peekstep->getAxis() == XQStep::ATTRIBUTE) {
            nodetest->setTypeWildcard(false);
            nodetest->setNodeType(Node::element_string);
          }
        }
      }
    }

    newSteps.push_back(*it);
  }

  _steps = newSteps;

  if(!_steps.empty()) {
    _src.getStaticType() = _steps.back().step->getStaticResolutionContext().getStaticType();
  }
  else if(_gotoRoot) {
    _src.getStaticType().flags = StaticType::NODE_TYPE;
  }

  getIsSorted(); // Calculate the properties

  context->setContextItemType(oldContextItemType);

  if(_src.isUsed()) {
    return resolvePredicates(context);
  }
  else {
    return constantFold(context);
  }
}

bool XQNav::getGotoRootFirst() const {
  return _gotoRoot;
}

const XQNav::Steps &XQNav::getSteps() const {
  return _steps;
}

unsigned int XQNav::combineProperties(unsigned int prev_props, unsigned int step_props)
{
  unsigned int new_props = 0;
  if((prev_props & StaticResolutionContext::ONENODE) && (step_props & StaticResolutionContext::DOCORDER)) {
    // If there was only one input node, and the step is in document order
    // then we are still in document order
    new_props |= StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED;
  }

  if((prev_props & StaticResolutionContext::DOCORDER) && (prev_props & StaticResolutionContext::PEER) &&
     (step_props & StaticResolutionContext::DOCORDER) && (step_props & StaticResolutionContext::SUBTREE)) {
    // We keep the DOCORDER property, along with a few others that come for free
    new_props |= StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::SUBTREE;
    if(step_props & StaticResolutionContext::PEER) {
      new_props |= StaticResolutionContext::PEER;
    }
  }

  if((prev_props & StaticResolutionContext::GROUPED) && (step_props & StaticResolutionContext::SAMEDOC)) {
    // If the step keeps in the SAMEDOC, then the GROUPED property is maintained
    new_props |= StaticResolutionContext::GROUPED;
  }

  if((prev_props & StaticResolutionContext::SUBTREE) && (step_props & StaticResolutionContext::SUBTREE)) {
    // If both are SUBTREE, then we still have SUBTREE
    new_props |= StaticResolutionContext::SUBTREE;
  }

  if((prev_props & StaticResolutionContext::SAMEDOC) && (step_props & StaticResolutionContext::SAMEDOC)) {
    // If both are SAMEDOC, then we still have SAMEDOC
    new_props |= StaticResolutionContext::SAMEDOC;
  }

  if((prev_props & StaticResolutionContext::ONENODE) && (step_props & StaticResolutionContext::ONENODE)) {
    // If both are ONENODE, then we still have ONENODE
    new_props |= StaticResolutionContext::ONENODE;
  }

  return new_props;
}

// If the results of this navigation are already sorted,
// return true.  _isSorted is a cache of the answer,
// which is obtained by walking the steps.
//  -1 - unknown
//  0 - not sorted
//  1 - sorted
bool XQNav::getIsSorted() const
{
  if (_isSorted == -1) {
    Steps::const_iterator end = _steps.end();
    Steps::const_iterator it = _steps.begin();

    if(_gotoRoot) {
      _properties = StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::PEER | StaticResolutionContext::ONENODE;
    }
    else {
      _properties = it->step->getStaticResolutionContext().getProperties();
      ++it;
    }

    for(; it != end; ++it) {
      _properties = combineProperties(_properties, it->step->getStaticResolutionContext().getProperties());
    }

    _isSorted = (_properties & StaticResolutionContext::DOCORDER) ? 1 : 0;
    const_cast<XQNav*>(this)->_src.setProperties(_properties | StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED);
  }
  return (_isSorted > 0);
}

/////////////////////////////////////
// GotoRootResult
/////////////////////////////////////

XQNav::GotoRootResult::GotoRootResult(DynamicContext *context)
  : SingleResult(context)
{
}

Item::Ptr XQNav::GotoRootResult::getSingleResult(DynamicContext *context) const
{
  // Do equivalent of root()
  const Item::Ptr contextItem = context->getContextItem();
  if(contextItem != NULLRCP && contextItem->isNode()) {
    return FunctionRoot::root((const Node::Ptr)contextItem, context);
  } else {
    XQThrow(TypeErrorException,X("XQNav::collapseTreeInternal"), X("An attempt to navigate when the Context Item was not a node was made [err:XPTY0020]"));
  }
  return 0;
}

std::string XQNav::GotoRootResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<nav_goto_root/>" << std::endl;

  return oss.str();
}

/////////////////////////////////////
// StepResult
/////////////////////////////////////

XQNav::StepResult::StepResult(const Result &parent, ASTNode *step, unsigned int contextSize, int flags, DynamicContext *context)
  : ResultImpl(context),
    initialised_(false),
    flags_(flags),
    parent_(parent),
    step_(step),
    stepResult_(0),
    contextPos_(0),
    contextSize_(contextSize),
    contextItem_(0)
{
}

Item::Ptr XQNav::StepResult::next(DynamicContext *context)
{
  unsigned int oldContextSize = context->getContextSize();
  unsigned int oldContextPosition = context->getContextPosition();
  const Item::Ptr oldContextItem = context->getContextItem();

  context->setContextSize(contextSize_);
  context->setContextPosition(contextPos_);
  context->setContextItem(contextItem_);

  Item::Ptr result = 0;
  while(true) {
    result = stepResult_.next(context);
    if(result == NULLRCP) {
      if(!initialised_ && parent_.isNull()) {
        initialised_ = true;
        // We have no parent step, so navigate from the context item
        contextItem_ = oldContextItem;
        contextPos_ = oldContextPosition;
        contextSize_ = oldContextSize;
      }
      else {
        context->setContextSize(oldContextSize);
        context->setContextPosition(oldContextPosition);
        context->setContextItem(oldContextItem);

        contextItem_ = parent_.next(context);
        if(contextItem_ == NULLRCP) {
          parent_ = 0;
          stepResult_ = 0;
          return 0;
        }
        ++contextPos_;
      }

      context->setContextSize(contextSize_);
      context->setContextPosition(contextPos_);
      context->setContextItem(contextItem_);

      stepResult_ = step_->collapseTree(context, flags_);
    }
    else {
      // no duplicate check
      context->setContextSize(oldContextSize);
      context->setContextPosition(oldContextPosition);
      context->setContextItem(oldContextItem);
      return result;
    }
  }

  return 0;
}

void XQNav::StepResult::skip()
{
	stepResult_ = 0;
	parent_.skip();
}

std::string XQNav::StepResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<step contextSize=\"" << contextSize_ << "\">" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << PrintAST::print(step_, context, indent + 1);
  oss << in << "</step>" << std::endl;

  return oss.str();
}

XQNav::IntermediateStepCheckResult::IntermediateStepCheckResult(const Result &parent, DynamicContext *context)
  : ResultImpl(context),
    parent_(parent)
{
}

Item::Ptr XQNav::IntermediateStepCheckResult::next(DynamicContext *context)
{
  Item::Ptr result = parent_.next(context);

  // Check it's a node
  if(result != NULLRCP && !result->isNode()) {
    XQThrow(TypeErrorException,X("XQNav::StepResult::next"),
             X("The result of a step expression (StepExpr) is not a sequence of nodes [err:XPTY0019]"));
  }

  return result;
}

void XQNav::IntermediateStepCheckResult::skip()
{
	parent_.skip();
}

std::string XQNav::IntermediateStepCheckResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<intermediatestepcheck>" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << in << "</intermediatestepcheck>" << std::endl;

  return oss.str();
}

XQNav::LastStepCheckResult::LastStepCheckResult(const Result &parent, DynamicContext *context)
  : ResultImpl(context),
    parent_(parent),
    _nTypeOfItemsInLastStep(0)
{
}

Item::Ptr XQNav::LastStepCheckResult::next(DynamicContext *context)
{
  Item::Ptr result = parent_.next(context);

  if(result != NULLRCP) {
    // the last step allows either nodes or atomic items
    switch(_nTypeOfItemsInLastStep) {
    case 0: _nTypeOfItemsInLastStep=result->isNode()?1:2; break;
    case 1: if(!result->isNode()) 
      XQThrow(TypeErrorException,X("XQNav::StepResult::next"),
               X("The result of the last step in a path expression contains both nodes and atomic values [err:XPTY0018]"));
      break;
    case 2: if(result->isNode()) 
      XQThrow(TypeErrorException,X("XQNav::StepResult::next"),
               X("The result of the last step in a path expression contains both nodes and atomic values [err:XPTY0018]"));
      break;
    }
  }

  return result;
}

void XQNav::LastStepCheckResult::skip()
{
	parent_.skip();
}

std::string XQNav::LastStepCheckResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<laststepcheck>" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << in << "</laststepcheck>" << std::endl;

  return oss.str();
}

XQNav::UniqueNodesResult::UniqueNodesResult(const Result &parent, DynamicContext *context)
  : ResultImpl(context),
    parent_(parent),
    nTypeOfItemsInLastStep_(0),
    noDups_(uniqueLessThanCompareFn(context))
{
}

Item::Ptr XQNav::UniqueNodesResult::next(DynamicContext *context)
{
  Item::Ptr result = parent_.next(context);

  if(nTypeOfItemsInLastStep_ == 0 && result.notNull())
	  nTypeOfItemsInLastStep_ = result->isNode() ? 1 : 2;

  if(nTypeOfItemsInLastStep_ == 1) {
	  while(result.notNull()) {
		  if(noDups_.insert(result).second) break;
		  else result = parent_.next(context);
	  }
  }

  return result;
}

void XQNav::UniqueNodesResult::skip()
{
	parent_.skip();
}

std::string XQNav::UniqueNodesResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<uniqueNodesResult>" << std::endl;
  if(!parent_.isNull()) {
    oss << in << "  <parent>" << std::endl;
    oss << parent_.asString(context, indent + 2);
    oss << in << "  </parent>" << std::endl;
  }
  oss << in << "</uniqueNodesResult>" << std::endl;

  return oss.str();
}

XQNav::UniqueNodesResult::uniqueLessThanCompareFn::
uniqueLessThanCompareFn(const DynamicContext *context)
  : context_(context)
{
}

bool XQNav::UniqueNodesResult::uniqueLessThanCompareFn::
operator()(const Node::Ptr &first, const Node::Ptr &second)
{
  return first->uniqueLessThan(second, context_);
}
