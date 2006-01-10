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

#ifndef XQUERYSCANNER_H
#define XQUERYSCANNER_H

#define YY_CHAR unsigned short

#include <xqilla/framework/XQillaExport.hpp>
#include "FlexLexer.h"
#include <xercesc/util/XMLUniDefs.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/util/BitSet.hpp>
#include <xercesc/util/XMLChar.hpp>
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
#define YYSTYPE_IS_DECLARED 1
#define YYSTYPE_IS_TRIVIAL 1
#endif  // #ifndef YYSTYPE

typedef struct yyltype
{
  int first_line;
  int first_column;

  int last_line;
  int last_column;

  int first_offset;
  int last_offset;
} yyltype;
#define YYLTYPE yyltype
#define YYLTYPE_IS_DECLARED 1
#define YYLTYPE_IS_TRIVIAL 1

#define YY_USER_ACTION	userAction();

#include "../parser/Grammar.hpp"	// to be included *after* defining YYSTYPE and YYLTYPE

#define YYLLOC_DEFAULT(Current, Rhs, N)       	\
    do									\
     if (N)								\
	 {								\
	  (Current).first_line   = (Rhs)[1].first_line;	\
	  (Current).first_column = (Rhs)[1].first_column;	\
	  (Current).last_line    = (Rhs)[N].last_line;		\
	  (Current).last_column  = (Rhs)[N].last_column;	\
	  (Current).first_offset = (Rhs)[1].first_offset;  \
	  (Current).last_offset  = (Rhs)[N].last_offset;   \
	 }								\
     else								\
	 {								\
	  (Current).first_line   = (Current).last_line   =		\
	    (Rhs)[0].last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    (Rhs)[0].last_column;				\
	  (Current).first_offset = (Current).last_offset =		\
	    (Rhs)[0].last_offset;				\
	}								\
    while (0)

class XQILLA_API CXQueryScanner : public yyFlexLexer
{
public:
	CXQueryScanner(XPath2MemoryManager* memMgr, const XMLCh* query)
    {
	    m_index=m_position=0;
	    m_lineno=m_columnno=1;
        m_memMgr=memMgr;
        m_szQuery=XPath2Utils::normalizeEOL(query, m_memMgr);
        m_nLength=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(m_szQuery);
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
                    if(!XERCES_CPP_NAMESPACE_QUALIFIER XMLChar1_0::isXMLChar(value))
                        LexerError("Entity reference is not a valid XML character");
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
        XERCES_CPP_NAMESPACE_QUALIFIER XMLString::subString((XMLCh*)buf,m_szQuery,m_position,m_position+nToRead);
	    m_position+=nToRead;
	    return nToRead;
	}

    virtual void LexerOutput( const YY_CHAR* buf, int size )
	{
	    // do nothing
	}

	virtual void LexerError( const char* msg )
    {
        if(strstr(msg, "[err:")!=NULL)
    	    XQSimpleThrow(X(msg), NULL, m_lineno, m_columnno);
        const XMLCh* szMsg=XPath2Utils::concatStrings(X(msg), X(" [err:XPST0003]"), m_memMgr);
	    XQSimpleThrow(szMsg, NULL, m_lineno, m_columnno);
    }

	virtual void yy_pop_state()
    {
        if(yy_start_stack_ptr==0)
        {
            XMLCh szMsg[256];
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::copyString(szMsg, X("Unbalanced '"));
            XERCES_CPP_NAMESPACE_QUALIFIER XMLString::catString(szMsg, (XMLCh*)yytext);
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

    virtual bool next_tokens(int state, int tok1, int tok2=0)
    {
        CXQueryScanner lookAhead(m_memMgr, m_szQuery+m_index);
        lookAhead.yy_start=1 + 2 * state;

        int nextToken1 = lookAhead.yylex();
        if(tok1!=nextToken1)
            return false;
        int nextToken2 = 0;
        if(tok2!=0)
            nextToken2 = lookAhead.yylex();

        return (tok2==nextToken2);
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
    XQueryParserArgs() : _scanner(0), _context(0), _query(0), _flags(32) {}

    CXQueryScanner* _scanner;
    DynamicContext* _context;
    XQQuery* _query;
    XERCES_CPP_NAMESPACE_QUALIFIER BitSet _flags;
};

namespace XQuery {
	extern int yyparse(void *);
	extern int yydebug;
}


#endif // #ifdef XQUERYSCANNER_H

