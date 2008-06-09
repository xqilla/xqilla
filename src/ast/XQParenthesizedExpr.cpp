/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
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
#include <xqilla/runtime/ClosureResult.hpp>
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
  return new ParenthesizedResult(this);
}

EventGenerator::Ptr XQParenthesizedExpr::generateEvents(EventHandler *events, DynamicContext *context,
                                                        bool preserveNS, bool preserveType) const
{
  VectorOfASTNodes::const_iterator i = _astNodes.begin();
  VectorOfASTNodes::const_iterator end = _astNodes.end();
  if(i == end) return 0;
  --end;
  for(; i != end; ++i) {
    (*i)->generateAndTailCall(events, context, preserveNS, preserveType);
  }
  return new ClosureEventGenerator(*i, context, preserveNS, preserveType);
}

void XQParenthesizedExpr::addItem(ASTNode* di)
{
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

ASTNode* XQParenthesizedExpr::staticTyping(StaticContext *context)
{
  bool doneOne = false;
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

    if(!doneOne) {
      doneOne = true;
      _src.getStaticType() = (*i)->getStaticAnalysis().getStaticType();
    } else {
      _src.getStaticType().typeConcat((*i)->getStaticAnalysis().getStaticType());
    }

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

XQParenthesizedExpr::ParenthesizedResult::ParenthesizedResult(const XQParenthesizedExpr *di)
  : ResultImpl(di),
    _di(di),
    _i(di->getChildren().begin()),
    _result(0)
{
}

Item::Ptr XQParenthesizedExpr::ParenthesizedResult::nextOrTail(Result &tail, DynamicContext *context)
{
  Item::Ptr item = _result->next(context);

  while(item.isNull()) {
    if(_i != _di->getChildren().end()) {
      const ASTNode *ast = *_i;
      ++_i;

      if(_i == _di->getChildren().end()) {
        // Tail call optimisation
        tail = ClosureResult::create(ast, context);
        return 0;
      }

      _result = ast->createResult(context);
      item = _result->next(context);
    }
    else {
      _result  = 0;
      break;
    }
  }

  return item;
}

