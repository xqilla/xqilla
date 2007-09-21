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

#ifndef XQDYNAMICCONTEXTIMPL_H
#define XQDYNAMICCONTEXTIMPL_H

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/impl/VarStoreImpl.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/framework/ProxyMemoryManager.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xercesc/util/ValueHashTableOf.hpp>

class XQILLA_API XQDynamicContextImpl : public DynamicContext
{
public:
  XQDynamicContextImpl(XQillaConfiguration *conf, const StaticContext *staticContext,
                       XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr);
  ~XQDynamicContextImpl();

  virtual DynamicContext *createModuleContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                                              XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager) const;
  virtual DynamicContext *createModuleDynamicContext(const DynamicContext* moduleCtx, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                                                     XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager) const;
  virtual DynamicContext *createDynamicContext(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr
                                               = XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager) const;

  virtual XQillaConfiguration *getConfiguration() const;

  virtual XQilla::Language getLanguage() const;

  //////////////////////////////////////
  // XQuery Static Context Accessors  //
  //////////////////////////////////////

  /**
   * Overrides the inherited method, and disowns any output
   * document that was created with the previous memory manager.
   */
  virtual void setMemoryManager(XPath2MemoryManager *memMgr);

  /** Binds a prefix to a namespace URI */
  virtual void setNamespaceBinding(const XMLCh* prefix, const XMLCh* uri);

  /** Set the policy for boundary space */
  virtual void setPreserveBoundarySpace(bool value);
  /** Get the policy for boundary space */
  virtual bool getPreserveBoundarySpace() const;

  //////////////////////////////////////
  // XQuery Dynamic Context Accessors //
  //////////////////////////////////////

  virtual void testInterrupt() const;

  //////////////////////////////////
  // Dynamic Context Accessors    //
  //////////////////////////////////

  /** Resets the dynamic context, as if it had never been used */
  virtual void clearDynamicContext();

  virtual SequenceBuilder *createSequenceBuilder() const;

  /** Returns the ItemFactory for this context, which is used to create XQilla items and other objects. */
  virtual ItemFactory *getItemFactory() const;
  /** Sets the ItemFactory for this context */
  virtual void setItemFactory(ItemFactory *factory);

  /** Get the context Item */
  virtual Item::Ptr getContextItem() const;
  /** Set the context item to item */
  virtual void setContextItem(const Item::Ptr &item);

  /** Get the context position */
  virtual unsigned int getContextPosition() const;
  /** Set the context position */
  virtual void setContextPosition(unsigned int pos);

  /** Get the context size */
  virtual unsigned int getContextSize() const;
  /** Set the context size */
  virtual void setContextSize(unsigned int size);

  virtual const VariableStore* getVariableStore() const;
  virtual void setVariableStore(const VariableStore *store);
  virtual const VariableStore* getGlobalVariableStore() const;
  virtual void setGlobalVariableStore(const VariableStore *store);
  virtual void setExternalVariable(const XMLCh *namespaceURI, const XMLCh *name, const Sequence &value);
  virtual void setExternalVariable(const XMLCh *qname, const Sequence &value);

  /** Return the current time */
  virtual time_t getCurrentTime() const;
  /** Set the current time */
  virtual void setCurrentTime(time_t newTime);

  /** Return the implicit timezone for this system.*/
  virtual ATDurationOrDerived::Ptr getImplicitTimezone() const;
  /** Set the implicit timezone */
  virtual void setImplicitTimezone(const ATDurationOrDerived::Ptr &timezoneAsDuration);

  virtual void registerURIResolver(URIResolver *resolver, bool adopt);
  virtual URIResolver *getDefaultURIResolver() const;
  virtual void setDefaultURIResolver(URIResolver *resolver, bool adopt);

  virtual Node::Ptr parseDocument(XERCES_CPP_NAMESPACE_QUALIFIER InputSource &srcToUse,
                                  const LocationInfo *location);
  virtual Sequence resolveDocument(const XMLCh* uri, const LocationInfo *location);
  virtual Sequence resolveCollection(const XMLCh* uri, const LocationInfo *location);
  virtual Sequence resolveDefaultCollection();

  virtual UpdateFactory *createUpdateFactory() const;

  //////////////////////////////////
  // Static Context Accessors     //
  //////////////////////////////////

  /** Get the static type of the context item */
  virtual const StaticType &getContextItemType() const;
  /** Set the static type of the context item */
  virtual void setContextItemType(const StaticType &st);

  /** Get the current XPath 1.0 compatibility mode */
  virtual bool getXPath1CompatibilityMode() const;
  /** Set the current XPath 1.0 compatibility mode */
  virtual void setXPath1CompatibilityMode(bool newMode);

  /** Get the NS resolver */
  virtual const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* getNSResolver() const;
  /** returns the URI that is bound in prefix in the current scope or zero
      length string otherwise */
  virtual const XMLCh* getUriBoundToPrefix(const XMLCh* prefix, const LocationInfo *location) const;
  /** returns the prefix that is bound in uri in the current scope or zero
      length string otherwise */
  virtual const XMLCh* getPrefixBoundToUri(const XMLCh* uri) const;
  /** Set the NS resolver */
  virtual void setNSResolver(const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* resolver);

  /** get the value of the default namespace for elements and types */
  virtual const XMLCh* getDefaultElementAndTypeNS() const;
  /** set the value of the default namespace for elements and types */
  virtual void setDefaultElementAndTypeNS(const XMLCh* newNS);

  /** Return the default namespace for functions */
  virtual const XMLCh* getDefaultFuncNS() const;
  /** Set the default namespace for functions */
  virtual void setDefaultFuncNS(const XMLCh* newNS);

  /** retrieve the repository for the grammars **/
  virtual const DocumentCache* getDocumentCache() const;
  /** sets the repository for the grammars **/
  virtual void setDocumentCache(DocumentCache* docCache);
  /** returns true if the type represented by uri:typename is an instance of uriToCheck:typeNameToCheck
   *
   * ie: to check
   * xs:integer instance of xs:decimal,
   * call
   * isTypeOrDerivedFromType("xs", "integer", "xs", "decimal")
   * (except of course, call with URIs, not prefixes!)
   */
  virtual bool isTypeOrDerivedFromType(const XMLCh* const uri, const XMLCh* const typeName, const XMLCh* const uriToCheck, const XMLCh* const typeNameToCheck) const;
  /**
   * Sets the XMLEntityResolver that is used by Xerces when it is used
   * to parse documents. This affects the behaviour of XQilla whenever
   * it retrieves a DTD or XML Schema grammar.
   */
  virtual void setXMLEntityResolver(XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* const handler);
  /** Returns the entity resolver currently set */
  virtual XERCES_CPP_NAMESPACE_QUALIFIER XMLEntityResolver* getXMLEntityResolver() const;

  /** Register a callback object for resolving module URIs */
  virtual void setModuleResolver(ModuleResolver *resolver);
  /** Returns the module resolver currently set */
  virtual ModuleResolver *getModuleResolver() const;
  /* Retrieve a list of locations for the given module URI */
  virtual VectorOfStrings* resolveModuleURI(const XMLCh* uri) const;

  /** add the location for the grammar of a specific namespace **/
  virtual void addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, const LocationInfo *location);

  /** get the variable type store */
  virtual VariableTypeStore* getVariableTypeStore();

  /** adds a custom function to the function table */
  virtual void addCustomFunction(FuncFactory *func);
  /** returns a function object with the given uri, localname and number of arguments triple */
  virtual ASTNode *lookUpFunction(const XMLCh *uri, const XMLCh* name, const VectorOfASTNodes &v) const;

  /** adds an external function implementation to the function table */
  virtual void addExternalFunction(const ExternalFunction *func);
  /** returns an external function implementation for the given uri and localname */
  virtual const ExternalFunction *lookUpExternalFunction(const XMLCh *uri, const XMLCh *name, unsigned int numArgs) const;

  /** Get the implementation for the specified collation */
  virtual Collation* getCollation(const XMLCh* const URI, const LocationInfo *location) const;
  /** Add a collation */
  virtual void addCollation(Collation* collation);

  /** Get the default collation */
  virtual Collation* getDefaultCollation(const LocationInfo *location) const;
  /** Specify which collation is the default one */
  virtual void setDefaultCollation(const XMLCh* const URI);

  /** Return the construction mode */
  virtual ConstructionMode getConstructionMode() const;
  /** Set the construction mode */
  virtual void setConstructionMode(ConstructionMode newMode);

  /** Return the ordering method for node sets */
  virtual NodeSetOrdering getNodeSetOrdering() const;
  /** Set the ordering method for node sets */
  virtual void setNodeSetOrdering(NodeSetOrdering newOrder);

  /** Return the base URI */
  virtual const XMLCh* getBaseURI() const;
  /** Set the base URI */
  virtual void setBaseURI(const XMLCh* newURI);

  /** Return the default ordering mode for FLWOR blocks */
  virtual FLWOROrderingMode getDefaultFLWOROrderingMode() const;
  /** Set the default ordering mode for FLWOR blocks */
  virtual void setDefaultFLWOROrderingMode(FLWOROrderingMode newMode);

  /** Set the policy for namespace inheritance */
  virtual void setInheritNamespaces(bool value);
  /** Get the policy for namespace inheritance */
  virtual bool getInheritNamespaces() const;

  /** Set the policy for namespace copy */
  virtual void setPreserveNamespaces(bool value);
  /** Get the policy for namespace copy */
  virtual bool getPreserveNamespaces() const;

  /** Set the revalidation mode */
  virtual void setRevalidationMode(DocumentCache::ValidationMode mode);
  /** Get the revalidation mode */
  virtual DocumentCache::ValidationMode getRevalidationMode() const;

  /** Set the listener for warning and trace messages */
  virtual void setMessageListener(MessageListener *listener);
  /** Gets the listener for warning and trace messages */
  virtual MessageListener *getMessageListener() const;

  /////////////////////////////////////////
  //  XQilla context specific accessors  //
  /////////////////////////////////////////

  virtual const XMLCh *allocateTempVarName();

  /** Get the memory manager */
  virtual XPath2MemoryManager* getMemoryManager() const;

