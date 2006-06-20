/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MYEOF = 0,
     _QNAME_ = 258,
     _FUNCTION_CALL_ = 259,
     _TAG_NAME_ = 260,
     _ATTRIBUTE_NAME_ = 261,
     _STRING_LITERAL_ = 262,
     _VARIABLE_ = 263,
     _CHAR_ = 264,
     _CHAR_REF_ = 265,
     _PREDEFINED_ENTITY_REF_ = 266,
     _NCNAME_COLON_STAR_ = 267,
     _STAR_COLON_NCNAME_ = 268,
     _NCNAME_ = 269,
     _PI_TARGET_ = 270,
     _NAMED_ATTRIBUTE_CONSTR_ = 271,
     _NAMED_ELEMENT_CONSTR_ = 272,
     _INTEGER_NUMBER_ = 273,
     _DECIMAL_NUMBER_ = 274,
     _DOUBLE_NUMBER_ = 275,
     _XML_COMMENT_ = 276,
     _CDATA_SECTION_ = 277,
     _PROCESSING_INSTRUCTION_CONTENT_ = 278,
     _NAMED_PROCESSING_INSTRUCTION_CONSTR_ = 279,
     _PRAGMA_NAME_ = 280,
     _PRAGMA_CONTENT_ = 281,
     _XQUERY_COMMENT_ = 282,
     _XQUERY_WHITESPACE_ = 283,
     _XQUERY_ERROR_ = 284,
     _PRAGMA_OPEN_ = 285,
     _PRAGMA_CLOSE_ = 286,
     _ESCAPE_APOS_ = 287,
     _ESCAPE_QUOT_ = 288,
     _COMMA_ = 289,
     _RETURN_ = 290,
     _FOR_ = 291,
     _IN_ = 292,
     _DOLLAR_SIGN_ = 293,
     _AT_KEYWORD_ = 294,
     _LET_ = 295,
     _COLON_EQ_ = 296,
     _WHERE_ = 297,
     _BY_ = 298,
     _ORDER_ = 299,
     _STABLE_ = 300,
     _ASCENDING_ = 301,
     _DESCENDING_ = 302,
     _EMPTY_KEYWORD_ = 303,
     _GREATEST_ = 304,
     _LEAST_ = 305,
     _COLLATION_ = 306,
     _SOME_ = 307,
     _EVERY_ = 308,
     _SATISFIES_ = 309,
     _TYPESWITCH_ = 310,
     _CASE_ = 311,
     _AS_ = 312,
     _IF_ = 313,
     _THEN_ = 314,
     _ELSE_ = 315,
     _OR_ = 316,
     _AND_ = 317,
     _INSTANCE_ = 318,
     _OF_ = 319,
     _CASTABLE_ = 320,
     _TO_ = 321,
     _PLUS_ = 322,
     _MINUS_ = 323,
     _MULTIPLY_ = 324,
     _DIV_ = 325,
     _INTEGER_DIV_ = 326,
     _MOD_ = 327,
     _UNION_ = 328,
     _VERTICAL_BAR_ = 329,
     _INTERSECT_ = 330,
     _EXCEPT_ = 331,
     _SLASH_ = 332,
     _SLASHSLASH_ = 333,
     _LBRACK_ = 334,
     _RBRACK_ = 335,
     _VALIDATE_ = 336,
     _MODE_LAX_ = 337,
     _MODE_STRICT_ = 338,
     _CAST_ = 339,
     _TREAT_ = 340,
     _EQUALS_ = 341,
     _NOT_EQUALS_ = 342,
     _LT_ = 343,
     _LT_EQUALS_ = 344,
     _GT_ = 345,
     _GT_EQUALS_ = 346,
     _FORTRAN_EQ_ = 347,
     _FORTRAN_NE_ = 348,
     _FORTRAN_LT_ = 349,
     _FORTRAN_LE_ = 350,
     _FORTRAN_GT_ = 351,
     _FORTRAN_GE_ = 352,
     _IS_ = 353,
     _LT_LT_ = 354,
     _GT_GT_ = 355,
     _DOT_ = 356,
     _AT_ = 357,
     _DOT_DOT_ = 358,
     _AXIS_CHILD_ = 359,
     _AXIS_DESCENDANT_ = 360,
     _AXIS_ATTRIBUTE_ = 361,
     _AXIS_SELF_ = 362,
     _AXIS_DESCENDANT_OR_SELF_ = 363,
     _AXIS_PARENT_ = 364,
     _STAR_ = 365,
     _PROCESSING_INSTRUCTION_LPAR_ = 366,
     _COMMENT_LPAR_ = 367,
     _TEXT_LPAR_ = 368,
     _NODE_LPAR_ = 369,
     _LPAR_ = 370,
     _RPAR_ = 371,
     _START_TAG_OPEN_ = 372,
     _EMPTY_TAG_CLOSE_ = 373,
     _VALUE_INDICATOR_ = 374,
     _END_TAG_OPEN_ = 375,
     _TAG_CLOSE_ = 376,
     _DOCUMENT_CONSTR_ = 377,
     _ELEMENT_CONSTR_ = 378,
     _ATTRIBUTE_CONSTR_ = 379,
     _TEXT_CONSTR_ = 380,
     _PROCESSING_INSTRUCTION_START_ = 381,
     _LCURLY_BRACE_ESCAPE_ = 382,
     _RCURLY_BRACE_ESCAPE_ = 383,
     _OPEN_QUOT_ = 384,
     _CLOSE_QUOT_ = 385,
     _OPEN_APOS_ = 386,
     _CLOSE_APOS_ = 387,
     _LBRACE_ = 388,
     _RBRACE_ = 389,
     _PRESERVE_ = 390,
     _STRIP_ = 391,
     _NAMESPACE_ = 392,
     _EXPR_AS_ = 393,
     _EMPTY_ = 394,
     _ITEM_ = 395,
     _NILLABLE_ = 396,
     _DOCUMENT_NODE_LPAR_ = 397,
     _ATTRIBUTE_LPAR_ = 398,
     _ELEMENT_LPAR_ = 399,
     _EXTERNAL_ = 400,
     _PROCESSING_INSTRUCTION_CONSTR_ = 401,
     _COMMENT_CONSTR_ = 402,
     _AXIS_ANCESTOR_OR_SELF_ = 403,
     _AXIS_ANCESTOR_ = 404,
     _AXIS_FOLLOWING_SIBLING_ = 405,
     _AXIS_FOLLOWING_ = 406,
     _AXIS_PRECEDING_SIBLING_ = 407,
     _AXIS_PRECEDING_ = 408,
     _SEMICOLON_ = 409,
     _SCHEMA_ELEMENT_LPAR_ = 410,
     _SCHEMA_ATTRIBUTE_LPAR_ = 411,
     _ORDERED_ = 412,
     _UNORDERED_ = 413,
     _ORDERING_UNORDERED_ = 414,
     _ORDERING_ORDERED_ = 415,
     _ZERO_OR_ONE_ = 416,
     _ONE_OR_MORE_ = 417,
     _ZERO_OR_MORE_ = 418,
     _ENCODING_ = 419,
     _NO_PRESERVE_ = 420,
     _INHERIT_ = 421,
     _NO_INHERIT_ = 422,
     _DECLARE_ = 423,
     _BOUNDARYSPACE_ = 424,
     _BASEURI_ = 425,
     _CONSTRUCTION_ = 426,
     _ORDERING_ = 427,
     _DEFAULT_ = 428,
     _COPY_NAMESPACES_ = 429,
     _VARIABLE_KEYWORD_ = 430,
     _OPTION_ = 431,
     _XQUERY_ = 432,
     _VERSION_ = 433,
     _IMPORT_ = 434,
     _SCHEMA_ = 435,
     _MODULE_ = 436,
     _ELEMENT_ = 437,
     _FUNCTION_ = 438,
     _EOF_ = 439
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _QNAME_ 258
#define _FUNCTION_CALL_ 259
#define _TAG_NAME_ 260
#define _ATTRIBUTE_NAME_ 261
#define _STRING_LITERAL_ 262
#define _VARIABLE_ 263
#define _CHAR_ 264
#define _CHAR_REF_ 265
#define _PREDEFINED_ENTITY_REF_ 266
#define _NCNAME_COLON_STAR_ 267
#define _STAR_COLON_NCNAME_ 268
#define _NCNAME_ 269
#define _PI_TARGET_ 270
#define _NAMED_ATTRIBUTE_CONSTR_ 271
#define _NAMED_ELEMENT_CONSTR_ 272
#define _INTEGER_NUMBER_ 273
#define _DECIMAL_NUMBER_ 274
#define _DOUBLE_NUMBER_ 275
#define _XML_COMMENT_ 276
#define _CDATA_SECTION_ 277
#define _PROCESSING_INSTRUCTION_CONTENT_ 278
#define _NAMED_PROCESSING_INSTRUCTION_CONSTR_ 279
#define _PRAGMA_NAME_ 280
#define _PRAGMA_CONTENT_ 281
#define _XQUERY_COMMENT_ 282
#define _XQUERY_WHITESPACE_ 283
#define _XQUERY_ERROR_ 284
#define _PRAGMA_OPEN_ 285
#define _PRAGMA_CLOSE_ 286
#define _ESCAPE_APOS_ 287
#define _ESCAPE_QUOT_ 288
#define _COMMA_ 289
#define _RETURN_ 290
#define _FOR_ 291
#define _IN_ 292
#define _DOLLAR_SIGN_ 293
#define _AT_KEYWORD_ 294
#define _LET_ 295
#define _COLON_EQ_ 296
#define _WHERE_ 297
#define _BY_ 298
#define _ORDER_ 299
#define _STABLE_ 300
#define _ASCENDING_ 301
#define _DESCENDING_ 302
#define _EMPTY_KEYWORD_ 303
#define _GREATEST_ 304
#define _LEAST_ 305
#define _COLLATION_ 306
#define _SOME_ 307
#define _EVERY_ 308
#define _SATISFIES_ 309
#define _TYPESWITCH_ 310
#define _CASE_ 311
#define _AS_ 312
#define _IF_ 313
#define _THEN_ 314
#define _ELSE_ 315
#define _OR_ 316
#define _AND_ 317
#define _INSTANCE_ 318
#define _OF_ 319
#define _CASTABLE_ 320
#define _TO_ 321
#define _PLUS_ 322
#define _MINUS_ 323
#define _MULTIPLY_ 324
#define _DIV_ 325
#define _INTEGER_DIV_ 326
#define _MOD_ 327
#define _UNION_ 328
#define _VERTICAL_BAR_ 329
#define _INTERSECT_ 330
#define _EXCEPT_ 331
#define _SLASH_ 332
#define _SLASHSLASH_ 333
#define _LBRACK_ 334
#define _RBRACK_ 335
#define _VALIDATE_ 336
#define _MODE_LAX_ 337
#define _MODE_STRICT_ 338
#define _CAST_ 339
#define _TREAT_ 340
#define _EQUALS_ 341
#define _NOT_EQUALS_ 342
#define _LT_ 343
#define _LT_EQUALS_ 344
#define _GT_ 345
#define _GT_EQUALS_ 346
#define _FORTRAN_EQ_ 347
#define _FORTRAN_NE_ 348
#define _FORTRAN_LT_ 349
#define _FORTRAN_LE_ 350
#define _FORTRAN_GT_ 351
#define _FORTRAN_GE_ 352
#define _IS_ 353
#define _LT_LT_ 354
#define _GT_GT_ 355
#define _DOT_ 356
#define _AT_ 357
#define _DOT_DOT_ 358
#define _AXIS_CHILD_ 359
#define _AXIS_DESCENDANT_ 360
#define _AXIS_ATTRIBUTE_ 361
#define _AXIS_SELF_ 362
#define _AXIS_DESCENDANT_OR_SELF_ 363
#define _AXIS_PARENT_ 364
#define _STAR_ 365
#define _PROCESSING_INSTRUCTION_LPAR_ 366
#define _COMMENT_LPAR_ 367
#define _TEXT_LPAR_ 368
#define _NODE_LPAR_ 369
#define _LPAR_ 370
#define _RPAR_ 371
#define _START_TAG_OPEN_ 372
#define _EMPTY_TAG_CLOSE_ 373
#define _VALUE_INDICATOR_ 374
#define _END_TAG_OPEN_ 375
#define _TAG_CLOSE_ 376
#define _DOCUMENT_CONSTR_ 377
#define _ELEMENT_CONSTR_ 378
#define _ATTRIBUTE_CONSTR_ 379
#define _TEXT_CONSTR_ 380
#define _PROCESSING_INSTRUCTION_START_ 381
#define _LCURLY_BRACE_ESCAPE_ 382
#define _RCURLY_BRACE_ESCAPE_ 383
#define _OPEN_QUOT_ 384
#define _CLOSE_QUOT_ 385
#define _OPEN_APOS_ 386
#define _CLOSE_APOS_ 387
#define _LBRACE_ 388
#define _RBRACE_ 389
#define _PRESERVE_ 390
#define _STRIP_ 391
#define _NAMESPACE_ 392
#define _EXPR_AS_ 393
#define _EMPTY_ 394
#define _ITEM_ 395
#define _NILLABLE_ 396
#define _DOCUMENT_NODE_LPAR_ 397
#define _ATTRIBUTE_LPAR_ 398
#define _ELEMENT_LPAR_ 399
#define _EXTERNAL_ 400
#define _PROCESSING_INSTRUCTION_CONSTR_ 401
#define _COMMENT_CONSTR_ 402
#define _AXIS_ANCESTOR_OR_SELF_ 403
#define _AXIS_ANCESTOR_ 404
#define _AXIS_FOLLOWING_SIBLING_ 405
#define _AXIS_FOLLOWING_ 406
#define _AXIS_PRECEDING_SIBLING_ 407
#define _AXIS_PRECEDING_ 408
#define _SEMICOLON_ 409
#define _SCHEMA_ELEMENT_LPAR_ 410
#define _SCHEMA_ATTRIBUTE_LPAR_ 411
#define _ORDERED_ 412
#define _UNORDERED_ 413
#define _ORDERING_UNORDERED_ 414
#define _ORDERING_ORDERED_ 415
#define _ZERO_OR_ONE_ 416
#define _ONE_OR_MORE_ 417
#define _ZERO_OR_MORE_ 418
#define _ENCODING_ 419
#define _NO_PRESERVE_ 420
#define _INHERIT_ 421
#define _NO_INHERIT_ 422
#define _DECLARE_ 423
#define _BOUNDARYSPACE_ 424
#define _BASEURI_ 425
#define _CONSTRUCTION_ 426
#define _ORDERING_ 427
#define _DEFAULT_ 428
#define _COPY_NAMESPACES_ 429
#define _VARIABLE_KEYWORD_ 430
#define _OPTION_ 431
#define _XQUERY_ 432
#define _VERSION_ 433
#define _IMPORT_ 434
#define _SCHEMA_ 435
#define _MODULE_ 436
#define _ELEMENT_ 437
#define _FUNCTION_ 438
#define _EOF_ 439




