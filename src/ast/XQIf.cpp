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

#include <xqilla/ast/XQIf.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

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
  return new IfResult(this, flags);
}

void XQIf::generateEvents(EventHandler *events, DynamicContext *context,
                          bool preserveNS, bool preserveType) const
{
  if(_test->createResult(context)->getEffectiveBooleanValue(context, this)) {
    _whenTrue->generateEvents(events, context, preserveNS, preserveType);
  }
  else {
    _whenFalse->generateEvents(events, context, preserveNS, preserveType);
  }
}

ASTNode* XQIf::staticResolution(StaticContext *context) {
  {
    AutoNodeSetOrderingReset orderReset(context);
    _test = _test->staticResolution(context);
  }

  _whenTrue = _whenTrue->staticResolution(context);
  _whenFalse = _whenFalse->staticResolution(context);

  return this;
}

ASTNode *XQIf::staticTyping(StaticContext *context)
{
  _src.clear();

  _test = _test->staticTyping(context);

  if(_test->getStaticAnalysis().isUpdating()) {
    XQThrow(StaticErrorException,X("XQIf::staticTyping"),
            X("It is a static error for the conditional expression of an if expression "
              "to be an updating expression [err:XUST0001]"));
  }

  _src.add(_test->getStaticAnalysis());

  _whenTrue = _whenTrue->staticTyping(context);
  _src.getStaticType() = _whenTrue->getStaticAnalysis().getStaticType();
  _src.setProperties(_whenTrue->getStaticAnalysis().getProperties());
  _src.add(_whenTrue->getStaticAnalysis());

  _whenFalse = _whenFalse->staticTyping(context);

  if(_src.isUpdating()) {
    if(!_whenFalse->getStaticAnalysis().isUpdating() &&
       !_whenFalse->getStaticAnalysis().isPossiblyUpdating())
      XQThrow(StaticErrorException, X("XQIf::staticTyping"),
              X("Mixed updating and non-updating operands [err:XUST0001]"));
  }
  else {
    if(_whenFalse->getStaticAnalysis().isUpdating() &&
       !_whenTrue->getStaticAnalysis().isPossiblyUpdating())
      XQThrow(StaticErrorException, X("XQIf::staticTyping"),
              X("Mixed updating and non-updating operands [err:XUST0001]"));
  }

  _src.getStaticType().typeUnion(_whenFalse->getStaticAnalysis().getStaticType());
  _src.setProperties(_src.getProperties() & _whenFalse->getStaticAnalysis().getProperties());
  _src.add(_whenFalse->getStaticAnalysis());

  if(_test->isConstant()) {
    AutoDelete<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());
    if(_test->createResult(dContext)->getEffectiveBooleanValue(dContext, this)) {
      return _whenTrue;
    }
    else {
      return _whenFalse;
    }
  }

  return this;
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

PendingUpdateList XQIf::createUpdateList(DynamicContext *context) const
{
    if(_test->createResult(context)->getEffectiveBooleanValue(context, this)) {
      return _whenTrue->createUpdateList(context);
    }
    else {
      return _whenFalse->createUpdateList(context);
    }
}

XQIf::IfResult::IfResult(const XQIf *di, int flags)
  : ResultImpl(di),
    _flags(flags),
    _di(di),
    _results(0)
{
}

Item::Ptr XQIf::IfResult::next(DynamicContext *context)
{
  if(_results.isNull()) {
    if(_di->getTest()->createResult(context)->getEffectiveBooleanValue(context, this)) {
      _results = _di->getWhenTrue()->createResult(context, _flags);
    }
    else {
      _results = _di->getWhenFalse()->createResult(context, _flags);
    }
  }

  return _results->next(context);
}

std::string XQIf::IfResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<if/>" << std::endl;

  return oss.str();
}
