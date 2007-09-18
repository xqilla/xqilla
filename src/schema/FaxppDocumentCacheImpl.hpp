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

#ifndef _FAXPPDOCUMENTCACHEIMPL_HPP
#define _FAXPPDOCUMENTCACHEIMPL_HPP

#include "../config/xqilla_config.h"

#ifdef HAVE_FAXPP

extern "C" {
#include <faxpp/parser.h>
}

#include <xqilla/schema/DocumentCacheImpl.hpp>
#include <xqilla/schema/SchemaValidatorFilter.hpp>

class FaxppDocumentCacheImpl : public DocumentCacheImpl
{
public:
  FaxppDocumentCacheImpl(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* memMgr, XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* xmlgr = 0);
  virtual ~FaxppDocumentCacheImpl();

  virtual Node::Ptr parseDocument(XERCES_CPP_NAMESPACE_QUALIFIER InputSource &srcToUse, DynamicContext *context);

  virtual DocumentCache *createDerivedCache(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager *memMgr) const;

protected:
  FAXPP_Parser *parser_;
  SchemaValidatorFilter validator_;
};

#endif

#endif

