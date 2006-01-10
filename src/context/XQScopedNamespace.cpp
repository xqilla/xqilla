/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
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
