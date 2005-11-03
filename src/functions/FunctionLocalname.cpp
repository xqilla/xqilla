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
 * Please see the file LICENSE for more information.
 *
 * $Id$
 */

#include "../config/pathan_config.h"
#include <assert.h>
#include <xqilla/functions/FunctionLocalname.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xqilla/items/Node.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>

const XMLCh FunctionLocalname::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chDash, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionLocalname::minArgs = 0;
const unsigned int FunctionLocalname::maxArgs = 1;

/**
 * fn:local-name() as xs:string
 * fn:local-name($arg as node()?) as xs:string
**/

FunctionLocalname::FunctionLocalname(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "node()?", args, memMgr)
{
}

ASTNode* FunctionLocalname::staticResolution(StaticContext *context) {
  if(_args.empty()) {
    _src.contextItemUsed(true);
  }
  return resolveASTNodes(_args, context, !_args.empty());
}

Sequence FunctionLocalname::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  Node::Ptr ctxNode;
  if(getNumArgs() == 1) {
    Sequence arg=getParamNumber(1,context);
    if(arg.isEmpty())
      return Sequence(context->getPathanFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context), memMgr);
    ctxNode=arg.first();
  }
  else {
    const Item::Ptr item = context->getContextItem();
    if(item==NULLRCP)
      DSLthrow(FunctionException, X("FunctionLocalName::collapseTreeInternal"),X("Undefined context item in fn:local-name [err:FONC0001]"));
    if(!item->isNode())
      DSLthrow(FunctionException, X("FunctionLocalName::collapseTreeInternal"),X("The context item is not a node [err:XPTY0006]"));
    ctxNode=item;
	}

  ATQNameOrDerived::Ptr name = ctxNode->dmNodeName(context);
  if(name.notNull())
    return Sequence(context->getPathanFactory()->createString(((const ATQNameOrDerived*)name.get())->getName(), context), memMgr);

  return Sequence(context->getPathanFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context), memMgr);
}





