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

#ifndef XQQUANTIFIED_HPP
#define XQQUANTIFIED_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class TupleNode;

class XQILLA_API XQQuantified : public ASTNodeImpl
{
public:
  enum Type {
    SOME,
    EVERY
  };

  XQQuantified(Type qtype, TupleNode *parent, ASTNode *expr, XPath2MemoryManager *mm);

  Type getQuantifierType() const { return qtype_; }

  const TupleNode *getParent() const { return parent_; }
  void setParent(TupleNode *parent) { parent_ = parent; }

  ASTNode *getExpression() const { return expr_; }
  void setExpression(ASTNode *expr) { expr_ = expr; }

  virtual ASTNode *staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

private:
  Type qtype_;
  TupleNode *parent_;
  ASTNode *expr_;
};

#endif
