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
#include <xqilla/functions/FunctionCollection.hpp>

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/runtime/Sequence.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATAnyURIOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/context/ItemFactory.hpp>

const XMLCh FunctionCollection::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionCollection::minArgs = 0;
const unsigned int FunctionCollection::maxArgs = 1;

/**
 * fn:collection() as node()*
 * fn:collection($arg as xs:string?) as node()*
**/

FunctionCollection::FunctionCollection(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "string?", args, memMgr)
{
}

ASTNode* FunctionCollection::staticResolution(StaticContext *context)
{
  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::PEER | StaticResolutionContext::SUBTREE);
  _src.getStaticType().flags = StaticType::NODE_TYPE;
  _src.availableCollectionsUsed(true);
  return resolveASTNodes(_args, context, false);
}

Sequence FunctionCollection::collapseTreeInternal(DynamicContext* context, int flags) const
{
  //args 0 - URI to resolve
  if(getNumArgs()==0)
      return context->resolveDefaultCollection();

  Sequence arg = getParamNumber(1, context);
  if(arg.isEmpty())
    return Sequence(context->getMemoryManager());
  const XMLCh* currentUri = arg.first()->asString(context);

  try {
    context->getItemFactory()->createAnyURI(currentUri, context);
  } catch(XPath2ErrorException &e) {
    XQThrow(FunctionException, X("FunctionCollection::collapseTreeInternal"), X("Invalid URI format [err:FODC0002]"));
  }

  return context->resolveCollection(currentUri);
}
