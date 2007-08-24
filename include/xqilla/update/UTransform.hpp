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

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/context/impl/VarStoreImpl.hpp>
#include <xqilla/schema/DocumentCache.hpp>

class XQILLA_API CopyBinding : public LocationInfo
{
public:
  CopyBinding(XPath2MemoryManager* memMgr, const XMLCh* variable, ASTNode* allValues);
  CopyBinding(XPath2MemoryManager* memMgr, const CopyBinding &o);

  const XMLCh *qname_, *uri_, *name_;

  StaticAnalysis src_;

  ASTNode *expr_;

private:
  CopyBinding(const CopyBinding &o);
};

typedef std::vector<CopyBinding*, XQillaAllocator<CopyBinding*> > VectorOfCopyBinding;

class XQILLA_API UTransform : public ASTNodeImpl
{
public:
  UTransform(VectorOfCopyBinding* bindings, ASTNode *modifyExpr, ASTNode* returnExpr, XPath2MemoryManager *expr);

  virtual ASTNode *staticResolution(StaticContext* context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Result createResult(DynamicContext* context, int flags) const;

  const VectorOfCopyBinding *getBindings() const { return bindings_; }

  const ASTNode *getModifyExpr() const { return modify_; }
  void setModifyExpr(ASTNode *modify) { modify_ = modify; }

  const ASTNode *getReturnExpr() const { return return_; }
  void setReturnExpr(ASTNode *ret) { return_ = ret; }

  DocumentCache::ValidationMode getRevalidationMode() const { return valMode_; }

protected:
  class TransformResult : public ResultImpl
  {
  public:
    TransformResult(const UTransform *transform, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const
    { return ""; }

  private:
    const UTransform *transform_;
    bool toDo_;

    VarStoreImpl scope_;
    Result result_;
  };

  VectorOfCopyBinding* bindings_;
  ASTNode *modify_;
  ASTNode *return_;
  DocumentCache::ValidationMode valMode_;
};

#endif
