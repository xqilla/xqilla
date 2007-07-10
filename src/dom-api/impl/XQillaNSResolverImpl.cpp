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

#include "../../config/xqilla_config.h"
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/dom/DOM.hpp>

XERCES_CPP_NAMESPACE_USE;

static const XMLCh g_nsBlocker[]={ chOpenSquare, chOpenSquare, 
                                   chCloseSquare, chCloseSquare, 
                                   chOpenCurly, chCloseCurly, 
                                   chNull };

XQillaNSResolverImpl::XQillaNSResolverImpl(XPath2MemoryManager* memMgr)
  : _namespaceBindings(6, false, memMgr),
    _resolverNode(0),
    _prevScope(0),
    _memMgr(memMgr)
{
  // "xml" is always bound to "http://www.w3.org/XML/1998/namespace"
  _namespaceBindings.put((void*)XMLUni::fgXMLString,(XMLCh*)XMLUni::fgXMLURIName);

  // "xmlns" is always bound to "http://www.w3.org/2000/xmlns/"
  _namespaceBindings.put((void*)XMLUni::fgXMLNSString,(XMLCh*)XMLUni::fgXMLNSURIName);
}


XQillaNSResolverImpl::XQillaNSResolverImpl(XPath2MemoryManager* memMgr,
                                           const DOMXPathNSResolver *prevScope)
  : _namespaceBindings(6, false, memMgr),
    _resolverNode(0),
    _prevScope(prevScope),
    _memMgr(memMgr)
{
}


XQillaNSResolverImpl::XQillaNSResolverImpl(XPath2MemoryManager* memMgr, 
                                           const DOMNode *resolverNode,
                                           const DOMXPathNSResolver *prevScope)
  : _namespaceBindings(6, false, memMgr),
    _resolverNode(resolverNode),
    _prevScope(prevScope),
    _memMgr(memMgr)
{
  if(prevScope == 0) {
    // "xml" is always bound to "http://www.w3.org/XML/1998/namespace"
    _namespaceBindings.put((void*)XMLUni::fgXMLString,(XMLCh*)XMLUni::fgXMLURIName);

    // "xmlns" is always bound to "http://www.w3.org/2000/xmlns/"
    _namespaceBindings.put((void*)XMLUni::fgXMLNSString,(XMLCh*)XMLUni::fgXMLNSURIName);
  }
}


XQillaNSResolverImpl::~XQillaNSResolverImpl()
{
}

const XMLCh* XQillaNSResolverImpl::lookupNamespaceURI(const XMLCh* prefix) const
{
  const XMLCh *uri = _namespaceBindings.get((void*)prefix);
  if(XPath2Utils::equals(uri, g_nsBlocker)) return NULL;
  else if(uri != NULL && *uri != 0) return uri;

  if(_resolverNode != 0) {
    uri = _resolverNode->lookupNamespaceURI(prefix);
    if(uri != NULL && *uri != 0) return uri;
  }

  if(_prevScope != 0)
    return _prevScope->lookupNamespaceURI(prefix);
  return 0;
}

const XMLCh* XQillaNSResolverImpl::lookupPrefix(const XMLCh* uri) const
{
  RefHashTableOfEnumerator<XMLCh> iterValue((RefHashTableOf<XMLCh>*)&_namespaceBindings);
  RefHashTableOfEnumerator<XMLCh> iterKey((RefHashTableOf<XMLCh>*)&_namespaceBindings);
  while(iterValue.hasMoreElements()) {
    XMLCh* key=(XMLCh*)iterKey.nextElementKey();
    if(XPath2Utils::equals(&iterValue.nextElement(), uri)) {
      return key;
    }
  }

  if(_resolverNode != 0) {
    const XMLCh *prefix = _resolverNode->lookupNamespacePrefix(uri, false);
    if(prefix != NULL && *prefix != 0) return prefix;
  }

  if(_prevScope != 0)
    return _prevScope->lookupPrefix(uri);
  return 0;
}

void XQillaNSResolverImpl::addNamespaceBinding(const XMLCh* prefix, const XMLCh* uri)
{
  if(uri == 0 || *uri == 0)
    uri = g_nsBlocker;
  _namespaceBindings.put((void*)_memMgr->getPooledString(prefix), (XMLCh*)_memMgr->getPooledString(uri));
}

void XQillaNSResolverImpl::release() {
  this->~XQillaNSResolverImpl();
  _memMgr->deallocate(this);
}

