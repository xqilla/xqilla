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
// XQFunctionCall.hpp: interface for the XQFunctionCall class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
#define AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>

class QualifiedName;

/** placeholder for function calls. */
class XQILLA_API XQFunctionCall : public ASTNodeImpl
{
public:
  XQFunctionCall(QualifiedName* qname, const VectorOfASTNodes &args, XPath2MemoryManager* expr);

  /** always throws an exception **/
  Result createResult(DynamicContext* context, int flags=0) const;

  /**
   *  Will perform the binding with the real function body
   */
  virtual ASTNode* staticResolution(StaticContext *context);

  const QualifiedName *getName() const;
  const VectorOfASTNodes &getArguments() const;

protected:
  VectorOfASTNodes _args;
  QualifiedName* _qname;
};

#endif // !defined(AFXQ_XQFUNCTIONCALL_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
