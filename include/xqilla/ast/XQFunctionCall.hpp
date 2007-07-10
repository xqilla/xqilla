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

#ifndef XQFUNCTIONCALL_HPP
#define XQFUNCTIONCALL_HPP

#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQFunctionCall : public ASTNodeImpl
{
public:
  XQFunctionCall(const XMLCh *qname, VectorOfASTNodes *args, XPath2MemoryManager *mm);

  virtual ASTNode* staticResolution(StaticContext *context);
  virtual ASTNode *staticTyping(StaticContext *context);

  virtual Result createResult(DynamicContext* context, int flags=0) const;

  const XMLCh *getQName() const { return qname_; }
  const VectorOfASTNodes *getArguments() const { return args_; }

private:
  const XMLCh *qname_;
  VectorOfASTNodes *args_;
};

#endif
