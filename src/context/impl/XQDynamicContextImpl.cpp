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
// XQContext.cpp: implementation of the XQContext class.
//////////////////////////////////////////////////////////////////////

#include <iostream>

#include <xqilla/context/impl/XQDynamicContextImpl.hpp>
#include <xqilla/context/impl/ItemFactoryImpl.hpp>

#include <xqilla/context/VariableStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/items/DatatypeLookup.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/utils/ContextUtils.hpp>
#include <xqilla/items/impl/NodeImpl.hpp>
#include "../dom-api/impl/XPathDocumentImpl.hpp"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

XQDynamicContextImpl::XQDynamicContextImpl(const StaticContext *staticContext, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr)
  : _staticContext(staticContext),
    _createdWith(memMgr),
    _internalMM(memMgr),
    _nsResolver(staticContext->getNSResolver()),
    _defaultCollation(0),
    _defaultElementNS(staticContext->getDefaultElementAndTypeNS()),
    _contextItem(0),
    _contextPosition(1),
    _contextSize(1),
    _implicitTimezone(0),
    _resolvers(XQillaAllocator<URIResolver*>(&_internalMM)),
    _docCache(staticContext->getDocumentCache()->createDerivedCache(&_internalMM))
{
  time(&_currentTime);
  _memMgr = &_internalMM;
  _varStore = _internalMM.createVariableStore();
  _itemFactory = new (&_internalMM) ItemFactoryImpl(_docCache, &_internalMM);

  m_pDebugCallback = NULL;
  m_bEnableDebugging = false;
}

XQDynamicContextImpl::~XQDynamicContextImpl()
{
  _contextItem = 0;
  _implicitTimezone = 0;

  delete _varStore;
  delete _itemFactory;
}

DynamicContext *XQDynamicContextImpl::createDynamicContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) const
{
  if(memMgr == 0) {
    return 0;
  }
  return _staticContext->createDynamicContext(memMgr);
}

void XQDynamicContextImpl::setMemoryManager(XPath2MemoryManager* memMgr)
{
  _memMgr = memMgr;
}

void XQDynamicContextImpl::setDebugCallback(XQDebugCallback* callback)
{
    m_pDebugCallback=callback;
}

XQDebugCallback* XQDynamicContextImpl::getDebugCallback() const
{
    return m_pDebugCallback;
}

void XQDynamicContextImpl::enableDebugging(bool enable/*=true*/)
{
    m_bEnableDebugging=enable;
}

bool XQDynamicContextImpl::isDebuggingEnabled() const
{
    return m_bEnableDebugging;
}

void XQDynamicContextImpl::clearDynamicContext()
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

const DocumentCache *XQDynamicContextImpl::getDocumentCache() const
{
  return _docCache;
}

void XQDynamicContextImpl::setContextItem(const Item::Ptr &item)
{
  _contextItem = item;
}

void XQDynamicContextImpl::setExternalContextNode(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node)
{
  // bump the document reference count, so that it will never reach zero...
  _docCache->incrementDocumentRefCount(XPath2Utils::getOwnerDoc(node));
  setContextItem(new NodeImpl(node, this));
}

void XQDynamicContextImpl::setContextSize(unsigned int size)
{
  _contextSize = size;
}

void XQDynamicContextImpl::setContextPosition(unsigned int pos)
{
  _contextPosition = pos;
}

const Item::Ptr &XQDynamicContextImpl::getContextItem() const
{
  return _contextItem;
}

unsigned int XQDynamicContextImpl::getContextSize() const
{
  return _contextSize;
}

unsigned int XQDynamicContextImpl::getContextPosition() const
{
  return _contextPosition;
}

VariableStore* XQDynamicContextImpl::getVariableStore()
{
  return _varStore;
}

time_t XQDynamicContextImpl::getCurrentTime() const
{
  return _currentTime;
}

void XQDynamicContextImpl::setCurrentTime(time_t newTime)
{
  _currentTime=newTime;
}

const ATDurationOrDerived::Ptr &XQDynamicContextImpl::getImplicitTimezone() const {
  if(_implicitTimezone == NULLRCP) {
    // validate tzone
    Timezone tzone(ContextUtils::getTimezone());
    // c-style the const away since we are in a const method
    ((XQDynamicContextImpl*)this)->_implicitTimezone = tzone.asDayTimeDuration(this);
}

  return _implicitTimezone;
}

void XQDynamicContextImpl::setImplicitTimezone(const ATDurationOrDerived::Ptr &timezoneAsDuration) {
  // validate the timezone -- will trow if invalid
  Timezone timezone(timezoneAsDuration, this);
  this->_implicitTimezone = timezoneAsDuration;
}