/* Copy the first part of user declarations.  */
#line 14 ".\\src\\parser\\xquery.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include "../lexer/XQueryScanner.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>

#include <xqilla/parser/QName.hpp>

#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Range.hpp>

#include <xqilla/functions/FunctionConstructor.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#ifdef HAVE_CONFIG_H
#include "../config/xqilla_config.h"
#endif

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA	1
#if HAVE_ALLOCA_H
#include <alloca.h>
#elif defined __GNUC__
#undef alloca
#define alloca __builtin_alloca
#elif defined _AIX
#define alloca __alloca
#elif defined _MSC_VER
#include <malloc.h>
#else
#include <stddef.h>
#ifdef __cplusplus
extern "C"
#endif
void *alloca (size_t);
#endif

#define QP						((XQueryParserArgs*)qp)
#define CONTEXT					(QP->_context)
#define MEMMGR					(CONTEXT->getMemoryManager())
#define WRAP(pos,object)		(wrapForDebug((QP),(object),NULL  ,(pos).first_line, (pos).first_column))
#define FNWRAP(pos,name,object)	(wrapForDebug((QP),(object),(name),(pos).first_line, (pos).first_column))

#define BIT_ORDERING_SPECIFIED	                0
#define BIT_BOUNDARY_SPECIFIED	                1
#define BIT_COLLATION_SPECIFIED	                2
#define BIT_BASEURI_SPECIFIED	                3
#define BIT_CONSTRUCTION_SPECIFIED	            4
#define BIT_EMPTYORDERING_SPECIFIED             5
#define BIT_COPYNAMESPACE_SPECIFIED             6
#define BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED   7
#define BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED  8
#define BIT_DECLARE_SECOND_STEP                 9

#undef yylex
#define yylex QP->_scanner->yylex
#undef yyerror
#define yyerror QP->_scanner->error

