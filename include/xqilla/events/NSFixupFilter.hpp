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

#ifndef _NSFIXUPFILTER_HPP
#define _NSFIXUPFILTER_HPP

#include <xqilla/events/EventHandler.hpp>

class XPath2MemoryManager;

class XQILLA_API NSFixupFilter : public EventFilter
{
public:
  NSFixupFilter(EventHandler *next, XPath2MemoryManager *mm);
  ~NSFixupFilter();

  virtual void startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname);
  virtual void endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                               const XMLCh *typeURI, const XMLCh *typeName);
  virtual void attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                              const XMLCh *typeURI, const XMLCh *typeName);
  virtual void namespaceEvent(const XMLCh *prefix, const XMLCh *uri);

private:
  struct NSEntry {
    void set(const XMLCh *p, const XMLCh *u, unsigned int l, NSEntry *pr)
    { prefix = p; uri = u; level = l; prev = pr; }

    const XMLCh *prefix;
    const XMLCh *uri;
    unsigned int level;

    NSEntry *prev;
  };

  NSEntry *findPrefix(const XMLCh *prefix);
  /// Returns the prefix to use
  bool definePrefix(const XMLCh *&prefix, const XMLCh *uri, bool attr = false, bool redefine = true);

  XPath2MemoryManager *mm_;
  unsigned int level_;
  NSEntry *namespaces_;
};

#endif
