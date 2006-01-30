/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
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

XQTreatAs::XQTreatAs(ASTNode* expr, const SequenceType* exprType, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _expr(expr),
  _exprType(exprType)
{
  setType(ASTNode::TREAT_AS);
}

Result XQTreatAs::createResult(DynamicContext* context, int flags) const
{
  return _exprType->matches(_expr->collapseTree(context, flags));
}

void noMatchCheck(const StaticType &sType,
                         StaticType::StaticTypeFlags type,
                         SequenceType::OccurrenceIndicator occurance)
{
  if((sType.flags & type) == 0 &&
     (occurance == SequenceType::EXACTLY_ONE ||
      occurance == SequenceType::PLUS)) {
    XQThrow(XPath2TypeMatchException, X("XQTreatAs::staticResolution"),
            X("ItemType matching failed [err:XPTY0004]"));
  }
}

bool matchCheck(const StaticType &sType,
                       StaticType::StaticTypeFlags type,
                       SequenceType::OccurrenceIndicator occurance)
{
  return (sType.flags & type) != 0 && (sType.flags & ~type) == 0 &&
    occurance == SequenceType::STAR;
}

ASTNode* XQTreatAs::staticResolution(StaticContext *context)
{
  if(_exprType->getOccurrenceIndicator() == SequenceType::QUESTION_MARK ||
     _exprType->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE) {
    AutoNodeSetOrderingReset orderReset(context);
    _expr = _expr->staticResolution(context);
  }
  else {
    _expr = _expr->staticResolution(context);
  }

  // Do as much static time type checking as we can, given the
  // limited static typing that we implement
  const SequenceType::ItemType *itemType = _exprType->getItemType();
  if(itemType != NULL) {
    const StaticType &sType = _expr->getStaticResolutionContext().getStaticType();

    switch(itemType->getItemTestType()) {
    case SequenceType::ItemType::TEST_NODE: {
      if(matchCheck(sType, StaticType::NODE_TYPE,
                    _exprType->getOccurrenceIndicator())) {
        return _expr;
      }
      // Fall through
    }
    case SequenceType::ItemType::TEST_ELEMENT:
    case SequenceType::ItemType::TEST_ATTRIBUTE:
    case SequenceType::ItemType::TEST_SCHEMA_ELEMENT:
    case SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE:
    case SequenceType::ItemType::TEST_PI:
    case SequenceType::ItemType::TEST_COMMENT:
    case SequenceType::ItemType::TEST_TEXT:
    case SequenceType::ItemType::TEST_DOCUMENT: {
      noMatchCheck(sType, StaticType::NODE_TYPE,
                   _exprType->getOccurrenceIndicator());
      _src.getStaticType().flags = StaticType::NODE_TYPE;
      _src.setProperties(_expr->getStaticResolutionContext().getProperties());
      break;
    }
    case SequenceType::ItemType::TEST_ANYTHING: {
      noMatchCheck(sType, StaticType::ITEM_TYPE,
                   _exprType->getOccurrenceIndicator());
      if(matchCheck(sType, StaticType::ITEM_TYPE,
                    _exprType->getOccurrenceIndicator())) {
        return _expr;
      }
      _src.getStaticType() = _expr->getStaticResolutionContext().getStaticType();
      _src.setProperties(_expr->getStaticResolutionContext().getProperties());
      break;
    }
    case SequenceType::ItemType::TEST_ATOMIC_TYPE: {
      const XMLCh * uri = itemType->getTypeURI(context);
      const XMLCh *name = itemType->getType()->getName();

      if(XPath2Utils::equals(name, AnyAtomicType::fgDT_ANYATOMICTYPE) &&
         XPath2Utils::equals(uri, FunctionConstructor::XMLChXPath2DatatypesURI)) {

        noMatchCheck(sType, StaticType::ANY_ATOMIC_TYPE,
                     _exprType->getOccurrenceIndicator());
        if(matchCheck(sType, StaticType::ANY_ATOMIC_TYPE,
                      _exprType->getOccurrenceIndicator())) {
          return _expr;
        }
        _src.getStaticType() = _expr->getStaticResolutionContext().getStaticType();
      }
      else {
        switch(context->getItemFactory()->getPrimitiveTypeIndex(uri, name)) {
        case AnyAtomicType::DECIMAL:
        case AnyAtomicType::DOUBLE:
        case AnyAtomicType::FLOAT: {
          noMatchCheck(sType, StaticType::NUMERIC_TYPE,
                       _exprType->getOccurrenceIndicator());
          break;
        }
        case AnyAtomicType::UNTYPED_ATOMIC: {
          noMatchCheck(sType, StaticType::UNTYPED_ATOMIC_TYPE,
                       _exprType->getOccurrenceIndicator());
          if(matchCheck(sType, StaticType::UNTYPED_ATOMIC_TYPE,
                        _exprType->getOccurrenceIndicator())) {
            return _expr;
          }
          break;
        }
        case AnyAtomicType::ANY_URI: {
          noMatchCheck(sType, StaticType::ANY_URI_TYPE,
                       _exprType->getOccurrenceIndicator());
          if(matchCheck(sType, StaticType::ANY_URI_TYPE,
                        _exprType->getOccurrenceIndicator())) {
            return _expr;
          }
          break;
        }
        default: {
          noMatchCheck(sType, StaticType::OTHER_TYPE,
                       _exprType->getOccurrenceIndicator());
          break;
        }
        }
        _src.getStaticType().flags = StaticType::getFlagsFor(uri, name, context);
      }
      break;
    }
    }
  }
  else {
    _src.getStaticType().flags = 0;
  }
  _src.add(_expr->getStaticResolutionContext());

  if(_expr->isConstant()) {
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
