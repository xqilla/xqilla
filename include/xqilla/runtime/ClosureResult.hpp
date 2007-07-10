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

#ifndef _CLOSURERESULT_HPP
#define _CLOSURERESULT_HPP

#include <xqilla/runtime/Result.hpp>
#include <xqilla/context/impl/VarStoreImpl.hpp>

class VariableStore;
class ASTNode;

class XQILLA_API ClosureResult : public ResultImpl
{
public:
  ClosureResult(const ASTNode *ast, DynamicContext *context, const VariableStore *varStore = 0);

  virtual Item::Ptr next(DynamicContext *context);

  virtual std::string asString(DynamicContext *context, int indent) const { return ""; }

private:
  VarStoreImpl varStore_;
  Result result_;
};

#endif
