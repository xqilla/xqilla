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

#include "../config/xqilla_config.h"

#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/items/Node.hpp>

XQAtomize::XQAtomize(ASTNode* expr, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  expr_(expr)
{
  setType(ASTNode::ATOMIZE);
}

ASTNode* XQAtomize::staticResolution(StaticContext *context)
{
  expr_ = expr_->staticResolution(context);
  _src.getStaticType() = expr_->getStaticResolutionContext().getStaticType();
  _src.add(expr_->getStaticResolutionContext());

  if(_src.getStaticType().containsType(StaticType::NODE_TYPE)) {
    _src.getStaticType().flags = StaticType::ANY_ATOMIC_TYPE;
  }
  else {
    // If the expression has no nodes, this function does nothing
    return expr_;
  }

  if(expr_->isConstant()) {
    return constantFold(context);
  }
  return this;
}

Result XQAtomize::createResult(DynamicContext* context, int flags) const
{
  return new AtomizeResult(this, expr_->collapseTree(context, flags));
}

Item::Ptr AtomizeResult::next(DynamicContext *context)
{
  // for $item in (Expr) return
  //   typeswitch ($item)
  //     case $value as atomic value return $value
  //     default $node return fn:data($node)

  Item::Ptr result = _sub->next(context);
  while(result.isNull()) {
    _sub = 0;
    result = _parent->next(context);
    if(result.isNull()) {
      _parent = 0;
      return 0;
    }
    if(result->isNode()) {
      _sub = ((Node*)result.get())->dmTypedValue(context);
      result = _sub->next(context);
    }
  }
  return result;
}

