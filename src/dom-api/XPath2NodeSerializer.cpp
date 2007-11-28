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

#include "../config/xqilla_config.h"
#include "XPath2NodeSerializer.hpp"

#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/framework/XMLFormatter.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XercesDefs.hpp>

XPath2NodeSerializer::XPath2NodeSerializer(XERCES_CPP_NAMESPACE_QUALIFIER MemoryManager* const manager) : XERCES_CPP_NAMESPACE_QUALIFIER DOMWriterImpl(manager) {
}
  
XPath2NodeSerializer::~XPath2NodeSerializer() {
  // nothing to do
}


bool XPath2NodeSerializer::customNodeSerialize(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode* const nodeToWrite, int level) {

  switch (nodeToWrite->getNodeType ()) {
    case XERCES_CPP_NAMESPACE_QUALIFIER DOMXPathNamespace::XPATH_NAMESPACE_NODE: 
      {
        const XMLCh* localName = nodeToWrite->getLocalName();
        const XMLCh* namespaceURI = nodeToWrite->getNamespaceURI();

        *fFormatter << XERCES_CPP_NAMESPACE_QUALIFIER XMLFormatter::NoEscapes
                    << XERCES_CPP_NAMESPACE_QUALIFIER chOpenSquare
                    << localName
                    << XERCES_CPP_NAMESPACE_QUALIFIER chEqual 
                    << XERCES_CPP_NAMESPACE_QUALIFIER chDoubleQuote
                    << namespaceURI
                    << XERCES_CPP_NAMESPACE_QUALIFIER chDoubleQuote 
                    << XERCES_CPP_NAMESPACE_QUALIFIER chCloseSquare;
       
        return true;
        break;

      }
    default: 
      {
        return false;
        break;
      }
  }

}
