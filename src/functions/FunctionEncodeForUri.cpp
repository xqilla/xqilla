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
#include <xqilla/functions/FunctionEncodeForUri.hpp>
#include <xqilla/context/DynamicContext.hpp>

#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/XMLUni.hpp>
#include <xercesc/util/XMLUTF8Transcoder.hpp>

XERCES_CPP_NAMESPACE_USE;

const XMLCh FunctionEncodeForUri::name[] = {
  chLatin_e, chLatin_n, chLatin_c, 
  chLatin_o, chLatin_d, chLatin_e, 
  chDash,    chLatin_f, chLatin_o, 
  chLatin_r, chDash,    chLatin_u, 
  chLatin_r, chLatin_i, chNull 
};
const unsigned int FunctionEncodeForUri::minArgs = 1;
const unsigned int FunctionEncodeForUri::maxArgs = 1;

static const XMLCh RESERVED_CHARACTERS[] =
{
    chDash,  chUnderscore, chPeriod, 
    chTilde, chNull
};

static const XMLCh HEX_DIGITS[16] = 
{ 
    chDigit_0, chDigit_1, chDigit_2, 
    chDigit_3, chDigit_4, chDigit_5, 
    chDigit_6, chDigit_7, chDigit_8, 
    chDigit_9, chLatin_A, chLatin_B, 
    chLatin_C, chLatin_D, chLatin_E, 
    chLatin_F
};

/*
  fn:encode-for-uri($uri-part as xs:string?) as xs:string
 */

FunctionEncodeForUri::FunctionEncodeForUri(const VectorOfASTNodes &args, XPath2MemoryManager* memMgr)
  : ConstantFoldingFunction(name, minArgs, maxArgs, "string?", args, memMgr)
{
  _src.getStaticType().flags = StaticType::STRING_TYPE;
}

Sequence FunctionEncodeForUri::createSequence(DynamicContext* context, int flags) const
{
    Item::Ptr uriPart = getParamNumber(1,context)->next(context);
    if(uriPart.isNull())
        return Sequence(context->getItemFactory()->createString(XMLUni::fgZeroLenString, context), context->getMemoryManager());

    const XMLCh* source = uriPart->asString(context);
    unsigned len = XMLString::stringLen(source);
    XMLBuffer outString(len + 1, context->getMemoryManager());
    XMLUTF8Transcoder utf8Trans(XMLUni::fgUTF8EncodingString, 10, context->getMemoryManager());
    for(unsigned i = 0; i < len; ++i) {
        if(XMLString::isAlphaNum(source[i]) || XMLString::indexOf(RESERVED_CHARACTERS, source[i]) != -1)
            outString.append(source[i]);
        else {
            XMLByte utf8Str[8];
            unsigned int charsEaten;
            unsigned int nLen=utf8Trans.transcodeTo(&source[i], 1, utf8Str, 7, charsEaten, XMLTranscoder::UnRep_RepChar);
            for(unsigned int j = 0; j < nLen; ++j) {
                outString.append(chPercent);
                outString.append(HEX_DIGITS[utf8Str[j] >> 4]);
                outString.append(HEX_DIGITS[utf8Str[j] & 0xF]);
            }
        }
    }

    return Sequence(context->getItemFactory()->createString(outString.getRawBuffer(), context), context->getMemoryManager());
}
