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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

//////////////////////////////////////////////////////////////////////
// XQScopedNamespace.cpp: implementation of the XQScopedNamespace class.
//////////////////////////////////////////////////////////////////////

#include <xqilla/dom-api/XQScopedNamespace.hpp>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQScopedNamespace::XQScopedNamespace(XPath2MemoryManager* memMgr, const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* prevScope) :
    PathanNSResolverImpl(memMgr, NULL)
{
    _prevScope=prevScope;
}

XQScopedNamespace::~XQScopedNamespace()
{

}

const XMLCh* XQScopedNamespace::lookupNamespaceURI(const XMLCh* prefix) const
{
    const XMLCh* nsURI=PathanNSResolverImpl::lookupNamespaceURI(prefix);
    if(nsURI!=NULL)
        return nsURI;
    if(_prevScope)
        return _prevScope->lookupNamespaceURI(prefix);
    return NULL;
}

const XMLCh* XQScopedNamespace::lookupPrefix(const XMLCh* uri) const
{
    const XMLCh* nsPrefix=PathanNSResolverImpl::lookupPrefix(uri);
    if(nsPrefix!=NULL)
        return nsPrefix;
    if(_prevScope)
        return _prevScope->lookupPrefix(uri);
    return NULL;
}
