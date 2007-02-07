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

#include <xqilla/events/NSFixupFilter.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

#include <xercesc/framework/XMLBuffer.hpp>

XERCES_CPP_NAMESPACE_USE;

NSFixupFilter::NSFixupFilter(EventHandler *next, XPath2MemoryManager *mm)
  : EventFilter(next),
    mm_(mm),
    level_(0),
    namespaces_(0)
{
}

NSFixupFilter::~NSFixupFilter()
{
  while(namespaces_ != 0) {
    NSEntry *tmp = namespaces_;
    namespaces_ = namespaces_->prev;
    mm_->deallocate(tmp);
  }
}

void NSFixupFilter::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  ++level_;
  bool def = definePrefix(prefix, uri);

  next_->startElementEvent(prefix, uri, localname);

  if(def) next_->namespaceEvent(prefix, uri);
}

void NSFixupFilter::endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                                    const XMLCh *typeURI, const XMLCh *typeName)
{
  // TBD What if the prefix was redefined in startElementEvent? - jpcs
  next_->endElementEvent(prefix, uri, localname, typeURI, typeName);

  --level_;
  while(namespaces_ != 0 && namespaces_->level > level_) {
    NSEntry *tmp = namespaces_;
    namespaces_ = namespaces_->prev;
    mm_->deallocate(tmp);
  }
}

void NSFixupFilter::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                   const XMLCh *typeURI, const XMLCh *typeName)
{
  if(definePrefix(prefix, uri, /*attr*/true)) {
    next_->namespaceEvent(prefix, uri);
  }

  next_->attributeEvent(prefix, uri, localname, value, typeURI, typeName);
}

void NSFixupFilter::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  if(definePrefix(prefix, uri, /*attr*/false, /*redefine*/false)) {
    next_->namespaceEvent(prefix, uri);
  }
}

static void numToBuf(unsigned int n, XMLBuffer &buf)
{
  if(n >= 10) numToBuf(n / 10, buf);
  buf.append('0' + (n % 10));
}

NSFixupFilter::NSEntry *NSFixupFilter::findPrefix(const XMLCh *prefix)
{
  NSEntry *cur = namespaces_;
  while(cur != 0) {
    if(XPath2Utils::equals(prefix, cur->prefix)) {
      break;
    }
    cur = cur->prev;
  }
  return cur;
}  

/// Returns the prefix to use
bool NSFixupFilter::definePrefix(const XMLCh *&prefix, const XMLCh *uri, bool attr, bool redefine)
{
  // Attributes with no namespace do not need a prefix defined
  if(uri == 0 && attr) return false;

  // The "xml" prefix is always defined
  if(XPath2Utils::equals(XMLUni::fgXMLString, prefix)) return false;

  // Check if the prefix is already defined
  NSEntry *cur = findPrefix(prefix);

  bool result = true;
  if(cur != 0) {
    if(XPath2Utils::equals(uri, cur->uri)) {
      // The prefix is already defined
      result = false;
    }
    else if(cur->level == level_) {
      if(uri == 0) {
        // TBD this is an error - jpcs
        result = false;
      }
      else if(!redefine) {
        result = false;
      }
      else {
        // Choose a new prefix
        static XMLCh ns_prefix[] = { 'n', 's', 0 };
        if(prefix == 0) prefix = ns_prefix;

        XMLBuffer buf(20, mm_);
        unsigned int num = 0;
        do {
          ++num;
          buf.set(prefix);
          buf.append('_');
          numToBuf(num, buf);
        } while(findPrefix(buf.getRawBuffer()) != 0);
        prefix = mm_->getPooledString(buf.getRawBuffer());
      }
    }
  }
  else if(uri == 0) {
    // The default namespace is implicitly set to no namespace
    result = false;
  }

  // add the mapping to our linked list
  NSEntry *entry = (NSEntry*)mm_->allocate(sizeof(NSEntry));
  entry->set(prefix, uri, level_, namespaces_);
  namespaces_ = entry;

  return result;
}

