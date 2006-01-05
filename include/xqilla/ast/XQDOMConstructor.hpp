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
// XQDOMConstructor.hpp: interface for the XQDOMConstructor class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQDOMCONSTRUCTOR_H__56E97972_3896_49D3_B055_36CC3E9E550A__INCLUDED_)
#define AFXQ_XQDOMCONSTRUCTOR_H__56E97972_3896_49D3_B055_36CC3E9E550A__INCLUDED_

#include <vector>

#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/items/Node.hpp>

#include <xercesc/framework/XMLBuffer.hpp>

class XQILLA_API XQDOMConstructor : public ASTNodeImpl
{
public:
	XQDOMConstructor(const XMLCh* nodeType, ASTNode* name, VectorOfASTNodes* attrList, VectorOfASTNodes* children, XPath2MemoryManager* expr);

	virtual Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;
	virtual ASTNode* staticResolution(StaticContext *context);

  const XMLCh* getNodeType() const;
  const ASTNode *getName() const;
  const VectorOfASTNodes *getAttributes() const;
  const VectorOfASTNodes *getChildren() const;

  void setName(ASTNode *name);

protected:
  bool isTextNode(const Node::Ptr &node) const;
    bool getStringValue(XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer &value, DynamicContext *context) const;

protected:
	const XMLCh* m_nodeType;
	ASTNode* m_name;
	VectorOfASTNodes* m_attrList, *m_children;
};

#endif // !defined(AFXQ_XQDOMCONSTRUCTOR_H__56E97972_3896_49D3_B055_36CC3E9E550A__INCLUDED_)
