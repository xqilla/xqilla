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
#include <assert.h>
#include <sstream>

#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>
#include <xqilla/context/ContextHelpers.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

static const XMLCh err_XPTY0004[] = { 'e', 'r', 'r', ':', 'X', 'P', 'T', 'Y', '0', '0', '0', '4', 0 };

XQTreatAs::XQTreatAs(ASTNode* expr, const SequenceType* exprType, XPath2MemoryManager* memMgr, const XMLCh *errorCode)
  : ASTNodeImpl(memMgr),
    _expr(expr),
    _exprType(exprType),
    _errorCode(errorCode),
    _doTypeCheck(true)
{
  setType(ASTNode::TREAT_AS);

  if(_errorCode == 0) _errorCode = err_XPTY0004;
}

Result XQTreatAs::createResult(DynamicContext* context, int flags) const
{
  Result result = _expr->createResult(context, flags);
  if(_exprType->getOccurrenceIndicator() != SequenceType::STAR ||
     _exprType->getItemType() == NULL) {
    result = _exprType->occurrenceMatches(result, this, _errorCode);
  }
  if(_doTypeCheck) {
    result = _exprType->typeMatches(result, this, _errorCode);
  }
  return result;
}

ASTNode* XQTreatAs::staticResolution(StaticContext *context)
{
  _exprType->staticResolution(context);

  if(_exprType->getOccurrenceIndicator() == SequenceType::QUESTION_MARK ||
     _exprType->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE) {
    AutoNodeSetOrderingReset orderReset(context);
    _expr = _expr->staticResolution(context);
  }
  else {
    _expr = _expr->staticResolution(context);
  }

  return this;
}

ASTNode *XQTreatAs::staticTyping(StaticContext *context)
{
  _src.clear();

  _expr = _expr->staticTyping(context);

  // Do as much static time type checking as we can, given the
  // limited static typing that we implement
  const SequenceType::ItemType *itemType = _exprType->getItemType();
  if(itemType != NULL) {
    const StaticType &sType = _expr->getStaticAnalysis().getStaticType();

    bool isExact;
    itemType->getStaticType(_src.getStaticType(), context, isExact, this);

    if(!sType.containsType(_src.getStaticType().flags) &&
       (_exprType->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE ||
        _exprType->getOccurrenceIndicator() == SequenceType::PLUS) &&
       !_expr->getStaticAnalysis().isNoFoldingForced() &&
       !_expr->getStaticAnalysis().isUpdating()) {
      // It never matches
      XMLBuffer buf;
      buf.set(X("Expression does not match type "));
      _exprType->toBuffer(buf);
      buf.append(X(" ["));
      buf.append(_errorCode);
      buf.append(X("]"));
      XQThrow(XPath2TypeMatchException, X("XQTreatAs::staticTyping"), buf.getRawBuffer());
    }

    if(isExact && sType.isType(_src.getStaticType().flags)) {
      if(_exprType->getOccurrenceIndicator() == SequenceType::STAR ||
         (_expr->getStaticAnalysis().getProperties() & StaticAnalysis::ONENODE) != 0) {
        // It always matches
        return _expr;
      }
      _doTypeCheck = false;
    }

    // Get a better static type by looking at our expression's type too
    _src.getStaticType().typeIntersect(sType);

    if(_src.getStaticType().containsType(StaticType::NODE_TYPE)) {
      // Copy the properties if we return nodes
      _src.setProperties(_expr->getStaticAnalysis().getProperties());
    }
  }
  else {
    _src.getStaticType().flags = 0;
    _doTypeCheck = false;
  }
  _src.add(_expr->getStaticAnalysis());

  if(_expr->isConstant() && !_expr->getStaticAnalysis().isUpdating()) {
    return constantFold(context);
  }
  return this;
}

const ASTNode *XQTreatAs::getExpression() const {
  return _expr;
}

const SequenceType *XQTreatAs::getSequenceType() const {
  return _exprType;
}

void XQTreatAs::setExpression(ASTNode *item) {
  _expr = item;
}
