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

#include "../config/pathan_config.h"
#include <xqilla/context/impl/DynamicContextImpl.hpp>
#include <assert.h>
#include <iostream>
#include <memory>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/ast/DataItemFunction.hpp>
#include <xqilla/context/impl/PathanFactoryImpl.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/dom-api/impl/PathanNSResolverImpl.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/utils/ContextUtils.hpp>
#include <xqilla/items/impl/NodeImpl.hpp>

#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/dom/DOMImplementation.hpp>
#include <xercesc/util/XMLURL.hpp>
#include <xercesc/util/RuntimeException.hpp>

static CodepointCollation g_codepointCollation;

DynamicContextImpl::DynamicContextImpl(const StaticContext *staticContext, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
  : _staticContext(staticContext),
    _createdWith(memMgr),
    _internalMM(memMgr),
    _nsResolver(staticContext->getNSResolver()),
    _defaultCollation(0),
    _contextItem(0),
    _contextPosition(1),
    _contextSize(1),
    _implicitTimezone(0),
    _resolvers(PathanAllocator<URIResolver*>(&_internalMM)),
    _docCache(staticContext->getDocumentCache()->createDerivedCache(&_internalMM))
{
  time(&_currentTime);
  _memMgr = &_internalMM;
  _varStore = _internalMM.createVariableStore();
  _pathanFactory = new (&_internalMM) PathanFactoryImpl(_docCache, &_internalMM);
}

DynamicContextImpl::~DynamicContextImpl()
{
  _contextItem = 0;
  _implicitTimezone = 0;
}

void DynamicContextImpl::release()
{
  this->~DynamicContextImpl();
  _createdWith->deallocate(this);
}

void DynamicContextImpl::clearDynamicContext()
{
  _nsResolver = _staticContext->getNSResolver();
  _contextItem = 0;
  _contextSize = 1;
  _contextPosition = 1;
  _varStore->clear();
  _implicitTimezone = 0;
  _resolvers.clear();
  _docCache->clearStoredDocuments();
  time(&_currentTime);
}

DynamicContext *DynamicContextImpl::createDynamicContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) const
{
  if(memMgr == 0) {
    return 0;
  }
  return _staticContext->createDynamicContext(memMgr);
}

const DocumentCache *DynamicContextImpl::getDocumentCache() const
{
  return _docCache;
}

void DynamicContextImpl::setContextItem(const Item::Ptr &item)
{
  _contextItem = item;
}

void DynamicContextImpl::setExternalContextNode(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node)
{
  // bump the document reference count, so that it will never reach zero...
  _docCache->incrementDocumentRefCount(XPath2Utils::getOwnerDoc(node));
  setContextItem(new NodeImpl(node, this));
}

/** Set the memory manager to the one given */
void DynamicContextImpl::setMemoryManager(XPath2MemoryManager* memMgr)
{
  _memMgr = memMgr;
}

void DynamicContextImpl::setContextSize(unsigned int size)
{
  _contextSize = size;
}

void DynamicContextImpl::setContextPosition(unsigned int pos)
{
  _contextPosition = pos;
}

const Item::Ptr &DynamicContextImpl::getContextItem() const
{
  return _contextItem;
}

unsigned int DynamicContextImpl::getContextSize() const
{
  return _contextSize;
}

unsigned int DynamicContextImpl::getContextPosition() const
{
  return _contextPosition;
}

VariableStore* DynamicContextImpl::getVariableStore()
{
  return _varStore;
}

time_t DynamicContextImpl::getCurrentTime() const
{
  return _currentTime;
}

void DynamicContextImpl::setCurrentTime(time_t newTime)
{
  _currentTime=newTime;
}

const ATDurationOrDerived::Ptr &DynamicContextImpl::getImplicitTimezone() const {
	if(_implicitTimezone == (const ATDurationOrDerived *)0) {
		// validate tzone
		Timezone tzone(ContextUtils::getTimezone());
		// c-style the const away since we are in a const method
		((DynamicContextImpl*)this)->_implicitTimezone =
			tzone.asDayTimeDuration(this);
	}
	return _implicitTimezone;
}

void DynamicContextImpl::setImplicitTimezone(const ATDurationOrDerived::Ptr &timezoneAsDuration) {
  // validate the timezone -- will trow if invalid
  Timezone timezone(timezoneAsDuration, this);
  this->_implicitTimezone = timezoneAsDuration;
}

