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
#include <assert.h>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

const XMLCh FunctionRoot::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionRoot::minArgs = 0;
const unsigned int FunctionRoot::maxArgs = 1;

/**
 * fn:root() as node()
 * fn:root($arg as node()?) as node()?
**/

FunctionRoot::FunctionRoot(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "node()?", args, memMgr)
{
}

ASTNode* FunctionRoot::staticResolution(StaticContext *context) {
  if(!_args.empty() && (*_args.begin())->getType()==ASTNode::CONTEXT_ITEM)
      _args.clear();
  return resolveArguments(context);
}

ASTNode *FunctionRoot::staticTyping(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  _src.clear();

  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED |
                     StaticResolutionContext::PEER | StaticResolutionContext::SAMEDOC | StaticResolutionContext::ONENODE);
  _src.getStaticType().flags = StaticType::NODE_TYPE;

  if(_args.empty()) {
    _src.contextItemUsed(true);

    if(context->getContextItemType().isType(StaticType::DOCUMENT_TYPE)) {
      ASTNode *result = new (mm) XQContextItem(mm);
      result->setLocationInfo(this);
      return result->staticTyping(context);
    }
  }
  else {
    _args[0] = _args[0]->staticTyping(context);
    _src.add(_args[0]->getStaticResolutionContext());

    if(_args[0]->getStaticResolutionContext().getStaticType().isType(StaticType::DOCUMENT_TYPE)) {
      return _args[0];
    }
  }

  return this;
}

Sequence FunctionRoot::createSequence(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Node::Ptr node = NULL;
  if(getNumArgs() == 1)
  {
    Sequence arg1=getParamNumber(1,context)->toSequence(context);
    if(arg1.isEmpty())
      return Sequence(memMgr);
    node = (const Node::Ptr )arg1.first();
  }
  else
  {
    const Item::Ptr item = context->getContextItem();
    if(item==NULLRCP)
        XQThrow(FunctionException, X("FunctionRoot::createSequence"),X("Undefined context item in fn:root [err:XPDY0002]"));
    if(!item->isNode())
        XQThrow(FunctionException, X("FunctionRoot::createSequence"),X("The context item is not a node [err:XPTY0004]"));
    node = (const Node::Ptr )item;
  }
  return Sequence(node->root(context), memMgr);
}
