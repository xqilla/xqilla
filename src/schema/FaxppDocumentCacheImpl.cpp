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
#include <xercesc/util/XMLResourceIdentifier.hpp>
#include <xercesc/util/XMLEntityResolver.hpp>

#include <xqilla/events/SequenceBuilder.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/items/ATUntypedAtomic.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/UTF8Str.hpp>

XERCES_CPP_NAMESPACE_USE;
using namespace std;

FaxppDocumentCacheImpl::FaxppDocumentCacheImpl(MemoryManager* memMgr, XMLGrammarPool *xmlgr)
  : DocumentCacheImpl(memMgr, xmlgr, /*makeScanner*/true),
    parser_(0),
    validator_(/*strictValidation*/false, 0, grammarResolver_, memMgr, 0)
{
  parser_ = FAXPP_create_parser(WELL_FORMED_PARSE_MODE, FAXPP_utf16_native_transcoder);
  if(parser_ == 0)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::init"), X("Out of memory"));
}

FaxppDocumentCacheImpl::~FaxppDocumentCacheImpl()
{
  if(parser_) FAXPP_free_parser(parser_);
}

static unsigned int binInputStreamReadCallback(void *userData, void *buffer, unsigned int length)
{
  BinInputStream *stream = (BinInputStream*)userData;

  unsigned int result = 0;
  do {
    unsigned int read = stream->readBytes((XMLByte*)buffer + result, length - result);
    if(read == 0) break;

    result += read;
  } while(result < length);

  return result;
}

static inline const XMLCh *nullTerm(const FAXPP_Text &text, XPath2MemoryManager *mm)
{
  return mm->getPooledString((XMLCh*)text.ptr, text.len / sizeof(XMLCh));
}

struct EntityCallbackUserData
{
  EntityCallbackUserData(XPath2MemoryManager *m, FaxppDocumentCacheImpl *f)
    : mm(m), docCache(f) {}
  ~EntityCallbackUserData()
  {
    vector<BinInputStream*>::iterator i = inputStreams.begin();
    for(; i != inputStreams.end(); ++i) {
      delete *i;
    }
  }

  vector<BinInputStream*> inputStreams;
  XPath2MemoryManager *mm;
  FaxppDocumentCacheImpl *docCache;
};

static FAXPP_Error staticEntityCallback(void *userData, FAXPP_Parser *parser, FAXPP_EntityType type,
                                        const FAXPP_Text *base_uri, const FAXPP_Text *systemid, const FAXPP_Text *publicid)
{
  EntityCallbackUserData *ecud = (EntityCallbackUserData*)userData;
  return ecud->docCache->entityCallback(ecud, type, base_uri, systemid, publicid);
}

FAXPP_Error FaxppDocumentCacheImpl::entityCallback(EntityCallbackUserData *userData, FAXPP_EntityType type,
                                                   const FAXPP_Text *base_uri, const FAXPP_Text *systemid, const FAXPP_Text *publicid)
{
  try {
    // Resolve the entity
    const XMLCh *system16 = nullTerm(*systemid, userData->mm);
    const XMLCh *public16 = nullTerm(*publicid, userData->mm);

    InputSource* srcToUse = 0;
    if(entityResolver_){
      XMLResourceIdentifier resourceIdentifier(XMLResourceIdentifier::ExternalEntity, system16, 0,
                                               public16, (XMLCh*)base_uri->ptr);
      srcToUse = entityResolver_->resolveEntity(&resourceIdentifier);
    }

    if(srcToUse == 0) {
      srcToUse = resolveURI(system16, (XMLCh*)base_uri->ptr);
    }
    Janitor<InputSource> janIS(srcToUse);

    // Create a BinInputStream
    BinInputStream *stream = srcToUse->makeStream();
    if(stream == NULL)
      return CANT_LOCATE_EXTERNAL_ENTITY;
    userData->inputStreams.push_back(stream);

    FAXPP_Error err = FAXPP_parse_external_entity_callback(parser_, type, binInputStreamReadCallback, stream);

    // Set the correct base URI
    if(err == NO_ERROR) {
      FAXPP_Text base = { (void*)srcToUse->getSystemId(), (XMLString::stringLen(srcToUse->getSystemId()) + 1) * sizeof(XMLCh) };
      err = FAXPP_set_base_uri(parser_, &base);
    }

    // Force use of encoding set on InputSource (this is done by FunctionParseXML)
    if(err == NO_ERROR && srcToUse->getEncoding()) {
      FAXPP_DecodeFunction decode = FAXPP_string_to_decode(UTF8(srcToUse->getEncoding()));
      if(decode == 0) err = UNSUPPORTED_ENCODING;
      else FAXPP_set_decode(parser_, decode);
    }

    return err;
  }
  catch(...) {
    return CANT_LOCATE_EXTERNAL_ENTITY;
  }
}

