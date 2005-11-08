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

#ifndef _V2NSUTILS_HPP
#define _V2NSUTILS_HPP

#include <xqilla/framework/XQillaExport.hpp>
#include <vector>

#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMElement.hpp>
#include <xercesc/util/XercesDefs.hpp>
#include <map>
#include <xqilla/utils/XMLChCompare.hpp>

class DynamicContext;
class Sequence;
class XPath2MemoryManager;

typedef std::map<const XMLCh* , const XMLCh* , XMLChSort> namespaceMapType;

class XQILLA_API XPath2NSUtils
{
public:

  /// Get the proper local name (not null if the node is DOM level 1...) 
  static const XMLCh* getLocalName(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);
  static const XMLCh* getLocalName(const XMLCh* name);

  ///returns the prefix part of a xs:foo string or a zero length string if no prefix
  static const XMLCh* getPrefix(const XMLCh* name, XPath2MemoryManager* memMgr);
  ///does it's best to work out a prefix for the given node. Returns empty string if no prefix.
  static const XMLCh* getPrefix(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node, const DynamicContext* context);

  ///returns the element node that is the parent or owner of node
  static const XERCES_CPP_NAMESPACE_QUALIFIER DOMElement *returnOwnerElement(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);

  ///form a qualified name from a namespace and a name
  static const XMLCh* qualifyName(const XMLCh* prefix, const XMLCh* name, XPath2MemoryManager* memMgr);
  /**Gives you a QName for the node given. Namespace resolving is done via
     the context */
  static const XMLCh* qualifyName(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node, const DynamicContext* context);

  static const XMLCh* getExpandedName(const XMLCh* namespaceURI, const XMLCh* name, XPath2MemoryManager* memMgr);

  ///gets the owner element of an attribute, and the parent of any other node
  static XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *getParent(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);

	//Code below previously used in XPathNSResolver

    ///looks up the tree at the namespace attrs and the perfixs of the elements and returns a map of prefix->uri 
  static namespaceMapType createNamespaceMap(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, XPath2MemoryManager* memMgr);

    ///helper method for createNamespaceMap
  static void addBindings(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *AttrNode, namespaceMapType *namespaceMap, XPath2MemoryManager* memMgr);

  static std::vector< std::pair< XMLCh*, XMLCh*> > getBindingsForNode(XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);
};

#endif

