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
     _ORDER_BY_ = 298,
     _STABLE_ORDER_BY_ = 299,
     _ASCENDING_ = 300,
     _DESCENDING_ = 301,
     _EMPTY_GREATEST_ = 302,
     _EMPTY_LEAST_ = 303,
     _COLLATION_ = 304,
     _SOME_ = 305,
     _EVERY_ = 306,
     _SATISFIES_ = 307,
     _TYPESWITCH_ = 308,
     _DEFAULT_ = 309,
     _CASE_ = 310,
     _AS_ = 311,
     _IF_ = 312,
     _THEN_ = 313,
     _ELSE_ = 314,
     _OR_ = 315,
     _AND_ = 316,
     _INSTANCE_OF_ = 317,
     _CASTABLE_AS_ = 318,
     _TO_ = 319,
     _PLUS_ = 320,
     _MINUS_ = 321,
     _MULTIPLY_ = 322,
     _DIV_ = 323,
     _INTEGER_DIV_ = 324,
     _MOD_ = 325,
     _UNION_ = 326,
     _VERTICAL_BAR_ = 327,
     _INTERSECT_ = 328,
     _EXCEPT_ = 329,
     _SLASH_ = 330,
     _SLASHSLASH_ = 331,
     _LBRACK_ = 332,
     _RBRACK_ = 333,
     _VALIDATE_CONTENT_ = 334,
     _VALIDATE_MODE_LAX_ = 335,
     _VALIDATE_MODE_STRICT_ = 336,
     _CAST_AS_ = 337,
     _TREAT_AS_ = 338,
     _EQUALS_ = 339,
     _NOT_EQUALS_ = 340,
     _LT_ = 341,
     _LT_EQUALS_ = 342,
     _GT_ = 343,
     _GT_EQUALS_ = 344,
     _FORTRAN_EQ_ = 345,
     _FORTRAN_NE_ = 346,
     _FORTRAN_LT_ = 347,
     _FORTRAN_LE_ = 348,
     _FORTRAN_GT_ = 349,
     _FORTRAN_GE_ = 350,
     _IS_ = 351,
     _LT_LT_ = 352,
     _GT_GT_ = 353,
     _DOT_ = 354,
     _AT_ = 355,
     _DOT_DOT_ = 356,
     _AXIS_CHILD_ = 357,
     _AXIS_DESCENDANT_ = 358,
     _AXIS_ATTRIBUTE_ = 359,
     _AXIS_SELF_ = 360,
     _AXIS_DESCENDANT_OR_SELF_ = 361,
     _AXIS_PARENT_ = 362,
     _STAR_ = 363,
     _PROCESSING_INSTRUCTION_LPAR_ = 364,
     _COMMENT_LPAR_ = 365,
     _TEXT_LPAR_ = 366,
     _NODE_LPAR_ = 367,
     _LPAR_ = 368,
     _RPAR_ = 369,
     _START_TAG_OPEN_ = 370,
     _EMPTY_TAG_CLOSE_ = 371,
     _VALUE_INDICATOR_ = 372,
     _END_TAG_OPEN_ = 373,
     _TAG_CLOSE_ = 374,
     _DOCUMENT_CONSTR_ = 375,
     _ELEMENT_CONSTR_ = 376,
     _ATTRIBUTE_CONSTR_ = 377,
     _TEXT_CONSTR_ = 378,
     _PROCESSING_INSTRUCTION_START_ = 379,
     _LCURLY_BRACE_ESCAPE_ = 380,
     _RCURLY_BRACE_ESCAPE_ = 381,
     _OPEN_QUOT_ = 382,
     _CLOSE_QUOT_ = 383,
     _OPEN_APOS_ = 384,
     _CLOSE_APOS_ = 385,
     _LBRACE_ = 386,
     _RBRACE_ = 387,
     _PRESERVE_ = 388,
     _STRIP_ = 389,
     _NAMESPACE_ = 390,
     _EXPR_AS_ = 391,
     _EMPTY_ = 392,
     _ITEM_ = 393,
     _NILLABLE_ = 394,
     _IMPORT_SCHEMA_ = 395,
     _IMPORT_MODULE_ = 396,
     _DOCUMENT_NODE_LPAR_ = 397,
     _ATTRIBUTE_LPAR_ = 398,
     _ELEMENT_LPAR_ = 399,
     _EXTERNAL_ = 400,
     _MODULE_NAMESPACE_ = 401,
     _PROCESSING_INSTRUCTION_CONSTR_ = 402,
     _COMMENT_CONSTR_ = 403,
     _AXIS_ANCESTOR_OR_SELF_ = 404,
     _AXIS_ANCESTOR_ = 405,
     _AXIS_FOLLOWING_SIBLING_ = 406,
     _AXIS_FOLLOWING_ = 407,
     _AXIS_PRECEDING_SIBLING_ = 408,
     _AXIS_PRECEDING_ = 409,
     _SEMICOLON_ = 410,
     _DEFAULT_ELEMENT_ = 411,
     _SCHEMA_ELEMENT_LPAR_ = 412,
     _SCHEMA_ATTRIBUTE_LPAR_ = 413,
     _ORDERED_ = 414,
     _UNORDERED_ = 415,
     _ORDERING_UNORDERED_ = 416,
     _ORDERING_ORDERED_ = 417,
     _ZERO_OR_ONE_ = 418,
     _ONE_OR_MORE_ = 419,
     _ZERO_OR_MORE_ = 420,
     _ENCODING_ = 421,
     _NO_PRESERVE_ = 422,
     _INHERIT_ = 423,
     _NO_INHERIT_ = 424,
     _DECLARE_ = 425,
     _BOUNDARYSPACE_ = 426,
     _DEFAULT_COLLATION_ = 427,
     _DEFAULT_FUNCTION_ = 428,
     _BASEURI_ = 429,
     _CONSTRUCTION_ = 430,
     _ORDERING_ = 431,
     _DEFAULT_ORDER_ = 432,
     _COPY_NAMESPACES_ = 433,
     _DECLARE_FUNCTION_ = 434,
     _DECLARE_VARIABLE_ = 435,
     _DECLARE_OPTION_ = 436,
     _XQUERY_ = 437,
     _VERSION_ = 438,
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
#define _ORDER_BY_ 298
#define _STABLE_ORDER_BY_ 299
#define _ASCENDING_ 300
#define _DESCENDING_ 301
#define _EMPTY_GREATEST_ 302
#define _EMPTY_LEAST_ 303
#define _COLLATION_ 304
#define _SOME_ 305
#define _EVERY_ 306
#define _SATISFIES_ 307
#define _TYPESWITCH_ 308
#define _DEFAULT_ 309
#define _CASE_ 310
#define _AS_ 311
#define _IF_ 312
#define _THEN_ 313
#define _ELSE_ 314
#define _OR_ 315
#define _AND_ 316
#define _INSTANCE_OF_ 317
#define _CASTABLE_AS_ 318
#define _TO_ 319
#define _PLUS_ 320
#define _MINUS_ 321
#define _MULTIPLY_ 322
#define _DIV_ 323
#define _INTEGER_DIV_ 324
#define _MOD_ 325
#define _UNION_ 326
#define _VERTICAL_BAR_ 327
#define _INTERSECT_ 328
#define _EXCEPT_ 329
#define _SLASH_ 330
#define _SLASHSLASH_ 331
#define _LBRACK_ 332
#define _RBRACK_ 333
#define _VALIDATE_CONTENT_ 334
#define _VALIDATE_MODE_LAX_ 335
#define _VALIDATE_MODE_STRICT_ 336
#define _CAST_AS_ 337
#define _TREAT_AS_ 338
#define _EQUALS_ 339
#define _NOT_EQUALS_ 340
#define _LT_ 341
#define _LT_EQUALS_ 342
#define _GT_ 343
#define _GT_EQUALS_ 344
#define _FORTRAN_EQ_ 345
#define _FORTRAN_NE_ 346
#define _FORTRAN_LT_ 347
#define _FORTRAN_LE_ 348
#define _FORTRAN_GT_ 349
#define _FORTRAN_GE_ 350
#define _IS_ 351
#define _LT_LT_ 352
#define _GT_GT_ 353
#define _DOT_ 354
#define _AT_ 355
#define _DOT_DOT_ 356
#define _AXIS_CHILD_ 357
#define _AXIS_DESCENDANT_ 358
#define _AXIS_ATTRIBUTE_ 359
#define _AXIS_SELF_ 360
#define _AXIS_DESCENDANT_OR_SELF_ 361
#define _AXIS_PARENT_ 362
#define _STAR_ 363
#define _PROCESSING_INSTRUCTION_LPAR_ 364
#define _COMMENT_LPAR_ 365
#define _TEXT_LPAR_ 366
#define _NODE_LPAR_ 367
#define _LPAR_ 368
#define _RPAR_ 369
#define _START_TAG_OPEN_ 370
#define _EMPTY_TAG_CLOSE_ 371
#define _VALUE_INDICATOR_ 372
#define _END_TAG_OPEN_ 373
#define _TAG_CLOSE_ 374
#define _DOCUMENT_CONSTR_ 375
#define _ELEMENT_CONSTR_ 376
#define _ATTRIBUTE_CONSTR_ 377
#define _TEXT_CONSTR_ 378
#define _PROCESSING_INSTRUCTION_START_ 379
#define _LCURLY_BRACE_ESCAPE_ 380
#define _RCURLY_BRACE_ESCAPE_ 381
#define _OPEN_QUOT_ 382
#define _CLOSE_QUOT_ 383
#define _OPEN_APOS_ 384
#define _CLOSE_APOS_ 385
#define _LBRACE_ 386
#define _RBRACE_ 387
#define _PRESERVE_ 388
#define _STRIP_ 389
#define _NAMESPACE_ 390
#define _EXPR_AS_ 391
#define _EMPTY_ 392
#define _ITEM_ 393
#define _NILLABLE_ 394
#define _IMPORT_SCHEMA_ 395
#define _IMPORT_MODULE_ 396
#define _DOCUMENT_NODE_LPAR_ 397
#define _ATTRIBUTE_LPAR_ 398
#define _ELEMENT_LPAR_ 399
#define _EXTERNAL_ 400
#define _MODULE_NAMESPACE_ 401
#define _PROCESSING_INSTRUCTION_CONSTR_ 402
#define _COMMENT_CONSTR_ 403
#define _AXIS_ANCESTOR_OR_SELF_ 404
#define _AXIS_ANCESTOR_ 405
#define _AXIS_FOLLOWING_SIBLING_ 406
#define _AXIS_FOLLOWING_ 407
#define _AXIS_PRECEDING_SIBLING_ 408
#define _AXIS_PRECEDING_ 409
#define _SEMICOLON_ 410
#define _DEFAULT_ELEMENT_ 411
#define _SCHEMA_ELEMENT_LPAR_ 412
#define _SCHEMA_ATTRIBUTE_LPAR_ 413
#define _ORDERED_ 414
#define _UNORDERED_ 415
#define _ORDERING_UNORDERED_ 416
#define _ORDERING_ORDERED_ 417
#define _ZERO_OR_ONE_ 418
#define _ONE_OR_MORE_ 419
#define _ZERO_OR_MORE_ 420
#define _ENCODING_ 421
#define _NO_PRESERVE_ 422
#define _INHERIT_ 423
#define _NO_INHERIT_ 424
#define _DECLARE_ 425
#define _BOUNDARYSPACE_ 426
#define _DEFAULT_COLLATION_ 427
#define _DEFAULT_FUNCTION_ 428
#define _BASEURI_ 429
#define _CONSTRUCTION_ 430
#define _ORDERING_ 431
#define _DEFAULT_ORDER_ 432
#define _COPY_NAMESPACES_ 433
#define _DECLARE_FUNCTION_ 434
#define _DECLARE_VARIABLE_ 435
#define _DECLARE_OPTION_ 436
#define _XQUERY_ 437
#define _VERSION_ 438
#define _EOF_ 439




