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

#include "XercesURIResolver.hpp"
#include "XercesNodeImpl.hpp"

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/xerces/XercesConfiguration.hpp>

#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/util/XMLURL.hpp>
#include <xercesc/util/HashPtr.hpp>

XERCES_CPP_NAMESPACE_USE;

XercesURIResolver::XercesURIResolver(MemoryManager *mm)
  : _firstDocRefCount(new (mm) DocRefCount()),
    _documentMap(3,false,mm),
    _uriMap(3,false, new (mm) HashPtr(), mm),
    _mm(mm)
{
}

XercesURIResolver::~XercesURIResolver()
{
  DocRefCount *drc;
  while(_firstDocRefCount != 0) {
    drc = _firstDocRefCount;
    _firstDocRefCount = _firstDocRefCount->next;
    _mm->deallocate(drc);
  }
}

bool XercesURIResolver::resolveDocument(Sequence &result, const XMLCh* uri, DynamicContext* context)
{
  Node::Ptr doc;

  // Resolve the uri against the base uri
  const XMLCh *systemId = uri;
  XMLURL urlTmp(context->getMemoryManager());
  if(urlTmp.setURL(context->getBaseURI(), uri, urlTmp)) {
    systemId = context->getMemoryManager()->getPooledString(urlTmp.getURLText());
  }

  // Check in the cache
  DOMDocument *found = _documentMap.get((void*)systemId);

  // Check to see if we can locate and parse the document
  if(found == 0) {
    try {
      doc = const_cast<DocumentCache*>(context->getDocumentCache())->loadDocument(uri, context);

      found = (DOMDocument*)((DOMNode*)doc->getInterface(XercesConfiguration::gXerces));

      _documentMap.put((void*)systemId, found);
      _uriMap.put((void*)found, const_cast<XMLCh*>(systemId));
    }
    catch(const XMLParseException& e) {
      XMLBuffer errMsg;
      errMsg.set(X("Error parsing resource: "));
      errMsg.append(uri);
      errMsg.append(X(". Error message: "));
      errMsg.append(e.getError());
      errMsg.append(X(" [err:FODC0002]"));
      XQThrow2(XMLParseException,X("XercesContextImpl::resolveDocument"), errMsg.getRawBuffer());
    }
  }
  else {
    doc = new XercesNodeImpl(found, context);
  }

  if(doc.notNull()) {
    result.addItem(doc);
    return true;
  }

  XMLBuffer errMsg;
  errMsg.set(X("Error retrieving resource: "));
  errMsg.append(uri);
  errMsg.append(X(" [err:FODC0002]"));
  XQThrow2(XMLParseException,X("XercesContextImpl::resolveDocument"), errMsg.getRawBuffer());

  return false;
}

bool XercesURIResolver::resolveCollection(Sequence &result, const XMLCh* uri, DynamicContext* context)
{
  Node::Ptr doc;

  // Resolve the uri against the base uri
  const XMLCh *systemId = uri;
  XMLURL urlTmp(context->getMemoryManager());
  if(urlTmp.setURL(context->getBaseURI(), uri, urlTmp)) {
    systemId = context->getMemoryManager()->getPooledString(urlTmp.getURLText());
  }

  // Check in the cache
  DOMDocument *found = _documentMap.get((void*)systemId);

  // Check to see if we can locate and parse the document
  if(found == 0) {
    try {
      doc = const_cast<DocumentCache*>(context->getDocumentCache())->loadDocument(uri, context);

      found = (DOMDocument*)((DOMNode*)doc->getInterface(XercesConfiguration::gXerces));

      _documentMap.put((void*)systemId, found);
      _uriMap.put((void*)found, const_cast<XMLCh*>(systemId));
    }
    catch(const XMLParseException& e) {
      XMLBuffer errMsg;
      errMsg.set(X("Error parsing resource: "));
      errMsg.append(uri);
      errMsg.append(X(". Error message: "));
      errMsg.append(e.getError());
      errMsg.append(X(" [err:FODC0004]"));
      XQThrow2(XMLParseException,X("XercesURIResolver::resolveCollection"), errMsg.getRawBuffer());
    }
  }
  else {
    doc = new XercesNodeImpl(found, context);
  }

  if(doc.notNull()) {
    result.addItem(doc);
    return true;
  }

  XMLBuffer errMsg;
  errMsg.set(X("Error retrieving resource: "));
  errMsg.append(uri);
  errMsg.append(X(" [err:FODC0004]"));
  XQThrow2(XMLParseException,X("XercesURIResolver::resolveCollection"), errMsg.getRawBuffer());

  return false;
}

bool XercesURIResolver::resolveDefaultCollection(Sequence &result, DynamicContext* context)
{
  return false;
}

void XercesURIResolver::incrementDocumentRefCount(const DOMDocument* document)
{
  assert(document != 0);

  DocRefCount *found = _firstDocRefCount;
  while(found->doc != 0 && found->doc != document) {
    found = found->next;
  }

  if(found->doc == 0) {
    found->doc = document;
    found->next = new (_mm) DocRefCount();
  }
  else {
    ++found->ref_count;
  }
}

void XercesURIResolver::decrementDocumentRefCount(const DOMDocument* document)
{
  assert(document != 0);

  DocRefCount *prev = 0;
  DocRefCount *found = _firstDocRefCount;
  while(found->doc != 0 && found->doc != document) {
    prev = found;
    found = found->next;
  }

  if(found->doc != 0) {
    if(--found->ref_count == 0) {
      if(prev == 0) {
        _firstDocRefCount = found->next;
      }
      else {
        prev->next = found->next;
      }
      _mm->deallocate(found);
      XMLCh *uri = _uriMap.get((void*)document);
      if(uri != 0) {
        _uriMap.removeKey((void*)document);
        _documentMap.removeKey((void*)uri);
      }
      const_cast<DOMDocument*>(document)->release();
    }
  }
}

