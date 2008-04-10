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
#include <xqilla/functions/FunctionNumber.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/exceptions/XPath2TypeMatchException.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <assert.h>

XERCES_CPP_NAMESPACE_USE

const XMLCh FunctionNumber::name[] = {
  chLatin_n, chLatin_u, chLatin_m, 
  chLatin_b, chLatin_e, chLatin_r, 
  chNull 
};
const unsigned int FunctionNumber::minArgs = 0;
const unsigned int FunctionNumber::maxArgs = 1;

/**
 * fn:number() as xs:double
 * fn:number($arg as anyAtomicType?) as xs:double
**/

FunctionNumber::FunctionNumber(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "anyAtomicType?", args, memMgr)
{
}

ASTNode* FunctionNumber::staticResolution(StaticContext *context)
{
  XPath2MemoryManager *mm = context->getMemoryManager();

  if(_args.empty()) {
    XQContextItem *ci = new (mm) XQContextItem(mm);
    ci->setLocationInfo(this);
    _args.push_back(ci);
  }

  return resolveArguments(context);
}

ASTNode *FunctionNumber::staticTyping(StaticContext *context)
{
  _src.clear();
  _src.getStaticType() = StaticType::DOUBLE_TYPE;
  return calculateSRCForArguments(context);
}

Sequence FunctionNumber::createSequence(DynamicContext* context, int flags) const
{
  return Sequence(number((AnyAtomicType*)getParamNumber(1, context)->next(context).get(), context),
                  context->getMemoryManager());
}

Item::Ptr FunctionNumber::number(const AnyAtomicType::Ptr &item, DynamicContext *context)
{
  if(item.isNull()) {
    return context->getItemFactory()->createDouble(Numeric::NaN_string, context);
  }
  else {
    try {
      return item->castAs(AnyAtomicType::DOUBLE, 0, 0, context);
    } catch (XPath2TypeCastException &e) {
      return context->getItemFactory()->createDouble(Numeric::NaN_string, context);
    }   
  }
}
