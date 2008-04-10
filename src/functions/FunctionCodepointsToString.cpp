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
#include <xqilla/functions/FunctionCodepointsToString.hpp>
#include <xqilla/items/Item.hpp>
#include <xqilla/items/ATDecimalOrDerived.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/items/DatatypeFactory.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XPath2ErrorException.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/util/XMLChar.hpp>

const XMLCh FunctionCodepointsToString::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionCodepointsToString::minArgs = 1;
const unsigned int FunctionCodepointsToString::maxArgs = 1;

/**
 * fn:codepoints-to-string($srcval as integer*) => string
 * Creates a string from a sequence of codepoints.
**/

FunctionCodepointsToString::FunctionCodepointsToString(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "integer*", args, memMgr) // 1 argument
{
  _src.getStaticType() = StaticType::STRING_TYPE;
}

Sequence FunctionCodepointsToString::createSequence(DynamicContext* context, int flags) const
{
  XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer result(1023, context->getMemoryManager());
  Sequence arg = getParamNumber(1,context)->toSequence(context);
  Sequence::iterator end = arg.end();
  for(Sequence::iterator i = arg.begin(); i != end; ++i) {
    XMLInt32 ch=((const ATDecimalOrDerived::Ptr)*i)->treatAsCodepoint(context);
	if ( ch >= 0x10000) 
    {
        XMLCh one, two;
        XERCES_CPP_NAMESPACE_QUALIFIER RegxUtil::decomposeToSurrogates(ch, one, two);
        result.append(one);
        result.append(two);
	}
    else
        result.append((XMLCh)ch);
  }
  unsigned int len=result.getLen();
  const XMLCh* str=result.getRawBuffer();
  for(unsigned int j=0;j<len;j++)
  {
      if(XERCES_CPP_NAMESPACE_QUALIFIER RegxUtil::isHighSurrogate(str[j]))
        if((j+1)==len || !XERCES_CPP_NAMESPACE_QUALIFIER RegxUtil::isLowSurrogate(str[j+1]) || !XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isXMLChar(str[j], str[j+1]))
          XQThrow(XPath2ErrorException, X("FunctionCodepointsToString::createSequence"), X("String contains an invalid XML character [err:FOCH0001]."));
        else
          j++;
      else if(!XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isXMLChar(str[j]))
        XQThrow(XPath2ErrorException, X("FunctionCodepointsToString::createSequence"), X("String contains an invalid XML character [err:FOCH0001]."));
  }
  return Sequence(context->getItemFactory()->createString(str, context),
                  context->getMemoryManager());
}

