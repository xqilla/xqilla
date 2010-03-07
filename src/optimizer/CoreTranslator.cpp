/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2009
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
 */

#include <xqilla/optimizer/CoreTranslator.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

#include <xqilla/operators/Range.hpp>

#include <xqilla/utils/DelayedModule.hpp>
#include "CoreModule.hpp"

XERCES_CPP_NAMESPACE_USE;

static XQQuery *findCoreModule(XQQuery *query)
{
  if(XPath2Utils::equals(query->getModuleTargetNamespace(), core_uri))
    return query;

  const ImportedModules &modules = query->getImportedModules();
  for(ImportedModules::const_iterator it2 = modules.begin(); it2 != modules.end(); ++it2) {
    XQQuery *result = findCoreModule(*it2);
    if(result) return result;
  }

  return 0;
}

void CoreTranslator::optimize(XQQuery *query)
{
  if(coreModule_ == 0)
    coreModule_ = findCoreModule(query);

  if(coreModule_ == 0) {
    // Create the core module
    coreModule_ = core_module.createModule(context_->createModuleContext(),
                                           context_->getMemoryManager());
    query->importModule(coreModule_);
  }

  ASTVisitor::optimize(query);
}

ASTNode *CoreTranslator::optimizeOperator(XQOperator *item)
{
  VectorOfASTNodes &args = const_cast<VectorOfASTNodes &>(item->getArguments());
  const XMLCh *name = item->getOperatorName();

  if(name == Range::name) {
    ASTNode *result = coreModule_->getStaticContext()->lookUpFunction(core_uri, X("to"), args);
    args.clear();
    item->release();
    return result;
  }

  return item;
}
