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
// XQValidate.hpp: interface for the XQValidate class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQVALIDATE_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
#define AFXQ_XQVALIDATE_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/ast/ASTNodeImpl.hpp>
#include <xqilla/schema/DocumentCache.hpp>

/** Validate function. */
class XQILLA_API XQValidate : public ASTNodeImpl
{
public:
  XQValidate(ASTNode* valExpr, DocumentCache::ValidationMode valMode, XPath2MemoryManager* expr);

  /** evaluate the expression, and check if it's valid according to the schemas **/
  Sequence collapseTreeInternal(DynamicContext* context, int flags=0) const;

  /**
   *  Called during static analysis to determine if statically correct.  If
   *  not an appropriate error is thrown.
   */
  virtual ASTNode* staticResolution(StaticContext *context);

  const ASTNode *getExpression() const;
  DocumentCache::ValidationMode getValidationMode() const;

  void setExpression(ASTNode *expr);

protected:
  ASTNode* _expr;
  DocumentCache::ValidationMode _validationMode;
};

#endif // !defined(AFXQ_XQVALIDATE_H__2B6902E9_A4FA_4AB3_9C69_08A8E77E70DA__INCLUDED_)
