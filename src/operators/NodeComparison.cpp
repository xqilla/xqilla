/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2006
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
  return new NodeComparisonResult(this, context);
}

NodeComparison::NodeComparisonResult::NodeComparisonResult(const NodeComparison *op, DynamicContext *context)
  : SingleResult(context),
    _op(op)
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
