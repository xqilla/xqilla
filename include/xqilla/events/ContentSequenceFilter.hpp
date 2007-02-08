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

#ifndef _CONTENTSEQUENCEFILTER_HPP
#define _CONTENTSEQUENCEFILTER_HPP

#include <xqilla/events/EventHandler.hpp>

class XQILLA_API ContentSequenceFilter : public EventFilter
{
public:
  ContentSequenceFilter(EventHandler *next);

  virtual void startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding);
  virtual void endDocumentEvent();
  virtual void endEvent();
  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname);
  virtual void piEvent(const XMLCh *target, const XMLCh *value);
  virtual void textEvent(const XMLCh *value);
  virtual void textEvent(const XMLCh *chars, unsigned int length);
  virtual void commentEvent(const XMLCh *value);
  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName);
  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri);
  virtual void atomicItemEvent(AnyAtomicType::AtomicObjectType type, const XMLCh *value, const XMLCh *typeURI,
                               const XMLCh *typeName);

private:
  bool lastWasAtomic_;
};

#endif
