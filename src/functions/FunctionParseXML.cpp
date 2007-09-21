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
#include "FunctionParseXML.hpp"
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XMLParseException.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/MemBufInputSource.hpp>

XERCES_CPP_NAMESPACE_USE;

const XMLCh FunctionParseXML::name[] = {
  chLatin_p, chLatin_a, chLatin_r, chLatin_s, chLatin_e, chDash, chLatin_x, chLatin_m, chLatin_l, chNull 
};
const unsigned int FunctionParseXML::minArgs = 1;
const unsigned int FunctionParseXML::maxArgs = 1;

/**
 * xqilla:parse-xml($xml as xs:string?) as document?
 **/
FunctionParseXML::FunctionParseXML(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQillaFunction(name, minArgs, maxArgs, "string?", args, memMgr)
{
}

ASTNode *FunctionParseXML::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
                     StaticAnalysis::PEER | StaticAnalysis::SUBTREE | StaticAnalysis::ONENODE);
  _src.getStaticType().flags = StaticType::DOCUMENT_TYPE;
  _src.forceNoFolding(true);
  _src.creative(true);

  return calculateSRCForArguments(context);
}

Sequence FunctionParseXML::createSequence(DynamicContext* context, int flags) const
{
  Item::Ptr item = getParamNumber(1, context)->next(context);

  if(item.isNull()) return Sequence(context->getMemoryManager());

  const XMLCh *xml = item->asString(context);

  MemBufInputSource src((XMLByte*)xml, XMLString::stringLen(xml) * sizeof(XMLCh), name);
  src.setEncoding(XMLUni::fgUTF16EncodingString);

  try {
    return Sequence(context->parseDocument(src, this), context->getMemoryManager());
  }
  catch(XMLParseException &e) {
    XQThrow(FunctionException, X("FunctionParseXML::createSequence"), e.getError());
  }
}
