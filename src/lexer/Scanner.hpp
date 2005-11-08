/*
 * Copyright (c) 2001-2005
 *     DecisionSoft Limited. All rights reserved.
 * Copyright (c) 2004-2005
 *     Progress Software Corporation. All rights reserved.
 * Copyright (c) 2004-2005
 *     Sleepycat Software. All rights reserved.
 * Copyright (c) 2004-2005
 *     Parthenon Computing Ltd. All rights reserved.
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

#ifndef XQUERYSCANNER_H
#define XQUERYSCANNER_H

#define YY_CHAR unsigned short

#include <xqilla/framework/XQillaExport.hpp>
#include "FlexLexer.h"
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/XQException.hpp>

#ifndef YYSTYPE
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQVariableBinding.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>

typedef union {
	XMLCh* str;
	ASTNode* astNode;
	XQUserFunction* functDecl;
	XQUserFunction::XQFunctionParameter* funcParam;
	XQUserFunction::VectorOfFunctionParameters* funcParams;
	NodeTest *nodeTest;
	XQStep::Axis axis;
	QualifiedName *qName;
	SequenceType* sequenceType;
	SequenceType::OccurrenceIndicator occurrence;
	SequenceType::ItemType* itemType;
	VectorOfASTNodes* itemList;
	XQVariableBinding* variableBinding;
	VectorOfVariableBinding* variableBindingList;
	XQTypeswitch::Clause* clause;
	XQTypeswitch::VectorOfClause* clauseList;
	XQSort::SortSpec::sortModifier sortModifier;
	XQSort::VectorOfSortSpec* sortSpecList;
	XQSort::SortSpec* sortSpec;
	XQSort* sort;
    VectorOfStrings* stringList;
} yystype;
#define YYSTYPE yystype
#endif  // #ifndef YYSTYPE

typedef struct yyltype
{
  int first_line;
  int first_column;

  int last_line;
  int last_column;

  int first_offset;
  int last_offset;

  yyltype() {
	  first_line=last_line=1;
	  first_column=last_column=0;
	  first_offset=last_offset=0;
  }
} yyltype;
#define YYLTYPE yyltype

#define YY_USER_ACTION	userAction();

#include "../parser/Grammar.hpp"	// to be included *after* defining YYSTYPE and YYLTYPE

#define YYLLOC_DEFAULT(Current, Rhs, N)       	\
  Current.first_line   = Rhs[1].first_line;     \
  Current.first_column = Rhs[1].first_column;   \
  Current.last_line    = Rhs[N].last_line;	    \
  Current.last_column  = Rhs[N].last_column;    \
  Current.first_offset = Rhs[1].first_offset;   \
  Current.last_offset  = Rhs[N].last_offset;

class XQILLA_API CXQueryScanner : public yyFlexLexer
{
public:
	CXQueryScanner(XPath2MemoryManager* memMgr, const XMLCh* query)
    {
	    m_index=m_position=0;
	    m_lineno=m_columnno=1;
	    m_szQuery=query;
        m_memMgr=memMgr;
        m_nLength=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(query);
        m_nOpenComments=0;
    	m_bGenerateEOF=m_bReportWhiteSpace=false;
    }

	// Implemented in scanner.cpp, output of xquery.l
	virtual int yylex();

    const XMLCh* getQueryString() { return m_szQuery; }
    void setGenerateEOF(bool bEnable) { m_bGenerateEOF=bEnable; }
    void setGenerateWhiteSpace(bool bEnable) { m_bReportWhiteSpace=bEnable; }

    int yylex(YYSTYPE* pYYLVAL, YYLTYPE* pYYLOC)
    {
	    int nextToken=yylex();
	    memcpy(pYYLVAL,&yylval,sizeof(YYSTYPE));
	    memcpy(pYYLOC,&m_yyloc,sizeof(YYLTYPE));
	    return nextToken;
    }

	int yylex(YYSTYPE* pYYLVAL)
    {
	    int nextToken=yylex();
	    memcpy(pYYLVAL,&yylval,sizeof(YYSTYPE));
	    return nextToken;
    }

	virtual int error(const char* message)
    {
	    LexerError(message);
	    return 0;
    }

    virtual void beginComment()
    {
        m_nOpenComments++;
    }
    virtual void endComment()
    {
        if(m_nOpenComments==0)
            LexerError("Unbalanced comment found");
        m_nOpenComments--;
    }

    XMLCh* allocate_string(const XMLCh* src, int len=-1)
    {
	    if(len==-1)
    	    return (XMLCh*)m_memMgr->getPooledString(src);
        return (XMLCh*)XPath2Utils::subString(src,0,len,m_memMgr);
    }

    XMLCh* allocate_string_and_unescape(XMLCh toBeUnescaped, const XMLCh* src, int len)
    {
	    int j=0;
	    XMLCh* dst=(XMLCh*)m_memMgr->allocate((len+1)*sizeof(XMLCh));
	    for(int i=0;i<len;i++)
	    {
		    if(src[i]=='&')
		    {
                static XMLCh szAmp[]={  XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_m,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p, XERCES_CPP_NAMESPACE_QUALIFIER chSemiColon,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chNull };
                static XMLCh szQuot[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_q, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_u,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chSemiColon, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
                static XMLCh szApos[]={ XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_p,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chLatin_o, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_s,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chSemiColon, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
                static XMLCh szLt[]={   XERCES_CPP_NAMESPACE_QUALIFIER chLatin_l, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chSemiColon, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
                static XMLCh szGt[]={   XERCES_CPP_NAMESPACE_QUALIFIER chLatin_g, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_t,
                                        XERCES_CPP_NAMESPACE_QUALIFIER chSemiColon, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
			    // entity reference
                if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareNString(src+i+1,szAmp,4)==0) {
				    dst[j++]='&'; i+=4;
			    } else if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareNString(src+i+1,szQuot,5)==0) {
				    dst[j++]='"'; i+=5;
			    } else if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareNString(src+i+1,szApos,5)==0) {
				    dst[j++]='\''; i+=5;
			    } else if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareNString(src+i+1,szLt,3)==0) {
				    dst[j++]='<'; i+=3;
			    } else if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareNString(src+i+1,szGt,3)==0) {
				    dst[j++]='>'; i+=3;
			    } else if(*(src+i+1)==XERCES_CPP_NAMESPACE_QUALIFIER chPound) {
                    unsigned int value = 0;
                    unsigned int radix = 10;
				    i+=2;
                    if(*(src+i)==XERCES_CPP_NAMESPACE_QUALIFIER chLatin_x)
                    {
                        i++;
                        radix=16;
                    }
				    int k=i;
				    while(k<len && src[k]!=';') k++;
				    if(k==len)
					    LexerError("Unterminated entity reference");
                    for(int q=i;q<k;q++)
                    {
                        unsigned int nextVal;
                        XMLCh nextCh=*(src+q);
                        if ((nextCh >= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0) && (nextCh <= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_9))
                            nextVal = (unsigned int)(nextCh - XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0);
                        else if ((nextCh >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A) && (nextCh <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F))
                            nextVal= (unsigned int)(10 + (nextCh - XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A));
                        else if ((nextCh >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a) && (nextCh <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_f))
                            nextVal = (unsigned int)(10 + (nextCh - XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a));
                        else
    					    LexerError("Unterminated entity reference");
                        if (nextVal >= radix)
    					    LexerError("Invalid digit inside entity reference");
                        else
                            value = (value * radix) + nextVal;
                    }
				    dst[j++]=value;
				    i=k;
			    } else
				    LexerError("Invalid entity reference");
		    }
		    else
			    dst[j++]=src[i];
		    if(src[i]==toBeUnescaped && (i+1)<len && src[i]==src[i+1])
			    i++;
	    }
	    dst[j++]=0;
	    return dst;
    }

protected:
	virtual int LexerInput( YY_CHAR* buf, int max_size )
    {
	    int nToRead=m_nLength-m_position;
	    if(nToRead==0)
		    return 0;

	    if(nToRead>max_size)
		    nToRead=max_size;
        XERCES_CPP_NAMESPACE_QUALIFIER XMLString::subString(buf,m_szQuery,m_position,m_position+nToRead);
	    m_position+=nToRead;
	    return nToRead;
	}

    virtual void LexerOutput( const YY_CHAR* buf, int size )
	{
	    // do nothing
	}

	virtual void LexerError( const char* msg )
    {
        XMLCh szMsg[256];
        XERCES_CPP_NAMESPACE_QUALIFIER XMLString::transcode(msg,szMsg,256,m_memMgr);
        XERCES_CPP_NAMESPACE_QUALIFIER XMLString::catString(szMsg, X(" [err:XPST0003]"));
	    XQSimpleThrow(szMsg, NULL, m_lineno, m_columnno);
    }

	virtual void yy_pop_state()
    {
        if(yy_start_stack_ptr==0)
        {
            XMLCh szMsg[256];
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::copyString(szMsg, X("Unbalanced '"));
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::catString(szMsg, yytext);
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::catString(szMsg, X("' token"));
	        XQSimpleThrow(szMsg, NULL, m_lineno, m_columnno);
        }
        yyFlexLexer::yy_pop_state();
    }

	virtual void userAction()
    {
	    m_yyloc.first_line=m_lineno; m_yyloc.first_column=m_columnno; m_yyloc.first_offset=m_index;
	    m_index+=yyleng;
	    for(int i=0;i<yyleng;i++)
        {
            if(yytext[i]=='\n')
            {
                m_lineno++;
                m_columnno=1;
            }
            else if(yytext[i]!='\r')
                m_columnno++;
        }
		m_yyloc.last_line=m_lineno;
        m_yyloc.last_column=m_columnno;
        m_yyloc.last_offset=m_index -1;
    }

	virtual void undoUserAction()
    {
	    // undo the changes done in the user action, or there will be a hole in the (first,last) sequence
	    m_lineno=m_yyloc.last_line=m_yyloc.first_line;
	    m_columnno=m_yyloc.last_column=m_yyloc.first_column;
	    m_index=m_yyloc.last_offset=m_yyloc.first_offset;
    }

    const XMLCh* m_szQuery;
    unsigned int m_nLength;
	int m_position,m_index;
	XPath2MemoryManager* m_memMgr;
	int m_lineno,m_columnno;

    YYLTYPE m_yyloc;
	YYSTYPE yylval;

    int m_nOpenComments;
	bool m_bGenerateEOF, m_bReportWhiteSpace;
};

class XQueryParserArgs
{
public:
    CXQueryScanner* _scanner;
    DynamicContext* _context;
    XQQuery* _query;
};

namespace XQuery {
	extern int yyparse(void *);
}


#endif // #ifdef XQUERYSCANNER_H

