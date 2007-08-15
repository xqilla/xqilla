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

#include <xqilla/context/impl/XQDynamicContextImpl.hpp>

#include <xqilla/context/VariableStore.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/items/DatatypeLookup.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/utils/ContextUtils.hpp>
#include <xqilla/simple-api/XQillaConfiguration.hpp>

XERCES_CPP_NAMESPACE_USE;

XQDynamicContextImpl::XQDynamicContextImpl(XQillaConfiguration *conf, const StaticContext *staticContext, MemoryManager* memMgr)
  : _conf(conf),
    _staticContext(staticContext),
    _createdWith(memMgr),
    _internalMM(memMgr),
    _nsResolver(staticContext->getNSResolver()),
    _defaultCollation(0),
    _defaultElementNS(staticContext->getDefaultElementAndTypeNS()),
    _contextItem(0),
    _contextPosition(1),
    _contextSize(1),
    _varStore(&_defaultVarStore),
    _globalVarStore(&_defaultVarStore),
    _defaultVarStore(&_internalMM),
    _implicitTimezone(0),
    _documentMap(3, &_internalMM),
    _resolvers(XQillaAllocator<ResolverEntry>(&_internalMM)),
    // This is created with the _createdWith memory manager,
    // since a bug in xerces means we can't use a non-thread-safe
    // memory manager - jpcs
    _docCache(staticContext->getDocumentCache()->createDerivedCache(_createdWith)),
    _messageListener(staticContext->getMessageListener())
{
  time(&_currentTime);
  _memMgr = &_internalMM;
  _itemFactory = _conf->createItemFactory(_docCache, &_internalMM);

  setXMLEntityResolver(staticContext->getXMLEntityResolver());

  // Set up the default URIResolver
  _defaultResolver.resolver = _conf->createDefaultURIResolver(&_internalMM);
  if(_defaultResolver.resolver != 0) {
	  _defaultResolver.adopt = true;
  }
}

XQDynamicContextImpl::~XQDynamicContextImpl()
{
  _contextItem = 0;
  _implicitTimezone = 0;
  _defaultVarStore.clear();

  delete _itemFactory;
  delete _docCache;

  std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if(i->adopt) {
      delete i->resolver;
    }
  }
  if(_defaultResolver.adopt)
    delete _defaultResolver.resolver;
}

DynamicContext *XQDynamicContextImpl::createModuleContext(MemoryManager *memMgr) const
{
  return _staticContext->createModuleContext(memMgr);
}

DynamicContext *XQDynamicContextImpl::createModuleDynamicContext(const DynamicContext* moduleCtx, MemoryManager *memMgr) const
{
  DynamicContext* moduleDCtx = new (memMgr) XQDynamicContextImpl(_conf, moduleCtx, memMgr);

  // Force the context to use our memory manager
  moduleDCtx->setMemoryManager(getMemoryManager());

  // Add our URIResolvers to the module context
  moduleDCtx->setDefaultURIResolver(_defaultResolver.resolver, /*adopt*/false);
  std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::const_iterator end = _resolvers.end();
  for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::const_iterator i = _resolvers.begin(); i != end; ++i) {
    moduleDCtx->registerURIResolver(i->resolver, /*adopt*/false);
  }

  // Set the XMLEntityResolver
  moduleDCtx->setXMLEntityResolver(_docCache->getXMLEntityResolver());

  // Set the MessageListener
  moduleDCtx->setMessageListener(_messageListener);

  _conf->populateDynamicContext(moduleDCtx);
  return moduleDCtx;
}

DynamicContext *XQDynamicContextImpl::createDynamicContext(MemoryManager *memMgr) const
{
  return _staticContext->createDynamicContext(memMgr);
}

XQillaConfiguration *XQDynamicContextImpl::getConfiguration() const
{
  return _conf;
}

void XQDynamicContextImpl::setMemoryManager(XPath2MemoryManager* memMgr)
{
  _memMgr = memMgr;
}

