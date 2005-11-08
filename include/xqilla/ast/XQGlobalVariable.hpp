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
// XQGlobalVariable.hpp: interface for the XQGlobalVariable class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQGLOBALVARIABLE_H__A97FA5AD_5355_45CD_9092_ED94F5CD035B__INCLUDED_)
#define AFXQ_XQGLOBALVARIABLE_H__A97FA5AD_5355_45CD_9092_ED94F5CD035B__INCLUDED_

#include <xqilla/ast/ASTNodeImpl.hpp>

class SequenceType;

class XQILLA_API XQGlobalVariable : public ASTNodeImpl
{
public:
	XQGlobalVariable(const XMLCh* varQName, SequenceType* seqType, ASTNode* value, XPath2MemoryManager* expr);

	virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
	virtual ASTNode* staticResolution(StaticContext *context);

	const XMLCh* getVariableName() const;
	bool isExternal() const;
	void setVariableExpr(ASTNode* value);

  const XMLCh *getVariableURI() const;
  const XMLCh *getVariableLocalName() const;
  const SequenceType *getSequenceType() const;
  const ASTNode *getVariableExpr() const;

protected:
	const XMLCh* m_szQName;
	const XMLCh* m_szURI;
	const XMLCh* m_szLocalName;
	SequenceType* m_Type;
	ASTNode* m_Value;
};

#endif // !defined(AFXQ_XQGLOBALVARIABLE_H__A97FA5AD_5355_45CD_9092_ED94F5CD035B__INCLUDED_)
