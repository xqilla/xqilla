/*
 * Copyright (c) 2001-2007
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2007
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

#include "XQLexer.hpp"

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/framework/XPath2MemoryManager.hpp>
#include <xqilla/exceptions/XQException.hpp>

XERCES_CPP_NAMESPACE_USE;

XQLexer::XQLexer(XPath2MemoryManager* memMgr, const XMLCh *queryFile, const XMLCh* query, XQilla::Language lang)
  : firstToken_(true),
    m_szQueryFile(queryFile),
    m_szQuery(XPath2Utils::normalizeEOL(query, memMgr)),
    m_nLength(XMLString::stringLen(m_szQuery)),
    m_position(0),
    m_index(0),
    m_memMgr(memMgr),
    m_lineno(1),
    m_columnno(1),
    m_nOpenComments(0),
    m_bGenerateErrorException(true),
    m_language(lang)
{
}

XQLexer::XQLexer(const XQLexer *other)
  : firstToken_(false),
    m_szQueryFile(other->m_szQueryFile),
    m_szQuery(other->m_szQuery + other->m_index),
    m_nLength(other->m_nLength - other->m_index),
    m_position(0),
    m_index(0),
    m_memMgr(other->m_memMgr),
    m_lineno(1),
    m_columnno(1),
    m_nOpenComments(0),
    m_bGenerateErrorException(false),
    m_language(other->m_language)
{
  yy_start = other->yy_start;
}

int XQLexer::yylex(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
{
  int nextToken=yylex();
  memcpy(pYYLVAL,&yylval,sizeof(YYSTYPE));
  memcpy(pYYLOC,&yyloc,sizeof(YYLTYPE));
  if(nextToken==0 && !isCommentClosed())
    LexerError("Unterminated comment");
  return nextToken;
}

void XQLexer::beginComment()
{
  m_nOpenComments++;
}
void XQLexer::endComment()
{
  if(m_nOpenComments==0)
    {
      error("Unbalanced comment found");
      return;
    }
  m_nOpenComments--;
}
bool XQLexer::isCommentClosed()
{
  return m_nOpenComments==0;
}

XMLCh* XQLexer::allocate_string(const XMLCh* src)
{
  return (XMLCh*)m_memMgr->getPooledString(src);
}

XMLCh* XQLexer::allocate_string(const XMLCh* src, int len)
{
  return (XMLCh*)XPath2Utils::subString(src,0,len,m_memMgr);
}

XMLCh *XQLexer::allocate_string_and_unescape(XMLCh *src, int len, XMLCh quoteChar, bool unescapeBrace)
{
  // The input to this method has already been validated by the lexer,
  // so we don't need to do error checking

  *(src + len) = 0; // Null terminate the source

  XMLCh *result = (XMLCh*)m_memMgr->allocate((len + 1) * sizeof(XMLCh));
  XMLCh *dst = result;

  for(; *src; ++src) {
    switch(*src) {
    case '&':
      ++src;
      switch(*src) {
      case 'a':
        ++src;
        if(*src == 'm') {
          // &amp;
          *dst = '&';
          ++dst;
          src += 2;
        }
        else {
          // &apos;
          *dst = '\'';
          ++dst;
          src += 3;
        }
        break;
      case 'g':
        // &gt;
        *dst = '>';
        ++dst;
        src += 2;
        break;
      case 'l':
        // &lt;
        *dst = '<';
        ++dst;
        src += 2;
        break;
      case 'q':
        // &quot;
        *dst = '"';
        ++dst;
        src += 4;
        break;
      case '#': {
        // character reference
        unsigned int value = 0;
        unsigned int radix = 10;
        ++src;
        if(*src == 'x') {
          ++src;
          radix=16;
        }

        for(; *src != ';'; ++src) {
          if(*src >= 'a') value = (value * radix) + (*src - 'a' + 10);
          else if(*src >= 'A') value = (value * radix) + (*src - 'A' + 10);
          else value = (value * radix) + (*src - '0');
        }

        if(!XMLChar1_0::isXMLChar(value))
          error("Entity reference is not a valid XML character [err:XQST0090]");

        if(value <= 0xFFFD)
          *dst = value;
        else if (value >= 0x10000 && value <= 0x10FFFF) {
          value -= 0x10000;
          *dst = (value >> 10) + 0xD800;
          ++dst;
          *dst = (value & 0x3FF) + 0xDC00;
        }
        ++dst;
        break;
      }
      default:
        error("Should never happen");
        break;
      }
      break;
    case '\n':
    case '\r':
    case '\t':
      if(quoteChar != 0 && unescapeBrace) {
        // Normalize whitespace in attribute contents
        *dst = chSpace;
      }
      else {
        *dst = *src;
      }
      ++dst;
      break;
    case '<': {
      if(quoteChar != 0) {
        *dst = *src;
        ++dst;
        break;
      }

      src += 9; // Length of "<![CDATA["

      // Eat the CDATA section
      int endSeen = 0;
      for(;; ++src) {
        if(*src == ']') {
          endSeen += 1;
        }
        else if(endSeen >= 2 && *src == '>') {
          // Don't include the terminator "]]>"
          dst -= 2;
          break;
        }
        else {
          endSeen = 0;
        }
        *dst = *src;
        ++dst;
      }
      break;
    }
    case '\'':
    case '"':
      *dst = *src;
      ++dst;
      if(*src == quoteChar && *(src + 1) == quoteChar)
        ++src;
      break;
    case '{':
    case '}':
      *dst = *src;
      ++dst;
      if(unescapeBrace && *(src + 1) == *src)
        ++src;
      break;
    default:
      *dst = *src;
      ++dst;
      break;
    }
  }

  *dst = 0;
  return result;
}

int XQLexer::LexerInput( YY_CHAR* buf, int max_size )
{
  int nToRead=m_nLength-m_position;
  if(nToRead==0)
    return 0;

  if(nToRead>max_size)
    nToRead=max_size;
  XMLString::subString((XMLCh*)buf,m_szQuery,m_position,m_position+nToRead);
  m_position+=nToRead;
  return nToRead;
}

void XQLexer::LexerOutput( const YY_CHAR* buf, int size )
{
  // do nothing
}

void XQLexer::LexerError( const char* msg )
{
  error(msg);
}

void XQLexer::Error( const char* msg, int line, int col )
{
  if(!m_bGenerateErrorException)
    return;
  if(strstr(msg, "[err:")!=NULL)
    XQSimpleThrow(X(msg), m_szQueryFile, m_lineno, m_columnno);
  const XMLCh* szMsg=XPath2Utils::concatStrings(X(msg), X(" [err:XPST0003]"), m_memMgr);
  XQSimpleThrow(szMsg, m_szQueryFile, m_lineno, m_columnno);
}

void XQLexer::Error(XQilla::Language lang, const char *where, unsigned int line, unsigned int col)
{
  if(!m_bGenerateErrorException)
    return;
  char *l;
  switch(lang) {
  case XQilla::XQUERY: l = "XQuery"; break;
  case XQilla::XPATH2: l = "XPath 2.0"; break;
  case XQilla::XQUERY_FULLTEXT: l = "XQuery Full-Text"; break;
  case XQilla::XPATH2_FULLTEXT: l = "XPath 2.0 Full-Text"; break;
  case XQilla::XQUERY_UPDATE: l = "XQuery Update"; break;
  case XQilla::XQUERY_FULLTEXT_UPDATE: l = "XQuery Full-Text Update"; break;
  }

  const XMLCh *szMsg = XPath2Utils::concatStrings(X("Invalid "), X(l), X(" syntax: "), m_memMgr);
  szMsg = XPath2Utils::concatStrings(szMsg, X(where), X(" [err:XPST0003]"), m_memMgr);
  XQSimpleThrow(szMsg, m_szQueryFile, line, col);
}

void XQLexer::userAction(YY_CHAR* text, int length)
{
  yyloc.first_line = m_lineno;
  yyloc.first_column = m_columnno;
  yyloc.first_offset = m_index;

  m_index += length;
  for(int i = 0; i < length; ++i) {
    if(text[i] == '\n') {
      ++m_lineno;
      m_columnno = 1;
    }
    else if(text[i] != '\r')
      ++m_columnno;
  }
  yyloc.last_line = m_lineno;
  yyloc.last_column = m_columnno;
  yyloc.last_offset = m_index - 1;
}

void XQLexer::undoUserAction()
{
  // undo the changes done in the user action, or there will be a hole in the (first,last) sequence
  m_lineno=yyloc.last_line=yyloc.first_line;
  m_columnno=yyloc.last_column=yyloc.first_column;
  m_index=yyloc.last_offset=yyloc.first_offset;
}

void XQLexer::yy_pop_state()
{
  if(yy_start_stack_ptr == 0) {
    char szMsg[256], text[256];
    XMLString::copyString(szMsg, "Unbalanced '");
    XMLString::transcode((XMLCh*)yytext, text, 256);
    XMLString::catString(szMsg, text);
    XMLString::catString(szMsg, "' token");
    LexerError(szMsg);
  }
  else
    yyFlexLexer::yy_pop_state();
}

int XQLexer::lookAhead()
{
  return XQLexer(this).yylex();
}

