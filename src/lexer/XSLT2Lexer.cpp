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

#include "XSLT2Lexer.hpp"

#ifdef HAVE_FAXPP

#include <sstream>

#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/items/ATQNameConstructor.hpp>
#include <xqilla/items/AnyAtomicTypeConstructor.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/dom-api/impl/XQillaNSResolverImpl.hpp>

#include <xercesc/util/BinInputStream.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLChar.hpp>

#ifdef XQ_DEBUG_LEXER

#include <iostream>
#define RECOGNIZE(token) { std::cerr << "Recognize: "#token << std::endl; return token; }

#else

#define RECOGNIZE(token) return token

#endif

XERCES_CPP_NAMESPACE_USE;
using namespace std;

const XMLCh XSLT_URI[] = { 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'w', '3', '.', 'o', 'r', 'g', '/',
                           '1', '9', '9', '9', '/', 'X', 'S', 'L', '/', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0 };
const XMLCh STYLESHEET_NAME[] = { 's', 't', 'y', 'l', 'e', 's', 'h', 'e', 'e', 't', 0 };
const XMLCh TRANSFORM_NAME[] = { 't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0 };
const XMLCh TEMPLATE_NAME[] = { 't', 'e', 'm', 'p', 'l', 'a', 't', 'e', 0 };
const XMLCh FUNCTION_NAME[] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', 0 };
const XMLCh VALUE_OF_NAME[] = { 'v', 'a', 'l', 'u', 'e', '-', 'o', 'f', 0 };
const XMLCh TEXT_NAME[] = { 't', 'e', 'x', 't', 0 };
const XMLCh APPLY_TEMPLATES_NAME[] = { 'a', 'p', 'p', 'l', 'y', '-', 't', 'e', 'm', 'p', 'l', 'a', 't', 'e', 's', 0 };
const XMLCh CALL_TEMPLATE_NAME[] = { 'c', 'a', 'l', 'l', '-', 't', 'e', 'm', 'p', 'l', 'a', 't', 'e', 0 };
const XMLCh WITH_PARAM_NAME[] = { 'w', 'i', 't', 'h', '-', 'p', 'a', 'r', 'a', 'm', 0 };
const XMLCh SEQUENCE_NAME[] = { 's', 'e', 'q', 'u', 'e', 'n', 'c', 'e', 0 };
const XMLCh PARAM_NAME[] = { 'p', 'a', 'r', 'a', 'm', 0 };
const XMLCh CHOOSE_NAME[] = { 'c', 'h', 'o', 'o', 's', 'e', 0 };
const XMLCh WHEN_NAME[] = { 'w', 'h', 'e', 'n', 0 };
const XMLCh OTHERWISE_NAME[] = { 'o', 't', 'h', 'e', 'r', 'w', 'i', 's', 'e', 0 };
const XMLCh IF_NAME[] = { 'i', 'f', 0 };
const XMLCh VARIABLE_NAME[] = { 'v', 'a', 'r', 'i', 'a', 'b', 'l', 'e', 0 };
const XMLCh COMMENT_NAME[] = { 'c', 'o', 'm', 'm', 'e', 'n', 't', 0 };
const XMLCh PI_NAME[] = { 'p', 'r', 'o', 'c', 'e', 's', 's', 'i', 'n', 'g', '-', 'i', 'n', 's', 't', 'r', 'u', 'c', 't', 'i', 'o', 'n', 0 };
const XMLCh DOCUMENT_NAME[] = { 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 0 };
const XMLCh ATTRIBUTE_NAME[] = { 'a', 't', 't', 'r', 'i', 'b', 'u', 't', 'e', 0 };
const XMLCh NAMESPACE_NAME[] = { 'n', 'a', 'm', 'e', 's', 'p', 'a', 'c', 'e', 0 };
const XMLCh ANALYZE_STRING_NAME[] = { 'a', 'n', 'a', 'l', 'y', 'z', 'e', '-', 's', 't', 'r', 'i', 'n', 'g', 0 };
const XMLCh MATCHING_SUBSTRING_NAME[] = { 'm', 'a', 't', 'c', 'h', 'i', 'n', 'g', '-', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', 0 };
const XMLCh NON_MATCHING_SUBSTRING_NAME[] = { 'n', 'o', 'n', '-', 'm', 'a', 't', 'c', 'h', 'i', 'n', 'g', '-', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', 0 };
const XMLCh COPY_OF_NAME[] = { 'c', 'o', 'p', 'y', '-', 'o', 'f', 0 };
const XMLCh COPY_NAME[] = { 'c', 'o', 'p', 'y', 0 };
const XMLCh FOR_EACH_NAME[] = { 'f', 'o', 'r', '-', 'e', 'a', 'c', 'h', 0 };

const XMLCh VERSION_NAME[] = { 'v', 'e', 'r', 's', 'i', 'o', 'n', 0 };
const XMLCh MATCH_NAME[] = { 'm', 'a', 't', 'c', 'h', 0 };
const XMLCh AS_NAME[] = { 'a', 's', 0 };
const XMLCh SELECT_NAME[] = { 's', 'e', 'l', 'e', 'c', 't', 0 };
const XMLCh MODE_NAME[] = { 'm', 'o', 'd', 'e', 0 };
const XMLCh NAME_NAME[] = { 'n', 'a', 'm', 'e', 0 };
const XMLCh PRIORITY_NAME[] = { 'p', 'r', 'i', 'o', 'r', 'i', 't', 'y', 0 };
const XMLCh TUNNEL_NAME[] = { 't', 'u', 'n', 'n', 'e', 'l', 0 };
const XMLCh REQUIRED_NAME[] = { 'r', 'e', 'q', 'u', 'i', 'r', 'e', 'd', 0 };
const XMLCh OVERRIDE_NAME[] = { 'o', 'v', 'e', 'r', 'r', 'i', 'd', 'e', 0 };
const XMLCh TEST_NAME[] = { 't', 'e', 's', 't', 0 };
const XMLCh SEPARATOR_NAME[] = { 's', 'e', 'p', 'a', 'r', 'a', 't', 'o', 'r', 0 };
const XMLCh REGEX_NAME[] = { 'r', 'e', 'g', 'e', 'x', 0 };
const XMLCh FLAGS_NAME[] = { 'f', 'l', 'a', 'g', 's', 0 };
const XMLCh COPY_NAMESPACES_NAME[] = { 'c', 'o', 'p', 'y', '-', 'n', 'a', 'm', 'e', 's', 'p', 'a', 'c', 'e', 's', 0 };
const XMLCh INHERIT_NAMESPACES_NAME[] = { 'i', 'n', 'h', 'e', 'r', 'i', 't', '-', 'n', 'a', 'm', 'e', 's', 'p', 'a', 'c', 'e', 's', 0 };

const XMLCh SPACE_NAME[] = { 's', 'p', 'a', 'c', 'e', 0 };
const XMLCh PRESERVE_NAME[] = { 'p', 'r', 'e', 's', 'e', 'r', 'v', 'e', 0 };
const XMLCh DEFAULT_NAME[] = { 'd', 'e', 'f', 'a', 'u', 'l', 't', 0 };

const XMLCh YES_VALUE[] = { 'y', 'e', 's', 0 };
const XMLCh NO_VALUE[] = { 'n', 'o', 0 };

struct AttrData
{
  const XMLCh *name;
  int token;

  enum {
    PATTERN,
    SEQUENCE_TYPE,
    EXPRESSION,
    ATTR_VALUE_TEMPLATE,
    STRING,
    QNAME,
    YESNO,
    TEMPLATE_MODES
  } type;
};

#define AS_ATTR_DATA        { AS_NAME,        _XSLT_AS_,        AttrData::SEQUENCE_TYPE       }
#define SELECT_ATTR_DATA    { SELECT_NAME,    _XSLT_SELECT_,    AttrData::EXPRESSION          }
#define NAME_ATTR_DATA      { NAME_NAME,      _XSLT_NAME_,      AttrData::QNAME               }
#define SEPARATOR_ATTR_DATA { SEPARATOR_NAME, _XSLT_SEPARATOR_, AttrData::ATTR_VALUE_TEMPLATE }
#define END_ATTR_DATA       { 0,              0,                AttrData::STRING              }

const AttrData STYLESHEET_ATTR_DATA[] = {
  { VERSION_NAME, _XSLT_VERSION_, AttrData::STRING },
  // TBD the rest of the attrs - jpcs
  END_ATTR_DATA
};

const AttrData TEMPLATE_ATTR_DATA[] = {
  { MATCH_NAME, _XSLT_MATCH_, AttrData::PATTERN },
  NAME_ATTR_DATA,
  { PRIORITY_NAME, _XSLT_PRIORITY_, AttrData::EXPRESSION },
  { MODE_NAME, _XSLT_MODE_, AttrData::TEMPLATE_MODES },
  AS_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData FUNCTION_ATTR_DATA[] = {
  NAME_ATTR_DATA,
  AS_ATTR_DATA,
  { OVERRIDE_NAME, _XSLT_OVERRIDE_, AttrData::YESNO },
  END_ATTR_DATA
};

const AttrData VALUE_OF_ATTR_DATA[] = {
  SELECT_ATTR_DATA,
  SEPARATOR_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData APPLY_TEMPLATES_ATTR_DATA[] = {
  { MODE_NAME, _XSLT_MODE_, AttrData::TEMPLATE_MODES },
  SELECT_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData CALL_TEMPLATE_ATTR_DATA[] = {
  NAME_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData WITH_PARAM_ATTR_DATA[] = {
  NAME_ATTR_DATA,
  SELECT_ATTR_DATA,
  AS_ATTR_DATA,
  { TUNNEL_NAME, _XSLT_TUNNEL_, AttrData::YESNO },
  END_ATTR_DATA
};

const AttrData SEQUENCE_ATTR_DATA[] = {
  SELECT_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData PARAM_ATTR_DATA[] = {
  NAME_ATTR_DATA,
  SELECT_ATTR_DATA,
  AS_ATTR_DATA,
  { REQUIRED_NAME, _XSLT_REQUIRED_, AttrData::YESNO },
  { TUNNEL_NAME, _XSLT_TUNNEL_, AttrData::YESNO },
  END_ATTR_DATA
};

const AttrData G_TEST_ATTR_DATA[] = {
  { TEST_NAME, _XSLT_TEST_, AttrData::EXPRESSION },
  END_ATTR_DATA
};

const AttrData VARIABLE_ATTR_DATA[] = {
  NAME_ATTR_DATA,
  SELECT_ATTR_DATA,
  AS_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData COMMENT_ATTR_DATA[] = {
  SELECT_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData PI_ATTR_DATA[] = {
  { NAME_NAME, _XSLT_NAME_, AttrData::ATTR_VALUE_TEMPLATE },
  SELECT_ATTR_DATA,
  END_ATTR_DATA
};

const AttrData ATTRIBUTE_ATTR_DATA[] = {
  { NAME_NAME,      _XSLT_NAME_,        AttrData::ATTR_VALUE_TEMPLATE },
  { NAMESPACE_NAME, _XSLT_NAMESPACE_A_, AttrData::ATTR_VALUE_TEMPLATE },
  SELECT_ATTR_DATA,
  SEPARATOR_ATTR_DATA,
  // TBD validation and type - jpcs
  END_ATTR_DATA
};

const AttrData ANALYZE_STRING_ATTR_DATA[] = {
  SELECT_ATTR_DATA,
  { REGEX_NAME, _XSLT_REGEX_, AttrData::ATTR_VALUE_TEMPLATE },
  { FLAGS_NAME, _XSLT_FLAGS_, AttrData::ATTR_VALUE_TEMPLATE },
  END_ATTR_DATA
};

const AttrData COPY_OF_ATTR_DATA[] = {
  SELECT_ATTR_DATA,
  { COPY_NAMESPACES_NAME, _XSLT_COPY_NAMESPACES_, AttrData::YESNO },
  // TBD validation and type - jpcs
  END_ATTR_DATA
};

const AttrData COPY_ATTR_DATA[] = {
  { COPY_NAMESPACES_NAME, _XSLT_COPY_NAMESPACES_, AttrData::YESNO },
  { INHERIT_NAMESPACES_NAME, _XSLT_INHERIT_NAMESPACES_, AttrData::YESNO },
  // TBD attribute sets - jpcs
  // TBD validation and type - jpcs
  END_ATTR_DATA
};

const AttrData FOR_EACH_ATTR_DATA[] = {
  SELECT_ATTR_DATA
};

struct InstructionInfo
{
  const XMLCh *name;
  int token;
  const AttrData *attrs;

  enum {
    STRIP,
    PRESERVE,
    DEFAULT
  } whitespace;
};

const InstructionInfo INSTRUCTION_INFO[] = {
  { STYLESHEET_NAME,             _XSLT_STYLESHEET_,             STYLESHEET_ATTR_DATA,      InstructionInfo::STRIP    },
  { TRANSFORM_NAME,              _XSLT_STYLESHEET_,             STYLESHEET_ATTR_DATA,      InstructionInfo::STRIP    },
  { TEMPLATE_NAME,               _XSLT_TEMPLATE_,               TEMPLATE_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { FUNCTION_NAME,               _XSLT_FUNCTION_,               FUNCTION_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { VALUE_OF_NAME,               _XSLT_VALUE_OF_,               VALUE_OF_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { TEXT_NAME,                   _XSLT_TEXT_,                   0,                         InstructionInfo::PRESERVE },
  { APPLY_TEMPLATES_NAME,        _XSLT_APPLY_TEMPLATES_,        APPLY_TEMPLATES_ATTR_DATA, InstructionInfo::STRIP    },
  { CALL_TEMPLATE_NAME,          _XSLT_CALL_TEMPLATE_,          CALL_TEMPLATE_ATTR_DATA,   InstructionInfo::STRIP    },
  { WITH_PARAM_NAME,             _XSLT_WITH_PARAM_,             WITH_PARAM_ATTR_DATA,      InstructionInfo::DEFAULT  },
  { SEQUENCE_NAME,               _XSLT_SEQUENCE_,               SEQUENCE_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { PARAM_NAME,                  _XSLT_PARAM_,                  PARAM_ATTR_DATA,           InstructionInfo::DEFAULT  },
  { CHOOSE_NAME,                 _XSLT_CHOOSE_,                 0,                         InstructionInfo::STRIP    },
  { WHEN_NAME,                   _XSLT_WHEN_,                   G_TEST_ATTR_DATA,          InstructionInfo::DEFAULT  },
  { OTHERWISE_NAME,              _XSLT_OTHERWISE_,              0,                         InstructionInfo::DEFAULT  },
  { IF_NAME,                     _XSLT_IF_,                     G_TEST_ATTR_DATA,          InstructionInfo::DEFAULT  },
  { VARIABLE_NAME,               _XSLT_VARIABLE_,               VARIABLE_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { COMMENT_NAME,                _XSLT_COMMENT_,                COMMENT_ATTR_DATA,         InstructionInfo::DEFAULT  },
  { PI_NAME,                     _XSLT_PI_,                     PI_ATTR_DATA,              InstructionInfo::DEFAULT  },
  { DOCUMENT_NAME,               _XSLT_DOCUMENT_,               0,                         InstructionInfo::DEFAULT  },
  { ATTRIBUTE_NAME,              _XSLT_ATTRIBUTE_,              ATTRIBUTE_ATTR_DATA,       InstructionInfo::DEFAULT  },
  { ANALYZE_STRING_NAME,         _XSLT_ANALYZE_STRING_,         ANALYZE_STRING_ATTR_DATA,  InstructionInfo::STRIP    },
  { MATCHING_SUBSTRING_NAME,     _XSLT_MATCHING_SUBSTRING_,     0,                         InstructionInfo::DEFAULT  },
  { NON_MATCHING_SUBSTRING_NAME, _XSLT_NON_MATCHING_SUBSTRING_, 0,                         InstructionInfo::DEFAULT  },
  { COPY_OF_NAME,                _XSLT_COPY_OF_,                COPY_OF_ATTR_DATA,         InstructionInfo::DEFAULT  },
  { COPY_NAME,                   _XSLT_COPY_,                   COPY_ATTR_DATA,            InstructionInfo::DEFAULT  },
  { FOR_EACH_NAME,               _XSLT_FOR_EACH_,               FOR_EACH_ATTR_DATA,        InstructionInfo::DEFAULT  },
  { 0, 0 }
};

// Strip elements:
//
//         xsl:analyze-string
//     xsl:apply-imports
//         xsl:apply-templates
//     xsl:attribute-set
//         xsl:call-template
//     xsl:character-map
//         xsl:choose
//     xsl:next-match
//         xsl:stylesheet
//         xsl:transform

static unsigned int binInputStreamReadCallback(void *userData, void *buffer, unsigned int length)
{
  return ((BinInputStream*)userData)->readBytes((XMLByte*)buffer, length);
}

static inline const XMLCh *nullTerm(const FAXPP_Text &text, XPath2MemoryManager *mm)
{
  return mm->getPooledString((XMLCh*)text.ptr, text.len / sizeof(XMLCh));
}

XSLT2Lexer::XSLT2Lexer(DynamicContext *context, const InputSource &srcToUse, XQilla::Language lang)
  : Lexer(context->getMemoryManager(), lang, context->getMemoryManager()->getPooledString(srcToUse.getSystemId()), 0, 0),
    context_(context),
    parser_(0),
    stream_(0),
    childLexer_(0),
    elementStack_(0),
    state_(LANG_TOKEN),
    index_(0),
    selfClose_(false),
    textBuffer_(1023, context->getMemoryManager()),
    textToCreate_(false)
{
  parser_ = FAXPP_create_parser(WELL_FORMED_PARSE_MODE, FAXPP_utf16_native_transcoder);
  if(parser_ == 0) error("Out of memory");

  stream_.set(srcToUse.makeStream());
  if(stream_.get() == NULL) error("Document not found");

  FAXPP_Error err = FAXPP_init_parse_callback(parser_, binInputStreamReadCallback, stream_.get());
  if(err == OUT_OF_MEMORY) error("Out of memory");

  // Force use of encoding set on InputSource
  if(srcToUse.getEncoding()) {
    FAXPP_DecodeFunction decode = FAXPP_string_to_decode(UTF8(srcToUse.getEncoding()));
    if(decode == 0) err = UNSUPPORTED_ENCODING;
    else FAXPP_set_decode(parser_, decode);
  }

  if(err == UNSUPPORTED_ENCODING) error("Unsupported encoding");
}

XSLT2Lexer::~XSLT2Lexer()
{
  while(elementStack_ != 0) {
    popElementStack();
  }
}

int XSLT2Lexer::lang_token_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  state_ = NEXT_EVENT;
  RECOGNIZE(_LANG_XSLT2_);
}

int XSLT2Lexer::attrs_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  const FAXPP_Event *event = FAXPP_get_current_event(parser_);
  FAXPP_Attribute *attr = &event->attrs[index_];

  setLocation(pYYLOC, attr);

  ++index_;
  if(index_ >= event->attr_count) {
    state_ = NEXT_EVENT;
  }

  if(attr->xmlns_attr) {
    if(elementStack_->info == 0) {
      VectorOfASTNodes *value = new (mm_) VectorOfASTNodes(XQillaAllocator<ASTNode*>(mm_));
      value->push_back(makeStringLiteral(nullTerm(attr->value.value, mm_)));

      pYYLVAL->astNode = wrap(new (mm_) XQAttributeConstructor(makeDirectName(nullTerm(attr->prefix, mm_), nullTerm(attr->name, mm_)), value, mm_));

      RECOGNIZE(_XSLT_XMLNS_ATTR_);
    }
    else {
      return yylex(pYYLVAL, pYYLOC);
    }
  }
  else {
    const XMLCh *uri = nullTerm(attr->uri, mm_);
    const XMLCh *name = nullTerm(attr->name, mm_);

    if(attr->xml_attr && XPath2Utils::equals(name, SPACE_NAME)) {
      // Keep track of the xml:space policy
      if(XPath2Utils::equals(nullTerm(attr->value.value, mm_), PRESERVE_NAME)) {
        elementStack_->xmlSpacePreserve = true;
      }
      else if(XPath2Utils::equals(nullTerm(attr->value.value, mm_), DEFAULT_NAME)) {
        elementStack_->xmlSpacePreserve = false;
      }
    }
    else if(elementStack_->info != 0 && elementStack_->info->attrs != 0 && uri == 0) {
      for(const AttrData *entry = elementStack_->info->attrs; entry->name != 0; ++entry) {
        if(XPath2Utils::equals(name, entry->name)) {
          switch(entry->type) {
          case AttrData::PATTERN:
          case AttrData::SEQUENCE_TYPE:
          case AttrData::EXPRESSION:
            childLexer_.set(new XQLexer(mm_, m_szQueryFile, attr->value.line, attr->value.column, nullTerm(attr->value.value, mm_),
                                        (XQilla::Language)((m_language & ~XQilla::XSLT2) | XQilla::XPATH2)));
            break;
          case AttrData::ATTR_VALUE_TEMPLATE:
            childLexer_.set(new XQLexer(mm_, m_szQueryFile, attr->value.line, attr->value.column, nullTerm(attr->value.value, mm_),
                                        (XQilla::Language)((m_language & ~XQilla::XSLT2) | XQilla::XPATH2), XQLexer::MODE_ATTR_VALUE_TEMPLATE));
            break;
          case AttrData::TEMPLATE_MODES:
            childLexer_.set(new XQLexer(mm_, m_szQueryFile, attr->value.line, attr->value.column, nullTerm(attr->value.value, mm_),
                                        (XQilla::Language)((m_language & ~XQilla::XSLT2) | XQilla::XPATH2), XQLexer::MODE_TEMPLATE_MODES));
            break;
          case AttrData::STRING:
            pYYLVAL->str = (XMLCh*)nullTerm(attr->value.value, mm_);
            break;
          case AttrData::QNAME:
            pYYLVAL->str = (XMLCh*)nullTerm(attr->value.value, mm_);
            if(!XMLChar1_0::isValidQName(pYYLVAL->str, XMLString::stringLen(pYYLVAL->str)))
              error("The attribute value is not a valid xs:QName [err:XTSE0020]");
            break;
          case AttrData::YESNO:
            XMLBuffer value;
            value.set((XMLCh*)attr->value.value.ptr, attr->value.value.len / sizeof(XMLCh));
            XMLString::collapseWS(value.getRawBuffer());

            if(XPath2Utils::equals(value.getRawBuffer(), YES_VALUE)) {
              pYYLVAL->boolean = true;
            }
            else if(XPath2Utils::equals(value.getRawBuffer(), NO_VALUE)) {
              pYYLVAL->boolean = false;
            }
            else {
              error("The attribute does not have a value of \"yes\" or \"no\" [err:XTSE0020]");
            }

            break;
          }

          RECOGNIZE(entry->token);
        }
      }
    }

    if(elementStack_->info == 0) {
      pYYLVAL->astNode = makeQNameLiteral(uri, nullTerm(attr->prefix, mm_), name);

      // Set up childLexer_ to lex the attribute value as an attribute value template
      childLexer_.set(new XQLexer(mm_, m_szQueryFile, attr->value.line, attr->value.column, nullTerm(attr->value.value, mm_),
                                  (XQilla::Language)((m_language & ~XQilla::XSLT2) | XQilla::XPATH2), XQLexer::MODE_ATTR_VALUE_TEMPLATE));

      RECOGNIZE(_XSLT_ATTR_NAME_);
    }
    else if(uri != 0) {
      // Extension attribute - ignore for the moment
      return yylex(pYYLVAL, pYYLOC);
    }
    else {
      ostringstream oss;
      oss << "Unexpected attribute {" << UTF8(uri) << "}" << UTF8(name) << " [err:XTSE0090]";
      error(oss.str().c_str());
    }
  }

  // Never happens
  RECOGNIZE(MYEOF);
}

#define checkTextBuffer(uri, name) \
{ \
  if(textToCreate_) { \
    bool isWS = XMLChar1_0::isAllSpaces(textBuffer_.getRawBuffer(), textBuffer_.getLen()); \
    if(((name) != 0 && XPath2Utils::equals((uri), XSLT_URI) && \
        XPath2Utils::equals((name), PARAM_NAME) && isWS) || \
       (!elementStack_->reportWhitespace() && isWS)) { \
      textBuffer_.reset(); \
      textToCreate_ = false; \
    } \
    else { \
      pYYLVAL->astNode = makeStringLiteral(mm_->getPooledString(textBuffer_.getRawBuffer())); \
\
      textBuffer_.reset(); \
      textToCreate_ = false; \
\
      state_ = CURRENT_EVENT; \
      if(isWS) { \
        RECOGNIZE(_XSLT_WS_TEXT_NODE_); \
      } \
      else { \
        RECOGNIZE(_XSLT_TEXT_NODE_); \
      } \
    } \
  } \
}

int XSLT2Lexer::next_event_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  if(selfClose_) {
    selfClose_ = false;

    setLocation(pYYLOC, FAXPP_get_current_event(parser_));
    popElementStack();

    RECOGNIZE(_XSLT_END_ELEMENT_);
  }

  FAXPP_Error err = FAXPP_next_event(parser_);
  if(err != NO_ERROR) {
    setErrorLocation(pYYLOC);

    ostringstream oss;
    oss << "Error parsing document: " << FAXPP_err_to_string(err);
    error(oss.str().c_str());
  }

  state_ = CURRENT_EVENT;
  return current_event_state(pYYLVAL, pYYLOC);
}

int XSLT2Lexer::current_event_state(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  while(true) {
    const FAXPP_Event *event = FAXPP_get_current_event(parser_);

    switch(event->type) {
    case SELF_CLOSING_ELEMENT_EVENT:
      selfClose_ = true;
      // Fall through
    case START_ELEMENT_EVENT: {
      const XMLCh *uri = nullTerm(event->uri, mm_);
      const XMLCh *name = nullTerm(event->name, mm_);

      checkTextBuffer(uri, name);

      setLocation(pYYLOC, event);
      elementStack_ = new ElementStackEntry(elementStack_);

      // See if we recognize the element
      if(XPath2Utils::equals(uri, XSLT_URI)) {
        for(const InstructionInfo *entry = INSTRUCTION_INFO; entry->name != 0; ++entry) {
          if(XPath2Utils::equals(name, entry->name)) {
            elementStack_->info = entry;
          }
        }
        if(elementStack_->info == 0)
          error("Unrecognized XSLT element");
      }

      // Check for namespace attrs
      for(unsigned int i = 0; i < event->attr_count; ++i) {
        FAXPP_Attribute *attr = &event->attrs[i];

        if(attr->xmlns_attr) {
          const XMLCh *prefix = attr->prefix.len != 0 ? nullTerm(attr->name, mm_) : 0;
          const XMLCh *uri = nullTerm(attr->value.value, mm_);

          if(elementStack_->info != 0 && elementStack_->info->token == _XSLT_STYLESHEET_) {
            // If this is the xsl:stylesheet element, add the namespace bindings to the context
            context_->setNamespaceBinding(prefix, uri);
          }
          else {
            if(elementStack_->nsResolver == elementStack_->prev->nsResolver) {
              elementStack_->nsResolver = new (mm_) XQillaNSResolverImpl(mm_, elementStack_->nsResolver != 0 ?
                                                                         elementStack_->nsResolver : context_->getNSResolver());
            }

            elementStack_->nsResolver->addNamespaceBinding(prefix, uri);
          }
        }
      }

      if(event->attr_count != 0) {
        state_ = ATTRS;
        index_ = 0;
      }
      else {
        state_ = NEXT_EVENT;
      }

      if(elementStack_->info != 0) {
        RECOGNIZE(elementStack_->info->token);
      }

      pYYLVAL->astNode = makeQNameLiteral(uri, nullTerm(event->prefix, mm_), name);

      RECOGNIZE(_XSLT_ELEMENT_NAME_);
    }
    case END_ELEMENT_EVENT:
      checkTextBuffer(0, 0);

      setLocation(pYYLOC, event);
      popElementStack();

      state_ = NEXT_EVENT;
      RECOGNIZE(_XSLT_END_ELEMENT_);
    case ENTITY_REFERENCE_EVENT:
      // TBD handle external parsed entities - jpcs
      if(event->value.ptr == 0) break;
      // Fall through
    case DEC_CHAR_REFERENCE_EVENT:
    case HEX_CHAR_REFERENCE_EVENT:
    case CHARACTERS_EVENT:
    case CDATA_EVENT:
      if(!textToCreate_) setLocation(pYYLOC, event);

      textBuffer_.append((XMLCh*)event->value.ptr, event->value.len / sizeof(XMLCh));
      textToCreate_ = true;
      break;
    case START_DOCUMENT_EVENT:
      elementStack_ = new ElementStackEntry();
      break;
    case END_DOCUMENT_EVENT:
      popElementStack();

      // End of file
      RECOGNIZE(MYEOF);
    case COMMENT_EVENT:
    case PI_EVENT:
      // 4.2.1 All comments and processing instructions are removed.
    case IGNORABLE_WHITESPACE_EVENT:
    case DOCTYPE_EVENT:
    case ENTITY_REFERENCE_START_EVENT:
    case ENTITY_REFERENCE_END_EVENT:
    case START_EXTERNAL_ENTITY_EVENT:
    case END_EXTERNAL_ENTITY_EVENT:
    case NO_EVENT:
      // Ignore
      break;
    }

    FAXPP_Error err = FAXPP_next_event(parser_);
    if(err != NO_ERROR) {
      setErrorLocation(pYYLOC);

      ostringstream oss;
      oss << "Error parsing document: " << FAXPP_err_to_string(err);
      error(oss.str().c_str());
    }
  }

  // Never happens
  RECOGNIZE(MYEOF);
}

int XSLT2Lexer::yylex(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  if(childLexer_.get() != 0) {
    int token = childLexer_->yylex(pYYLVAL, pYYLOC);
    if(token != MYEOF) {
      m_lineno = pYYLOC->first_line;
      m_columnno = pYYLOC->first_column;
      return token;
    }

    childLexer_.set(0);
  }

  switch(state_) {
  case LANG_TOKEN:
    return lang_token_state(pYYLVAL, pYYLOC);
  case ATTRS:
    return attrs_state(pYYLVAL, pYYLOC);
  case NEXT_EVENT:
    return next_event_state(pYYLVAL, pYYLOC);
  case CURRENT_EVENT:
    return current_event_state(pYYLVAL, pYYLOC);
  }

  // Never happens
  RECOGNIZE(MYEOF);
}

ASTNode *XSLT2Lexer::wrap(ASTNode *result) const
{
  result->setLocationInfo(m_szQueryFile, m_lineno, m_columnno);
  return result;
}

ASTNode *XSLT2Lexer::makeQNameLiteral(const XMLCh *uri, const XMLCh *prefix, const XMLCh *name) const
{
  ATQNameConstructor *constr = new (mm_)
    ATQNameConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                       SchemaSymbols::fgDT_QNAME,
                       uri, prefix, name);

  return wrap(new (mm_) XQLiteral(constr, mm_));
}

ASTNode *XSLT2Lexer::makeDirectName(const XMLCh *prefix, const XMLCh *name) const
{
  static const XMLCh colon[] = { ':', 0 };

  return wrap(new (mm_) XQDirectName(prefix == 0 ? name : XPath2Utils::concatStrings(prefix, colon, name, mm_), /*isAttr*/true, mm_));
}

ASTNode *XSLT2Lexer::makeStringLiteral(const XMLCh *value) const
{
  AnyAtomicTypeConstructor *constr = new (mm_)
    AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                             SchemaSymbols::fgDT_STRING,
                             value, AnyAtomicType::STRING);

  return wrap(new (mm_) XQLiteral(constr, mm_));
}

void XSLT2Lexer::setLocation(YYLTYPE* pYYLOC, const FAXPP_Event *event)
{
  pYYLOC->first_line = m_lineno = event->line;
  pYYLOC->first_column = m_columnno = event->column;
}

void XSLT2Lexer::setLocation(YYLTYPE* pYYLOC, const FAXPP_Attribute *attr)
{
  pYYLOC->first_line = m_lineno = attr->line;
  pYYLOC->first_column = m_columnno = attr->column;
}

void XSLT2Lexer::setErrorLocation(YYLTYPE* pYYLOC)
{
  pYYLOC->first_line = m_lineno = FAXPP_get_error_line(parser_);
  pYYLOC->first_column = m_columnno = FAXPP_get_error_column(parser_);
}

void XSLT2Lexer::popElementStack()
{
  ElementStackEntry *tmp = elementStack_->prev;
  delete elementStack_;
  elementStack_ = tmp;
}

DOMXPathNSResolver *XSLT2Lexer::getNSResolver() const
{
  return elementStack_->nsResolver;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

XSLT2Lexer::ElementStackEntry::ElementStackEntry()
  : info(0),
    xmlSpacePreserve(false),
    nsResolver(0),
    prev(0)
{
}

XSLT2Lexer::ElementStackEntry::ElementStackEntry(ElementStackEntry *p)
  : info(0),
    xmlSpacePreserve(p->xmlSpacePreserve),
    nsResolver(p->nsResolver),
    prev(p)
{
}

bool XSLT2Lexer::ElementStackEntry::reportWhitespace() const
{
  if(xmlSpacePreserve) return info == 0 || info->whitespace != InstructionInfo::STRIP;
  return info != 0 && info->whitespace == InstructionInfo::PRESERVE;
}

#endif
