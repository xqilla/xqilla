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

#include "../config/xqilla_config.h"

#include <xqilla/fastxdm/FastXDMConfiguration.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include "../schema/FaxppDocumentCacheImpl.hpp"
#include "FastXDMSequenceBuilder.hpp"
#include "FastXDMUpdateFactory.hpp"

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/context/impl/ItemFactoryImpl.hpp>

#include <xercesc/util/ValueHashTableOf.hpp>
#include <xercesc/util/NoSuchElementException.hpp>
#include <xercesc/util/XMLURL.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>

XERCES_CPP_NAMESPACE_USE;

DocumentCache *FastXDMConfiguration::createDocumentCache(MemoryManager *memMgr)
{
// #ifdef HAVE_FAXPP
//   return new (memMgr) FaxppDocumentCacheImpl(memMgr);
// #else
  return new (memMgr) DocumentCacheImpl(memMgr);
// #endif
}

SequenceBuilder *FastXDMConfiguration::createSequenceBuilder(const DynamicContext *context)
{
  return new (context->getMemoryManager()) FastXDMSequenceBuilder(context);
}

ItemFactory *FastXDMConfiguration::createItemFactory(DocumentCache *cache,
                                                     MemoryManager *memMgr)
{
  return new (memMgr) ItemFactoryImpl(cache, memMgr);
}

UpdateFactory *FastXDMConfiguration::createUpdateFactory(MemoryManager *memMgr)
{
  return new (memMgr) FastXDMUpdateFactory();
}

class XQILLA_API FastXDMURIResolver : public URIResolver {
public:
  FastXDMURIResolver(MemoryManager *mm) : _documentMap(3, mm) {}

  virtual bool resolveDocument(Sequence &result, const XMLCh* uri, DynamicContext* context, const QPNVector *projection)
  {
    Node::Ptr doc;

    // Resolve the uri against the base uri
    const XMLCh *systemId = uri;
    XMLURL urlTmp(context->getMemoryManager());
    if(urlTmp.setURL(context->getBaseURI(), uri, urlTmp)) {
      systemId = context->getMemoryManager()->getPooledString(urlTmp.getURLText());
    }

    // Check in the cache
    try {
      doc = _documentMap.get(systemId);
    }
    catch(NoSuchElementException &ex) {
    }

    // Check to see if we can locate and parse the document
    if(doc.isNull()) {
      try {
        doc = const_cast<DocumentCache*>(context->getDocumentCache())->loadDocument(uri, context, projection);
        _documentMap.put((void*)systemId, doc);
      }
      catch(const XMLParseException& e) {
        XMLBuffer errMsg;
        errMsg.set(X("Error parsing resource: "));
        errMsg.append(uri);
        errMsg.append(X(". Error message: "));
        errMsg.append(e.getError());
        errMsg.append(X(" [err:FODC0002]"));
        XQThrow2(XMLParseException,X("FastXDMContextImpl::resolveDocument"), errMsg.getRawBuffer());
      }
    }

    if(doc.notNull()) {
      result.addItem(doc);
      return true;
    }

    XMLBuffer errMsg;
    errMsg.set(X("Error retrieving resource: "));
    errMsg.append(uri);
    errMsg.append(X(" [err:FODC0002]"));
    XQThrow2(XMLParseException,X("FastXDMContextImpl::resolveDocument"), errMsg.getRawBuffer());

    return false;
  }

  virtual bool resolveCollection(Sequence &result, const XMLCh* uri, DynamicContext* context, const QPNVector *projection)
  {
    Node::Ptr doc;

    // Resolve the uri against the base uri
    const XMLCh *systemId = uri;
    XMLURL urlTmp(context->getMemoryManager());
    if(urlTmp.setURL(context->getBaseURI(), uri, urlTmp)) {
      systemId = context->getMemoryManager()->getPooledString(urlTmp.getURLText());
    }

    // Check in the cache
    try {
      doc = _documentMap.get(systemId);
    }
    catch(NoSuchElementException &ex) {
    }

    // Check to see if we can locate and parse the document
    if(doc.isNull()) {
      try {
        doc = const_cast<DocumentCache*>(context->getDocumentCache())->loadDocument(uri, context, projection);
        _documentMap.put((void*)systemId, doc);
      }
      catch(const XMLParseException& e) {
        XMLBuffer errMsg;
        errMsg.set(X("Error parsing resource: "));
        errMsg.append(uri);
        errMsg.append(X(". Error message: "));
        errMsg.append(e.getError());
        errMsg.append(X(" [err:FODC0004]"));
        XQThrow2(XMLParseException,X("FastXDMContextImpl::resolveCollection"), errMsg.getRawBuffer());
      }
    }

    if(doc.notNull()) {
      result.addItem(doc);
      return true;
    }

    XMLBuffer errMsg;
    errMsg.set(X("Error retrieving resource: "));
    errMsg.append(uri);
    errMsg.append(X(" [err:FODC0004]"));
    XQThrow2(XMLParseException,X("FastXDMContextImpl::resolveCollection"), errMsg.getRawBuffer());

    return false;
  }

  virtual bool resolveDefaultCollection(Sequence &result, DynamicContext* context, const QPNVector *projection)
  {
    return false;
  }

private:
  ValueHashTableOf<Node::Ptr> _documentMap;
};

URIResolver *FastXDMConfiguration::createDefaultURIResolver(MemoryManager *memMgr)
{
  return new (memMgr) FastXDMURIResolver(memMgr);
}

