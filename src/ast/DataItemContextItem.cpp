/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/DataItemContextItem.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/DynamicErrorException.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

DataItemContextItem::DataItemContextItem(XPath2MemoryManager* memMgr)
	: DataItemImpl(memMgr)
{
	setType(DataItem::CONTEXT_ITEM);
}

DataItemContextItem::~DataItemContextItem() {
	//no-op
}

DataItem* DataItemContextItem::staticResolution(StaticContext *context)
{
  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::PEER | StaticResolutionContext::SUBTREE | StaticResolutionContext::SAMEDOC | StaticResolutionContext::ONENODE);
  _src.getStaticType().flags = StaticResolutionContext::NODE_TYPE | StaticResolutionContext::NUMERIC_TYPE | StaticResolutionContext::OTHER_TYPE;
  _src.contextItemUsed(true);
  return resolvePredicates(context);
}

Result DataItemContextItem::createResult(DynamicContext* context, int flags) const
{
  return new ContextItemResult(context);
}

DataItemContextItem::ContextItemResult::ContextItemResult(DynamicContext *context)
  : SingleResult(context)
{
}

Item::Ptr DataItemContextItem::ContextItemResult::getSingleResult(DynamicContext *context) const
{
  const Item::Ptr item = context->getContextItem();
  if(item == NULLRCP) {
    DSLthrow(DynamicErrorException,X("DataItemContextItem::ContextItemResult::getSingleResult"),
             X("It is an error for the context item to be undefined when using it [err:XPDY0002]"));
  }
  return item;
}

std::string DataItemContextItem::ContextItemResult::asString(DynamicContext *context, int indent) const
{
  return "<contextitemresult/>";
}
