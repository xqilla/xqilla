/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */
#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionDoc.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/context/URIResolver.hpp>
#include <xqilla/items/ATAnyURIOrDerived.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/ast/StaticResolutionContext.hpp>
#include <xqilla/context/PathanFactory.hpp>
#include <xercesc/util/XMLString.hpp>

const XMLCh FunctionDoc::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionDoc::minArgs = 1;
const unsigned int FunctionDoc::maxArgs = 1;

/**
 * fn:doc($uri as xs:string?) as document?
 **/
FunctionDoc::FunctionDoc(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : DataItemFunction(name, minArgs, maxArgs, "string?", args, memMgr)
{
}

DataItem* FunctionDoc::staticResolution(StaticContext *context)
{
  _src.setProperties(StaticResolutionContext::DOCORDER | StaticResolutionContext::GROUPED | StaticResolutionContext::PEER | StaticResolutionContext::SUBTREE | StaticResolutionContext::ONENODE);
  _src.getStaticType().flags = StaticResolutionContext::NODE_TYPE;
  _src.availableDocumentsUsed(true);
  return resolveDataItems(_args, context, false);
}

Sequence FunctionDoc::collapseTreeInternal(DynamicContext* context, int flags) const {
  Sequence uriArg = getParamNumber(1,context);
  
  if (uriArg.isEmpty()) {
    return Sequence(context->getMemoryManager());
  }
  
  const XMLCh* uri = uriArg.first()->asString(context);
  // on Windows, we can have URIs using \ instead of /; let's normalize them
  XMLCh backSlash[]={ XERCES_CPP_NAMESPACE_QUALIFIER chBackSlash, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::findAny(uri,backSlash))
  {
	  XMLCh* newUri=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::replicate(uri,context->getMemoryManager());
	  for(unsigned int i=0;i<XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(newUri);i++)
		  if(newUri[i]==XERCES_CPP_NAMESPACE_QUALIFIER chBackSlash)
			  newUri[i]=XERCES_CPP_NAMESPACE_QUALIFIER chForwardSlash;
	  uri=newUri;
  }
  try {
    context->getPathanFactory()->createAnyURI(uri, context);
  } catch(XPath2ErrorException &e) {
    DSLthrow(FunctionException, X("FunctionDoc::collapseTreeInternal"), X("Invalid argument to fn:doc function"));
  }

  try {
    return context->resolveDocument(uri);
  } 
  //TODO:  once DocumentCacheImpl can throw different errors, we should be able to throw the correct corresponding error messages.
  catch(XMLParseException &e) {
    DSLthrow(FunctionException, X("FunctionDoc::collapseTreeInternal"), e.getError());
  }
	return Sequence(context->getMemoryManager());
}
