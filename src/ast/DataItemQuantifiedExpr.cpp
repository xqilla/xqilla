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
#include <sstream>

#include <xqilla/ast/DataItemQuantifiedExpr.hpp>

#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/impl/DynamicContextImpl.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/ast/DataItemSequence.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/context/PathanFactory.hpp>

DataItemQuantifiedExpr::DataItemQuantifiedExpr(DataItemQuantifiedExpr::QuantifierType qType, VectorOfBindings* bindings, DataItem* returnExpr, XPath2MemoryManager* memMgr)
  : DataItemFor(bindings, returnExpr, memMgr)
{
  _qType=qType;
  setType(DataItem::QUANTIFIED);
}

DataItem* DataItemQuantifiedExpr::staticResolution(StaticContext *context) {
  DataItemFor::staticResolutionImpl(context);

  _src.getStaticType().flags = StaticResolutionContext::OTHER_TYPE;

  if(_src.isUsed()) {
    if(_returnExpr->isConstant()) {
      AutoRelease<DynamicContext> dContext(context->createDynamicContext());
      dContext->setMemoryManager(context->getMemoryManager());
      bool value = _returnExpr->collapseTree(dContext).getEffectiveBooleanValue(dContext);

      DataItem* newBlock = new (getMemoryManager())
        DataItemSequence(dContext->getPathanFactory()->createBoolean(value, dContext),
                         dContext, getMemoryManager());
      newBlock->addPredicates(getPredicates());
      return newBlock->staticResolution(context);
    }
    else {
      return resolvePredicates(context);
    }
  }
  else {
    return constantFold(context);
  }
}

Result DataItemQuantifiedExpr::createResultImpl(Bindings::const_iterator it, Bindings::const_iterator end, DynamicContext* context, int flags) const
{
  return new QuantifiedResult(_qType, it, end, _returnExpr, context);
}

DataItemQuantifiedExpr::QuantifierType DataItemQuantifiedExpr::getQuantifierType() const {
  return _qType;
}

DataItemQuantifiedExpr::QuantifiedResult::QuantifiedResult(QuantifierType type, Bindings::const_iterator it, Bindings::const_iterator end,
                                                           const DataItem *returnExpr, DynamicContext *context)
  : SingleResult(context),
    _type(type),
    _returnExpr(returnExpr)
{
  for(; it != end; ++it) {
      _ebs.push_back(VBExecution(*it, context));
  }
}

Item::Ptr DataItemQuantifiedExpr::QuantifiedResult::getSingleResult(DynamicContext *context) const
{
  VariableStore* varStore = context->getVariableStore();
  bool defaultResult = (_type == some) ? false : true;

  ExecutionBindings &ebs = const_cast<ExecutionBindings&>(_ebs); // _ebs is mutable

  // Initialise and run the execution bindings
  varStore->addLogicalBlockScope();
  if(DataItemFor::nextState(ebs, context, true)) {
    do {
      bool result = _returnExpr->collapseTree(context, DataItem::UNORDERED|DataItem::RETURN_TWO).getEffectiveBooleanValue(context);
      if(defaultResult != result) {
        defaultResult = result;
        break;
      }
    } while(DataItemFor::nextState(ebs, context, false));
  }
  varStore->removeScope();

  return (const Item::Ptr)context->getPathanFactory()->createBoolean(defaultResult, context);
}

std::string DataItemQuantifiedExpr::QuantifiedResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<quantified/>" << std::endl;

  return oss.str();
}
