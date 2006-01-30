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

#include "../config/xqilla_config.h"
#include <sstream>

#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xqilla/context/ItemFactory.hpp>

/*static*/ const XMLCh NodeComparison::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

NodeComparison::NodeComparison(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr)
{
}

Result NodeComparison::createResult(DynamicContext* context, int flags) const
{
  return new NodeComparisonResult(this);
}

NodeComparison::NodeComparisonResult::NodeComparisonResult(const NodeComparison *op)
  : _op(op)
{
}

Item::Ptr NodeComparison::NodeComparisonResult::getSingleResult(DynamicContext *context) const
{
	const Node::Ptr arg1 = _op->getNodeParam(0,context);
  if(arg1 == NULLRCP) return 0;
	const Node::Ptr arg2 = _op->getNodeParam(1,context);
  if(arg2 == NULLRCP) return 0;
  
	return (const Item::Ptr)context->getItemFactory()->createBoolean(arg1->equals(arg2), context);
}

std::string NodeComparison::NodeComparisonResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<nodecomparison/>" << std::endl;

  return oss.str();
}
