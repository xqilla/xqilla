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

//////////////////////////////////////////////////////////////////////
// XQScopedNamespace.hpp: interface for the XQScopedNamespace class.
//////////////////////////////////////////////////////////////////////

#if !defined(AFXQ_XQSCOPEDNAMESPACE_H__D6A320F5_21F1_421D_9E46_E4373B375E1A__INCLUDED_)
#define AFXQ_XQSCOPEDNAMESPACE_H__D6A320F5_21F1_421D_9E46_E4373B375E1A__INCLUDED_

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>

XERCES_CPP_NAMESPACE_BEGIN
class DOMXPathNSResolver;
XERCES_CPP_NAMESPACE_END

class XQILLA_API XQScopedNamespace : public XQillaNSResolverImpl
{
public:
	XQScopedNamespace(XPath2MemoryManager* memMgr, const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* prevScope);
	virtual ~XQScopedNamespace();

    virtual const XMLCh* lookupNamespaceURI(const XMLCh* prefix) const;
    virtual const XMLCh* lookupPrefix(const XMLCh* uri) const;

protected:
    const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* _prevScope;
};

#endif // !defined(AFXQ_XQSCOPEDNAMESPACE_H__D6A320F5_21F1_421D_9E46_E4373B375E1A__INCLUDED_)
