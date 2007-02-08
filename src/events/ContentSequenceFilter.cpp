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

#include <xqilla/framework/XQillaExport.hpp>
#include <xqilla/events/ContentSequenceFilter.hpp>

ContentSequenceFilter::ContentSequenceFilter(EventHandler *next)
  : EventFilter(next),
    lastWasAtomic_(false)
{
}

void ContentSequenceFilter::startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
{
  // Do nothing
}

void ContentSequenceFilter::endDocumentEvent()
{
  // Do nothing
}

void ContentSequenceFilter::endEvent()
{
  // Do nothing
}

void ContentSequenceFilter::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  lastWasAtomic_ = false;
  next_->startElementEvent(prefix, uri, localname);
}

void ContentSequenceFilter::piEvent(const XMLCh *target, const XMLCh *value)
{
  lastWasAtomic_ = false;
  next_->piEvent(target, value);
}

void ContentSequenceFilter::textEvent(const XMLCh *value)
{
  lastWasAtomic_ = false;
  next_->textEvent(value);
}

void ContentSequenceFilter::textEvent(const XMLCh *chars, unsigned int length)
{
  lastWasAtomic_ = false;
  next_->textEvent(chars, length);
}

void ContentSequenceFilter::commentEvent(const XMLCh *value)
{
  lastWasAtomic_ = false;
  next_->commentEvent(value);
}

void ContentSequenceFilter::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                           const XMLCh *typeURI, const XMLCh *typeName)
{
  lastWasAtomic_ = false;
  next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);
}

void ContentSequenceFilter::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  lastWasAtomic_ = false;
  next_->namespaceEvent(prefix, uri);
}

void ContentSequenceFilter::atomicItemEvent(AnyAtomicType::AtomicObjectType type, const XMLCh *value, const XMLCh *typeURI,
                                            const XMLCh *typeName)
{
  static XMLCh space[] = { ' ', 0 };

  if(lastWasAtomic_) {
    next_->textEvent(space);
  }
  next_->textEvent(value);
  lastWasAtomic_ = true;
}
