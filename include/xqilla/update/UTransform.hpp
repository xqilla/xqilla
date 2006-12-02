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

#ifndef _UTRANSFORM_HPP
#define _UTRANSFORM_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQFLWOR.hpp>

class XQILLA_API UTransform : public XQFLWOR
{
public:
  UTransform(VectorOfVariableBinding* bindings, ASTNode *modifyExpr, ASTNode* returnExpr, XPath2MemoryManager *expr);

  virtual ASTNode *staticResolution(StaticContext* context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags) const;

  const ASTNode *getModifyExpr() const { return modify_; }
  void setModifyExpr(ASTNode *modify) { modify_ = modify; }

protected:
  class TransformResult : public ResultImpl
  {
  public:
    TransformResult(const UTransform *transform)
      : ResultImpl(transform), transform_(transform), toDo_(true), scope_(0), result_(0) {}
    ~TransformResult();

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const
    { return ""; }

  private:
    const UTransform *transform_;
    bool toDo_;

    Scope<Sequence> *scope_;
    Result result_;
  };

  ASTNode *modify_;
};

#endif
