/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

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
     _XQUERY_VERSION_ = 276,
     _XML_COMMENT_ = 277,
     _CDATA_SECTION_ = 278,
     _PROCESSING_INSTRUCTION_CONTENT_ = 279,
     _NAMED_PROCESSING_INSTRUCTION_CONSTR_ = 280,
     _PRAGMA_NAME_ = 281,
     _PRAGMA_CONTENT_ = 282,
     _XQUERY_COMMENT_ = 283,
     _XQUERY_WHITESPACE_ = 284,
     _XQUERY_ERROR_ = 285,
     _PRAGMA_OPEN_ = 286,
     _PRAGMA_CLOSE_ = 287,
     _ESCAPE_APOS_ = 288,
     _ESCAPE_QUOT_ = 289,
     _COMMA_ = 290,
     _RETURN_ = 291,
     _FOR_ = 292,
     _IN_ = 293,
     _DOLLAR_SIGN_ = 294,
     _AT_KEYWORD_ = 295,
     _LET_ = 296,
     _COLON_EQ_ = 297,
     _WHERE_ = 298,
     _ORDER_BY_ = 299,
     _STABLE_ORDER_BY_ = 300,
     _ASCENDING_ = 301,
     _DESCENDING_ = 302,
     _EMPTY_GREATEST_ = 303,
     _EMPTY_LEAST_ = 304,
     _COLLATION_ = 305,
     _SOME_ = 306,
     _EVERY_ = 307,
     _SATISFIES_ = 308,
     _TYPESWITCH_ = 309,
     _DEFAULT_ = 310,
     _CASE_ = 311,
     _AS_ = 312,
     _IF_ = 313,
     _THEN_ = 314,
     _ELSE_ = 315,
     _OR_ = 316,
     _AND_ = 317,
     _INSTANCE_OF_ = 318,
     _CASTABLE_AS_ = 319,
     _TO_ = 320,
     _PLUS_ = 321,
     _MINUS_ = 322,
     _MULTIPLY_ = 323,
     _DIV_ = 324,
     _INTEGER_DIV_ = 325,
     _MOD_ = 326,
     _UNION_ = 327,
     _VERTICAL_BAR_ = 328,
     _INTERSECT_ = 329,
     _EXCEPT_ = 330,
     _SLASH_ = 331,
     _SLASHSLASH_ = 332,
     _LBRACK_ = 333,
     _RBRACK_ = 334,
     _VALIDATE_CONTENT_ = 335,
     _VALIDATE_MODE_LAX_ = 336,
     _VALIDATE_MODE_STRICT_ = 337,
     _CAST_AS_ = 338,
     _TREAT_AS_ = 339,
     _EQUALS_ = 340,
     _NOT_EQUALS_ = 341,
     _LT_ = 342,
     _LT_EQUALS_ = 343,
     _GT_ = 344,
     _GT_EQUALS_ = 345,
     _FORTRAN_EQ_ = 346,
     _FORTRAN_NE_ = 347,
     _FORTRAN_LT_ = 348,
     _FORTRAN_LE_ = 349,
     _FORTRAN_GT_ = 350,
     _FORTRAN_GE_ = 351,
     _IS_ = 352,
     _LT_LT_ = 353,
     _GT_GT_ = 354,
     _DOT_ = 355,
     _AT_ = 356,
     _DOT_DOT_ = 357,
     _AXIS_CHILD_ = 358,
     _AXIS_DESCENDANT_ = 359,
     _AXIS_ATTRIBUTE_ = 360,
     _AXIS_SELF_ = 361,
     _AXIS_DESCENDANT_OR_SELF_ = 362,
     _AXIS_PARENT_ = 363,
     _STAR_ = 364,
     _PROCESSING_INSTRUCTION_LPAR_ = 365,
     _COMMENT_LPAR_ = 366,
     _TEXT_LPAR_ = 367,
     _NODE_LPAR_ = 368,
     _LPAR_ = 369,
     _RPAR_ = 370,
     _START_TAG_OPEN_ = 371,
     _EMPTY_TAG_CLOSE_ = 372,
     _VALUE_INDICATOR_ = 373,
     _END_TAG_OPEN_ = 374,
     _TAG_CLOSE_ = 375,
     _DOCUMENT_CONSTR_ = 376,
     _ELEMENT_CONSTR_ = 377,
     _ATTRIBUTE_CONSTR_ = 378,
     _TEXT_CONSTR_ = 379,
     _PROCESSING_INSTRUCTION_START_ = 380,
     _LCURLY_BRACE_ESCAPE_ = 381,
     _RCURLY_BRACE_ESCAPE_ = 382,
     _OPEN_QUOT_ = 383,
     _CLOSE_QUOT_ = 384,
     _OPEN_APOS_ = 385,
     _CLOSE_APOS_ = 386,
     _LBRACE_ = 387,
     _RBRACE_ = 388,
     _PRESERVE_ = 389,
     _STRIP_ = 390,
     _NAMESPACE_ = 391,
     _EXPR_AS_ = 392,
     _EMPTY_ = 393,
     _ITEM_ = 394,
     _NILLABLE_ = 395,
     _IMPORT_SCHEMA_ = 396,
     _IMPORT_MODULE_ = 397,
     _DOCUMENT_NODE_LPAR_ = 398,
     _ATTRIBUTE_LPAR_ = 399,
     _ELEMENT_LPAR_ = 400,
     _EXTERNAL_ = 401,
     _MODULE_NAMESPACE_ = 402,
     _PROCESSING_INSTRUCTION_CONSTR_ = 403,
     _COMMENT_CONSTR_ = 404,
     _AXIS_ANCESTOR_OR_SELF_ = 405,
     _AXIS_ANCESTOR_ = 406,
     _AXIS_FOLLOWING_SIBLING_ = 407,
     _AXIS_FOLLOWING_ = 408,
     _AXIS_PRECEDING_SIBLING_ = 409,
     _AXIS_PRECEDING_ = 410,
     _SEMICOLON_ = 411,
     _DEFAULT_ELEMENT_ = 412,
     _SCHEMA_ELEMENT_LPAR_ = 413,
     _SCHEMA_ATTRIBUTE_LPAR_ = 414,
     _ORDERED_ = 415,
     _UNORDERED_ = 416,
     _CONSTRUCTION_PRESERVE_ = 417,
     _CONSTRUCTION_STRIP_ = 418,
     _ORDERING_UNORDERED_ = 419,
     _ORDERING_ORDERED_ = 420,
     _ZERO_OR_ONE_ = 421,
     _ONE_OR_MORE_ = 422,
     _ZERO_OR_MORE_ = 423,
     _ENCODING_ = 424,
     _NS_PRESERVE_ = 425,
     _NS_NO_PRESERVE_ = 426,
     _NS_INHERIT_ = 427,
     _NS_NO_INHERIT_ = 428,
     _DECLARE_ = 429,
     _BOUNDARYSPACE_ = 430,
     _DEFAULT_COLLATION_ = 431,
     _DEFAULT_FUNCTION_ = 432,
     _BASEURI_ = 433,
     _CONSTRUCTION_ = 434,
     _ORDERING_ = 435,
     _DEFAULT_ORDER_ = 436,
     _COPY_NAMESPACES_ = 437,
     _DECLARE_FUNCTION_ = 438,
     _DECLARE_VARIABLE_ = 439,
     _DECLARE_OPTION_ = 440,
     _EOF_ = 441
   };
#endif
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
#define _XQUERY_VERSION_ 276
#define _XML_COMMENT_ 277
#define _CDATA_SECTION_ 278
#define _PROCESSING_INSTRUCTION_CONTENT_ 279
#define _NAMED_PROCESSING_INSTRUCTION_CONSTR_ 280
#define _PRAGMA_NAME_ 281
#define _PRAGMA_CONTENT_ 282
#define _XQUERY_COMMENT_ 283
#define _XQUERY_WHITESPACE_ 284
#define _XQUERY_ERROR_ 285
#define _PRAGMA_OPEN_ 286
#define _PRAGMA_CLOSE_ 287
#define _ESCAPE_APOS_ 288
#define _ESCAPE_QUOT_ 289
#define _COMMA_ 290
#define _RETURN_ 291
#define _FOR_ 292
#define _IN_ 293
#define _DOLLAR_SIGN_ 294
#define _AT_KEYWORD_ 295
#define _LET_ 296
#define _COLON_EQ_ 297
#define _WHERE_ 298
#define _ORDER_BY_ 299
#define _STABLE_ORDER_BY_ 300
#define _ASCENDING_ 301
#define _DESCENDING_ 302
#define _EMPTY_GREATEST_ 303
#define _EMPTY_LEAST_ 304
#define _COLLATION_ 305
#define _SOME_ 306
#define _EVERY_ 307
#define _SATISFIES_ 308
#define _TYPESWITCH_ 309
#define _DEFAULT_ 310
#define _CASE_ 311
#define _AS_ 312
#define _IF_ 313
#define _THEN_ 314
#define _ELSE_ 315
#define _OR_ 316
#define _AND_ 317
#define _INSTANCE_OF_ 318
#define _CASTABLE_AS_ 319
#define _TO_ 320
#define _PLUS_ 321
#define _MINUS_ 322
#define _MULTIPLY_ 323
#define _DIV_ 324
#define _INTEGER_DIV_ 325
#define _MOD_ 326
#define _UNION_ 327
#define _VERTICAL_BAR_ 328
#define _INTERSECT_ 329
#define _EXCEPT_ 330
#define _SLASH_ 331
#define _SLASHSLASH_ 332
#define _LBRACK_ 333
#define _RBRACK_ 334
#define _VALIDATE_CONTENT_ 335
#define _VALIDATE_MODE_LAX_ 336
#define _VALIDATE_MODE_STRICT_ 337
#define _CAST_AS_ 338
#define _TREAT_AS_ 339
#define _EQUALS_ 340
#define _NOT_EQUALS_ 341
#define _LT_ 342
#define _LT_EQUALS_ 343
#define _GT_ 344
#define _GT_EQUALS_ 345
#define _FORTRAN_EQ_ 346
#define _FORTRAN_NE_ 347
#define _FORTRAN_LT_ 348
#define _FORTRAN_LE_ 349
#define _FORTRAN_GT_ 350
#define _FORTRAN_GE_ 351
#define _IS_ 352
#define _LT_LT_ 353
#define _GT_GT_ 354
#define _DOT_ 355
#define _AT_ 356
#define _DOT_DOT_ 357
#define _AXIS_CHILD_ 358
#define _AXIS_DESCENDANT_ 359
#define _AXIS_ATTRIBUTE_ 360
#define _AXIS_SELF_ 361
#define _AXIS_DESCENDANT_OR_SELF_ 362
#define _AXIS_PARENT_ 363
#define _STAR_ 364
#define _PROCESSING_INSTRUCTION_LPAR_ 365
#define _COMMENT_LPAR_ 366
#define _TEXT_LPAR_ 367
#define _NODE_LPAR_ 368
#define _LPAR_ 369
#define _RPAR_ 370
#define _START_TAG_OPEN_ 371
#define _EMPTY_TAG_CLOSE_ 372
#define _VALUE_INDICATOR_ 373
#define _END_TAG_OPEN_ 374
#define _TAG_CLOSE_ 375
#define _DOCUMENT_CONSTR_ 376
#define _ELEMENT_CONSTR_ 377
#define _ATTRIBUTE_CONSTR_ 378
#define _TEXT_CONSTR_ 379
#define _PROCESSING_INSTRUCTION_START_ 380
#define _LCURLY_BRACE_ESCAPE_ 381
#define _RCURLY_BRACE_ESCAPE_ 382
#define _OPEN_QUOT_ 383
#define _CLOSE_QUOT_ 384
#define _OPEN_APOS_ 385
#define _CLOSE_APOS_ 386
#define _LBRACE_ 387
#define _RBRACE_ 388
#define _PRESERVE_ 389
#define _STRIP_ 390
#define _NAMESPACE_ 391
#define _EXPR_AS_ 392
#define _EMPTY_ 393
#define _ITEM_ 394
#define _NILLABLE_ 395
#define _IMPORT_SCHEMA_ 396
#define _IMPORT_MODULE_ 397
#define _DOCUMENT_NODE_LPAR_ 398
#define _ATTRIBUTE_LPAR_ 399
#define _ELEMENT_LPAR_ 400
#define _EXTERNAL_ 401
#define _MODULE_NAMESPACE_ 402
#define _PROCESSING_INSTRUCTION_CONSTR_ 403
#define _COMMENT_CONSTR_ 404
#define _AXIS_ANCESTOR_OR_SELF_ 405
#define _AXIS_ANCESTOR_ 406
#define _AXIS_FOLLOWING_SIBLING_ 407
#define _AXIS_FOLLOWING_ 408
#define _AXIS_PRECEDING_SIBLING_ 409
#define _AXIS_PRECEDING_ 410
#define _SEMICOLON_ 411
#define _DEFAULT_ELEMENT_ 412
#define _SCHEMA_ELEMENT_LPAR_ 413
#define _SCHEMA_ATTRIBUTE_LPAR_ 414
#define _ORDERED_ 415
#define _UNORDERED_ 416
#define _CONSTRUCTION_PRESERVE_ 417
#define _CONSTRUCTION_STRIP_ 418
#define _ORDERING_UNORDERED_ 419
#define _ORDERING_ORDERED_ 420
#define _ZERO_OR_ONE_ 421
#define _ONE_OR_MORE_ 422
#define _ZERO_OR_MORE_ 423
#define _ENCODING_ 424
#define _NS_PRESERVE_ 425
#define _NS_NO_PRESERVE_ 426
#define _NS_INHERIT_ 427
#define _NS_NO_INHERIT_ 428
#define _DECLARE_ 429
#define _BOUNDARYSPACE_ 430
#define _DEFAULT_COLLATION_ 431
#define _DEFAULT_FUNCTION_ 432
#define _BASEURI_ 433
#define _CONSTRUCTION_ 434
#define _ORDERING_ 435
#define _DEFAULT_ORDER_ 436
#define _COPY_NAMESPACES_ 437
#define _DECLARE_FUNCTION_ 438
#define _DECLARE_VARIABLE_ 439
#define _DECLARE_OPTION_ 440
#define _EOF_ 441




