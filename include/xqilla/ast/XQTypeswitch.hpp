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

//////////////////////////////////////////////////////////////////////
// XQTypeswitch.hpp: interface for the XQTypeswitch class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQTYPESWITCH_H__90ED3AA0_5C63_437A_9B94_0CCDEF499124__INCLUDED_)
#define AFXQ_XQTYPESWITCH_H__90ED3AA0_5C63_437A_9B94_0CCDEF499124__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <vector>

class ResultBuffer;
template<class TYPE> class Scope;

class XQILLA_API XQTypeswitch : public ASTNodeImpl
{
public:
  class Clause
  {
  public:
    Clause(SequenceType* type, ASTNode* expr, const XMLCh* variable)
      : _expr(expr), _type(type), _variable(variable), _uri(0), _name(0) {}

    void staticResolution(const StaticResolutionContext &var_src, StaticContext* context, StaticResolutionContext &src);

    ASTNode* _expr;
    SequenceType* _type;
    const XMLCh* _variable;
    const XMLCh* _uri;
    const XMLCh* _name;
  };

  typedef std::vector<Clause*, XQillaAllocator<Clause*> > VectorOfClause;

  XQTypeswitch(ASTNode* eval, VectorOfClause* clauses, Clause* defReturn, XPath2MemoryManager* expr);

  Result createResult(DynamicContext* context, int flags=0) const;
  ASTNode* staticResolution(StaticContext *context);

  const ASTNode *getExpression() const;
  const Clause *getDefaultClause() const;
  const VectorOfClause *getClauses() const;

  void setExpression(ASTNode *expr);

protected:
  class TypeswitchResult : public ResultImpl
  {
  public:
    TypeswitchResult(const XQTypeswitch *di, int flags, DynamicContext *context);

    Item::Ptr next(DynamicContext *context);
    std::string asString(DynamicContext *context, int indent) const;

  private:
    int _flags;
    const XQTypeswitch *_di;

    Scope<Sequence> *_scope;
    Result _result;
    bool _scopeRemoved;
  };

  ASTNode* _expr;
  Clause* _default;
  VectorOfClause* _clauses;
};

#endif // !defined(AFXQ_XQTYPESWITCH_H__90ED3AA0_5C63_437A_9B94_0CCDEF499124__INCLUDED_)
