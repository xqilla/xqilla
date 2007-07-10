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

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLUri.hpp>

#include <xqilla/context/impl/XQContextImpl.hpp>
#include <xqilla/context/impl/XQDynamicContextImpl.hpp>

#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/context/VariableStore.hpp>
#include <xqilla/context/VariableTypeStore.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/context/ModuleResolver.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/ContextUtils.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/TypeNotFoundException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>
#include <xqilla/items/Timezone.hpp>
#include <xqilla/items/DatatypeLookup.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/functions/FunctionLookup.hpp>
#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>
#include <xqilla/simple-api/XQillaConfiguration.hpp>

XERCES_CPP_NAMESPACE_USE;

const XMLCh XMLChXS[]    = { chLatin_x, chLatin_s, chNull };
const XMLCh XMLChXSI[]   = { chLatin_x, chLatin_s, chLatin_i, chNull };
const XMLCh XMLChFN[]    = { chLatin_f, chLatin_n, chNull };
const XMLCh XMLChXDT[]   = { chLatin_x, chLatin_d, chLatin_t, chNull };
const XMLCh XMLChLOCAL[] = { chLatin_l, chLatin_o, chLatin_c, chLatin_a, chLatin_l, chNull };

static CodepointCollation g_codepointCollation;

XQContextImpl::XQContextImpl(XQillaConfiguration *conf, XQilla::Language language, MemoryManager* memMgr)
  : _conf(conf),
    _language(language),
    _createdWith(memMgr),
    _internalMM(memMgr),
    _varTypeStore(0),
    _functionTable(0),
    _collations(XQillaAllocator<Collation*>(&_internalMM)),
    _constructionMode(CONSTRUCTION_MODE_PRESERVE),
    _bPreserveBoundarySpace(false),
    _revalidationMode(DocumentCache::VALIDATION_STRICT),
    _messageListener(0),
    _varStore(&_defaultVarStore),
    _globalVarStore(&_defaultVarStore),
    _defaultVarStore(&_internalMM),
    _resolvers(XQillaAllocator<ResolverEntry>(&_internalMM)),
    _moduleResolver(0),
    _tmpVarCounter(0)
{
  _memMgr = &_internalMM;

  ////////////////////
  // static context //
  ////////////////////
  _contextItemType.flags = StaticType::ITEM_TYPE;
  _xpath1Compatibility = false;    // according to Formal Semantics, § 4.1.1
  _ordering = ORDERING_ORDERED;

  _globalNSResolver = new (&_internalMM) XQillaNSResolverImpl(&_internalMM);
  _nsResolver = _globalNSResolver;

  _defaultElementNS = 0;
  // by default, the default namespace for functions is the XPath2 namespace
  _functionNS = XQFunction::XMLChFunctionURI;

	// This is created with the _createdWith memory manager,
	// since a bug in xerces means we can't use a non-thread-safe
	// memory manager - jpcs
  _docCache = conf->createDocumentCache(_createdWith);

  if(_varTypeStore==NULL)
    _varTypeStore=_internalMM.createVariableTypeStore();

  if ((language & XQilla::UPDATE) != 0) {
    _functionTable = new (&_internalMM) FunctionLookup(&_internalMM);
    _functionTable->insertUpdateFunctions(&_internalMM);
  }

  _itemFactory = conf->createItemFactory(_docCache, &_internalMM);

  // insert the default collation
  addCollation(_internalMM.createCollation(&g_codepointCollation));
  setDefaultCollation(g_codepointCollation.getCollationName());

  _flworOrderingMode = FLWOR_ORDER_EMPTY_LEAST; // implementation-defined

  _bInheritNamespaces = true;
  _bPreserveNamespaces = true;

  _baseURI=0;

  ////////////////////////
  // Evaluation context //
  ////////////////////////

  _contextItem = NULL;

  _contextPosition = 1;
  _contextSize = 1;
  time(&_currentTime);

  // implicit timezone - lazily set in getImplicitTimezone
  _implicitTimezone = 0;

  // Set up the default URIResolver
  _defaultResolver.resolver = conf->createDefaultURIResolver(&_internalMM);
  if(_defaultResolver.resolver != 0) {
    _defaultResolver.adopt = true;
  }

  // XQuery defines these predefined namespace bindings
  setNamespaceBinding(XMLChXS, SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
  setNamespaceBinding(XMLChXSI, SchemaSymbols::fgURI_XSI);
  setNamespaceBinding(XMLChFN, XQFunction::XMLChFunctionURI);
  setNamespaceBinding(XMLChXDT, FunctionConstructor::XMLChXPath2DatatypesURI);
  setNamespaceBinding(XMLChLOCAL, XQUserFunction::XMLChXQueryLocalFunctionsURI);
}

XQContextImpl::~XQContextImpl()
{
  _varTypeStore->clear();
  _contextItem = 0;
  _implicitTimezone = 0;

  delete _varTypeStore;
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

DynamicContext *XQContextImpl::createModuleContext(MemoryManager *memMgr) const
{
  DynamicContext* moduleCtx = new (memMgr) XQContextImpl(_conf, _language, memMgr);

  // Force the context to use our memory manager
  moduleCtx->setMemoryManager(getMemoryManager());

  // Set the ModuleResolver
  moduleCtx->setModuleResolver(_moduleResolver);

  // Set the MessageListener
  moduleCtx->setMessageListener(_messageListener);

  // Add our collations
  for(std::vector<Collation*, XQillaAllocator<Collation*> >::const_iterator it= _collations.begin(); it!=_collations.end(); ++it)
    moduleCtx->addCollation(*it);

  _conf->populateStaticContext(moduleCtx);
  return moduleCtx;
}

DynamicContext *XQContextImpl::createModuleDynamicContext(const DynamicContext* moduleCtx, MemoryManager *memMgr) const
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

DynamicContext *XQContextImpl::createDynamicContext(MemoryManager *memMgr) const
{
  DynamicContext *result = new (memMgr) XQDynamicContextImpl(_conf, this, memMgr);
  _conf->populateDynamicContext(result);
  return result;
}

XQilla::Language XQContextImpl::getLanguage() const
{
  return _language;
}

void XQContextImpl::setMemoryManager(XPath2MemoryManager* memMgr)
{
  _memMgr = memMgr;
}

void XQContextImpl::setNamespaceBinding(const XMLCh* prefix, const XMLCh* uri)
{
    if(XPath2Utils::equals(prefix,XMLUni::fgXMLNSString) || 
       XPath2Utils::equals(prefix,XMLUni::fgXMLString))
      XQThrow2(StaticErrorException,X("XQContextImpl::setNamespaceBinding"),X("The prefixes 'xmlns' and 'xml' cannot be used in a namespace declaration [err:XQST0070]"));
    if(XPath2Utils::equals(uri,XMLUni::fgXMLURIName))
      XQThrow2(StaticErrorException,X("XQContextImpl::setNamespaceBinding"),X("The 'http://www.w3.org/XML/1998/namespace' namespace cannot be bound to any prefix [err:XQST0070]"));

	((XQillaNSResolverImpl*)_nsResolver)->addNamespaceBinding(prefix,uri);
}

void XQContextImpl::setPreserveBoundarySpace(bool value)
{
	_bPreserveBoundarySpace=value;
}

bool XQContextImpl::getPreserveBoundarySpace() const
{
	return _bPreserveBoundarySpace;
}

void XQContextImpl::setInheritNamespaces(bool value)
{
    _bInheritNamespaces=value;
}

bool XQContextImpl::getInheritNamespaces() const
{
    return _bInheritNamespaces;
}

void XQContextImpl::setPreserveNamespaces(bool value)
{
    _bPreserveNamespaces=value;
}

bool XQContextImpl::getPreserveNamespaces() const
{
    return _bPreserveNamespaces;
}

void XQContextImpl::clearDynamicContext()
{
  _nsResolver = _globalNSResolver;
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

  _moduleResolver = 0;
  time(&_currentTime);
}

const StaticType &XQContextImpl::getContextItemType() const
{
  return _contextItemType;
}

void XQContextImpl::setContextItemType(const StaticType &st)
{
  _contextItemType = st;
}

bool XQContextImpl::getXPath1CompatibilityMode() const
{
  return _xpath1Compatibility;
}

void XQContextImpl::setXPath1CompatibilityMode(bool newMode)
{
  _xpath1Compatibility=newMode;
}

const XMLCh* XQContextImpl::getDefaultFuncNS() const
{
  return _functionNS;
}

void XQContextImpl::setDefaultFuncNS(const XMLCh* newNS)
{
  _functionNS=newNS;
}

const XMLCh* XQContextImpl::getBaseURI() const
{
  return _baseURI;
}

void XQContextImpl::setBaseURI(const XMLCh* newURI)
{
	_baseURI = _internalMM.getPooledString(newURI);
}

StaticContext::ConstructionMode XQContextImpl::getConstructionMode() const
{
    return _constructionMode;
}

void XQContextImpl::setConstructionMode(ConstructionMode newMode)
{
    _constructionMode=newMode;
}

StaticContext::NodeSetOrdering XQContextImpl::getNodeSetOrdering() const
{
    return _ordering;
}

void XQContextImpl::setNodeSetOrdering(NodeSetOrdering newOrder)
{
    _ordering=newOrder;
}

StaticContext::FLWOROrderingMode XQContextImpl::getDefaultFLWOROrderingMode() const
{
    return _flworOrderingMode;
}

void XQContextImpl::setDefaultFLWOROrderingMode(StaticContext::FLWOROrderingMode newMode)
{
    _flworOrderingMode=newMode;
}

time_t XQContextImpl::getCurrentTime() const
{
  return _currentTime;
}

void XQContextImpl::setCurrentTime(time_t newTime)
{
  _currentTime=newTime;
}

ATDurationOrDerived::Ptr XQContextImpl::getImplicitTimezone() const {
	if(_implicitTimezone == NULLRCP) {
		// validate tzone
		Timezone tzone(ContextUtils::getTimezone());
    // c-style the const away since we are in a const method
    ((XQContextImpl*)this)->_implicitTimezone = tzone.asDayTimeDuration(this);
	}

	return _implicitTimezone;
}

void XQContextImpl::setImplicitTimezone(const ATDurationOrDerived::Ptr &timezoneAsDuration) {
  // validate the timezone -- will trow if invalid
  Timezone timezone(timezoneAsDuration, this);
  this->_implicitTimezone = timezoneAsDuration;
}

void XQContextImpl::setNSResolver(const DOMXPathNSResolver* resolver) {
  _nsResolver = resolver;
}

const DOMXPathNSResolver* XQContextImpl::getNSResolver() const {
  return _nsResolver;
}

const XMLCh* XQContextImpl::getUriBoundToPrefix(const XMLCh* prefix, const LocationInfo *location) const
{
  const XMLCh* uri = _nsResolver->lookupNamespaceURI(prefix);

	if(XMLString::stringLen(uri) == 0 && XMLString::stringLen(prefix) > 0){
		const XMLCh* msg = XPath2Utils::concatStrings(X("No namespace for prefix \'"), prefix, X("\' [err:XPST0081]"), getMemoryManager());
		XQThrow3(NamespaceLookupException, X("XQContextImpl::getUriBoundToPrefix"), msg, location);
	}

	return uri;
}

const XMLCh* XQContextImpl::getPrefixBoundToUri(const XMLCh* uri) const
{
  return _nsResolver->lookupPrefix(uri);
}

void XQContextImpl::setContextItem(const Item::Ptr &item)
{
  _contextItem = item;
}

void XQContextImpl::addCustomFunction(FuncFactory *func)
{
  if(_functionTable==NULL)
    _functionTable = new (&_internalMM) FunctionLookup(&_internalMM);
  _functionTable->insertFunction(func);
}

void XQContextImpl::setContextSize(unsigned int size)
{
  _contextSize = size;
}

void XQContextImpl::setContextPosition(unsigned int pos)
{
  _contextPosition = pos;
}

Item::Ptr XQContextImpl::getContextItem() const
{
  return _contextItem;
}

const VariableStore* XQContextImpl::getVariableStore() const
{
  return _varStore;
}

void XQContextImpl::setVariableStore(const VariableStore *store)
{
  assert(store);
  _varStore = store;
}

const VariableStore* XQContextImpl::getGlobalVariableStore() const
{
  return _globalVarStore;
}

void XQContextImpl::setGlobalVariableStore(const VariableStore *store)
{
  _globalVarStore = store;
}

void XQContextImpl::setExternalVariable(const XMLCh *namespaceURI, const XMLCh *name, const Sequence &value)
{
  _defaultVarStore.setVar(namespaceURI, name, value);
}

void XQContextImpl::setExternalVariable(const XMLCh *qname, const Sequence &value)
{
  const XMLCh *uri = getUriBoundToPrefix(XPath2NSUtils::getPrefix(qname, getMemoryManager()), 0);
  const XMLCh *name = XPath2NSUtils::getLocalName(qname);

  _defaultVarStore.setVar(uri, name, value);
}

VariableTypeStore* XQContextImpl::getVariableTypeStore()
{
  return _varTypeStore;
}

unsigned int XQContextImpl::getContextSize() const
{
  return _contextSize;
}

unsigned int XQContextImpl::getContextPosition() const
{
  return _contextPosition;
}

XPath2MemoryManager* XQContextImpl::getMemoryManager() const
{
  return _memMgr;
}

const XMLCh* XQContextImpl::getDefaultElementAndTypeNS() const
{
  return _defaultElementNS;
}

void XQContextImpl::setDefaultElementAndTypeNS(const XMLCh* newNS) {
  _defaultElementNS = newNS;
}

void XQContextImpl::addCollation(Collation* collation)
{
  _collations.push_back(collation);
}

void XQContextImpl::setDefaultCollation(const XMLCh* URI)
{
  _defaultCollation=getMemoryManager()->getPooledString(URI);
}

Collation* XQContextImpl::getCollation(const XMLCh* URI, const LocationInfo *location) const
{
  if(!XMLUri::isValidURI(false, URI))
  {
    const XMLCh* baseURI=getBaseURI();
    if(baseURI && *baseURI)
    {
      try
      {
        XMLUri base(baseURI, getMemoryManager());
        XMLUri full(&base, URI, getMemoryManager());
        URI = getMemoryManager()->getPooledString(full.getUriText());
      }
      catch(XMLException &e)
      {
        //if can't build, assume it's because there was an invalid base URI, so use the original URI
      }
    }
  }
  for(std::vector<Collation*, XQillaAllocator<Collation*> >::const_iterator it= _collations.begin(); it!=_collations.end(); ++it)
    if(XPath2Utils::equals((*it)->getCollationName(), URI))
      return (*it);
  const XMLCh* msg = XPath2Utils::concatStrings(X("The requested collation ('"), URI, X("') is not defined [err:FOCH0002]"), getMemoryManager());

  XQThrow3(ContextException, X("XQContextImpl::getCollation"), msg, location);
  return NULL;
}

Collation* XQContextImpl::getDefaultCollation(const LocationInfo *location) const
{
  return getCollation(_defaultCollation, location);
}

ASTNode *XQContextImpl::lookUpFunction(const XMLCh *uri, const XMLCh* name, const VectorOfASTNodes &v) const
{
  ASTNode* functionImpl = FunctionLookup::lookUpGlobalFunction(uri, name, v, getMemoryManager(), _functionTable);

  if(functionImpl == NULL && v.size() == 1) {
    // maybe it's not a function, but a datatype
    try {
      bool isPrimitive;
      _itemFactory->getPrimitiveTypeIndex(uri, name, isPrimitive);
      functionImpl = new (getMemoryManager())
        FunctionConstructor(uri, name, v, getMemoryManager());
    }
    catch(TypeNotFoundException&) {
      // ignore this exception: it means the type has not been found
    }
  }
  return functionImpl;
}

void XQContextImpl::addExternalFunction(const ExternalFunction *func)
{
  if(_functionTable==NULL)
    _functionTable = new (&_internalMM) FunctionLookup(&_internalMM);
  _functionTable->insertExternalFunction(func);
}

const ExternalFunction *XQContextImpl::lookUpExternalFunction(const XMLCh *uri, const XMLCh *name,
                                                                   unsigned int numArgs) const
{
  return FunctionLookup::lookUpGlobalExternalFunction(uri, name, numArgs, _functionTable);
}

void XQContextImpl::setXMLEntityResolver(XMLEntityResolver* const handler)
{
  _docCache->setXMLEntityResolver(handler);
}

XMLEntityResolver* XQContextImpl::getXMLEntityResolver() const
{
  return _docCache->getXMLEntityResolver();
}

void XQContextImpl::registerURIResolver(URIResolver *resolver, bool adopt)
{
  if(resolver != 0) {
    _resolvers.push_back(ResolverEntry(resolver, adopt));
  }
}

URIResolver *XQContextImpl::getDefaultURIResolver() const
{
  return _defaultResolver.resolver;
}

void XQContextImpl::setDefaultURIResolver(URIResolver *resolver, bool adopt)
{
  if(_defaultResolver.adopt) {
    delete _defaultResolver.resolver;
  }
  _defaultResolver.resolver = resolver;
  _defaultResolver.adopt = adopt;
}

Sequence XQContextImpl::resolveDocument(const XMLCh* uri, const LocationInfo *location)
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

Sequence XQContextImpl::resolveCollection(const XMLCh* uri, const LocationInfo *location)
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

Sequence XQContextImpl::resolveDefaultCollection()
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

void XQContextImpl::setModuleResolver(ModuleResolver *resolver)
{
  _moduleResolver=resolver;
}

ModuleResolver * XQContextImpl::getModuleResolver() const
{
  return _moduleResolver;
}

VectorOfStrings* XQContextImpl::resolveModuleURI(const XMLCh* uri) const
{
  VectorOfStrings* vect=new (getMemoryManager()) VectorOfStrings(XQillaAllocator<const XMLCh*>(getMemoryManager()));
  if(_moduleResolver)
    _moduleResolver->resolveModuleLocation(vect, uri, this);
  return vect;
}

/*
 * returns true if the type represented by uri:typename is an instance of uriToCheck:typeNameToCheck
 *
 * ie: to check
 * xs:integer instance of xs:decimal,
 * call
 * isTypeOrDerivedFromType("xs", "integer", "xs", "decimal")
 * (except of course, call with URIs, not prefixes!)
 */
bool XQContextImpl::isTypeOrDerivedFromType(const XMLCh* uri, const XMLCh* typeName, const XMLCh* uriToCheck, const XMLCh* typeNameToCheck) const
{
  return _docCache->isTypeOrDerivedFromType(uri,typeName,uriToCheck,typeNameToCheck);
}

void XQContextImpl::addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, const LocationInfo *location)
{
  _docCache->addSchemaLocation(uri, locations, this, location);
}

const DocumentCache* XQContextImpl::getDocumentCache() const
{
  return _docCache;
}

void XQContextImpl::setDocumentCache(DocumentCache* docCache)
{
    _docCache = docCache;
}

Node::Ptr XQContextImpl::validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode)
{
  return _docCache->validate(node, valMode, this);
}

