/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
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
#include <xqilla/functions/FunctionNumber.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/Numeric.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2TypeCastException.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <assert.h>

const XMLCh FunctionNumber::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_b, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
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
  _src.getStaticType().flags = StaticType::NUMERIC_TYPE;
}

ASTNode* FunctionNumber::staticResolution(StaticContext *context) {
  if(_args.empty()) {
    _src.contextItemUsed(true);
  }
  return resolveASTNodes(_args, context, !_args.empty());
}

Sequence FunctionNumber::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Item::Ptr item = 0;
	if(getNumArgs() == 0) {
		item = context->getContextItem();
    if(item == NULLRCP) {
      XQThrow(FunctionException, X("FunctionNumber::collapseTreeInternal"),
               X("Undefined context item in fn:number [err:FONC0001]"));
    }
    // Treat like the function parameter was "."
    Sequence ci_seq(item, memMgr);
    Result ci_result(ci_seq);

    StaticType stype;
    stype.flags = StaticType::NODE_TYPE;
    item = ci_result.convertFunctionArg((*_paramDecl)[0], stype, context).next(context);
  }
	else {
		item = getParamNumber(1, context).next(context);
	}
  
  return Sequence(number((const AnyAtomicType::Ptr )item, context), memMgr);
}

Item::Ptr FunctionNumber::number(const AnyAtomicType::Ptr &item, DynamicContext *context)
{
  if(item == NULLRCP) {
    return (const Item::Ptr)context->getItemFactory()->createDouble(Numeric::NaN_string, context);
  }
  else {
    try {
      return (const Item::Ptr)item->castAs(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                     XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE, context);
    } catch (XPath2TypeCastException &e) {
      return (const Item::Ptr)context->getItemFactory()->createDouble(Numeric::NaN_string, context);
    }   
  }
}
