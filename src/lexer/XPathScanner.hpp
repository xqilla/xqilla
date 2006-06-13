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

#ifndef _XPATHLEXER_HPP
#define _XPATHLEXER_HPP

#include "XQillaLexer.hpp"

#ifndef yyFlexLexer 
#define yyFlexLexer xpathFlexLexer
#include "FlexLexer.h"
#endif

#include <xqilla/simple-api/XQQuery.hpp>

#ifndef YYSTYPE
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQPredicate.hpp>
#include <xqilla/schema/SequenceType.hpp>

class NodeTest;
class QualifiedName;

typedef union {

  ASTNode* astNodeImpl;
  XMLCh *str;
  NodeTest *nodeTest;
  XQStep::Axis axis;
  QualifiedName *qName;
  VectorOfASTNodes *astNodeStore;
  VectorOfPredicates *predicates;
  SequenceType* sequenceType;
  SequenceType::OccurrenceIndicator occurrence;
  SequenceType::ItemType* itemType;
  VectorOfVariableBinding* variableBinding;
} yystype;

#define YYSTYPE yystype
#define YYSTYPE_IS_DECLARED 1
#define YYSTYPE_IS_TRIVIAL 1
#endif  // #ifndef YYSTYPE

#include "../parser/XPath2Parser.hpp"	// to be included *after* defining YYSTYPE and YYLTYPE

class XQILLA_API CXPathScanner : public CXQillaLexer, public xpathFlexLexer
{
public:
	CXPathScanner(XPath2MemoryManager* memMgr, const XMLCh* query)
        : CXQillaLexer(memMgr, query)
    {
    }

	// Implemented in XPathScanner.cpp, output of xpath.l
	virtual int yylex();

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

protected:
	virtual int LexerInput( YY_CHAR* buf, int max_size )
    {
        return CXQillaLexer::Read(buf, max_size);
	}

    virtual void LexerOutput( const YY_CHAR* buf, int size )
	{
	    // do nothing
	}

	virtual void LexerError( const char* msg )
    {
        CXQillaLexer::Error(msg);
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
        xpathFlexLexer::yy_pop_state();
    }

    virtual bool next_tokens(int state, int tok1, int tok2=0)
    {
        CXPathScanner lookAhead(m_memMgr, m_szQuery+m_index);
        lookAhead.yy_start=1 + 2 * state;

        int nextToken1 = lookAhead.yylex();
        if(tok1!=nextToken1)
            return false;
        int nextToken2 = 0;
        if(tok2!=0)
            nextToken2 = lookAhead.yylex();

        return (tok2==nextToken2);
    }

	YYSTYPE yylval;
};

class XPath2ParserArgs
{
public:
    XPath2ParserArgs() : _scanner(0), _memMgr(0), _query(0) {}

    CXPathScanner* _scanner;
    XPath2MemoryManager* _memMgr;
    XQQuery* _query;
};

namespace XPath2 {
	extern int yyparse(void *);
	extern int yydebug;
}


#endif
