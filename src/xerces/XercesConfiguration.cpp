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

#include <xqilla/xerces/XercesConfiguration.hpp>
#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/context/impl/ItemFactoryImpl.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

#include "XercesUpdateFactory.hpp"
#include "XercesNodeImpl.hpp"
#include "XercesURIResolver.hpp"
#include "XercesSequenceBuilder.hpp"

XERCES_CPP_NAMESPACE_USE;

const XMLCh XercesConfiguration::gXerces[] =   // Points to "Xerces"
{
  chLatin_X, chLatin_e, chLatin_r, chLatin_c, chLatin_e, chLatin_s, chNull
};

DocumentCache *XercesConfiguration::createDocumentCache(MemoryManager *memMgr)
{
  return new (memMgr) DocumentCacheImpl(memMgr);
}

SequenceBuilder *XercesConfiguration::createSequenceBuilder(const DynamicContext *context)
{
  return new (context->getMemoryManager()) XercesSequenceBuilder(context);
}

ItemFactory *XercesConfiguration::createItemFactory(DocumentCache *cache,
                                                    MemoryManager *memMgr)
{
  return new (memMgr) ItemFactoryImpl(cache, memMgr);
}

UpdateFactory *XercesConfiguration::createUpdateFactory(MemoryManager *memMgr)
{
  return new (memMgr) XercesUpdateFactory();
}

URIResolver *XercesConfiguration::createDefaultURIResolver(MemoryManager *memMgr)
{
  return new (memMgr) XercesURIResolver(memMgr);
}

Node::Ptr XercesConfiguration::createNode(const DOMNode *node, const DynamicContext *context) const
{
  // bump the document reference count, so that it will never reach zero...
  ((XercesURIResolver*)context->getDefaultURIResolver())->
    incrementDocumentRefCount(XPath2Utils::getOwnerDoc(node));
  return new XercesNodeImpl(node, context);
}
