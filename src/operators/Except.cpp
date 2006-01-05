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
#include <assert.h>
#include <sstream>

#include <xqilla/operators/Except.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>

/*static*/ const XMLCh Except::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Except::Except(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr)
{
  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED);
  _src.getStaticType().flags = StaticType::NODE_TYPE;
}

Result Except::createResult(DynamicContext* context, int flags) const
{
  Result result(new ExceptResult(this, flags, context));

  if(context->getNodeSetOrdering()==StaticContext::ORDERING_UNORDERED || flags & ASTNode::UNORDERED) {
    return result;
  }
  else {
    return result.sortIntoDocumentOrder(context);
  }
}

Except::ExceptResult::ExceptResult(const Except *op, int flags, DynamicContext *context)
  : ResultImpl(context),
    _op(op),
    _flags(flags),
    _toDo(true),
    _result(0),
    _excpt(0)
{
}

Item::Ptr Except::ExceptResult::next(DynamicContext *context)
{
  if(_toDo) {
    _toDo = false;
    _result = _op->getArgument(0)->collapseTree(context, _flags);
    _excpt = _op->getArgument(1)->collapseTree(context, ASTNode::UNORDERED);
  }

  Item::Ptr item = _result.next(context);
  while(item != NULLRCP) {    

    bool found = false;
    Result except_result(_excpt.createResult(context));
    Item::Ptr except_item;
    while((except_item = except_result.next(context)) != NULLRCP) {
      // Check it's a node
      if(!except_item->isNode()) {
        XQThrow(XPath2ErrorException,X("Except::ExceptResult::next"), X("A parameter of operator 'except' contains an item that is not a node [err:XP0006]"));
      }
      if(((Node*)(const Item*)item)->equals((const Node::Ptr )except_item)) {
        found = true;
        break;
      }
    }

    if(!found) {
      // Check it's a node
      if(!item->isNode()) {
        XQThrow(XPath2ErrorException,X("Except::ExceptResult::next"), X("A parameter of operator 'except' contains an item that is not a node [err:XP0006]"));
      }
      break;
    }

    item = _result.next(context);
  }

  if(item == NULLRCP) {
    _result = 0;
    _excpt = 0;
  }

  return item;
}

std::string Except::ExceptResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<except/>" << std::endl;

  return oss.str();
}
