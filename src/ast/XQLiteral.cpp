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

#include "../config/pathan_config.h"
#include <xqilla/framework/Pathan.hpp>
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
    is a single DateOrTimeType, then hasTimezone() on it must return true,
    otherwise this method will return false. */
bool XQLiteral::isConstantAndHasTimezone(StaticContext *context) const
{
  if(isConstant()) {
    AutoRelease<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());

    Item::Ptr item = _itemConstructor->createItem(dContext);
    if(item->isAtomicValue() &&
       ((const AnyAtomicType::Ptr)item)->isDateOrTimeTypeValue() &&
       ((const DateOrTimeType::Ptr)item)->hasTimezone()) {
      return true;
    }
  }
  return false;
}

bool XQLiteral::isSingleNumericConstant(StaticContext *context) const
{
  if(isConstant()) {
    AutoRelease<DynamicContext> dContext(context->createDynamicContext());
    dContext->setMemoryManager(context->getMemoryManager());

    Item::Ptr item = _itemConstructor->createItem(dContext);
    if(item->isAtomicValue() &&
       ((const AnyAtomicType::Ptr)item)->isNumericValue()) {
      return true;
    }
  }
  return false;
}

ASTNode* XQLiteral::staticResolution(StaticContext *context) {
  ASTNode *result = new (getMemoryManager()) XQSequence(_itemConstructor, getMemoryManager());
  result->addPredicates(getPredicates());
  return result->staticResolution(context);
}

Result XQLiteral::createResult(DynamicContext* context, int flags) const
{
  return Sequence(_itemConstructor->createItem(context), context->getMemoryManager());
}
