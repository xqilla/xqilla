/*
 * Copyright (c) 2001-2008
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2008
 *     Oracle. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * $Id$
 */

#include "../config/xqilla_config.h"
#include <xqilla/functions/FunctionStartsWith.hpp>
#include <xqilla/items/ATBooleanOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/Collation.hpp>
#include <xqilla/context/impl/CodepointCollation.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xqilla/items/ATAnyURIOrDerived.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUni.hpp>

const XMLCh FunctionStartsWith::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, 
  XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_w, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_h, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionStartsWith::minArgs = 2;
const unsigned int FunctionStartsWith::maxArgs = 3;

/**
 * fn:starts-with($arg1 as xs:string?, $arg2 as xs:string?) as xs:boolean
 * fn:starts-with($arg1 as xs:string?, $arg2 as xs:string?, $collation as xs:string) as xs:boolean
**/

FunctionStartsWith::FunctionStartsWith(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?, string?, string", args, memMgr)
{
  _src.getStaticType().flags = StaticType::BOOLEAN_TYPE;
}

Sequence FunctionStartsWith::createSequence(DynamicContext* context, int flags) const
{
	XPath2MemoryManager* memMgr = context->getMemoryManager();

	Sequence sourceString=getParamNumber(1,context)->toSequence(context);
	Sequence findString=getParamNumber(2,context)->toSequence(context);

	const XMLCh* source = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
  if(!sourceString.isEmpty())
    source=sourceString.first()->asString(context);
	const XMLCh* find = XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
  if(!findString.isEmpty())
    find=findString.first()->asString(context);

	// If the value of $operand1 is the zero-length string and the value of $operand2 is not the zero-length string, 
	// then the function returns false. 
	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(source)==0 && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(find)>0)
		return Sequence(context->getItemFactory()->createBoolean(false, context), memMgr);
	// If the value of $operand2 is the zero-length string, then the function returns true
	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(find)==0)
		return Sequence(context->getItemFactory()->createBoolean(true, context), memMgr);

	Collation* collation=NULL;
	if(getNumArgs()>2) {
    Sequence collArg = getParamNumber(3,context)->toSequence(context);
    const XMLCh* collName = collArg.first()->asString(context);
    try {
      context->getItemFactory()->createAnyURI(collName, context);
    } catch(XPath2ErrorException &e) {
      XQThrow(FunctionException, X("FunctionEndsWith::createSequence"), X("Invalid collationURI"));  
    }
	  collation=context->getCollation(collName, this);
  }
	else
		collation=context->getDefaultCollation(this);

	// Returns a boolean indicating whether or not the value of $operand1 ends with a string that is equal to the value 
	// of $operand2 according to the specified collation

	if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(find)>XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(source)) {
		return Sequence(context->getItemFactory()->createBoolean(false, context), memMgr);
	}
	const XMLCh* string = XPath2Utils::subString(source, 0,XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(find), memMgr);
	bool result = (collation->compare(string,find)==0);

	return Sequence(context->getItemFactory()->createBoolean(result, context), memMgr);
}
