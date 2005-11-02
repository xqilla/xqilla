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

#ifndef _NAMESPACEAXIS_HPP
#define _NAMESPACEAXIS_HPP

#include <set>

#include <xqilla/axis/Axis.hpp>

#include <xercesc/dom/DOMNamedNodeMap.hpp>

class PATHAN_EXPORT NamespaceAxis : public Axis
{
public:
  NamespaceAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, DynamicContext *context,
       const AxisNodeFactory &factory = Axis::gNodeImplFactory);

  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *nextNode();
  std::string asString(DynamicContext *context, int indent) const;

private:
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node_;
  XERCES_CPP_NAMESPACE_QUALIFIER DOMNamedNodeMap *nodeMap_;
  unsigned int i_;

  typedef std::set<const XMLCh*, XMLChSort> DoneSet;
  DoneSet done_;
};

#endif

