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

  bool updating = false;
  for(VectorOfASTNodes::iterator i = _astNodes.begin(); i != _astNodes.end(); ++i) {
    *i = (*i)->staticTyping(context);

    if(i == _astNodes.begin()) {
      updating = (*i)->getStaticResolutionContext().isUpdating();
    }
    else if(updating) {
      if(!(*i)->getStaticResolutionContext().isUpdating() &&
         (*i)->getStaticResolutionContext().getStaticType().containsType(StaticType::ITEM_TYPE))
        XQThrow(StaticErrorException, X("XQParenthesizedExpr::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }
    else {
      if((*i)->getStaticResolutionContext().isUpdating())
        XQThrow(StaticErrorException, X("XQParenthesizedExpr::staticTyping"),
                X("Mixed updating and non-updating operands [err:XUST0001]"));
    }

    _src.getStaticType().typeUnion((*i)->getStaticResolutionContext().getStaticType());
    _src.add((*i)->getStaticResolutionContext());
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
