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

#include "NoInheritFilter.hpp"

XERCES_CPP_NAMESPACE_USE;

NoInheritFilter::NoInheritFilter(EventHandler *next, MemoryManager *mm)
  : EventFilter(next),
    prefixes_(7, mm),
    prefixes2_(7, mm),
    level_(0),
    elementStarted_(false)
{
}

void NoInheritFilter::startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
{
  ++level_;
  next_->startDocumentEvent(documentURI, encoding);
}

void NoInheritFilter::endDocumentEvent()
{
  next_->endDocumentEvent();
  --level_;
}

void NoInheritFilter::endEvent()
{
  next_->endEvent();
  level_ = 0;
}

void NoInheritFilter::checkElementStarted()
{
  if(elementStarted_) {
    elementStarted_ = false;

    if(level_ == 2) {
      // Add namespaces to un-inherit our parent's namespaces
      RefHashTableOfEnumerator<int> en(&prefixes_);
      while(en.hasMoreElements()) {
        const XMLCh *prefix = (const XMLCh*)en.nextElementKey();
        if(!prefixes2_.containsKey((void*)prefix)) {
          next_->namespaceEvent(prefix, 0);
        }
      }
    }
  }
}

void NoInheritFilter::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  checkElementStarted();

  ++level_;
  next_->startElementEvent(prefix, uri, localname);

  if(level_ == 1 && uri != 0) {
    prefixes_.put((void*)prefix, 0);
  }
  else if(level_ == 2) {
    prefixes2_.removeAll();
    prefixes2_.put((void*)prefix, 0);

    elementStarted_ = true;
  }
}

void NoInheritFilter::endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                                      const XMLCh *typeURI, const XMLCh *typeName)
{
  checkElementStarted();

  next_->endElementEvent(prefix, uri, localname, typeURI, typeName);
  --level_;
}

void NoInheritFilter::piEvent(const XMLCh *target, const XMLCh *value)
{
  checkElementStarted();

  next_->piEvent(target, value);
}

void NoInheritFilter::textEvent(const XMLCh *value)
{
  checkElementStarted();

  next_->textEvent(value);
}

void NoInheritFilter::textEvent(const XMLCh *chars, unsigned int length)
{
  checkElementStarted();

  next_->textEvent(chars, length);
}

void NoInheritFilter::commentEvent(const XMLCh *value)
{
  checkElementStarted();

  next_->commentEvent(value);
}

void NoInheritFilter::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                     const XMLCh *typeURI, const XMLCh *typeName)
{
  next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);

  if(level_ == 1 && uri != 0) {
    prefixes_.put((void*)prefix, 0);
  }
  else if(level_ == 2 && uri != 0) {
    prefixes2_.put((void*)prefix, 0);
  }
}

void NoInheritFilter::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  next_->namespaceEvent(prefix, uri);

  if(level_ == 1 && uri != 0) {
    prefixes_.put((void*)prefix, 0);
  }
  else if(level_ == 2) {
    prefixes2_.put((void*)prefix, 0);
  }
}

