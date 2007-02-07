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

#ifndef XERCESURIRESOLVER_H
#define XERCESURIRESOLVER_H

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/context/URIResolver.hpp>

#include <xercesc/util/RefHashTableOf.hpp>

class XQILLA_API XercesURIResolver : public URIResolver {
public:
  XercesURIResolver(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm);
  virtual ~XercesURIResolver();

  virtual bool resolveDocument(Sequence &result, const XMLCh* uri, DynamicContext* context);
  virtual bool resolveCollection(Sequence &result, const XMLCh* uri, DynamicContext* context);
  virtual bool resolveDefaultCollection(Sequence &result, DynamicContext* context);

  void incrementDocumentRefCount(const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* document);
  void decrementDocumentRefCount(const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* document);

private:
  class DocRefCount {
  public:
    DocRefCount() : doc(0), ref_count(1), next(0) {}

    const XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *doc;
    unsigned int ref_count;
    DocRefCount *next;
  };

  DocRefCount *_firstDocRefCount;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf< XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument > _documentMap;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf< XMLCh > _uriMap;
  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *_mm;
};

#endif
