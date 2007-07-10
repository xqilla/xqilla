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

#ifndef _DYNAMICCONTEXT_HPP
#define _DYNAMICCONTEXT_HPP

#include <xqilla/context/StaticContext.hpp>
#include <xqilla/items/ATDurationOrDerived.hpp>

class Sequence;
class Item;
class URIResolver;
class VariableStore;
class SequenceBuilder;
class UpdateFactory;

/// The execution time dynamic context interface
class XQILLA_API DynamicContext : public StaticContext
{
public:
  virtual ~DynamicContext() {};

  virtual DynamicContext *createModuleDynamicContext(const DynamicContext* moduleCtx, XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr =
                                                     XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager) const = 0;

  /** Resets the dynamic context, as if it had never been used */
  virtual void clearDynamicContext() = 0;

  /** Get the context Item */
  virtual Item::Ptr getContextItem() const = 0;
  /** Set the context item to item */
  virtual void setContextItem(const Item::Ptr &item) = 0;

  /** Get the context position */
  virtual unsigned int getContextPosition() const = 0;
  /** Set the context position */ 
  virtual void setContextPosition(unsigned int pos) = 0;

  /** Get the context size */
  virtual unsigned int getContextSize() const = 0;
  /** Set the context size */
  virtual void setContextSize(unsigned int size) = 0;
  
  /** get the variable store */
  virtual const VariableStore* getVariableStore() const = 0;
  /** set the variable store */
  virtual void setVariableStore(const VariableStore *store) = 0;
  /** get the variable store for globally scoped variables */
  virtual const VariableStore* getGlobalVariableStore() const = 0;
  /** set the variable store for globally scoped variables */
  virtual void setGlobalVariableStore(const VariableStore *store) = 0;
  /** set the value of an external global variable with the given uri/localname pair */
  virtual void setExternalVariable(const XMLCh *namespaceURI, const XMLCh *name, const Sequence &value) = 0;
  /** set the value of an external global variable with the given QName */
  virtual void setExternalVariable(const XMLCh *qname, const Sequence &value) = 0;

  /** Return the current time */
  virtual time_t getCurrentTime() const = 0;
  /** Set the current time */
  virtual void setCurrentTime(time_t newTime) = 0;

  /** Return the implicit timezone for this system.*/
  virtual ATDurationOrDerived::Ptr getImplicitTimezone() const = 0;
  /** Set the implicit timezone */
  virtual void setImplicitTimezone(const ATDurationOrDerived::Ptr &timezoneAsDuration) = 0;

  /**
     Register a callback object for resolving URIs. Multiple URIResolver
     objects can be registered with the DynamicContext at the same time.
     The most recently added URIResolver will be called first, and if it
     returns NULL, subsequent ones will be called - ending in a call to
     the fallback routines.

     If "adopt" is false, the DynamicContext will not
     adopt this object, making the user responsible for making sure that the
     URIResolver object's lifespan matches or exceeds the life of the
     DynamicContext.
  */
  virtual void registerURIResolver(URIResolver *resolver, bool adopt) = 0;
  /** Returns the default URIResolver */
  virtual URIResolver *getDefaultURIResolver() const = 0;
  /** Sets the default URIResolver */
  virtual void setDefaultURIResolver(URIResolver *resolver, bool adopt) = 0;

  /* Resolve the given uri (and baseUri) to a DOMDocument. If the uri
     is relative, the base uri is obtained from the context. */
  virtual Sequence resolveDocument(const XMLCh* uri, const LocationInfo *location) = 0;
  /* Resolve the given uri (and baseUri) to a ist of DOMNode objects. If the uri
     is relative, the base uri is obtained from the context. */
  virtual Sequence resolveCollection(const XMLCh* uri, const LocationInfo *location) = 0;
  virtual Sequence resolveDefaultCollection() = 0;
  /** returns the validated node */
  virtual Node::Ptr validate(const Node::Ptr &node, DocumentCache::ValidationMode valMode) = 0;

  /** Create a new SequenceBuilder, which is used to turn a
      stream of events into a Sequence. */
  virtual SequenceBuilder *createSequenceBuilder() const = 0;

  /** Creates a new UpdateFactory, used for performing updates.
      Caller owns the returned object, and should delete it */
  virtual UpdateFactory *createUpdateFactory() const = 0;

  /** Test if the query should be interrupted, and throw if so. */
  virtual void testInterrupt() const = 0;
};

#endif
