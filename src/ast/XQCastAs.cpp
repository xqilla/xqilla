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

#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/exceptions/TypeErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/AnyAtomicType.hpp>
#include <xqilla/ast/XQAtomize.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQCastAs::XQCastAs(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _expr(expr),
  _exprType(exprType)
{
	setType(ASTNode::CAST_AS);
}

Result XQCastAs::createResult(DynamicContext* context, int flags) const
{
  return new CastAsResult(this);
}

ASTNode* XQCastAs::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  const SequenceType::ItemType *itemType = _exprType->getItemType();
  if(itemType != NULL) {
    bool isPrimitive;
    itemType->getStaticType(_src.getStaticType(), context, isPrimitive);
  }

  _expr = new (mm) XQAtomize(_expr, mm);
  _expr = _expr->staticResolution(context);
  _src.add(_expr->getStaticResolutionContext());

  if(_expr->isConstant()) {
    return constantFold(context);
  }
  return this;
}

const ASTNode *XQCastAs::getExpression() const {
  return _expr;
}

const SequenceType *XQCastAs::getSequenceType() const {
  return _exprType;
}

void XQCastAs::setExpression(ASTNode *item) {
  _expr = item;
}

XQCastAs::CastAsResult::CastAsResult(const XQCastAs *di)
  : _di(di)
{
}

Item::Ptr XQCastAs::CastAsResult::getSingleResult(DynamicContext *context) const
{
  // The semantics of the cast expression are as follows:
  //    1. Atomization is performed on the input expression.
	Result toBeCasted(_di->getExpression()->collapseTree(context));

  const Item::Ptr first = toBeCasted->next(context);

	if(first == NULLRCP) {
    //    3. If the result of atomization is an empty sequence:
    //       1. If ? is specified after the target type, the result of the cast expression is an empty sequence.
    //       2. If ? is not specified after the target type, a type error is raised [err:XPTY0004].
    if(_di->getSequenceType()->getOccurrenceIndicator() == SequenceType::EXACTLY_ONE) {
      XQThrow(TypeErrorException,X("XQCastAs::CastAsResult::getSingleResult"),X("The input to a non-optional cast as expression is an empty sequence [err:XPTY0004]"));
    }
    else {
      return 0;
    }
  }

  const Item::Ptr second = toBeCasted->next(context);

  //    2. If the result of atomization is a sequence of more than one atomic value, a type error is raised.[err:XPTY0004]
  if(second != NULLRCP) {
    XQThrow(TypeErrorException,X("XQCastAs::CastAsResult::getSingleResult"),X("The input to a cast as expression is more than one atomic value [err:XPTY0004]"));
  }

  if(_di->getSequenceType()->getItemTestType() != SequenceType::ItemType::TEST_ATOMIC_TYPE)
    XQThrow(TypeErrorException,X("XQCastAs::CastAsResult::getSingleResult"),X("Cannot cast to a non atomic type"));
  //    4. If the result of atomization is a single atomic value, the result of the cast expression depends on the input type and the target type.
  //       The normative definition of these rules is given in [XQuery 1.0 and XPath 2.0 Functions and Operators].
  return (const Item::Ptr)((const AnyAtomicType::Ptr)first)->castAs(_di->getSequenceType()->getTypeURI(context), _di->getSequenceType()->getConstrainingType()->getName(), context);
}

std::string XQCastAs::CastAsResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<castas/>" << std::endl;

  return oss.str();

}
