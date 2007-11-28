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
#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

XQLiteral::XQLiteral(ItemConstructor *ic, XPath2MemoryManager* memMgr)
	: ASTNodeImpl(memMgr),
    _itemConstructor(ic)
{
  setType(ASTNode::LITERAL);
}

/** Returns true if this XQ has no predicates, and is an instance of
    XQSequence or XQLiteral. If the literal value of this XQ
    is a single DateOrTimeType, then !hasTimezone() on it must return true,
    otherwise this method will return false. */
bool XQLiteral::isDateOrTimeAndHasNoTimezone(StaticContext *context) const
{
  AutoDelete<DynamicContext> dContext(context->createDynamicContext());
  dContext->setMemoryManager(context->getMemoryManager());

  Item::Ptr item = _itemConstructor->createItem(dContext);
  if(item->isAtomicValue() &&
     ((const AnyAtomicType::Ptr)item)->isDateOrTimeTypeValue() &&
     !((const DateOrTimeType::Ptr)item)->hasTimezone()) {
    return true;
  }
  return false;
}

bool XQLiteral::isSingleNumericConstant(StaticContext *context) const
{
  AutoDelete<DynamicContext> dContext(context->createDynamicContext());
  dContext->setMemoryManager(context->getMemoryManager());

  Item::Ptr item = _itemConstructor->createItem(dContext);
  if(item->isAtomicValue() &&
     ((const AnyAtomicType::Ptr)item)->isNumericValue()) {
    return true;
  }
  return false;
}

ASTNode* XQLiteral::staticResolution(StaticContext *context)
{
  // Constant fold, to parse numeric literals
  return constantFold(context);
}

ASTNode *XQLiteral::staticTyping(StaticContext *context)
{
  // Should never happen
  return this;
}

Result XQLiteral::createResult(DynamicContext* context, int flags) const
{
  return _itemConstructor->createItem(context);
}
