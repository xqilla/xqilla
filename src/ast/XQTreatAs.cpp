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

#include "../config/xqilla_config.h"
#include <assert.h>
#include <sstream>

#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Item.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQTreatAs::XQTreatAs(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr),
  _expr(expr),
  _exprType(exprType)
{
	setType(ASTNode::TREAT_AS);
}

Result XQTreatAs::createResult(DynamicContext* context, int flags) const
{
  return _expr->collapseTree(context, flags & ~(ASTNode::RETURN_ONE|ASTNode::RETURN_TWO)).matches(_exprType, context);
}

ASTNode* XQTreatAs::staticResolution(StaticContext *context) {
  return resolveASTNode(_expr, context, true);
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
