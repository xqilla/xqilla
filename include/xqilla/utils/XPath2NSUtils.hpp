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

#ifndef _V2NSUTILS_HPP
#define _V2NSUTILS_HPP

#include <xqilla/framework/XQillaExport.hpp>

#include <xercesc/dom/DOMNode.hpp>

class XPath2MemoryManager;

class XQILLA_API XPath2NSUtils
{
public:

  /// Get the proper local name (not null if the node is DOM level 1...) 
  static const XMLCh* getLocalName(const XMLCh* name);

  ///returns the prefix part of a xs:foo string or a zero length string if no prefix
  static const XMLCh* getPrefix(const XMLCh* name, XPath2MemoryManager* memMgr);

  ///form a qualified name from a namespace and a name
  static const XMLCh* qualifyName(const XMLCh* prefix, const XMLCh* name, XPath2MemoryManager* memMgr);

  ///gets the owner element of an attribute, and the parent of any other node
  static XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *getParent(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node);
};

#endif

