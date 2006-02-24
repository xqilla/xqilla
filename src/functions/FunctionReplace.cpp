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
#include <xqilla/functions/FunctionReplace.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/regx/RegularExpression.hpp>
#include <xercesc/util/XMLExceptMsgs.hpp>
#include <xercesc/util/ParseException.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLUni.hpp>

const XMLCh FunctionReplace::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionReplace::minArgs = 3;
const unsigned int FunctionReplace::maxArgs = 4;

/** 
 * fn:replace($input as xs:string?, $pattern as xs:string, $replacement as xs:string) as xs:string
 * fn:replace($input as xs:string?, $pattern as xs:string, $replacement as xs:string, $flags as xs:string) as xs:string
 */
  
FunctionReplace::FunctionReplace(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string, string, string", args, memMgr)
{
}

Sequence FunctionReplace::collapseTreeInternal(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

 	const XMLCh* input = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
  Item::Ptr inputString = getParamNumber(1,context)->next(context);
  if(inputString.notNull())
    input = inputString->asString(context);
	const XMLCh *pattern = getParamNumber(2,context)->next(context)->asString(context);
	const XMLCh *replacement = getParamNumber(3,context)->next(context)->asString(context);

    bool notEscaped = true;
    const XMLCh* ptr;
    for (ptr = replacement; *ptr != XERCES_CPP_NAMESPACE_QUALIFIER chNull; ptr++)
    {
      if ((*ptr == XERCES_CPP_NAMESPACE_QUALIFIER chDollarSign) && notEscaped) {
        ptr++;
      
        //check that after the $ is a digit 
        if (!XERCES_CPP_NAMESPACE_QUALIFIER XMLString::isDigit(*ptr))
          XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));
      } else {
        //if you have a slash and then a character that's not a $ or \, 
        //then it's an invalid replace string  
        if (!notEscaped && (*ptr != XERCES_CPP_NAMESPACE_QUALIFIER chDollarSign && *ptr != XERCES_CPP_NAMESPACE_QUALIFIER chBackSlash))
        XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));
      
        if (*ptr == XERCES_CPP_NAMESPACE_QUALIFIER chBackSlash)
          notEscaped = false;        
        else   
          notEscaped = true;  
      }
    }
    if(!notEscaped)
      XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));

	const XMLCh *options = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
	if(getNumArgs()>3)
		options=getParamNumber(4,context)->next(context)->asString(context);
  
  //Check that the options are valid - throw an exception if not (can have s,m,i and x)
  //Note: Are allowed to duplicate the letters.
  for (unsigned int i=0; i< XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(options); i++){
   if (options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i &&
       options[i]!= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x)
      XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"),X("Invalid regular expression flags [err:FORX0001]."));
  }

  const XMLCh* result=NULL;
  //Now attempt to replace
  try {
    XERCES_CPP_NAMESPACE_QUALIFIER RegularExpression regEx(pattern, options, memMgr);
    result = regEx.replace(input, replacement);
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER ParseException &e){ 
    XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, memMgr);
    buf.set(X("Invalid regular expression: "));
    buf.append(e.getMessage());
    buf.append(X(" [err:FORX0002]"));
    XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), buf.getRawBuffer());
  } catch (XERCES_CPP_NAMESPACE_QUALIFIER RuntimeException &e){ 
    if(e.getCode()==XERCES_CPP_NAMESPACE_QUALIFIER XMLExcepts::Regex_RepPatMatchesZeroString)
      XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), X("The pattern matches the zero-length string [err:FORX0003]"));
    else if(e.getCode()==XERCES_CPP_NAMESPACE_QUALIFIER XMLExcepts::Regex_InvalidRepPattern)
      XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), X("Invalid replacement pattern [err:FORX0004]"));
    else 
      XQThrow(FunctionException, X("FunctionReplace::collapseTreeInternal"), e.getMessage());
  }  

  return Sequence(context->getItemFactory()->createString(result, context), memMgr);
}