SequenceBuilder *XQContextImpl::createSequenceBuilder() const
{
  return _conf->createSequenceBuilder(this);
}

ItemFactory *XQContextImpl::getItemFactory() const
{
  return _itemFactory;
}

void XQContextImpl::setItemFactory(ItemFactory *factory)
{
  _itemFactory = factory;
}

UpdateFactory *XQContextImpl::createUpdateFactory() const
{
  return _conf->createUpdateFactory(const_cast<ProxyMemoryManager*>(&_internalMM));
}

void XQContextImpl::setRevalidationMode(DocumentCache::ValidationMode mode)
{
  _revalidationMode = mode;
}

DocumentCache::ValidationMode XQContextImpl::getRevalidationMode() const
{
  return _revalidationMode;
}

void XQContextImpl::setMessageListener(MessageListener *listener)
{
  _messageListener = listener;
}

MessageListener *XQContextImpl::getMessageListener() const
{
  return _messageListener;
}

void XQContextImpl::testInterrupt() const
{
  _conf->testInterrupt();
}

const XMLCh *XQContextImpl::allocateTempVarName()
{
  static XMLCh prefix[] = { '#', 't', 'm', 'p', 0 };

  XMLBuffer buf(20);
  buf.set(prefix);
  XPath2Utils::numToBuf(_tmpVarCounter, buf);

  ++_tmpVarCounter;
  return getMemoryManager()->getPooledString(buf.getRawBuffer());
}

