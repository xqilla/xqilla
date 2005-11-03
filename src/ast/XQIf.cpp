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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/ast/XQIf.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

XQIf::XQIf(ASTNode* test, ASTNode* whenTrue, ASTNode* whenFalse, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _test(test),
  _whenTrue(whenTrue),
  _whenFalse(whenFalse)
{
	setType(ASTNode::IF);
}

Result XQIf::createResult(DynamicContext* context, int flags) const
{
  return new IfResult(this, flags, context);
}

ASTNode* XQIf::staticResolution(StaticContext *context) {
  _test = _test->staticResolution(context);

  if(_test->isConstant()) {
    AutoRelease<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());
    if(_test->collapseTree(dContext).getEffectiveBooleanValue(dContext)) {
      _whenTrue->addPredicates(getPredicates());
      return _whenTrue->staticResolution(context);
    }
    else {
      _whenFalse->addPredicates(getPredicates());
      return _whenFalse->staticResolution(context);
    }
  }
  else {
    _src.add(_test->getStaticResolutionContext());

    _whenTrue = _whenTrue->staticResolution(context);
    _src.getStaticType() = _whenTrue->getStaticResolutionContext().getStaticType();
    _src.add(_whenTrue->getStaticResolutionContext());

    _whenFalse = _whenFalse->staticResolution(context);
    _src.getStaticType().typeUnion(_whenFalse->getStaticResolutionContext().getStaticType());
    _src.add(_whenFalse->getStaticResolutionContext());

    return resolvePredicates(context);
  }
}

const ASTNode *XQIf::getTest() const {
  return _test;
}

const ASTNode *XQIf::getWhenTrue() const {
  return _whenTrue;
}

const ASTNode *XQIf::getWhenFalse() const {
  return _whenFalse;
}

void XQIf::setTest(ASTNode *item)
{
  _test = item;
}

void XQIf::setWhenTrue(ASTNode *item)
{
  _whenTrue = item;
}

void XQIf::setWhenFalse(ASTNode *item)
{
  _whenFalse = item;
}

XQIf::IfResult::IfResult(const XQIf *di, int flags, DynamicContext *context)
  : ResultImpl(context),
    _flags(flags),
    _di(di),
    _results(0)
{
}

Item::Ptr XQIf::IfResult::next(DynamicContext *context)
{
  if(_results.isNull()) {
    if(_di->getTest()->collapseTree(context, ASTNode::UNORDERED|ASTNode::RETURN_TWO).getEffectiveBooleanValue(context)) {
      _results = _di->getWhenTrue()->collapseTree(context, _flags);
    }
    else {
      _results = _di->getWhenFalse()->collapseTree(context, _flags);
    }
  }

  return _results.next(context);
}

std::string XQIf::IfResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<if/>" << std::endl;

  return oss.str();
}