static inline void setLocation(LocationInfo &info, const FAXPP_Event *event)
{
  info.setLocationInfo(info.getFile(), event->line, event->column);
}

static inline void setLocation(LocationInfo &info, const FAXPP_Attribute *attr)
{
  info.setLocationInfo(info.getFile(), attr->line, attr->column);
}

#define LOCATION(o) setLocation(location_, (o))

void FaxppDocumentCacheImpl::parseDocument(InputSource &srcToUse, EventHandler *handler, DynamicContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  if(doPSVI_) {
    validator_.setNextEventHandler(handler);
    events_ = &validator_;
  }
  else {
    events_ = handler;
  }

  // Register our entity resolution callback
  EntityCallbackUserData ecud(mm, this);
  FAXPP_set_external_entity_callback(parser_, staticEntityCallback, &ecud);

  // Create a BinInputStream
  BinInputStream *stream = srcToUse.makeStream();
  if(stream == NULL)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Document not found"));
  ecud.inputStreams.push_back(stream);

  // Initialize the parse
  FAXPP_Error err = FAXPP_init_parse_callback(parser_, binInputStreamReadCallback, stream);

  // Set the correct base URI
  if(err == NO_ERROR && srcToUse.getSystemId()) {
    FAXPP_Text base = { (void*)srcToUse.getSystemId(), (XMLString::stringLen(srcToUse.getSystemId()) + 1) * sizeof(XMLCh) };
    err = FAXPP_set_base_uri(parser_, &base);
  }

  if(err == OUT_OF_MEMORY)
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Out of memory"));

  // Force use of encoding set on InputSource (this is done by FunctionParseXML)
  if(srcToUse.getEncoding()) {
    FAXPP_DecodeFunction decode = FAXPP_string_to_decode(UTF8(srcToUse.getEncoding()));
    if(decode == 0) err = UNSUPPORTED_ENCODING;
    else FAXPP_set_decode(parser_, decode);
  }
#if 0
  else if(stream->getContentType()) {
  }
#endif

  if(err == UNSUPPORTED_ENCODING) {
    XQThrow2(XMLParseException, X("FaxppDocumentCacheImpl::loadDocument"), X("Unsupported encoding"));
  }

  location_.setLocationInfo(srcToUse.getSystemId(), 0, 0);

  try {

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
    LOCATION(event);

    switch(event->type) {
    case START_DOCUMENT_EVENT:
      // TBD Get encoding from parser if not specified in document - jpcs
      events_->setLocationInfo(&location_);
      events_->startDocumentEvent(srcToUse.getSystemId(), nullTerm(event->encoding, mm));
      break;
    case END_DOCUMENT_EVENT:
      events_->endDocumentEvent();
      return;
    case START_ELEMENT_EVENT:
    case SELF_CLOSING_ELEMENT_EVENT:
      events_->startElementEvent(nullTerm(event->prefix, mm), nullTerm(event->uri, mm), nullTerm(event->name, mm));

      for(i = 0; i < event->attr_count; ++i) {
        attr = &event->attrs[i];
        LOCATION(attr);

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
    case DOCTYPE_EVENT:
    case ENTITY_REFERENCE_START_EVENT:
    case ENTITY_REFERENCE_END_EVENT:
    case START_EXTERNAL_ENTITY_EVENT:
    case END_EXTERNAL_ENTITY_EVENT:
    case NO_EVENT: break;
    }
  }

  }
  catch(XQException& e) {
    if(e.getXQueryLine() == 0) {
      e.setXQueryPosition(&location_);
    }
    throw e;
  }
}

DocumentCache *FaxppDocumentCacheImpl::createDerivedCache(MemoryManager *memMgr) const
{
  // lock the grammar pool, so we can share it across threads
  grammarResolver_->getGrammarPool()->lockPool();

  // Construct a new FaxppDocumentCacheImpl, based on this one
  return new (memMgr) FaxppDocumentCacheImpl(memMgr, grammarResolver_->getGrammarPool());
}

#endif

