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

#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/runtime/ResultBuffer.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

XQTypeswitch::  XQTypeswitch(ASTNode *expr, Cases *cases, Case *defaultCase, XPath2MemoryManager *mm)
  : ASTNodeImpl(mm),
    expr_(expr),
    cases_(cases),
    default_(defaultCase)
{
  setType(ASTNode::TYPESWITCH);
}

Result XQTypeswitch::createResult(DynamicContext *context, int flags) const
{
  return new TypeswitchResult(this);
}

ASTNode* XQTypeswitch::staticResolution(StaticContext *context)
{
  // Statically resolve the test expression
  expr_ = expr_->staticResolution(context);

  // Call static resolution on the clauses
  for(Cases::iterator it = cases_->begin(); it != cases_->end(); ++it) {
    (*it)->staticResolution(context);
  }

  default_->staticResolution(context);

  return this;
}

static const XMLCh no_err[] = { 0 };

ASTNode* XQTypeswitch::staticTyping(StaticContext *context)
{
  _src.clear();

  // Statically resolve the test expression
  expr_ = expr_->staticTyping(context);
  const StaticAnalysis &exprSrc = expr_->getStaticAnalysis();

  if(exprSrc.isUpdating()) {
    XQThrow(StaticErrorException,X("XQTypeswitch::staticTyping"),
            X("It is a static error for the operand expression of a typeswitch expression "
              "to be an updating expression [err:XUST0001]"));
  }

  // Call static resolution on the clauses
  bool possiblyUpdating = true;
  _src.add(exprSrc);
  _src.getStaticType().flags = 0;
  _src.setProperties((unsigned int)-1);

  default_->staticTyping(expr_->getStaticAnalysis(), context, _src, possiblyUpdating);

  Cases::iterator it;
  for(it = cases_->begin(); it != cases_->end(); ++it) {
    (*it)->staticTyping(expr_->getStaticAnalysis(), context, _src, possiblyUpdating);
  }

  if(exprSrc.isUsed()) {
    // Do basic static type checking on the clauses,
    // to eliminate ones which will never be matches,
    // and find ones which will always be matched.
    Cases newCases(XQillaAllocator<Case*>(context->getMemoryManager()));
    for(it = cases_->begin(); it != cases_->end(); ++it) {
      const SequenceType::ItemType *itemType = (*it)->getSequenceType()->getItemType();
      if(itemType != NULL) {
        const StaticType &sType = expr_->getStaticAnalysis().getStaticType();

        bool isExact;
        StaticType cseType;
        itemType->getStaticType(cseType, context, isExact, *it);

        if(isExact && (sType.flags & cseType.flags) != 0 &&
           (sType.flags & ~cseType.flags) == 0 &&
           (*it)->getSequenceType()->getOccurrenceIndicator() == SequenceType::STAR) {
          // It always matches, so set this clause as the
          // default clause and remove all the others
          newCases.clear();
          default_ = *it;
          default_->setSequenceType(0);
          break;
        }
        else if((sType.flags & cseType.flags) == 0 &&
                ((*it)->getSequenceType()->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE ||
                 (*it)->getSequenceType()->getOccurrenceIndicator() == SequenceType::PLUS)) {
          // It never matches, so don't add it to the new clauses
        }
        else {
          newCases.push_back(*it);
        }
      }
    }

    if(newCases.size() != cases_->size()) {
      *cases_ = newCases;

      // Call static resolution on the new clauses
      possiblyUpdating = true;
      _src.clear();
      _src.add(exprSrc);
      _src.getStaticType().flags = 0;
      _src.setProperties((unsigned int)-1);

      default_->staticTyping(expr_->getStaticAnalysis(), context, _src, possiblyUpdating);

      for(it = cases_->begin(); it != cases_->end(); ++it) {
        (*it)->staticTyping(expr_->getStaticAnalysis(), context, _src, possiblyUpdating);
      }
    }

    return this;
  }
  else {
    // If it's constant, we can narrow it down to the correct clause
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());
    Sequence value = expr_->createResult(dContext)->toSequence(dContext);

    Case *match = 0;
    for(Cases::iterator it = cases_->begin(); it != cases_->end(); ++it) {
      try {
        (*it)->getSequenceType()->matches(value, (*it)->getSequenceType(), no_err)->toSequence(dContext);
        match = *it;
        break;
      }
      catch(const XPath2TypeMatchException &ex) {
        // Well, it doesn't match that one then...
      }
    }

    // Replace the default with the matched clause and
    // remove the remaining clauses, as they don't match
    if(match) {
      default_ = match;
      default_->setSequenceType(0);
    }
    cases_->clear();

    // Statically resolve the default clause
    possiblyUpdating = true;
    _src.clear();
    _src.getStaticType().flags = 0;
    _src.setProperties((unsigned int)-1);
    default_->staticTyping(expr_->getStaticAnalysis(), context, _src, possiblyUpdating);

    // Constant fold if possible
    if(!_src.isUsed()) {
      return constantFold(context);
    }
    return this;
  }
}

