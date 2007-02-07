/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include <set>

#include <xqilla/update/UTransform.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/context/UpdateFactory.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/context/Scope.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

UTransform::UTransform(VectorOfVariableBinding* bindings, ASTNode *modifyExpr, ASTNode* returnExpr, XPath2MemoryManager* mm)
  : XQFLWOR(bindings, NULL, NULL, returnExpr, mm),
    modify_(modifyExpr)
{
  setType(ASTNode::UTRANSFORM);
}

ASTNode *UTransform::staticResolution(StaticContext* context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  VectorOfVariableBinding::iterator end = _bindings->end();
  for(VectorOfVariableBinding::iterator it0 = _bindings->begin(); it0 != end; ++it0) {
    // Work out the uri and localname of the variable binding
    const XMLCh* prefix=XPath2NSUtils::getPrefix((*it0)->_variable, mm);
    if(prefix && *prefix)
      (*it0)->_vURI = context->getUriBoundToPrefix(prefix, this);
    (*it0)->_vName = XPath2NSUtils::getLocalName((*it0)->_variable);

    // call static resolution on the value
    (*it0)->_allValues = new (mm) XQContentSequence((*it0)->_allValues, mm);
    (*it0)->_allValues->setLocationInfo(this);
    (*it0)->_allValues = (*it0)->_allValues->staticResolution(context);
  }

  // Call staticResolution on the modify expression
  modify_ = modify_->staticResolution(context);

  // Call staticResolution on the return expression
  _return = _return->staticResolution(context);

  return this;
}

ASTNode *UTransform::staticTyping(StaticContext *context)
{
  _src.clear();

  VectorOfVariableBinding *newBindings =
    new (getMemoryManager()) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(getMemoryManager()));

  VariableTypeStore* varStore = context->getVariableTypeStore();

  // Add all the binding variables to the new scope
  VectorOfVariableBinding::iterator end = _bindings->end();
  for(VectorOfVariableBinding::iterator it0 = _bindings->begin(); it0 != end; ++it0) {
    varStore->addLogicalBlockScope();

    // call static resolution on the value
    (*it0)->_allValues = (*it0)->_allValues->staticTyping(context);
    (*it0)->_src.getStaticType() = (*it0)->_allValues->getStaticResolutionContext().getStaticType();

    if((*it0)->_allValues->getStaticResolutionContext().isUpdating()) {
      XQThrow(StaticErrorException,X("UTransform::staticTyping"),
              X("It is a static error for the copy expression of a transform expression "
                "to be an updating expression [err:XUST0001]"));
    }

    // Declare the variable binding
    (*it0)->_src.setProperties((*it0)->_allValues->getStaticResolutionContext().getProperties());
    varStore->declareVar((*it0)->_vURI, (*it0)->_vName, (*it0)->_src);
  }

  // Call staticTyping on the modify expression
  modify_ = modify_->staticTyping(context);
  _src.add(modify_->getStaticResolutionContext());
  _src.updating(false);

  if(!modify_->getStaticResolutionContext().isUpdating() &&
     modify_->getStaticResolutionContext().getStaticType().containsType(StaticType::ITEM_TYPE))
    XQThrow(StaticErrorException, X("UTransform::staticTyping"),
            X("The modify expression is not an updating expression [err:XUST0002]"));

  // Call staticResolution on the return expression
  _return = _return->staticTyping(context);
  _src.getStaticType() = _return->getStaticResolutionContext().getStaticType();
  _src.setProperties(_return->getStaticResolutionContext().getProperties());
  _src.add(_return->getStaticResolutionContext());

  if(_return->getStaticResolutionContext().isUpdating()) {
    XQThrow(StaticErrorException,X("UTransform::staticTyping"),
            X("It is a static error for the return expression of a transform expression "
              "to be an updating expression [err:XUST0001]"));
  }

  VectorOfVariableBinding::reverse_iterator rend = _bindings->rend();
  for(VectorOfVariableBinding::reverse_iterator it = _bindings->rbegin(); it != rend; ++it) {
    XQVariableBinding *newVB = new (getMemoryManager()) XQVariableBinding(getMemoryManager(), **it);
    newVB->setLocationInfo(*it);

    // Remove our variable binding and the scope we added
    varStore->removeScope();

    // Remove our binding variable from the StaticResolutionContext data (removing it if it's not used)
    if(!_src.removeVariable(newVB->_vURI, newVB->_vName) && !context->isDebuggingEnabled()) {
      newVB->_variable = 0;
    }

    const StaticResolutionContext &valueSrc = newVB->_allValues->getStaticResolutionContext();
    // if the expression makes use of a variable with the same name of the binding, we need a new scope
    if(valueSrc.isVariableUsed(newVB->_vURI, newVB->_vName))
      newVB->_needsNewScope=true;
    _src.add(valueSrc);

    VectorOfVariableBinding::reverse_iterator it2;
    // Check if previous variable bindings have been used by this value,
    for(it2 = it + 1; it2 != rend; ++it2) {
      if((*it2)->_variable && valueSrc.isVariableUsed((*it2)->_vURI, (*it2)->_vName)) {
        newVB->_valuesResultMustBeRecalculated = true;
        break;
      }
    }

    // Check to see if this binding has the same name as any before it
    // (4 comparisons, since each binding has two possible variables for it)
    for(it2 = it + 1; newVB->_needsNewScope==false && it2 != rend; ++it2) {
      if(newVB->_variable && (*it2)->_variable &&
         XPath2Utils::equals(newVB->_vName, (*it2)->_vName) && XPath2Utils::equals(newVB->_vURI, (*it2)->_vURI)) {
        newVB->_needsNewScope = true;
        break;
      }
    }

    // Add the new VB at the front of the new Bindings
    // (If it's a let binding, and it's variable isn't used, don't add it - there's no point)
    if(context->isDebuggingEnabled() || newVB->_variable) {
      newBindings->insert(newBindings->begin(), newVB);
    }
  }

  // Overwrite our bindings with the new ones
  _bindings = newBindings;

  if(_bindings->empty()) {
    return _return;
  }
  return this;
}

