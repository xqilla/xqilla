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
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#ifndef _XQPARENTHESIZEDEXPR_HPP
#define _XQPARENTHESIZEDEXPR_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQParenthesizedExpr : public ASTNodeImpl
{

public:
  XQParenthesizedExpr(XPath2MemoryManager* memMgr);	

  ///adds a ASTNode to this XQParenthesizedExpr
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

	VectorOfASTNodes _astNodes;
};

#endif
