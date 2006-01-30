/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#ifndef _PRECEDINGAXIS_HPP
#define _PRECEDINGAXIS_HPP

#include <xqilla/axis/Axis.hpp>

/**
This class implements the PrecedingAxis axis as defined by the XPath spec
*/
class XQILLA_API PrecedingAxis : public Axis
{
public:
  PrecedingAxis(const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *contextNode, const Node *nodeObj,
       const NodeTest *nodeTest, const AxisNodeFactory &factory = Axis::gNodeImplFactory);
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *nextNode(DynamicContext *context);
  std::string asString(DynamicContext *context, int indent) const;
private:
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *parent_;
  const XERCES_CPP_NAMESPACE_QUALIFIER DOMNode *node_;
};


#endif

