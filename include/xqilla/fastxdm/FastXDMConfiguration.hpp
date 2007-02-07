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

#ifndef FASTXDMCONFIGURATION_H
#define FASTXDMCONFIGURATION_H

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/simple-api/XQillaConfiguration.hpp>

class XQILLA_API FastXDMConfiguration : public XQillaConfiguration
{
public:
  virtual DocumentCache *createDocumentCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual SequenceBuilder *createSequenceBuilder(const DynamicContext *context);

  virtual ItemFactory *createItemFactory(DocumentCache *cache,
                                         XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual UpdateFactory *createUpdateFactory(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual URIResolver *createDefaultURIResolver(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);
};

#endif
