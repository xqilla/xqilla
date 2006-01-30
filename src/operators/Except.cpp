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
#include <assert.h>
#include <sstream>

#include <xqilla/operators/Except.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

/*static*/ const XMLCh Except::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Except::Except(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr),
    sortAdded_(false)
{
}

ASTNode* Except::staticResolution(StaticContext *context)
{
  if(!sortAdded_) {
    sortAdded_ = true;
    // Wrap ourselves in a document order sort
    XPath2MemoryManager *mm = context->getMemoryManager();
    return (new (mm) XQDocumentOrder(this, mm))->staticResolution(context);
  }

  _src.getStaticType().flags = StaticType::NODE_TYPE;

  return resolveASTNodes(_args, context, true);
}

Result Except::createResult(DynamicContext* context, int flags) const
{
  return new ExceptResult(this, flags);
}

Except::ExceptResult::ExceptResult(const Except *op, int flags)
  : _op(op),
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
    _excpt = _op->getArgument(1)->collapseTree(context);
  }

  Item::Ptr item = _result->next(context);
  while(item != NULLRCP) {    

    bool found = false;
    Result except_result(_excpt.createResult(context));
    Item::Ptr except_item;
    while((except_item = except_result->next(context)) != NULLRCP) {
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

    item = _result->next(context);
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