XQTypeswitch::Case::Case(const XMLCh *qname, SequenceType *seqType, ASTNode *expr)
  : qname_(qname),
    uri_(0),
    name_(0),
    seqType_(seqType),
    expr_(expr)
{
}

void XQTypeswitch::Case::staticResolution(StaticContext* context)
{
  if(seqType_)
    seqType_->staticResolution(context);
  expr_ = expr_->staticResolution(context);
}

void XQTypeswitch::Case::staticTyping(const StaticAnalysis &var_src, StaticContext* context,
                                      StaticAnalysis &src, bool &possiblyUpdating)
{
  VariableTypeStore* varStore=context->getVariableTypeStore();

  if(qname_ != 0) {
    varStore->addLogicalBlockScope();
    uri_ = context->getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname_, context->getMemoryManager()), this);
    name_ = XPath2NSUtils::getLocalName(qname_);
    varStore->declareVar(uri_, name_, var_src);
  }

  StaticAnalysis newSrc(context->getMemoryManager());
  expr_ = expr_->staticTyping(context);
  newSrc.add(expr_->getStaticAnalysis());

  if(seqType_ != 0) {
    if(src.isUpdating()) {
      if(!newSrc.isUpdating() && !expr_->getStaticAnalysis().isPossiblyUpdating())
        XQThrow(StaticErrorException, X("XQTypeswitch::Case::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }
    else {
      if(newSrc.isUpdating() && !possiblyUpdating)
        XQThrow(StaticErrorException, X("XQTypeswitch::Case::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }
  }

  if(qname_ != 0) {
    // Remove the local variable from the StaticAnalysis
    if(!newSrc.removeVariable(uri_, name_)) {
      // If the variable isn't used, don't bother setting it when we execute
      qname_ = 0;
    }
    varStore->removeScope();
  }

  if(possiblyUpdating)
    possiblyUpdating = expr_->getStaticAnalysis().isPossiblyUpdating();

  src.getStaticType().typeUnion(expr_->getStaticAnalysis().getStaticType());
  src.setProperties(src.getProperties() & expr_->getStaticAnalysis().getProperties());
  src.add(newSrc);
}

const XQTypeswitch::Case *XQTypeswitch::chooseCase(DynamicContext *context, Sequence &resultSeq) const
{
  // retrieve the value of the operand expression
  ResultBuffer value(expr_->createResult(context));

  const Case *cse = 0;

  // find the effective case
  for(Cases::const_iterator it = cases_->begin(); it != cases_->end(); ++it) {
    try {
      (*it)->getSequenceType()->matches(value.createResult(), (*it)->getSequenceType(), no_err)->toSequence(context);
      cse = *it;
      break;
    }
    catch(const XPath2TypeMatchException &ex) {
      // Well, it doesn't match that one then...
    }
  }

  // if no case is satisfied, use the default one
  if(cse == 0) {
      cse = default_;
  }

  // Bind the variable
  if(cse->isVariableUsed()) {
    resultSeq = value.createResult()->toSequence(context);

//     varStore->declareVar(cse->getURI(), cse->getName(), value.createResult()->toSequence(context), context);
  }

  return cse;
}

void XQTypeswitch::generateEvents(EventHandler *events, DynamicContext *context,
                                  bool preserveNS, bool preserveType) const
{
  SingleVarStore scope;
  const Case *cse = chooseCase(context, scope.value);

  AutoVariableStoreReset reset(context);
  if(cse->isVariableUsed())
    scope.setAsVariableStore(cse->getURI(), cse->getName(), context);

  cse->getExpression()->generateEvents(events, context, preserveNS, preserveType);
}

PendingUpdateList XQTypeswitch::createUpdateList(DynamicContext *context) const
{
  SingleVarStore scope;
  const Case *cse = chooseCase(context, scope.value);

  AutoVariableStoreReset reset(context);
  if(cse->isVariableUsed())
    scope.setAsVariableStore(cse->getURI(), cse->getName(), context);

  return cse->getExpression()->createUpdateList(context);
}

XQTypeswitch::TypeswitchResult::TypeswitchResult(const XQTypeswitch *di)
  : ResultImpl(di),
    _di(di),
    _scopeUsed(false),
    _result(0)
{
}

Item::Ptr XQTypeswitch::TypeswitchResult::next(DynamicContext *context)
{
  AutoVariableStoreReset reset(context);

  if(_result.isNull()) {
    const Case *cse = _di->chooseCase(context, _scope.value);

    if(cse->isVariableUsed()) {
      _scope.setAsVariableStore(cse->getURI(), cse->getName(), context);
      _scopeUsed = true;
    }

    _result = cse->getExpression()->createResult(context);
  }
  else if(_scopeUsed) {
    context->setVariableStore(&_scope);
  }

  return _result->next(context);
}

std::string XQTypeswitch::TypeswitchResult::asString(DynamicContext *context, int indent) const
{
  return "TypeswitchResult";
}
