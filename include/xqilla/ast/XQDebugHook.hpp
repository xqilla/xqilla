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
// XQDebugHook.hpp: interface for the XQDebugHook class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQDEBUGHOOK_H__446AD191_E9D0_4658_BD8C_032D29DA123C__INCLUDED_)
#define AFXQ_XQDEBUGHOOK_H__446AD191_E9D0_4658_BD8C_032D29DA123C__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class XQILLA_API XQDebugHook : public ASTNodeImpl
{
public:
	XQDebugHook(const XMLCh* szFile, unsigned int nLine, unsigned int nColumn, ASTNode* impl, const XMLCh* functionName, XPath2MemoryManager* memMgr);
	
  virtual Result collapseTree(DynamicContext* context, int flags=0) const;

	virtual void addPredicates(const VectorOfASTNodes &steps);
	virtual ASTNode* staticResolution(StaticContext *context);

  virtual const StaticResolutionContext &getStaticResolutionContext() const;

  const XMLCh *getFunctionName() const;
  int getLine() const;
  int getColumn() const;
  const XMLCh *getFile() const;

	ASTNode* m_impl;
protected:
	const XMLCh* m_szFunctionName;
	unsigned int m_nLine,m_nColumn;
	const XMLCh* m_szFile; 
};

#endif // !defined(AFXQ_XQDEBUGHOOK_H__446AD191_E9D0_4658_BD8C_032D29DA123C__INCLUDED_)