/* Copy the first part of user declarations.  */
#line 16 "../src/parser/xquery.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include "../lexer/Scanner.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/functions/XQFunction.hpp>
#include <xqilla/ast/XQDOMConstructor.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQDebugHook.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xercesc/dom/DOMNode.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/DataItemSequence.hpp>
#include <xqilla/ast/DataItemParenthesizedExpr.hpp>
#include <xqilla/ast/DataItemNav.hpp>
#include <xqilla/ast/DataItemStep.hpp>
#include <xqilla/ast/DataItemLiteral.hpp>
#include <xqilla/ast/DataItemVariable.hpp>
#include <xqilla/ast/DataItemQuantifiedExpr.hpp>
#include <xqilla/ast/DataItemInstanceOf.hpp>
#include <xqilla/ast/DataItemCastAs.hpp>
#include <xqilla/ast/DataItemCastableAs.hpp>
#include <xqilla/ast/DataItemTreatAs.hpp>
#include <xqilla/ast/DataItemIf.hpp>
#include <xqilla/ast/DataItemContextItem.hpp>

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

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#ifdef HAVE_CONFIG_H
#include "../config/pathan_config.h"
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

static inline DataItemNav* getNavigation(DataItem *possibleNav, XPath2MemoryManager * expr)
{
	DataItem* originalObj=possibleNav;
	if((unsigned int)possibleNav->getType()==XQContext::DEBUG_HOOK)
		possibleNav=((XQDebugHook*)possibleNav)->m_impl;
	if(possibleNav->getType()==DataItem::NAVIGATION)
		return (DataItemNav*)possibleNav;
	else
	{
		DataItemNav* nav=new (expr) DataItemNav(expr);
		nav->addStep(originalObj);
		return nav;
	}
}

static inline VectorOfDataItems packageArgs(DataItem *arg1Impl, DataItem *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfDataItems args=VectorOfDataItems(2,(DataItem*)NULL,PathanAllocator<DataItem*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

static void merge_strings(DynamicContext* context, VectorOfDataItems* vec, XMLCh* toBeAdded)
{
	if(vec->size()>0 && vec->back()->getType()==DataItem::LITERAL)
	{
		DataItemLiteral *lit = (DataItemLiteral*)vec->back();
		const XMLCh* string=lit->getItemConstructor()->createItem(context)->asString(context);
		string=XPath2Utils::concatStrings(string,toBeAdded,context->getMemoryManager());

		AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
    		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
            string, /*isNumeric*/false);
    	lit->setItemConstructor(ic);
	}
	else
	{
    	AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
      		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				toBeAdded, /*isNumeric*/false);

		vec->push_back(new (context->getMemoryManager())
                   DataItemLiteral(ic, context->getMemoryManager()));
	}
}

