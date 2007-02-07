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

#include "../config/xqilla_config.h"
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/utils/XStr.hpp>

#include <xercesc/dom/DOMAttr.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/dom/DOMNamedNodeMap.hpp>
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>

const XMLCh* XPath2NSUtils::getLocalName(const XMLCh* name)
{
  unsigned int len=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(name);

  for(unsigned int i = 0; i < len; i++) {
    if(name[i] == XERCES_CPP_NAMESPACE_QUALIFIER chColon) {
      return name+i+1;
    }
  }
  return name;
}

const XMLCh* XPath2NSUtils::getPrefix(const XMLCh* name, XPath2MemoryManager* memMgr)
{
  unsigned int len=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(name);
  
  for(unsigned int i = 0; i < len; i++) {
    if(name[i] == XERCES_CPP_NAMESPACE_QUALIFIER chColon) {
      return XPath2Utils::subString(name, 0, i, memMgr);
    }
  }
  return XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
}

const XMLCh* XPath2NSUtils::qualifyName(const XMLCh* prefix, const XMLCh* name, XPath2MemoryManager* memMgr)
{
  if (prefix != NULL) {
    XMLCh colon[2] = {XERCES_CPP_NAMESPACE_QUALIFIER chColon, XERCES_CPP_NAMESPACE_QUALIFIER chNull};
    return XPath2Utils::concatStrings(prefix, colon, name, memMgr);
  } else {
    return name;
  }
}

XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *XPath2NSUtils::getParent(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node)
{
  if(node->getNodeType() == XERCES_CPP_NAMESPACE_QUALIFIER DOMNode::ATTRIBUTE_NODE) {
    return (static_cast<const XERCES_CPP_NAMESPACE_QUALIFIER DOMAttr *>(node))->getOwnerElement();
  }
  else {
    return node->getParentNode();
  }
}

