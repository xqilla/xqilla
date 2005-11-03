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

#ifndef _XQINSTANCEOF_HPP
#define _XQINSTANCEOF_HPP

#include <xqilla/framework/Pathan.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/runtime/SingleResult.hpp>

class SequenceType;

class PATHAN_EXPORT XQInstanceOf : public ASTNodeImpl
{
public:
  XQInstanceOf(ASTNode* expr, SequenceType* exprType, XPath2MemoryManager* memMgr);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);

  const ASTNode *getExpression() const;
  const SequenceType *getSequenceType() const;

  void setExpression(ASTNode *item);

protected:
  class InstanceOfResult : public SingleResult
  {
  public:
    InstanceOfResult(const XQInstanceOf *di, int flags, DynamicContext *context);

    Item::Ptr getSingleResult(DynamicContext *context) const;
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const XQInstanceOf *_di;
  };

	ASTNode* _expr;
	SequenceType* _exprType;
};

#endif // DATAITEMINSTANCEOF_HPP