XPath2MemoryManager* DynamicContextImpl::getMemoryManager() const
{
  return _memMgr;
}

XERCES_CPP_NAMESPACE::DOMDocument *DynamicContextImpl::createNewDocument() const
{
  return XERCES_CPP_NAMESPACE_QUALIFIER DOMImplementation::getImplementation()->createDocument(getMemoryManager());
}

void DynamicContextImpl::releaseDocument(XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *doc) const
{
  doc->release();
}

void DynamicContextImpl::registerURIResolver(URIResolver *resolver)
{
  if(resolver != 0) {
    _resolvers.push_back(resolver);
  }
}

Sequence DynamicContextImpl::resolveDocument(const XMLCh* uri)
{
  bool found = false;
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if((*i)->resolveDocument(result, uri, this)) {
      found = true;
      break;
    }
  }

  if(!found) {
    Node::Ptr doc;
    try {
      doc = _docCache->loadXMLDocument(uri, this);
    }
    catch(const XMLParseException&) {
      doc = 0;
    }

    if(doc != (const Node *)0) {
      result.addItem(doc);
    }
    else {
      XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer errMsg;
      errMsg.set(X("Error retrieving resource: "));
      errMsg.append(uri);
      DSLthrow(XMLParseException,X("DynamicContextImpl::resolveDocument"), errMsg.getRawBuffer());
    }
  }

  return result;
}

Sequence DynamicContextImpl::resolveCollection(const XMLCh* uri)
{
  bool found = false;
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if((*i)->resolveCollection(result, uri, this)) {
      found = true;
      break;
    }
  }

  if(!found) {
    Node::Ptr doc;
    try {
      doc = _docCache->loadXMLDocument(uri, this);
    }
    catch(const XMLParseException&) {
      doc = 0;
    }

    if(doc != (const Node *)0) {
      result.addItem(doc);
    }
    else {
      XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer errMsg;
      errMsg.set(X("Error retrieving resource: "));
      errMsg.append(uri);
      DSLthrow(XMLParseException,X("DynamicContextImpl::resolveDocument"), errMsg.getRawBuffer());
    }
  }

  return result;
}

Sequence DynamicContextImpl::resolveDefaultCollection()
{
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, PathanAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if((*i)->resolveDefaultCollection(result, this)) {
      break;
    }
  }
  return result;
}

Node::Ptr DynamicContextImpl::validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode)
{
  return _docCache->validate(node, valMode, this);
}

PathanFactory *DynamicContextImpl::getPathanFactory() const
{
  return _pathanFactory;
}

void DynamicContextImpl::setPathanFactory(PathanFactory *factory)
{
  _pathanFactory = factory;
}

void DynamicContextImpl::trace(const XMLCh* message1, const XMLCh* message2) {
    char* msg1=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(message1);
    char* msg2=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(message2);
    std::cerr << msg1 << " " << msg2 << std::endl; 
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&msg1);
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&msg2);
}

void DynamicContextImpl::setNSResolver(const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver) {
  _nsResolver = resolver;
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* DynamicContextImpl::getNSResolver() const {
  return _nsResolver;
}

const XMLCh* DynamicContextImpl::getUriBoundToPrefix(const XMLCh* prefix) const
{
  const XMLCh* uri = _nsResolver->lookupNamespaceURI(prefix);

	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(uri) == 0 && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(prefix) > 0){
		const XMLCh* msg = XPath2Utils::concatStrings(X("No namespace for prefix \'"), prefix, X("\'"), getMemoryManager());
		DSLthrow(NamespaceLookupException, X("DynamicContextImpl::getUriBoundToPrefix"), msg);
	}

	return uri;
}

const XMLCh* DynamicContextImpl::getPrefixBoundToUri(const XMLCh* uri) const
{
  return _nsResolver->lookupPrefix(uri);
}

void DynamicContextImpl::setXMLEntityResolver(XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* const handler)
{
  _docCache->setXMLEntityResolver(handler);
}

void DynamicContextImpl::setDefaultCollation(const XMLCh* URI)
{
  _defaultCollation=getMemoryManager()->getPooledString(URI);
}

Collation* DynamicContextImpl::getDefaultCollation() const
{
  if(_defaultCollation == 0) {
    return _staticContext->getDefaultCollation();
  }
  else {
    return getCollation(_defaultCollation);
  }
}
