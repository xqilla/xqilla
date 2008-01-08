/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
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
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

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

  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
                     StaticAnalysis::PEER | StaticAnalysis::SAMEDOC | StaticAnalysis::ONENODE);
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
    _src.add(_args[0]->getStaticAnalysis());

    if(_args[0]->getStaticAnalysis().isUpdating()) {
      XQThrow(StaticErrorException,X("FunctionRoot::staticTyping"),
              X("It is a static error for an argument to a function "
                "to be an updating expression [err:XUST0001]"));
    }

    if(_args[0]->getStaticAnalysis().getStaticType().isType(StaticType::DOCUMENT_TYPE)) {
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