protected:
  XQillaConfiguration *_conf;

  const StaticContext *_staticContext;

  // The memory manager used to create this context
  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* _createdWith;

  // used for managing the memory of objects inside this context
  ProxyMemoryManager _internalMM;

  /** In-scope namespaces. This is a set of  (prefix, URI) pairs.
   * The in-scope namespaces are used for resolving prefixes used
   * in QNames within the expression
   * THIS OUGHT TO BE IN THE STATIC CONTEXT - jpcs */
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* _nsResolver;

  /** Default collation. This is a collation. This collation is used by
   * string comparison functions when no explicit collation is specified.
   * THIS OUGHT TO BE IN THE STATIC CONTEXT - jpcs */
  const XMLCh* _defaultCollation;

  /** Default element/type namespace. This is a namespace URI or "none". This
   * namespace is used for any unprefixed QName appearing in a
   * position where an element or type name is expected.
   * THIS OUGHT TO BE IN THE STATIC CONTEXT - jpcs */
  const XMLCh* _defaultElementNS;

  /** The context item is the item currently being processed. */
  Item::Ptr _contextItem;

  /** The context position is the position of  the context item within
   * the sequence of items currently being processed. */
  unsigned int _contextPosition;

  /** The context size is the number of items in the sequence of
   * items currently being processed. */
  unsigned int _contextSize;

  /** In-scope variable values. This is a set of  (QName, Sequence) pairs.
   * It defines the set of variables that have been declared and are
   * available for reference within the expression. The QName
   * represents the name of the variable, and the Sequence represents its
   * value */
  const VariableStore *_varStore;
  const VariableStore *_globalVarStore;
  VarStoreImpl _defaultVarStore;

  /** Current date and time. This information  represents an
   * implementation-dependent point in time during processing of a query
   * or transformation */
  time_t _currentTime;

  /** Implicit timezone. This is the timezone to be used when a date,
   * time, or dateTime value that does not have a timezone is used in a
   * comparison or in any other operation. This value is an instance of
   * xdt:dayTimeDuration */
  ATDurationOrDerived::Ptr _implicitTimezone;

  /** For each atomic type in the in-scope type  definitions, there is 
   * a constructor function in the in-scope functions. Constructor 
   * functions are discussed in 3.10.4 Constructor Functions */
  ItemFactory* _itemFactory;

  XERCES_CPP_NAMESPACE_QUALIFIER ValueHashTableOf<Node::Ptr> _documentMap;

  struct ResolverEntry {
    ResolverEntry() : resolver(0), adopt(false) {}
    ResolverEntry(URIResolver *r, bool a) : resolver(r), adopt(a) {}
    URIResolver *resolver;
    bool adopt;
  };

  /// A stack of URIResolver pointers
  std::vector<ResolverEntry, XQillaAllocator<ResolverEntry> > _resolvers;
  ResolverEntry _defaultResolver;

  /** Contains the XMLGrammarPool of the StaticContext, and is used to
   * load xml documents for resolveCollection and resolveDocument */
  DocumentCache* _docCache;

  /** The message listener, for warnings and trace messages */
  MessageListener *_messageListener;

  // used for memory management
  XPath2MemoryManager* _memMgr;
};


