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

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/NumUtils.hpp>
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/DateOrTimeType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/runtime/SequenceResult.hpp>
#include <xqilla/context/ItemFactory.hpp>
#include <xqilla/context/ContextHelpers.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/events/EventHandler.hpp>

ASTNodeImpl::ASTNodeImpl(XPath2MemoryManager* memMgr)
  : _src(memMgr),
    _memMgr(memMgr)
{
  // Nothing to do
}

ASTNodeImpl::~ASTNodeImpl(void)
{
  //no-op
}

bool ASTNodeImpl::isConstant() const
{
  return !_src.isUsed();
}

/** Overridden in XQSequence and XQLiteral */
bool ASTNodeImpl::isDateOrTimeAndHasNoTimezone(StaticContext *context) const
{
  // To be safe, assume any value that contains a timezone might
  // not have one specified.
  return _src.getStaticType().containsType(StaticType::TIMEZONE_TYPE);
}

ASTNode::whichType ASTNodeImpl::getType(void) const
{
  return _type;
}

void ASTNodeImpl::setType(ASTNode::whichType t)
{
  _type = t;
}

bool ASTNodeImpl::isSingleNumericConstant(StaticContext *context) const
{
  return false;
}

PendingUpdateList ASTNodeImpl::createUpdateList(DynamicContext *context) const
{
  return PendingUpdateList();
}

Result ASTNodeImpl::createResult(DynamicContext* context, int flags) const
{
  return new CreateSequenceResult(this, flags, context);
}

void ASTNodeImpl::generateEvents(EventHandler *events, DynamicContext *context,
                                 bool preserveNS, bool preserveType) const
{
  Result result = createResult(context);
  Item::Ptr item;
  while((item = result->next(context)).notNull()) {
    if(item->isNode()) {
      ((Node*)item.get())->generateEvents(events, context, preserveNS, preserveType);
    }
    else {
      events->atomicItemEvent(item->asString(context), item->getTypeURI(), item->getTypeName());
    }
  }
}

Sequence ASTNodeImpl::createSequence(DynamicContext* context, int flags) const
{
  return Sequence(context->getMemoryManager());
}

ASTNode *ASTNodeImpl::constantFold(StaticContext *context)
{
  XPath2MemoryManager* mm = context->getMemoryManager();
  AutoDelete<DynamicContext> dContext(context->createDynamicContext());
  dContext->setMemoryManager(mm);

  Result result = createResult(dContext);
  ASTNode *newBlock = XQSequence::constantFold(result, dContext, mm, this);
  if(newBlock == 0) return this; // Constant folding failed

  newBlock->setLocationInfo(this);
  return newBlock->staticTyping(context);
}

XPath2MemoryManager* ASTNodeImpl::getMemoryManager(void) const {

  return _memMgr;
}

const StaticResolutionContext &ASTNodeImpl::getStaticResolutionContext() const
{
  return _src;
}

/////////////////////////////////////
// CreateSequenceResult
/////////////////////////////////////

ASTNodeImpl::CreateSequenceResult::CreateSequenceResult(const ASTNodeImpl *di, int flags, DynamicContext *context)
  : LazySequenceResult(di, context),
    _flags(flags),
    _di(di)
{
}

void ASTNodeImpl::CreateSequenceResult::getResult(Sequence &toFill, DynamicContext *context) const
{
  try {
    toFill = _di->createSequence(context, _flags);
  }
  catch(XQException &e) {
      if(e.getXQueryLine() == 0)
        e.setXQueryPosition(this);
      throw e;
  }
}

std::string ASTNodeImpl::CreateSequenceResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<collapsetreeinternal/>" << std::endl;

  return oss.str();
}
