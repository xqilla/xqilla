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

#include "../../config/xqilla_config.h"
#include "XQillaBuilderImpl.hpp"
#include "XQillaDocumentImpl.hpp"
#include "XQillaXMLGrammarPoolImpl.hpp"

#include <xercesc/framework/XMLGrammarPool.hpp>
#include <xercesc/framework/XMLValidator.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/dom/impl/DOMDocumentImpl.hpp>
#include <xercesc/framework/XMLGrammarDescription.hpp>
#include <xercesc/framework/XMLSchemaDescription.hpp>
#include <xercesc/internal/XMLScanner.hpp>
#include <xercesc/internal/XMLScannerResolver.hpp>

#if _XERCES_VERSION >= 30000
#include <xercesc/framework/Wrapper4DOMLSInput.hpp>
#else
#include <xercesc/framework/Wrapper4DOMInputSource.hpp>
#endif

const XMLCh XQillaBuilderImpl::gXQilla[] =   // Points to "XPath2"
{XERCES_CPP_NAMESPACE_QUALIFIER chLatin_X, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_P, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_2, XERCES_CPP_NAMESPACE_QUALIFIER chNull};




XQillaBuilderImpl::XQillaBuilderImpl(XERCES_CPP_NAMESPACE_QUALIFIER XMLValidator* const   valToAdopt,
                                     XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const  manager,
                                     XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool* const gramPool,
                                     bool adoptGramPool)
  :
#if _XERCES_VERSION >= 30000
	DOMLSParserImpl(valToAdopt, manager, gramPool),
#else
	DOMBuilderImpl(valToAdopt, manager, gramPool),
#endif
  gramPool_(adoptGramPool ? gramPool : 0)
{
}

XQillaBuilderImpl::~XQillaBuilderImpl()
{
  delete gramPool_;
}

// ---------------------------------------------------------------------------
//  DOMBuilderImpl: Parsing methods
// ---------------------------------------------------------------------------
#if _XERCES_VERSION >= 30000
XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parse(const XERCES_CPP_NAMESPACE_QUALIFIER DOMLSInput* source)
{
    initParser();
    
    XERCES_CPP_NAMESPACE_QUALIFIER Wrapper4DOMLSInput isWrapper((XERCES_CPP_NAMESPACE_QUALIFIER DOMLSInput*)source, false, getMemoryManager());

    AbstractDOMParser::parse(isWrapper);

    return getDocumentAndAddGrammar();

}
#else
XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parse(const XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource& source)
{
    initParser();
    
    XERCES_CPP_NAMESPACE_QUALIFIER Wrapper4DOMInputSource isWrapper((XERCES_CPP_NAMESPACE_QUALIFIER DOMInputSource*) &source, false, getMemoryManager());

    AbstractDOMParser::parse(isWrapper);

    return getDocumentAndAddGrammar();

}
#endif

void XQillaBuilderImpl::initParser() {
    //set it here in case someone has messed it up.
#if _XERCES_VERSION >= 30000
    setParameter(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesParserUseDocumentFromImplementation, (void*)gXQilla);
#else
    setProperty(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesParserUseDocumentFromImplementation, (void*)gXQilla);
#endif
}


XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::getDocumentAndAddGrammar() {
    XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument *doc = 0;

#if _XERCES_VERSION >= 30000
    if ((bool)getParameter(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesUserAdoptsDOMDocument))
#else
    if (getFeature(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXercesUserAdoptsDOMDocument))
#endif
        doc = adoptDocument();
    else
        doc = getDocument();
    if(doc == 0) {
      return 0;
    }

    //we copy this gramamr and reset the parser one in the process.
    XERCES_CPP_NAMESPACE_QUALIFIER XMLGrammarPool *oldGrPool = getGrammarResolver()->getGrammarPool();
    XQillaXMLGrammarPoolImpl *gr = new (getMemoryManager()) XQillaXMLGrammarPoolImpl(getMemoryManager());

    // manually copy string pool contents to work around XERCESC-1798.
    const XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool* src = oldGrPool->getURIStringPool();
    XERCES_CPP_NAMESPACE_QUALIFIER XMLStringPool* dst = gr->getURIStringPool();

    for (unsigned int i = 1; i < src->getStringCount() + 1; ++i)
        dst->addOrFind (src->getValueForId(i));

    XERCES_CPP_NAMESPACE_QUALIFIER RefHashTableOfEnumerator< XERCES_CPP_NAMESPACE_QUALIFIER Grammar> enumerator
        = oldGrPool->getGrammarEnumerator();

    while(enumerator.hasMoreElements()) {
        XERCES_CPP_NAMESPACE_QUALIFIER Grammar &g = enumerator.nextElement();
        gr->cacheGrammar(oldGrPool->orphanGrammar(g.getGrammarDescription()->getGrammarKey()));
    }

    ((XQillaDocumentImpl*)doc)->setGrammarPool(gr, true);

    return doc;
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parseURI(const XMLCh* const systemId)
{
    initParser();
    AbstractDOMParser::parse(systemId);
    return getDocumentAndAddGrammar();
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMDocument* XQillaBuilderImpl::parseURI(const char* const systemId)
{
    initParser();
    AbstractDOMParser::parse(systemId);
    return getDocumentAndAddGrammar();
}
