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

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/update/PendingUpdateList.hpp>

XQParenthesizedExpr::XQParenthesizedExpr(XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr), _astNodes(XQillaAllocator<ASTNode*>(memMgr))
{
  setType(ASTNode::PARENTHESIZED);
}

Result XQParenthesizedExpr::createResult(DynamicContext* context, int flags) const
{
  return new ParenthesizedResult(this, flags);
}

void XQParenthesizedExpr::generateEvents(EventHandler *events, DynamicContext *context,
                                         bool preserveNS, bool preserveType) const
{
  for(VectorOfASTNodes::const_iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    (*i)->generateEvents(events, context, preserveNS, preserveType);
  }
}

void XQParenthesizedExpr::addItem(ASTNode* di) {

	_astNodes.push_back(di);
}

ASTNode* XQParenthesizedExpr::staticResolution(StaticContext *context) {
  // Return a blank XQSequence if we have no children
  if(_astNodes.empty()) {
    ASTNode *result = new (getMemoryManager()) XQSequence(getMemoryManager());
    result->setLocationInfo(this);
    return result;
  }

  // Dissolve ourselves if we have only one child
  if(_astNodes.size() == 1) {
    return _astNodes.front()->staticResolution(context);
  }

  for(VectorOfASTNodes::iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    *i = (*i)->staticResolution(context);
  }

  return this;
}

ASTNode* XQParenthesizedExpr::staticTyping(StaticContext *context) {
  _src.getStaticType().flags = 0;

  bool possiblyUpdating = true;
  for(VectorOfASTNodes::iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    *i = (*i)->staticTyping(context);

    if(_src.isUpdating()) {
      if(!(*i)->getStaticAnalysis().isUpdating() &&
         !(*i)->getStaticAnalysis().isPossiblyUpdating())
        XQThrow(StaticErrorException, X("XQParenthesizedExpr::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }
    else {
      if((*i)->getStaticAnalysis().isUpdating() && !possiblyUpdating)
        XQThrow(StaticErrorException, X("XQParenthesizedExpr::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }

    if(possiblyUpdating)
      possiblyUpdating = (*i)->getStaticAnalysis().isPossiblyUpdating();

    _src.getStaticType().typeUnion((*i)->getStaticAnalysis().getStaticType());
    _src.add((*i)->getStaticAnalysis());
  }

  if(!_src.isUsed()) {
    return constantFold(context);
  }
  return this;
}

PendingUpdateList XQParenthesizedExpr::createUpdateList(DynamicContext *context) const
{
  PendingUpdateList result;
  for(VectorOfASTNodes::const_iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    result.mergeUpdates((*i)->createUpdateList(context));
  }
  return result;
}

const VectorOfASTNodes &XQParenthesizedExpr::getChildren() const {
  return _astNodes;
}

XQParenthesizedExpr::ParenthesizedResult::ParenthesizedResult(const XQParenthesizedExpr *di, int flags)
  : ResultImpl(di),
    _flags(flags),
    _di(di),
    _i(di->getChildren().begin()),
    _result(0)
{
}

Item::Ptr XQParenthesizedExpr::ParenthesizedResult::next(DynamicContext *context)
{
  Item::Ptr item = _result->next(context);

  while(item == NULLRCP) {
    if(_i != _di->getChildren().end()) {
      _result = (*_i++)->createResult(context, _flags);
      item = _result->next(context);
    }
    else {
      _result  = 0;
      break;
    }
  }

  return item;
}

std::string XQParenthesizedExpr::ParenthesizedResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<parenthesized/>" << std::endl;

  return oss.str();
}
