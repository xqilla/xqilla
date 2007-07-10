/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Oracle. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
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
  XQillaNSResolverImpl(XPath2MemoryManager* memMgr);
  XQillaNSResolverImpl(XPath2MemoryManager* memMgr, const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *prevScope);
  XQillaNSResolverImpl(XPath2MemoryManager* memMgr, const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *resolverNode,
                       const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver *prevScope = 0);
  ~XQillaNSResolverImpl();

  virtual const XMLCh* lookupNamespaceURI(const XMLCh* prefix) const;
  virtual const XMLCh* lookupPrefix(const XMLCh* uri) const;
  
  virtual void addNamespaceBinding(const XMLCh* prefix, const XMLCh* uri);

  virtual void release();

protected:
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf< XMLCh > _namespaceBindings;
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *_resolverNode;
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* _prevScope;
  XPath2MemoryManager* _memMgr;
};


#endif
