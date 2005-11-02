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
#include <assert.h>
#include <sstream>

#include <xqilla/ast/DataItemInstanceOf.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/ast/DataItemSequence.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/context/PathanFactory.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

DataItemInstanceOf::DataItemInstanceOf(DataItem* expr, SequenceType* exprType, XPath2MemoryManager* memMgr)
  : DataItemImpl(memMgr),
  _expr(expr),
  _exprType(exprType)
{
	setType(DataItem::INSTANCE_OF);
}

Result DataItemInstanceOf::createResult(DynamicContext* context, int flags) const
{
  return new InstanceOfResult(this, flags, context);
}

DataItem* DataItemInstanceOf::staticResolution(StaticContext *context) {
  return resolveDataItem(_expr, context, true);
}

const DataItem *DataItemInstanceOf::getExpression() const {
  return _expr;
}

const SequenceType *DataItemInstanceOf::getSequenceType() const {
  return _exprType;
}

void DataItemInstanceOf::setExpression(DataItem *item) {
  _expr = item;
}

DataItemInstanceOf::InstanceOfResult::InstanceOfResult(const DataItemInstanceOf *di, int flags, DynamicContext *context)
  : SingleResult(context),
    _flags(flags),
    _di(di)
{
}

Item::Ptr DataItemInstanceOf::InstanceOfResult::getSingleResult(DynamicContext *context) const
{
  int flags = DataItem::UNORDERED;
  if(_di->getSequenceType()->getOccurrenceIndicator() == SequenceType::QUESTION_MARK ||
     _di->getSequenceType()->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE)
    flags = DataItem::RETURN_TWO;

  Result result = _di->getExpression()->collapseTree(context, flags).matches(_di->getSequenceType(), context);
  try {
    while(result.next(context) != NULLRCP) {}
  }
  catch(const XPath2TypeMatchException &ex) {
    return (const Item::Ptr)context->getPathanFactory()->createBoolean(false, context);
  }

  return (const Item::Ptr)context->getPathanFactory()->createBoolean(true, context);
}

std::string DataItemInstanceOf::InstanceOfResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<instanceof/>" << std::endl;

  return oss.str();
}
