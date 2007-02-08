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

#ifndef _EVENTSERIALIZER_HPP
#define _EVENTSERIALIZER_HPP

#include <xqilla/events/EventHandler.hpp>

#include <xercesc/framework/XMLFormatter.hpp>

class XQILLA_API EventSerializer : public EventHandler
{
public:
  EventSerializer(char *encoding, char *xmlVersion, XERCES_CPP_NAMESPACE_QUALIFIER XMLFormatTarget *target,
                  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm =
                  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);
  EventSerializer(XERCES_CPP_NAMESPACE_QUALIFIER XMLFormatTarget *target,
                  XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *mm =
                  XERCES_CPP_NAMESPACE_QUALIFIER XMLPlatformUtils::fgMemoryManager);

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
  virtual void atomicItemEvent(AnyAtomicType::AtomicObjectType type, const XMLCh *value,
                               const XMLCh *typeURI, const XMLCh *typeName);
  virtual void endEvent();

  void addNewlines(bool add) { addNewlines_ = add; }

private:
  XERCES_CPP_NAMESPACE_QUALIFIER XMLFormatter formatter_;
  bool elementStarted_;
  unsigned int level_;
  bool addNewlines_;
};

#endif
