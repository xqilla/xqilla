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
#include <xqilla/functions/FunctionNormalizeUnicode.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/items/ATStringOrDerived.hpp>
#include "../context/impl/UCANormalizer.hpp"
#include <xqilla/exceptions/FunctionException.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/items/DatatypeFactory.hpp>

const XMLCh FunctionNormalizeUnicode::name[] = {
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_r, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, 
  XERCES_CPP_NAMESPACE_QUALIFIER chDash,    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_n, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_i, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_c, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, 
  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_d, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_e, XERCES_CPP_NAMESPACE_QUALIFIER chNull 
};
const unsigned int FunctionNormalizeUnicode::minArgs = 1;
const unsigned int FunctionNormalizeUnicode::maxArgs = 2;

/**
 * fn:normalize-unicode($arg as xs:string?) as xs:string
 * fn:normalize-unicode($arg as xs:string?, $normalizationForm as xs:string) as xs:string
 **/

FunctionNormalizeUnicode::FunctionNormalizeUnicode(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?,string", args, memMgr)
{
  _src.getStaticType().flags = StaticType::STRING_TYPE;
}

Sequence FunctionNormalizeUnicode::collapseTreeInternal(DynamicContext* context, int flags) const
{
  XPath2MemoryManager* memMgr = context->getMemoryManager();
  Sequence strParm=getParamNumber(1,context)->toSequence(context);
  if(strParm.isEmpty()) {
    return Sequence(context->getItemFactory()->createString(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, context), memMgr);
  }

  const XMLCh *str = strParm.first()->asString(context);

  static const XMLCh fg_NFC[] = { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_C, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
  static const XMLCh fg_NFD[] = { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_D, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
  static const XMLCh fg_NFKC[] = { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_K, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_C, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
  static const XMLCh fg_NFKD[] = { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_K, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_D, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
  static const XMLCh fg_fully[] = { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_U, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_L,
                                    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_L, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Y, XERCES_CPP_NAMESPACE_QUALIFIER chDash,
                                    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_R,
                                    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_M, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_L,
                                    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_I, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_E,
                                    XERCES_CPP_NAMESPACE_QUALIFIER chLatin_D, XERCES_CPP_NAMESPACE_QUALIFIER chNull };

  const XMLCh* normalization = fg_NFC;
  if(getNumArgs()==2)
  {
    Sequence normParam=getParamNumber(2,context)->toSequence(context);
    const XMLCh *src = normParam.first()->asString(context);
    normalization = XPath2Utils::toUpper(src, memMgr);

    if (XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(normalization) > 0)
    {
      unsigned int i;
      // remove leading spaces
      for(i = 0; i < XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(normalization); i++) 
      {
        XMLCh ch = normalization[i];
        if((ch != 0x9) && (ch != 0xA) && (ch != 0xD) && (ch != 0x20))
          break;
      }
      const XMLCh *frontChop = XPath2Utils::subString(normalization, i,XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(normalization)-i, memMgr);

      // remove trailing spaces
      for(i = XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(frontChop)-1; i !=0 ; i--) 
      {
        XMLCh ch = frontChop[i];
        if((ch != 0x9) && (ch != 0xA) && (ch != 0xD) && (ch != 0x20))
          break;
      }
      normalization = XPath2Utils::subString(frontChop, 0, i+1, memMgr);
    }
  }

  if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(normalization) == 0) {
    return Sequence(context->getItemFactory()->createString(str, context), memMgr);
  }
  else if(XPath2Utils::equals(normalization, fg_NFC)) {
    XMLCh *normalizedString = Normalizer::NormalizeC(str, context->getMemoryManager());

    Sequence result = Sequence(context->getItemFactory()->createString(normalizedString , context), memMgr);
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&normalizedString);
    return result;
  }
  else if(XPath2Utils::equals(normalization, fg_NFD)) {
    const XMLCh *normalizedString = Normalizer::NormalizeD(str, context->getMemoryManager());

    Sequence result(context->getItemFactory()->createString(normalizedString, context), memMgr);
    return result;
  }
  else if(XPath2Utils::equals(normalization, fg_NFKC)) {
    XMLCh *normalizedString = Normalizer::NormalizeKC(str, context->getMemoryManager());

    Sequence result(context->getItemFactory()->createString(normalizedString, context), memMgr);
    XERCES_CPP_NAMESPACE_QUALIFIER XMLString::release(&normalizedString);
    return result;
  }
  else if(XPath2Utils::equals(normalization, fg_NFKD)) {

	const XMLCh *normalizedString = Normalizer::NormalizeKD(str, context->getMemoryManager());
	Sequence result(context->getItemFactory()->createString(normalizedString, context), memMgr);
	return result;
  }
  else if(XPath2Utils::equals(normalization, fg_fully)) {
    XQThrow(FunctionException, X("FunctionNormalizeUnicode::collapseTreeInternal"), X("Unsupported normalization form [err:FOCH0003]."));
  }
	
  XQThrow(FunctionException, X("FunctionNormalizeUnicode::collapseTreeInternal"), X("Invalid normalization form [err:FOCH0003]."));
}
