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

#include <xqilla/events/EventSerializer.hpp>
#include <xqilla/utils/XStr.hpp>

#include <assert.h>

XERCES_CPP_NAMESPACE_USE;

static const XMLCh startElem_start = '<';
static const XMLCh elem_end = '>';
static const XMLCh endElem_selfClose[] = { '/', '>', 0 };
static const XMLCh endElem_start[] = { '<', '/', 0 };
static const XMLCh colon = ':';
static const XMLCh pi_start[] = { '<', '?', 0 };
static const XMLCh space = ' ';
static const XMLCh pi_end[] = { '?', '>', 0 };
static const XMLCh comment_start[] = { '<', '!', '-', '-', 0 };
static const XMLCh comment_end[] = { '-', '-', '>', 0 };
static const XMLCh attr_equals_quote[] = { '=', '"', 0 };
static const XMLCh quote = '"';
static const XMLCh attr_xmlns[] = { ' ', 'x', 'm', 'l', 'n', 's', 0 };

EventSerializer::EventSerializer(char *encoding, char *xmlVersion, MemoryManager *mm)
  : target_(1023, mm),
    formatter_(encoding, xmlVersion, &target_, XMLFormatter::CharEscapes, XMLFormatter::UnRep_CharRef, mm),
    elementStarted_(false)
{
}

EventSerializer::EventSerializer(MemoryManager *mm)
  : target_(1023, mm),
    formatter_("UTF-16", "1.1", &target_, XMLFormatter::CharEscapes, XMLFormatter::UnRep_CharRef, mm),
    elementStarted_(false)
{
}

void EventSerializer::startDocumentEvent(const XMLCh *documentURI, const XMLCh *encoding)
{
  // TBD XML decl? - jpcs
}

void EventSerializer::endDocumentEvent()
{
  // Nothing to do
}

void EventSerializer::endEvent()
{
  // Nothing to do
}

void EventSerializer::startElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname)
{
  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << elem_end;
  }

  formatter_ << X("<");
  if(prefix != 0) {
    formatter_ << prefix;
    formatter_ << colon;
  }
  formatter_ << localname;

  elementStarted_ = true;
}

void EventSerializer::endElementEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname,
                                      const XMLCh *typeURI, const XMLCh *typeName)
{
  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << endElem_selfClose;
  }
  else {
    formatter_ << endElem_start;
    if(prefix != 0) {
      formatter_ << prefix;
      formatter_ << colon;
    }
    formatter_ << localname;
    formatter_ << elem_end;
  }
}

void EventSerializer::piEvent(const XMLCh *target, const XMLCh *value)
{
  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << elem_end;
  }

  formatter_ << pi_start;
  formatter_ << target;
  formatter_ << space;
  formatter_ << value;
  formatter_ << pi_end;
}

void EventSerializer::textEvent(const XMLCh *value)
{
  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << elem_end;
  }
  formatter_ << XMLFormatter::CharEscapes << XMLFormatter::UnRep_CharRef;
  formatter_ << value;
}

void EventSerializer::textEvent(const XMLCh *chars, unsigned int length)
{
  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << elem_end;
  }
  formatter_ << XMLFormatter::CharEscapes << XMLFormatter::UnRep_CharRef;
  formatter_.formatBuf(chars, length);
}

void EventSerializer::commentEvent(const XMLCh *value)
{
  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  if(elementStarted_) {
    elementStarted_ = false;
    formatter_ << elem_end;
  }
  formatter_ << comment_start;
  formatter_ << value;
  formatter_ << comment_end;
}

void EventSerializer::attributeEvent(const XMLCh *prefix, const XMLCh *uri, const XMLCh *localname, const XMLCh *value,
                                     const XMLCh *typeURI, const XMLCh *typeName)
{
  assert(elementStarted_);

  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  formatter_ << space;
  if(prefix != 0) {
    formatter_ << prefix;
    formatter_ << colon;
  }
  formatter_ << localname;
  formatter_ << attr_equals_quote;

  formatter_ << XMLFormatter::AttrEscapes << XMLFormatter::UnRep_CharRef;
  formatter_ << value;

  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;
  formatter_ << quote;
}

void EventSerializer::namespaceEvent(const XMLCh *prefix, const XMLCh *uri)
{
  assert(elementStarted_);

  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;

  formatter_ << attr_xmlns;
  if(prefix != 0) {
    formatter_ << colon;
    formatter_ << prefix;
  }
  formatter_ << attr_equals_quote;

  formatter_ << XMLFormatter::AttrEscapes << XMLFormatter::UnRep_CharRef;
  formatter_ << uri;

  formatter_ << XMLFormatter::NoEscapes << XMLFormatter::UnRep_Fail;
  formatter_ << quote;
}

