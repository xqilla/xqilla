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
#include <xqilla/functions/FunctionCollection.hpp>

#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/ast/StaticAnalysis.hpp>
#include <xqilla/utils/XPath2Utils.hpp>

XERCES_CPP_NAMESPACE_USE;

const XMLCh FunctionCollection::name[] = {
  chLatin_c, chLatin_o, chLatin_l, 
  chLatin_l, chLatin_e, chLatin_c, 
  chLatin_t, chLatin_i, chLatin_o, 
  chLatin_n, chNull 
};
const unsigned int FunctionCollection::minArgs = 0;
const unsigned int FunctionCollection::maxArgs = 1;

/**
 * fn:collection() as node()*
 * fn:collection($arg as xs:string?) as node()*
**/

FunctionCollection::FunctionCollection(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : XQFunction(name, minArgs, maxArgs, "string?", args, memMgr),
    queryPathTree_(0)
{
}

ASTNode* FunctionCollection::staticResolution(StaticContext *context)
{
  return resolveArguments(context);
}

ASTNode *FunctionCollection::staticTyping(StaticContext *context)
{
  _src.clear();

  _src.setProperties(StaticAnalysis::DOCORDER | StaticAnalysis::GROUPED |
                     StaticAnalysis::SUBTREE);
  _src.getStaticType().flags = StaticType::NODE_TYPE;
  _src.availableCollectionsUsed(true);
  return calculateSRCForArguments(context);
}

Sequence FunctionCollection::createSequence(DynamicContext* context, int flags) const
{
  //args 0 - URI to resolve
  if(getNumArgs() == 0)
      return context->resolveDefaultCollection();

  Item::Ptr arg = getParamNumber(1, context)->next(context);
  if(arg.isNull())
    return context->resolveDefaultCollection();

  const XMLCh *uri = arg->asString(context);
  if(!XPath2Utils::isValidURI(uri, context->getMemoryManager()))
    XQThrow(FunctionException, X("FunctionCollection::createSequence"), X("Invalid URI format [err:FODC0002]"));

  QPNVector projection;
  projection.push_back(queryPathTree_);
  return context->resolveCollection(uri, this, queryPathTree_ ? &projection : 0);
}

