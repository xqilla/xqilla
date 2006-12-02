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
#include <xqilla/update/FunctionPut.hpp>
#include <xqilla/update/PendingUpdateList.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xercesc/util/XMLString.hpp>

#include <xercesc/util/XMLUri.hpp>

#if defined(XERCES_HAS_CPP_NAMESPACE)
XERCES_CPP_NAMESPACE_USE
#endif

const XMLCh FunctionPut::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionPut::minArgs = 1;
const unsigned int FunctionPut::maxArgs = 2;

/**
 * fn:doc($uri as xs:string?) as document?
 **/
FunctionPut::FunctionPut(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "node(), string?", args, memMgr),
    baseURI_(0)
{
}

ASTNode* FunctionPut::staticResolution(StaticContext *context)
{
  baseURI_ = context->getBaseURI();
  return resolveArguments(context);
}

ASTNode *FunctionPut::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.forceNoFolding(true);
  _src.updating(true);
  return calculateSRCForArguments(context);
}

PendingUpdateList FunctionPut::createUpdateList(DynamicContext *context) const
{
  Node::Ptr node = (Node*)getParamNumber(1,context)->next(context).get();

  if(node->dmNodeKind() != Node::document_string &&
     node->dmNodeKind() != Node::element_string) {
    XQThrow(FunctionException, X("FunctionPut::collapseTreeInternal"),
            X("The argument to fn:put is not a document or element node [err:TBD]"));
  }

  const XMLCh *uriArg = 0;
  if(getNumArgs() == 2) {
    Item::Ptr uri = getParamNumber(2,context)->next(context);
    if(uri.notNull())
      uriArg = uri->asString(context);
  }
  else {
    Sequence seq = node->dmDocumentURI(context);
    if(!seq.isEmpty())
      uriArg = seq.item(0)->asString(context);
  }

  if(uriArg == 0)
    XQThrow(FunctionException, X("FunctionPut::collapseTreeInternal"),
            X("The uri argument to fn:put is empty [err:TBD]"));

  if(!baseURI_)
    XQThrow(FunctionException, X("FunctionPut::collapseTreeInternal"),
            X("Base uri undefined in the static context [err:FONS0005]"));

  Item::Ptr anyURI;
  try {
    XMLUri base(baseURI_);
    XMLUri resolved(&base, uriArg);

    anyURI = context->getItemFactory()->createAnyURI(resolved.getUriText(), context);
  }
  catch(XQException &e) {
    XQThrow(FunctionException, X("FunctionPut::collapseTreeInternal"),
            X("The argument to fn:put is not a valid xs:anyURI [err:TBD]"));
  }

  return PendingUpdate(PendingUpdate::PUT, node, anyURI, this);
}
