/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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
// XQFunction.hpp: interface for the XQFunction class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQFUNCTION_H__97943356_0D2D_4930_9D60_6E95AB67586A__INCLUDED_)
#define AFXQ_XQFUNCTION_H__97943356_0D2D_4930_9D60_6E95AB67586A__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/functions/FuncFactory.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/context/Scope.hpp>

class XQILLA_API XQUserFunction : public FuncFactory
{
public:
  class XQFunctionParameter
  {
  public:
    XQFunctionParameter(const XMLCh* paramName, SequenceType* type, XPath2MemoryManager* memMgr)
      : _src(memMgr)
    {
      _qname = memMgr->getPooledString(paramName);
      m_pType = type;
    }

    const XMLCh *_qname, *_uri, *_name;
    SequenceType* m_pType;
    StaticResolutionContext _src;
  };

  typedef std::vector<XQFunctionParameter*,XQillaAllocator<XQFunctionParameter*> > VectorOfFunctionParameters;

  class XQFunctionEvaluator : public XQFunction
  {
  public:
    XQFunctionEvaluator(const XQUserFunction* funcDef, const VectorOfASTNodes& args, XPath2MemoryManager* expr);

    void setSignature(const XMLCh* signature)
    {
      _signature=signature;
    }

    Result createResult(DynamicContext* context, int flags=0) const;
    ASTNode* staticResolution(StaticContext* context);

    const XQUserFunction *getFunctionDefinition() const
    {
      return m_pFuncDef;
    }

  protected:
    class FunctionEvaluatorResult : public ResultImpl
    {
    public:
      FunctionEvaluatorResult(const XQFunctionEvaluator *di, int flags, DynamicContext *context);

      Item::Ptr next(DynamicContext *context);
      std::string asString(DynamicContext *context, int indent) const;
    private:
      int _flags;
      const XQFunctionEvaluator *_di;

      Scope<Sequence> *_scope;
      Result _result;
      bool _scopeRemoved;
    };

    const XQUserFunction* m_pFuncDef;
  };

  XQUserFunction(const XMLCh* fnName, VectorOfFunctionParameters* params, ASTNode* body, SequenceType* returnValue, StaticContext* ctx);

  // from FuncFactory
  virtual ASTNode *createInstance(const VectorOfASTNodes &args, XPath2MemoryManager* expr) const;
  virtual const XMLCh* getName() const;
  virtual const XMLCh *getURI() const;
  virtual unsigned int getMinArgs() const;
  virtual unsigned int getMaxArgs() const;

  virtual const XMLCh* getFullName() const;
  const VectorOfFunctionParameters* getParams() const;
  const SequenceType* getReturnValue() const;

  void staticResolution(StaticContext* context);

  void setSignature(const XMLCh* signature);
  const XMLCh* getSignature();
  bool isExternal() const;
  void setFunctionBody(ASTNode* value);

  void setURI(const XMLCh* uri);
  const XMLCh *getPrefix() const;

  const ASTNode *getFunctionBody() const;

  static const XMLCh XMLChXQueryLocalFunctionsURI[];

protected:
  ASTNode* m_body;
  const XMLCh* m_szPrefix,*m_szName,*m_szSignature,*m_szFullName,*m_szURI;
  SequenceType* m_pReturnPattern;
  VectorOfFunctionParameters* m_pParams;
  XPath2MemoryManager* m_pMemMgr;
  bool m_bStaticallyResolved;

  friend class XQFunctionEvaluator;
};

#endif // !defined(AFXQ_XQFUNCTION_H__97943356_0D2D_4930_9D60_6E95AB67586A__INCLUDED_)
