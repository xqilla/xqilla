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

#ifndef XQILLACONFIGURATION_H
#define XQILLACONFIGURATION_H

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/simple-api/XQilla.hpp>

#include <xercesc/framework/MemoryManager.hpp>
#include <xercesc/util/XMemory.hpp>

class DocumentCache;
class SequenceBuilder;
class ItemFactory;
class UpdateFactory;
class URIResolver;
class StaticContext;
class DynamicContext;

class XQILLA_API XQillaConfiguration : public XERCES_CPP_NAMESPACE_QUALIFIER XMemory
{
public:
  virtual ~XQillaConfiguration() {}

  virtual DocumentCache *createDocumentCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) = 0;

  virtual SequenceBuilder *createSequenceBuilder(const DynamicContext *context) = 0;

  virtual ItemFactory *createItemFactory(DocumentCache *cache,
                                         XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) = 0;

  virtual UpdateFactory *createUpdateFactory(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) = 0;

  virtual URIResolver *createDefaultURIResolver(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) = 0;

  virtual void populateStaticContext(StaticContext *context) {}

  virtual void populateDynamicContext(DynamicContext *context) {}

  virtual void testInterrupt() {}
};

#endif
