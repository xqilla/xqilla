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
// XQDebugHook.cpp: implementation of the XQDebugHook class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XQException.hpp>
#include <xqilla/context/XQDebugCallback.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <assert.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQDebugHook::XQDebugHook(const XMLCh* szFile, unsigned int nLine, unsigned int nColumn, ASTNode* impl, const XMLCh* functionName, XPath2MemoryManager* memMgr)
  : ASTNodeImpl(memMgr)
{
  m_impl=impl;
  m_nLine=nLine;
  m_nColumn=nColumn;
  m_szFile=szFile;
  m_szFunctionName=functionName;
  setType(ASTNode::DEBUG_HOOK);
}

Result XQDebugHook::collapseTree(DynamicContext *context, int flags) const
{
  XQDebugCallback* pDbgCallback=context->getDebugCallback();

  if(pDbgCallback)
    {
      if(context->isDebuggingEnabled()) 
        {
          pDbgCallback->IsBreakPointHit(context,m_szFile,m_nLine);
          flags=0;    // disable optimizations returning data partially or in a different order
        }
      if(m_szFunctionName) pDbgCallback->EnterFunction(context,m_szFile,m_szFunctionName,m_nLine,m_nColumn);
    }
  try
    {
      Result result=m_impl->collapseTree(context,flags);
      if(pDbgCallback) {
        Sequence seqRes=result.toSequence(context);
        pDbgCallback->ReportResult(context,m_szFile, m_nLine, m_nColumn, seqRes);
        if(m_szFunctionName) pDbgCallback->ExitFunction(context,m_szFunctionName);
        return seqRes;
      }
      else
        return result;
    }
  catch(XQException& e) {
    if(e.getXQueryFile() == NULL) {
      if(pDbgCallback && context->isDebuggingEnabled()) pDbgCallback->ReportFirstError(context,e.getError(), m_szFile, m_nLine);
      e.setXQueryPosition(m_szFile,m_nLine,m_nColumn);
    }
    throw e;
  }
  // shouldn't get here
  assert(0);
  return Sequence(context->getMemoryManager());
}

void XQDebugHook::addPredicates(const VectorOfASTNodes& steps)
{
  m_impl->addPredicates(steps);
}

ASTNode* XQDebugHook::staticResolution(StaticContext *context) 
{
  try {
    m_impl=m_impl->staticResolution(context);
  }
  catch(XQException& e) {
    if(e.getXQueryFile() == NULL) {
      e.setXQueryPosition(m_szFile,m_nLine,m_nColumn);
    }
    throw e;
  }
  return this;
}

const StaticResolutionContext &XQDebugHook::getStaticResolutionContext() const
{
  return m_impl->getStaticResolutionContext();
}

const XMLCh *XQDebugHook::getFunctionName() const
{
  return m_szFunctionName;
}

int XQDebugHook::getLine() const
{
  return m_nLine;
}

int XQDebugHook::getColumn() const
{
  return m_nColumn;
}

const XMLCh *XQDebugHook::getFile() const
{
  return m_szFile;
}
