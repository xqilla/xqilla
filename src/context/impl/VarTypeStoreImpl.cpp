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

#include "../../config/xqilla_config.h"
#include <assert.h>
#include "VarTypeStoreImpl.hpp"
#include <xqilla/context/impl/VarHashEntryImpl.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XStr.hpp>
#include <xercesc/framework/XMLBuffer.hpp>

VarTypeStoreImpl::VarTypeStoreImpl(XPath2MemoryManager* memMgr)
  : _store(memMgr)
{
}

VarTypeStoreImpl::~VarTypeStoreImpl()
{
  /* nothing to do */
}

void VarTypeStoreImpl::clear()
{
  _store.clear();
}

void VarTypeStoreImpl::addLocalScope()
{
  _store.addScope(Scope<const StaticResolutionContext*>::LOCAL_SCOPE);
}

void VarTypeStoreImpl::addLogicalBlockScope()
{
  _store.addScope(Scope<const StaticResolutionContext*>::LOGICAL_BLOCK_SCOPE);
}

void VarTypeStoreImpl::removeScope()
{
  _store.removeScope();
}

void VarTypeStoreImpl::declareGlobalVar(const XMLCh* namespaceURI,
                                        const XMLCh* name,
                                        const StaticResolutionContext &src)
{
  _store.setGlobalVar(namespaceURI, name, &src);
}

void VarTypeStoreImpl::declareVar(const XMLCh* namespaceURI,
                                  const XMLCh* name,
                                  const StaticResolutionContext &src)
{
  _store.declareVar(namespaceURI, name, &src);
}

const StaticResolutionContext *VarTypeStoreImpl::getVar(const XMLCh* namespaceURI,
                                                        const XMLCh* name) const
{
	VarHashEntry<const StaticResolutionContext*>* result = _store.getVar(namespaceURI, name);
	if(result)
		return result->getValue();
  return 0;
}

const StaticResolutionContext* VarTypeStoreImpl::getGlobalVar(const XMLCh* namespaceURI,
                                                              const XMLCh* name) const
{
  VarHashEntry<const StaticResolutionContext*>* result = _store.getGlobalVar(namespaceURI, name);
  if(result)
    return result->getValue();
  return 0;
}
