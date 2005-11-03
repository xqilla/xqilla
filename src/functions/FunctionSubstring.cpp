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

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionSubstring.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/ATDoubleOrDerived.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/mapm/m_apm.h>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/XMLString.hpp>

const XMLCh FunctionSubstring::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_b, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, 
  XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionSubstring::minArgs = 2;
const unsigned int FunctionSubstring::maxArgs = 3;


/**
 * fn:substring($sourceString as xs:string?, $startingLoc as xs:double) as xs:string
 * fn:substring($sourceString as xs:string?, $startingLoc as xs:double, $length as xs:double) as xs:string
**/

FunctionSubstring::FunctionSubstring(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, double, double", args, memMgr)
{
}

Sequence FunctionSubstring::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

	Sequence string=getParamNumber(1, context);
	if(string.isEmpty())
		return Sequence(context->getItemFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context), memMgr);
	
  ATStringOrDerived::Ptr str = (const ATStringOrDerived::Ptr )string.first();

	Sequence startingLoc=getParamNumber(2,context);
  const ATDoubleOrDerived::Ptr one = context->getItemFactory()->createDouble(1, context);
	// The first character of a string is located at position 1 (not position 0).
	ATDoubleOrDerived::Ptr index = (const ATDoubleOrDerived::Ptr )startingLoc.first();
  if (index->lessThan(one, context))
      index = one;

	ATDoubleOrDerived::Ptr subStrLength;
	if(getNumArgs()>2)
	{
		Sequence length=getParamNumber(3,context);
		subStrLength=(const ATDoubleOrDerived::Ptr )length.first();
	}
	else {
		subStrLength=(const ATDoubleOrDerived::Ptr )context->getItemFactory()->createDouble((long)((const ATStringOrDerived*)str)->getLength(), context)->subtract(index, context)->add(one, context);
  }
  
	return Sequence(((const ATStringOrDerived*)str)->substring(index, subStrLength, context), memMgr);
}