static DataItem* wrapForDebug(XQueryParserArgs *qp, DataItem* pObjToWrap,
                              const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(!CONTEXT->getDebugCallback())
    return pObjToWrap;
  if(fnName==NULL && (unsigned int)pObjToWrap->getType()==XQContext::DEBUG_HOOK)
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


/* Line 214 of yacc.c.  */
#line 672 "../src/parser/Grammar.cpp"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYLTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE) + sizeof (YYLTYPE))	\
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
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
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2466

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  151
/* YYNRULES -- Number of rules. */
#define YYNRULES  363
/* YYNRULES -- Number of states. */
#define YYNSTATES  642

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   441

#define YYTRANSLATE(YYX) 						\
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
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    16,    21,    24,
      27,    33,    36,    37,    41,    45,    49,    53,    54,    58,
      62,    66,    68,    70,    72,    74,    76,    78,    80,    82,
      84,    86,    92,    96,   100,   105,   110,   114,   118,   122,
     126,   130,   136,   138,   140,   142,   144,   148,   152,   156,
     161,   164,   168,   171,   175,   179,   182,   189,   195,   199,
     202,   209,   215,   221,   226,   230,   234,   240,   245,   252,
     258,   264,   269,   276,   282,   286,   288,   292,   295,   299,
     301,   305,   307,   309,   311,   313,   315,   317,   323,   328,
     333,   337,   340,   342,   344,   346,   349,   353,   355,   360,
     366,   372,   379,   383,   386,   390,   392,   397,   403,   406,
     409,   412,   416,   418,   422,   428,   429,   431,   433,   434,
     436,   438,   443,   448,   452,   454,   459,   465,   476,   485,
     488,   490,   495,   503,   512,   516,   518,   522,   524,   528,
     532,   536,   540,   544,   548,   552,   556,   560,   564,   568,
     572,   576,   580,   584,   586,   590,   592,   596,   600,   602,
     606,   610,   614,   618,   620,   624,   628,   630,   634,   638,
     640,   644,   646,   650,   652,   656,   658,   662,   664,   667,
     670,   672,   674,   676,   678,   683,   688,   693,   697,   702,
     704,   707,   712,   714,   717,   720,   722,   726,   730,   732,
     734,   736,   739,   742,   745,   747,   749,   751,   753,   755,
     757,   759,   761,   764,   766,   769,   771,   773,   775,   777,
     779,   781,   783,   785,   787,   789,   791,   793,   795,   797,
     800,   801,   806,   808,   810,   812,   814,   816,   818,   820,
     822,   824,   826,   828,   830,   832,   835,   839,   842,   844,
     849,   854,   857,   861,   865,   867,   869,   871,   873,   875,
     877,   882,   891,   892,   897,   901,   905,   906,   909,   912,
     915,   916,   919,   922,   925,   926,   929,   932,   935,   938,
     940,   942,   944,   946,   948,   950,   954,   956,   958,   960,
     962,   964,   966,   968,   973,   978,   982,   990,   997,   999,
    1004,  1008,  1016,  1023,  1028,  1033,  1038,  1042,  1050,  1057,
    1060,  1062,  1065,  1068,  1070,  1072,  1074,  1076,  1078,  1080,
    1082,  1084,  1086,  1088,  1090,  1092,  1094,  1096,  1098,  1100,
    1102,  1104,  1107,  1110,  1114,  1118,  1121,  1124,  1127,  1131,
    1135,  1138,  1142,  1148,  1150,  1152,  1156,  1158,  1161,  1165,
    1171,  1178,  1180,  1182,  1186,  1188,  1190,  1192,  1194,  1196,
    1198,  1200,  1202,  1204
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     188,     0,    -1,   189,   190,    -1,   189,   191,    -1,   190,
      -1,   191,    -1,    21,   198,    -1,    21,   169,     7,   198,
      -1,   193,   220,    -1,   192,   193,    -1,   147,    14,    85,
     335,   198,    -1,   194,   195,    -1,    -1,   194,   196,   198,
      -1,   194,   197,   198,    -1,   194,   199,   198,    -1,   194,
     201,   198,    -1,    -1,   195,   214,   198,    -1,   195,   216,
     198,    -1,   195,   202,   198,    -1,   200,    -1,   208,    -1,
     209,    -1,   215,    -1,   203,    -1,   204,    -1,   205,    -1,
     210,    -1,   213,    -1,   156,    -1,   174,   136,    14,    85,
     335,    -1,   174,   175,   134,    -1,   174,   175,   135,    -1,
     174,   157,   136,   335,    -1,   174,   177,   136,   335,    -1,
     185,     3,     7,    -1,   174,   180,   165,    -1,   174,   180,
     164,    -1,   174,   181,    48,    -1,   174,   181,    49,    -1,
     174,   182,   206,    35,   207,    -1,   170,    -1,   171,    -1,
     172,    -1,   173,    -1,   174,   176,   335,    -1,   174,   178,
     335,    -1,   141,   212,   335,    -1,   141,   212,   335,   211,
      -1,   141,   335,    -1,   141,   335,   211,    -1,    40,   335,
      -1,   211,    35,   335,    -1,   136,    14,    85,    -1,   157,
     136,    -1,   142,   136,    14,    85,   335,   211,    -1,   142,
     136,    14,    85,   335,    -1,   142,   335,   211,    -1,   142,
     335,    -1,   184,    39,     8,   310,    42,   222,    -1,   184,
      39,     8,    42,   222,    -1,   184,    39,     8,   310,   146,
      -1,   184,    39,     8,   146,    -1,   174,   179,   162,    -1,
     174,   179,   163,    -1,   183,     4,   217,   115,   219,    -1,
     183,     4,   115,   219,    -1,   183,     4,   217,   137,   311,
     219,    -1,   183,     4,   137,   311,   219,    -1,   183,     4,
     217,   115,   146,    -1,   183,     4,   115,   146,    -1,   183,
       4,   217,   137,   311,   146,    -1,   183,     4,   137,   311,
     146,    -1,   217,    35,   218,    -1,   218,    -1,    39,     8,
     310,    -1,    39,     8,    -1,   132,   221,   133,    -1,   221,
      -1,   221,    35,   222,    -1,   222,    -1,   223,    -1,   239,
      -1,   242,    -1,   245,    -1,   246,    -1,   224,   233,   234,
      36,   222,    -1,   224,   233,    36,   222,    -1,   224,   234,
      36,   222,    -1,   224,    36,   222,    -1,   224,   225,    -1,
     225,    -1,   226,    -1,   230,    -1,    37,   227,    -1,   227,
      35,   228,    -1,   228,    -1,    39,     8,    38,   222,    -1,
      39,     8,   229,    38,   222,    -1,    39,     8,   310,    38,
     222,    -1,    39,     8,   310,   229,    38,   222,    -1,    40,
      39,     8,    -1,    41,   231,    -1,   231,    35,   232,    -1,
     232,    -1,    39,     8,    42,   222,    -1,    39,     8,   310,
      42,   222,    -1,    43,   222,    -1,    44,   235,    -1,    45,
     235,    -1,   235,    35,   236,    -1,   236,    -1,   222,   237,
     238,    -1,   222,   237,   238,    50,   335,    -1,    -1,    46,
      -1,    47,    -1,    -1,    48,    -1,    49,    -1,    51,   240,
      53,   222,    -1,    52,   240,    53,   222,    -1,   240,    35,
     241,    -1,   241,    -1,    39,     8,    38,   222,    -1,    39,
       8,   310,    38,   222,    -1,    54,   114,   221,   115,   243,
      55,    39,     8,    36,   222,    -1,    54,   114,   221,   115,
     243,    55,    36,   222,    -1,   243,   244,    -1,   244,    -1,
      56,   311,    36,   222,    -1,    56,    39,     8,    57,   311,
      36,   222,    -1,    58,   114,   221,   115,    59,   222,    60,
     222,    -1,   246,    61,   247,    -1,   247,    -1,   247,    62,
     248,    -1,   248,    -1,   249,    85,   249,    -1,   249,    86,
     249,    -1,   249,    87,   249,    -1,   249,    88,   249,    -1,
     249,    89,   249,    -1,   249,    90,   249,    -1,   249,    91,
     249,    -1,   249,    92,   249,    -1,   249,    93,   249,    -1,
     249,    94,   249,    -1,   249,    95,   249,    -1,   249,    96,
     249,    -1,   249,    97,   249,    -1,   249,    98,   249,    -1,
     249,    99,   249,    -1,   249,    -1,   250,    65,   250,    -1,
     250,    -1,   250,    66,   251,    -1,   250,    67,   251,    -1,
     251,    -1,   251,    68,   252,    -1,   251,    69,   252,    -1,
     251,    70,   252,    -1,   251,    71,   252,    -1,   252,    -1,
     252,    73,   253,    -1,   252,    72,   253,    -1,   253,    -1,
     253,    74,   254,    -1,   253,    75,   254,    -1,   254,    -1,
     255,    63,   311,    -1,   255,    -1,   256,    84,   311,    -1,
     256,    -1,   257,    64,   309,    -1,   257,    -1,   258,    83,
     309,    -1,   258,    -1,    67,   258,    -1,    66,   258,    -1,
     259,    -1,   260,    -1,   264,    -1,   261,    -1,    80,   132,
     221,   133,    -1,    81,   132,   221,   133,    -1,    82,   132,
     221,   133,    -1,   262,   132,   133,    -1,   262,   132,   221,
     133,    -1,   263,    -1,   262,   263,    -1,    31,    26,    27,
      32,    -1,    76,    -1,    76,   265,    -1,    77,   265,    -1,
     265,    -1,   265,    76,   266,    -1,   265,    77,   266,    -1,
     266,    -1,   267,    -1,   277,    -1,   268,   278,    -1,   271,
     278,    -1,   269,   274,    -1,   270,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   152,    -1,   153,
      -1,   101,   274,    -1,   274,    -1,   272,   274,    -1,   273,
      -1,   108,    -1,   151,    -1,   154,    -1,   155,    -1,   150,
      -1,   102,    -1,   315,    -1,   275,    -1,   337,    -1,   276,
      -1,   109,    -1,    12,    -1,    13,    -1,   279,   278,    -1,
      -1,   278,    78,   221,    79,    -1,   280,    -1,   282,    -1,
     283,    -1,   284,    -1,   287,    -1,   289,    -1,   285,    -1,
     286,    -1,   281,    -1,   336,    -1,   332,    -1,   333,    -1,
     334,    -1,    39,     8,    -1,   114,   221,   115,    -1,   114,
     115,    -1,   100,    -1,   160,   132,   221,   133,    -1,   161,
     132,   221,   133,    -1,     4,   115,    -1,     4,   288,   115,
      -1,   288,    35,   222,    -1,   222,    -1,   290,    -1,   301,
      -1,   291,    -1,   298,    -1,   299,    -1,   116,     5,   292,
     117,    -1,   116,     5,   292,   120,   296,   119,     5,   120,
      -1,    -1,   292,     6,   118,   293,    -1,   128,   294,   129,
      -1,   130,   295,   131,    -1,    -1,   294,   219,    -1,   294,
      34,    -1,   294,   297,    -1,    -1,   295,   219,    -1,   295,
      33,    -1,   295,   297,    -1,    -1,   296,   290,    -1,   296,
     219,    -1,   296,   300,    -1,   296,   297,    -1,    11,    -1,
      10,    -1,   126,    -1,   127,    -1,     9,    -1,    22,    -1,
     125,    15,    24,    -1,    23,    -1,   302,    -1,   303,    -1,
     305,    -1,   306,    -1,   307,    -1,   308,    -1,   121,   132,
     221,   133,    -1,    17,   132,   304,   133,    -1,    17,   132,
     133,    -1,   122,   132,   221,   133,   132,   304,   133,    -1,
     122,   132,   221,   133,   132,   133,    -1,   221,    -1,    16,
     132,   221,   133,    -1,    16,   132,   133,    -1,   123,   132,
     221,   133,   132,   221,   133,    -1,   123,   132,   221,   133,
     132,   133,    -1,   124,   132,   221,   133,    -1,   149,   132,
     221,   133,    -1,    25,   132,   221,   133,    -1,    25,   132,
     133,    -1,   148,   132,   221,   133,   132,   221,   133,    -1,
     148,   132,   221,   133,   132,   133,    -1,   314,   166,    -1,
     314,    -1,    57,   311,    -1,   313,   312,    -1,   313,    -1,
     138,    -1,   168,    -1,   167,    -1,   166,    -1,   314,    -1,
     315,    -1,   139,    -1,   337,    -1,   317,    -1,   325,    -1,
     321,    -1,   327,    -1,   323,    -1,   320,    -1,   319,    -1,
     318,    -1,   316,    -1,   113,   115,    -1,   143,   115,    -1,
     143,   325,   115,    -1,   143,   327,   115,    -1,   112,   115,
      -1,   111,   115,    -1,   110,   115,    -1,   110,    14,   115,
      -1,   110,     7,   115,    -1,   144,   115,    -1,   144,   322,
     115,    -1,   144,   322,    35,   331,   115,    -1,   329,    -1,
     109,    -1,   159,   324,   115,    -1,   329,    -1,   145,   115,
      -1,   145,   326,   115,    -1,   145,   326,    35,   331,   115,
      -1,   145,   326,    35,   331,   140,   115,    -1,   330,    -1,
     109,    -1,   158,   328,   115,    -1,   330,    -1,   337,    -1,
     337,    -1,   337,    -1,    18,    -1,    19,    -1,    20,    -1,
       7,    -1,     7,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   448,   448,   449,   450,   451,   456,   461,   471,   478,
     485,   496,   499,   501,   502,   503,   504,   507,   509,   510,
     516,   527,   528,   529,   530,   531,   532,   533,   538,   539,
     544,   549,   557,   561,   569,   573,   581,   586,   590,   598,
     602,   610,   615,   619,   627,   631,   639,   647,   655,   660,
     665,   669,   676,   681,   690,   694,   702,   707,   711,   715,
     723,   728,   733,   738,   747,   751,   760,   765,   770,   775,
     780,   785,   790,   795,   804,   809,   819,   823,   831,   839,
     847,   865,   873,   874,   875,   876,   877,   882,   886,   890,
     894,   901,   907,   911,   912,   918,   925,   929,   937,   943,
     949,   955,   965,   974,   981,   986,   994,  1000,  1010,  1018,
    1022,  1030,  1035,  1045,  1049,  1057,  1058,  1060,  1066,  1075,
    1077,  1084,  1088,  1095,  1099,  1107,  1113,  1123,  1128,  1136,
    1141,  1150,  1154,  1162,  1170,  1184,  1189,  1203,  1213,  1217,
    1221,  1225,  1229,  1233,  1237,  1241,  1245,  1249,  1253,  1257,
    1261,  1265,  1269,  1273,  1278,  1282,  1287,  1291,  1295,  1300,
    1304,  1308,  1312,  1316,  1321,  1325,  1329,  1334,  1338,  1342,
    1347,  1351,  1356,  1360,  1365,  1369,  1374,  1378,  1383,  1389,
    1393,  1398,  1399,  1400,  1407,  1411,  1415,  1423,  1428,  1436,
    1437,  1443,  1448,  1454,  1460,  1473,  1478,  1484,  1497,  1502,
    1503,  1508,  1513,  1522,  1534,  1545,  1549,  1553,  1557,  1561,
    1565,  1569,  1577,  1585,  1603,  1611,  1620,  1624,  1628,  1632,
    1636,  1644,  1656,  1657,  1662,  1677,  1682,  1689,  1704,  1715,
    1726,  1729,  1738,  1739,  1740,  1741,  1742,  1743,  1744,  1745,
    1750,  1751,  1756,  1757,  1758,  1763,  1775,  1789,  1797,  1805,
    1813,  1821,  1826,  1833,  1838,  1847,  1848,  1855,  1856,  1857,
    1862,  1874,  1903,  1906,  1932,  1936,  1946,  1949,  1954,  1959,
    1970,  1973,  1978,  1983,  1996,  1999,  2016,  2033,  2038,  2048,
    2049,  2050,  2054,  2058,  2064,  2080,  2104,  2117,  2118,  2119,
    2120,  2121,  2122,  2127,  2145,  2159,  2171,  2180,  2191,  2196,
    2209,  2221,  2229,  2240,  2250,  2260,  2273,  2285,  2293,  2304,
    2311,  2322,  2330,  2337,  2344,  2353,  2355,  2357,  2363,  2367,
    2372,  2380,  2396,  2397,  2398,  2399,  2400,  2401,  2402,  2403,
    2404,  2409,  2419,  2425,  2434,  2447,  2457,  2467,  2473,  2479,
    2489,  2495,  2501,  2511,  2512,  2520,  2530,  2535,  2541,  2547,
    2553,  2565,  2566,  2574,  2584,  2589,  2594,  2599,  2604,  2617,
    2630,  2643,  2649,  2662
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<qualified name>\"", 
  "\"<function>(\"", "\"<tag name>\"", "\"<attribute name>\"", 
  "\"'...'\"", "\"<variable name>\"", "\"<char>\"", "\"&#XXX;\"", 
  "\"<predefined entity ref>\"", "\"<ns>:*\"", "\"*:<local name>\"", 
  "\"<local name>\"", "\"<processing instruction target>\"", 
  "\"attribute <name> {\"", "\"element <name> {\"", 
  "\"<integer number>\"", "\"<decimal number>\"", "\"<double number>\"", 
  "\"xquery version <ver>\"", "\"<!-- ... -->\"", "\"<![CDATA[...]]>\"", 
  "\"...?>\"", "\"processing-instruction <pi> {\"", "\"<pragma name>\"", 
  "\"<pragma content>\"", "\"(: comment :)\"", "_XQUERY_WHITESPACE_", 
  "_XQUERY_ERROR_", "\"(#\"", "\"#)\"", "\"''\"", "\"\"\"\"", "\",\"", 
  "\"return\"", "\"for\"", "\"in\"", "\"$\"", "\"at\"", "\"let\"", 
  "\":=\"", "\"where\"", "\"order by\"", "\"stable order by\"", 
  "\"ascending\"", "\"descending\"", "\"empty greatest\"", 
  "\"empty least\"", "\"collation\"", "\"some\"", "\"every\"", 
  "\"satisfies\"", "\"typeswitch\"", "\"default\"", "\"case\"", "\"as\"", 
  "\"if\"", "\"then\"", "\"else\"", "\"or\"", "\"and\"", 
  "\"instance of\"", "\"castable as\"", "\"to\"", 
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
  "\"\" (open)\"", "\"\" (close)\"", "\"' (open)\"", "\"' (close)\"", 
  "\"{\"", "\"}\"", "\"preserve (xmlspace)\"", "\"strip (xmlspace)\"", 
  "\"namespace\"", "\") as\"", "\"empty()\"", "\"item()\"", "\"?\"", 
  "\"import schema\"", "\"import module\"", "\"document-node(\"", 
  "\"attribute(\"", "\"element(\"", "\"external\"", 
  "\"module namespace\"", "\"processing-instruction {\"", "\"comment {\"", 
  "\"ancestor-or-self::\"", "\"ancestor::\"", "\"following-sibling::\"", 
  "\"following::\"", "\"preceding-sibling::\"", "\"preceding::\"", 
  "\";\"", "\"default element\"", "\"schema-element(\"", 
  "\"schema-attribute(\"", "\"ordered {\"", "\"unordered {\"", 
  "\"preserve (construction)\"", "\"strip (construction)\"", 
  "\"unordered\"", "\"ordered\"", "\"? (occurrence)\"", 
  "\"+ (occurrence)\"", "\"* (occurrence)\"", "\"encoding\"", 
  "\"preserve (copy-namespaces)\"", "\"no-preserve\"", "\"inherit\"", 
  "\"no-inherit\"", "\"declare\"", "\"boundary-space\"", 
  "\"default collation\"", "\"default function\"", "\"base-uri\"", 
  "\"construction\"", "\"ordering\"", "\"default order\"", 
  "\"copy-namespaces\"", "\"declare function\"", "\"declare variable\"", 
  "\"declare option\"", "_EOF_", "$accept", "Module", "VersionDecl", 
  "MainModule", "LibraryModule", "ModuleDecl", "Prolog", "Setters", 
  "VariablesAndFunctions", "Setter", "Import", "Separator", 
  "NamespaceDecl", "BoundarySpaceDecl", "DefaultNamespaceDecl", 
  "OptionDecl", "OrderingModeDecl", "EmptyOrderDecl", 
  "CopyNamespacesDecl", "PreserveMode", "InheritMode", 
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport", 
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl", 
  "ConstructionDecl", "FunctionDecl", "ParamList", "Param", 
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
static const unsigned short yytoknum[] =
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
     435,   436,   437,   438,   439,   440,   441
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   187,   188,   188,   188,   188,   189,   189,   190,   191,
     192,   193,   194,   194,   194,   194,   194,   195,   195,   195,
     195,   196,   196,   196,   196,   196,   196,   196,   197,   197,
     198,   199,   200,   200,   201,   201,   202,   203,   203,   204,
     204,   205,   206,   206,   207,   207,   208,   209,   210,   210,
     210,   210,   211,   211,   212,   212,   213,   213,   213,   213,
     214,   214,   214,   214,   215,   215,   216,   216,   216,   216,
     216,   216,   216,   216,   217,   217,   218,   218,   219,   220,
     221,   221,   222,   222,   222,   222,   222,   223,   223,   223,
     223,   224,   224,   225,   225,   226,   227,   227,   228,   228,
     228,   228,   229,   230,   231,   231,   232,   232,   233,   234,
     234,   235,   235,   236,   236,   237,   237,   237,   238,   238,
     238,   239,   239,   240,   240,   241,   241,   242,   242,   243,
     243,   244,   244,   245,   246,   246,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   249,   249,   250,   250,   250,   251,
     251,   251,   251,   251,   252,   252,   252,   253,   253,   253,
     254,   254,   255,   255,   256,   256,   257,   257,   258,   258,
     258,   259,   259,   259,   260,   260,   260,   261,   261,   262,
     262,   263,   264,   264,   264,   264,   265,   265,   265,   266,
     266,   267,   267,   268,   268,   269,   269,   269,   269,   269,
     269,   269,   270,   270,   271,   271,   272,   272,   272,   272,
     272,   273,   274,   274,   275,   275,   276,   276,   276,   277,
     278,   278,   279,   279,   279,   279,   279,   279,   279,   279,
     280,   280,   281,   281,   281,   282,   283,   283,   284,   285,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   290,
     291,   291,   292,   292,   293,   293,   294,   294,   294,   294,
     295,   295,   295,   295,   296,   296,   296,   296,   296,   297,
     297,   297,   297,   297,   298,   299,   300,   301,   301,   301,
     301,   301,   301,   302,   303,   303,   303,   303,   304,   305,
     305,   305,   305,   306,   307,   308,   308,   308,   308,   309,
     309,   310,   311,   311,   311,   312,   312,   312,   313,   313,
     313,   314,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   316,   317,   317,   317,   318,   319,   320,   320,   320,
     321,   321,   321,   322,   322,   323,   324,   325,   325,   325,
     325,   326,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     1,     2,     4,     2,     2,
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
       0,     2,     2,     2,     0,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     7,     6,     1,     4,
       3,     7,     6,     4,     4,     4,     3,     7,     6,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     2,     2,     2,     3,     3,
       2,     3,     5,     1,     1,     3,     1,     2,     3,     5,
       6,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
      12,     0,     0,     0,    12,     4,     5,    12,     0,    17,
      30,     0,     6,     0,     1,     2,     3,     9,   363,     0,
     362,   227,   228,     0,     0,   358,   359,   360,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     192,     0,     0,     0,     0,   248,     0,   221,   205,   206,
     207,   208,   209,   216,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   217,   210,   211,   218,   219,     0,     0,     0,
       0,     8,    79,    81,    82,     0,    92,    93,    94,    83,
      84,    85,    86,   135,   137,   153,   155,   158,   163,   166,
     169,   171,   173,   175,   177,   180,   181,   183,     0,   189,
     182,   195,   198,   199,   230,     0,   204,   230,     0,   215,
     213,   223,   225,   200,   230,   232,   240,   233,   234,   235,
     238,   239,   236,   237,   255,   257,   258,   259,   256,   287,
     288,   289,   290,   291,   292,   222,   330,   322,   329,   328,
     327,   324,   326,   323,   325,   242,   243,   244,   241,   224,
       0,     0,     0,    11,     0,     0,     0,    21,     0,    25,
      26,    27,    22,    23,    28,    29,    24,     0,     0,   251,
     254,     0,     0,     0,     0,     0,     0,    95,    97,   245,
       0,   103,   105,     0,     0,   124,     0,     0,     0,   179,
     178,   193,   194,     0,     0,     0,   212,     0,     0,   337,
     336,   335,   331,   247,     0,   262,     0,     0,     0,     0,
       0,   332,     0,     0,   344,   340,     0,   343,   355,   352,
     347,     0,   351,   356,     0,     0,     0,   354,     0,   346,
       0,     0,     0,     0,     0,     0,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   190,     0,     0,   201,   203,   202,   214,
     229,   361,     0,     0,     0,    50,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,    16,     7,     0,
       0,   252,   300,     0,   295,   298,     0,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   339,   338,   246,     0,     0,     0,     0,
       0,   285,   333,   334,     0,   341,     0,   348,     0,     0,
     353,   345,     0,     0,    80,    90,   108,   115,   109,   112,
     110,     0,     0,     0,   134,   136,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   154,   156,   157,   159,   160,   161,   162,   165,   164,
     167,   168,   314,   320,   170,   313,   318,   319,   321,   172,
     174,   310,   176,   187,     0,   196,   197,     0,     0,    55,
      48,     0,    51,     0,    58,     0,     0,    32,    33,    46,
       0,    47,    64,    65,    38,    37,    39,    40,    42,    43,
       0,     0,     0,     0,    20,    18,    19,    10,   253,   299,
     294,   305,   191,     0,     0,     0,     0,     0,    96,     0,
       0,   104,     0,     0,   123,   121,   122,     0,     0,   184,
     185,   186,     0,   260,   274,   293,     0,     0,   303,     0,
     357,     0,     0,   304,   249,   250,   116,   117,   118,     0,
      88,     0,    89,   317,   316,   315,   312,   309,   188,     0,
      54,    49,    52,     0,     0,     0,    34,    35,     0,     0,
       0,     0,     0,    75,     0,    36,    98,     0,   311,     0,
       0,     0,   106,     0,   125,     0,     0,     0,   130,     0,
       0,     0,     0,     0,   342,   349,     0,     0,   119,   120,
     113,   111,    87,   231,    53,    57,    31,    44,    45,    41,
      77,     0,    71,    67,     0,     0,     0,     0,     0,    63,
       0,   102,    99,   100,     0,   107,   126,     0,     0,     0,
     129,     0,   266,   270,   263,   283,   280,   279,   286,     0,
     281,   282,   276,   275,   278,   277,   297,     0,   302,     0,
     350,   308,     0,     0,    56,    76,     0,    73,    69,    74,
      70,    66,     0,    61,     0,    62,   101,     0,     0,     0,
       0,     0,     0,     0,     0,   296,   301,   307,   114,    78,
      72,    68,    60,     0,   131,   128,     0,   133,   268,   264,
     267,   269,   272,   265,   271,   273,   261,     0,     0,     0,
     127,   132
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,     9,   163,   164,
     165,    12,   166,   167,   168,   311,   169,   170,   171,   440,
     549,   172,   173,   174,   422,   294,   175,   312,   176,   313,
     512,   513,   553,    81,   325,    83,    84,    85,    86,    87,
     187,   188,   456,    88,   191,   192,   248,   249,   368,   369,
     488,   540,    89,   194,   195,    90,   527,   528,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   286,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   181,   133,   134,   135,   346,   574,   612,   613,   531,
     584,   136,   137,   585,   138,   139,   140,   326,   141,   142,
     143,   144,   410,   457,   404,   496,   405,   406,   145,   146,
     147,   148,   149,   150,   151,   226,   152,   238,   153,   231,
     154,   236,   227,   232,   479,   155,   156,   157,   295,   158,
     159
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -503
static const short yypact[] =
{
       5,  -116,    37,    41,   -90,  -503,  -503,  -503,  1987,   -98,
    -503,    81,  -503,   -17,  -503,  -503,  -503,  -503,  -503,   556,
    -503,  -503,  -503,   -37,   -34,  -503,  -503,  -503,  -503,    -3,
     210,   205,   254,   225,   228,   228,   157,   170,  2146,  2146,
    2305,  2305,   141,   143,   167,  -503,    11,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,    25,   174,   176,   178,   715,
     297,   198,   216,   218,   221,   296,   -80,    22,    24,   260,
     263,  -503,  -503,  -503,  -503,  -503,  -503,   397,   397,   277,
     278,  -503,   376,  -503,  -503,   233,  -503,  -503,  -503,  -503,
    -503,  -503,   351,   352,  -503,   270,   184,   190,    35,   212,
    -503,   350,   331,   354,   333,  -503,  -503,  -503,   -15,  -503,
    -503,   231,  -503,  -503,  -503,    11,  -503,  -503,    11,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
      21,    15,   162,    96,   264,   264,   264,  -503,   264,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,   264,   412,  -503,
    -503,    13,   874,  1033,  1192,   394,   414,   388,  -503,  -503,
     416,   390,  -503,   418,    27,  -503,    32,  1987,  1987,  -503,
    -503,   231,   231,  1987,  1987,  1987,  -503,   312,   313,  -503,
    -503,  -503,  -503,  -503,    29,  -503,  1987,  1987,  1987,  1987,
     405,  -503,   315,   316,  -503,  -503,   185,  -503,  -503,  -503,
    -503,   194,  -503,  -503,  1987,  1987,   317,  -503,   318,  -503,
    1987,  1987,  1987,  1987,  1987,  1987,  1987,  -503,   202,   400,
    2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,
    2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,
    2146,  2146,  2146,  2146,  2146,  2146,  2146,  2146,    63,    63,
     397,   397,  1351,  -503,  2305,  2305,   359,  -503,   359,  -503,
     359,  -503,   424,   303,   412,   401,   428,   401,   430,   310,
     179,   412,   311,   412,   153,   156,   274,   154,   444,   410,
     447,   264,   264,   264,  -503,  -503,  -503,  -503,  -503,   264,
    1987,  -503,  -503,     1,  -503,   376,   319,  -503,    20,   419,
      18,   205,    40,   225,    12,   228,  1987,  1987,   195,   197,
      26,    46,    52,  -503,  -503,  -503,    43,    56,    57,    58,
      59,  -503,  -503,  -503,   397,  -503,   397,  -503,    66,    67,
    -503,  -503,    95,   123,  -503,  -503,  -503,   282,   420,  -503,
     420,  1987,   417,  1987,   352,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,   267,   190,   190,    35,    35,    35,    35,   212,   212,
    -503,  -503,  -503,  -503,  -503,   129,  -503,  -503,  -503,  -503,
    -503,   288,  -503,  -503,   132,  -503,  -503,  1987,   371,  -503,
     401,   412,   422,   373,   422,   374,   412,  -503,  -503,  -503,
     412,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
     426,    34,   454,   456,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  1987,   425,    63,   427,     7,  -503,  1987,
     429,  -503,  1987,   431,  -503,  -503,  -503,   411,   407,  -503,
    -503,  -503,   355,  -503,  -503,  -503,   336,   342,  -503,   362,
    -503,   -77,   343,  -503,  -503,  -503,  -503,  -503,   287,  1987,
    -503,  1987,  -503,  -503,  -503,  -503,  -503,  -503,  -503,    -2,
    -503,   422,  -503,   412,   412,   412,  -503,  -503,   213,   468,
     -72,    63,   -25,  -503,   -11,  -503,  -503,   470,  -503,  1987,
    1987,   441,  -503,  1987,  -503,  1987,     3,   332,  -503,  1987,
     125,    61,  1510,  1669,  -503,  -503,   365,  1828,  -503,  -503,
     432,  -503,  -503,  -503,  -503,   401,  -503,  -503,  -503,  -503,
     433,  1987,  -503,  -503,   -43,   442,   -28,    63,  1987,  -503,
      -8,  -503,  -503,  -503,  1987,  -503,  -503,   475,   448,    60,
    -503,   434,  -503,  -503,  -503,  -503,  -503,  -503,  -503,   480,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,   353,  -503,   133,
    -503,  -503,   159,   412,   422,  -503,   161,  -503,  -503,  -503,
    -503,  -503,   -27,  -503,  1987,  -503,  -503,   435,  1987,  1987,
     479,  1987,   116,   200,   368,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,    63,  -503,  -503,   453,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,   457,  1987,  1987,
    -503,  -503
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -503,  -503,  -503,   491,   492,  -503,   490,  -503,  -503,  -503,
    -503,  -147,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,  -503,  -288,  -503,  -503,  -503,  -503,  -503,
    -503,   -57,  -502,  -503,     0,   -19,  -503,  -503,   423,  -503,
    -503,   168,    45,  -503,  -503,   172,  -503,   255,   261,    23,
    -503,  -503,  -503,   474,   180,  -503,  -503,   -16,  -503,  -503,
     266,   262,   118,   247,   122,    33,   119,   120,  -503,  -503,
    -503,   360,  -503,  -503,  -503,  -503,   409,  -503,   361,   121,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,    -9,  -503,  -503,
    -503,   -38,  -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,
    -503,  -503,  -503,   -13,  -503,  -503,  -503,  -503,  -503,  -503,
    -209,  -503,  -503,  -503,  -503,  -503,  -503,   -12,  -503,  -503,
    -503,  -503,   238,  -319,  -272,  -503,  -503,   127,  -274,  -503,
    -503,  -503,  -503,  -503,  -503,  -503,  -503,  -503,   455,  -503,
     458,  -503,   445,   449,   166,  -503,  -503,  -503,  -158,  -503,
     -66
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short yytable[] =
{
     180,   228,   233,   297,   407,   407,    18,   409,    82,   424,
     555,   233,   228,   460,    18,   463,    30,   314,   315,   316,
     319,   317,   291,    21,    22,    18,     1,    18,   291,   582,
     318,   558,   207,   242,   604,   221,   242,   206,   535,   208,
      10,    14,   567,   160,   161,   520,   455,   454,   320,   472,
     462,    13,   598,    11,   601,   242,   453,     2,   454,   214,
     551,   242,   335,   536,   242,    68,    18,   335,   178,   455,
     575,   576,   577,   509,   552,   455,   162,   543,    77,   288,
     336,   242,   459,    28,   578,   337,   290,   242,   177,   551,
     556,   242,   242,   242,   242,   182,   609,   455,   183,   610,
     621,   242,   242,   597,   551,   551,   287,   274,   275,   289,
     630,   634,   557,    55,    56,    57,    58,   282,   600,   620,
      54,    55,    56,    57,    58,   575,   576,   577,   321,   184,
     242,   224,   501,   229,   449,   559,   420,   225,   605,   230,
     209,   402,   403,   429,   345,   431,    66,    67,    68,   510,
     628,   296,     2,   451,    66,    67,    68,   292,   242,   469,
     473,    77,    78,   474,   444,   445,   446,   242,   242,    77,
      78,   511,   447,    55,    56,    57,    58,    60,   293,   470,
     579,   407,   323,   518,   328,   471,    65,   580,   581,   475,
     476,   477,   478,   551,   242,   560,   242,   338,   339,   482,
     483,   402,   403,   340,   341,   342,    66,    67,    68,   575,
     576,   577,   408,   408,   408,   408,   347,   348,   349,   350,
     354,    77,    78,   364,   365,   366,   367,   367,   484,   356,
     242,   595,   242,   632,   358,   359,   185,   407,   371,   554,
     362,   363,   580,   581,   186,   629,   245,   246,   551,   267,
     268,   269,   407,   572,   568,   573,   485,   594,   270,   271,
     272,   273,   189,   502,   190,   498,   616,   193,   506,   243,
      31,   197,   507,   203,    33,   204,   244,   245,   246,   308,
     309,   310,   414,   407,   198,   602,   276,   277,   480,   210,
     480,   211,   617,   212,   619,   493,   494,   495,   298,   205,
     355,   448,   215,   394,   395,   396,   397,   284,   285,   357,
     467,   220,   468,   427,   428,   432,   433,   465,   466,   299,
     434,   435,   436,   437,   438,   439,   580,   581,   486,   487,
     216,   633,   551,   268,   269,   538,   539,   300,   301,   302,
     303,   304,   305,   306,   307,   544,   545,   546,   217,   407,
     218,   637,   490,   219,   492,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   547,   548,   569,   526,   408,
     392,   393,   234,   398,   399,   235,   400,   401,   199,   200,
      18,   201,   202,   631,   635,   415,   416,   411,   411,   240,
     241,   242,   250,   278,   251,   279,   281,   499,   280,   291,
      10,   329,   330,   331,   332,   333,   334,   343,   344,   351,
     352,   353,   360,   361,   516,   618,   373,   417,   418,   419,
     522,   421,   423,   524,   425,   408,   426,   430,   441,   442,
     443,   452,   450,   491,   497,   489,   500,   503,   504,   505,
     408,   508,   514,   515,   517,   519,   529,   526,   532,   525,
     367,   523,   542,   530,   533,   537,   550,   534,   561,   564,
     590,   509,   593,   607,   608,   614,   615,   626,   636,   638,
     455,   408,   623,   639,   611,    15,    16,    17,   599,   458,
     562,   563,   521,   372,   565,   461,   566,   370,   247,   196,
     571,   570,   541,   375,   391,   464,   374,   283,   583,   412,
     587,   222,   481,   239,   223,     0,   237,     0,     0,     0,
       0,     0,     0,   589,     0,     0,     0,   592,     0,   603,
       0,     0,     0,     0,     0,   606,     0,     0,     0,     0,
       0,   596,     0,     0,     0,     0,     0,   408,     0,    18,
      19,     0,     0,    20,     0,     0,     0,     0,    21,    22,
       0,     0,    23,    24,    25,    26,    27,     0,    28,     0,
       0,    29,     0,     0,     0,   622,     0,    30,     0,   624,
     625,     0,   627,    31,     0,    32,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    35,     0,
      36,     0,     0,     0,    37,     0,     0,     0,     0,   640,
     641,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,     0,     0,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,   179,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,    77,    78,    79,    80,    18,    19,
       0,     0,    20,     0,     0,     0,     0,    21,    22,     0,
       0,    23,    24,    25,    26,    27,     0,    28,     0,     0,
      29,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,    31,     0,    32,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,     0,    36,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
     213,    60,     0,     0,     0,     0,    61,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,    77,    78,    79,    80,    18,    19,     0,
       0,    20,     0,     0,     0,     0,    21,    22,     0,     0,
      23,    24,    25,    26,    27,     0,    28,     0,     0,    29,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,    31,     0,    32,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,     0,    36,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,     0,     0,    42,    43,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     0,
      60,     0,     0,     0,     0,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     0,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    68,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,    77,    78,    79,    80,    18,    19,     0,     0,
      20,     0,     0,     0,     0,    21,    22,     0,     0,    23,
      24,    25,    26,    27,     0,    28,     0,     0,    29,     0,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
      31,     0,    32,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,     0,    36,     0,     0,
       0,    37,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,     0,    60,
       0,     0,     0,     0,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,    68,     0,
       0,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,    77,    78,    79,    80,    18,    19,     0,     0,    20,
       0,     0,     0,     0,    21,    22,     0,     0,    23,    24,
      25,    26,    27,     0,    28,     0,     0,    29,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,    31,
       0,    32,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,     0,    36,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
       0,     0,    42,    43,    44,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,     0,    60,     0,
       0,     0,     0,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     0,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,     0,     0,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
      77,    78,    79,    80,    18,    19,     0,     0,    20,     0,
       0,     0,     0,    21,    22,     0,     0,    23,    24,    25,
      26,    27,     0,    28,     0,     0,    29,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,    31,     0,
      32,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    35,     0,    36,     0,     0,     0,    37,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
       0,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,     0,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,     0,     0,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,    77,
      78,    79,    80,    18,    19,     0,     0,    20,     0,     0,
       0,     0,    21,    22,     0,     0,    23,    24,    25,    26,
      27,     0,    28,     0,     0,    29,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,    31,     0,    32,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,     0,    36,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,     0,     0,
      42,    43,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,     0,    60,     0,     0,     0,
       0,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,   586,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,    68,     0,     0,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,    77,    78,
      79,    80,    18,    19,     0,     0,    20,     0,     0,     0,
       0,    21,    22,     0,     0,    23,    24,    25,    26,    27,
       0,    28,     0,     0,    29,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,    31,     0,    32,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,    35,     0,    36,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,     0,     0,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,     0,    60,     0,     0,     0,     0,
      61,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,   588,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,    68,     0,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,    77,    78,    79,
      80,    18,    19,     0,     0,    20,     0,     0,     0,     0,
      21,    22,     0,     0,    23,    24,    25,    26,    27,     0,
      28,     0,     0,    29,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,    32,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      35,     0,    36,     0,     0,     0,    37,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,     0,     0,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,     0,    60,     0,     0,     0,     0,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,   591,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,    67,    68,     0,     0,    69,    70,    71,    72,
      73,    74,    75,    76,     0,     0,    77,    78,    79,    80,
      18,    19,     0,     0,    20,     0,     0,     0,     0,    21,
      22,     0,     0,    23,    24,    25,    26,    27,     0,    28,
       0,     0,    29,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,    31,     0,    32,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
       0,    36,     0,     0,     0,    37,     0,     0,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,     0,    42,    43,    44,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,     0,    60,     0,     0,     0,     0,    61,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,    68,     0,     0,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,    77,    78,    79,    80,    18,
      19,     0,     0,    20,     0,     0,     0,     0,    21,    22,
       0,     0,    23,    24,    25,    26,    27,     0,    28,     0,
       0,    29,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,     0,     0,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,     0,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,     0,     0,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,    77,    78,    79,    80,    18,    19,
       0,     0,    20,     0,     0,     0,     0,    21,    22,     0,
       0,    23,    24,    25,    26,    27,     0,    28,     0,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
       0,    60,     0,     0,     0,     0,    61,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,     0,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,    77,    78,    79,    80
};

static const short yycheck[] =
{
      19,    67,    68,   161,   278,   279,     3,   279,     8,   297,
      35,    77,    78,   332,     3,   334,    31,   164,   165,   166,
     178,   168,     7,    12,    13,     3,    21,     3,     7,   531,
     177,    42,     7,    35,    42,   115,    35,    46,   115,    14,
     156,     0,    39,   141,   142,    38,    57,    40,    35,     6,
      38,    14,   554,   169,   556,    35,    38,   147,    40,    59,
     132,    35,    35,   140,    35,   145,     3,    35,    85,    57,
       9,    10,    11,    39,   146,    57,   174,    79,   158,   117,
      53,    35,    42,    22,    23,    53,   124,    35,     7,   132,
     115,    35,    35,    35,    35,   132,    36,    57,   132,    39,
     602,    35,    35,   146,   132,   132,   115,    72,    73,   118,
     612,   613,   137,   110,   111,   112,   113,   132,   146,   146,
     109,   110,   111,   112,   113,     9,    10,    11,   115,   132,
      35,   109,   420,   109,   133,   146,   294,   115,   146,   115,
     115,   138,   139,   301,   115,   303,   143,   144,   145,   115,
      34,   136,   147,   133,   143,   144,   145,   136,    35,   133,
     117,   158,   159,   120,   311,   312,   313,    35,    35,   158,
     159,   137,   319,   110,   111,   112,   113,   116,   157,   133,
     119,   455,   182,   455,   184,   133,   125,   126,   127,   133,
     133,   133,   133,   132,    35,   514,    35,   197,   198,   133,
     133,   138,   139,   203,   204,   205,   143,   144,   145,     9,
      10,    11,   278,   279,   280,   281,   216,   217,   218,   219,
      35,   158,   159,   242,   243,   244,   245,   246,   133,    35,
      35,   550,    35,    33,   234,   235,    26,   511,    36,   511,
     240,   241,   126,   127,    39,   129,    44,    45,   132,    65,
      66,    67,   526,   128,   526,   130,   133,   545,    68,    69,
      70,    71,     8,   421,    39,   133,   133,    39,   426,    36,
      37,   114,   430,   132,    41,   132,    43,    44,    45,   183,
     184,   185,   282,   557,   114,   557,    74,    75,   354,   115,
     356,   115,   133,   115,   133,   166,   167,   168,   136,   132,
     115,   320,     5,   270,   271,   272,   273,    76,    77,   115,
     115,    15,   115,   134,   135,   162,   163,   336,   337,   157,
     164,   165,    48,    49,   170,   171,   126,   127,    46,    47,
     132,   131,   132,    66,    67,    48,    49,   175,   176,   177,
     178,   179,   180,   181,   182,   503,   504,   505,   132,   623,
     132,   623,   371,   132,   373,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   172,   173,    55,    56,   455,
     268,   269,   132,   274,   275,   132,   276,   277,    38,    39,
       3,    40,    41,   612,   613,   284,   285,   280,   281,   132,
     132,    35,    61,    63,    62,    84,    83,   417,    64,     7,
     156,    27,     8,    35,     8,    35,     8,   115,   115,    24,
     115,   115,   115,   115,   453,   593,    36,    78,    14,   136,
     459,    40,    14,   462,    14,   511,   136,   136,     4,    39,
       3,    32,   133,    36,   166,    35,    85,    35,    85,    85,
     526,    35,     8,     7,    39,    38,    59,    56,   132,    38,
     489,    42,   491,   118,   132,   132,     8,   115,     8,    38,
     115,    39,    50,     8,    36,     5,   133,     8,   120,    36,
      57,   557,    57,    36,    60,     4,     4,     7,   555,   331,
     519,   520,   457,   248,   523,   333,   525,   246,    85,    35,
     529,   527,   489,   251,   267,   335,   250,   108,   531,   281,
     532,    66,   356,    78,    66,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,   533,    -1,    -1,    -1,   537,    -1,   558,
      -1,    -1,    -1,    -1,    -1,   564,    -1,    -1,    -1,    -1,
      -1,   551,    -1,    -1,    -1,    -1,    -1,   623,    -1,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,   604,    -1,    31,    -1,   608,
     609,    -1,   611,    37,    -1,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
      54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,   638,
     639,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,   158,   159,   160,   161,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    -1,    -1,    80,    81,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,   160,   161,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    -1,    -1,    80,    81,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,    -1,
     116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,
      -1,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
      -1,    -1,   158,   159,   160,   161,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    -1,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      77,    -1,    -1,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
      -1,   158,   159,   160,   161,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,   116,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,    -1,    -1,
     158,   159,   160,   161,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      -1,    80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,    -1,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,    -1,   158,
     159,   160,   161,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,
      -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    -1,   116,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,    -1,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,    -1,    -1,   158,   159,
     160,   161,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      -1,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,   145,    -1,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,    -1,    -1,   158,   159,   160,
     161,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    -1,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,    -1,    -1,   158,   159,   160,   161,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    -1,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    -1,    -1,    80,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,
     123,   124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,   145,    -1,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,    -1,    -1,   158,   159,   160,   161,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,   116,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,    -1,   158,   159,   160,   161,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    -1,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,    -1,    -1,   158,   159,   160,   161
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,    21,   147,   188,   189,   190,   191,   192,   193,   194,
     156,   169,   198,    14,     0,   190,   191,   193,     3,     4,
       7,    12,    13,    16,    17,    18,    19,    20,    22,    25,
      31,    37,    39,    41,    51,    52,    54,    58,    66,    67,
      76,    77,    80,    81,    82,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     116,   121,   122,   123,   124,   125,   143,   144,   145,   148,
     149,   150,   151,   152,   153,   154,   155,   158,   159,   160,
     161,   220,   221,   222,   223,   224,   225,   226,   230,   239,
     242,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   289,   290,   291,   298,   299,   301,   302,
     303,   305,   306,   307,   308,   315,   316,   317,   318,   319,
     320,   321,   323,   325,   327,   332,   333,   334,   336,   337,
     141,   142,   174,   195,   196,   197,   199,   200,   201,   203,
     204,   205,   208,   209,   210,   213,   215,     7,    85,   115,
     222,   288,   132,   132,   132,    26,    39,   227,   228,     8,
      39,   231,   232,    39,   240,   241,   240,   114,   114,   258,
     258,   265,   265,   132,   132,   132,   274,     7,    14,   115,
     115,   115,   115,   115,   221,     5,   132,   132,   132,   132,
      15,   115,   325,   327,   109,   115,   322,   329,   337,   109,
     115,   326,   330,   337,   132,   132,   328,   330,   324,   329,
     132,   132,    35,    36,    43,    44,    45,   225,   233,   234,
      61,    62,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    63,    84,
      64,    83,   132,   263,    76,    77,   278,   274,   278,   274,
     278,     7,   136,   157,   212,   335,   136,   335,   136,   157,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   202,   214,   216,   198,   198,   198,   198,   198,   335,
      35,   115,   133,   221,   133,   221,   304,   133,   221,    27,
       8,    35,     8,    35,     8,    35,    53,    53,   221,   221,
     221,   221,   221,   115,   115,   115,   292,   221,   221,   221,
     221,    24,   115,   115,    35,   115,    35,   115,   221,   221,
     115,   115,   221,   221,   222,   222,   222,   222,   235,   236,
     235,    36,   234,    36,   247,   248,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   250,   251,   251,   252,   252,   252,   252,   253,   253,
     254,   254,   138,   139,   311,   313,   314,   315,   337,   311,
     309,   314,   309,   133,   221,   266,   266,    78,    14,   136,
     335,    40,   211,    14,   211,    14,   136,   134,   135,   335,
     136,   335,   162,   163,   164,   165,    48,    49,   170,   171,
     206,     4,    39,     3,   198,   198,   198,   198,   222,   133,
     133,   133,    32,    38,    40,    57,   229,   310,   228,    42,
     310,   232,    38,   310,   241,   222,   222,   115,   115,   133,
     133,   133,     6,   117,   120,   133,   133,   133,   133,   331,
     337,   331,   133,   133,   133,   133,    46,    47,   237,    35,
     222,    36,   222,   166,   167,   168,   312,   166,   133,   221,
      85,   211,   335,    35,    85,    85,   335,   335,    35,    39,
     115,   137,   217,   218,     8,     7,   222,    39,   311,    38,
      38,   229,   222,    42,   222,    38,    56,   243,   244,    59,
     118,   296,   132,   132,   115,   115,   140,   132,    48,    49,
     238,   236,   222,    79,   335,   335,   335,   172,   173,   207,
       8,   132,   146,   219,   311,    35,   115,   137,    42,   146,
     310,     8,   222,   222,    38,   222,   222,    39,   311,    55,
     244,   222,   128,   130,   293,     9,    10,    11,    23,   119,
     126,   127,   219,   290,   297,   300,   133,   304,   133,   221,
     115,   133,   221,    50,   211,   310,   221,   146,   219,   218,
     146,   219,   311,   222,    42,   146,   222,     8,    36,    36,
      39,    60,   294,   295,     5,   133,   133,   133,   335,   133,
     146,   219,   222,    57,   222,   222,     8,   222,    34,   129,
     219,   297,    33,   131,   219,   297,   120,   311,    36,    36,
     222,   222
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		do				\
			  {				\
			    yylerrsp = yylsp;		\
			    *++yylerrsp = yyloc;	\
			    goto yyerrlab1;		\
			  }				\
			while (0)


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
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
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

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value, Location);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
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
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
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
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

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
  register const char *yys = yystr;

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
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



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
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

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
yydestruct (int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yytype, yyvaluep, yylocationp)
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;
  (void) yylocationp;

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

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  YYLTYPE *yylerrsp;

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
	short *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
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
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
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
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

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
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 457 "../src/parser/xquery.y"
    {
		if(!XPath2Utils::equals(yyvsp[-1].str,sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs");
	}
    break;

  case 7:
#line 462 "../src/parser/xquery.y"
    {
		if(!XPath2Utils::equals(yyvsp[-3].str,sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs");
		// TODO: store the encoding somewhere
	}
    break;

  case 8:
#line 472 "../src/parser/xquery.y"
    {
	}
    break;

  case 9:
#line 479 "../src/parser/xquery.y"
    {
	}
    break;

  case 10:
#line 486 "../src/parser/xquery.y"
    {
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace(yyvsp[-1].str);
		CONTEXT->setNamespaceBinding(yyvsp[-3].str,yyvsp[-1].str);
	}
    break;

  case 19:
#line 511 "../src/parser/xquery.y"
    {
		XQFunction* decl=yyvsp[-1].functDecl;
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	}
    break;

  case 31:
#line 550 "../src/parser/xquery.y"
    {
			CONTEXT->setNamespaceBinding(yyvsp[-2].str,yyvsp[0].str);
		}
    break;

  case 32:
#line 558 "../src/parser/xquery.y"
    {
			CONTEXT->setPreserveBoundarySpace(true);
		}
    break;

  case 33:
#line 562 "../src/parser/xquery.y"
    {
			CONTEXT->setPreserveBoundarySpace(false);
		}
    break;

  case 34:
#line 570 "../src/parser/xquery.y"
    {
			CONTEXT->setDefaultElementAndTypeNS(yyvsp[0].str);
		}
    break;

  case 35:
#line 574 "../src/parser/xquery.y"
    { 
			CONTEXT->setDefaultFuncNS(yyvsp[0].str);
		}
    break;

  case 37:
#line 587 "../src/parser/xquery.y"
    {
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	}
    break;

  case 38:
#line 591 "../src/parser/xquery.y"
    {
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	}
    break;

  case 39:
#line 599 "../src/parser/xquery.y"
    { 
		CONTEXT->setDefaultFLWOROrderingMode(XQStaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	}
    break;

  case 40:
#line 603 "../src/parser/xquery.y"
    { 
		CONTEXT->setDefaultFLWOROrderingMode(XQStaticContext::FLWOR_ORDER_EMPTY_LEAST);
	}
    break;

  case 42:
#line 616 "../src/parser/xquery.y"
    {
		CONTEXT->setPreserveNamespaces(true);
	}
    break;

  case 43:
#line 620 "../src/parser/xquery.y"
    {
		CONTEXT->setPreserveNamespaces(false);
	}
    break;

  case 44:
#line 628 "../src/parser/xquery.y"
    {
		CONTEXT->setInheritNamespaces(true);
	}
    break;

  case 45:
#line 632 "../src/parser/xquery.y"
    {
		CONTEXT->setInheritNamespaces(false);
	}
    break;

  case 46:
#line 640 "../src/parser/xquery.y"
    {
			CONTEXT->setDefaultCollation(yyvsp[0].str);
		}
    break;

  case 47:
#line 648 "../src/parser/xquery.y"
    {
			CONTEXT->setBaseURI(yyvsp[0].str);
		}
    break;

  case 48:
#line 656 "../src/parser/xquery.y"
    {
			CONTEXT->setNamespaceBinding(yyvsp[-1].str,yyvsp[0].str);
			CONTEXT->addSchemaLocation(yyvsp[0].str,NULL);
		}
    break;

  case 49:
#line 661 "../src/parser/xquery.y"
    {
			CONTEXT->addSchemaLocation(yyvsp[-1].str,yyvsp[0].stringList);
			CONTEXT->setNamespaceBinding(yyvsp[-2].str,yyvsp[-1].str);
		}
    break;

  case 50:
#line 666 "../src/parser/xquery.y"
    { 
			CONTEXT->addSchemaLocation(yyvsp[0].str,NULL);
		}
    break;

  case 51:
#line 670 "../src/parser/xquery.y"
    {
			CONTEXT->addSchemaLocation(yyvsp[-1].str,yyvsp[0].stringList);
		}
    break;

  case 52:
#line 677 "../src/parser/xquery.y"
    {
		yyval.stringList = new (MEMMGR) VectorOfStrings(PathanAllocator<const XMLCh*>(MEMMGR));
		yyval.stringList->push_back(yyvsp[0].str);
	}
    break;

  case 53:
#line 682 "../src/parser/xquery.y"
    {
		yyvsp[-2].stringList->push_back(yyvsp[0].str);
		yyval.stringList = yyvsp[-2].stringList;
	}
    break;

  case 54:
#line 691 "../src/parser/xquery.y"
    {
			yyval.str = yyvsp[-1].str;
		}
    break;

  case 55:
#line 695 "../src/parser/xquery.y"
    {
			yyval.str = (unsigned short*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		}
    break;

  case 56:
#line 703 "../src/parser/xquery.y"
    {
		CONTEXT->setNamespaceBinding(yyvsp[-3].str,yyvsp[-1].str);
		QP->_query->importModule(yyvsp[-1].str,yyvsp[0].stringList,CONTEXT);
	}
    break;

  case 57:
#line 708 "../src/parser/xquery.y"
    {
		yyerror("Cannot locate module without the 'at <location>' keyword");
	}
    break;

  case 58:
#line 712 "../src/parser/xquery.y"
    {
		QP->_query->importModule(yyvsp[-1].str,yyvsp[0].stringList,CONTEXT);
	}
    break;

  case 59:
#line 716 "../src/parser/xquery.y"
    {
		yyerror("Cannot locate module without the 'at <location>' keyword");
	}
    break;

  case 60:
#line 724 "../src/parser/xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable(yyvsp[-3].str,yyvsp[-2].sequenceType,yyvsp[0].dataItem,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 61:
#line 729 "../src/parser/xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable(yyvsp[-2].str,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),yyvsp[0].dataItem,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 62:
#line 734 "../src/parser/xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable(yyvsp[-2].str,yyvsp[-1].sequenceType,NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 63:
#line 739 "../src/parser/xquery.y"
    {
		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable(yyvsp[-1].str,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 64:
#line 748 "../src/parser/xquery.y"
    {
		CONTEXT->setConstructionMode(XQStaticContext::CONSTRUCTION_MODE_PRESERVE);
	}
    break;

  case 65:
#line 752 "../src/parser/xquery.y"
    {
		CONTEXT->setConstructionMode(XQStaticContext::CONSTRUCTION_MODE_STRIP);
	}
    break;

  case 66:
#line 761 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-3].str,yyvsp[-2].funcParams,yyvsp[0].dataItem,NULL, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 67:
#line 766 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-2].str,NULL,yyvsp[0].dataItem,NULL, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 68:
#line 771 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-4].str,yyvsp[-3].funcParams,yyvsp[0].dataItem,yyvsp[-1].sequenceType, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 69:
#line 776 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-3].str,NULL,yyvsp[0].dataItem,yyvsp[-1].sequenceType, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 70:
#line 781 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-3].str,yyvsp[-2].funcParams,NULL,NULL, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 71:
#line 786 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-2].str,NULL,NULL,NULL, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 72:
#line 791 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-4].str,yyvsp[-3].funcParams,NULL,yyvsp[-1].sequenceType, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 73:
#line 796 "../src/parser/xquery.y"
    {
			yyval.functDecl = new (MEMMGR) XQFunction(yyvsp[-3].str,NULL,NULL,yyvsp[-1].sequenceType, MEMMGR); 
			yyval.functDecl->setURI(CONTEXT->getUriBoundToPrefix(yyval.functDecl->getPrefix()));
		}
    break;

  case 74:
#line 805 "../src/parser/xquery.y"
    {
			yyvsp[-2].funcParams->push_back(yyvsp[0].funcParam);
			yyval.funcParams = yyvsp[-2].funcParams;
		}
    break;

  case 75:
#line 810 "../src/parser/xquery.y"
    {
			XQFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQFunction::VectorOfFunctionParameters(PathanAllocator<XQFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back(yyvsp[0].funcParam);
			yyval.funcParams = paramList;
		}
    break;

  case 76:
#line 820 "../src/parser/xquery.y"
    {
			yyval.funcParam = new (MEMMGR) XQFunction::XQFunctionParameter(yyvsp[-1].str,yyvsp[0].sequenceType,MEMMGR);
		}
    break;

  case 77:
#line 824 "../src/parser/xquery.y"
    {
			yyval.funcParam = new (MEMMGR) XQFunction::XQFunctionParameter(yyvsp[0].str,new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR) ,MEMMGR);
		}
    break;

  case 78:
#line 832 "../src/parser/xquery.y"
    { 
			yyval.dataItem = WRAP(yylsp[-1], yyvsp[-1].dataItem); 
		}
    break;

  case 79:
#line 840 "../src/parser/xquery.y"
    {
	    QP->_query->setQueryBody(yyvsp[0].dataItem);
	}
    break;

  case 80:
#line 848 "../src/parser/xquery.y"
    {
			DataItem* prevExpr=yyvsp[-2].dataItem;
			if((unsigned int)prevExpr->getType()==XQContext::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==DataItem::PARENTHESIZED)
			{
				((DataItemParenthesizedExpr *)prevExpr)->addItem(yyvsp[0].dataItem);
				yyval.dataItem = yyvsp[-2].dataItem;
			}
			else
			{
				DataItemParenthesizedExpr *dis = new (MEMMGR) DataItemParenthesizedExpr(MEMMGR);
				dis->addItem(yyvsp[-2].dataItem);
				dis->addItem(yyvsp[0].dataItem);
				yyval.dataItem = dis;
			}
		}
    break;

  case 81:
#line 866 "../src/parser/xquery.y"
    {
			yyval.dataItem = yyvsp[0].dataItem;
		}
    break;

  case 87:
#line 883 "../src/parser/xquery.y"
    {
			yyval.dataItem = FNWRAP(yylsp[-4], szFLWOR, new (MEMMGR) XQFLWOR(yyvsp[-4].variableBindingList, yyvsp[-3].dataItem, yyvsp[-2].sort, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR));
		}
    break;

  case 88:
#line 887 "../src/parser/xquery.y"
    {
			yyval.dataItem = FNWRAP(yylsp[-3], szFLWOR, new (MEMMGR) XQFLWOR(yyvsp[-3].variableBindingList, yyvsp[-2].dataItem, NULL, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR));
		}
    break;

  case 89:
#line 891 "../src/parser/xquery.y"
    {
			yyval.dataItem = FNWRAP(yylsp[-3], szFLWOR, new (MEMMGR) XQFLWOR(yyvsp[-3].variableBindingList, NULL, yyvsp[-2].sort, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR));
		}
    break;

  case 90:
#line 895 "../src/parser/xquery.y"
    {
			yyval.dataItem = FNWRAP(yylsp[-2], szFLWOR, new (MEMMGR) XQFLWOR(yyvsp[-2].variableBindingList, NULL, NULL, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR));
		}
    break;

  case 91:
#line 902 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = yyvsp[-1].variableBindingList;
			for (VectorOfVariableBinding::iterator it = yyvsp[0].variableBindingList->begin(); it != yyvsp[0].variableBindingList->end (); ++it) 
				yyvsp[-1].variableBindingList->push_back(*it);
		}
    break;

  case 95:
#line 919 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = yyvsp[0].variableBindingList;
		}
    break;

  case 96:
#line 926 "../src/parser/xquery.y"
    {
			yyval.variableBindingList->push_back(yyvsp[0].variableBinding);
		}
    break;

  case 97:
#line 930 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = new (MEMMGR) VectorOfVariableBinding(PathanAllocator<XQVariableBinding*>(MEMMGR));
			yyval.variableBindingList->push_back(yyvsp[0].variableBinding);
		}
    break;

  case 98:
#line 938 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-2].str,yyvsp[0].dataItem);
			yyval.variableBinding->_line=yylsp[-3].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 99:
#line 944 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-3].str,yyvsp[0].dataItem,yyvsp[-2].str);
			yyval.variableBinding->_line=yylsp[-4].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 100:
#line 950 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-3].str,yyvsp[0].dataItem,NULL,yyvsp[-2].sequenceType);
			yyval.variableBinding->_line=yylsp[-4].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 101:
#line 956 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-4].str,yyvsp[0].dataItem,yyvsp[-2].str,yyvsp[-3].sequenceType);
			yyval.variableBinding->_line=yylsp[-5].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 102:
#line 966 "../src/parser/xquery.y"
    { 
			yyval.str = yyvsp[0].str; 
		}
    break;

  case 103:
#line 975 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = yyvsp[0].variableBindingList;
		}
    break;

  case 104:
#line 982 "../src/parser/xquery.y"
    {
			yyvsp[-2].variableBindingList->push_back(yyvsp[0].variableBinding);
			yyval.variableBindingList = yyvsp[-2].variableBindingList;
		}
    break;

  case 105:
#line 987 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = new (MEMMGR) VectorOfVariableBinding(PathanAllocator<XQVariableBinding*>(MEMMGR));
			yyval.variableBindingList->push_back(yyvsp[0].variableBinding);
		}
    break;

  case 106:
#line 995 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,yyvsp[-2].str,yyvsp[0].dataItem);
			yyval.variableBinding->_line=yylsp[-3].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 107:
#line 1001 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,yyvsp[-3].str,yyvsp[0].dataItem,NULL,yyvsp[-2].sequenceType);
			yyval.variableBinding->_line=yylsp[-4].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 108:
#line 1011 "../src/parser/xquery.y"
    { 
			yyval.dataItem = WRAP(yylsp[-1], yyvsp[0].dataItem);
		}
    break;

  case 109:
#line 1019 "../src/parser/xquery.y"
    {
			yyval.sort=new (MEMMGR) XQSort(XQSort::unstable,yyvsp[0].sortSpecList);
		}
    break;

  case 110:
#line 1023 "../src/parser/xquery.y"
    {
			yyval.sort=new (MEMMGR) XQSort(XQSort::stable,yyvsp[0].sortSpecList);
		}
    break;

  case 111:
#line 1031 "../src/parser/xquery.y"
    {
			yyvsp[-2].sortSpecList->push_back(yyvsp[0].sortSpec);
			yyval.sortSpecList = yyvsp[-2].sortSpecList;
		}
    break;

  case 112:
#line 1036 "../src/parser/xquery.y"
    {
			yyval.sortSpecList = new (MEMMGR) XQSort::VectorOfSortSpec(PathanAllocator<XQSort::SortSpec*>(MEMMGR));
			yyval.sortSpecList->push_back(yyvsp[0].sortSpec);
		}
    break;

  case 113:
#line 1046 "../src/parser/xquery.y"
    {
			yyval.sortSpec = new (MEMMGR) XQSort::SortSpec(yyvsp[-2].dataItem,yyvsp[-1].sortModifier+yyvsp[0].sortModifier,NULL);
		}
    break;

  case 114:
#line 1050 "../src/parser/xquery.y"
    {
			yyval.sortSpec = new (MEMMGR) XQSort::SortSpec(yyvsp[-4].dataItem,yyvsp[-3].sortModifier+yyvsp[-2].sortModifier,yyvsp[0].str);
		}
    break;

  case 115:
#line 1057 "../src/parser/xquery.y"
    { yyval.sortModifier = XQSort::SortSpec::ascending; }
    break;

  case 116:
#line 1059 "../src/parser/xquery.y"
    { yyval.sortModifier = XQSort::SortSpec::ascending; }
    break;

  case 117:
#line 1061 "../src/parser/xquery.y"
    { yyval.sortModifier = XQSort::SortSpec::descending; }
    break;

  case 118:
#line 1066 "../src/parser/xquery.y"
    { 
			switch(CONTEXT->getDefaultFLWOROrderingMode())
			{
			case XQStaticContext::FLWOR_ORDER_EMPTY_LEAST:
				yyval.sortModifier = XQSort::SortSpec::empty_least; break;
			case XQStaticContext::FLWOR_ORDER_EMPTY_GREATEST:
				yyval.sortModifier = XQSort::SortSpec::empty_greatest; break;
			}
		}
    break;

  case 119:
#line 1076 "../src/parser/xquery.y"
    { yyval.sortModifier = XQSort::SortSpec::empty_greatest; }
    break;

  case 120:
#line 1078 "../src/parser/xquery.y"
    { yyval.sortModifier = XQSort::SortSpec::empty_least; }
    break;

  case 121:
#line 1085 "../src/parser/xquery.y"
    {
		yyval.dataItem = new (MEMMGR) XQQuantified(XQQuantified::some, yyvsp[-2].variableBindingList, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR);
	}
    break;

  case 122:
#line 1089 "../src/parser/xquery.y"
    {
		yyval.dataItem = new (MEMMGR) XQQuantified(XQQuantified::every, yyvsp[-2].variableBindingList, WRAP(yylsp[-1], yyvsp[0].dataItem), MEMMGR);
	}
    break;

  case 123:
#line 1096 "../src/parser/xquery.y"
    {
			yyval.variableBindingList->push_back(yyvsp[0].variableBinding);
		}
    break;

  case 124:
#line 1100 "../src/parser/xquery.y"
    {
			yyval.variableBindingList = new (MEMMGR) VectorOfVariableBinding(PathanAllocator<XQVariableBinding*>(MEMMGR));
			yyval.variableBindingList->push_back(yyvsp[0].variableBinding);
		}
    break;

  case 125:
#line 1108 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-2].str,yyvsp[0].dataItem);
			yyval.variableBinding->_line=yylsp[-3].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 126:
#line 1114 "../src/parser/xquery.y"
    {
			yyval.variableBinding = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,yyvsp[-3].str,yyvsp[0].dataItem,NULL,yyvsp[-2].sequenceType);
			yyval.variableBinding->_line=yylsp[-4].first_line;
			yyval.variableBinding->_file=QP->_query->getFile();
		}
    break;

  case 127:
#line 1124 "../src/parser/xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP(yylsp[-4], yyvsp[0].dataItem),MEMMGR->getPooledString(yyvsp[-2].str));
			yyval.dataItem = new (MEMMGR) XQTypeswitch( WRAP(yylsp[-9], yyvsp[-7].dataItem), yyvsp[-5].clauseList, defClause, MEMMGR);
		}
    break;

  case 128:
#line 1129 "../src/parser/xquery.y"
    {
			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP(yylsp[-2], yyvsp[0].dataItem),NULL);
			yyval.dataItem = new (MEMMGR) XQTypeswitch( WRAP(yylsp[-7], yyvsp[-5].dataItem), yyvsp[-3].clauseList, defClause, MEMMGR);
		}
    break;

  case 129:
#line 1137 "../src/parser/xquery.y"
    {
			yyvsp[-1].clauseList->push_back(yyvsp[0].clause);
			yyval.clauseList=yyvsp[-1].clauseList;
		}
    break;

  case 130:
#line 1142 "../src/parser/xquery.y"
    {
			yyval.clauseList=new (MEMMGR) XQTypeswitch::VectorOfClause(PathanAllocator<XQTypeswitch::Clause*>(MEMMGR));
			yyval.clauseList->push_back(yyvsp[0].clause);
		}
    break;

  case 131:
#line 1151 "../src/parser/xquery.y"
    { 
			yyval.clause = new (MEMMGR) XQTypeswitch::Clause(yyvsp[-2].sequenceType, WRAP(yylsp[-3], yyvsp[0].dataItem), NULL);
		}
    break;

  case 132:
#line 1155 "../src/parser/xquery.y"
    { 
			yyval.clause = new (MEMMGR) XQTypeswitch::Clause(yyvsp[-2].sequenceType, WRAP(yylsp[-6], yyvsp[0].dataItem), MEMMGR->getPooledString(yyvsp[-4].str));
		}
    break;

  case 133:
#line 1163 "../src/parser/xquery.y"
    { 
	        yyval.dataItem = WRAP(yylsp[-7], new (MEMMGR) DataItemIf(yyvsp[-5].dataItem, yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR));
		}
    break;

  case 134:
#line 1171 "../src/parser/xquery.y"
    {
			DataItem* prevExpr=yyvsp[-2].dataItem;
			if((unsigned int)prevExpr->getType()==XQContext::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==DataItem::OPERATOR && 
			   XPath2Utils::equals(((DataItemOperator*)prevExpr)->getOperatorName(),Or::name))
			{
				((Or*)prevExpr)->addArgument(yyvsp[0].dataItem);
				yyval.dataItem = prevExpr;
			}
			else
				yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) Or(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 136:
#line 1190 "../src/parser/xquery.y"
    {
			DataItem* prevExpr=yyvsp[-2].dataItem;
			if((unsigned int)prevExpr->getType()==XQContext::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==DataItem::OPERATOR && 
			   XPath2Utils::equals(((DataItemOperator*)prevExpr)->getOperatorName(),And::name))
			{
				((And*)prevExpr)->addArgument(yyvsp[0].dataItem);
				yyval.dataItem = prevExpr;
			}
			else
				yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) And(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 138:
#line 1214 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 139:
#line 1218 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 140:
#line 1222 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 141:
#line 1226 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 142:
#line 1230 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 143:
#line 1234 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs(yyvsp[-2].dataItem,yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 144:
#line 1238 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Equals(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 145:
#line 1242 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) NotEquals(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 146:
#line 1246 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) LessThan(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 147:
#line 1250 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) LessThanEqual(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 148:
#line 1254 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GreaterThan(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 149:
#line 1258 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) GreaterThanEqual(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 150:
#line 1262 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) NodeComparison(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR), MEMMGR));
		}
    break;

  case 151:
#line 1266 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) OrderComparison(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR), true, MEMMGR));
		}
    break;

  case 152:
#line 1270 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) OrderComparison(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR), false,MEMMGR));
		}
    break;

  case 154:
#line 1279 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Range(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 156:
#line 1288 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Plus(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 157:
#line 1292 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Minus(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 159:
#line 1301 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Multiply(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 160:
#line 1305 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Divide(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 161:
#line 1309 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) IntegerDivide(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 162:
#line 1313 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Mod(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 164:
#line 1322 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Union(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 165:
#line 1326 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Union(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 167:
#line 1335 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Intersect(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 168:
#line 1339 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) Except(packageArgs(yyvsp[-2].dataItem, yyvsp[0].dataItem, MEMMGR),MEMMGR));
		}
    break;

  case 170:
#line 1348 "../src/parser/xquery.y"
    {
		yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) DataItemInstanceOf(yyvsp[-2].dataItem,yyvsp[0].sequenceType,MEMMGR));
	}
    break;

  case 172:
#line 1357 "../src/parser/xquery.y"
    {
		yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) DataItemTreatAs(yyvsp[-2].dataItem,yyvsp[0].sequenceType,MEMMGR));
	}
    break;

  case 174:
#line 1366 "../src/parser/xquery.y"
    {
		yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) DataItemCastableAs(yyvsp[-2].dataItem,yyvsp[0].sequenceType,MEMMGR));
	}
    break;

  case 176:
#line 1375 "../src/parser/xquery.y"
    {
		yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) DataItemCastAs(yyvsp[-2].dataItem,yyvsp[0].sequenceType,MEMMGR));
	}
    break;

  case 178:
#line 1384 "../src/parser/xquery.y"
    {
			VectorOfDataItems args(PathanAllocator<DataItem*>(MEMMGR));
			args.push_back(yyvsp[0].dataItem);
			yyval.dataItem = new (MEMMGR) UnaryMinus(args, MEMMGR);
		}
    break;

  case 179:
#line 1390 "../src/parser/xquery.y"
    {
			yyval.dataItem = yyvsp[0].dataItem;
		}
    break;

  case 184:
#line 1408 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQValidate(yyvsp[-1].dataItem,DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 185:
#line 1412 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQValidate(yyvsp[-1].dataItem,DocumentCache::VALIDATION_LAX,MEMMGR));
		}
    break;

  case 186:
#line 1416 "../src/parser/xquery.y"
    {
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQValidate(yyvsp[-1].dataItem,DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 187:
#line 1424 "../src/parser/xquery.y"
    {
		// we don't support any pragma
		yyerror("This pragma is not recognized, and no alternative expression is specified [err:XQ0079]");
	}
    break;

  case 188:
#line 1429 "../src/parser/xquery.y"
    {
		// we don't support any pragma
		yyval.dataItem = yyvsp[-1].dataItem;
	}
    break;

  case 192:
#line 1449 "../src/parser/xquery.y"
    {
			DataItemNav *nav = new (MEMMGR) DataItemNav(MEMMGR);
			nav->setGotoRootFirst(true);
			yyval.dataItem = nav;
		}
    break;

  case 193:
#line 1455 "../src/parser/xquery.y"
    {
			DataItemNav* nav=getNavigation(yyvsp[0].dataItem,MEMMGR);
			nav->setGotoRootFirst(true);
			yyval.dataItem = nav;
		}
    break;

  case 194:
#line 1461 "../src/parser/xquery.y"
    {
			DataItemNav *newNavigation = getNavigation(yyvsp[0].dataItem,MEMMGR);
			newNavigation->setGotoRootFirst(true);

      NodeTest *step = new (MEMMGR) NodeTest();
      step->setTypeWildcard();
      step->setNameWildcard();
      step->setNamespaceWildcard();
      newNavigation->addStepFront(new (MEMMGR) DataItemStep(DataItemStep::DESCENDANT_OR_SELF, step, MEMMGR));        

			yyval.dataItem = newNavigation;
		}
    break;

  case 196:
#line 1479 "../src/parser/xquery.y"
    {
			DataItemNav *nav = getNavigation(yyvsp[-2].dataItem,MEMMGR);
			nav->addStep(yyvsp[0].dataItem);
			yyval.dataItem = nav;
		}
    break;

  case 197:
#line 1485 "../src/parser/xquery.y"
    {
			DataItemNav *nav = getNavigation(yyvsp[-2].dataItem,MEMMGR);

      NodeTest *step = new (MEMMGR) NodeTest();
      step->setTypeWildcard();
      step->setNameWildcard();
      step->setNamespaceWildcard();
      nav->addStep(DataItemStep::DESCENDANT_OR_SELF, step);
			nav->addStep(yyvsp[0].dataItem);

			yyval.dataItem = nav;
		}
    break;

  case 201:
#line 1509 "../src/parser/xquery.y"
    {
			yyvsp[-1].dataItem->addPredicates(*yyvsp[0].itemList);
			yyval.dataItem=yyvsp[-1].dataItem;
		}
    break;

  case 202:
#line 1514 "../src/parser/xquery.y"
    {
			yyvsp[-1].dataItem->addPredicates(*yyvsp[0].itemList);
			yyval.dataItem=yyvsp[-1].dataItem;
		}
    break;

  case 203:
#line 1523 "../src/parser/xquery.y"
    {
      if(!yyvsp[0].nodeTest->isNodeTypeSet()) {
        switch(yyvsp[-1].axis) {
        case DataItemStep::NAMESPACE: yyvsp[0].nodeTest->setNodeType(Node::namespace_string); break;
        case DataItemStep::ATTRIBUTE: yyvsp[0].nodeTest->setNodeType(Node::attribute_string); break;
        default: yyvsp[0].nodeTest->setNodeType(Node::element_string); break;
        }
      }

			yyval.dataItem = new (MEMMGR) DataItemStep(yyvsp[-1].axis,yyvsp[0].nodeTest,MEMMGR);
		}
    break;

  case 205:
#line 1546 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::CHILD;
		}
    break;

  case 206:
#line 1550 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::DESCENDANT;
		}
    break;

  case 207:
