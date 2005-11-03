/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
 *
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/dom-api/XPath2NodeSerializer.hpp>

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