/* Copy the first part of user declarations.  */
#line 14 "xquery.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include "../lexer/Scanner.hpp"

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
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/dom/DOMNode.hpp>
#include <xercesc/util/XMLUri.hpp>

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
#line 697 "Grammar.cpp"

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2460

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  151
/* YYNRULES -- Number of rules. */
#define YYNRULES  365
/* YYNRULES -- Number of states. */
#define YYNSTATES  646

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
      31,    37,    40,    41,    45,    49,    53,    57,    58,    62,
      66,    70,    72,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    96,   100,   104,   109,   114,   118,   122,   126,
     130,   134,   140,   142,   144,   146,   148,   152,   156,   160,
     165,   168,   172,   175,   179,   183,   186,   193,   199,   203,
     206,   213,   219,   225,   230,   234,   238,   244,   249,   256,
     262,   268,   273,   280,   286,   290,   292,   296,   299,   303,
     305,   309,   311,   313,   315,   317,   319,   321,   327,   332,
     337,   341,   344,   346,   348,   350,   353,   357,   359,   364,
     370,   376,   383,   387,   390,   394,   396,   401,   407,   410,
     413,   416,   420,   422,   426,   432,   433,   435,   437,   438,
     440,   442,   447,   452,   456,   458,   463,   469,   480,   489,
     492,   494,   499,   507,   516,   520,   522,   526,   528,   532,
     536,   540,   544,   548,   552,   556,   560,   564,   568,   572,
     576,   580,   584,   588,   590,   594,   596,   600,   604,   606,
     610,   614,   618,   622,   624,   628,   632,   634,   638,   642,
     644,   648,   650,   654,   656,   660,   662,   666,   668,   671,
     674,   676,   678,   680,   682,   687,   692,   697,   701,   706,
     708,   711,   716,   718,   721,   724,   726,   730,   734,   736,
     738,   740,   743,   746,   749,   751,   753,   755,   757,   759,
     761,   763,   765,   768,   770,   773,   775,   777,   779,   781,
     783,   785,   787,   789,   791,   793,   795,   797,   799,   801,
     804,   805,   810,   812,   814,   816,   818,   820,   822,   824,
     826,   828,   830,   832,   834,   836,   839,   843,   846,   848,
     853,   858,   861,   865,   869,   871,   873,   875,   877,   879,
     881,   886,   895,   896,   901,   905,   909,   910,   913,   916,
     919,   922,   923,   926,   929,   932,   935,   936,   939,   942,
     945,   948,   951,   953,   955,   957,   959,   961,   965,   967,
     969,   971,   973,   975,   977,   979,   984,   989,   993,  1001,
    1008,  1010,  1015,  1019,  1027,  1034,  1039,  1044,  1049,  1053,
    1061,  1068,  1071,  1073,  1076,  1079,  1081,  1083,  1085,  1087,
    1089,  1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,
    1109,  1111,  1113,  1115,  1118,  1121,  1125,  1129,  1132,  1135,
    1138,  1142,  1146,  1149,  1153,  1159,  1161,  1163,  1167,  1169,
    1172,  1176,  1182,  1189,  1191,  1193,  1197,  1199,  1201,  1203,
    1205,  1207,  1209,  1211,  1213,  1215
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     186,     0,    -1,   187,   188,    -1,   187,   189,    -1,   188,
      -1,   189,    -1,   182,   183,     7,   196,    -1,   182,   183,
       7,   166,     7,   196,    -1,   191,   218,    -1,   190,   191,
      -1,   146,    14,    84,   333,   196,    -1,   192,   193,    -1,
      -1,   192,   194,   196,    -1,   192,   195,   196,    -1,   192,
     197,   196,    -1,   192,   199,   196,    -1,    -1,   193,   212,
     196,    -1,   193,   214,   196,    -1,   193,   200,   196,    -1,
     198,    -1,   206,    -1,   207,    -1,   213,    -1,   201,    -1,
     202,    -1,   203,    -1,   208,    -1,   211,    -1,   155,    -1,
     170,   135,    14,    84,   333,    -1,   170,   171,   133,    -1,
     170,   171,   134,    -1,   170,   156,   135,   333,    -1,   170,
     173,   135,   333,    -1,   181,     3,     7,    -1,   170,   176,
     162,    -1,   170,   176,   161,    -1,   170,   177,    47,    -1,
     170,   177,    48,    -1,   170,   178,   204,    34,   205,    -1,
     133,    -1,   167,    -1,   168,    -1,   169,    -1,   170,   172,
     333,    -1,   170,   174,   333,    -1,   140,   210,   333,    -1,
     140,   210,   333,   209,    -1,   140,   333,    -1,   140,   333,
     209,    -1,    39,   333,    -1,   209,    34,   333,    -1,   135,
      14,    84,    -1,   156,   135,    -1,   141,   135,    14,    84,
     333,   209,    -1,   141,   135,    14,    84,   333,    -1,   141,
     333,   209,    -1,   141,   333,    -1,   180,    38,     8,   308,
      41,   220,    -1,   180,    38,     8,    41,   220,    -1,   180,
      38,     8,   308,   145,    -1,   180,    38,     8,   145,    -1,
     170,   175,   133,    -1,   170,   175,   134,    -1,   179,     4,
     215,   114,   217,    -1,   179,     4,   114,   217,    -1,   179,
       4,   215,   136,   309,   217,    -1,   179,     4,   136,   309,
     217,    -1,   179,     4,   215,   114,   145,    -1,   179,     4,
     114,   145,    -1,   179,     4,   215,   136,   309,   145,    -1,
     179,     4,   136,   309,   145,    -1,   215,    34,   216,    -1,
     216,    -1,    38,     8,   308,    -1,    38,     8,    -1,   131,
     219,   132,    -1,   219,    -1,   219,    34,   220,    -1,   220,
      -1,   221,    -1,   237,    -1,   240,    -1,   243,    -1,   244,
      -1,   222,   231,   232,    35,   220,    -1,   222,   231,    35,
     220,    -1,   222,   232,    35,   220,    -1,   222,    35,   220,
      -1,   222,   223,    -1,   223,    -1,   224,    -1,   228,    -1,
      36,   225,    -1,   225,    34,   226,    -1,   226,    -1,    38,
       8,    37,   220,    -1,    38,     8,   227,    37,   220,    -1,
      38,     8,   308,    37,   220,    -1,    38,     8,   308,   227,
      37,   220,    -1,    39,    38,     8,    -1,    40,   229,    -1,
     229,    34,   230,    -1,   230,    -1,    38,     8,    41,   220,
      -1,    38,     8,   308,    41,   220,    -1,    42,   220,    -1,
      43,   233,    -1,    44,   233,    -1,   233,    34,   234,    -1,
     234,    -1,   220,   235,   236,    -1,   220,   235,   236,    49,
     333,    -1,    -1,    45,    -1,    46,    -1,    -1,    47,    -1,
      48,    -1,    50,   238,    52,   220,    -1,    51,   238,    52,
     220,    -1,   238,    34,   239,    -1,   239,    -1,    38,     8,
      37,   220,    -1,    38,     8,   308,    37,   220,    -1,    53,
     113,   219,   114,   241,    54,    38,     8,    35,   220,    -1,
      53,   113,   219,   114,   241,    54,    35,   220,    -1,   241,
     242,    -1,   242,    -1,    55,   309,    35,   220,    -1,    55,
      38,     8,    56,   309,    35,   220,    -1,    57,   113,   219,
     114,    58,   220,    59,   220,    -1,   244,    60,   245,    -1,
     245,    -1,   245,    61,   246,    -1,   246,    -1,   247,    84,
     247,    -1,   247,    85,   247,    -1,   247,    86,   247,    -1,
     247,    87,   247,    -1,   247,    88,   247,    -1,   247,    89,
     247,    -1,   247,    90,   247,    -1,   247,    91,   247,    -1,
     247,    92,   247,    -1,   247,    93,   247,    -1,   247,    94,
     247,    -1,   247,    95,   247,    -1,   247,    96,   247,    -1,
     247,    97,   247,    -1,   247,    98,   247,    -1,   247,    -1,
     248,    64,   248,    -1,   248,    -1,   248,    65,   249,    -1,
     248,    66,   249,    -1,   249,    -1,   249,    67,   250,    -1,
     249,    68,   250,    -1,   249,    69,   250,    -1,   249,    70,
     250,    -1,   250,    -1,   250,    72,   251,    -1,   250,    71,
     251,    -1,   251,    -1,   251,    73,   252,    -1,   251,    74,
     252,    -1,   252,    -1,   253,    62,   309,    -1,   253,    -1,
     254,    83,   309,    -1,   254,    -1,   255,    63,   307,    -1,
     255,    -1,   256,    82,   307,    -1,   256,    -1,    66,   256,
      -1,    65,   256,    -1,   257,    -1,   258,    -1,   262,    -1,
     259,    -1,    79,   131,   219,   132,    -1,    80,   131,   219,
     132,    -1,    81,   131,   219,   132,    -1,   260,   131,   132,
      -1,   260,   131,   219,   132,    -1,   261,    -1,   260,   261,
      -1,    30,    25,    26,    31,    -1,    75,    -1,    75,   263,
      -1,    76,   263,    -1,   263,    -1,   263,    75,   264,    -1,
     263,    76,   264,    -1,   264,    -1,   265,    -1,   275,    -1,
     266,   276,    -1,   269,   276,    -1,   267,   272,    -1,   268,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   151,    -1,   152,    -1,   100,   272,    -1,   272,    -1,
     270,   272,    -1,   271,    -1,   107,    -1,   150,    -1,   153,
      -1,   154,    -1,   149,    -1,   101,    -1,   313,    -1,   273,
      -1,   335,    -1,   274,    -1,   108,    -1,    12,    -1,    13,
      -1,   277,   276,    -1,    -1,   276,    77,   219,    78,    -1,
     278,    -1,   280,    -1,   281,    -1,   282,    -1,   285,    -1,
     287,    -1,   283,    -1,   284,    -1,   279,    -1,   334,    -1,
     330,    -1,   331,    -1,   332,    -1,    38,     8,    -1,   113,
     219,   114,    -1,   113,   114,    -1,    99,    -1,   159,   131,
     219,   132,    -1,   160,   131,   219,   132,    -1,     4,   114,
      -1,     4,   286,   114,    -1,   286,    34,   220,    -1,   220,
      -1,   288,    -1,   299,    -1,   289,    -1,   296,    -1,   297,
      -1,   115,     5,   290,   116,    -1,   115,     5,   290,   119,
     294,   118,     5,   119,    -1,    -1,   290,     6,   117,   291,
      -1,   127,   292,   128,    -1,   129,   293,   130,    -1,    -1,
     292,   217,    -1,   292,    33,    -1,   292,     9,    -1,   292,
     295,    -1,    -1,   293,   217,    -1,   293,    32,    -1,   293,
       9,    -1,   293,   295,    -1,    -1,   294,   288,    -1,   294,
       9,    -1,   294,   298,    -1,   294,   217,    -1,   294,   295,
      -1,    11,    -1,    10,    -1,   125,    -1,   126,    -1,    21,
      -1,   124,    15,    23,    -1,    22,    -1,   300,    -1,   301,
      -1,   303,    -1,   304,    -1,   305,    -1,   306,    -1,   120,
     131,   219,   132,    -1,    17,   131,   302,   132,    -1,    17,
     131,   132,    -1,   121,   131,   219,   132,   131,   302,   132,
      -1,   121,   131,   219,   132,   131,   132,    -1,   219,    -1,
      16,   131,   219,   132,    -1,    16,   131,   132,    -1,   122,
     131,   219,   132,   131,   219,   132,    -1,   122,   131,   219,
     132,   131,   132,    -1,   123,   131,   219,   132,    -1,   148,
     131,   219,   132,    -1,    24,   131,   219,   132,    -1,    24,
     131,   132,    -1,   147,   131,   219,   132,   131,   219,   132,
      -1,   147,   131,   219,   132,   131,   132,    -1,   312,   163,
      -1,   312,    -1,    56,   309,    -1,   311,   310,    -1,   311,
      -1,   137,    -1,   165,    -1,   164,    -1,   163,    -1,   312,
      -1,   313,    -1,   138,    -1,   335,    -1,   315,    -1,   323,
      -1,   319,    -1,   325,    -1,   321,    -1,   318,    -1,   317,
      -1,   316,    -1,   314,    -1,   112,   114,    -1,   142,   114,
      -1,   142,   323,   114,    -1,   142,   325,   114,    -1,   111,
     114,    -1,   110,   114,    -1,   109,   114,    -1,   109,    14,
     114,    -1,   109,     7,   114,    -1,   143,   114,    -1,   143,
     320,   114,    -1,   143,   320,    34,   329,   114,    -1,   327,
      -1,   108,    -1,   158,   322,   114,    -1,   327,    -1,   144,
     114,    -1,   144,   324,   114,    -1,   144,   324,    34,   329,
     114,    -1,   144,   324,    34,   329,   139,   114,    -1,   328,
      -1,   108,    -1,   157,   326,   114,    -1,   328,    -1,   335,
      -1,   335,    -1,   335,    -1,    18,    -1,    19,    -1,    20,
      -1,     7,    -1,     7,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   465,   465,   466,   467,   468,   473,   478,   509,   516,
     523,   536,   539,   541,   542,   543,   544,   547,   549,   550,
     556,   567,   568,   569,   570,   571,   572,   573,   578,   579,
     584,   589,   612,   619,   630,   637,   648,   665,   672,   683,
     690,   701,   713,   717,   725,   729,   737,   756,   767,   783,
     799,   809,   822,   827,   836,   840,   848,   861,   874,   886,
     902,   907,   912,   917,   926,   933,   945,   949,   953,   957,
     961,   965,   969,   973,   981,   986,   996,  1000,  1008,  1016,
    1024,  1042,  1050,  1051,  1052,  1053,  1054,  1059,  1063,  1067,
    1071,  1078,  1084,  1088,  1089,  1095,  1102,  1106,  1114,  1120,
    1126,  1132,  1142,  1151,  1158,  1163,  1171,  1177,  1187,  1195,
    1199,  1207,  1212,  1222,  1226,  1242,  1243,  1245,  1251,  1260,
    1262,  1269,  1273,  1280,  1284,  1292,  1298,  1308,  1313,  1321,
    1326,  1335,  1339,  1347,  1355,  1369,  1374,  1388,  1398,  1402,
    1406,  1410,  1414,  1418,  1422,  1426,  1430,  1434,  1438,  1442,
    1446,  1450,  1454,  1458,  1463,  1467,  1472,  1476,  1480,  1485,
    1489,  1493,  1497,  1501,  1506,  1510,  1514,  1519,  1523,  1527,
    1532,  1536,  1541,  1545,  1550,  1560,  1565,  1575,  1580,  1586,
    1590,  1595,  1596,  1597,  1604,  1608,  1612,  1620,  1625,  1633,
    1634,  1640,  1657,  1663,  1669,  1683,  1688,  1694,  1707,  1712,
    1713,  1718,  1722,  1731,  1743,  1754,  1758,  1762,  1766,  1770,
    1774,  1778,  1786,  1794,  1812,  1820,  1829,  1833,  1837,  1841,
    1845,  1853,  1865,  1866,  1871,  1886,  1891,  1898,  1913,  1924,
    1934,  1937,  1947,  1948,  1949,  1950,  1951,  1952,  1953,  1954,
    1959,  1960,  1965,  1966,  1967,  1972,  1984,  1998,  2006,  2014,
    2022,  2030,  2035,  2042,  2047,  2056,  2057,  2064,  2065,  2066,
    2071,  2083,  2116,  2119,  2145,  2149,  2159,  2162,  2167,  2172,
    2177,  2188,  2191,  2196,  2201,  2206,  2222,  2225,  2246,  2275,
    2290,  2312,  2332,  2333,  2334,  2338,  2347,  2363,  2389,  2402,
    2403,  2404,  2405,  2406,  2407,  2412,  2430,  2444,  2456,  2465,
    2476,  2481,  2494,  2506,  2514,  2525,  2535,  2545,  2558,  2570,
    2578,  2589,  2596,  2607,  2615,  2622,  2629,  2638,  2640,  2642,
    2648,  2652,  2657,  2665,  2681,  2682,  2683,  2684,  2685,  2686,
    2687,  2688,  2689,  2694,  2704,  2710,  2719,  2732,  2742,  2752,
    2758,  2764,  2774,  2780,  2786,  2796,  2797,  2805,  2815,  2820,
    2826,  2832,  2838,  2850,  2851,  2859,  2869,  2874,  2879,  2884,
    2889,  2902,  2915,  2928,  2941,  2954
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
  "\"at\"", "\"let\"", "\":=\"", "\"where\"", "\"order by\"",
  "\"stable order by\"", "\"ascending\"", "\"descending\"",
  "\"empty greatest\"", "\"empty least\"", "\"collation\"", "\"some\"",
  "\"every\"", "\"satisfies\"", "\"typeswitch\"", "\"default\"",
  "\"case\"", "\"as\"", "\"if\"", "\"then\"", "\"else\"", "\"or\"",
  "\"and\"", "\"instance of\"", "\"castable as\"", "\"to\"",
  "\"+ (arithmetic operator)\"", "\"- (arithmetic operator)\"",
  "\"* (arithmetic operator)\"", "\"div\"", "\"idiv\"", "\"mod\"",
  "\"union\"", "\"|\"", "\"intersect\"", "\"except\"", "\"/\"", "\"//\"",
  "\"[\"", "\"]\"", "\"validate {\"", "\"validate lax\"",
  "\"validate strict\"", "\"cast as\"", "\"treat as\"",
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
  "\") as\"", "\"empty-sequence()\"", "\"item()\"", "\"?\"",
  "\"import schema\"", "\"import module\"", "\"document-node(\"",
  "\"attribute(\"", "\"element(\"", "\"external\"", "\"module namespace\"",
  "\"processing-instruction {\"", "\"comment {\"",
  "\"ancestor-or-self::\"", "\"ancestor::\"", "\"following-sibling::\"",
  "\"following::\"", "\"preceding-sibling::\"", "\"preceding::\"", "\";\"",
  "\"default element\"", "\"schema-element(\"", "\"schema-attribute(\"",
  "\"ordered {\"", "\"unordered {\"", "\"unordered\"", "\"ordered\"",
  "\"? (occurrence)\"", "\"+ (occurrence)\"", "\"* (occurrence)\"",
  "\"encoding\"", "\"no-preserve\"", "\"inherit\"", "\"no-inherit\"",
  "\"declare\"", "\"boundary-space\"", "\"default collation\"",
  "\"default function\"", "\"base-uri\"", "\"construction\"",
  "\"ordering\"", "\"default order\"", "\"copy-namespaces\"",
  "\"declare function\"", "\"declare variable\"", "\"declare option\"",
  "\"xquery\"", "\"version\"", "_EOF_", "$accept", "Module", "VersionDecl",
  "MainModule", "LibraryModule", "ModuleDecl", "Prolog", "Setters",
  "VariablesAndFunctions", "Setter", "Import", "Separator",
  "NamespaceDecl", "BoundarySpaceDecl", "DefaultNamespaceDecl",
  "OptionDecl", "OrderingModeDecl", "EmptyOrderDecl", "CopyNamespacesDecl",
  "PreserveMode", "InheritMode", "DefaultCollationDecl", "BaseURIDecl",
  "SchemaImport", "ResourceLocations", "SchemaPrefix", "ModuleImport",
  "VarDecl", "ConstructionDecl", "FunctionDecl", "ParamList", "Param",
  "EnclosedExpr", "QueryBody", "Expr", "ExprSingle", "FLWORExpr",
  "FlworExprForLetList", "ForOrLetClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderDirection", "EmptyHandling", "QuantifiedExpr",
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
     190,   191,   192,   192,   192,   192,   192,   193,   193,   193,
     193,   194,   194,   194,   194,   194,   194,   194,   195,   195,
     196,   197,   198,   198,   199,   199,   200,   201,   201,   202,
     202,   203,   204,   204,   205,   205,   206,   207,   208,   208,
     208,   208,   209,   209,   210,   210,   211,   211,   211,   211,
     212,   212,   212,   212,   213,   213,   214,   214,   214,   214,
     214,   214,   214,   214,   215,   215,   216,   216,   217,   218,
     219,   219,   220,   220,   220,   220,   220,   221,   221,   221,
     221,   222,   222,   223,   223,   224,   225,   225,   226,   226,
     226,   226,   227,   228,   229,   229,   230,   230,   231,   232,
     232,   233,   233,   234,   234,   235,   235,   235,   236,   236,
     236,   237,   237,   238,   238,   239,   239,   240,   240,   241,
     241,   242,   242,   243,   244,   244,   245,   245,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   247,   247,   248,   248,   248,   249,
     249,   249,   249,   249,   250,   250,   250,   251,   251,   251,
     252,   252,   253,   253,   254,   254,   255,   255,   256,   256,
     256,   257,   257,   257,   258,   258,   258,   259,   259,   260,
     260,   261,   262,   262,   262,   262,   263,   263,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   268,   268,   269,   269,   270,   270,   270,   270,
     270,   271,   272,   272,   273,   273,   274,   274,   274,   275,
     276,   276,   277,   277,   277,   277,   277,   277,   277,   277,
     278,   278,   279,   279,   279,   280,   281,   281,   282,   283,
     284,   285,   285,   286,   286,   287,   287,   288,   288,   288,
     289,   289,   290,   290,   291,   291,   292,   292,   292,   292,
     292,   293,   293,   293,   293,   293,   294,   294,   294,   294,
     294,   294,   295,   295,   295,   295,   296,   297,   298,   299,
     299,   299,   299,   299,   299,   300,   301,   301,   301,   301,
     302,   303,   303,   303,   303,   304,   305,   306,   306,   306,
     306,   307,   307,   308,   309,   309,   309,   310,   310,   310,
     311,   311,   311,   312,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   314,   315,   315,   315,   316,   317,   318,
     318,   318,   319,   319,   319,   320,   320,   321,   322,   323,
     323,   323,   323,   324,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     1,     4,     6,     2,     2,
       5,     2,     0,     3,     3,     3,     3,     0,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     3,     3,     4,     4,     3,     3,     3,     3,
       3,     5,     1,     1,     1,     1,     3,     3,     3,     4,
       2,     3,     2,     3,     3,     2,     6,     5,     3,     2,
       6,     5,     5,     4,     3,     3,     5,     4,     6,     5,
       5,     4,     6,     5,     3,     1,     3,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     5,     4,     4,
       3,     2,     1,     1,     1,     2,     3,     1,     4,     5,
       5,     6,     3,     2,     3,     1,     4,     5,     2,     2,
       2,     3,     1,     3,     5,     0,     1,     1,     0,     1,
       1,     4,     4,     3,     1,     4,     5,    10,     8,     2,
       1,     4,     7,     8,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     1,     1,     4,     4,     4,     3,     4,     1,
       2,     4,     1,     2,     2,     1,     3,     3,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     2,     1,     4,
       4,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     8,     0,     4,     3,     3,     0,     2,     2,     2,
       2,     0,     2,     2,     2,     2,     0,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     7,     6,
       1,     4,     3,     7,     6,     4,     4,     4,     3,     7,
       6,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     3,     3,     2,     2,     2,
       3,     3,     2,     3,     5,     1,     1,     3,     1,     2,
       3,     5,     6,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
      12,     0,     0,     0,    12,     4,     5,    12,     0,    17,
       0,     0,     1,     2,     3,     9,   365,     0,   364,   227,
     228,     0,     0,   360,   361,   362,   286,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,     0,
       0,     0,     0,   248,     0,   221,   205,   206,   207,   208,
     209,   216,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     217,   210,   211,   218,   219,     0,     0,     0,     0,     8,
      79,    81,    82,     0,    92,    93,    94,    83,    84,    85,
      86,   135,   137,   153,   155,   158,   163,   166,   169,   171,
     173,   175,   177,   180,   181,   183,     0,   189,   182,   195,
     198,   199,   230,     0,   204,   230,     0,   215,   213,   223,
     225,   200,   230,   232,   240,   233,   234,   235,   238,   239,
     236,   237,   255,   257,   258,   259,   256,   289,   290,   291,
     292,   293,   294,   222,   332,   324,   331,   330,   329,   326,
     328,   325,   327,   242,   243,   244,   241,   224,     0,     0,
       0,    11,     0,     0,     0,    21,     0,    25,    26,    27,
      22,    23,    28,    29,    24,     0,     0,   251,   254,     0,
       0,     0,     0,     0,     0,    95,    97,   245,     0,   103,
     105,     0,     0,   124,     0,     0,     0,   179,   178,   193,
     194,     0,     0,     0,   212,     0,     0,   339,   338,   337,
     333,   247,     0,   262,     0,     0,     0,     0,     0,   334,
       0,     0,   346,   342,     0,   345,   357,   354,   349,     0,
     353,   358,     0,     0,     0,   356,     0,   348,     0,     0,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   190,     0,     0,   201,   203,   202,   214,   229,   363,
       0,     0,     0,    50,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,    13,    14,    15,    16,     0,     0,     6,
       0,   252,   302,     0,   297,   300,     0,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   341,   340,   246,     0,     0,     0,     0,
       0,   287,   335,   336,     0,   343,     0,   350,     0,     0,
     355,   347,     0,     0,    80,    90,   108,   115,   109,   112,
     110,     0,     0,     0,   134,   136,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   154,   156,   157,   159,   160,   161,   162,   165,   164,
     167,   168,   316,   322,   170,   315,   320,   321,   323,   172,
     174,   312,   176,   187,     0,   196,   197,     0,     0,    55,
      48,     0,    51,     0,    58,     0,     0,    32,    33,    46,
       0,    47,    64,    65,    38,    37,    39,    40,    42,    43,
       0,     0,     0,     0,    20,    18,    19,    10,     0,   253,
     301,   296,   307,   191,     0,     0,     0,     0,     0,    96,
       0,     0,   104,     0,     0,   123,   121,   122,     0,     0,
     184,   185,   186,     0,   260,   276,   295,     0,     0,   305,
       0,   359,     0,     0,   306,   249,   250,   116,   117,   118,
       0,    88,     0,    89,   319,   318,   317,   314,   311,   188,
       0,    54,    49,    52,     0,     0,     0,    34,    35,     0,
       0,     0,     0,     0,    75,     0,    36,     7,    98,     0,
     313,     0,     0,     0,   106,     0,   125,     0,     0,     0,
     130,     0,     0,     0,     0,     0,   344,   351,     0,     0,
     119,   120,   113,   111,    87,   231,    53,    57,    31,    44,
      45,    41,    77,     0,    71,    67,     0,     0,     0,     0,
       0,    63,     0,   102,    99,   100,     0,   107,   126,     0,
       0,     0,   129,     0,   266,   271,   263,   278,   283,   282,
     288,     0,   284,   285,   280,   277,   281,   279,   299,     0,
     304,     0,   352,   310,     0,     0,    56,    76,     0,    73,
      69,    74,    70,    66,     0,    61,     0,    62,   101,     0,
       0,     0,     0,     0,     0,     0,     0,   298,   303,   309,
     114,    78,    72,    68,    60,     0,   131,   128,     0,   133,
     269,   268,   264,   267,   270,   274,   273,   265,   272,   275,
     261,     0,     0,     0,   127,   132
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,     9,   161,   162,
     163,   313,   164,   165,   166,   309,   167,   168,   169,   440,
     551,   170,   171,   172,   422,   292,   173,   310,   174,   311,
     513,   514,   555,    79,   325,    81,    82,    83,    84,    85,
     185,   186,   457,    86,   189,   190,   246,   247,   368,   369,
     489,   542,    87,   192,   193,    88,   529,   530,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   284,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   179,   131,   132,   133,   346,   576,   614,   615,   533,
     586,   134,   135,   587,   136,   137,   138,   326,   139,   140,
     141,   142,   410,   458,   404,   497,   405,   406,   143,   144,
     145,   146,   147,   148,   149,   224,   150,   236,   151,   229,
     152,   234,   225,   230,   480,   153,   154,   155,   293,   156,
     157
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -499
static const short int yypact[] =
{
     -97,    39,  -117,    83,   -47,  -499,  -499,  -499,  1984,   -89,
      -7,   108,  -499,  -499,  -499,  -499,  -499,   562,  -499,  -499,
    -499,    42,    89,  -499,  -499,  -499,  -499,   106,   117,   126,
     248,   228,   253,   253,   189,   191,  2142,  2142,  2300,  2300,
     150,   176,   183,  -499,    12,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,    24,   204,   237,   239,   720,   360,   260,
     264,   271,   274,   391,   -75,     5,    18,   276,   277,  -499,
    -499,  -499,  -499,  -499,  -499,   406,   406,   279,   280,  -499,
     378,  -499,  -499,   273,  -499,  -499,  -499,  -499,  -499,  -499,
     353,   354,  -499,   243,   145,   192,   160,   202,  -499,   352,
     333,   355,   335,  -499,  -499,  -499,   -13,  -499,  -499,   212,
    -499,  -499,  -499,    12,  -499,  -499,    12,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,    16,    15,
      72,    92,   265,   265,   265,  -499,   265,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   414,  -109,  -499,  -499,    -2,
     878,  1036,  1194,   396,   415,   390,  -499,  -499,   417,   392,
    -499,   419,    22,  -499,    58,  1984,  1984,  -499,  -499,   212,
     212,  1984,  1984,  1984,  -499,   314,   315,  -499,  -499,  -499,
    -499,  -499,     0,  -499,  1984,  1984,  1984,  1984,   407,  -499,
     317,   318,  -499,  -499,    11,  -499,  -499,  -499,  -499,    13,
    -499,  -499,  1984,  1984,   319,  -499,   320,  -499,  1984,  1984,
    1984,  1984,  1984,  1984,  1984,  -499,   186,   400,  2142,  2142,
    2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,
    2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,  2142,
    2142,  2142,  2142,  2142,  2142,  2142,   168,   168,   406,   406,
    1352,  -499,  2300,  2300,   359,  -499,   359,  -499,   359,  -499,
     424,   305,   414,   402,   428,   402,   430,   310,   167,   414,
     312,   414,   188,   162,   295,   -83,   445,   412,   448,   265,
     265,   265,  -499,  -499,  -499,  -499,  -499,   265,   446,  -499,
    1984,  -499,  -499,     3,  -499,   378,   322,  -499,    20,   421,
      49,   126,    88,   228,    -1,   253,  1984,  1984,    14,    27,
      33,    34,    36,  -499,  -499,  -499,    21,    44,    45,    46,
      53,  -499,  -499,  -499,   406,  -499,   406,  -499,    57,    59,
    -499,  -499,    60,    64,  -499,  -499,  -499,   299,   422,  -499,
     422,  1984,   420,  1984,   354,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   281,   192,   192,   160,   160,   160,   160,   202,   202,
    -499,  -499,  -499,  -499,  -499,   120,  -499,  -499,  -499,  -499,
    -499,   294,  -499,  -499,    67,  -499,  -499,  1984,   374,  -499,
     402,   414,   425,   376,   425,   377,   414,  -499,  -499,  -499,
     414,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
     429,    -5,   454,   458,  -499,  -499,  -499,  -499,   265,  -499,
    -499,  -499,  -499,  -499,  1984,   431,   168,   433,   230,  -499,
    1984,   426,  -499,  1984,   434,  -499,  -499,  -499,   411,   410,
    -499,  -499,  -499,   361,  -499,  -499,  -499,   341,   343,  -499,
     362,  -499,   -49,   346,  -499,  -499,  -499,  -499,  -499,   311,
    1984,  -499,  1984,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
      29,  -499,   425,  -499,   414,   414,   414,  -499,  -499,   193,
     471,   -69,   168,   -25,  -499,   -12,  -499,  -499,  -499,   472,
    -499,  1984,  1984,   444,  -499,  1984,  -499,  1984,    37,   309,
    -499,  1984,   170,   242,  1510,  1668,  -499,  -499,   368,  1826,
    -499,  -499,   435,  -499,  -499,  -499,  -499,   402,  -499,  -499,
    -499,  -499,   427,  1984,  -499,  -499,     8,   447,    77,   168,
    1984,  -499,   -11,  -499,  -499,  -499,  1984,  -499,  -499,   478,
     452,   198,  -499,   432,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   483,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   364,
    -499,    68,  -499,  -499,    70,   414,   425,  -499,    74,  -499,
    -499,  -499,  -499,  -499,   123,  -499,  1984,  -499,  -499,   436,
    1984,  1984,   481,  1984,    62,    32,   371,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -499,   168,  -499,  -499,   459,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,   462,  1984,  1984,  -499,  -499
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -499,  -499,  -499,   489,   494,  -499,   492,  -499,  -499,  -499,
    -499,  -150,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,  -499,  -290,  -499,  -499,  -499,  -499,  -499,
    -499,   -57,  -498,  -499,     2,   -17,  -499,  -499,   418,  -499,
    -499,   171,    48,  -499,  -499,   174,  -499,   257,   267,    19,
    -499,  -499,  -499,   479,   178,  -499,  -499,   -14,  -499,  -499,
     268,   269,   124,   252,   103,    25,    99,   115,  -499,  -499,
    -499,   357,  -499,  -499,  -499,  -499,   413,  -499,   358,   116,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,   -16,  -499,  -499,
    -499,   -19,  -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,
    -499,  -499,  -499,   -10,  -499,  -499,  -499,  -499,  -499,  -499,
    -214,  -499,  -499,  -499,  -499,  -499,  -499,    -9,  -499,  -499,
    -499,  -499,   241,  -314,  -273,  -499,  -499,   125,  -270,  -499,
    -499,  -499,  -499,  -499,  -499,  -499,  -499,  -499,   457,  -499,
     460,  -499,   450,   453,   166,  -499,  -499,  -499,  -156,  -499,
     -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     178,   226,   231,   295,   409,   424,   407,   407,    16,   557,
      80,   231,   226,   314,   315,    16,   316,    28,   461,   317,
     464,    16,   289,   289,    19,    20,   319,   473,   204,   560,
     606,   205,   320,   510,   240,   584,   463,   240,   206,   219,
      16,   635,   578,   579,   456,   354,   312,   356,   240,     1,
     438,   158,   159,    10,   240,   456,   335,   318,   600,   212,
     603,   240,   553,   240,   636,   537,    11,   240,   240,    66,
     240,   630,   578,   579,   336,   569,   554,   175,   240,   240,
     240,   160,    75,    12,   439,     2,   454,   240,   455,   558,
     538,   240,   335,   240,   240,   631,   286,   285,   240,     1,
     287,   240,   240,   288,   240,   456,   623,   545,   240,   511,
     337,   559,   321,   222,   345,   176,   633,   638,   280,   223,
      52,    53,    54,    55,    56,   355,   227,   357,   468,   460,
     502,   512,   228,   561,   607,   450,   420,   474,   207,   553,
     475,   469,   183,   429,   456,   431,    53,    54,    55,    56,
     294,   290,   452,   599,    64,    65,    66,   582,   583,   444,
     445,   446,   637,   553,   184,   470,   471,   447,   472,    75,
      76,    16,   291,   180,   402,   403,   476,   477,   478,    64,
      65,    66,   323,   520,   328,   479,   407,   582,   583,   483,
     632,   484,   485,   553,    75,    76,   486,   338,   339,   499,
     618,   562,   619,   340,   341,   342,   621,   296,   553,   265,
     266,   267,   408,   408,   408,   408,   347,   348,   349,   350,
     181,   371,   602,   364,   365,   366,   367,   367,   297,   243,
     244,   272,   273,   611,   358,   359,   612,   182,   597,   556,
     362,   363,   407,   298,   299,   300,   301,   302,   303,   304,
     305,   577,   578,   579,   553,   570,   187,   596,   407,   268,
     269,   270,   271,    26,   580,   503,   188,   522,   622,   455,
     507,   306,   307,   308,   508,   274,   275,    53,    54,    55,
      56,   201,   414,   494,   495,   496,   604,   282,   283,   407,
     481,   191,   481,   394,   395,   396,   397,   574,   517,   575,
     427,   428,   195,   449,   196,   402,   403,   202,   241,    29,
      64,    65,    66,    31,   203,   242,   243,   244,   208,   466,
     467,   432,   433,   434,   435,    75,    76,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   436,   437,   487,   488,   266,   267,   546,   547,
     548,   209,   641,   210,   491,   407,   493,    58,   540,   541,
     581,   549,   550,   571,   528,   213,    63,   582,   583,   392,
     393,   398,   399,   553,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   400,
     401,   214,   408,   197,   198,   215,   199,   200,   415,   416,
     634,   639,   216,   411,   411,   217,   218,   232,   233,    16,
     238,   239,   240,   248,   276,   249,   277,   279,   278,   500,
     312,   289,   329,   330,   331,   332,   333,   334,   343,   344,
     351,   352,   353,   360,   361,   373,   417,   518,   418,   620,
     419,   421,   423,   524,   425,   426,   526,   430,   408,   441,
     442,   443,   453,   448,   451,   492,   490,   498,   501,   504,
     505,   506,   515,   509,   408,   516,   528,   525,   531,   519,
     521,   527,   534,   367,   535,   544,   536,   539,   532,   552,
     563,   566,   592,   456,   595,   510,   609,   610,   616,   628,
     640,   613,   625,    13,   642,   408,   617,   643,    14,    15,
     601,   245,   459,   372,   564,   565,   523,   462,   567,   543,
     568,   370,   194,   465,   573,   572,   374,   391,   375,   281,
     412,   220,   482,   585,   221,   589,   237,     0,   235,     0,
       0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
       0,   594,     0,   605,     0,     0,     0,     0,     0,   608,
       0,     0,     0,     0,     0,   598,     0,     0,     0,     0,
       0,   408,     0,     0,     0,    16,    17,     0,     0,    18,
       0,     0,     0,     0,    19,    20,     0,     0,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,   624,
       0,     0,    28,   626,   627,     0,   629,     0,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,    34,     0,     0,     0,    35,
       0,     0,     0,     0,     0,   644,   645,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,   177,    58,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,    78,    16,    17,     0,     0,    18,     0,     0,
       0,     0,    19,    20,     0,     0,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,    34,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,   211,    58,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,    75,    76,    77,
      78,    16,    17,     0,     0,    18,     0,     0,     0,     0,
      19,    20,     0,     0,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,    34,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    38,    39,     0,     0,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,    58,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
     322,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,    75,    76,    77,    78,    16,
      17,     0,     0,    18,     0,     0,     0,     0,    19,    20,
       0,     0,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,     0,     0,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,    58,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,   324,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    16,    17,     0,
       0,    18,     0,     0,     0,     0,    19,    20,     0,     0,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,    40,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,    58,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,   327,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,    75,    76,    77,    78,    16,    17,     0,     0,    18,
       0,     0,     0,     0,    19,    20,     0,     0,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,    29,     0,
      30,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,    33,     0,    34,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     0,    58,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,    78,    16,    17,     0,     0,    18,     0,     0,
       0,     0,    19,    20,     0,     0,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    29,     0,    30,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      32,    33,     0,    34,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    36,    37,     0,     0,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     0,    58,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,   588,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,    75,    76,    77,
      78,    16,    17,     0,     0,    18,     0,     0,     0,     0,
      19,    20,     0,     0,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,    29,     0,    30,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    32,    33,
       0,    34,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,    38,    39,     0,     0,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,     0,    58,     0,     0,     0,     0,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
     590,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    66,     0,     0,    67,    68,    69,    70,    71,
      72,    73,    74,     0,     0,    75,    76,    77,    78,    16,
      17,     0,     0,    18,     0,     0,     0,     0,    19,    20,
       0,     0,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,    29,     0,    30,     0,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    33,     0,    34,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,     0,     0,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
       0,    58,     0,     0,     0,     0,    59,    60,    61,    62,
      63,     0,     0,     0,     0,     0,     0,     0,   593,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
      66,     0,     0,    67,    68,    69,    70,    71,    72,    73,
      74,     0,     0,    75,    76,    77,    78,    16,    17,     0,
       0,    18,     0,     0,     0,     0,    19,    20,     0,     0,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
      29,     0,    30,     0,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,    33,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,    40,    41,    42,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     0,    58,
       0,     0,     0,     0,    59,    60,    61,    62,    63,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,     0,
       0,    67,    68,    69,    70,    71,    72,    73,    74,     0,
       0,    75,    76,    77,    78,    16,    17,     0,     0,    18,
       0,     0,     0,     0,    19,    20,     0,     0,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,    40,    41,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,     0,    58,     0,     0,
       0,     0,    59,    60,    61,    62,    63,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,    66,     0,     0,    67,
      68,    69,    70,    71,    72,    73,    74,     0,     0,    75,
      76,    77,    78,    16,    17,     0,     0,    18,     0,     0,
       0,     0,    19,    20,     0,     0,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,     0,    58,     0,     0,     0,     0,
      59,    60,    61,    62,    63,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    73,    74,     0,     0,    75,    76,    77,
      78
};