XPath2MemoryManager* XQDynamicContextImpl::getMemoryManager() const
{
  return _memMgr;
}

const XMLCh* XQDynamicContextImpl::getDefaultElementAndTypeNS() const
{
  return _defaultElementNS;
}

void XQDynamicContextImpl::setDefaultElementAndTypeNS(const XMLCh* newNS) {
  _defaultElementNS = newNS;
}

XERCES_CPP_NAMESPACE::DOMDocument *XQDynamicContextImpl::createNewDocument() const
{
  return new (getMemoryManager()) XPathDocumentImpl(getMemoryManager());
}

void XQDynamicContextImpl::releaseDocument(XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *doc) const
{
  doc->release();
}

void XQDynamicContextImpl::registerURIResolver(URIResolver *resolver)
{
  if(resolver != 0) {
    _resolvers.push_back(resolver);
  }
}

Sequence XQDynamicContextImpl::resolveDocument(const XMLCh* uri)
{
  bool found = false;
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
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

    if(doc != NULLRCP) {
      result.addItem(doc);
    }
    else {
      XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer errMsg;
      errMsg.set(X("Error retrieving resource: "));
      errMsg.append(uri);
      XQThrow(XMLParseException,X("XQDynamicContextImpl::resolveDocument"), errMsg.getRawBuffer());
    }
  }

  return result;
}

Sequence XQDynamicContextImpl::resolveCollection(const XMLCh* uri)
{
  bool found = false;
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
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

    if(doc != NULLRCP) {
      result.addItem(doc);
    }
    else {
      XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer errMsg;
      errMsg.set(X("Error retrieving resource: "));
      errMsg.append(uri);
      XQThrow(XMLParseException,X("XQDynamicContextImpl::resolveDocument"), errMsg.getRawBuffer());
    }
  }

  return result;
}

Sequence XQDynamicContextImpl::resolveDefaultCollection()
{
  Sequence result(getMemoryManager());
  std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<URIResolver *, XQillaAllocator<URIResolver*> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if((*i)->resolveDefaultCollection(result, this)) {
      break;
    }
  }
  return result;
}

Node::Ptr XQDynamicContextImpl::validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode)
{
  return _docCache->validate(node, valMode, this);
}

ItemFactory *XQDynamicContextImpl::getItemFactory() const
{
  return _itemFactory;
}

void XQDynamicContextImpl::setItemFactory(ItemFactory *factory)
{
  _itemFactory = factory;
}

void XQDynamicContextImpl::trace(const XMLCh* message1, const XMLCh* message2) {
    char* msg1=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(message1);
    char* msg2=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(message2);
    std::cerr << msg1 << " " << msg2 << std::endl; 
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&msg1);
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&msg2);
}

void XQDynamicContextImpl::setNamespaceBinding(const XMLCh* prefix, const XMLCh* uri)
{
	((XQillaNSResolverImpl*)_nsResolver)->addNamespaceBinding(prefix,uri);
}

void XQDynamicContextImpl::setNSResolver(const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver) {
  _nsResolver = resolver;
}

const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* XQDynamicContextImpl::getNSResolver() const {
  return _nsResolver;
}

const XMLCh* XQDynamicContextImpl::getUriBoundToPrefix(const XMLCh* prefix) const
{
  const XMLCh* uri = _nsResolver->lookupNamespaceURI(prefix);

	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(uri) == 0 && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(prefix) > 0){
		const XMLCh* msg = XPath2Utils::concatStrings(X("No namespace for prefix \'"), prefix, X("\' [err:XPST0008]"), getMemoryManager());
		XQThrow(NamespaceLookupException, X("XQDynamicContextImpl::getUriBoundToPrefix"), msg);
	}

	return uri;
}

const XMLCh* XQDynamicContextImpl::getPrefixBoundToUri(const XMLCh* uri) const
{
  return _nsResolver->lookupPrefix(uri);
}

void XQDynamicContextImpl::setXMLEntityResolver(XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* const handler)
{
  _docCache->setXMLEntityResolver(handler);
}

void XQDynamicContextImpl::setDefaultCollation(const XMLCh* URI)
{
  _defaultCollation=getMemoryManager()->getPooledString(URI);
}

Collation* XQDynamicContextImpl::getDefaultCollation() const
{
  if(_defaultCollation == 0) {
    return _staticContext->getDefaultCollation();
  }
  else {
    return getCollation(_defaultCollation);
  }
}
