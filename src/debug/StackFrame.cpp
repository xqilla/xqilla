/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
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

#include <xqilla/debug/StackFrame.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/simple-api/XQilla.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/context/VariableStore.hpp>

using namespace std;

StackFrame::StackFrame(const LocationInfo *location, DynamicContext *context)
  : location_(location),
    context_(context),
    contextItem_(context->getContextItem()),
    contextPosition_(context->getContextPosition()),
    contextSize_(context->getContextSize()),
    variables_(context->getVariableStore()),
    prev_(context->getStackFrame())
{
}

Sequence StackFrame::query(const XMLCh *queryString) const
{
  AutoDelete<SequenceBuilder> builder(context_->createSequenceBuilder());
  query(queryString, builder.get());
  return builder->getSequence();
}

void StackFrame::query(const XMLCh *queryString, EventHandler *events) const
{
  AutoDelete<DynamicContext> context(XQilla::createContext(context_->getLanguage(),
                                                           context_->getConfiguration()));

  // Set up the static type of all the in-scope variables
  VariableTypeStore *store = context->getVariableTypeStore();
  XPath2MemoryManager *memMgr = context->getMemoryManager();

  // For simplicity we'll make them all have type item()*
  StaticAnalysis src(memMgr);
  src.getStaticType() = StaticType(StaticType::ITEM_TYPE, 0, StaticType::UNLIMITED);

  vector<pair<const XMLCh *, const XMLCh*> > inScopeVars;
  variables_->getInScopeVariables(inScopeVars);
  vector<pair<const XMLCh *, const XMLCh*> >::iterator i = inScopeVars.begin();
  for(; i != inScopeVars.end(); ++i) {
    store->declareGlobalVar(i->first, i->second, src);
  }

  AutoDelete<XQQuery> query(XQilla::parse(queryString, context.get(), 0, XQilla::NO_ADOPT_CONTEXT));

  context->setContextItem(contextItem_);
  context->setContextPosition(contextPosition_);
  context->setContextSize(contextSize_);
  context->setVariableStore(variables_);

  query->execute(events, context);
}
