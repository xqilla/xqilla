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

#ifndef CONTEXTHELPERS_HPP
#define CONTEXTHELPERS_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/context/DynamicContext.hpp>

class XQILLA_API AutoNodeSetOrderingReset
{
public:
  AutoNodeSetOrderingReset(StaticContext* context, StaticContext::NodeSetOrdering ordering = StaticContext::ORDERING_UNORDERED)
  {
    context_ = context;
    ordering_ = context->getNodeSetOrdering();
    context->setNodeSetOrdering(ordering);
  }

  ~AutoNodeSetOrderingReset()
  {
    context_->setNodeSetOrdering(ordering_);
  }

protected:
  StaticContext* context_;
  StaticContext::NodeSetOrdering ordering_;  
};

class XQILLA_API AutoContextItemTypeReset
{
public:
  AutoContextItemTypeReset(StaticContext* context, const StaticType &sType)
  {
    context_ = context;
    sType_ = context->getContextItemType();
    context->setContextItemType(sType);
  }

  ~AutoContextItemTypeReset()
  {
    context_->setContextItemType(sType_);
  }

protected:
  StaticContext* context_;
  StaticType sType_;
};

class XQILLA_API AutoNsScopeReset
{
public:
  AutoNsScopeReset(StaticContext* context, XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* newResolver)
  {
    _context=context;
    _oldNSResolver=_context->getNSResolver();
    _defaultElementAndTypeNS=context->getDefaultElementAndTypeNS();
    _context->setNSResolver(newResolver);
  }

  ~AutoNsScopeReset()
  {
    _context->setNSResolver(_oldNSResolver);
    _context->setDefaultElementAndTypeNS(_defaultElementAndTypeNS);
  }

protected:
  StaticContext* _context;
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNSResolver* _oldNSResolver;
  const XMLCh *_defaultElementAndTypeNS;
  
};

class XQILLA_API AutoContextInfoReset
{
public:
  AutoContextInfoReset(DynamicContext* context)
    : oldContextItem(context->getContextItem()),
      oldContextPosition(context->getContextPosition()),
      oldContextSize(context->getContextSize()),
      context_(context)
  {
  }

  ~AutoContextInfoReset()
  {
    resetContextInfo();
  }

  void resetContextInfo()
  {
    context_->setContextItem(oldContextItem);
    context_->setContextPosition(oldContextPosition);
    context_->setContextSize(oldContextSize);
  }

  Item::Ptr oldContextItem;
  size_t oldContextPosition;
  size_t oldContextSize;

private:
  DynamicContext* context_;
};

class XQILLA_API AutoDocumentCacheReset
{
public:
  AutoDocumentCacheReset(DynamicContext* context)
    : oldDC(const_cast<DocumentCache*>(context->getDocumentCache())),
      context_ (context)
  {
  }

  ~AutoDocumentCacheReset()
  {
    context_->setDocumentCache(oldDC);
  }

  DocumentCache *oldDC;

protected:
  DynamicContext* context_;
};

class XQILLA_API AutoVariableStoreReset
{
public:
  AutoVariableStoreReset(DynamicContext *context, const VariableStore *store = 0)
  {
    _context = context;
    _oldVarStore = _context->getVariableStore();
    if(store)
      _context->setVariableStore(store);
  }

  ~AutoVariableStoreReset()
  {
    _context->setVariableStore(_oldVarStore);
  }

  void reset()
  {
    _context->setVariableStore(_oldVarStore);
  }

protected:
  DynamicContext *_context;
  const VariableStore *_oldVarStore;
  
};

#endif
