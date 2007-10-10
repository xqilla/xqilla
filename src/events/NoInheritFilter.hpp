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

#ifndef _NOINHERITFILTER_HPP
#define _NOINHERITFILTER_HPP

#include <xqilla/events/EventHandler.hpp>

#include <xercesc/util/RefHashTableOf.hpp>

class NoInheritFilter : public EventFilter
{
public:
  NoInheritFilter(EventHandler *next, XPath2MemoryManager *mm);

  virtual void startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding);
  virtual void endDocumentEvent();
  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname);
  virtual void endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                               const XMLCh *typeURI, const XMLCh *typeName);
  virtual void piEvent(const XMLCh *target, const XMLCh *value);
  virtual void textEvent(const XMLCh *value);
  virtual void textEvent(const XMLCh *chars, unsigned int length);
  virtual void commentEvent(const XMLCh *value);
  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName);
  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri);
  virtual void endEvent();

private:
  void checkElementStarted();

  XPath2MemoryManager *mm_;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<int> prefixes_;
  XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOf<int> prefixes2_;
  unsigned int level_;
  bool elementStarted_;
};

#endif
