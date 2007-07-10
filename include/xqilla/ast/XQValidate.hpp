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

#ifndef XQVALIDATE_HPP
#define XQVALIDATE_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/schema/DocumentCache.hpp>

class XQILLA_API XQValidate : public ASTNodeImpl
{
public:
  XQValidate(ASTNode *expr, DocumentCache::ValidationMode mode, XPath2MemoryManager *mm);

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);
  virtual Sequence createSequence(DynamicContext* context, int flags=0) const;

  const ASTNode *getExpression() const { return expr_; }
  DocumentCache::ValidationMode getMode() const { return mode_; }

  void setExpression(ASTNode *expr) { expr_ = expr; }

private:
  ASTNode *expr_;
  DocumentCache::ValidationMode mode_;
};

#endif