#line 1554 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::ATTRIBUTE;
		}
    break;

  case 208:
#line 1558 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::SELF;
		}
    break;

  case 209:
#line 1562 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::DESCENDANT_OR_SELF;
		}
    break;

  case 210:
#line 1566 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::FOLLOWING_SIBLING;
		}
    break;

  case 211:
#line 1570 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::FOLLOWING;
		}
    break;

  case 212:
#line 1578 "../src/parser/xquery.y"
    {
      if(!yyvsp[0].nodeTest->isNodeTypeSet()) {
        yyvsp[0].nodeTest->setNodeType(Node::attribute_string);
      }

      yyval.dataItem = new (MEMMGR) DataItemStep(DataItemStep::ATTRIBUTE, yyvsp[0].nodeTest, MEMMGR);
		}
    break;

  case 213:
#line 1586 "../src/parser/xquery.y"
    {
      DataItemStep::Axis axis = DataItemStep::CHILD;
      SequenceType::ItemType *itemtype = yyvsp[0].nodeTest->getItemType();
      if(itemtype != 0 &&
         itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
        axis = DataItemStep::ATTRIBUTE;
      }
      else if(!yyvsp[0].nodeTest->isNodeTypeSet()) {
        yyvsp[0].nodeTest->setNodeType(Node::element_string);
      }

      yyval.dataItem = new (MEMMGR) DataItemStep(axis, yyvsp[0].nodeTest, MEMMGR);
		}
    break;

  case 214:
#line 1604 "../src/parser/xquery.y"
    {
      if(!yyvsp[0].nodeTest->isNodeTypeSet()) {
        yyvsp[0].nodeTest->setNodeType(Node::element_string);
      }

      yyval.dataItem = new (MEMMGR) DataItemStep(yyvsp[-1].axis, yyvsp[0].nodeTest, MEMMGR);
		}
    break;

  case 216:
#line 1621 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::PARENT;
		}
    break;

  case 217:
#line 1625 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::ANCESTOR;
		}
    break;

  case 218:
#line 1629 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::PRECEDING_SIBLING;
		}
    break;

  case 219:
#line 1633 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::PRECEDING;
		}
    break;

  case 220:
#line 1637 "../src/parser/xquery.y"
    {
      yyval.axis = DataItemStep::ANCESTOR_OR_SELF;
		}
    break;

  case 221:
#line 1645 "../src/parser/xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			yyval.dataItem = new (MEMMGR) DataItemStep(DataItemStep::PARENT, step, MEMMGR);
		}
    break;

  case 224:
#line 1663 "../src/parser/xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			try
			{
				const XMLCh* uri = CONTEXT->getUriBoundToPrefix(yyvsp[0].qName->getPrefix());
				step->setNodeUri(uri);
			}
			catch(NamespaceLookupException&)
			{
				step->setNodePrefix(yyvsp[0].qName->getPrefix());
			}
			step->setNodeName(yyvsp[0].qName->getName());
			yyval.nodeTest = step;
		}
    break;

  case 226:
#line 1683 "../src/parser/xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			yyval.nodeTest = step;
		}
    break;

  case 227:
#line 1690 "../src/parser/xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			try
			{
				const XMLCh* uri = CONTEXT->getUriBoundToPrefix(yyvsp[0].str);
				step->setNodeUri(uri);
			}
			catch(NamespaceLookupException&)
			{
				step->setNodePrefix(yyvsp[0].str);
			}
			step->setNameWildcard();
			yyval.nodeTest = step;
		}
    break;

  case 228:
#line 1705 "../src/parser/xquery.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName(yyvsp[0].str);
			step->setNamespaceWildcard();
			yyval.nodeTest = step;
		}
    break;

  case 229:
#line 1716 "../src/parser/xquery.y"
    {
			yyvsp[-1].dataItem->addPredicates(*yyvsp[0].itemList);
			yyval.dataItem=yyvsp[-1].dataItem;
		}
    break;

  case 230:
#line 1726 "../src/parser/xquery.y"
    {
	        yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
		}
    break;

  case 231:
#line 1730 "../src/parser/xquery.y"
    {
			yyvsp[-3].itemList->push_back(yyvsp[-1].dataItem);
			yyval.itemList = yyvsp[-3].itemList; 
		}
    break;

  case 245:
#line 1764 "../src/parser/xquery.y"
    {
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf(yyvsp[0].str,':');
			if(nColon!=-1)
  				yyval.dataItem = new (MEMMGR) DataItemVariable(yyvsp[0].str,MEMMGR);
			else
				yyval.dataItem = new (MEMMGR) DataItemVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, yyvsp[0].str,MEMMGR);
		}
    break;

  case 246:
#line 1776 "../src/parser/xquery.y"
    { 
			DataItem* prevExpr=yyvsp[-1].dataItem;
			if((unsigned int)prevExpr->getType()==XQContext::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()!=DataItem::PARENTHESIZED)
			{
				DataItemParenthesizedExpr *dis = new (MEMMGR) DataItemParenthesizedExpr(MEMMGR);
				dis->addItem(yyvsp[-1].dataItem);
				yyval.dataItem = WRAP(yylsp[-1], dis);
			}
			else
				yyval.dataItem = WRAP(yylsp[-1], yyvsp[-1].dataItem);
		}
    break;

  case 247:
#line 1790 "../src/parser/xquery.y"
    { 
			yyval.dataItem = WRAP(yylsp[-1], new (MEMMGR) DataItemSequence(MEMMGR));
		}
    break;

  case 248:
#line 1798 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) DataItemContextItem(MEMMGR);
		}
    break;

  case 249:
#line 1806 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, yyvsp[-1].dataItem, MEMMGR);
		}
    break;

  case 250:
#line 1814 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, yyvsp[-1].dataItem, MEMMGR);
		}
    break;

  case 251:
#line 1822 "../src/parser/xquery.y"
    {
			VectorOfDataItems args(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = FNWRAP(yylsp[-1], yyvsp[-1].str, new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName(yyvsp[-1].str, MEMMGR), args, MEMMGR));
		}
    break;

  case 252:
#line 1827 "../src/parser/xquery.y"
    {
			yyval.dataItem = FNWRAP(yylsp[-2], yyvsp[-2].str, new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName(yyvsp[-2].str, MEMMGR), *yyvsp[-1].itemList,MEMMGR));
		}
    break;

  case 253:
#line 1834 "../src/parser/xquery.y"
    {
			yyvsp[-2].itemList->push_back(yyvsp[0].dataItem);
			yyval.itemList = yyvsp[-2].itemList;
		}
    break;

  case 254:
#line 1839 "../src/parser/xquery.y"
    {
			yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.itemList->push_back(yyvsp[0].dataItem);
		}
    break;

  case 260:
#line 1863 "../src/parser/xquery.y"
    { 
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::element_string,
								new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-2].str, /*isNumeric*/false),
										MEMMGR), 
								yyvsp[-1].itemList, content, MEMMGR));
		}
    break;

  case 261:
#line 1875 "../src/parser/xquery.y"
    { 
			if(!XPath2Utils::equals(yyvsp[-6].str,yyvsp[-1].str))
				yyerror("Close tag does not match open tag");
			// if we are requested to strip whitespace-only nodes, check if the last element content should be removed
			VectorOfDataItems* elemContent=yyvsp[-3].itemList;
			if(!CONTEXT->getPreserveBoundarySpace() &&
			   elemContent->size()>0 && 
			   elemContent->back()->getType()==DataItem::LITERAL)
			{
                Item::Ptr litVal = ((DataItemLiteral*)elemContent->back())->getItemConstructor()->createItem(CONTEXT);
				if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING &&
                   isAllSpaces(litVal->asString(CONTEXT)))
					elemContent->pop_back();
			}
			yyval.dataItem = WRAP(yylsp[-7], new (MEMMGR) XQDOMConstructor(Node::element_string,
							  new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-6].str, /*isNumeric*/false),
										MEMMGR), 
							  yyvsp[-5].itemList, elemContent,MEMMGR));
		}
    break;

  case 262:
#line 1903 "../src/parser/xquery.y"
    {
			yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
		}
    break;

  case 263:
#line 1907 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-3].itemList;
			DataItem* attrItem=WRAP(yylsp[-2], new (MEMMGR) XQDOMConstructor(Node::attribute_string,
										   new (MEMMGR) DataItemLiteral(
						new (MEMMGR) AnyAtomicTypeConstructor(
											XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
											XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
											yyvsp[-2].str, /*isNumeric*/false),
											MEMMGR), 
										  0, yyvsp[0].itemList,MEMMGR));
			if(XPath2Utils::equals(yyvsp[-2].str, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString) ||
			   XERCES_CPP_NAMESPACE_QUALIFIER XMLString::startsWith(yyvsp[-2].str, XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSColonString))
			{
				yyval.itemList->insert(yyval.itemList->begin(), attrItem);
			}
			else
			{
				yyval.itemList->push_back(attrItem);
			}
		}
    break;

  case 264:
#line 1933 "../src/parser/xquery.y"
    { 
			yyval.itemList = yyvsp[-1].itemList;
		}
    break;

  case 265:
#line 1937 "../src/parser/xquery.y"
    { 
			yyval.itemList = yyvsp[-1].itemList;
		}
    break;

  case 266:
#line 1946 "../src/parser/xquery.y"
    { 
			yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
		}
    break;

  case 267:
#line 1950 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			yyval.itemList->push_back(yyvsp[0].dataItem);
		}
    break;

  case 268:
#line 1955 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,szQuote);
		}
    break;

  case 269:
#line 1960 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,yyvsp[0].str);
		}
    break;

  case 270:
#line 1970 "../src/parser/xquery.y"
    { 
			yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
		}
    break;

  case 271:
#line 1974 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			yyval.itemList->push_back(yyvsp[0].dataItem);
		}
    break;

  case 272:
#line 1979 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,szApos);
		}
    break;

  case 273:
#line 1984 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,yyvsp[0].str);
		}
    break;

  case 274:
#line 1996 "../src/parser/xquery.y"
    {
			yyval.itemList = new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR)); 
		}
    break;

  case 275:
#line 2000 "../src/parser/xquery.y"
    {
			// if the last token was a string literal made of whitesapce and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if(yyvsp[-1].itemList->size()>0 && 
			   yyvsp[-1].itemList->back()->getType()==DataItem::LITERAL)
			{
				const XMLCh* lastString=NULL;
                Item::Ptr litVal = ((DataItemLiteral*)yyvsp[-1].itemList->back())->getItemConstructor()->createItem(CONTEXT);
				if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
					lastString=litVal->asString(CONTEXT);
				if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
					yyvsp[-1].itemList->pop_back();
			}
			yyval.itemList = yyvsp[-1].itemList;
			yyval.itemList->push_back(yyvsp[0].dataItem);
		}
    break;

  case 276:
#line 2017 "../src/parser/xquery.y"
    {
			// if the last token was a string literal made of whitesapce and
			// we are adding an enclosed expression, and the context tells us to strip whitespace, remove it
			if(yyvsp[-1].itemList->size()>0 && 
			   yyvsp[-1].itemList->back()->getType()==DataItem::LITERAL)
			{
				const XMLCh* lastString=NULL;
                Item::Ptr litVal = ((DataItemLiteral*)yyvsp[-1].itemList->back())->getItemConstructor()->createItem(CONTEXT);
				if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
					lastString=litVal->asString(CONTEXT);
				if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
					yyvsp[-1].itemList->pop_back();
			}
			yyval.itemList = yyvsp[-1].itemList;
			yyval.itemList->push_back(yyvsp[0].dataItem);
		}
    break;

  case 277:
#line 2034 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,yyvsp[0].str);
		}
    break;

  case 278:
#line 2039 "../src/parser/xquery.y"
    {
			yyval.itemList = yyvsp[-1].itemList;
			merge_strings(CONTEXT,yyval.itemList,yyvsp[0].str);
		}
    break;

  case 281:
#line 2051 "../src/parser/xquery.y"
    {
		yyval.str = szCurlyOpen;
	}
    break;

  case 282:
#line 2055 "../src/parser/xquery.y"
    {
		yyval.str = szCurlyClose;
	}
    break;

  case 284:
#line 2065 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[0].str, /*isNumeric*/false),
										MEMMGR));
			yyval.dataItem = WRAP(yylsp[0], new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
    break;

  case 285:
#line 2081 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[0].str, /*isNumeric*/false),
										MEMMGR));
			yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-1].str, /*isNumeric*/false),
										MEMMGR), 
									  empty, content, MEMMGR));
		}
    break;

  case 286:
#line 2105 "../src/parser/xquery.y"
    {
			yyval.str = yyvsp[0].str;
		}
    break;

  case 293:
#line 2128 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::document_string,
								  new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, /*isNumeric*/false),
										MEMMGR), 
								  empty, content,MEMMGR));
		}
    break;

  case 294:
#line 2146 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-3].str, /*isNumeric*/false),
										MEMMGR), 
								  empty, content,MEMMGR));
		}
    break;

  case 295:
#line 2160 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) XQDOMConstructor(Node::element_string,
								  new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-2].str, /*isNumeric*/false),
										MEMMGR), 
								  empty, empty,MEMMGR));
		}
    break;

  case 296:
#line 2172 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-6], new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP(yylsp[-4], yyvsp[-4].dataItem), 
								  empty, content, MEMMGR));
		}
    break;

  case 297:
#line 2181 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-5], new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP(yylsp[-3], yyvsp[-3].dataItem), 
								  empty, empty, MEMMGR));
		}
    break;

  case 299:
#line 2197 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-3].str, /*isNumeric*/false),
										MEMMGR), 
									  0, content,MEMMGR));
		}
    break;

  case 300:
#line 2210 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) XQDOMConstructor(Node::attribute_string,
								      new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-2].str, /*isNumeric*/false),
										MEMMGR), 
									  0, empty,MEMMGR));
		}
    break;

  case 301:
#line 2222 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-6], new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP(yylsp[-4], yyvsp[-4].dataItem), 
									  0, content, MEMMGR));
		}
    break;

  case 302:
#line 2230 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-5], new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP(yylsp[-3], yyvsp[-3].dataItem), 
									  0, empty, MEMMGR));
		}
    break;

  case 303:
#line 2241 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::text_string, 0, 0, content, MEMMGR));
		}
    break;

  case 304:
#line 2251 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
    break;

  case 305:
#line 2261 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-3], new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-3].str, /*isNumeric*/false),
										MEMMGR), 
									  0, content, MEMMGR));
	  }
    break;

  case 306:
#line 2274 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-2], new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
								      new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[-2].str, /*isNumeric*/false),
										MEMMGR), 
									  0, empty, MEMMGR));
	  }
    break;

  case 307:
#line 2286 "../src/parser/xquery.y"
    {
			VectorOfDataItems* content=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			content->push_back(WRAP(yylsp[-1], yyvsp[-1].dataItem));
			yyval.dataItem = WRAP(yylsp[-6], new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP(yylsp[-4], yyvsp[-4].dataItem), 
									  0, content, MEMMGR));
	  }
    break;

  case 308:
#line 2294 "../src/parser/xquery.y"
    {
			VectorOfDataItems* empty=new (MEMMGR) VectorOfDataItems(PathanAllocator<DataItem*>(MEMMGR));
			yyval.dataItem = WRAP(yylsp[-5], new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP(yylsp[-3], yyvsp[-3].dataItem), 
									  0, empty, MEMMGR));
	  }
    break;

  case 309:
#line 2305 "../src/parser/xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,yyvsp[-1].qName));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			yyval.sequenceType = seq;
		}
    break;

  case 310:
#line 2312 "../src/parser/xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,yyvsp[0].qName));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			yyval.sequenceType = seq;
		}
    break;

  case 311:
#line 2323 "../src/parser/xquery.y"
    {
			yyval.sequenceType = yyvsp[0].sequenceType;
		}
    break;

  case 312:
#line 2331 "../src/parser/xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(yyvsp[-1].itemType);
			seq->setOccurrence(yyvsp[0].occurrence);
			yyval.sequenceType = seq;
		}
    break;

  case 313:
#line 2338 "../src/parser/xquery.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(yyvsp[0].itemType);
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			yyval.sequenceType = seq;
		}
    break;

  case 314:
#line 2345 "../src/parser/xquery.y"
    { 
			yyval.sequenceType = new (MEMMGR) SequenceType(); 
		}
    break;

  case 315:
#line 2354 "../src/parser/xquery.y"
    { yyval.occurrence = SequenceType::STAR; }
    break;

  case 316:
#line 2356 "../src/parser/xquery.y"
    { yyval.occurrence = SequenceType::PLUS; }
    break;

  case 317:
#line 2358 "../src/parser/xquery.y"
    { yyval.occurrence = SequenceType::QUESTION_MARK; }
    break;

  case 318:
#line 2364 "../src/parser/xquery.y"
    {
        yyval.itemType = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, yyvsp[0].qName);
	}
    break;

  case 319:
#line 2368 "../src/parser/xquery.y"
    {
		yyval.itemType = yyvsp[0].nodeTest->getItemType();
		yyvsp[0].nodeTest->setItemType(NULL);
	}
    break;

  case 320:
#line 2373 "../src/parser/xquery.y"
    {
		yyval.itemType = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	}
    break;

  case 321:
#line 2381 "../src/parser/xquery.y"
    {
		yyval.qName = yyvsp[0].qName;
	}
    break;

  case 331:
#line 2410 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		yyval.nodeTest = step;
	}
    break;

  case 332:
#line 2420 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		yyval.nodeTest = step;
	}
    break;

  case 333:
#line 2426 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=yyvsp[-1].nodeTest->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		yyval.nodeTest = step;
	}
    break;

  case 334:
#line 2435 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=yyvsp[-1].nodeTest->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		yyval.nodeTest = step;
	}
    break;

  case 335:
#line 2448 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		yyval.nodeTest = step;
	}
    break;

  case 336:
#line 2458 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		yyval.nodeTest = step;
	}
    break;

  case 337:
#line 2468 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		yyval.nodeTest = step;
	}
    break;

  case 338:
#line 2474 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName(yyvsp[-1].str)));
		yyval.nodeTest = step;
	}
    break;

  case 339:
#line 2480 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName(yyvsp[-1].str)));
		yyval.nodeTest = step;
	}
    break;

  case 340:
#line 2490 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		yyval.nodeTest = step;
	}
    break;

  case 341:
#line 2496 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 342:
#line 2502 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,yyvsp[-3].qName,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 344:
#line 2513 "../src/parser/xquery.y"
    {
		yyval.qName = NULL;
	}
    break;

  case 345:
#line 2521 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 347:
#line 2536 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		yyval.nodeTest = step;
	}
    break;

  case 348:
#line 2542 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 349:
#line 2548 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,yyvsp[-3].qName,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 350:
#line 2554 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,yyvsp[-4].qName,yyvsp[-2].qName);
		pType->setAllowNilled(true);
        step->setItemType(pType);
		yyval.nodeTest = step;
	}
    break;

  case 352:
#line 2567 "../src/parser/xquery.y"
    {
		yyval.qName = NULL;
	}
    break;

  case 353:
#line 2575 "../src/parser/xquery.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,yyvsp[-1].qName));
		yyval.nodeTest = step;
	}
    break;

  case 358:
#line 2605 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										yyvsp[0].str, /*isNumeric*/true),
										MEMMGR);
		}
    break;

  case 359:
#line 2618 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										yyvsp[0].str, /*isNumeric*/true),
										MEMMGR);
		}
    break;

  case 360:
#line 2631 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										yyvsp[0].str, /*isNumeric*/true),
										MEMMGR);
		}
    break;

  case 362:
#line 2650 "../src/parser/xquery.y"
    {
			yyval.dataItem = new (MEMMGR) DataItemLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										yyvsp[0].str, /*isNumeric*/false),
										MEMMGR);
		}
    break;

  case 363:
#line 2663 "../src/parser/xquery.y"
    {
			yyval.qName = new (MEMMGR) QualifiedName(yyvsp[0].str,MEMMGR);
		}
    break;


    }

/* Line 999 of yacc.c.  */
#line 4896 "../src/parser/Grammar.cpp"

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
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }

  yylerrsp = yylsp;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp, yylsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval, &yylloc);
      yychar = YYEMPTY;
      *++yylerrsp = yylloc;
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp, yylsp);
      yyvsp--;
      yystate = *--yyssp;
      yylsp--;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;
  YYLLOC_DEFAULT (yyloc, yylsp, (yylerrsp - yylsp));
  *++yylsp = yyloc;

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
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 2667 "../src/parser/xquery.y"


}	// namespace XQuery