inline void XQDynamicContextImpl::setContextItemType(const StaticType &)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setXPath1CompatibilityMode(bool newMode)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setDefaultFuncNS(const XMLCh* newNS)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setBaseURI(const XMLCh* newURI)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::addCustomFunction(FuncFactory *func)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::addExternalFunction(const ExternalFunction *func)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::addCollation(Collation* collation)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::addSchemaLocation(const XMLCh* uri, VectorOfStrings* locations, const LocationInfo *location)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline VariableTypeStore* XQDynamicContextImpl::getVariableTypeStore()
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); return 0; }
inline void XQDynamicContextImpl::setConstructionMode(StaticContext::ConstructionMode newMode)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setPreserveBoundarySpace(bool value)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setDefaultFLWOROrderingMode(StaticContext::FLWOROrderingMode newMode)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setInheritNamespaces(bool value) 
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setPreserveNamespaces(bool value) 
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setNodeSetOrdering(NodeSetOrdering newOrder)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setModuleResolver(ModuleResolver *resolver)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline void XQDynamicContextImpl::setRevalidationMode(DocumentCache::ValidationMode mode)
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); }
inline const XMLCh *XQDynamicContextImpl::allocateTempVarName()
{ XQThrow2(ContextException,X("XQDynamicContextImpl"), X("You cannot change the static context when using a proxying dynamic context")); return 0; }