Result UTransform::createResult(DynamicContext* context, int flags) const
{
  return new TransformResult(this);
}

class nodecompare {
public:
  nodecompare(const DynamicContext *context)
    : context_(context) {}

  bool operator()(const Node::Ptr &first, const Node::Ptr &second) const
  {
    return first->uniqueLessThan(second, context_);
  }

private:
  const DynamicContext *context_;
};

typedef std::set<Node::Ptr, nodecompare> NodeSet;

UTransform::TransformResult::~TransformResult()
{
  if(scope_) delete scope_;
}

Item::Ptr UTransform::TransformResult::next(DynamicContext *context)
{
  context->testInterrupt();

  VariableStore* varStore = context->getVariableStore();
  Scope<Sequence> *oldScope = varStore->getScopeState();

  if(toDo_) {
    toDo_ = false;

    varStore->addLogicalBlockScope();

    NodeSet copiedNodes = NodeSet(nodecompare(context));

    VectorOfVariableBinding::const_iterator end = transform_->getBindings()->end();
    for(VectorOfVariableBinding::const_iterator it = transform_->getBindings()->begin();
        it != end; ++it) {

      Sequence values = (*it)->_allValues->createResult(context)->toSequence(context);

      // Keep a record of the nodes that have been copied
      Result valIt = values;
      Item::Ptr val;
      while((val = valIt->next(context)).notNull()) {
        copiedNodes.insert((Node*)val.get());
      }

      // Make debug callback before declaring the variable
      if(context->getDebugCallback()) context->getDebugCallback()->IsBreakPointHit(context, (*it)->getFile(), (*it)->getLine());

      // Add a new scope, if needed
      if((*it)->_needsNewScope) {
        varStore->addLogicalBlockScope();
      }

      varStore->declareVar((*it)->_vURI, (*it)->_vName, values, context);
    }

    // Get the pending update list
    PendingUpdateList pul = transform_->getModifyExpr()->createUpdateList(context);

    // Check that the targets of the pending updates are copied nodes
    for(PendingUpdateList::const_iterator i = pul.begin(); i != pul.end(); ++i) {
      Node::Ptr target = i->getTarget();
      while(copiedNodes.find(target) == copiedNodes.end()) {
        target = target->dmParent(context);
        if(target.isNull()) {
          XQThrow3(StaticErrorException,X("UTransform::staticTyping"),
                   X("The target node of an update expression in the transform expression is not a node from the copy clauses [err:TBD]"), &(*i));
        }
      }
    }

    // Apply the updates
    AutoDelete<UpdateFactory> ufactory(context->createUpdateFactory());
    ufactory->applyUpdates(pul, context);

    // Execute the return expression
    result_ = transform_->getReturnExpr()->createResult(context);
  }
  else {
    if(scope_ == 0) {
      return 0;
    }
    varStore->setScopeState(scope_);
    scope_ = 0;
  }

  Item::Ptr result = result_->next(context);

  if(result.isNull()) {
    VectorOfVariableBinding::const_reverse_iterator end = transform_->getBindings()->rend();
    for(VectorOfVariableBinding::const_reverse_iterator it = transform_->getBindings()->rbegin();
        it != end; ++it) {
      if((*it)->_needsNewScope) {
        varStore->removeScope();
        varStore->addLogicalBlockScope();
      }
    }
    varStore->removeScope();

    scope_ = 0;
    result_ = 0;
    return 0;
  }

  scope_ = varStore->getScopeState();
  varStore->setScopeState(oldScope);

  return result;
}

