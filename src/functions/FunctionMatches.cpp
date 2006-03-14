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
#include <xqilla/functions/FunctionMatches.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/ParseException.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLUni.hpp>

const XMLCh FunctionMatches::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionMatches::minArgs = 2;
const unsigned int FunctionMatches::maxArgs = 3;

/**
 * fn:matches($input as xs:string?, $pattern as xs:string) as xs:boolean
 * fn:matches($input as xs:string?, $pattern as xs:string, $flags as xs:string) as xs:boolean
 */
  
FunctionMatches::FunctionMatches(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string, string", args, memMgr)
{
  _src.getStaticType().flags = StaticType::BOOLEAN_TYPE;
}

Sequence FunctionMatches::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();

  const XMLCh* input = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
  Item::Ptr inputItem = getParamNumber(1,context)->next(context);
  if(inputItem.notNull())
    input=inputItem->asString(context);
	const XMLCh* pattern = getParamNumber(2,context)->next(context)->asString(context);
	// If the value of $operand1 is the zero-length string and the value of $operand2 is not the zero-length string,
	// then the function returns false.
	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(input)==0 && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(pattern)>0)
		return Sequence(context->getItemFactory()->createBoolean(false, context), memMgr);
	// If the value of $operand2 is the zero-length string, then the function returns true
	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(pattern)==0)
		return Sequence(context->getItemFactory()->createBoolean(true, context), memMgr);

	const XMLCh* options = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
	if(getNumArgs()>2)
		options=getParamNumber(3,context)->next(context)->asString(context);

  //Check that the options are valid - throw an exception if not (can have s,m,i and x)
  //Note: Are allowed to duplicate the letters.
  for (unsigned int i=0; i< XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(options); i ++){
   if (options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s && 
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x) 
     
    XQThrow(FunctionException, X("FunctionMatches::collapseTreeInternal"),X("Invalid regular expression flags [err:FORX0001]."));
  }

  //Build the Regular Expression
  try {
    XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression regEx(pattern, options, memMgr);
    return Sequence(context->getItemFactory()->createBoolean(regEx.matches(input), context), memMgr);
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER ParseException &e){ 
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, memMgr);
    buf.set(X("Invalid regular expression: "));
    buf.append(e.getMessage());
    buf.append(X(" [err:FORX0002]"));
    XQThrow(FunctionException, X("FunctionMatches::collapseTreeInternal"), buf.getRawBuffer());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER XMLException &e){ 
    XQThrow(FunctionException, X("FunctionMatches::collapseTreeInternal"), e.getMessage());  
  }  

  //do not get here

}
