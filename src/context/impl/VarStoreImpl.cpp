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

#include "../../config/xqilla_config.h"
#include <xqilla/context/impl/VarStoreImpl.hpp>
#include <xqilla/runtime/Result.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>

XERCES_CPP_NAMESPACE_USE;
using namespace std;

VarStoreImpl::VarStoreImpl(XPath2MemoryManager *mm, const VariableStore *parent)
  : uriPool_(1, mm),
    store_(5, true, mm),
    parent_(parent),
    mm_(mm)
{
}

VarStoreImpl::VarStoreImpl(const VarStoreImpl &other, XPath2MemoryManager *mm)
  : uriPool_(1, mm),
    store_(5, true, mm),
    parent_(other.parent_),
    mm_(mm)
{
  RefHash2KeysTableOfEnumerator<ResultBuffer> en(&const_cast<VarStoreImpl&>(other).store_);
  RefHash2KeysTableOfEnumerator<ResultBuffer> en2(&const_cast<VarStoreImpl&>(other).store_);
  while(en.hasMoreElements()) {
    void *name;
    int nsID;
    en.nextElementKey(name, nsID);
    setVar(other.uriPool_.getValueForId(nsID), (XMLCh*)name, en2.nextElement().createResult());
  }
}

Result VarStoreImpl::getVar(const XMLCh *namespaceURI, const XMLCh *name) const
{
  unsigned int nsID = uriPool_.getId(namespaceURI);
  // if the namespace is not in the map, the variable is not there neither
  if(nsID != 0) {
    const ResultBuffer *result = store_.get(mm_->getPooledString(name), nsID);
    if(result != 0) return const_cast<ResultBuffer*>(result)->createResult();
  }

  if(parent_ != 0) return parent_->getVar(namespaceURI, name);

  return 0;
}

void VarStoreImpl::getInScopeVariables(vector<pair<const XMLCh*, const XMLCh*> > &variables) const
{
  RefHash2KeysTableOfEnumerator<ResultBuffer> en(&const_cast<VarStoreImpl*>(this)->store_);
  while(en.hasMoreElements()) {
    void *name;
    int nsID;
    en.nextElementKey(name, nsID);
    variables.push_back(pair<const XMLCh*, const XMLCh*>(uriPool_.getValueForId(nsID), (XMLCh*)name));
  }

  if(parent_ != 0) parent_->getInScopeVariables(variables);
}

void VarStoreImpl::setVar(const XMLCh *namespaceURI, const XMLCh *name, const Result &value, unsigned int readCount)
{
  unsigned int nsID = uriPool_.addOrFind(namespaceURI);
  store_.put((void*)mm_->getPooledString(name), nsID, new ResultBuffer(value, readCount));
}

void VarStoreImpl::clear()
{
  uriPool_.flushAll();
  store_.removeAll();
}

void VarStoreImpl::cacheVariableStore(const StaticAnalysis &src, const VariableStore *toCache)
{
  vector<pair<const XMLCh*, const XMLCh*> > vars = src.variablesUsed();
  for(vector<pair<const XMLCh*, const XMLCh*> >::iterator i = vars.begin(); i != vars.end(); ++i) {
    // TBD variable use count - jpcs
    setVar(i->first, i->second, toCache->getVar(i->first, i->second));
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

SingleVarStore::SingleVarStore() : uri_(0), name_(0), parent_(0) {}

Result SingleVarStore::getVar(const XMLCh *namespaceURI, const XMLCh *name) const
{
  if(XPath2Utils::equals(name, name_) && XPath2Utils::equals(namespaceURI, uri_))
    return value;

  return parent_->getVar(namespaceURI, name);
}

void SingleVarStore::getInScopeVariables(vector<pair<const XMLCh*, const XMLCh*> > &variables) const
{
  variables.push_back(pair<const XMLCh*, const XMLCh*>(uri_, name_));

  if(parent_ != 0) parent_->getInScopeVariables(variables);
}

void SingleVarStore::setAsVariableStore(const XMLCh *namespaceURI, const XMLCh *name, DynamicContext *context)
{
  uri_ = namespaceURI;
  name_ = name;

  parent_ = context->getVariableStore();
  context->setVariableStore(this);
}

void SingleVarStore::unsetAsVariableStore(DynamicContext *context)
{
  context->setVariableStore(parent_);
}
