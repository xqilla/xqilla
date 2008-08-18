/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
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
  AutoContextInfoReset(DynamicContext *context)
    : oldContextItem(context->getContextItem()),
      oldContextPosition(context->getContextPosition()),
      oldContextSize(context->getContextSize()),
      context_(context)
  {
  }

  AutoContextInfoReset(DynamicContext *context, const Item::Ptr &contextItem, unsigned int contextPosition = 0, unsigned int contextSize = 0)
    : oldContextItem(context->getContextItem()),
      oldContextPosition(context->getContextPosition()),
      oldContextSize(context->getContextSize()),
      context_(context)
  {
    context->setContextItem(contextItem);
    context->setContextPosition(contextPosition);
    context->setContextSize(contextSize);
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

class XQILLA_API AutoRegexGroupStoreReset
{
public:
  AutoRegexGroupStoreReset(DynamicContext *context, const RegexGroupStore *store = 0)
  {
    _context = context;
    _oldRegexStore = _context->getRegexGroupStore();
    if(store)
      _context->setRegexGroupStore(store);
  }

  ~AutoRegexGroupStoreReset()
  {
    _context->setRegexGroupStore(_oldRegexStore);
  }

  void reset()
  {
    _context->setRegexGroupStore(_oldRegexStore);
  }

protected:
  DynamicContext *_context;
  const RegexGroupStore *_oldRegexStore;
};

class XQILLA_API AutoMessageListenerReset
{
public:
  AutoMessageListenerReset(StaticContext* context, MessageListener *listener = 0)
  {
    context_ = context;
    listener_ = context->getMessageListener();
    context->setMessageListener(listener);
  }

  ~AutoMessageListenerReset()
  {
    context_->setMessageListener(listener_);
  }

protected:
  StaticContext* context_;
  MessageListener *listener_;  
};

class XQILLA_API AutoStackFrameReset
{
public:
  AutoStackFrameReset(DynamicContext *context, const StackFrame *frame)
  {
    _context = context;
    _oldFrame = _context->getStackFrame();
    _context->setStackFrame(frame);
  }

  ~AutoStackFrameReset()
  {
    _context->setStackFrame(_oldFrame);
  }

  void reset()
  {
    _context->setStackFrame(_oldFrame);
  }

protected:
  DynamicContext *_context;
  const StackFrame *_oldFrame;
};

#endif
