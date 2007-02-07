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

#ifndef XERCESCONFIGURATION_H
#define XERCESCONFIGURATION_H

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/simple-api/XQillaConfiguration.hpp>
#include <xqilla/items/Node.hpp>

XERCES_CPP_NAMESPACE_BEGIN
class DOMNode;
XERCES_CPP_NAMESPACE_END

class XQILLA_API XercesConfiguration : public XQillaConfiguration
{
public:

  /**
   * The "Xerces" DOMNode node interface.
   * Use this as the parameter when you call Item::getInterface()
   * to have a xerces DOMNode returned, if the Node is of the
   * correct type. If it is not of the correct type, the method
   * will return 0.
   */
  static const XMLCh gXerces[];

  virtual DocumentCache *createDocumentCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual SequenceBuilder *createSequenceBuilder(const DynamicContext *context);

  virtual ItemFactory *createItemFactory(DocumentCache *cache,
                                         XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual UpdateFactory *createUpdateFactory(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual URIResolver *createDefaultURIResolver(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr);

  virtual Node::Ptr createNode(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node, const DynamicContext *context) const;
};

#endif
