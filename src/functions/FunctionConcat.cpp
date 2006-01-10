/*
 * Copyright (c) 2001-2006
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2006
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2006
 *     Sleepycat Software. All rights reserved.
 *
 * See the file LICENSE for redistribution information.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionConcat.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xqilla/context/ItemFactory.hpp>

const XMLCh FunctionConcat::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionConcat::minArgs = 2;
const unsigned int FunctionConcat::maxArgs = UNLIMITED;

/**
 * fn:concat($arg1 as xdt:anyAtomicType?, $arg2 as xdt:anyAtomicType?, ...) as xs:string
**/


FunctionConcat::FunctionConcat(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "anyAtomicType?", args, memMgr) // Between 2 and UNLIMITED arguments
{
  // Nothing to do
}

Sequence FunctionConcat::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer result(1023, context->getMemoryManager());
	for(unsigned int i = 1; i <= getNumArgs(); ++i) 
	{
		// use this version of getParamNumber so that I can specify that the signature for the argument is always "string?"
		Sequence item = getParamNumber(i,1,context);
		if(!item.isEmpty()) {
		  result.append(item.first()->asString(context));
		}
	}
  const ATStringOrDerived::Ptr strResult = context->getItemFactory()->createString(result.getRawBuffer(), context);
	/*	cerr << XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(strResult.asString()) << endl;*/

	return Sequence(strResult, context->getMemoryManager());
}