void XQDynamicContextImpl::clearDynamicContext()
{
  _nsResolver = _staticContext->getNSResolver();
  _contextItem = 0;
  _contextSize = 1;
  _contextPosition = 1;
  _implicitTimezone = 0;

  _defaultVarStore.clear();
  _varStore = &_defaultVarStore;
  _globalVarStore = &_defaultVarStore;

  if(_defaultResolver.adopt)
    delete _defaultResolver.resolver;
  _defaultResolver.adopt = false;
  _defaultResolver.resolver = 0;

  std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if(i->adopt) {
      delete i->resolver;
    }
  }
  _resolvers.clear();
  registerURIResolver(_conf->createDefaultURIResolver(&_internalMM), /*adopt*/true);

  _documentMap.removeAll();
  time(&_currentTime);
}

const DocumentCache *XQDynamicContextImpl::getDocumentCache() const
{
  return _docCache;
}

void XQDynamicContextImpl::setDocumentCache(DocumentCache* docCache)
{
  _docCache=docCache;
}

void XQDynamicContextImpl::setContextItem(const Item::Ptr &item)
{
  _contextItem = item;
}

void XQDynamicContextImpl::setContextSize(unsigned int size)
{
  _contextSize = size;
}

void XQDynamicContextImpl::setContextPosition(unsigned int pos)
{
  _contextPosition = pos;
}

Item::Ptr XQDynamicContextImpl::getContextItem() const
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

const VariableStore* XQDynamicContextImpl::getVariableStore() const
{
  return _varStore;
}

void XQDynamicContextImpl::setVariableStore(const VariableStore *store)
{
  assert(store);
  _varStore = store;
}

const VariableStore* XQDynamicContextImpl::getGlobalVariableStore() const
{
  return _globalVarStore;
}

void XQDynamicContextImpl::setGlobalVariableStore(const VariableStore *store)
{
  _globalVarStore = store;
}

void XQDynamicContextImpl::setExternalVariable(const XMLCh *namespaceURI, const XMLCh *name, const Sequence &value)
{
  _defaultVarStore.setVar(namespaceURI, name, value);
}

void XQDynamicContextImpl::setExternalVariable(const XMLCh *qname, const Sequence &value)
{
  const XMLCh *uri = getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname, getMemoryManager()), 0);
  const XMLCh *name = XPath2NSUtils::getLocalName(qname);

  _defaultVarStore.setVar(uri, name, value);
}

time_t XQDynamicContextImpl::getCurrentTime() const
{
  return _currentTime;
}

void XQDynamicContextImpl::setCurrentTime(time_t newTime)
{
  _currentTime=newTime;
}

ATDurationOrDerived::Ptr XQDynamicContextImpl::getImplicitTimezone() const {
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

void XQDynamicContextImpl::registerURIResolver(URIResolver *resolver, bool adopt)
{
  if(resolver != 0) {
    _resolvers.push_back(ResolverEntry(resolver, adopt));
  }
}

URIResolver *XQDynamicContextImpl::getDefaultURIResolver() const
{
  return _defaultResolver.resolver;
}

void XQDynamicContextImpl::setDefaultURIResolver(URIResolver *resolver, bool adopt)
{
  if(_defaultResolver.adopt) {
    delete _defaultResolver.resolver;
  }
  _defaultResolver.resolver = resolver;
  _defaultResolver.adopt = adopt;
}

Sequence XQDynamicContextImpl::resolveDocument(const XMLCh* uri, const LocationInfo *location)
{
  Sequence result(getMemoryManager());

  // Check the URIResolver objects
  try {
    std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator end = _resolvers.rend();
    for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
      if(i->resolver->resolveDocument(result, uri, this))
        return result;
    }
    if(_defaultResolver.resolver)
      _defaultResolver.resolver->resolveDocument(result, uri, this);
  }
  catch(XQException &e) {
    if(e.getXQueryLine() == 0 && location)
      e.setXQueryPosition(location);
    throw;
  }

  return result;
}