static XMLCh szQuote[]=		 { XERCES_CPP_NAMESPACE_QUALIFIER chDoubleQuote, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szApos[]=		 { XERCES_CPP_NAMESPACE_QUALIFIER chSingleQuote, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szCurlyOpen[]=  { XERCES_CPP_NAMESPACE_QUALIFIER chOpenCurly, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szCurlyClose[]= { XERCES_CPP_NAMESPACE_QUALIFIER chCloseCurly, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szFLWOR[] =     { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_L, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_W, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_R, XERCES_CPP_NAMESPACE_QUALIFIER chNull }; 
static XMLCh sz1_0[]=        { XERCES_CPP_NAMESPACE_QUALIFIER chDigit_1, XERCES_CPP_NAMESPACE_QUALIFIER chPeriod, XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szTrue[]=       { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szFalse[]=      { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_F, XERCES_CPP_NAMESPACE_QUALIFIER chNull };
static XMLCh szNOTATION[] =  { XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_T, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_I, 
                               XERCES_CPP_NAMESPACE_QUALIFIER chLatin_O, XERCES_CPP_NAMESPACE_QUALIFIER chLatin_N, XERCES_CPP_NAMESPACE_QUALIFIER chNull }; 

static inline bool isAllSpaces(const XMLCh* str)
{
	while(*str)
	{
		if(*str!='\r' && *str != '\n' && *str != ' ' && *str != '\t')
			return false;
		str++;
	}
	return true;
}

static inline XQNav* getNavigation(ASTNode *possibleNav, XPath2MemoryManager * expr)
{
	ASTNode* originalObj=possibleNav;
	if((unsigned int)possibleNav->getType()==ASTNode::DEBUG_HOOK)
		possibleNav=((XQDebugHook*)possibleNav)->m_impl;
	if(possibleNav->getType()==ASTNode::NAVIGATION)
		return (XQNav*)possibleNav;
	else
	{
		XQNav* nav=new (expr) XQNav(expr);
		nav->addStep(originalObj);
		return nav;
	}
}

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

static void merge_strings(DynamicContext* context, VectorOfASTNodes* vec, XMLCh* toBeAdded)
{
	if(vec->size()>0 && vec->back()->getType()==ASTNode::LITERAL)
	{
		XQLiteral *lit = (XQLiteral*)vec->back();
		const XMLCh* string=lit->getItemConstructor()->createItem(context)->asString(context);
		string=XPath2Utils::concatStrings(string,toBeAdded,context->getMemoryManager());

		AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
    		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
            string, AnyAtomicType::STRING);
    	lit->setItemConstructor(ic);
	}
	else
	{
    	AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
      		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				toBeAdded, AnyAtomicType::STRING);

		vec->push_back(new (context->getMemoryManager())
                   XQLiteral(ic, context->getMemoryManager()));
	}
}

static ASTNode* wrapForDebug(XQueryParserArgs *qp, ASTNode* pObjToWrap,
                              const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(!CONTEXT->isDebuggingEnabled() && !CONTEXT->getDebugCallback())
    return pObjToWrap;
  if(fnName==NULL && (unsigned int)pObjToWrap->getType()==ASTNode::DEBUG_HOOK)
    return pObjToWrap;
  return new (MEMMGR) XQDebugHook(QP->_query->getFile(), line, column, pObjToWrap, fnName, MEMMGR);
}

namespace XQuery {



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined (YYLTYPE) && ! defined (YYLTYPE_IS_DECLARED)
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 695 "src/parser/XQueryParser.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYLTYPE_IS_TRIVIAL) && YYLTYPE_IS_TRIVIAL \
             && defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2546

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  149
/* YYNRULES -- Number of rules. */
#define YYNRULES  364
/* YYNRULES -- Number of states. */
#define YYNSTATES  662

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   439

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    18,    25,    28,
      31,    38,    39,    43,    47,    51,    55,    59,    63,    67,
      69,    71,    73,    75,    77,    79,    81,    83,    85,    87,
      93,    97,   101,   107,   113,   118,   122,   126,   132,   138,
     144,   146,   148,   150,   152,   157,   161,   166,   172,   176,
     181,   184,   188,   192,   196,   204,   211,   216,   220,   228,
     235,   242,   248,   252,   256,   263,   269,   277,   284,   291,
     297,   305,   312,   316,   318,   322,   325,   329,   331,   335,
     337,   339,   341,   343,   345,   347,   353,   358,   363,   367,
     370,   372,   374,   376,   379,   383,   385,   390,   396,   402,
     409,   413,   416,   420,   422,   427,   433,   436,   440,   445,
     449,   451,   455,   461,   462,   464,   466,   467,   470,   473,
     478,   483,   487,   489,   494,   500,   511,   520,   523,   525,
     530,   538,   547,   551,   553,   557,   559,   563,   567,   571,
     575,   579,   583,   587,   591,   595,   599,   603,   607,   611,
     615,   619,   621,   625,   627,   631,   635,   637,   641,   645,
     649,   653,   655,   659,   663,   665,   669,   673,   675,   680,
     682,   687,   689,   694,   696,   701,   703,   706,   709,   711,
     713,   715,   717,   722,   728,   734,   738,   743,   745,   748,
     753,   757,   759,   762,   765,   767,   771,   775,   777,   779,
     781,   784,   787,   790,   792,   794,   796,   798,   800,   802,
     804,   806,   809,   811,   814,   816,   818,   820,   822,   824,
     826,   828,   830,   832,   834,   836,   838,   840,   842,   845,
     846,   851,   853,   855,   857,   859,   861,   863,   865,   867,
     869,   871,   873,   875,   877,   880,   884,   887,   889,   894,
     899,   902,   906,   910,   912,   914,   916,   918,   920,   922,
     927,   936,   937,   942,   946,   950,   951,   954,   957,   960,
     963,   964,   967,   970,   973,   976,   977,   980,   983,   986,
     989,   992,   994,   996,   998,  1000,  1002,  1006,  1008,  1010,
    1012,  1014,  1016,  1018,  1020,  1025,  1030,  1034,  1042,  1049,
    1051,  1056,  1060,  1068,  1075,  1080,  1085,  1090,  1094,  1102,
    1109,  1112,  1114,  1117,  1120,  1122,  1126,  1128,  1130,  1132,
    1134,  1136,  1140,  1142,  1144,  1146,  1148,  1150,  1152,  1154,
    1156,  1158,  1160,  1163,  1166,  1170,  1174,  1177,  1180,  1183,
    1187,  1191,  1194,  1198,  1204,  1206,  1208,  1212,  1214,  1217,
    1221,  1227,  1234,  1236,  1238,  1242,  1244,  1246,  1248,  1250,
    1252,  1254,  1256,  1258,  1260
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     186,     0,    -1,   187,   188,    -1,   187,   189,    -1,   188,
      -1,   189,    -1,   177,   178,     7,   194,    -1,   177,   178,
       7,   164,     7,   194,    -1,   191,   216,    -1,   190,   191,
      -1,   181,   137,    14,    86,   331,   194,    -1,    -1,   191,
     192,   194,    -1,   191,   193,   194,    -1,   191,   195,   194,
      -1,   191,   197,   194,    -1,   191,   210,   194,    -1,   191,
     212,   194,    -1,   191,   198,   194,    -1,   196,    -1,   204,
      -1,   205,    -1,   211,    -1,   199,    -1,   200,    -1,   201,
      -1,   206,    -1,   209,    -1,   154,    -1,   168,   137,    14,
      86,   331,    -1,   168,   169,   135,    -1,   168,   169,   136,
      -1,   168,   173,   182,   137,   331,    -1,   168,   173,   183,
     137,   331,    -1,   168,   176,     3,     7,    -1,   168,   172,
     160,    -1,   168,   172,   159,    -1,   168,   173,    44,    48,
      49,    -1,   168,   173,    44,    48,    50,    -1,   168,   174,
     202,    34,   203,    -1,   135,    -1,   165,    -1,   166,    -1,
     167,    -1,   168,   173,    51,   331,    -1,   168,   170,   331,
      -1,   179,   180,   208,   331,    -1,   179,   180,   208,   331,
     207,    -1,   179,   180,   331,    -1,   179,   180,   331,   207,
      -1,    39,   331,    -1,   207,    34,   331,    -1,   137,    14,
      86,    -1,   173,   182,   137,    -1,   179,   181,   137,    14,
      86,   331,   207,    -1,   179,   181,   137,    14,    86,   331,
      -1,   179,   181,   331,   207,    -1,   179,   181,   331,    -1,
     168,   175,    38,     8,   306,    41,   218,    -1,   168,   175,
      38,     8,    41,   218,    -1,   168,   175,    38,     8,   306,
     145,    -1,   168,   175,    38,     8,   145,    -1,   168,   171,
     135,    -1,   168,   171,   136,    -1,   168,   183,     4,   213,
     116,   215,    -1,   168,   183,     4,   116,   215,    -1,   168,
     183,     4,   213,   138,   307,   215,    -1,   168,   183,     4,
     138,   307,   215,    -1,   168,   183,     4,   213,   116,   145,
      -1,   168,   183,     4,   116,   145,    -1,   168,   183,     4,
     213,   138,   307,   145,    -1,   168,   183,     4,   138,   307,
     145,    -1,   213,    34,   214,    -1,   214,    -1,    38,     8,
     306,    -1,    38,     8,    -1,   133,   217,   134,    -1,   217,
      -1,   217,    34,   218,    -1,   218,    -1,   219,    -1,   235,
      -1,   238,    -1,   241,    -1,   242,    -1,   220,   229,   230,
      35,   218,    -1,   220,   229,    35,   218,    -1,   220,   230,
      35,   218,    -1,   220,    35,   218,    -1,   220,   221,    -1,
     221,    -1,   222,    -1,   226,    -1,    36,   223,    -1,   223,
      34,   224,    -1,   224,    -1,    38,     8,    37,   218,    -1,
      38,     8,   225,    37,   218,    -1,    38,     8,   306,    37,
     218,    -1,    38,     8,   306,   225,    37,   218,    -1,    39,
      38,     8,    -1,    40,   227,    -1,   227,    34,   228,    -1,
     228,    -1,    38,     8,    41,   218,    -1,    38,     8,   306,
      41,   218,    -1,    42,   218,    -1,    44,    43,   231,    -1,
      45,    44,    43,   231,    -1,   231,    34,   232,    -1,   232,
      -1,   218,   233,   234,    -1,   218,   233,   234,    51,   331,
      -1,    -1,    46,    -1,    47,    -1,    -1,    48,    49,    -1,
      48,    50,    -1,    52,   236,    54,   218,    -1,    53,   236,
      54,   218,    -1,   236,    34,   237,    -1,   237,    -1,    38,
       8,    37,   218,    -1,    38,     8,   306,    37,   218,    -1,
      55,   115,   217,   116,   239,   173,    38,     8,    35,   218,
      -1,    55,   115,   217,   116,   239,   173,    35,   218,    -1,
     239,   240,    -1,   240,    -1,    56,   307,    35,   218,    -1,
      56,    38,     8,    57,   307,    35,   218,    -1,    58,   115,
     217,   116,    59,   218,    60,   218,    -1,   242,    61,   243,
      -1,   243,    -1,   243,    62,   244,    -1,   244,    -1,   245,
      86,   245,    -1,   245,    87,   245,    -1,   245,    88,   245,
      -1,   245,    89,   245,    -1,   245,    90,   245,    -1,   245,
      91,   245,    -1,   245,    92,   245,    -1,   245,    93,   245,
      -1,   245,    94,   245,    -1,   245,    95,   245,    -1,   245,
      96,   245,    -1,   245,    97,   245,    -1,   245,    98,   245,
      -1,   245,    99,   245,    -1,   245,   100,   245,    -1,   245,
      -1,   246,    66,   246,    -1,   246,    -1,   246,    67,   247,
      -1,   246,    68,   247,    -1,   247,    -1,   247,    69,   248,
      -1,   247,    70,   248,    -1,   247,    71,   248,    -1,   247,
      72,   248,    -1,   248,    -1,   248,    74,   249,    -1,   248,
      73,   249,    -1,   249,    -1,   249,    75,   250,    -1,   249,
      76,   250,    -1,   250,    -1,   251,    63,    64,   307,    -1,
     251,    -1,   252,    85,    57,   307,    -1,   252,    -1,   253,
      65,    57,   305,    -1,   253,    -1,   254,    84,    57,   305,
      -1,   254,    -1,    68,   254,    -1,    67,   254,    -1,   255,
      -1,   256,    -1,   260,    -1,   257,    -1,    81,   133,   217,
     134,    -1,    81,    82,   133,   217,   134,    -1,    81,    83,
     133,   217,   134,    -1,   258,   133,   134,    -1,   258,   133,
     217,   134,    -1,   259,    -1,   258,   259,    -1,    30,    25,
      26,    31,    -1,    30,    25,    31,    -1,    77,    -1,    77,
     261,    -1,    78,   261,    -1,   261,    -1,   261,    77,   262,
      -1,   261,    78,   262,    -1,   262,    -1,   263,    -1,   273,
      -1,   264,   274,    -1,   267,   274,    -1,   265,   270,    -1,
     266,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   150,    -1,   151,    -1,   102,   270,    -1,   270,
      -1,   268,   270,    -1,   269,    -1,   109,    -1,   149,    -1,
     152,    -1,   153,    -1,   148,    -1,   103,    -1,   311,    -1,
     271,    -1,   333,    -1,   272,    -1,   110,    -1,    12,    -1,
      13,    -1,   275,   274,    -1,    -1,   274,    79,   217,    80,
      -1,   276,    -1,   278,    -1,   279,    -1,   280,    -1,   283,
      -1,   285,    -1,   281,    -1,   282,    -1,   277,    -1,   332,
      -1,   328,    -1,   329,    -1,   330,    -1,    38,     8,    -1,
     115,   217,   116,    -1,   115,   116,    -1,   101,    -1,   157,
     133,   217,   134,    -1,   158,   133,   217,   134,    -1,     4,
     116,    -1,     4,   284,   116,    -1,   284,    34,   218,    -1,
     218,    -1,   286,    -1,   297,    -1,   287,    -1,   294,    -1,
     295,    -1,   117,     5,   288,   118,    -1,   117,     5,   288,
     121,   292,   120,     5,   121,    -1,    -1,   288,     6,   119,
     289,    -1,   129,   290,   130,    -1,   131,   291,   132,    -1,
      -1,   290,   215,    -1,   290,    33,    -1,   290,     9,    -1,
     290,   293,    -1,    -1,   291,   215,    -1,   291,    32,    -1,
     291,     9,    -1,   291,   293,    -1,    -1,   292,   286,    -1,
     292,     9,    -1,   292,   296,    -1,   292,   215,    -1,   292,
     293,    -1,    11,    -1,    10,    -1,   127,    -1,   128,    -1,
      21,    -1,   126,    15,    23,    -1,    22,    -1,   298,    -1,
     299,    -1,   301,    -1,   302,    -1,   303,    -1,   304,    -1,
     122,   133,   217,   134,    -1,    17,   133,   300,   134,    -1,
      17,   133,   134,    -1,   123,   133,   217,   134,   133,   300,
     134,    -1,   123,   133,   217,   134,   133,   134,    -1,   217,
      -1,    16,   133,   217,   134,    -1,    16,   133,   134,    -1,
     124,   133,   217,   134,   133,   217,   134,    -1,   124,   133,
     217,   134,   133,   134,    -1,   125,   133,   217,   134,    -1,
     147,   133,   217,   134,    -1,    24,   133,   217,   134,    -1,
      24,   133,   134,    -1,   146,   133,   217,   134,   133,   217,
     134,    -1,   146,   133,   217,   134,   133,   134,    -1,   310,
     161,    -1,   310,    -1,    57,   307,    -1,   309,   308,    -1,
     309,    -1,   139,   115,   116,    -1,   163,    -1,   162,    -1,
     161,    -1,   310,    -1,   311,    -1,   140,   115,   116,    -1,
     333,    -1,   313,    -1,   321,    -1,   317,    -1,   323,    -1,
     319,    -1,   316,    -1,   315,    -1,   314,    -1,   312,    -1,
     114,   116,    -1,   142,   116,    -1,   142,   321,   116,    -1,
     142,   323,   116,    -1,   113,   116,    -1,   112,   116,    -1,
     111,   116,    -1,   111,    14,   116,    -1,   111,     7,   116,
      -1,   143,   116,    -1,   143,   318,   116,    -1,   143,   318,
      34,   327,   116,    -1,   325,    -1,   110,    -1,   156,   320,
     116,    -1,   325,    -1,   144,   116,    -1,   144,   322,   116,
      -1,   144,   322,    34,   327,   116,    -1,   144,   322,    34,
     327,   141,   116,    -1,   326,    -1,   110,    -1,   155,   324,
     116,    -1,   326,    -1,   333,    -1,   333,    -1,   333,    -1,
      18,    -1,    19,    -1,    20,    -1,     7,    -1,     7,    -1,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   463,   463,   464,   465,   466,   471,   476,   508,   515,
     522,   534,   536,   541,   546,   551,   556,   560,   567,   581,
     582,   583,   584,   585,   586,   587,   592,   593,   598,   603,
     626,   633,   644,   651,   662,   683,   690,   701,   708,   719,
     731,   735,   743,   747,   755,   774,   785,   801,   817,   827,
     840,   845,   854,   858,   866,   879,   892,   904,   920,   926,
     932,   937,   947,   954,   966,   970,   974,   978,   982,   986,
     990,   994,  1002,  1007,  1017,  1021,  1029,  1037,  1045,  1063,
    1071,  1072,  1073,  1074,  1075,  1080,  1084,  1088,  1092,  1099,
    1105,  1109,  1110,  1116,  1123,  1127,  1135,  1141,  1147,  1153,
    1163,  1172,  1179,  1184,  1192,  1198,  1208,  1216,  1220,  1228,
    1233,  1243,  1247,  1263,  1264,  1266,  1272,  1281,  1283,  1290,
    1294,  1301,  1305,  1313,  1319,  1329,  1334,  1342,  1347,  1356,
    1360,  1368,  1376,  1390,  1395,  1409,  1419,  1423,  1427,  1431,
    1435,  1439,  1443,  1447,  1451,  1455,  1459,  1463,  1467,  1471,
    1475,  1479,  1484,  1488,  1493,  1497,  1501,  1506,  1510,  1514,
    1518,  1522,  1527,  1531,  1535,  1540,  1544,  1548,  1553,  1557,
    1562,  1566,  1571,  1581,  1586,  1596,  1601,  1607,  1611,  1616,
    1617,  1618,  1625,  1629,  1633,  1641,  1646,  1654,  1655,  1661,
    1678,  1699,  1705,  1711,  1725,  1730,  1736,  1749,  1754,  1755,
    1760,  1764,  1773,  1785,  1796,  1800,  1804,  1808,  1812,  1816,
    1820,  1828,  1836,  1854,  1862,  1871,  1875,  1879,  1883,  1887,
    1895,  1907,  1908,  1913,  1920,  1925,  1932,  1939,  1950,  1960,
    1963,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,  1985,
    1986,  1991,  1992,  1993,  1998,  2010,  2024,  2032,  2040,  2048,
    2056,  2061,  2068,  2073,  2082,  2083,  2090,  2091,  2092,  2097,
    2109,  2142,  2145,  2171,  2175,  2185,  2188,  2193,  2198,  2203,
    2214,  2217,  2222,  2227,  2232,  2248,  2251,  2272,  2301,  2316,
    2338,  2358,  2359,  2360,  2364,  2373,  2389,  2415,  2428,  2429,
    2430,  2431,  2432,  2433,  2438,  2456,  2470,  2482,  2491,  2502,
    2507,  2520,  2532,  2540,  2551,  2561,  2571,  2584,  2596,  2604,
    2615,  2622,  2633,  2641,  2648,  2655,  2664,  2666,  2668,  2674,
    2678,  2683,  2691,  2707,  2708,  2709,  2710,  2711,  2712,  2713,
    2714,  2715,  2720,  2730,  2736,  2745,  2758,  2768,  2778,  2784,
    2790,  2800,  2806,  2812,  2822,  2823,  2831,  2841,  2846,  2852,
    2858,  2864,  2876,  2877,  2885,  2895,  2900,  2905,  2910,  2915,
    2928,  2941,  2954,  2967,  2980
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<qualified name>\"",
  "\"<function>(\"", "\"<tag name>\"", "\"<attribute name>\"", "\"'...'\"",
  "\"<variable name>\"", "\"<char>\"", "\"&#XXX;\"",
  "\"<predefined entity ref>\"", "\"<ns>:*\"", "\"*:<local name>\"",
  "\"<local name>\"", "\"<processing instruction target>\"",
  "\"attribute <name> {\"", "\"element <name> {\"", "\"<integer number>\"",
  "\"<decimal number>\"", "\"<double number>\"", "\"<!-- ... -->\"",
  "\"<![CDATA[...]]>\"", "\"...?>\"", "\"processing-instruction <pi> {\"",
  "\"<pragma name>\"", "\"<pragma content>\"", "\"(: comment :)\"",
  "_XQUERY_WHITESPACE_", "_XQUERY_ERROR_", "\"(#\"", "\"#)\"", "\"''\"",
  "\"\\\"\\\"\"", "\",\"", "\"return\"", "\"for\"", "\"in\"", "\"$\"",
  "\"at\"", "\"let\"", "\":=\"", "\"where\"", "\"by\"", "\"order\"",
  "\"stable\"", "\"ascending\"", "\"descending\"", "\"empty\"",
  "\"greatest\"", "\"least\"", "\"collation\"", "\"some\"", "\"every\"",
  "\"satisfies\"", "\"typeswitch\"", "\"case\"", "\"as\"", "\"if\"",
  "\"then\"", "\"else\"", "\"or\"", "\"and\"", "\"instance\"", "\"of\"",
  "\"castable\"", "\"to\"", "\"+ (arithmetic operator)\"",
  "\"- (arithmetic operator)\"", "\"* (arithmetic operator)\"", "\"div\"",
  "\"idiv\"", "\"mod\"", "\"union\"", "\"|\"", "\"intersect\"",
  "\"except\"", "\"/\"", "\"//\"", "\"[\"", "\"]\"", "\"validate\"",
  "\"lax\"", "\"strict\"", "\"cast\"", "\"treat\"",
  "\"= (comparison operator)\"", "\"!=\"", "\"< (comparison operator)\"",
  "\"<=\"", "\"> (comparison operator)\"", "\">=\"", "\"eq\"", "\"ne\"",
  "\"lt\"", "\"le\"", "\"gt\"", "\"ge\"", "\"is\"", "\"<<\"", "\">>\"",
  "\".\"", "\"@\"", "\"..\"", "\"child::\"", "\"descendant::\"",
  "\"attribute::\"", "\"self::\"", "\"descendant-or-self::\"",
  "\"parent::\"", "\"* (wildcard)\"", "\"processing-instruction(\"",
  "\"comment(\"", "\"text(\"", "\"node(\"", "\"(\"", "\")\"", "\"<\"",
  "\"/>\"", "\"=\"", "\">\"", "\"</\"", "\"document {\"", "\"element {\"",
  "\"attribute {\"", "\"text {\"", "\"<?\"", "\"{{\"", "\"}}\"",
  "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"", "\"' (close)\"",
  "\"{\"", "\"}\"", "\"preserve\"", "\"strip\"", "\"namespace\"",
  "\") as\"", "\"empty-sequence\"", "\"item\"", "\"?\"",
  "\"document-node(\"", "\"attribute(\"", "\"element(\"", "\"external\"",
  "\"processing-instruction {\"", "\"comment {\"",
  "\"ancestor-or-self::\"", "\"ancestor::\"", "\"following-sibling::\"",
  "\"following::\"", "\"preceding-sibling::\"", "\"preceding::\"", "\";\"",
  "\"schema-element(\"", "\"schema-attribute(\"", "\"ordered {\"",
  "\"unordered {\"", "\"unordered\"", "\"ordered\"", "\"? (occurrence)\"",
  "\"+ (occurrence)\"", "\"* (occurrence)\"", "\"encoding\"",
  "\"no-preserve\"", "\"inherit\"", "\"no-inherit\"", "\"declare\"",
  "\"boundary-space\"", "\"base-uri\"", "\"construction\"", "\"ordering\"",
  "\"default\"", "\"copy-namespaces\"", "\"variable\"", "\"option\"",
  "\"xquery\"", "\"version\"", "\"import\"", "\"schema\"", "\"module\"",
  "\"element\"", "\"function\"", "_EOF_", "$accept", "Module",
  "VersionDecl", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "ConstructionDecl", "FunctionDecl", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FlworExprForLetList",
  "ForOrLetClause", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "LetClause", "LetBindingList", "LetBinding",
  "WhereClause", "OrderByClause", "OrderSpecList", "OrderSpec",
  "OrderDirection", "EmptyHandling", "QuantifiedExpr",
  "QuantifyBindingList", "QuantifyBinding", "TypeswitchExpr",
  "CaseClauseList", "CaseClause", "IfExpr", "OrExpr", "AndExpr",
  "ComparisonExpr", "RangeExpr", "AdditiveExpr", "MultiplicativeExpr",
  "UnionExpr", "IntersectExceptExpr", "InstanceofExpr", "TreatExpr",
  "CastableExpr", "CastExpr", "UnaryExpr", "ValueExpr", "ValidateExpr",
  "ExtensionExpr", "PragmaList", "Pragma", "PathExpr", "RelativePathExpr",
  "StepExpr", "AxisStep", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "FilterExpr", "PredicateList",
  "PrimaryExpr", "Literal", "NumericLiteral", "VarRef",
  "ParenthesizedExpr", "ContextItemExpr", "OrderedExpr", "UnorderedExpr",
  "FunctionCall", "FunctionCallArgumentList", "Constructor",
  "DirectConstructor", "DirElemConstructor", "DirAttributeList",
  "DirAttributeValue", "QuotAttrValueContent", "AposAttrValueContent",
  "DirElementContent", "CommonContent", "DirCommentConstructor",
  "DirPIConstructor", "CdataSection", "ComputedConstructor",
  "CompDocConstructor", "CompElemConstructor", "ContentExpr",
  "CompAttrConstructor", "CompTextConstructor", "CompCommentConstructor",
  "CompPIConstructor", "SingleType", "TypeDeclaration", "SequenceType",
  "OccurrenceIndicator", "ItemType", "AtomicType", "KindTest",
  "AnyKindTest", "DocumentTest", "TextTest", "CommentTest", "PITest",
  "AttributeTest", "AttribNameOrWildcard", "SchemaAttributeTest",
  "AttributeDeclaration", "ElementTest", "ElementNameOrWildcard",
  "SchemaElementTest", "ElementDeclaration", "AttributeName",
  "ElementName", "TypeName", "IntegerLiteral", "DecimalLiteral",
  "DoubleLiteral", "URILiteral", "StringLiteral", "QName", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   185,   186,   186,   186,   186,   187,   187,   188,   189,
     190,   191,   191,   191,   191,   191,   191,   191,   191,   192,
     192,   192,   192,   192,   192,   192,   193,   193,   194,   195,
     196,   196,   197,   197,   198,   199,   199,   200,   200,   201,
     202,   202,   203,   203,   204,   205,   206,   206,   206,   206,
     207,   207,   208,   208,   209,   209,   209,   209,   210,   210,
     210,   210,   211,   211,   212,   212,   212,   212,   212,   212,
     212,   212,   213,   213,   214,   214,   215,   216,   217,   217,
     218,   218,   218,   218,   218,   219,   219,   219,   219,   220,
     220,   221,   221,   222,   223,   223,   224,   224,   224,   224,
     225,   226,   227,   227,   228,   228,   229,   230,   230,   231,
     231,   232,   232,   233,   233,   233,   234,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     240,   241,   242,   242,   243,   243,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   245,   245,   246,   246,   246,   247,   247,   247,
     247,   247,   248,   248,   248,   249,   249,   249,   250,   250,
     251,   251,   252,   252,   253,   253,   254,   254,   254,   255,
     255,   255,   256,   256,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   260,   260,   261,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   266,   266,   267,   267,   268,   268,   268,   268,   268,
     269,   270,   270,   271,   271,   272,   272,   272,   273,   274,
     274,   275,   275,   275,   275,   275,   275,   275,   275,   276,
     276,   277,   277,   277,   278,   279,   279,   280,   281,   282,
     283,   283,   284,   284,   285,   285,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   290,   290,   290,   290,   290,
     291,   291,   291,   291,   291,   292,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   294,   295,   296,   297,   297,
     297,   297,   297,   297,   298,   299,   299,   299,   299,   300,
     301,   301,   301,   301,   302,   303,   304,   304,   304,   304,
     305,   305,   306,   307,   307,   307,   308,   308,   308,   309,
     309,   309,   310,   311,   311,   311,   311,   311,   311,   311,
     311,   311,   312,   313,   313,   313,   314,   315,   316,   316,
     316,   317,   317,   317,   318,   318,   319,   320,   321,   321,
     321,   321,   322,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     1,     4,     6,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     5,     5,     4,     3,     3,     5,     5,     5,
       1,     1,     1,     1,     4,     3,     4,     5,     3,     4,
       2,     3,     3,     3,     7,     6,     4,     3,     7,     6,
       6,     5,     3,     3,     6,     5,     7,     6,     6,     5,
       7,     6,     3,     1,     3,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     5,     4,     4,     3,     2,
       1,     1,     1,     2,     3,     1,     4,     5,     5,     6,
       3,     2,     3,     1,     4,     5,     2,     3,     4,     3,
       1,     3,     5,     0,     1,     1,     0,     2,     2,     4,
       4,     3,     1,     4,     5,    10,     8,     2,     1,     4,
       7,     8,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     4,     1,     4,     1,     2,     2,     1,     1,
       1,     1,     4,     5,     5,     3,     4,     1,     2,     4,
       3,     1,     2,     2,     1,     3,     3,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     1,     4,     4,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     4,
       8,     0,     4,     3,     3,     0,     2,     2,     2,     2,
       0,     2,     2,     2,     2,     0,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     3,     7,     6,     1,
       4,     3,     7,     6,     4,     4,     4,     3,     7,     6,
       2,     1,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     3,     3,     2,     2,     2,     3,
       3,     2,     3,     5,     1,     1,     3,     1,     2,     3,
       5,     6,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
      11,     0,     0,     0,    11,     4,     5,    11,     0,     0,
       0,     1,     2,     3,     9,   364,     0,   363,   226,   227,
       0,     0,   359,   360,   361,   285,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   191,     0,     0,
     247,     0,   220,   204,   205,   206,   207,   208,   215,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,   216,   209,   210,
     217,   218,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,     0,    23,    24,    25,    20,    21,    26,
      27,     0,    22,     0,     8,    77,    79,    80,     0,    90,
      91,    92,    81,    82,    83,    84,   133,   135,   151,   153,
     156,   161,   164,   167,   169,   171,   173,   175,   178,   179,
     181,     0,   187,   180,   194,   197,   198,   229,     0,   203,
     229,     0,   214,   212,   222,   224,   199,   229,   231,   239,
     232,   233,   234,   237,   238,   235,   236,   254,   256,   257,
     258,   255,   288,   289,   290,   291,   292,   293,   221,   331,
     323,   330,   329,   328,   325,   327,   324,   326,   241,   242,
     243,   240,   223,     0,     0,   250,   253,     0,     0,     0,
       0,     0,     0,    93,    95,   244,     0,   101,   103,     0,
       0,   122,     0,     0,     0,   177,   176,   192,   193,     0,
       0,     0,   211,     0,     0,   338,   337,   336,   332,   246,
       0,   261,     0,     0,     0,     0,     0,   333,     0,     0,
     345,   341,     0,   344,   356,   353,   348,     0,   352,   357,
       0,     0,     0,   355,     0,   347,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      28,    12,    13,    14,    15,    18,    16,    17,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188,
       0,     0,   200,   202,   201,   213,   228,     0,     6,     0,
       0,   251,   301,     0,   296,   299,     0,   307,     0,     0,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   339,   245,     0,     0,     0,
       0,     0,   286,   334,   335,     0,   342,     0,   349,     0,
       0,   354,   346,     0,     0,     0,    30,    31,   362,    45,
      62,    63,    36,    35,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    57,
      78,    88,   106,     0,     0,     0,     0,     0,   132,   134,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   152,   154,   155,   157,   158,
     159,   160,   163,   162,   165,   166,     0,     0,     0,     0,
     185,     0,   195,   196,     0,     0,     0,   252,   300,   295,
     306,   189,     0,     0,     0,     0,     0,    94,     0,     0,
     102,     0,     0,   121,   119,   120,     0,     0,     0,     0,
     182,     0,   259,   275,   294,     0,     0,   304,     0,   358,
       0,     0,   305,   248,   249,     0,     0,    44,     0,     0,
       0,     0,    34,     0,     0,     0,     0,    73,     0,     0,
      46,     0,    49,     0,    56,   113,   107,   110,     0,    86,
       0,    87,     0,     0,   168,   314,   319,   320,   322,   170,
     172,   311,   174,   186,     0,     7,    10,    96,     0,   312,
       0,     0,     0,   104,     0,   123,     0,     0,     0,   128,
       0,   183,   184,     0,     0,     0,     0,   343,   350,     0,
       0,    29,    37,    38,    32,    33,    42,    43,    39,     0,
      61,     0,    75,     0,    69,    65,     0,     0,     0,     0,
      52,    53,    47,    50,     0,     0,   114,   115,   116,     0,
     108,    85,     0,     0,   318,   317,   316,   313,   310,   230,
     100,    97,    98,     0,   105,   124,     0,     0,     0,   127,
       0,   265,   270,   262,   277,   282,   281,   287,     0,   283,
     284,   279,   276,   280,   278,   298,     0,   303,     0,   351,
     309,     0,    59,     0,    60,    74,     0,    71,    67,    72,
      68,    64,     0,    51,    55,     0,   111,   109,   315,   321,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   297,
     302,   308,    58,    76,    70,    66,    54,   117,   118,     0,
       0,   129,   126,     0,   131,   268,   267,   263,   266,   269,
     273,   272,   264,   271,   274,   260,   112,     0,     0,     0,
     125,   130
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    78,    79,   251,
      80,    81,    82,    83,    84,    85,    86,   370,   538,    87,
      88,    89,   482,   376,    90,    91,    92,    93,   476,   477,
     545,    94,   315,    96,    97,    98,    99,   100,   183,   184,
     435,   101,   187,   188,   264,   265,   486,   487,   558,   616,
     102,   190,   191,   103,   518,   519,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   302,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   177,
     146,   147,   148,   337,   583,   626,   627,   524,   593,   149,
     150,   594,   151,   152,   153,   316,   154,   155,   156,   157,
     500,   436,   494,   567,   495,   496,   158,   159,   160,   161,
     162,   163,   164,   222,   165,   234,   166,   227,   167,   232,
     223,   228,   458,   168,   169,   170,   359,   171,   172
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -436
static const short int yypact[] =
{
     100,  -138,   -76,   116,  -128,  -436,  -436,  -436,   515,    94,
     216,  -436,  -436,  -436,    95,  -436,   672,  -436,  -436,  -436,
     112,   139,  -436,  -436,  -436,  -436,   147,   211,   277,   346,
     330,   332,   332,   257,   263,  2232,  2232,  2388,  2388,   -40,
    -436,    16,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
      27,   275,   278,   281,   828,   398,   273,   274,   276,   280,
     393,   -69,    21,    47,   282,   284,  -436,  -436,  -436,  -436,
    -436,  -436,   407,   407,   285,   287,   127,   111,   258,   258,
     258,  -436,   258,   258,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,   258,  -436,   258,  -436,   377,  -436,  -436,   231,  -436,
    -436,  -436,  -436,  -436,  -436,   360,   361,  -436,   162,   265,
     218,   248,   249,  -436,   363,   339,   362,   344,  -436,  -436,
    -436,     9,  -436,  -436,    32,  -436,  -436,  -436,    16,  -436,
    -436,    16,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,   -97,   343,  -436,  -436,    28,   984,  1140,
    1296,   239,   422,   397,  -436,  -436,   424,   399,  -436,   426,
      22,  -436,    31,  2076,  2076,  -436,  -436,    32,    32,   302,
     303,  2076,  -436,   321,   322,  -436,  -436,  -436,  -436,  -436,
      78,  -436,  2076,  2076,  2076,  2076,   416,  -436,   324,   325,
    -436,  -436,    98,  -436,  -436,  -436,  -436,   188,  -436,  -436,
    2076,  2076,   326,  -436,   328,  -436,  2076,  2076,   429,   226,
     438,   228,   206,   -18,   -84,   408,   444,   445,     3,    14,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  2076,  2076,
    2076,   405,   406,  -436,   234,   417,  2232,  2232,  2232,  2232,
    2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,
    2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,  2232,
    2232,  2232,  2232,  2232,   387,   396,   400,   401,  1452,  -436,
    2388,  2388,   375,  -436,   375,  -436,   375,   448,  -436,   438,
    2076,  -436,  -436,    35,  -436,   377,   329,  -436,    44,   428,
    -436,    15,   277,    17,   330,    34,   332,  2076,  2076,   207,
     212,  2076,  2076,    45,  -436,  -436,  -436,    49,    46,    53,
      68,    69,  -436,  -436,  -436,   407,  -436,   407,  -436,    70,
      89,  -436,  -436,    99,   134,   374,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,   413,   438,   331,   333,  -436,  -436,
     430,   454,   458,    -2,   452,   289,   438,   434,   453,   434,
    -436,  -436,  -436,  2076,   432,  2076,   441,  2076,   361,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,   307,   218,   218,   248,   248,
     248,   248,   249,   249,  -436,  -436,    42,    42,   407,   407,
    -436,   149,  -436,  -436,  2076,   258,   258,  -436,  -436,  -436,
    -436,  -436,  2076,   431,    42,   440,   279,  -436,  2076,   437,
    -436,  2076,   442,  -436,  -436,  -436,   425,   421,   161,   171,
    -436,   364,  -436,  -436,  -436,   349,   351,  -436,   369,  -436,
     -78,   353,  -436,  -436,  -436,   438,   327,  -436,   438,   438,
     213,   -11,  -436,   479,   -85,    42,    36,  -436,   403,   356,
     434,   438,   456,   410,   456,   335,   457,  -436,  2076,  -436,
    2076,  -436,   382,   384,  -436,   175,  -436,  -436,  -436,  -436,
    -436,   340,  -436,  -436,    -3,  -436,  -436,  -436,   484,  -436,
    2076,  2076,   465,  -436,  2076,  -436,  2076,     6,   -34,  -436,
    2076,  -436,  -436,   -39,    73,  1608,  1764,  -436,  -436,   389,
    1920,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  2076,
    -436,    -4,   446,  2076,  -436,  -436,   -45,   468,   -37,    42,
    -436,  -436,   456,  -436,   438,   438,  -436,  -436,   459,  2076,
     457,  -436,   392,   394,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  2076,  -436,  -436,   501,   476,   247,  -436,
     455,  -436,  -436,  -436,  -436,  -436,  -436,  -436,   507,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,   379,  -436,   183,  -436,
    -436,   185,  -436,  2076,  -436,  -436,   186,  -436,  -436,  -436,
    -436,  -436,   102,  -436,   434,   334,   463,  -436,  -436,  -436,
    -436,   460,  2076,  2076,   508,  2076,    88,   202,   409,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,   456,  -436,  -436,   438,
      42,  -436,  -436,   485,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,   489,  2076,  2076,
    -436,  -436
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -436,  -436,  -436,   522,   525,  -436,   530,  -436,  -436,   -66,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,  -436,  -375,  -436,  -436,  -436,  -436,  -436,  -436,    -7,
    -435,  -436,    -5,   -16,  -436,  -436,   443,  -436,  -436,   220,
     108,  -436,  -436,   222,  -436,   283,    60,   -10,  -436,  -436,
    -436,   518,   230,  -436,  -436,    40,  -436,  -436,   286,   292,
      71,   271,   101,    20,    97,   103,  -436,  -436,  -436,   354,
    -436,  -436,  -436,  -436,   439,  -436,   355,   104,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,    -6,  -436,  -436,  -436,   -71,
    -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,  -436,
    -436,    37,  -436,  -436,  -436,  -436,  -436,  -436,  -227,  -436,
    -436,  -436,  -436,  -436,  -436,    38,  -436,  -436,  -436,  -436,
     143,  -305,  -402,  -436,  -436,   -17,  -411,  -436,  -436,  -436,
    -436,  -436,  -436,  -436,  -436,  -436,   503,  -436,   504,  -436,
     493,   497,   224,  -436,  -436,  -436,  -241,  -436,   -61
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     176,   224,   229,    95,   484,   497,   497,   377,   379,    15,
     358,   229,   224,   252,   253,   499,   254,   255,   439,    15,
     442,   358,   517,   497,    15,   256,   364,   257,    18,    19,
     539,   258,   509,   365,   203,   202,   473,   603,   528,    27,
       9,   204,   199,   200,   576,    15,   434,   217,   543,   210,
      15,   368,   432,     2,   433,   451,   326,   250,   438,   304,
     544,    10,   310,   529,   497,   326,   306,   307,   426,   258,
     547,   441,   434,   546,   434,    63,   327,   569,   258,   258,
     258,   369,   584,   585,   586,   328,    72,   258,   543,   591,
     581,   434,   582,   201,    25,   587,   543,   645,   585,   586,
     607,   173,   258,   258,   258,   552,   497,   308,   610,   300,
     301,   608,   258,   611,   474,   577,    11,    50,    51,    52,
      53,   646,   303,   258,   467,   305,    49,    50,    51,    52,
      53,   220,   345,   258,   540,   480,   475,   221,   497,   578,
     374,   604,   298,   205,   311,   492,   493,   612,    61,    62,
      63,   378,   548,    50,    51,    52,    53,   225,    61,    62,
      63,    72,    73,   226,   366,   367,   541,   452,   258,   428,
     453,    72,    73,   313,   549,   318,   375,   635,   430,   450,
     454,   492,   493,   258,    61,    62,    63,   455,   329,   330,
      55,   648,   653,   588,   336,   258,   333,    72,    73,    60,
     589,   590,   456,   457,   461,   258,   543,   338,   339,   340,
     341,   650,   585,   586,   346,   589,   590,   258,   647,   258,
     258,   543,   347,   462,   531,   349,   350,   534,   535,   497,
     174,   353,   354,   463,   651,   543,   181,   605,   657,   636,
     553,   258,   380,   381,   382,   178,   258,   634,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,    76,   238,   319,   259,    28,   464,   385,
     320,    30,   179,   260,    77,   261,   262,     1,   261,   262,
     180,     2,   623,   503,   459,   624,   459,   286,   287,   288,
     289,   248,   249,   421,   427,   521,   239,   240,   241,   242,
     243,   244,   245,   246,   348,   522,   408,   409,   410,   411,
     247,   444,   445,   613,   614,   182,   511,   630,   433,   631,
     633,   290,   291,   446,   292,   293,   448,   449,   447,   589,
     590,   283,   284,   285,   652,   543,   564,   565,   566,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   185,   498,   498,   498,   498,   505,
     506,   356,   357,   360,   361,   362,   363,   485,   186,   489,
     189,   491,   193,   498,   284,   285,   532,   533,   194,   536,
     537,   556,   557,   637,   638,   406,   407,   412,   413,   195,
     196,   206,   197,   198,   207,   414,   415,   208,   656,   649,
     654,   501,   501,   211,   422,   423,   212,   213,   216,   214,
      15,   258,   250,   215,   498,   230,   507,   231,   236,   504,
     237,   266,   513,   267,   295,   515,   294,   296,   297,   309,
     321,   322,   323,   324,   325,   331,   332,   334,   335,   342,
     343,   344,   351,   355,   352,   358,   371,   372,   383,   373,
     384,   416,   387,   417,   424,   425,   498,   418,   419,   431,
     465,   466,   471,   429,   470,   472,   478,   483,   468,   508,
     469,   479,   485,   481,   561,   488,   490,   510,   514,   516,
     520,   517,   525,   523,   526,   527,   530,   542,   498,   550,
     554,   559,   570,   551,   571,   572,   555,   562,   574,   563,
     575,   568,   573,   434,   580,   599,   473,   615,   618,   621,
     619,   622,   628,   629,   639,   625,   643,   640,    15,    16,
     658,   598,    17,   602,   659,   601,    12,    18,    19,    13,
     655,    20,    21,    22,    23,    24,    25,    14,   606,    26,
     609,   263,   437,   485,   512,    27,   440,   386,   560,   617,
     192,    28,   388,    29,   405,    30,   443,   620,   579,   389,
     299,   592,   502,   596,   218,   219,   235,    31,    32,   233,
      33,   460,     0,    34,     0,     0,     0,     0,     0,   498,
       0,     0,    35,    36,     0,     0,     0,   632,     0,     0,
       0,     0,    37,    38,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   641,   642,     0,   644,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,     0,     0,     0,     0,    56,    57,    58,
      59,    60,   660,   661,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     0,
      72,    73,    74,    75,     0,    15,    16,     0,     0,    17,
       0,     0,     0,    76,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,    77,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      29,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   175,    55,
       0,     0,     0,     0,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    15,    16,     0,     0,    17,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    29,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,   209,    55,     0,     0,     0,     0,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,    72,    73,    74,    75,    15,    16,     0,
       0,    17,     0,     0,     0,     0,    18,    19,     0,     0,
      20,    21,    22,    23,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,    33,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    55,     0,     0,     0,     0,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,   312,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    72,
      73,    74,    75,    15,    16,     0,     0,    17,     0,     0,
       0,     0,    18,    19,     0,     0,    20,    21,    22,    23,
      24,    25,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,     0,     0,
       0,     0,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,    72,    73,    74,    75,    15,
      16,     0,     0,    17,     0,     0,     0,     0,    18,    19,
       0,     0,    20,    21,    22,    23,    24,    25,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    29,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,     0,     0,     0,     0,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
     317,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       0,    72,    73,    74,    75,    15,    16,     0,     0,    17,
       0,     0,     0,     0,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      29,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
       0,     0,     0,     0,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    15,    16,     0,     0,    17,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    29,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    55,     0,     0,     0,     0,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,   595,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,    72,    73,    74,    75,    15,    16,     0,
       0,    17,     0,     0,     0,     0,    18,    19,     0,     0,
      20,    21,    22,    23,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,    33,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,    55,     0,     0,     0,     0,    56,    57,    58,    59,
      60,     0,     0,     0,     0,     0,     0,     0,   597,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,     0,
      64,    65,    66,    67,    68,    69,    70,    71,     0,    72,
      73,    74,    75,    15,    16,     0,     0,    17,     0,     0,
       0,     0,    18,    19,     0,     0,    20,    21,    22,    23,
      24,    25,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,    55,     0,     0,
       0,     0,    56,    57,    58,    59,    60,     0,     0,     0,
       0,     0,     0,     0,   600,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,     0,    64,    65,    66,    67,
      68,    69,    70,    71,     0,    72,    73,    74,    75,    15,
      16,     0,     0,    17,     0,     0,     0,     0,    18,    19,
       0,     0,    20,    21,    22,    23,    24,    25,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    29,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,    55,     0,     0,     0,     0,    56,    57,
      58,    59,    60,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,     0,    64,    65,    66,    67,    68,    69,    70,    71,
       0,    72,    73,    74,    75,    15,    16,     0,     0,    17,
       0,     0,     0,     0,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,    55,
       0,     0,     0,     0,    56,    57,    58,    59,    60,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,     0,    64,    65,
      66,    67,    68,    69,    70,    71,     0,    72,    73,    74,
      75,    15,    16,     0,     0,    17,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,    55,     0,     0,     0,     0,
      56,    57,    58,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,     0,    64,    65,    66,    67,    68,    69,
      70,    71,     0,    72,    73,    74,    75
};

static const short int yycheck[] =
{
      16,    62,    63,     8,   379,   416,   417,   248,   249,     3,
       7,    72,    73,    79,    80,   417,    82,    83,   323,     3,
     325,     7,    56,   434,     3,    91,    44,    93,    12,    13,
      41,    34,   434,    51,     7,    41,    38,    41,   116,    30,
     178,    14,    82,    83,    38,     3,    57,   116,   133,    54,
       3,   135,    37,   181,    39,     6,    34,   154,    41,   130,
     145,   137,    34,   141,   475,    34,   137,   164,   309,    34,
      34,    37,    57,   475,    57,   144,    54,    80,    34,    34,
      34,   165,     9,    10,    11,    54,   155,    34,   133,   524,
     129,    57,   131,   133,    21,    22,   133,     9,    10,    11,
     145,     7,    34,    34,    34,   480,   517,   173,   145,    77,
      78,   546,    34,   548,   116,   517,     0,   111,   112,   113,
     114,    33,   128,    34,   365,   131,   110,   111,   112,   113,
     114,   110,    34,    34,   145,   376,   138,   116,   549,   173,
     137,   145,   133,   116,   116,   139,   140,   549,   142,   143,
     144,   137,   116,   111,   112,   113,   114,   110,   142,   143,
     144,   155,   156,   116,   182,   183,   471,   118,    34,   134,
     121,   155,   156,   178,   138,   180,   173,   612,   134,   134,
     134,   139,   140,    34,   142,   143,   144,   134,   193,   194,
     117,   626,   627,   120,   116,    34,   201,   155,   156,   126,
     127,   128,   134,   134,   134,    34,   133,   212,   213,   214,
     215,     9,    10,    11,   116,   127,   128,    34,   130,    34,
      34,   133,    34,   134,   465,   230,   231,   468,   469,   640,
      14,   236,   237,   134,    32,   133,    25,   542,   640,   614,
     481,    34,   258,   259,   260,   133,    34,   145,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   168,   137,    26,    35,    36,   134,    35,
      31,    40,   133,    42,   179,    44,    45,   177,    44,    45,
     133,   181,    35,   134,   345,    38,   347,    69,    70,    71,
      72,   180,   181,   298,   310,   134,   169,   170,   171,   172,
     173,   174,   175,   176,   116,   134,   286,   287,   288,   289,
     183,   327,   328,   554,   555,    38,    37,   134,    39,   134,
     134,    73,    74,   116,    75,    76,   331,   332,   116,   127,
     128,    66,    67,    68,   132,   133,   161,   162,   163,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,     8,   416,   417,   418,   419,   425,
     426,   135,   136,   135,   136,   159,   160,   383,    38,   385,
      38,   387,   115,   434,    67,    68,    49,    50,   115,   166,
     167,    46,    47,    49,    50,   284,   285,   290,   291,    35,
      36,   116,    37,    38,   116,   292,   293,   116,   639,   626,
     627,   418,   419,     5,   300,   301,   133,   133,    15,   133,
       3,    34,   154,   133,   475,   133,   432,   133,   133,   424,
     133,    61,   438,    62,    85,   441,    63,    65,    84,    86,
       8,    34,     8,    34,     8,   133,   133,   116,   116,    23,
     116,   116,   116,    14,   116,     7,    38,     3,    43,     4,
      44,    64,    35,    57,    79,     7,   517,    57,    57,    31,
      86,    48,     8,   134,    34,     7,    14,    14,   137,    38,
     137,   182,   488,    39,   490,    43,    35,    37,    41,    37,
      59,    56,   133,   119,   133,   116,   133,     8,   549,    86,
      34,    34,     8,   137,   510,   511,    86,   115,   514,   115,
     516,   161,    37,    57,   520,   116,    38,    48,   116,     8,
     116,    35,     5,   134,    51,    60,     8,    57,     3,     4,
      35,   526,     7,   539,    35,   530,     4,    12,    13,     4,
     121,    16,    17,    18,    19,    20,    21,     7,   543,    24,
     547,    98,   322,   559,   436,    30,   324,   264,   488,   559,
      32,    36,   266,    38,   283,    40,   326,   573,   518,   267,
     121,   524,   419,   525,    61,    61,    73,    52,    53,    72,
      55,   347,    -1,    58,    -1,    -1,    -1,    -1,    -1,   640,
      -1,    -1,    67,    68,    -1,    -1,    -1,   603,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   622,   623,    -1,   625,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,   658,   659,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,    -1,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,   168,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,   179,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
      -1,   117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,    -1,    -1,
      -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    -1,   117,    -1,    -1,    -1,    -1,   122,   123,
     124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,   117,
      -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,   117,    -1,    -1,    -1,    -1,
     122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,    -1,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   177,   181,   186,   187,   188,   189,   190,   191,   178,
     137,     0,   188,   189,   191,     3,     4,     7,    12,    13,
      16,    17,    18,    19,    20,    21,    24,    30,    36,    38,
      40,    52,    53,    55,    58,    67,    68,    77,    78,    81,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   117,   122,   123,   124,   125,
     126,   142,   143,   144,   146,   147,   148,   149,   150,   151,
     152,   153,   155,   156,   157,   158,   168,   179,   192,   193,
     195,   196,   197,   198,   199,   200,   201,   204,   205,   206,
     209,   210,   211,   212,   216,   217,   218,   219,   220,   221,
     222,   226,   235,   238,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   285,   286,   287,   294,
     295,   297,   298,   299,   301,   302,   303,   304,   311,   312,
     313,   314,   315,   316,   317,   319,   321,   323,   328,   329,
     330,   332,   333,     7,    14,   116,   218,   284,   133,   133,
     133,    25,    38,   223,   224,     8,    38,   227,   228,    38,
     236,   237,   236,   115,   115,   254,   254,   261,   261,    82,
      83,   133,   270,     7,    14,   116,   116,   116,   116,   116,
     217,     5,   133,   133,   133,   133,    15,   116,   321,   323,
     110,   116,   318,   325,   333,   110,   116,   322,   326,   333,
     133,   133,   324,   326,   320,   325,   133,   133,   137,   169,
     170,   171,   172,   173,   174,   175,   176,   183,   180,   181,
     154,   194,   194,   194,   194,   194,   194,   194,    34,    35,
      42,    44,    45,   221,   229,   230,    61,    62,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    63,    85,    65,    84,   133,   259,
      77,    78,   274,   270,   274,   270,   274,   164,   194,    86,
      34,   116,   134,   217,   134,   217,   300,   134,   217,    26,
      31,     8,    34,     8,    34,     8,    34,    54,    54,   217,
     217,   133,   133,   217,   116,   116,   116,   288,   217,   217,
     217,   217,    23,   116,   116,    34,   116,    34,   116,   217,
     217,   116,   116,   217,   217,    14,   135,   136,     7,   331,
     135,   136,   159,   160,    44,    51,   182,   183,   135,   165,
     202,    38,     3,     4,   137,   173,   208,   331,   137,   331,
     218,   218,   218,    43,    44,    35,   230,    35,   243,   244,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   246,   247,   247,   248,   248,
     248,   248,   249,   249,   250,   250,    64,    57,    57,    57,
     134,   217,   262,   262,    79,     7,   331,   218,   134,   134,
     134,    31,    37,    39,    57,   225,   306,   224,    41,   306,
     228,    37,   306,   237,   218,   218,   116,   116,   217,   217,
     134,     6,   118,   121,   134,   134,   134,   134,   327,   333,
     327,   134,   134,   134,   134,    86,    48,   331,   137,   137,
      34,     8,     7,    38,   116,   138,   213,   214,    14,   182,
     331,    39,   207,    14,   207,   218,   231,   232,    43,   218,
      35,   218,   139,   140,   307,   309,   310,   311,   333,   307,
     305,   310,   305,   134,   217,   194,   194,   218,    38,   307,
      37,    37,   225,   218,    41,   218,    37,    56,   239,   240,
      59,   134,   134,   119,   292,   133,   133,   116,   116,   141,
     133,   331,    49,    50,   331,   331,   166,   167,   203,    41,
     145,   306,     8,   133,   145,   215,   307,    34,   116,   138,
      86,   137,   207,   331,    34,    86,    46,    47,   233,    34,
     231,   218,   115,   115,   161,   162,   163,   308,   161,    80,
       8,   218,   218,    37,   218,   218,    38,   307,   173,   240,
     218,   129,   131,   289,     9,    10,    11,    22,   120,   127,
     128,   215,   286,   293,   296,   134,   300,   134,   217,   116,
     134,   217,   218,    41,   145,   306,   217,   145,   215,   214,
     145,   215,   307,   331,   331,    48,   234,   232,   116,   116,
     218,     8,    35,    35,    38,    60,   290,   291,     5,   134,
     134,   134,   218,   134,   145,   215,   207,    49,    50,    51,
      57,   218,   218,     8,   218,     9,    33,   130,   215,   293,
       9,    32,   132,   215,   293,   121,   331,   307,    35,    35,
     218,   218
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (0)
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
              (Loc).first_line, (Loc).first_column,	\
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value, Location);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");

# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended. */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to look-ahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
  *++yylsp = yylloc;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, yylsp - yylen, yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 472 ".\\src\\parser\\xquery.y"
    {
		if(!XPath2Utils::equals((yyvsp[-1].str),sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
	;}
    break;

  case 7:
#line 477 ".\\src\\parser\\xquery.y"
    {
		if(!XPath2Utils::equals((yyvsp[-3].str),sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
        bool bValidEnc=false;
        if(((yyvsp[-1].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && (yyvsp[-1].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
           ((yyvsp[-1].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && (yyvsp[-1].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z))
        {
            bValidEnc=true;
            int nLen=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str));
            for(int i=1;i<nLen;i++)
            {
                if(((yyvsp[-1].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && (yyvsp[-1].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
                   ((yyvsp[-1].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && (yyvsp[-1].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z) ||
                   ((yyvsp[-1].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0 && (yyvsp[-1].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_9) ||
                   (yyvsp[-1].str)[i] == XERCES_CPP_NAMESPACE_QUALIFIER chPeriod ||
                   (yyvsp[-1].str)[i] == XERCES_CPP_NAMESPACE_QUALIFIER chDash)
                {
                    continue;
                }
                bValidEnc=false;
                break;
            }
        }
        if(!bValidEnc)
          yyerror("The specified encoding does not conform to the definition of EncName [err:XQST0087]");
		// TODO: store the encoding somewhere
	;}
    break;

  case 8:
#line 509 ".\\src\\parser\\xquery.y"
    {
	;}
    break;

  case 9:
#line 516 ".\\src\\parser\\xquery.y"
    {
	;}
    break;

  case 10:
#line 523 ".\\src\\parser\\xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace((yyvsp[-1].str));
		CONTEXT->setNamespaceBinding((yyvsp[-3].str),(yyvsp[-1].str));
	;}
    break;

  case 12:
#line 537 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a setter declaration after a variable, function or option declaration");
    ;}
    break;

  case 13:
#line 542 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains an import declaration after a variable, function or option declaration");
    ;}
    break;

  case 14:
#line 547 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a namespace declaration after a variable, function or option declaration");
    ;}
    break;

  case 15:
#line 552 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a default namespace declaration after a variable, function or option declaration");
    ;}
    break;

  case 16:
#line 557 ".\\src\\parser\\xquery.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    ;}
    break;

  case 17:
#line 561 ".\\src\\parser\\xquery.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
		XQUserFunction* decl=(yyvsp[-1].functDecl);
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	;}
    break;

  case 18:
#line 568 ".\\src\\parser\\xquery.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    ;}
    break;

  case 29:
#line 604 ".\\src\\parser\\xquery.y"
    {
            if(!XPath2Utils::equals((yyvsp[-2].str),X("xml")) && !XPath2Utils::equals((yyvsp[-2].str),X("xmlns")) &&
               !XPath2Utils::equals((yyvsp[-2].str),X("xs")) && !XPath2Utils::equals((yyvsp[-2].str),X("xsi")) &&
               !XPath2Utils::equals((yyvsp[-2].str),X("fn")) && !XPath2Utils::equals((yyvsp[-2].str),X("xdt")) && 
               !XPath2Utils::equals((yyvsp[-2].str),X("local")) )
            {
		        try
		        {
			        CONTEXT->getUriBoundToPrefix((yyvsp[-2].str));
                    // if it has already bound, report an error
                    yyerror("Namespace prefix has already been bound to a namespace [err:XQST0033]");
		        }
		        catch(NamespaceLookupException&)
		        {
                }
            }
            CONTEXT->setNamespaceBinding((yyvsp[-2].str),(yyvsp[0].str));
		;}
    break;

  case 30:
#line 627 ".\\src\\parser\\xquery.y"
    {
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(true);
		;}
    break;

  case 31:
#line 634 ".\\src\\parser\\xquery.y"
    {
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(false);
		;}
    break;

  case 32:
#line 645 ".\\src\\parser\\xquery.y"
    {
		    if(QP->_flags.get(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default element namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultElementAndTypeNS((yyvsp[0].str));
		;}
    break;

  case 33:
#line 652 ".\\src\\parser\\xquery.y"
    { 
		    if(QP->_flags.get(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default function namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultFuncNS((yyvsp[0].str));
		;}
    break;

  case 34:
#line 663 ".\\src\\parser\\xquery.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[-1].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The option name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The option name is using an undefined namespace prefix [err:XPST0081]");
		}
      ;}
    break;

  case 35:
#line 684 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	;}
    break;

  case 36:
#line 691 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	;}
    break;

  case 37:
#line 702 ".\\src\\parser\\xquery.y"
    { 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	;}
    break;

  case 38:
#line 709 ".\\src\\parser\\xquery.y"
    { 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
	;}
    break;

  case 39:
#line 720 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_COPYNAMESPACE_SPECIFIED))
			yyerror("Prolog contains more than one copy namespace declaration [err:XQST0055]");
		QP->_flags.set(BIT_COPYNAMESPACE_SPECIFIED);
		CONTEXT->setPreserveNamespaces(XPath2Utils::equals((yyvsp[-2].str),szTrue));
		CONTEXT->setInheritNamespaces(XPath2Utils::equals((yyvsp[0].str),szTrue));
    ;}
    break;

  case 40:
#line 732 ".\\src\\parser\\xquery.y"
    {
        (yyval.str) = szTrue;
	;}
    break;

  case 41:
#line 736 ".\\src\\parser\\xquery.y"
    {
        (yyval.str) = szFalse;
	;}
    break;

  case 42:
#line 744 ".\\src\\parser\\xquery.y"
    {
        (yyval.str) = szTrue;
	;}
    break;

  case 43:
#line 748 ".\\src\\parser\\xquery.y"
    {
        (yyval.str) = szFalse;
	;}
    break;

  case 44:
#line 756 ".\\src\\parser\\xquery.y"
    {
		    if(QP->_flags.get(BIT_COLLATION_SPECIFIED))
			    yyerror("Prolog contains more than one default collation declaration [err:XQST0038]");
		    QP->_flags.set(BIT_COLLATION_SPECIFIED);
            try
            {
                CONTEXT->getCollation((yyvsp[0].str));
            }
            catch(ContextException&)
            {
			    yyerror("The specified collation does not exist [err:XQST0038]");
            }
			CONTEXT->setDefaultCollation((yyvsp[0].str));
		;}
    break;

  case 45:
#line 775 ".\\src\\parser\\xquery.y"
    {
		    if(QP->_flags.get(BIT_BASEURI_SPECIFIED))
			    yyerror("Prolog contains more than one base URI declaration [err:XQST0032]");
		    QP->_flags.set(BIT_BASEURI_SPECIFIED);
			CONTEXT->setBaseURI((yyvsp[0].str));
		;}
    break;

  case 46:
#line 786 ".\\src\\parser\\xquery.y"
    {
			if(XPath2Utils::equals((yyvsp[-1].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS((yyvsp[0].str));
			else if(XPath2Utils::equals((yyvsp[0].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror("A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding((yyvsp[-1].str),(yyvsp[0].str));
            try {
			  CONTEXT->addSchemaLocation((yyvsp[0].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
              throw e;
            }
		;}
    break;

  case 47:
#line 802 ".\\src\\parser\\xquery.y"
    {
			if(XPath2Utils::equals((yyvsp[-2].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS((yyvsp[-1].str));
			else if(XPath2Utils::equals((yyvsp[-1].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror("A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding((yyvsp[-2].str),(yyvsp[-1].str));
            try {
			  CONTEXT->addSchemaLocation((yyvsp[-1].str),(yyvsp[0].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-4]).first_line, (yylsp[-4]).first_column);
              throw e;
            }
		;}
    break;

  case 48:
#line 818 ".\\src\\parser\\xquery.y"
    { 
            try {
			  CONTEXT->addSchemaLocation((yyvsp[0].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
              throw e;
            }
		;}
    break;

  case 49:
#line 828 ".\\src\\parser\\xquery.y"
    {
            try {
			  CONTEXT->addSchemaLocation((yyvsp[-1].str),(yyvsp[0].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
              throw e;
            }
		;}
    break;

  case 50:
#line 841 ".\\src\\parser\\xquery.y"
    {
		(yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
		(yyval.stringList)->push_back((yyvsp[0].str));
	;}
    break;

  case 51:
#line 846 ".\\src\\parser\\xquery.y"
    {
		(yyvsp[-2].stringList)->push_back((yyvsp[0].str));
		(yyval.stringList) = (yyvsp[-2].stringList);
	;}
    break;

  case 52:
#line 855 ".\\src\\parser\\xquery.y"
    {
			(yyval.str) = (yyvsp[-1].str);
		;}
    break;

  case 53:
#line 859 ".\\src\\parser\\xquery.y"
    {
			(yyval.str) = (XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		;}
    break;

  case 54:
#line 867 ".\\src\\parser\\xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[-3].str),(yyvsp[-1].str));
        try {
		  QP->_query->importModule((yyvsp[-1].str),(yyvsp[0].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-6]).first_line, (yylsp[-6]).first_column);
          throw e;
        }
	;}
    break;

  case 55:
#line 880 ".\\src\\parser\\xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[0].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[-2].str),(yyvsp[0].str));
        try {
		  QP->_query->importModule((yyvsp[0].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
          throw e;
        }
	;}
    break;

  case 56:
#line 893 ".\\src\\parser\\xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[-1].str),(yyvsp[0].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
          throw e;
        }
	;}
    break;

  case 57:
#line 905 ".\\src\\parser\\xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[0].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[0].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
          throw e;
        }
	;}
    break;

  case 58:
#line 921 ".\\src\\parser\\xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-3].str),(yyvsp[-2].sequenceType),
                                                            WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 59:
#line 927 ".\\src\\parser\\xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 60:
#line 933 ".\\src\\parser\\xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),(yyvsp[-1].sequenceType),NULL,MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 61:
#line 938 ".\\src\\parser\\xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-1].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            NULL,MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 62:
#line 948 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
	;}
    break;

  case 63:
#line 955 ".\\src\\parser\\xquery.y"
    {
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
	;}
    break;

  case 64:
#line 967 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		;}
    break;

  case 65:
#line 971 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		;}
    break;

  case 66:
#line 975 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 67:
#line 979 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 68:
#line 983 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),NULL,NULL, CONTEXT); 
		;}
    break;

  case 69:
#line 987 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,NULL,NULL, CONTEXT); 
		;}
    break;

  case 70:
#line 991 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 71:
#line 995 ".\\src\\parser\\xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 72:
#line 1003 ".\\src\\parser\\xquery.y"
    {
			(yyvsp[-2].funcParams)->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = (yyvsp[-2].funcParams);
		;}
    break;

  case 73:
#line 1008 ".\\src\\parser\\xquery.y"
    {
			XQUserFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQUserFunction::VectorOfFunctionParameters(XQillaAllocator<XQUserFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = paramList;
		;}
    break;

  case 74:
#line 1018 ".\\src\\parser\\xquery.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[-1].str),(yyvsp[0].sequenceType),MEMMGR);
		;}
    break;

  case 75:
#line 1022 ".\\src\\parser\\xquery.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[0].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR) ,MEMMGR);
		;}
    break;

  case 76:
#line 1030 ".\\src\\parser\\xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[-1].astNode)); 
		;}
    break;

  case 77:
#line 1038 ".\\src\\parser\\xquery.y"
    {
	    QP->_query->setQueryBody((yyvsp[0].astNode));
	;}
    break;

  case 78:
#line 1046 ".\\src\\parser\\xquery.y"
    {
			ASTNode* prevExpr=(yyvsp[-2].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::PARENTHESIZED)
			{
				((XQParenthesizedExpr *)prevExpr)->addItem((yyvsp[0].astNode));
				(yyval.astNode) = (yyvsp[-2].astNode);
			}
			else
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem((yyvsp[-2].astNode));
				dis->addItem((yyvsp[0].astNode));
				(yyval.astNode) = dis;
			}
		;}
    break;

  case 79:
#line 1064 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		;}
    break;

  case 85:
#line 1081 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-4]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-4].variableBindingList), (yyvsp[-3].astNode), (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 86:
#line 1085 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), (yyvsp[-2].astNode), NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 87:
#line 1089 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), NULL, (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 88:
#line 1093 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-2].variableBindingList), NULL, NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 89:
#line 1100 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[-1].variableBindingList);
			for (VectorOfVariableBinding::iterator it = (yyvsp[0].variableBindingList)->begin(); it != (yyvsp[0].variableBindingList)->end (); ++it) 
				(yyvsp[-1].variableBindingList)->push_back(*it);
		;}
    break;

  case 93:
#line 1117 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		;}
    break;

  case 94:
#line 1124 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 95:
#line 1128 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 96:
#line 1136 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 97:
#line 1142 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),(yyvsp[-2].str));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 98:
#line 1148 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 99:
#line 1154 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-4].str),(yyvsp[0].astNode),(yyvsp[-2].str),(yyvsp[-3].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 100:
#line 1164 ".\\src\\parser\\xquery.y"
    { 
			(yyval.str) = (yyvsp[0].str); 
		;}
    break;

  case 101:
#line 1173 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		;}
    break;

  case 102:
#line 1180 ".\\src\\parser\\xquery.y"
    {
			(yyvsp[-2].variableBindingList)->push_back((yyvsp[0].variableBinding));
			(yyval.variableBindingList) = (yyvsp[-2].variableBindingList);
		;}
    break;

  case 103:
#line 1185 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 104:
#line 1193 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 105:
#line 1199 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 106:
#line 1209 ".\\src\\parser\\xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[0].astNode));
		;}
    break;

  case 107:
#line 1217 ".\\src\\parser\\xquery.y"
    {
			(yyval.sort)=new (MEMMGR) XQSort(XQSort::unstable,(yyvsp[0].sortSpecList));
		;}
    break;

  case 108:
#line 1221 ".\\src\\parser\\xquery.y"
    {
			(yyval.sort)=new (MEMMGR) XQSort(XQSort::stable,(yyvsp[0].sortSpecList));
		;}
    break;

  case 109:
#line 1229 ".\\src\\parser\\xquery.y"
    {
			(yyvsp[-2].sortSpecList)->push_back((yyvsp[0].sortSpec));
			(yyval.sortSpecList) = (yyvsp[-2].sortSpecList);
		;}
    break;

  case 110:
#line 1234 ".\\src\\parser\\xquery.y"
    {
			(yyval.sortSpecList) = new (MEMMGR) XQSort::VectorOfSortSpec(XQillaAllocator<XQSort::SortSpec*>(MEMMGR));
			(yyval.sortSpecList)->push_back((yyvsp[0].sortSpec));
		;}
    break;

  case 111:
#line 1244 ".\\src\\parser\\xquery.y"
    {
			(yyval.sortSpec) = new (MEMMGR) XQSort::SortSpec((yyvsp[-2].astNode),(yyvsp[-1].sortModifier)+(yyvsp[0].sortModifier),NULL);
		;}
    break;

  case 112:
#line 1248 ".\\src\\parser\\xquery.y"
    {
            try
            {
                CONTEXT->getCollation((yyvsp[0].str));
            }
            catch(ContextException&)
            {
			    yyerror("The specified collation does not exist [err:XQST0076]");
            }
			(yyval.sortSpec) = new (MEMMGR) XQSort::SortSpec((yyvsp[-4].astNode),(yyvsp[-3].sortModifier)+(yyvsp[-2].sortModifier),(yyvsp[0].str));
		;}
    break;

  case 113:
#line 1263 ".\\src\\parser\\xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; ;}
    break;

  case 114:
#line 1265 ".\\src\\parser\\xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; ;}
    break;

  case 115:
#line 1267 ".\\src\\parser\\xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::descending; ;}
    break;

  case 116:
#line 1272 ".\\src\\parser\\xquery.y"
    { 
			switch(CONTEXT->getDefaultFLWOROrderingMode())
			{
			case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
				(yyval.sortModifier) = XQSort::SortSpec::empty_least; break;
			case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
				(yyval.sortModifier) = XQSort::SortSpec::empty_greatest; break;
			}
		;}
    break;

  case 117:
#line 1282 ".\\src\\parser\\xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_greatest; ;}
    break;

  case 118:
#line 1284 ".\\src\\parser\\xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_least; ;}
    break;

  case 119:
#line 1291 ".\\src\\parser\\xquery.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::some, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	;}
    break;

  case 120:
#line 1295 ".\\src\\parser\\xquery.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::every, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	;}
    break;

  case 121:
#line 1302 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 122:
#line 1306 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 123:
#line 1314 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 124:
#line 1320 ".\\src\\parser\\xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 125:
#line 1330 ".\\src\\parser\\xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-4]), (yyvsp[0].astNode)),MEMMGR->getPooledString((yyvsp[-2].str)));
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-9]), (yyvsp[-7].astNode)), (yyvsp[-5].clauseList), defClause, MEMMGR);
		;}
    break;

  case 126:
#line 1335 ".\\src\\parser\\xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-2]), (yyvsp[0].astNode)),NULL);
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-7]), (yyvsp[-5].astNode)), (yyvsp[-3].clauseList), defClause, MEMMGR);
		;}
    break;

  case 127:
#line 1343 ".\\src\\parser\\xquery.y"
    {
			(yyvsp[-1].clauseList)->push_back((yyvsp[0].clause));
			(yyval.clauseList)=(yyvsp[-1].clauseList);
		;}
    break;

  case 128:
#line 1348 ".\\src\\parser\\xquery.y"
    {
			(yyval.clauseList)=new (MEMMGR) XQTypeswitch::VectorOfClause(XQillaAllocator<XQTypeswitch::Clause*>(MEMMGR));
			(yyval.clauseList)->push_back((yyvsp[0].clause));
		;}
    break;

  case 129:
#line 1357 ".\\src\\parser\\xquery.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-3]), (yyvsp[0].astNode)), NULL);
		;}
    break;

  case 130:
#line 1361 ".\\src\\parser\\xquery.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-6]), (yyvsp[0].astNode)), MEMMGR->getPooledString((yyvsp[-4].str)));
		;}
    break;

  case 131:
#line 1369 ".\\src\\parser\\xquery.y"
    { 
	        (yyval.astNode) = WRAP((yylsp[-7]), new (MEMMGR) XQIf((yyvsp[-5].astNode), (yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR));
		;}
    break;

  case 132:
#line 1377 ".\\src\\parser\\xquery.y"
    {
			ASTNode* prevExpr=(yyvsp[-2].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),Or::name))
			{
				((Or*)prevExpr)->addArgument((yyvsp[0].astNode));
				(yyval.astNode) = prevExpr;
			}
			else
				(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) Or(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 134:
#line 1396 ".\\src\\parser\\xquery.y"
    {
			ASTNode* prevExpr=(yyvsp[-2].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),And::name))
			{
				((And*)prevExpr)->addArgument((yyvsp[0].astNode));
				(yyval.astNode) = prevExpr;
			}
			else
				(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) And(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 136:
#line 1420 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 137:
#line 1424 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 138:
#line 1428 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 139:
#line 1432 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 140:
#line 1436 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 141:
#line 1440 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 142:
#line 1444 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Equals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 143:
#line 1448 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NotEquals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 144:
#line 1452 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 145:
#line 1456 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 146:
#line 1460 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 147:
#line 1464 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 148:
#line 1468 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), MEMMGR));
		;}
    break;

  case 149:
#line 1472 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), true, MEMMGR));
		;}
    break;

  case 150:
#line 1476 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), false,MEMMGR));
		;}
    break;

  case 152:
#line 1485 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Range(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 154:
#line 1494 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Plus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 155:
#line 1498 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Minus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 157:
#line 1507 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Multiply(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 158:
#line 1511 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Divide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 159:
#line 1515 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 160:
#line 1519 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Mod(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 162:
#line 1528 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 163:
#line 1532 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 165:
#line 1541 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Intersect(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 166:
#line 1545 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Except(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 168:
#line 1554 ".\\src\\parser\\xquery.y"
    {
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQInstanceOf((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 170:
#line 1563 ".\\src\\parser\\xquery.y"
    {
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQTreatAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 172:
#line 1572 ".\\src\\parser\\xquery.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a castable expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQCastableAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 174:
#line 1587 ".\\src\\parser\\xquery.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a cast expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQCastAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 176:
#line 1602 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back((yyvsp[0].astNode));
			(yyval.astNode) = new (MEMMGR) UnaryMinus(args, MEMMGR);
		;}
    break;

  case 177:
#line 1608 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		;}
    break;

  case 182:
#line 1626 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		;}
    break;

  case 183:
#line 1630 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-4]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
		;}
    break;

  case 184:
#line 1634 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-4]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		;}
    break;

  case 185:
#line 1642 ".\\src\\parser\\xquery.y"
    {
		// we don't support any pragma
		yyerror("This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
	;}
    break;

  case 186:
#line 1647 ".\\src\\parser\\xquery.y"
    {
		// we don't support any pragma
		(yyval.astNode) = (yyvsp[-1].astNode);
	;}
    break;

  case 189:
#line 1662 ".\\src\\parser\\xquery.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[-2].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The pragma name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      ;}
    break;

  case 190:
#line 1679 ".\\src\\parser\\xquery.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[-1].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror("The pragma name must have a prefix [err:XPST0081]");

		try
		{
			CONTEXT->getUriBoundToPrefix(prefix);
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      ;}
    break;

  case 191:
#line 1700 ".\\src\\parser\\xquery.y"
    {
			XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		;}
    break;

  case 192:
#line 1706 ".\\src\\parser\\xquery.y"
    {
			XQNav* nav=getNavigation((yyvsp[0].astNode),MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		;}
    break;

  case 193:
#line 1712 ".\\src\\parser\\xquery.y"
    {
            XQNav *newNavigation = getNavigation((yyvsp[0].astNode),MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            newNavigation->addStepFront(new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR));        

            newNavigation->addInitialRootStep(MEMMGR);

            (yyval.astNode) = newNavigation;
		;}
    break;

  case 195:
#line 1731 ".\\src\\parser\\xquery.y"
    {
			XQNav *nav = getNavigation((yyvsp[-2].astNode),MEMMGR);
			nav->addStep((yyvsp[0].astNode));
			(yyval.astNode) = nav;
		;}
    break;

  case 196:
#line 1737 ".\\src\\parser\\xquery.y"
    {
			XQNav *nav = getNavigation((yyvsp[-2].astNode),MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            nav->addStep(XQStep::DESCENDANT_OR_SELF, step);
			nav->addStep((yyvsp[0].astNode));

			(yyval.astNode) = nav;
		;}
    break;

  case 200:
#line 1761 ".\\src\\parser\\xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		;}
    break;

  case 201:
#line 1765 ".\\src\\parser\\xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
      (yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
		;}
    break;

  case 202:
#line 1774 ".\\src\\parser\\xquery.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        switch((yyvsp[-1].axis)) {
        case XQStep::NAMESPACE: (yyvsp[0].nodeTest)->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string); break;
        default: (yyvsp[0].nodeTest)->setNodeType(Node::element_string); break;
        }
      }

			(yyval.astNode) = new (MEMMGR) XQStep((yyvsp[-1].axis),(yyvsp[0].nodeTest),MEMMGR);
		;}
    break;

  case 204:
#line 1797 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::CHILD;
		;}
    break;

  case 205:
#line 1801 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::DESCENDANT;
		;}
    break;

  case 206:
#line 1805 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::ATTRIBUTE;
		;}
    break;

  case 207:
#line 1809 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::SELF;
		;}
    break;

  case 208:
#line 1813 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
		;}
    break;

  case 209:
#line 1817 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::FOLLOWING_SIBLING;
		;}
    break;

  case 210:
#line 1821 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::FOLLOWING;
		;}
    break;

  case 211:
#line 1829 ".\\src\\parser\\xquery.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[0].nodeTest), MEMMGR);
		;}
    break;

  case 212:
#line 1837 ".\\src\\parser\\xquery.y"
    {
      XQStep::Axis axis = XQStep::CHILD;
      SequenceType::ItemType *itemtype = (yyvsp[0].nodeTest)->getItemType();
      if(itemtype != 0 &&
         itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
        axis = XQStep::ATTRIBUTE;
      }
      else if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep(axis, (yyvsp[0].nodeTest), MEMMGR);
		;}
    break;

  case 213:
#line 1855 ".\\src\\parser\\xquery.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), MEMMGR);
		;}
    break;

  case 215:
#line 1872 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::PARENT;
		;}
    break;

  case 216:
#line 1876 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::ANCESTOR;
		;}
    break;

  case 217:
#line 1880 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::PRECEDING_SIBLING;
		;}
    break;

  case 218:
#line 1884 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::PRECEDING;
		;}
    break;

  case 219:
#line 1888 ".\\src\\parser\\xquery.y"
    {
      (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
		;}
    break;

  case 220:
#line 1896 ".\\src\\parser\\xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			(yyval.astNode) = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
		;}
    break;

  case 223:
#line 1914 ".\\src\\parser\\xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodePrefix((yyvsp[0].qName)->getPrefix());
			step->setNodeName((yyvsp[0].qName)->getName());
			(yyval.nodeTest) = step;
		;}
    break;

  case 225:
#line 1926 ".\\src\\parser\\xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 226:
#line 1933 ".\\src\\parser\\xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodePrefix((yyvsp[0].str));
			step->setNameWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 227:
#line 1940 ".\\src\\parser\\xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName((yyvsp[0].str));
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 228:
#line 1951 ".\\src\\parser\\xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		;}
    break;

  case 229:
#line 1960 ".\\src\\parser\\xquery.y"
    {
	        (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
		;}
    break;

  case 230:
#line 1964 ".\\src\\parser\\xquery.y"
    {
      XQPredicate *pred = new (MEMMGR) XQPredicate((yyvsp[-1].astNode), MEMMGR);
			(yyvsp[-3].predicates)->push_back(pred);
			(yyval.predicates) = (yyvsp[-3].predicates); 
		;}
    break;

  case 244:
#line 1999 ".\\src\\parser\\xquery.y"
    {
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf((yyvsp[0].str),':');
			if(nColon!=-1)
  				(yyval.astNode) = new (MEMMGR) XQVariable((yyvsp[0].str),MEMMGR);
			else
				(yyval.astNode) = new (MEMMGR) XQVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, (yyvsp[0].str),MEMMGR);
		;}
    break;

  case 245:
#line 2011 ".\\src\\parser\\xquery.y"
    { 
			ASTNode* prevExpr=(yyvsp[-1].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()!=ASTNode::PARENTHESIZED)
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem((yyvsp[-1].astNode));
				(yyval.astNode) = WRAP((yylsp[-1]), dis);
			}
			else
				(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[-1].astNode));
		;}
    break;

  case 246:
#line 2025 ".\\src\\parser\\xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQSequence(MEMMGR));
		;}
    break;

  case 247:
#line 2033 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQContextItem(MEMMGR);
		;}
    break;

  case 248:
#line 2041 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[-1].astNode), MEMMGR);
		;}
    break;

  case 249:
#line 2049 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[-1].astNode), MEMMGR);
		;}
    break;

  case 250:
#line 2057 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = FNWRAP((yylsp[-1]), (yyvsp[-1].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-1].str), MEMMGR), args, MEMMGR));
		;}
    break;

  case 251:
#line 2062 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), (yyvsp[-2].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-2].str), MEMMGR), *(yyvsp[-1].itemList),MEMMGR));
		;}
    break;

  case 252:
#line 2069 ".\\src\\parser\\xquery.y"
    {
			(yyvsp[-2].itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList) = (yyvsp[-2].itemList);
		;}
    break;

  case 253:
#line 2074 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 259:
#line 2098 ".\\src\\parser\\xquery.y"
    { 
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[-2].str), AnyAtomicType::STRING),
										MEMMGR), 
								(yyvsp[-1].itemList), content, MEMMGR));
		;}
    break;

  case 260:
#line 2110 ".\\src\\parser\\xquery.y"
    { 
			if(!XPath2Utils::equals((yyvsp[-6].str),(yyvsp[-1].str)))
				yyerror("Close tag does not match open tag");
			// if we are requested to strip whitespace-only nodes, check if the last element content should be removed
			VectorOfASTNodes* elemContent=(yyvsp[-3].itemList);
			if(elemContent->size()>0)
			{
				if(elemContent->back()==0)
					elemContent->pop_back();
				else if(!CONTEXT->getPreserveBoundarySpace() &&
					    elemContent->back()->getType()==ASTNode::LITERAL)
				{
					Item::Ptr litVal = ((XQLiteral*)elemContent->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING &&
					   isAllSpaces(litVal->asString(CONTEXT)))
						elemContent->pop_back();
				}
			}
			(yyval.astNode) = WRAP((yylsp[-7]), new (MEMMGR) XQDOMConstructor(Node::element_string,
							  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[-6].str), AnyAtomicType::STRING),
										MEMMGR), 
							  (yyvsp[-5].itemList), elemContent,MEMMGR));
		;}
    break;

  case 261:
#line 2142 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 262:
#line 2146 ".\\src\\parser\\xquery.y"
    {
            (yyval.itemList) = (yyvsp[-3].itemList);
            ASTNode* attrItem=WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
                                            new (MEMMGR) XQLiteral(
                                                new (MEMMGR) AnyAtomicTypeConstructor(
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
                                                    (yyvsp[-2].str), AnyAtomicType::STRING),
                                                MEMMGR), 
                                            0, (yyvsp[0].itemList),MEMMGR));
            if(XPath2Utils::equals((yyvsp[-2].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString) ||
               XERCES_CPP_NAMESPACE_QUALIFIER XMLString::startsWith((yyvsp[-2].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSColonString))
            {
                (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
            }
            else
            {
                (yyval.itemList)->push_back(attrItem);
            }
        ;}
    break;

  case 263:
#line 2172 ".\\src\\parser\\xquery.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		;}
    break;

  case 264:
#line 2176 ".\\src\\parser\\xquery.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		;}
    break;

  case 265:
#line 2185 ".\\src\\parser\\xquery.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 266:
#line 2189 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 267:
#line 2194 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szQuote);
		;}
    break;

  case 268:
#line 2199 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 269:
#line 2204 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 270:
#line 2214 ".\\src\\parser\\xquery.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 271:
#line 2218 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 272:
#line 2223 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szApos);
		;}
    break;

  case 273:
#line 2228 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 274:
#line 2233 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 275:
#line 2248 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
		;}
    break;

  case 276:
#line 2252 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			// if the last token was a string literal made of whitespace and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if((yyval.itemList)->size()>0)
			{
				if((yyval.itemList)->back()==0)
					(yyval.itemList)->pop_back();
				else if((yyval.itemList)->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
						(yyval.itemList)->pop_back();
				}
			}
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 277:
#line 2273 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back() && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
			{
				XQLiteral *lit = (XQLiteral*)(yyval.itemList)->back();
				const XMLCh* string=lit->getItemConstructor()->createItem(CONTEXT)->asString(CONTEXT);
				string=XPath2Utils::concatStrings(string,(yyvsp[0].str),MEMMGR);

				AnyAtomicTypeConstructor *ic = new (MEMMGR)
    				AnyAtomicTypeConstructor(
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					string, AnyAtomicType::STRING);
    			lit->setItemConstructor(ic);
			}
			else
			{
				if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
					(yyval.itemList)->pop_back();
    			AnyAtomicTypeConstructor *ic = new (MEMMGR)
      				AnyAtomicTypeConstructor(
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
								XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
						(yyvsp[0].str), AnyAtomicType::STRING);

				(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			}
		;}
    break;

  case 278:
#line 2302 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
				(yyval.itemList)->pop_back();

    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					(yyvsp[0].str), AnyAtomicType::STRING);

			(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			(yyval.itemList)->push_back(0);
		;}
    break;

  case 279:
#line 2317 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			// if the last token was a string literal made of whitespace and
			// we are adding an enclosed expression, and the context tells us to strip whitespace, remove it
			if((yyval.itemList)->size()>0)
			{
				if((yyval.itemList)->back()==0)
					(yyval.itemList)->pop_back();
				else if((yyval.itemList)->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
						(yyval.itemList)->pop_back();
				}
			}
			(yyval.itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList)->push_back(0);
		;}
    break;

  case 280:
#line 2339 ".\\src\\parser\\xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
				(yyval.itemList)->pop_back();

    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					(yyvsp[0].str), AnyAtomicType::STRING);

			(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			(yyval.itemList)->push_back(0);
		;}
    break;

  case 283:
#line 2361 ".\\src\\parser\\xquery.y"
    {
		(yyval.str) = szCurlyOpen;
	;}
    break;

  case 284:
#line 2365 ".\\src\\parser\\xquery.y"
    {
		(yyval.str) = szCurlyClose;
	;}
    break;

  case 285:
#line 2374 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[0]), new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		;}
    break;

  case 286:
#line 2390 ".\\src\\parser\\xquery.y"
    {
			if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareIString((yyvsp[-1].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLString)==0)
			  yyerror("The target for the processing instruction must not be 'XML'");
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[-1].str), AnyAtomicType::STRING),
										MEMMGR), 
									  empty, content, MEMMGR));
		;}
    break;

  case 287:
#line 2416 ".\\src\\parser\\xquery.y"
    {
			(yyval.str) = (yyvsp[0].str);
		;}
    break;

  case 294:
#line 2439 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::document_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, AnyAtomicType::STRING),
										MEMMGR), 
								  empty, content,MEMMGR));
		;}
    break;

  case 295:
#line 2457 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										(yyvsp[-3].str), AnyAtomicType::QNAME),
										MEMMGR), 
								  empty, content,MEMMGR));
		;}
    break;

  case 296:
#line 2471 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										(yyvsp[-2].str), AnyAtomicType::QNAME),
										MEMMGR), 
								  empty, empty,MEMMGR));
		;}
    break;

  case 297:
#line 2483 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
								  empty, content, MEMMGR));
		;}
    break;

  case 298:
#line 2492 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
								  empty, empty, MEMMGR));
		;}
    break;

  case 300:
#line 2508 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										(yyvsp[-3].str), AnyAtomicType::QNAME),
										MEMMGR), 
									  0, content,MEMMGR));
		;}
    break;

  case 301:
#line 2521 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_QNAME,
										(yyvsp[-2].str), AnyAtomicType::QNAME),
										MEMMGR), 
									  0, empty,MEMMGR));
		;}
    break;

  case 302:
#line 2533 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
		;}
    break;

  case 303:
#line 2541 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
		;}
    break;

  case 304:
#line 2552 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::text_string, 0, 0, content, MEMMGR));
		;}
    break;

  case 305:
#line 2562 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		;}
    break;

  case 306:
#line 2572 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[-3].str), AnyAtomicType::STRING),
										MEMMGR), 
									  0, content, MEMMGR));
	  ;}
    break;

  case 307:
#line 2585 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[-2].str), AnyAtomicType::STRING),
										MEMMGR), 
									  0, empty, MEMMGR));
	  ;}
    break;

  case 308:
#line 2597 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
	  ;}
    break;

  case 309:
#line 2605 ".\\src\\parser\\xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
	  ;}
    break;

  case 310:
#line 2616 ".\\src\\parser\\xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[-1].qName)));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 311:
#line 2623 ".\\src\\parser\\xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[0].qName)));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 312:
#line 2634 ".\\src\\parser\\xquery.y"
    {
			(yyval.sequenceType) = (yyvsp[0].sequenceType);
		;}
    break;

  case 313:
#line 2642 ".\\src\\parser\\xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[-1].itemType));
			seq->setOccurrence((yyvsp[0].occurrence));
			(yyval.sequenceType) = seq;
		;}
    break;

  case 314:
#line 2649 ".\\src\\parser\\xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[0].itemType));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 315:
#line 2656 ".\\src\\parser\\xquery.y"
    { 
			(yyval.sequenceType) = new (MEMMGR) SequenceType(); 
		;}
    break;

  case 316:
#line 2665 ".\\src\\parser\\xquery.y"
    { (yyval.occurrence) = SequenceType::STAR; ;}
    break;

  case 317:
#line 2667 ".\\src\\parser\\xquery.y"
    { (yyval.occurrence) = SequenceType::PLUS; ;}
    break;

  case 318:
#line 2669 ".\\src\\parser\\xquery.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; ;}
    break;

  case 319:
#line 2675 ".\\src\\parser\\xquery.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName));
	;}
    break;

  case 320:
#line 2679 ".\\src\\parser\\xquery.y"
    {
		(yyval.itemType) = (yyvsp[0].nodeTest)->getItemType();
		(yyvsp[0].nodeTest)->setItemType(NULL);
	;}
    break;

  case 321:
#line 2684 ".\\src\\parser\\xquery.y"
    {
		(yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	;}
    break;

  case 322:
#line 2692 ".\\src\\parser\\xquery.y"
    {
		(yyval.qName) = (yyvsp[0].qName);
	;}
    break;

  case 332:
#line 2721 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 333:
#line 2731 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 334:
#line 2737 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	;}
    break;

  case 335:
#line 2746 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	;}
    break;

  case 336:
#line 2759 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 337:
#line 2769 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 338:
#line 2779 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	;}
    break;

  case 339:
#line 2785 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 340:
#line 2791 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 341:
#line 2801 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 342:
#line 2807 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 343:
#line 2813 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 345:
#line 2824 ".\\src\\parser\\xquery.y"
    {
		(yyval.qName) = NULL;
	;}
    break;

  case 346:
#line 2832 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 348:
#line 2847 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 349:
#line 2853 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 350:
#line 2859 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 351:
#line 2865 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-4].qName),(yyvsp[-2].qName));
		pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	;}
    break;

  case 353:
#line 2878 ".\\src\\parser\\xquery.y"
    {
		(yyval.qName) = NULL;
	;}
    break;

  case 354:
#line 2886 ".\\src\\parser\\xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 359:
#line 2916 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		;}
    break;

  case 360:
#line 2929 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		;}
    break;

  case 361:
#line 2942 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										(yyvsp[0].str), AnyAtomicType::DOUBLE),
										MEMMGR);
		;}
    break;

  case 362:
#line 2955 ".\\src\\parser\\xquery.y"
    {
		// the string must be whitespace-normalized
		XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS((yyvsp[0].str), MEMMGR);
        if((yyvsp[0].str) && *(yyvsp[0].str) && !XPath2Utils::isValidURI((yyvsp[0].str), MEMMGR))
          yyerror("The URI literal is not valid [err:XQST0046]");
		(yyval.str) = (yyvsp[0].str);
	;}
    break;

  case 363:
#line 2968 ".\\src\\parser\\xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR);
		;}
    break;

  case 364:
#line 2981 ".\\src\\parser\\xquery.y"
    {
			(yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[0].str),MEMMGR);
		;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5414 "src/parser/XQueryParser.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;
  yylsp -= yylen;

  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
	  char *yyfmt;
	  char const *yyf;
	  static char const yyunexpected[] = "syntax error, unexpected %s";
	  static char const yyexpecting[] = ", expecting %s";
	  static char const yyor[] = " or %s";
	  char yyformat[sizeof yyunexpected
			+ sizeof yyexpecting - 1
			+ ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
			   * (sizeof yyor - 1))];
	  char const *yyprefix = yyexpecting;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 1;

	  yyarg[0] = yytname[yytype];
	  yyfmt = yystpcpy (yyformat, yyunexpected);

	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
		  {
		    yycount = 1;
		    yysize = yysize0;
		    yyformat[sizeof yyunexpected - 1] = '\0';
		    break;
		  }
		yyarg[yycount++] = yytname[yyx];
		yysize1 = yysize + yytnamerr (0, yytname[yyx]);
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
		{
		  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		    {
		      yyp += yytnamerr (yyp, yyarg[yyi++]);
		      yyf += 2;
		    }
		  else
		    {
		      yyp++;
		      yyf++;
		    }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
        }
      else
	{
	  yydestruct ("Error: discarding", yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  yylsp -= yylen;
  yyvsp -= yylen;
  yyssp -= yylen;
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping", yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though. */
  YYLLOC_DEFAULT (yyloc, yyerror_range - 1, 2);
  *++yylsp = yyloc;

  /* Shift the error token. */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 2985 ".\\src\\parser\\xquery.y"


}	// namespace XQuery



