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

#ifndef _XQCASTAS_HPP
#define _XQCASTAS_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class SequenceType;

class PATHAN_EXPORT XQCastAs : public ASTNodeImpl
{
public:
	XQCastAs(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
	virtual ASTNode* staticResolution(StaticContext *context);

  const ASTNode *getExpression() const;
  const SequenceType *getSequenceType() const;

  void setExpression(ASTNode *item);

protected:
  class CastAsResult : public SingleResult
  {
  public:
    CastAsResult(const XQCastAs *di, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    const XQCastAs *_di;
  };

	ASTNode* _expr;
	SequenceType* _exprType;
};

#endif // _XQCASTAS_HPP
