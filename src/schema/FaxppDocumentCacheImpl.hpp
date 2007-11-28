/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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