inline const StaticType &XQDynamicContextImpl::getContextItemType() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline const XMLCh* XQDynamicContextImpl::getDefaultFuncNS() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline StaticContext::NodeSetOrdering XQDynamicContextImpl::getNodeSetOrdering() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline ModuleResolver * XQDynamicContextImpl::getModuleResolver() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline ASTNode* XQDynamicContextImpl::lookUpFunction(const XMLCh* uri, const XMLCh* name, const VectorOfASTNodes& v) const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline const ExternalFunction *XQDynamicContextImpl::lookUpExternalFunction(const XMLCh *uri, const XMLCh *name, unsigned int numArgs) const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline StaticContext::FLWOROrderingMode XQDynamicContextImpl::getDefaultFLWOROrderingMode() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline bool XQDynamicContextImpl::getXPath1CompatibilityMode() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline bool XQDynamicContextImpl::getPreserveBoundarySpace() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }
inline DocumentCache::ValidationMode XQDynamicContextImpl::getRevalidationMode() const { XQThrow2(ContextException,X("XQDynamicContextImpl"), X("The static context is not available from a proxying dynamic context")); }


inline XQilla::Language XQDynamicContextImpl::getLanguage() const { return _staticContext->getLanguage(); }
inline const XMLCh* XQDynamicContextImpl::getBaseURI() const { return _staticContext->getBaseURI(); }
inline Collation* XQDynamicContextImpl::getCollation(const XMLCh* URI, const LocationInfo *location) const { return _staticContext->getCollation(URI, location); }
inline bool XQDynamicContextImpl::isTypeOrDerivedFromType(const XMLCh* uri, const XMLCh* typeName, const XMLCh* uriToCheck, const XMLCh* typeNameToCheck) const { return _staticContext->isTypeOrDerivedFromType(uri, typeName, uriToCheck, typeNameToCheck); }
inline bool XQDynamicContextImpl::getInheritNamespaces() const { return _staticContext->getInheritNamespaces(); }
inline bool XQDynamicContextImpl::getPreserveNamespaces() const { return _staticContext->getPreserveNamespaces(); }
inline StaticContext::ConstructionMode XQDynamicContextImpl::getConstructionMode() const { return _staticContext->getConstructionMode(); }

#endif
