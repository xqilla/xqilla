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

#include <xqilla/operators/Union.hpp>

#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

/*static*/ const XMLCh Union::name[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

Union::Union(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQOperator(name, args, memMgr),
    sortAdded_(false)
{
}

ASTNode* Union::staticResolution(StaticContext *context)
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

Result Union::createResult(DynamicContext* context, int flags) const
{
  return new UnionResult(this, flags);
}

Union::UnionResult::UnionResult(const Union *op, int flags)
  : _op(op),
    _flags(flags),
    _index(0),
    _result(0)
{
}

Item::Ptr Union::UnionResult::next(DynamicContext *context)
{
  Item::Ptr item = 0;
  while(true) {
    item = _result->next(context);

    if(item == NULLRCP) {
      if(_index > 1) {
        _index = 0;
        return 0;
      }
      else {
        _result = _op->getArgument(_index++)->collapseTree(context, _flags);
      }
    }
    else {
      // Check it's a node
      if(!item->isNode()) {
        XQThrow(XPath2ErrorException,X("Union::UnionResult::next"), X("A parameter of operator 'union' contains an item that is not a node [err:XP0006]"));
      }

      return item;
    }
  }

  return 0;
}

std::string Union::UnionResult::asString(DynamicContext *context, int indent) const
{
  std::ostringstream oss;
  std::string in(getIndent(indent));

  oss << in << "<union/>" << std::endl;

  return oss.str();
}
