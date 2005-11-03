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

#ifndef _XQTREATAS_HPP
#define _XQTREATAS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/LazySequenceResult.hpp>

class SequenceType;

class PATHAN_EXPORT XQTreatAs : public ASTNodeImpl
{
public:
	XQTreatAs(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr);

	virtual Result createResult(DynamicContext* context, int flags=0) const;
	virtual ASTNode* staticResolution(StaticContext *context);

  const ASTNode *getExpression() const;
  const SequenceType *getSequenceType() const;

  void setExpression(ASTNode *item);

protected:
	ASTNode* _expr;
	SequenceType* _exprType;
};

#endif // DATAITEMTREATAS_HPP
