/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
 *     Oracle. All rights reserved.
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

#include <xqilla/ast/XQNamespaceBinding.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/ContextHelpers.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

using namespace std;

XQNamespaceBinding::XQNamespaceBinding(DOMXPathNSResolver *namespaces, ASTNode *expr, XPath2MemoryManager *mm)
  : ASTNodeImpl(NAMESPACE_BINDING, mm),
    expr_(expr),
    namespaces_(namespaces)
{
}

Result XQNamespaceBinding::createResult(DynamicContext *context, int flags) const
{
  return expr_->createResult(context);
}

ASTNode *XQNamespaceBinding::staticResolution(StaticContext *context)
{
  AutoNsScopeReset jan(context, namespaces_);

  expr_ = expr_->staticResolution(context);

  return this;
}

ASTNode *XQNamespaceBinding::staticTyping(StaticContext *context)
{
  _src.clear();

  AutoNsScopeReset jan(context, namespaces_);

  expr_ = expr_->staticTyping(context);
  _src.copy(expr_->getStaticAnalysis());

  if(!_src.isUsed()) {
    return constantFold(context);
  }
  return this;
}
