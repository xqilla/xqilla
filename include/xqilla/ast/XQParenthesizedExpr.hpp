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

#ifndef _XQPARENTHESIZEDEXPR_HPP
#define _XQPARENTHESIZEDEXPR_HPP

#include <xqilla/framework/Pathan.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>

class PATHAN_EXPORT XQParenthesizedExpr : public ASTNodeImpl
{

public:
  XQParenthesizedExpr(XPath2MemoryManager* memMgr);	

  ///adds a dataitem to this XQParenthesizedExpr
  void addItem(ASTNode* di);

  virtual Result createResult(DynamicContext* context, int flags=0) const;
  virtual ASTNode* staticResolution(StaticContext *context);

  const VectorOfASTNodes &getChildren() const;

private:
  class ParenthesizedResult : public ResultImpl
  {
  public:
    ParenthesizedResult(const XQParenthesizedExpr *di, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const XQParenthesizedExpr *_di;
    VectorOfASTNodes::const_iterator _i;
    Result _result;
  };

	VectorOfASTNodes _dataItems;
};

#endif
