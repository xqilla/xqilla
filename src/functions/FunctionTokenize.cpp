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
#include <xqilla/functions/FunctionTokenize.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xercesc/util/RefArrayVectorOf.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/ParseException.hpp>
#include <xercesc/util/XMLUni.hpp>

const XMLCh FunctionTokenize::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_k, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionTokenize::minArgs = 2;
const unsigned int FunctionTokenize::maxArgs = 3;

/** 
 * fn:tokenize($input as xs:string?, $pattern as xs:string) as xs:string*
 * fn:tokenize($input as xs:string?, $pattern as xs:string, $flags as xs:string) as xs:string*
 */
  
FunctionTokenize::FunctionTokenize(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string, string", args, memMgr)
{
}

Sequence FunctionTokenize::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

	// If the value of $operand1 is the empty sequence, the empty sequence is returned.
  Item::Ptr inputString = getParamNumber(1,context)->next(context);
	if(inputString.isNull())
		return Sequence(memMgr);

	const XMLCh *input=inputString->asString(context);
	// If the value of $operand1 is the zero-length string, the empty sequence is returned.
    if(XPath2Utils::equals(input, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
		return Sequence(memMgr);

	const XMLCh *pattern=getParamNumber(2,context)->next(context)->asString(context);

	const XMLCh *options = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
	if(getNumArgs()>2)
		options=getParamNumber(3,context)->next(context)->asString(context);
  
  //Check that the options are valid - throw an exception if not (can have s,m,i and x)
  //Note: Are allowed to duplicate the letters.
  unsigned int i;
  for (i=0; i< XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(options); i ++){
   if (options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x)
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"),X("Invalid regular expression flags [err:FORX0001]."));
  }
   
  //Now attempt to tokenize
	XERCES_CPP_NAMESPACE_QUALIFIER RefArrayVectorOf<XMLCh>* toks=NULL;
  try {
    XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression regEx(pattern, options, memMgr);
    if(regEx.matches(X("")))
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), X("The pattern matches the zero-length string [err:FORX0003]"));
    toks = regEx.tokenize(input);
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER ParseException &e){ 
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, memMgr);
    buf.set(X("Invalid regular expression: "));
    buf.append(e.getMessage());
    buf.append(X(" [err:FORX0002]"));
    XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), buf.getRawBuffer());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER RuntimeException &e){ 
    if(e.getCode()==XERCES_CPP_NAMESPACE_QUALIFIER XMLExcepts::Regex_InvalidRepPattern)
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));
    else 
      XQThrow(FunctionException, X("FunctionTokenize::collapseTreeInternal"), e.getMessage());
  }

  Sequence resultSeq(toks -> size(),memMgr);

  for (i = 0; i < toks -> size(); ++i){
    resultSeq.addItem(context->getItemFactory()->createString(toks -> elementAt(i), context));  
  }

  return resultSeq;
}
