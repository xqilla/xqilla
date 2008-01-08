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

#include "FaxppDocumentCacheImpl.hpp"

#ifdef HAVE_FAXPP

#include <assert.h>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/BinInputStream.hpp>
#include <xercesc/sax/InputSource.hpp>

#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/UTF8Str.hpp>

XERCES_CPP_NAMESPACE_USE;

FaxppDocumentCacheImpl::FaxppDocumentCacheImpl(MemoryManager* memMgr, XMLGrammarPool *xmlgr)
  : DocumentCacheImpl(memMgr, xmlgr, /*makeScanner*/true),
    parser_(0),
    validator_(/*strictValidation*/false, 0, grammarResolver_, memMgr, 0)
{
  parser_ = FAXPP_create_parser(WELL_FORMED_PARSE_MODE, FAXPP_utf16_native_encode);
  if(parser_ == 0)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::init"), X("Out of memory"));
}

FaxppDocumentCacheImpl::~FaxppDocumentCacheImpl()
{
  if(parser_) FAXPP_free_parser(parser_);
}

static unsigned int binInputStreamReadCallback(void *userData, void *buffer, unsigned int length)
{
  return ((BinInputStream*)userData)->readBytes((XMLByte*)buffer, length);
}

static inline const XMLCh *nullTerm(const FAXPP_Text &text, XPath2MemoryManager *mm)
{
  return mm->getPooledString((XMLCh*)text.ptr, text.len / sizeof(XMLCh));
}

Node::Ptr FaxppDocumentCacheImpl::parseDocument(InputSource &srcToUse, DynamicContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  AutoDelete<SequenceBuilder> builder(context->createSequenceBuilder());
  validator_.setNextEventHandler(builder);
  events_ = &validator_;

  BinInputStream *stream = srcToUse.makeStream();
  if(stream == NULL)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Document not found"));
  Janitor<BinInputStream> janStream(stream);

  FAXPP_Error err = FAXPP_init_parse_callback(parser_, binInputStreamReadCallback, stream);
  if(err == OUT_OF_MEMORY)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Out of memory"));

  // Force use of encoding set on InputSource (this is done by FunctionParseXML)
  if(srcToUse.getEncoding()) {
    FAXPP_DecodeFunction decode = FAXPP_string_to_decode(UTF8(srcToUse.getEncoding()));
    if(decode == 0) err = UNSUPPORTED_ENCODING;
    FAXPP_set_decode(parser_, decode);
  }

  if(err == UNSUPPORTED_ENCODING) {
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Unsupported encoding"));
  }

  unsigned int i;
  FAXPP_Attribute *attr;

  while(true) {
    err = FAXPP_next_event(parser_);
    if(err != NO_ERROR) {
      // TBD add line and column information - jpcs
      XMLBuffer buf;
      buf.append(X("Error parsing document: "));
      buf.append(X(FAXPP_err_to_string(err)));
      XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), buf.getRawBuffer());
    }

    const FAXPP_Event *event = FAXPP_get_current_event(parser_);
    switch(event->type) {
    case START_DOCUMENT_EVENT:
      // TBD Get encoding from parser if not specified in document - jpcs
      events_->startDocumentEvent(srcToUse.getSystemId(), nullTerm(event->encoding, mm));
      break;
    case END_DOCUMENT_EVENT:
      events_->endDocumentEvent();
      events_->endEvent();
      return (Node*)builder->getSequence().first().get();
    case START_ELEMENT_EVENT:
    case SELF_CLOSING_ELEMENT_EVENT:
      events_->startElementEvent(nullTerm(event->prefix, mm), nullTerm(event->uri, mm), nullTerm(event->name, mm));

      for(i = 0; i < event->attr_count; ++i) {
        attr = &event->attrs[i];
        if(attr->xmlns_attr) {
          if(attr->prefix.ptr == 0)
            events_->namespaceEvent(0, nullTerm(attr->value.value, mm));
          else
            events_->namespaceEvent(nullTerm(attr->name, mm), nullTerm(attr->value.value, mm));
        }
        else {
          events_->attributeEvent(nullTerm(attr->prefix, mm), nullTerm(attr->uri, mm), nullTerm(attr->name, mm), nullTerm(attr->value.value, mm),
                                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA, ATUntypedAtomic::fgDT_UNTYPEDATOMIC);
        }
      }

      if(event->type == START_ELEMENT_EVENT) break;
      // Fall through
    case END_ELEMENT_EVENT:
      events_->endElementEvent(nullTerm(event->prefix, mm), nullTerm(event->uri, mm), nullTerm(event->name, mm),
                               SchemaSymbols::fgURI_SCHEMAFORSCHEMA, DocumentCache::g_szUntyped);
      break;
    case IGNORABLE_WHITESPACE_EVENT:
      // Do nothing
      break;
    case ENTITY_REFERENCE_EVENT:
    case DEC_CHAR_REFERENCE_EVENT:
    case HEX_CHAR_REFERENCE_EVENT:
    case CHARACTERS_EVENT:
    case CDATA_EVENT:
      events_->textEvent((XMLCh*)event->value.ptr, event->value.len / sizeof(XMLCh));
      break;
    case COMMENT_EVENT:
      events_->commentEvent(nullTerm(event->value, mm));
      break;
    case PI_EVENT:
      events_->piEvent(nullTerm(event->name, mm), nullTerm(event->value, mm));
      break;
    case NO_EVENT: break;
    }
  }

  // Never happens
  return 0;
}

DocumentCache *FaxppDocumentCacheImpl::createDerivedCache(MemoryManager *memMgr) const
{
  // lock the grammar pool, so we can share it accross threads
  grammarResolver_->getGrammarPool()->lockPool();

  // Construct a new FaxppDocumentCacheImpl, based on this one
  return new (memMgr) FaxppDocumentCacheImpl(memMgr, grammarResolver_->getGrammarPool());
}

#endif