static const short int yycheck[] =
{
      17,    65,    66,   159,   277,   295,   276,   277,     3,    34,
       8,    75,    76,   163,   164,     3,   166,    30,   332,   175,
     334,     3,     7,     7,    12,    13,   176,     6,    44,    41,
      41,     7,    34,    38,    34,   533,    37,    34,    14,   114,
       3,     9,    10,    11,    56,    34,   155,    34,    34,   146,
     133,   140,   141,    14,    34,    56,    34,   166,   556,    57,
     558,    34,   131,    34,    32,   114,   183,    34,    34,   144,
      34,     9,    10,    11,    52,    38,   145,    84,    34,    34,
      34,   170,   157,     0,   167,   182,    37,    34,    39,   114,
     139,    34,    34,    34,    34,    33,   115,   113,    34,   146,
     116,    34,    34,   122,    34,    56,   604,    78,    34,   114,
      52,   136,   114,   108,   114,     7,   614,   615,   131,   114,
     108,   109,   110,   111,   112,   114,   108,   114,   114,    41,
     420,   136,   114,   145,   145,   132,   292,   116,   114,   131,
     119,   114,    25,   299,    56,   301,   109,   110,   111,   112,
     135,   135,   132,   145,   142,   143,   144,   125,   126,   309,
     310,   311,   130,   131,    38,   132,   132,   317,   132,   157,
     158,     3,   156,   131,   137,   138,   132,   132,   132,   142,
     143,   144,   180,   456,   182,   132,   456,   125,   126,   132,
     128,   132,   132,   131,   157,   158,   132,   195,   196,   132,
     132,   515,   132,   201,   202,   203,   132,   135,   131,    64,
      65,    66,   276,   277,   278,   279,   214,   215,   216,   217,
     131,    35,   145,   240,   241,   242,   243,   244,   156,    43,
      44,    71,    72,    35,   232,   233,    38,   131,   552,   512,
     238,   239,   512,   171,   172,   173,   174,   175,   176,   177,
     178,     9,    10,    11,   131,   528,     8,   547,   528,    67,
      68,    69,    70,    21,    22,   421,    38,    37,   145,    39,
     426,   179,   180,   181,   430,    73,    74,   109,   110,   111,
     112,   131,   280,   163,   164,   165,   559,    75,    76,   559,
     354,    38,   356,   268,   269,   270,   271,   127,   448,   129,
     133,   134,   113,   320,   113,   137,   138,   131,    35,    36,
     142,   143,   144,    40,   131,    42,    43,    44,   114,   336,
     337,   133,   134,   161,   162,   157,   158,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    47,    48,    45,    46,    65,    66,   504,   505,
     506,   114,   625,   114,   371,   625,   373,   115,    47,    48,
     118,   168,   169,    54,    55,     5,   124,   125,   126,   266,
     267,   272,   273,   131,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   274,
     275,   131,   456,    36,    37,   131,    38,    39,   282,   283,
     614,   615,   131,   278,   279,   131,    15,   131,   131,     3,
     131,   131,    34,    60,    62,    61,    83,    82,    63,   417,
     155,     7,    26,     8,    34,     8,    34,     8,   114,   114,
      23,   114,   114,   114,   114,    35,    77,   454,    14,   595,
     135,    39,    14,   460,    14,   135,   463,   135,   512,     4,
      38,     3,    31,     7,   132,    35,    34,   163,    84,    34,
      84,    84,     8,    34,   528,     7,    55,    41,    58,    38,
      37,    37,   131,   490,   131,   492,   114,   131,   117,     8,
       8,    37,   114,    56,    49,    38,     8,    35,     5,     8,
     119,    59,    56,     4,    35,   559,   132,    35,     4,     7,
     557,    83,   331,   246,   521,   522,   458,   333,   525,   490,
     527,   244,    33,   335,   531,   529,   248,   265,   249,   106,
     279,    64,   356,   533,    64,   534,    76,    -1,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   535,    -1,    -1,
      -1,   539,    -1,   560,    -1,    -1,    -1,    -1,    -1,   566,
      -1,    -1,    -1,    -1,    -1,   553,    -1,    -1,    -1,    -1,
      -1,   625,    -1,    -1,    -1,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,   606,
      -1,    -1,    30,   610,   611,    -1,   613,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,   642,   643,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,    -1,   157,
     158,   159,   160,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,    -1,   157,   158,   159,
     160,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,   115,    -1,    -1,    -1,    -1,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,    -1,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,    -1,   157,   158,   159,   160,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,    -1,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,    -1,   157,   158,   159,   160,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
      -1,   157,   158,   159,   160,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    51,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,    -1,   157,
     158,   159,   160,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    79,
      80,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,    -1,    -1,    -1,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,    -1,   157,   158,   159,
     160,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    79,    80,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,   115,    -1,    -1,    -1,    -1,   120,   121,
     122,   123,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   143,   144,    -1,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,    -1,   157,   158,   159,   160,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,    -1,    -1,    -1,    -1,   120,   121,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,
     144,    -1,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,    -1,   157,   158,   159,   160,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,   115,
      -1,    -1,    -1,    -1,   120,   121,   122,   123,   124,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
      -1,   157,   158,   159,   160,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   115,    -1,    -1,
      -1,    -1,   120,   121,   122,   123,   124,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,    -1,   157,
     158,   159,   160,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,   115,    -1,    -1,    -1,    -1,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   142,   143,   144,    -1,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,    -1,   157,   158,   159,
     160
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   146,   182,   186,   187,   188,   189,   190,   191,   192,
      14,   183,     0,   188,   189,   191,     3,     4,     7,    12,
      13,    16,    17,    18,    19,    20,    21,    24,    30,    36,
      38,    40,    50,    51,    53,    57,    65,    66,    75,    76,
      79,    80,    81,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   115,   120,
     121,   122,   123,   124,   142,   143,   144,   147,   148,   149,
     150,   151,   152,   153,   154,   157,   158,   159,   160,   218,
     219,   220,   221,   222,   223,   224,   228,   237,   240,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   287,   288,   289,   296,   297,   299,   300,   301,   303,
     304,   305,   306,   313,   314,   315,   316,   317,   318,   319,
     321,   323,   325,   330,   331,   332,   334,   335,   140,   141,
     170,   193,   194,   195,   197,   198,   199,   201,   202,   203,
     206,   207,   208,   211,   213,    84,     7,   114,   220,   286,
     131,   131,   131,    25,    38,   225,   226,     8,    38,   229,
     230,    38,   238,   239,   238,   113,   113,   256,   256,   263,
     263,   131,   131,   131,   272,     7,    14,   114,   114,   114,
     114,   114,   219,     5,   131,   131,   131,   131,    15,   114,
     323,   325,   108,   114,   320,   327,   335,   108,   114,   324,
     328,   335,   131,   131,   326,   328,   322,   327,   131,   131,
      34,    35,    42,    43,    44,   223,   231,   232,    60,    61,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    62,    83,    63,    82,
     131,   261,    75,    76,   276,   272,   276,   272,   276,     7,
     135,   156,   210,   333,   135,   333,   135,   156,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   200,
     212,   214,   155,   196,   196,   196,   196,   333,   166,   196,
      34,   114,   132,   219,   132,   219,   302,   132,   219,    26,
       8,    34,     8,    34,     8,    34,    52,    52,   219,   219,
     219,   219,   219,   114,   114,   114,   290,   219,   219,   219,
     219,    23,   114,   114,    34,   114,    34,   114,   219,   219,
     114,   114,   219,   219,   220,   220,   220,   220,   233,   234,
     233,    35,   232,    35,   245,   246,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   248,   249,   249,   250,   250,   250,   250,   251,   251,
     252,   252,   137,   138,   309,   311,   312,   313,   335,   309,
     307,   312,   307,   132,   219,   264,   264,    77,    14,   135,
     333,    39,   209,    14,   209,    14,   135,   133,   134,   333,
     135,   333,   133,   134,   161,   162,    47,    48,   133,   167,
     204,     4,    38,     3,   196,   196,   196,   196,     7,   220,
     132,   132,   132,    31,    37,    39,    56,   227,   308,   226,
      41,   308,   230,    37,   308,   239,   220,   220,   114,   114,
     132,   132,   132,     6,   116,   119,   132,   132,   132,   132,
     329,   335,   329,   132,   132,   132,   132,    45,    46,   235,
      34,   220,    35,   220,   163,   164,   165,   310,   163,   132,
     219,    84,   209,   333,    34,    84,    84,   333,   333,    34,
      38,   114,   136,   215,   216,     8,     7,   196,   220,    38,
     309,    37,    37,   227,   220,    41,   220,    37,    55,   241,
     242,    58,   117,   294,   131,   131,   114,   114,   139,   131,
      47,    48,   236,   234,   220,    78,   333,   333,   333,   168,
     169,   205,     8,   131,   145,   217,   309,    34,   114,   136,
      41,   145,   308,     8,   220,   220,    37,   220,   220,    38,
     309,    54,   242,   220,   127,   129,   291,     9,    10,    11,
      22,   118,   125,   126,   217,   288,   295,   298,   132,   302,
     132,   219,   114,   132,   219,    49,   209,   308,   219,   145,
     217,   216,   145,   217,   309,   220,    41,   145,   220,     8,
      35,    35,    38,    59,   292,   293,     5,   132,   132,   132,
     333,   132,   145,   217,   220,    56,   220,   220,     8,   220,
       9,    33,   128,   217,   295,     9,    32,   130,   217,   295,
     119,   309,    35,    35,   220,   220
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
#line 474 "xquery.y"
    {
		if(!XPath2Utils::equals((yyvsp[-1].str),sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
	;}
    break;

  case 7:
#line 479 "xquery.y"
    {
		if(!XPath2Utils::equals((yyvsp[-3].str),sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
        bool bValidEnc=false;
        if(((yyvsp[-1].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && (yyvsp[-1].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
           ((yyvsp[-1].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && (yyvsp[-1].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z))
        {
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
#line 510 "xquery.y"
    {
	;}
    break;

  case 9:
#line 517 "xquery.y"
    {
	;}
    break;

  case 10:
#line 524 "xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace((yyvsp[-1].str));
		CONTEXT->setNamespaceBinding((yyvsp[-3].str),(yyvsp[-1].str));
	;}
    break;

  case 19:
#line 551 "xquery.y"
    {
		XQUserFunction* decl=(yyvsp[-1].functDecl);
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	;}
    break;

  case 31:
#line 590 "xquery.y"
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

  case 32:
#line 613 "xquery.y"
    {
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(true);
		;}
    break;

  case 33:
#line 620 "xquery.y"
    {
		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(false);
		;}
    break;

  case 34:
#line 631 "xquery.y"
    {
		    if(QP->_flags.get(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default element namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultElementAndTypeNS((yyvsp[0].str));
		;}
    break;

  case 35:
#line 638 "xquery.y"
    { 
		    if(QP->_flags.get(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default function namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultFuncNS((yyvsp[0].str));
		;}
    break;

  case 36:
#line 649 "xquery.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[-1].str));
		try
		{
			CONTEXT->getUriBoundToPrefix(qName.getPrefix());
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The option name is using an undefined namespace prefix [err:XPST0081]");
		}
      ;}
    break;

  case 37:
#line 666 "xquery.y"
    {
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	;}
    break;

  case 38:
#line 673 "xquery.y"
    {
		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	;}
    break;

  case 39:
#line 684 "xquery.y"
    { 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	;}
    break;

  case 40:
#line 691 "xquery.y"
    { 
		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
	;}
    break;

  case 41:
#line 702 "xquery.y"
    {
		if(QP->_flags.get(BIT_COPYNAMESPACE_SPECIFIED))
			yyerror("Prolog contains more than one copy namespace declaration [err:XQST0055]");
		QP->_flags.set(BIT_COPYNAMESPACE_SPECIFIED);
		CONTEXT->setPreserveNamespaces(XPath2Utils::equals((yyvsp[-2].str),szTrue));
		CONTEXT->setInheritNamespaces(XPath2Utils::equals((yyvsp[0].str),szTrue));
    ;}
    break;

  case 42:
#line 714 "xquery.y"
    {
        (yyval.str) = szTrue;
	;}
    break;

  case 43:
#line 718 "xquery.y"
    {
        (yyval.str) = szFalse;
	;}
    break;

  case 44:
#line 726 "xquery.y"
    {
        (yyval.str) = szTrue;
	;}
    break;

  case 45:
#line 730 "xquery.y"
    {
        (yyval.str) = szFalse;
	;}
    break;

  case 46:
#line 738 "xquery.y"
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

  case 47:
#line 757 "xquery.y"
    {
		    if(QP->_flags.get(BIT_BASEURI_SPECIFIED))
			    yyerror("Prolog contains more than one base URI declaration [err:XQST0032]");
		    QP->_flags.set(BIT_BASEURI_SPECIFIED);
			CONTEXT->setBaseURI((yyvsp[0].str));
		;}
    break;

  case 48:
#line 768 "xquery.y"
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
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
              throw e;
            }
		;}
    break;

  case 49:
#line 784 "xquery.y"
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
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
              throw e;
            }
		;}
    break;

  case 50:
#line 800 "xquery.y"
    { 
            try {
			  CONTEXT->addSchemaLocation((yyvsp[0].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
              throw e;
            }
		;}
    break;

  case 51:
#line 810 "xquery.y"
    {
            try {
			  CONTEXT->addSchemaLocation((yyvsp[-1].str),(yyvsp[0].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
              throw e;
            }
		;}
    break;

  case 52:
#line 823 "xquery.y"
    {
		(yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
		(yyval.stringList)->push_back((yyvsp[0].str));
	;}
    break;

  case 53:
#line 828 "xquery.y"
    {
		(yyvsp[-2].stringList)->push_back((yyvsp[0].str));
		(yyval.stringList) = (yyvsp[-2].stringList);
	;}
    break;

  case 54:
#line 837 "xquery.y"
    {
			(yyval.str) = (yyvsp[-1].str);
		;}
    break;

  case 55:
#line 841 "xquery.y"
    {
			(yyval.str) = (XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		;}
    break;

  case 56:
#line 849 "xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[-3].str),(yyvsp[-1].str));
        try {
		  QP->_query->importModule((yyvsp[-1].str),(yyvsp[0].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
          throw e;
        }
	;}
    break;

  case 57:
#line 862 "xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[0].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[-2].str),(yyvsp[0].str));
        try {
		  QP->_query->importModule((yyvsp[0].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-4]).first_line, (yylsp[-4]).first_column);
          throw e;
        }
	;}
    break;

  case 58:
#line 875 "xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[-1].str),(yyvsp[0].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
          throw e;
        }
	;}
    break;

  case 59:
#line 887 "xquery.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[0].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[0].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-1]).first_line, (yylsp[-1]).first_column);
          throw e;
        }
	;}
    break;

  case 60:
#line 903 "xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-3].str),(yyvsp[-2].sequenceType),WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 61:
#line 908 "xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 62:
#line 913 "xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),(yyvsp[-1].sequenceType),NULL,MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 63:
#line 918 "xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-1].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),NULL,MEMMGR);
		QP->_query->addVariable(var);
	;}
    break;

  case 64:
#line 927 "xquery.y"
    {
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
	;}
    break;

  case 65:
#line 934 "xquery.y"
    {
		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
	;}
    break;

  case 66:
#line 946 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		;}
    break;

  case 67:
#line 950 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		;}
    break;

  case 68:
#line 954 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 69:
#line 958 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 70:
#line 962 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),NULL,NULL, CONTEXT); 
		;}
    break;

  case 71:
#line 966 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,NULL,NULL, CONTEXT); 
		;}
    break;

  case 72:
#line 970 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 73:
#line 974 "xquery.y"
    {
			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		;}
    break;

  case 74:
#line 982 "xquery.y"
    {
			(yyvsp[-2].funcParams)->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = (yyvsp[-2].funcParams);
		;}
    break;

  case 75:
#line 987 "xquery.y"
    {
			XQUserFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQUserFunction::VectorOfFunctionParameters(XQillaAllocator<XQUserFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = paramList;
		;}
    break;

  case 76:
#line 997 "xquery.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[-1].str),(yyvsp[0].sequenceType),MEMMGR);
		;}
    break;

  case 77:
#line 1001 "xquery.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[0].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR) ,MEMMGR);
		;}
    break;

  case 78:
#line 1009 "xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[-1].astNode)); 
		;}
    break;

  case 79:
#line 1017 "xquery.y"
    {
	    QP->_query->setQueryBody((yyvsp[0].astNode));
	;}
    break;

  case 80:
#line 1025 "xquery.y"
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

  case 81:
#line 1043 "xquery.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		;}
    break;

  case 87:
#line 1060 "xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-4]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-4].variableBindingList), (yyvsp[-3].astNode), (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 88:
#line 1064 "xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), (yyvsp[-2].astNode), NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 89:
#line 1068 "xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), NULL, (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 90:
#line 1072 "xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-2].variableBindingList), NULL, NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		;}
    break;

  case 91:
#line 1079 "xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[-1].variableBindingList);
			for (VectorOfVariableBinding::iterator it = (yyvsp[0].variableBindingList)->begin(); it != (yyvsp[0].variableBindingList)->end (); ++it) 
				(yyvsp[-1].variableBindingList)->push_back(*it);
		;}
    break;

  case 95:
#line 1096 "xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		;}
    break;

  case 96:
#line 1103 "xquery.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 97:
#line 1107 "xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 98:
#line 1115 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 99:
#line 1121 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),(yyvsp[-2].str));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 100:
#line 1127 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 101:
#line 1133 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-4].str),(yyvsp[0].astNode),(yyvsp[-2].str),(yyvsp[-3].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 102:
#line 1143 "xquery.y"
    { 
			(yyval.str) = (yyvsp[0].str); 
		;}
    break;

  case 103:
#line 1152 "xquery.y"
    {
			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		;}
    break;

  case 104:
#line 1159 "xquery.y"
    {
			(yyvsp[-2].variableBindingList)->push_back((yyvsp[0].variableBinding));
			(yyval.variableBindingList) = (yyvsp[-2].variableBindingList);
		;}
    break;

  case 105:
#line 1164 "xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 106:
#line 1172 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 107:
#line 1178 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 108:
#line 1188 "xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[0].astNode));
		;}
    break;

  case 109:
#line 1196 "xquery.y"
    {
			(yyval.sort)=new (MEMMGR) XQSort(XQSort::unstable,(yyvsp[0].sortSpecList));
		;}
    break;

  case 110:
#line 1200 "xquery.y"
    {
			(yyval.sort)=new (MEMMGR) XQSort(XQSort::stable,(yyvsp[0].sortSpecList));
		;}
    break;

  case 111:
#line 1208 "xquery.y"
    {
			(yyvsp[-2].sortSpecList)->push_back((yyvsp[0].sortSpec));
			(yyval.sortSpecList) = (yyvsp[-2].sortSpecList);
		;}
    break;

  case 112:
#line 1213 "xquery.y"
    {
			(yyval.sortSpecList) = new (MEMMGR) XQSort::VectorOfSortSpec(XQillaAllocator<XQSort::SortSpec*>(MEMMGR));
			(yyval.sortSpecList)->push_back((yyvsp[0].sortSpec));
		;}
    break;

  case 113:
#line 1223 "xquery.y"
    {
			(yyval.sortSpec) = new (MEMMGR) XQSort::SortSpec((yyvsp[-2].astNode),(yyvsp[-1].sortModifier)+(yyvsp[0].sortModifier),NULL);
		;}
    break;

  case 114:
#line 1227 "xquery.y"
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

  case 115:
#line 1242 "xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; ;}
    break;

  case 116:
#line 1244 "xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; ;}
    break;

  case 117:
#line 1246 "xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::descending; ;}
    break;

  case 118:
#line 1251 "xquery.y"
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

  case 119:
#line 1261 "xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_greatest; ;}
    break;

  case 120:
#line 1263 "xquery.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_least; ;}
    break;

  case 121:
#line 1270 "xquery.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::some, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	;}
    break;

  case 122:
#line 1274 "xquery.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::every, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	;}
    break;

  case 123:
#line 1281 "xquery.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 124:
#line 1285 "xquery.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		;}
    break;

  case 125:
#line 1293 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 126:
#line 1299 "xquery.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		;}
    break;

  case 127:
#line 1309 "xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-4]), (yyvsp[0].astNode)),MEMMGR->getPooledString((yyvsp[-2].str)));
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-9]), (yyvsp[-7].astNode)), (yyvsp[-5].clauseList), defClause, MEMMGR);
		;}
    break;

  case 128:
#line 1314 "xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-2]), (yyvsp[0].astNode)),NULL);
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-7]), (yyvsp[-5].astNode)), (yyvsp[-3].clauseList), defClause, MEMMGR);
		;}
    break;

  case 129:
#line 1322 "xquery.y"
    {
			(yyvsp[-1].clauseList)->push_back((yyvsp[0].clause));
			(yyval.clauseList)=(yyvsp[-1].clauseList);
		;}
    break;

  case 130:
#line 1327 "xquery.y"
    {
			(yyval.clauseList)=new (MEMMGR) XQTypeswitch::VectorOfClause(XQillaAllocator<XQTypeswitch::Clause*>(MEMMGR));
			(yyval.clauseList)->push_back((yyvsp[0].clause));
		;}
    break;

  case 131:
#line 1336 "xquery.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-3]), (yyvsp[0].astNode)), NULL);
		;}
    break;

  case 132:
#line 1340 "xquery.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-6]), (yyvsp[0].astNode)), MEMMGR->getPooledString((yyvsp[-4].str)));
		;}
    break;

  case 133:
#line 1348 "xquery.y"
    { 
	        (yyval.astNode) = WRAP((yylsp[-7]), new (MEMMGR) XQIf((yyvsp[-5].astNode), (yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR));
		;}
    break;

  case 134:
#line 1356 "xquery.y"
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

  case 136:
#line 1375 "xquery.y"
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

  case 138:
#line 1399 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 139:
#line 1403 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 140:
#line 1407 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 141:
#line 1411 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 142:
#line 1415 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 143:
#line 1419 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 144:
#line 1423 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Equals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 145:
#line 1427 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NotEquals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 146:
#line 1431 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 147:
#line 1435 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 148:
#line 1439 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 149:
#line 1443 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 150:
#line 1447 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), MEMMGR));
		;}
    break;

  case 151:
#line 1451 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), true, MEMMGR));
		;}
    break;

  case 152:
#line 1455 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), false,MEMMGR));
		;}
    break;

  case 154:
#line 1464 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Range(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 156:
#line 1473 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Plus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 157:
#line 1477 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Minus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 159:
#line 1486 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Multiply(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 160:
#line 1490 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Divide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 161:
#line 1494 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 162:
#line 1498 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Mod(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 164:
#line 1507 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 165:
#line 1511 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 167:
#line 1520 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Intersect(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 168:
#line 1524 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Except(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		;}
    break;

  case 170:
#line 1533 "xquery.y"
    {
		(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQInstanceOf((yyvsp[-2].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 172:
#line 1542 "xquery.y"
    {
		(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQTreatAs((yyvsp[-2].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 174:
#line 1551 "xquery.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a castable expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQCastableAs((yyvsp[-2].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 176:
#line 1566 "xquery.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a cast expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQCastAs((yyvsp[-2].astNode),(yyvsp[0].sequenceType),MEMMGR));
	;}
    break;

  case 178:
#line 1581 "xquery.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back((yyvsp[0].astNode));
			(yyval.astNode) = new (MEMMGR) UnaryMinus(args, MEMMGR);
		;}
    break;

  case 179:
#line 1587 "xquery.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		;}
    break;

  case 184:
#line 1605 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		;}
    break;

  case 185:
#line 1609 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
		;}
    break;

  case 186:
#line 1613 "xquery.y"
    {
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		;}
    break;

  case 187:
#line 1621 "xquery.y"
    {
		// we don't support any pragma
		yyerror("This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
	;}
    break;

  case 188:
#line 1626 "xquery.y"
    {
		// we don't support any pragma
		(yyval.astNode) = (yyvsp[-1].astNode);
	;}
    break;

  case 191:
#line 1641 "xquery.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[-2].str));
		try
		{
			CONTEXT->getUriBoundToPrefix(qName.getPrefix());
		}
		catch(NamespaceLookupException&)
		{
			yyerror("The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      ;}
    break;

  case 192:
#line 1658 "xquery.y"
    {
			XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		;}
    break;

  case 193:
#line 1664 "xquery.y"
    {
			XQNav* nav=getNavigation((yyvsp[0].astNode),MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		;}
    break;

  case 194:
#line 1670 "xquery.y"
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

  case 196:
#line 1689 "xquery.y"
    {
			XQNav *nav = getNavigation((yyvsp[-2].astNode),MEMMGR);
			nav->addStep((yyvsp[0].astNode));
			(yyval.astNode) = nav;
		;}
    break;

  case 197:
#line 1695 "xquery.y"
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

  case 201:
#line 1719 "xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		;}
    break;

  case 202:
#line 1723 "xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
      (yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
		;}
    break;

  case 203:
#line 1732 "xquery.y"
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

  case 205:
#line 1755 "xquery.y"
    {
      (yyval.axis) = XQStep::CHILD;
		;}
    break;

  case 206:
#line 1759 "xquery.y"
    {
      (yyval.axis) = XQStep::DESCENDANT;
		;}
    break;

  case 207:
#line 1763 "xquery.y"
    {
      (yyval.axis) = XQStep::ATTRIBUTE;
		;}
    break;

  case 208:
#line 1767 "xquery.y"
    {
      (yyval.axis) = XQStep::SELF;
		;}
    break;

  case 209:
#line 1771 "xquery.y"
    {
      (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
		;}
    break;

  case 210:
#line 1775 "xquery.y"
    {
      (yyval.axis) = XQStep::FOLLOWING_SIBLING;
		;}
    break;

  case 211:
#line 1779 "xquery.y"
    {
      (yyval.axis) = XQStep::FOLLOWING;
		;}
    break;

  case 212:
#line 1787 "xquery.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[0].nodeTest), MEMMGR);
		;}
    break;

  case 213:
#line 1795 "xquery.y"
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

  case 214:
#line 1813 "xquery.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), MEMMGR);
		;}
    break;

  case 216:
#line 1830 "xquery.y"
    {
      (yyval.axis) = XQStep::PARENT;
		;}
    break;

  case 217:
#line 1834 "xquery.y"
    {
      (yyval.axis) = XQStep::ANCESTOR;
		;}
    break;

  case 218:
#line 1838 "xquery.y"
    {
      (yyval.axis) = XQStep::PRECEDING_SIBLING;
		;}
    break;

  case 219:
#line 1842 "xquery.y"
    {
      (yyval.axis) = XQStep::PRECEDING;
		;}
    break;

  case 220:
#line 1846 "xquery.y"
    {
      (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
		;}
    break;

  case 221:
#line 1854 "xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			(yyval.astNode) = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
		;}
    break;

  case 224:
#line 1872 "xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			try
			{
				const XMLCh* uri = CONTEXT->getUriBoundToPrefix((yyvsp[0].qName)->getPrefix());
				step->setNodeUri(uri);
			}
			catch(NamespaceLookupException&)
			{
				step->setNodePrefix((yyvsp[0].qName)->getPrefix());
			}
			step->setNodeName((yyvsp[0].qName)->getName());
			(yyval.nodeTest) = step;
		;}
    break;

  case 226:
#line 1892 "xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 227:
#line 1899 "xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			try
			{
				const XMLCh* uri = CONTEXT->getUriBoundToPrefix((yyvsp[0].str));
				step->setNodeUri(uri);
			}
			catch(NamespaceLookupException&)
			{
				step->setNodePrefix((yyvsp[0].str));
			}
			step->setNameWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 228:
#line 1914 "xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName((yyvsp[0].str));
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		;}
    break;

  case 229:
#line 1925 "xquery.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		;}
    break;

  case 230:
#line 1934 "xquery.y"
    {
	        (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
		;}
    break;

  case 231:
#line 1938 "xquery.y"
    {
      XQPredicate *pred = new (MEMMGR) XQPredicate((yyvsp[-1].astNode), MEMMGR);
			(yyvsp[-3].predicates)->push_back(pred);
			(yyval.predicates) = (yyvsp[-3].predicates); 
		;}
    break;

  case 245:
#line 1973 "xquery.y"
    {
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf((yyvsp[0].str),':');
			if(nColon!=-1)
  				(yyval.astNode) = new (MEMMGR) XQVariable((yyvsp[0].str),MEMMGR);
			else
				(yyval.astNode) = new (MEMMGR) XQVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, (yyvsp[0].str),MEMMGR);
		;}
    break;

  case 246:
#line 1985 "xquery.y"
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

  case 247:
#line 1999 "xquery.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQSequence(MEMMGR));
		;}
    break;

  case 248:
#line 2007 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQContextItem(MEMMGR);
		;}
    break;

  case 249:
#line 2015 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[-1].astNode), MEMMGR);
		;}
    break;

  case 250:
#line 2023 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[-1].astNode), MEMMGR);
		;}
    break;

  case 251:
#line 2031 "xquery.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = FNWRAP((yylsp[-1]), (yyvsp[-1].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-1].str), MEMMGR), args, MEMMGR));
		;}
    break;

  case 252:
#line 2036 "xquery.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), (yyvsp[-2].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-2].str), MEMMGR), *(yyvsp[-1].itemList),MEMMGR));
		;}
    break;

  case 253:
