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

#ifndef __XQILLANSRESOLVERIMPL_HPP
#define __XQILLANSRESOLVERIMPL_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xqilla/dom-api/XQillaNSResolver.hpp>
#include <xercesc/util/RefHashTableOf.hpp>

class XPath2MemoryManager;

class XQILLA_API XQillaNSResolverImpl : public XQillaNSResolver
{
public:
	XQillaNSResolverImpl(XPath2MemoryManager* memMgr, XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *resolverNode);
	~XQillaNSResolverImpl();

	virtual const XMLCh* lookupNamespaceURI(const XMLCh* prefix) const;
  virtual const XMLCh* lookupPrefix(const XMLCh* uri) const;
  
  virtual void addNamespaceBinding(const XMLCh* prefix, const XMLCh* uri);

  virtual void release();

	XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *getResolverNode(void);

protected:
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf< XMLCh > _namespaceBindings;
	XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *_resolverNode;
  XPath2MemoryManager* _memMgr;
};//XQillaNSResolverImpl


#endif //__XQILLANSRESOLVERIMPL_HPP
