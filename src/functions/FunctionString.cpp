/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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
#include <xqilla/functions/FunctionString.hpp>
#include <assert.h>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/exceptions/FunctionException.hpp>

const XMLCh FunctionString::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionString::minArgs = 0;
const unsigned int FunctionString::maxArgs = 1;

/**
 * fn:string() as xs:string
 * fn:string($arg as item()?) as xs:string
**/

FunctionString::FunctionString(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "item()?", args, memMgr)
{
}

ASTNode* FunctionString::staticResolution(StaticContext *context) {
  if(!_args.empty() && (*_args.begin())->getType()==ASTNode::CONTEXT_ITEM)
      _args.clear();
  return resolveArguments(context);
}

ASTNode *FunctionString::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.getStaticType().flags = StaticType::STRING_TYPE;
  if(_args.empty()) {
    _src.contextItemUsed(true);
  }
  return calculateSRCForArguments(context);
}

Sequence FunctionString::createSequence(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Item::Ptr item = 0;
  if(getNumArgs() == 0) {
    item = context->getContextItem();
    if(item == NULLRCP) {
      XQThrow(FunctionException, X("FunctionString::createSequence"),
              X("Undefined context item in fn:string [err:XPDY0002]"));
    }
  }
  else {
    item = getParamNumber(1, context)->next(context);
  }

  return Sequence(string(item, context), memMgr);
}

Item::Ptr FunctionString::string(const Item::Ptr &item, DynamicContext *context)
{
  if(item == NULLRCP) {
    return context->getItemFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context);
  }
  else if(item->isNode()) {
    return context->getItemFactory()->createString(((Node*)item.get())->dmStringValue(context), context);
  }
  else if(item->isAtomicValue()) {
    return ((AnyAtomicType*)item.get())->castAs(AnyAtomicType::STRING, context);
  }
  assert(false);
  return 0;
}
