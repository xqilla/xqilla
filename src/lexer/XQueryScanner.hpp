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

#include "XQillaLexer.hpp"

#ifndef yyFlexLexer 
#define yyFlexLexer xqueryFlexLexer
#include "FlexLexer.h"
#endif

#include <xercesc/util/BitSet.hpp>
#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/context/DynamicContext.hpp>

#ifndef YYSTYPE
#include <xqilla/ast/ASTNode.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/parser/QName.hpp>
#include <xqilla/functions/XQUserFunction.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQVariableBinding.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQPredicate.hpp>

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
	VectorOfPredicates* predicates;
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

#include "../parser/XQueryParser.hpp"	// to be included *after* defining YYSTYPE and YYLTYPE

class XQILLA_API CXQueryScanner : public CXQillaLexer, public xqueryFlexLexer
{
public:
	CXQueryScanner(XPath2MemoryManager* memMgr, const XMLCh* query)
        : CXQillaLexer(memMgr, query)
    {
    }

	// Implemented in scanner.cpp, output of xquery.l
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
        yyFlexLexer::yy_pop_state();
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

	YYSTYPE yylval;
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

