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
#include <assert.h>
#include <sstream>

#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/context/ItemFactory.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQInstanceOf::XQInstanceOf(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _expr(expr),
  _exprType(exprType)
{
	setType(ASTNode::INSTANCE_OF);
}

Result XQInstanceOf::createResult(DynamicContext* context, int flags) const
{
  return new InstanceOfResult(this, flags, context);
}

ASTNode* XQInstanceOf::staticResolution(StaticContext *context) {
  return resolveASTNode(_expr, context, true);
}

const ASTNode *XQInstanceOf::getExpression() const {
  return _expr;
}

const SequenceType *XQInstanceOf::getSequenceType() const {
  return _exprType;
}

void XQInstanceOf::setExpression(ASTNode *item) {
  _expr = item;
}

XQInstanceOf::InstanceOfResult::InstanceOfResult(const XQInstanceOf *di, int flags, DynamicContext *context)
  : SingleResult(context),
    _flags(flags),
    _di(di)
{
}

Item::Ptr XQInstanceOf::InstanceOfResult::getSingleResult(DynamicContext *context) const
{
  int flags = ASTNode::UNORDERED;
  if(_di->getSequenceType()->getOccurrenceIndicator() == SequenceType::QUESTION_MARK ||
     _di->getSequenceType()->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE)
    flags = ASTNode::RETURN_TWO;

  Result result = _di->getExpression()->collapseTree(context, flags).matches(_di->getSequenceType(), context);
  try {
    while(result.next(context) != NULLRCP) {}
  }
  catch(const XPath2TypeMatchException &ex) {
    return (const Item::Ptr)context->getItemFactory()->createBoolean(false, context);
  }

  return (const Item::Ptr)context->getItemFactory()->createBoolean(true, context);
}

std::string XQInstanceOf::InstanceOfResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<instanceof/>" << std::endl;

  return oss.str();
}
