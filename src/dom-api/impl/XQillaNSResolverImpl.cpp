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

#include "../../config/xqilla_config.h"
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/dom/DOMNamedNodeMap.hpp>

XQillaNSResolverImpl::XQillaNSResolverImpl(XPath2MemoryManager* memMgr, 
                                         XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *resolverNode) : 
  _namespaceBindings(6, false, memMgr),
  _resolverNode(resolverNode),
  _memMgr(memMgr)
{

  // "xml" is always bound to "http://www.w3.org/XML/1998/namespace"
  _namespaceBindings.put((void*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLString,(XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLURIName);

  // "xmlns" is always bound to "http://www.w3.org/2000/xmlns/"
  _namespaceBindings.put((void*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString,(XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSURIName);
  
}//constructor


XQillaNSResolverImpl::~XQillaNSResolverImpl()
{
	//Nothing
}//destructor

const XMLCh* XQillaNSResolverImpl::lookupNamespaceURI(const XMLCh* prefix) const
{
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMElement *parent = XPath2NSUtils::returnOwnerElement(_resolverNode);
  const XMLCh* uri = 0;

  while(!parent == 0 && parent->getNodeType() != XERCES_CPP_NAMESPACE_QUALIFIER DOMNode::DOCUMENT_NODE) {
    uri = parent->getAttributeNS(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSURIName, prefix);

    if (uri != NULL && *uri != 0) {
      return uri;
    }

    //get the parent of the parent
    parent = static_cast<const XERCES_CPP_NAMESPACE_QUALIFIER DOMElement *>(parent->getParentNode());
  }

  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(uri) == 0) {
    const XMLCh* resolvedPrefix = _namespaceBindings.get((void*)prefix);
    if(resolvedPrefix != NULL) {
      return resolvedPrefix;
    }
  }
 
  return 0;

}//lookupNamespaceURI

const XMLCh* XQillaNSResolverImpl::lookupPrefix(const XMLCh* uri) const {
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMElement *parent = XPath2NSUtils::returnOwnerElement(_resolverNode);

  while(!parent == 0 && parent->getNodeType() != XERCES_CPP_NAMESPACE_QUALIFIER DOMNode::DOCUMENT_NODE) {

    XERCES_CPP_NAMESPACE_QUALIFIER DOMNamedNodeMap *nodeList = parent->getAttributes();

    for(unsigned int i = 0; i < nodeList->getLength(); i++) {
      XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *attr = nodeList->item(i);
      
      if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::equals(attr->getNamespaceURI(), 
                                                          XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSURIName)) {

        if(XPath2Utils::equals(attr->getNodeValue(), uri)) {
          if(attr->getPrefix() != 0) {
            return attr->getLocalName();
          }
        }
         
      }
    }

    //get the parent of the parent
    parent = static_cast<const XERCES_CPP_NAMESPACE_QUALIFIER DOMElement *>(parent->getParentNode());
  }

  // if we are here, it is that we found nothing in the resolverNode
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOfEnumerator<XMLCh> iterValue((XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<XMLCh>*)&_namespaceBindings);
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOfEnumerator<XMLCh> iterKey((XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<XMLCh>*)&_namespaceBindings);
  while(iterValue.hasMoreElements()) {
    XMLCh* key=(XMLCh*)iterKey.nextElementKey();
    if(XPath2Utils::equals(&iterValue.nextElement(), uri)) {
      return key;
    }
  }

  return 0;

}

void XQillaNSResolverImpl::addNamespaceBinding(const XMLCh* prefix, const XMLCh* uri) {
    if(uri==0 || *uri==0)
    {
        if(_namespaceBindings.containsKey((const void*)prefix))
            _namespaceBindings.removeKey((const void*)prefix);
    }
    else
        _namespaceBindings.put((void*)_memMgr->getPooledString(prefix),(XMLCh*)_memMgr->getPooledString(uri));
}

void XQillaNSResolverImpl::release() {
  this->~XQillaNSResolverImpl();
  _memMgr->deallocate(this);
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *XQillaNSResolverImpl::getResolverNode(void) 
{
  return _resolverNode;
}//getResolverNode


