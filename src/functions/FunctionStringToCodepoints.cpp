/*
 * Copyright (c) 2001, DecisionSoft Limited All rights reserved.
 * Please see LICENSE.TXT for more information.
 */

#include "../config/pathan_config.h"
#include <xqilla/functions/FunctionStringToCodepoints.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include <xqilla/context/DynamicContext.hpp>

/*string-to-codepoints*/
const XMLCh FunctionStringToCodepoints::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r,
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g,
  XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionStringToCodepoints::minArgs = 1;
const unsigned int FunctionStringToCodepoints::maxArgs = 1;

/**
 * fn:string-to-codepoints( $arg as xs:string?) as xs:integer*
**/

FunctionStringToCodepoints::FunctionStringToCodepoints(const VectorOfDataItems &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?", args, memMgr) // 1 argument
{
  _src.getStaticType().flags = StaticResolutionContext::NUMERIC_TYPE;
}

Sequence FunctionStringToCodepoints::collapseTreeInternal(DynamicContext* context, int flags) const
{	
  Sequence param1 = getParamNumber(1,context).toSequence(context);
  if(param1.isEmpty()) return param1;
  const ATStringOrDerived::Ptr str = (const ATStringOrDerived::Ptr )param1.first();

  return str->asCodepoints(context);
}
