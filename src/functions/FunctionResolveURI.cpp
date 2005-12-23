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
#include <assert.h>
#include <xqilla/functions/FunctionResolveURI.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUri.hpp>

const XMLCh FunctionResolveURI::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_v, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionResolveURI::minArgs = 1;
const unsigned int FunctionResolveURI::maxArgs = 2;

/**
 * fn:resolve-uri($relative as xs:string?) as xs:anyURI?
 * fn:resolve-uri($relative as xs:string?, $base as xs:string) as xs:anyURI?
 **/

FunctionResolveURI::FunctionResolveURI(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string", args, memMgr) 
{
}

Sequence FunctionResolveURI::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();
  Sequence relativeSeq = getParamNumber(1, context);
  if(relativeSeq.isEmpty())
    return Sequence(memMgr);

  const XMLCh* baseURI;

  try {

    if (getNumArgs() == 1) 
    {
      baseURI = context->getBaseURI();
      if (!baseURI)
        XQThrow(FunctionException, X("FunctionResolveURI::collapseTreeInternal"), X("Base uri undefined in the static context [err:FONS0005]"));
    }
    else 
    {
      Sequence baseSeq = getParamNumber(2, context);
      baseURI = baseSeq.first()->asString(context);
    }

    const XMLCh* relativeURI = relativeSeq.first()->asString(context);
    if(*relativeURI==0)   // empty string, return base
      return Sequence(context->getItemFactory()->createAnyURI(baseURI, context), memMgr); 

    try {
      context->getItemFactory()->createAnyURI(relativeURI, context);
    } catch(InvalidLexicalSpaceException &e) {
      XQThrow(FunctionException, X("FunctionResolveURI::collapseTreeInternal"), X("Invalid argument to resolve-uri [err:FORG0002]"));
    }
  
    try {
      XERCES_CPP_NAMESPACE_QUALIFIER XMLUri base(baseURI);

      XERCES_CPP_NAMESPACE_QUALIFIER XMLUri full(&base, relativeURI);

      const XMLCh* fullURI = getMemoryManager()->getPooledString(full.getUriText());    
      return Sequence(context->getItemFactory()->createAnyURI(fullURI, context), memMgr); 

    } catch(InvalidLexicalSpaceException &e){
      XQThrow(FunctionException, X("FunctionResolveURI::collapseTreeInternal"), X("Invalid argument to resolve-uri [err:FORG0002]"));
    }

  } catch(XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e) {
    //if can't build, assume its cause there was a relative URI given
    XQThrow(FunctionException, X("FunctionResolveURI::collapseTreeInternal"), X("Relative URI base argument to resolve-uri [err:FORG0009]"));
  }
  
  //should not get here
  assert(0);

}