#line 2043 "xquery.y"
    {
			(yyvsp[-2].itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList) = (yyvsp[-2].itemList);
		;}
    break;

  case 254:
#line 2048 "xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 260:
#line 2072 "xquery.y"
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

  case 261:
#line 2084 "xquery.y"
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

  case 262:
#line 2116 "xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 263:
#line 2120 "xquery.y"
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

  case 264:
#line 2146 "xquery.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		;}
    break;

  case 265:
#line 2150 "xquery.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		;}
    break;

  case 266:
#line 2159 "xquery.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 267:
#line 2163 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 268:
#line 2168 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szQuote);
		;}
    break;

  case 269:
#line 2173 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 270:
#line 2178 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 271:
#line 2188 "xquery.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		;}
    break;

  case 272:
#line 2192 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		;}
    break;

  case 273:
#line 2197 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szApos);
		;}
    break;

  case 274:
#line 2202 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 275:
#line 2207 "xquery.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		;}
    break;

  case 276:
#line 2222 "xquery.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
		;}
    break;

  case 277:
#line 2226 "xquery.y"
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

  case 278:
#line 2247 "xquery.y"
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

  case 279:
#line 2276 "xquery.y"
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

  case 280:
#line 2291 "xquery.y"
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

  case 281:
#line 2313 "xquery.y"
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

  case 284:
#line 2335 "xquery.y"
    {
		(yyval.str) = szCurlyOpen;
	;}
    break;

  case 285:
#line 2339 "xquery.y"
    {
		(yyval.str) = szCurlyClose;
	;}
    break;

  case 286:
#line 2348 "xquery.y"
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

  case 287:
#line 2364 "xquery.y"
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

  case 288:
#line 2390 "xquery.y"
    {
			(yyval.str) = (yyvsp[0].str);
		;}
    break;

  case 295:
#line 2413 "xquery.y"
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

  case 296:
#line 2431 "xquery.y"
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

  case 297:
#line 2445 "xquery.y"
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

  case 298:
#line 2457 "xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
								  empty, content, MEMMGR));
		;}
    break;

  case 299:
#line 2466 "xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
								  empty, empty, MEMMGR));
		;}
    break;

  case 301:
#line 2482 "xquery.y"
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

  case 302:
#line 2495 "xquery.y"
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

  case 303:
#line 2507 "xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
		;}
    break;

  case 304:
#line 2515 "xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
		;}
    break;

  case 305:
#line 2526 "xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::text_string, 0, 0, content, MEMMGR));
		;}
    break;

  case 306:
#line 2536 "xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		;}
    break;

  case 307:
#line 2546 "xquery.y"
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

  case 308:
#line 2559 "xquery.y"
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

  case 309:
#line 2571 "xquery.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
	  ;}
    break;

  case 310:
#line 2579 "xquery.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
	  ;}
    break;

  case 311:
#line 2590 "xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[-1].qName)));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 312:
#line 2597 "xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[0].qName)));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 313:
#line 2608 "xquery.y"
    {
			(yyval.sequenceType) = (yyvsp[0].sequenceType);
		;}
    break;

  case 314:
#line 2616 "xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[-1].itemType));
			seq->setOccurrence((yyvsp[0].occurrence));
			(yyval.sequenceType) = seq;
		;}
    break;

  case 315:
#line 2623 "xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[0].itemType));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		;}
    break;

  case 316:
#line 2630 "xquery.y"
    { 
			(yyval.sequenceType) = new (MEMMGR) SequenceType(); 
		;}
    break;

  case 317:
#line 2639 "xquery.y"
    { (yyval.occurrence) = SequenceType::STAR; ;}
    break;

  case 318:
#line 2641 "xquery.y"
    { (yyval.occurrence) = SequenceType::PLUS; ;}
    break;

  case 319:
#line 2643 "xquery.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; ;}
    break;

  case 320:
#line 2649 "xquery.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName));
	;}
    break;

  case 321:
#line 2653 "xquery.y"
    {
		(yyval.itemType) = (yyvsp[0].nodeTest)->getItemType();
		(yyvsp[0].nodeTest)->setItemType(NULL);
	;}
    break;

  case 322:
#line 2658 "xquery.y"
    {
		(yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	;}
    break;

  case 323:
#line 2666 "xquery.y"
    {
		(yyval.qName) = (yyvsp[0].qName);
	;}
    break;

  case 333:
#line 2695 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 334:
#line 2705 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 335:
#line 2711 "xquery.y"
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
#line 2720 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	;}
    break;

  case 337:
#line 2733 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 338:
#line 2743 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 339:
#line 2753 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	;}
    break;

  case 340:
#line 2759 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 341:
#line 2765 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 342:
#line 2775 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 343:
#line 2781 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 344:
#line 2787 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 346:
#line 2798 "xquery.y"
    {
		(yyval.qName) = NULL;
	;}
    break;

  case 347:
#line 2806 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 349:
#line 2821 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 350:
#line 2827 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 351:
#line 2833 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 352:
#line 2839 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-4].qName),(yyvsp[-2].qName));
		pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	;}
    break;

  case 354:
#line 2852 "xquery.y"
    {
		(yyval.qName) = NULL;
	;}
    break;

  case 355:
#line 2860 "xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 360:
#line 2890 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		;}
    break;

  case 361:
#line 2903 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		;}
    break;

  case 362:
#line 2916 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										(yyvsp[0].str), AnyAtomicType::DOUBLE),
										MEMMGR);
		;}
    break;

  case 363:
#line 2929 "xquery.y"
    {
		// the string must be whitespace-normalized
		XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS((yyvsp[0].str), MEMMGR);
        if((yyvsp[0].str) && *(yyvsp[0].str) && !XERCES_CPP_NAMESPACE_QUALIFIER XMLUri::isValidURI(true, (yyvsp[0].str)))
          yyerror("The URI literal is not a valid one [err:XQST0046]");
		(yyval.str) = (yyvsp[0].str);
	;}
    break;

  case 364:
#line 2942 "xquery.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR);
		;}
    break;

  case 365:
#line 2955 "xquery.y"
    {
			(yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[0].str),MEMMGR);
		;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 5331 "Grammar.cpp"

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


#line 2959 "xquery.y"


}	// namespace XQuery



