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
#include <xqilla/functions/FunctionIdref.hpp>

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include "../exceptions/InvalidLexicalSpaceException.hpp"
#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/framework/XPath2MemoryManagerImpl.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/context/ItemFactory.hpp>

const XMLCh FunctionIdref::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_f, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionIdref::minArgs = 1;
const unsigned int FunctionIdref::maxArgs = 2;

/**
 * fn:idref($arg as xs:string*) as node()*
 * fn:idref($arg as xs:string*, $node as node()) as node()*
 **/

FunctionIdref::FunctionIdref(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "string*, node()", args, memMgr)
{
}

ASTNode* FunctionIdref::staticResolution(StaticContext *context) {
  _src.getStaticType().flags = StaticType::NODE_TYPE;
  if(_args.size()==1)
    _src.contextItemUsed(true);
  return resolveASTNodes(_args, context, _args.size()!=1);
}

Sequence FunctionIdref::collapseTreeInternal(DynamicContext* context, int flags) const
{
  Node::Ptr ctxNode;
  if(getNumArgs() == 2)
  {
    Sequence arg=getParamNumber(2,context);
    ctxNode=arg.first();
  }
  else
  {
    const Item::Ptr item = context->getContextItem();
    if(item==NULLRCP)
      XQThrow(FunctionException, X("FunctionIdref::collapseTreeInternal"),X("Undefined context item in fn:idref [err:FONC0001]"));
    if(!item->isNode())
      XQThrow(FunctionException, X("FunctionIdref::collapseTreeInternal"),X("The context item is not a node [err:XPTY0006]"));
    ctxNode=item;
  }

  Node::Ptr root = FunctionRoot::root(ctxNode, context);

  if(root->dmNodeKind() != Node::document_string) {
    XQThrow(FunctionException,X("FunctionIdref::collapseTreeInternal"), X("Current context doesn't belong to a document [err:FODC0001]"));
  }
    
  Sequence strings = getParamNumber(1, context);
	if(strings.isEmpty())
		return Sequence(context->getMemoryManager());

  std::vector<const XMLCh*> values;
    
  //get the list of idref values we're looking for by iterating over each string in the sequence
  for (Sequence::iterator stringIt = strings.begin(); stringIt != strings.end(); ++stringIt) {
    const XMLCh *str = (*stringIt)->asString(context);

    //for each string check that it is lexically a xs:ID, if not ignore it
    bool validID = true;
    try {
      context->getItemFactory()->createStringOrDerived(XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgIDString, str, context);
    } catch (InvalidLexicalSpaceException &e) {
      validID = false;
    }
    if (validID) {
      values.push_back(str);
    }
  }

  Sequence result(context->getMemoryManager());

  std::vector<Result> resultStack;
  resultStack.push_back(root->dmChildren(context));
  Node::Ptr child = resultStack.back().next(context);
  while(child.notNull()) {
    if(child->dmNodeKind() == Node::element_string) {
      if(child->dmIsIdRefs(context)->isTrue()) {
        // child is of type xs:ID
        const XMLCh* id = child->dmStringValue(context);
        std::vector<const XMLCh*> vals = XPath2Utils::getVal(id, context->getMemoryManager());
        for(std::vector<const XMLCh*>::iterator val = vals.begin();
            val != vals.end(); ++val) {
          if(XPath2Utils::containsString(values, *val)) {
            result.addItem(child);
            break;
          }
        }
      }

      Result attrs = child->dmAttributes(context);
      Node::Ptr att;
      while((att = (Node::Ptr)attrs.next(context)).notNull()) {
        if(att->dmIsIdRefs(context)->isTrue()) {
          // att is of type xs:ID
          const XMLCh* id = att->dmStringValue(context);
          std::vector<const XMLCh*> vals = XPath2Utils::getVal(id, context->getMemoryManager());
          for(std::vector<const XMLCh*>::iterator val = vals.begin();
              val != vals.end(); ++val) {
            if(XPath2Utils::containsString(values, *val)) {
              result.addItem(att);
              break;
            }
          }
        }
      }
    }

    resultStack.push_back(child->dmChildren(context));
    while(!resultStack.empty() && (child = resultStack.back().next(context)).isNull()) {
      resultStack.pop_back();
    }
  }

  return result;
}
