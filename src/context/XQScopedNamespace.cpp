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
// XQScopedNamespace.cpp: implementation of the XQScopedNamespace class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/context/XQScopedNamespace.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQScopedNamespace::XQScopedNamespace(XPath2MemoryManager* memMgr, const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* prevScope) :
    XQillaNSResolverImpl(memMgr, NULL)
{
    _prevScope=prevScope;
    _ctxNode=NULL;
}

XQScopedNamespace::~XQScopedNamespace()
{

}

void XQScopedNamespace::setNodeContext(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* node)
{
    _ctxNode=node;
}

const XMLCh* XQScopedNamespace::lookupNamespaceURI(const XMLCh* prefix) const
{
    const XMLCh* nsURI=XQillaNSResolverImpl::lookupNamespaceURI(prefix);
    if(nsURI!=NULL)
        return nsURI;
    if(_ctxNode)
    {
        nsURI=_ctxNode->lookupNamespaceURI(prefix);
        if(nsURI)
            return nsURI;
    }
    if(_prevScope)
        return _prevScope->lookupNamespaceURI(prefix);
    return NULL;
}

const XMLCh* XQScopedNamespace::lookupPrefix(const XMLCh* uri) const
{
    const XMLCh* nsPrefix=XQillaNSResolverImpl::lookupPrefix(uri);
    if(nsPrefix!=NULL)
        return nsPrefix;
    if(_ctxNode)
    {
        nsPrefix=_ctxNode->lookupNamespacePrefix(uri, false);
        if(nsPrefix)
            return nsPrefix;
    }
    if(_prevScope)
        return _prevScope->lookupPrefix(uri);
    return NULL;
}