Sequence XQDynamicContextImpl::resolveCollection(const XMLCh* uri, const LocationInfo *location)
{
  Sequence result(getMemoryManager());

  // Check the URIResolver objects
  try {
    std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator end = _resolvers.rend();
    for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
      if(i->resolver->resolveCollection(result, uri, this))
        return result;
    }
    if(_defaultResolver.resolver)
      _defaultResolver.resolver->resolveCollection(result, uri, this);
  }
  catch(XQException &e) {
    if(e.getXQueryLine() == 0 && location)
      e.setXQueryPosition(location);
    throw;
  }

  return result;
}

Sequence XQDynamicContextImpl::resolveDefaultCollection()
{
  Sequence result(getMemoryManager());
  std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator end = _resolvers.rend();
  for(std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> >::reverse_iterator i = _resolvers.rbegin(); i != end; ++i) {
    if(i->resolver->resolveDefaultCollection(result, this))
      return result;
  }
  if(_defaultResolver.resolver)
    _defaultResolver.resolver->resolveDefaultCollection(result, this);
  return result;
}

VectorOfStrings* XQDynamicContextImpl::resolveModuleURI(const XMLCh* uri) const
{
  return _staticContext->resolveModuleURI(uri);
}

Node::Ptr XQDynamicContextImpl::validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode)
{
  return _docCache->validate(node, valMode, this);
}

SequenceBuilder *XQDynamicContextImpl::createSequenceBuilder() const
{
  return _conf->createSequenceBuilder(this);
}

ItemFactory *XQDynamicContextImpl::getItemFactory() const
{
  return _itemFactory;
}

void XQDynamicContextImpl::setItemFactory(ItemFactory *factory)
{
  _itemFactory = factory;
}

UpdateFactory *XQDynamicContextImpl::createUpdateFactory() const
{
  return _conf->createUpdateFactory(const_cast<ProxyMemoryManager*>(&_internalMM));
}

void XQDynamicContextImpl::setNamespaceBinding(const XMLCh* prefix, const XMLCh* uri)
{
	((XQillaNSResolverImpl*)_nsResolver)->addNamespaceBinding(prefix,uri);
}

void XQDynamicContextImpl::setNSResolver(const DOMXPathNSResolver* resolver) {
  _nsResolver = resolver;
}

const DOMXPathNSResolver* XQDynamicContextImpl::getNSResolver() const {
  return _nsResolver;
}

const XMLCh* XQDynamicContextImpl::getUriBoundToPrefix(const XMLCh* prefix, const LocationInfo *location) const
{
  const XMLCh* uri = _nsResolver->lookupNamespaceURI(prefix);

	if(XMLString::stringLen(uri) == 0 && XMLString::stringLen(prefix) > 0){
		const XMLCh* msg = XPath2Utils::concatStrings(X("No namespace for prefix \'"), prefix, X("\' [err:XPST0081]"), getMemoryManager());
		XQThrow3(NamespaceLookupException, X("XQDynamicContextImpl::getUriBoundToPrefix"), msg, location);
	}

	return uri;
}

const XMLCh* XQDynamicContextImpl::getPrefixBoundToUri(const XMLCh* uri) const
{
  return _nsResolver->lookupPrefix(uri);
}

void XQDynamicContextImpl::setXMLEntityResolver(XMLEntityResolver* const handler)
{
  _docCache->setXMLEntityResolver(handler);
}

XMLEntityResolver* XQDynamicContextImpl::getXMLEntityResolver() const
{
  return _docCache->getXMLEntityResolver();
}

void XQDynamicContextImpl::setDefaultCollation(const XMLCh* URI)
{
  _defaultCollation=getMemoryManager()->getPooledString(URI);
}

Collation* XQDynamicContextImpl::getDefaultCollation(const LocationInfo *location) const
{
  if(_defaultCollation == 0) {
    return _staticContext->getDefaultCollation(location);
  }
  else {
    return getCollation(_defaultCollation, location);
  }
}

void XQDynamicContextImpl::setMessageListener(MessageListener *listener)
{
  _messageListener = listener;
}

MessageListener *XQDynamicContextImpl::getMessageListener() const
{
  return _messageListener;
}

void XQDynamicContextImpl::testInterrupt() const
{
  _conf->testInterrupt();
}

