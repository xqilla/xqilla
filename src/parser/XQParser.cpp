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
     _SCORE_ = 439,
     _FTCONTAINS_ = 440,
     _WEIGHT_ = 441,
     _DECLARE_FT_OPTION_ = 442,
     _DOUBLE_VERTICAL_BAR_ = 443,
     _DOUBLE_AMPERSAND_ = 444,
     _NOT_IN_ = 445,
     _BANG_ = 446,
     _WINDOW_ = 447,
     _DISTANCE_ = 448,
     _OCCURS_ = 449,
     _TIMES_ = 450,
     _SAME_ = 451,
     _DIFFERENT_ = 452,
     _AT_START_ = 453,
     _AT_END_ = 454,
     _ENTIRE_CONTENT_ = 455,
     _LOWERCASE_ = 456,
     _UPPERCASE_ = 457,
     _CASE_INSENSITIVE_ = 458,
     _CASE_SENSITIVE_ = 459,
     _WITH_DIACRITICS_ = 460,
     _WITHOUT_DIACRITICS_ = 461,
     _DIACRITICS_SENSITIVE_ = 462,
     _DIACRITICS_INSENSITIVE_ = 463,
     _WITH_STEMMING_ = 464,
     _WITHOUT_STEMMING_ = 465,
     _WITH_THESAURUS_ = 466,
     _WITHOUT_THESAURUS_ = 467,
     _RELATIONSHIP_ = 468,
     _LEVELS_ = 469,
     _WITH_STOP_WORDS_ = 470,
     _WITHOUT_STOP_WORDS_ = 471,
     _WITH_DEFAULT_STOP_WORDS_ = 472,
     _LANGUAGE_ = 473,
     _WITH_WILDCARDS_ = 474,
     _WITHOUT_WILDCARDS_ = 475,
     _ANY_ = 476,
     _ANY_WORD_ = 477,
     _ALL_ = 478,
     _ALL_WORDS_ = 479,
     _PHRASE_ = 480,
     _EXACTLY_ = 481,
     _AT_LEAST_ = 482,
     _AT_MOST_ = 483,
     _FROM_ = 484,
     _WORDS_ = 485,
     _SENTENCES_ = 486,
     _PARAGRAPHS_ = 487,
     _SENTENCE_ = 488,
     _PARAGRAPH_ = 489,
     _WITHOUT_CONTENT_ = 490,
     _EOF_ = 491
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
#define _SCORE_ 439
#define _FTCONTAINS_ 440
#define _WEIGHT_ 441
#define _DECLARE_FT_OPTION_ 442
#define _DOUBLE_VERTICAL_BAR_ 443
#define _DOUBLE_AMPERSAND_ 444
#define _NOT_IN_ 445
#define _BANG_ 446
#define _WINDOW_ 447
#define _DISTANCE_ 448
#define _OCCURS_ 449
#define _TIMES_ 450
#define _SAME_ 451
#define _DIFFERENT_ 452
#define _AT_START_ 453
#define _AT_END_ 454
#define _ENTIRE_CONTENT_ 455
#define _LOWERCASE_ 456
#define _UPPERCASE_ 457
#define _CASE_INSENSITIVE_ 458
#define _CASE_SENSITIVE_ 459
#define _WITH_DIACRITICS_ 460
#define _WITHOUT_DIACRITICS_ 461
#define _DIACRITICS_SENSITIVE_ 462
#define _DIACRITICS_INSENSITIVE_ 463
#define _WITH_STEMMING_ 464
#define _WITHOUT_STEMMING_ 465
#define _WITH_THESAURUS_ 466
#define _WITHOUT_THESAURUS_ 467
#define _RELATIONSHIP_ 468
#define _LEVELS_ 469
#define _WITH_STOP_WORDS_ 470
#define _WITHOUT_STOP_WORDS_ 471
#define _WITH_DEFAULT_STOP_WORDS_ 472
#define _LANGUAGE_ 473
#define _WITH_WILDCARDS_ 474
#define _WITHOUT_WILDCARDS_ 475
#define _ANY_ 476
#define _ANY_WORD_ 477
#define _ALL_ 478
#define _ALL_WORDS_ 479
#define _PHRASE_ 480
#define _EXACTLY_ 481
#define _AT_LEAST_ 482
#define _AT_MOST_ 483
#define _FROM_ 484
#define _WORDS_ 485
#define _SENTENCES_ 486
#define _PARAGRAPHS_ 487
#define _SENTENCE_ 488
#define _PARAGRAPH_ 489
#define _WITHOUT_CONTENT_ 490
#define _EOF_ 491




/* Copy the first part of user declarations.  */
#line 26 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <iostream>
#include <xqilla/utils/UTF8Str.hpp>

#include "../lexer/XQLexer.hpp"

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
#include <xqilla/ast/XQPredicate.hpp>

#include <xqilla/fulltext/FTContains.hpp>
#include <xqilla/fulltext/FTOr.hpp>
#include <xqilla/fulltext/FTAnd.hpp>
#include <xqilla/fulltext/FTMildnot.hpp>
#include <xqilla/fulltext/FTUnaryNot.hpp>
#include <xqilla/fulltext/FTOrder.hpp>
#include <xqilla/fulltext/FTDistance.hpp>
#include <xqilla/fulltext/FTScope.hpp>
#include <xqilla/fulltext/FTContent.hpp>
#include <xqilla/fulltext/FTWindow.hpp>

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

#define QP						((XQParserArgs*)qp)
#define CONTEXT					(QP->_context)
#define LANGUAGE					(QP->_lexer->getLanguage())
#define MEMMGR					(CONTEXT->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos) if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_FULLTEXT(where,pos) if(!QP->_lexer->isFullText()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)		(wrapForDebug((QP),(object),NULL  ,(pos).first_line, (pos).first_column))
#define FNWRAP(pos,name,object)	(wrapForDebug((QP),(object),(name),(pos).first_line, (pos).first_column))
#define FTWRAP(pos,object)		(wrapForDebugFT((QP), (object), (pos).first_line, (pos).first_column))
#define FTOPTIONWRAP(pos,object)		((FTOption*)wrapForDebugFT((QP), (object), (pos).first_line, (pos).first_column))

#define BIT_ORDERING_SPECIFIED	0
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
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

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
	if(vec->size()>0 && vec->back()!=0 && vec->back()->getType()==ASTNode::LITERAL)
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
    if(vec->size()>0 && vec->back()==0)
			vec->pop_back();
    	AnyAtomicTypeConstructor *ic = new (context->getMemoryManager())
      		AnyAtomicTypeConstructor(
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
						XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				toBeAdded, AnyAtomicType::STRING);

		vec->push_back(new (context->getMemoryManager())
                   XQLiteral(ic, context->getMemoryManager()));
	}
}

static ASTNode* wrapForDebug(XQParserArgs *qp, ASTNode* pObjToWrap,
                              const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(!CONTEXT->isDebuggingEnabled() && !CONTEXT->getDebugCallback())
    return pObjToWrap;
  if(fnName==NULL && (unsigned int)pObjToWrap->getType()==ASTNode::DEBUG_HOOK)
    return pObjToWrap;
  return new (MEMMGR) XQDebugHook(QP->_query->getFile(), line, column, pObjToWrap, fnName, MEMMGR);
}

static FTSelection *wrapForDebugFT(XQParserArgs *qp, FTSelection *pObjToWrap,
                                   unsigned int line, unsigned int column)
{
  pObjToWrap->setDebugInfo(QP->_query->getFile(), line, column);
  return pObjToWrap;
}

namespace XQParser {



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
#line 831 "../src/parser/XQParser.cpp"

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
#define YYLAST   2637

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  237
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  180
/* YYNRULES -- Number of rules. */
#define YYNRULES  464
/* YYNRULES -- Number of states. */
#define YYNSTATES  828

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   491

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
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    18,    25,    28,
      31,    38,    39,    43,    47,    51,    55,    59,    63,    67,
      71,    73,    75,    77,    79,    81,    83,    85,    87,    89,
      91,    97,   101,   105,   111,   117,   122,   125,   129,   133,
     139,   145,   151,   153,   155,   157,   159,   164,   168,   173,
     179,   183,   188,   191,   195,   199,   203,   211,   218,   223,
     227,   235,   242,   249,   255,   259,   263,   270,   276,   284,
     291,   298,   304,   312,   319,   323,   325,   329,   332,   336,
     338,   342,   344,   346,   348,   350,   352,   354,   360,   365,
     370,   374,   377,   379,   381,   383,   386,   390,   392,   397,
     403,   409,   416,   422,   429,   436,   444,   448,   452,   455,
     459,   461,   466,   472,   478,   485,   489,   492,   496,   501,
     505,   507,   511,   517,   518,   520,   522,   523,   526,   529,
     534,   539,   543,   545,   550,   556,   567,   576,   579,   581,
     586,   594,   603,   607,   609,   613,   615,   619,   623,   627,
     631,   635,   639,   643,   647,   651,   655,   659,   663,   667,
     671,   675,   677,   681,   686,   688,   692,   694,   698,   702,
     704,   708,   712,   716,   720,   722,   726,   730,   732,   736,
     740,   742,   747,   749,   754,   756,   761,   763,   768,   770,
     773,   776,   778,   780,   782,   784,   789,   795,   801,   805,
     810,   812,   815,   820,   824,   826,   829,   832,   834,   838,
     842,   844,   846,   848,   851,   854,   857,   859,   861,   863,
     865,   867,   869,   871,   873,   876,   878,   881,   883,   885,
     887,   889,   891,   893,   895,   897,   899,   901,   903,   905,
     907,   909,   912,   913,   918,   920,   922,   924,   926,   928,
     930,   932,   934,   936,   938,   940,   942,   944,   947,   951,
     954,   956,   961,   966,   969,   973,   977,   979,   981,   983,
     985,   987,   989,   994,  1003,  1004,  1009,  1013,  1017,  1018,
    1021,  1024,  1027,  1030,  1031,  1034,  1037,  1040,  1043,  1044,
    1047,  1050,  1053,  1056,  1059,  1061,  1063,  1065,  1067,  1069,
    1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1092,  1097,
    1101,  1109,  1116,  1118,  1123,  1127,  1135,  1142,  1147,  1152,
    1157,  1161,  1169,  1176,  1179,  1181,  1184,  1187,  1189,  1193,
    1195,  1197,  1199,  1201,  1203,  1207,  1209,  1211,  1213,  1215,
    1217,  1219,  1221,  1223,  1225,  1227,  1230,  1233,  1237,  1241,
    1244,  1247,  1250,  1254,  1258,  1261,  1265,  1271,  1273,  1275,
    1279,  1281,  1284,  1288,  1294,  1301,  1303,  1305,  1309,  1311,
    1313,  1315,  1317,  1319,  1324,  1327,  1328,  1331,  1334,  1338,
    1340,  1344,  1346,  1350,  1352,  1355,  1357,  1361,  1363,  1366,
    1369,  1372,  1375,  1380,  1382,  1386,  1390,  1394,  1397,  1400,
    1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,
    1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1438,  1440,
    1443,  1446,  1452,  1458,  1460,  1461,  1465,  1468,  1473,  1478,
    1485,  1489,  1491,  1494,  1495,  1498,  1501,  1505,  1507,  1511,
    1514,  1517,  1520,  1522,  1524,  1525,  1527,  1529,  1531,  1533,
    1535,  1538,  1541,  1544,  1549,  1551,  1553,  1555,  1557,  1559,
    1562,  1564,  1566,  1568,  1570
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
     238,     0,    -1,   239,   240,    -1,   239,   241,    -1,   240,
      -1,   241,    -1,   177,   178,     7,   246,    -1,   177,   178,
       7,   164,     7,   246,    -1,   243,   269,    -1,   242,   243,
      -1,   181,   137,    14,    86,   383,   246,    -1,    -1,   243,
     244,   246,    -1,   243,   245,   246,    -1,   243,   247,   246,
      -1,   243,   249,   246,    -1,   243,   263,   246,    -1,   243,
     265,   246,    -1,   243,   250,   246,    -1,   243,   251,   246,
      -1,   248,    -1,   257,    -1,   258,    -1,   264,    -1,   252,
      -1,   253,    -1,   254,    -1,   259,    -1,   262,    -1,   154,
      -1,   168,   137,    14,    86,   383,    -1,   168,   169,   135,
      -1,   168,   169,   136,    -1,   168,   173,   182,   137,   383,
      -1,   168,   173,   183,   137,   383,    -1,   168,   176,     3,
       7,    -1,   187,   393,    -1,   168,   172,   160,    -1,   168,
     172,   159,    -1,   168,   173,    44,    48,    49,    -1,   168,
     173,    44,    48,    50,    -1,   168,   174,   255,    34,   256,
      -1,   135,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
     173,    51,   383,    -1,   168,   170,   383,    -1,   179,   180,
     261,   383,    -1,   179,   180,   261,   383,   260,    -1,   179,
     180,   383,    -1,   179,   180,   383,   260,    -1,    39,   383,
      -1,   260,    34,   383,    -1,   137,    14,    86,    -1,   173,
     182,   137,    -1,   179,   181,   137,    14,    86,   383,   260,
      -1,   179,   181,   137,    14,    86,   383,    -1,   179,   181,
     383,   260,    -1,   179,   181,   383,    -1,   168,   175,    38,
       8,   361,    41,   271,    -1,   168,   175,    38,     8,    41,
     271,    -1,   168,   175,    38,     8,   361,   145,    -1,   168,
     175,    38,     8,   145,    -1,   168,   171,   135,    -1,   168,
     171,   136,    -1,   168,   183,     4,   266,   116,   268,    -1,
     168,   183,     4,   116,   268,    -1,   168,   183,     4,   266,
     138,   362,   268,    -1,   168,   183,     4,   138,   362,   268,
      -1,   168,   183,     4,   266,   116,   145,    -1,   168,   183,
       4,   116,   145,    -1,   168,   183,     4,   266,   138,   362,
     145,    -1,   168,   183,     4,   138,   362,   145,    -1,   266,
      34,   267,    -1,   267,    -1,    38,     8,   361,    -1,    38,
       8,    -1,   133,   270,   134,    -1,   270,    -1,   270,    34,
     271,    -1,   271,    -1,   272,    -1,   289,    -1,   292,    -1,
     295,    -1,   296,    -1,   273,   283,   284,    35,   271,    -1,
     273,   283,    35,   271,    -1,   273,   284,    35,   271,    -1,
     273,    35,   271,    -1,   273,   274,    -1,   274,    -1,   275,
      -1,   280,    -1,    36,   276,    -1,   276,    34,   277,    -1,
     277,    -1,    38,     8,    37,   271,    -1,    38,     8,   279,
      37,   271,    -1,    38,     8,   278,    37,   271,    -1,    38,
       8,   278,   279,    37,   271,    -1,    38,     8,   361,    37,
     271,    -1,    38,     8,   361,   279,    37,   271,    -1,    38,
       8,   361,   278,    37,   271,    -1,    38,     8,   361,   278,
     279,    37,   271,    -1,    39,    38,     8,    -1,   184,    38,
       8,    -1,    40,   281,    -1,   281,    34,   282,    -1,   282,
      -1,    38,     8,    41,   271,    -1,    38,     8,   279,    41,
     271,    -1,    38,     8,   361,    41,   271,    -1,    38,     8,
     361,   279,    41,   271,    -1,   279,    41,   271,    -1,    42,
     271,    -1,    44,    43,   285,    -1,    45,    44,    43,   285,
      -1,   285,    34,   286,    -1,   286,    -1,   271,   287,   288,
      -1,   271,   287,   288,    51,   383,    -1,    -1,    46,    -1,
      47,    -1,    -1,    48,    49,    -1,    48,    50,    -1,    52,
     290,    54,   271,    -1,    53,   290,    54,   271,    -1,   290,
      34,   291,    -1,   291,    -1,    38,     8,    37,   271,    -1,
      38,     8,   361,    37,   271,    -1,    55,   115,   270,   116,
     293,   173,    38,     8,    35,   271,    -1,    55,   115,   270,
     116,   293,   173,    35,   271,    -1,   293,   294,    -1,   294,
      -1,    56,   362,    35,   271,    -1,    56,    38,     8,    57,
     362,    35,   271,    -1,    58,   115,   270,   116,    59,   271,
      60,   271,    -1,   296,    61,   297,    -1,   297,    -1,   297,
      62,   298,    -1,   298,    -1,   299,    86,   299,    -1,   299,
      87,   299,    -1,   299,    88,   299,    -1,   299,    89,   299,
      -1,   299,    90,   299,    -1,   299,    91,   299,    -1,   299,
      92,   299,    -1,   299,    93,   299,    -1,   299,    94,   299,
      -1,   299,    95,   299,    -1,   299,    96,   299,    -1,   299,
      97,   299,    -1,   299,    98,   299,    -1,   299,    99,   299,
      -1,   299,   100,   299,    -1,   299,    -1,   300,   185,   384,
      -1,   300,   185,   384,   411,    -1,   300,    -1,   301,    66,
     301,    -1,   301,    -1,   301,    67,   302,    -1,   301,    68,
     302,    -1,   302,    -1,   302,    69,   303,    -1,   302,    70,
     303,    -1,   302,    71,   303,    -1,   302,    72,   303,    -1,
     303,    -1,   303,    74,   304,    -1,   303,    73,   304,    -1,
     304,    -1,   304,    75,   305,    -1,   304,    76,   305,    -1,
     305,    -1,   306,    63,    64,   362,    -1,   306,    -1,   307,
      85,    57,   362,    -1,   307,    -1,   308,    65,    57,   360,
      -1,   308,    -1,   309,    84,    57,   360,    -1,   309,    -1,
      68,   309,    -1,    67,   309,    -1,   310,    -1,   311,    -1,
     315,    -1,   312,    -1,    81,   133,   270,   134,    -1,    81,
      82,   133,   270,   134,    -1,    81,    83,   133,   270,   134,
      -1,   313,   133,   134,    -1,   313,   133,   270,   134,    -1,
     314,    -1,   313,   314,    -1,    30,    25,    26,    31,    -1,
      30,    25,    31,    -1,    77,    -1,    77,   316,    -1,    78,
     316,    -1,   316,    -1,   316,    77,   317,    -1,   316,    78,
     317,    -1,   317,    -1,   318,    -1,   328,    -1,   319,   329,
      -1,   322,   329,    -1,   320,   325,    -1,   321,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,   150,
      -1,   151,    -1,   102,   325,    -1,   325,    -1,   323,   325,
      -1,   324,    -1,   109,    -1,   149,    -1,   152,    -1,   153,
      -1,   148,    -1,   103,    -1,   366,    -1,   326,    -1,   416,
      -1,   327,    -1,   110,    -1,    12,    -1,    13,    -1,   330,
     329,    -1,    -1,   329,    79,   270,    80,    -1,   331,    -1,
     333,    -1,   334,    -1,   335,    -1,   338,    -1,   340,    -1,
     336,    -1,   337,    -1,   332,    -1,   415,    -1,   412,    -1,
     413,    -1,   414,    -1,    38,     8,    -1,   115,   270,   116,
      -1,   115,   116,    -1,   101,    -1,   157,   133,   270,   134,
      -1,   158,   133,   270,   134,    -1,     4,   116,    -1,     4,
     339,   116,    -1,   339,    34,   271,    -1,   271,    -1,   341,
      -1,   352,    -1,   342,    -1,   349,    -1,   350,    -1,   117,
       5,   343,   118,    -1,   117,     5,   343,   121,   347,   120,
       5,   121,    -1,    -1,   343,     6,   119,   344,    -1,   129,
     345,   130,    -1,   131,   346,   132,    -1,    -1,   345,   268,
      -1,   345,    33,    -1,   345,     9,    -1,   345,   348,    -1,
      -1,   346,   268,    -1,   346,    32,    -1,   346,     9,    -1,
     346,   348,    -1,    -1,   347,   341,    -1,   347,     9,    -1,
     347,   351,    -1,   347,   268,    -1,   347,   348,    -1,    11,
      -1,    10,    -1,   127,    -1,   128,    -1,    21,    -1,   126,
      15,    23,    -1,    22,    -1,   353,    -1,   354,    -1,   356,
      -1,   357,    -1,   358,    -1,   359,    -1,   122,   133,   270,
     134,    -1,    17,   133,   355,   134,    -1,    17,   133,   134,
      -1,   123,   133,   270,   134,   133,   355,   134,    -1,   123,
     133,   270,   134,   133,   134,    -1,   270,    -1,    16,   133,
     270,   134,    -1,    16,   133,   134,    -1,   124,   133,   270,
     134,   133,   270,   134,    -1,   124,   133,   270,   134,   133,
     134,    -1,   125,   133,   270,   134,    -1,   147,   133,   270,
     134,    -1,    24,   133,   270,   134,    -1,    24,   133,   134,
      -1,   146,   133,   270,   134,   133,   270,   134,    -1,   146,
     133,   270,   134,   133,   134,    -1,   365,   161,    -1,   365,
      -1,    57,   362,    -1,   364,   363,    -1,   364,    -1,   139,
     115,   116,    -1,   163,    -1,   162,    -1,   161,    -1,   365,
      -1,   366,    -1,   140,   115,   116,    -1,   416,    -1,   368,
      -1,   376,    -1,   372,    -1,   378,    -1,   374,    -1,   371,
      -1,   370,    -1,   369,    -1,   367,    -1,   114,   116,    -1,
     142,   116,    -1,   142,   376,   116,    -1,   142,   378,   116,
      -1,   113,   116,    -1,   112,   116,    -1,   111,   116,    -1,
     111,    14,   116,    -1,   111,     7,   116,    -1,   143,   116,
      -1,   143,   373,   116,    -1,   143,   373,    34,   382,   116,
      -1,   380,    -1,   110,    -1,   156,   375,   116,    -1,   380,
      -1,   144,   116,    -1,   144,   377,   116,    -1,   144,   377,
      34,   382,   116,    -1,   144,   377,    34,   382,   141,   116,
      -1,   381,    -1,   110,    -1,   155,   379,   116,    -1,   381,
      -1,   416,    -1,   416,    -1,   416,    -1,     7,    -1,   386,
     385,   186,   413,    -1,   386,   385,    -1,    -1,   385,   393,
      -1,   385,   392,    -1,   386,   188,   387,    -1,   387,    -1,
     387,   189,   388,    -1,   388,    -1,   388,   190,   389,    -1,
     389,    -1,   191,   390,    -1,   390,    -1,   115,   384,   116,
      -1,   391,    -1,   331,   407,    -1,   333,   407,    -1,   335,
     407,    -1,   338,   407,    -1,   133,   270,   134,   407,    -1,
     160,    -1,   192,   303,   409,    -1,   193,   408,   409,    -1,
     194,   408,   195,    -1,   196,   410,    -1,   197,   410,    -1,
     198,    -1,   199,    -1,   200,    -1,   394,    -1,   395,    -1,
     396,    -1,   397,    -1,   400,    -1,   405,    -1,   406,    -1,
     201,    -1,   202,    -1,   204,    -1,   203,    -1,   205,    -1,
     206,    -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,
     211,   399,    -1,   211,   173,    -1,   211,   115,   399,   398,
     116,    -1,   211,   115,   173,   398,   116,    -1,   212,    -1,
      -1,   398,    34,   399,    -1,    39,   415,    -1,    39,   415,
     213,   415,    -1,    39,   415,   408,   214,    -1,    39,   415,
     213,   415,   408,   214,    -1,   215,   402,   401,    -1,   216,
      -1,   217,   401,    -1,    -1,   401,   404,    -1,    39,   415,
      -1,   115,   403,   116,    -1,   415,    -1,   403,    34,   415,
      -1,    73,   402,    -1,    76,   402,    -1,   218,   415,    -1,
     219,    -1,   220,    -1,    -1,   221,    -1,   222,    -1,   223,
      -1,   224,    -1,   225,    -1,   226,   303,    -1,   227,   303,
      -1,   228,   303,    -1,   229,   303,    66,   303,    -1,   230,
      -1,   231,    -1,   232,    -1,   233,    -1,   234,    -1,   235,
     303,    -1,    18,    -1,    19,    -1,    20,    -1,     7,    -1,
       3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   567,   567,   568,   569,   570,   575,   582,   616,   623,
     630,   642,   644,   649,   654,   659,   664,   668,   675,   679,
     693,   694,   695,   696,   697,   698,   699,   704,   705,   710,
     715,   740,   749,   762,   771,   784,   807,   816,   825,   838,
     847,   860,   874,   878,   886,   890,   898,   919,   932,   950,
     968,   980,   995,  1000,  1009,  1013,  1021,  1036,  1051,  1065,
    1083,  1091,  1099,  1106,  1118,  1127,  1141,  1147,  1153,  1159,
    1165,  1171,  1177,  1183,  1193,  1198,  1208,  1212,  1220,  1228,
    1236,  1254,  1262,  1263,  1264,  1265,  1266,  1271,  1275,  1279,
    1283,  1290,  1296,  1300,  1301,  1307,  1314,  1318,  1326,  1332,
    1339,  1345,  1351,  1357,  1363,  1369,  1379,  1389,  1401,  1410,
    1415,  1423,  1429,  1435,  1441,  1447,  1454,  1464,  1470,  1480,
    1485,  1495,  1499,  1515,  1516,  1518,  1524,  1533,  1535,  1542,
    1546,  1553,  1557,  1565,  1571,  1581,  1588,  1598,  1603,  1612,
    1616,  1624,  1632,  1646,  1651,  1665,  1675,  1679,  1683,  1687,
    1691,  1695,  1699,  1703,  1707,  1711,  1715,  1719,  1723,  1727,
    1731,  1735,  1740,  1746,  1752,  1757,  1761,  1766,  1770,  1774,
    1779,  1783,  1787,  1791,  1795,  1800,  1804,  1808,  1813,  1817,
    1821,  1826,  1830,  1835,  1841,  1846,  1856,  1861,  1871,  1876,
    1882,  1886,  1891,  1892,  1893,  1901,  1905,  1909,  1917,  1924,
    1934,  1935,  1941,  1958,  1979,  1985,  1991,  2005,  2010,  2016,
    2029,  2034,  2035,  2040,  2044,  2053,  2065,  2076,  2080,  2084,
    2088,  2092,  2096,  2100,  2108,  2116,  2134,  2142,  2151,  2155,
    2159,  2163,  2167,  2175,  2187,  2188,  2193,  2200,  2205,  2212,
    2219,  2230,  2240,  2243,  2253,  2254,  2255,  2256,  2257,  2258,
    2259,  2260,  2265,  2266,  2271,  2272,  2273,  2279,  2291,  2305,
    2313,  2321,  2331,  2341,  2346,  2353,  2358,  2367,  2371,  2381,
    2382,  2383,  2388,  2400,  2442,  2445,  2477,  2481,  2491,  2494,
    2502,  2507,  2512,  2523,  2526,  2534,  2539,  2544,  2560,  2563,
    2584,  2613,  2632,  2654,  2670,  2671,  2672,  2676,  2685,  2701,
    2727,  2747,  2748,  2749,  2750,  2751,  2752,  2757,  2775,  2789,
    2801,  2810,  2821,  2826,  2839,  2851,  2859,  2870,  2880,  2890,
    2903,  2915,  2923,  2934,  2941,  2952,  2962,  2969,  2976,  2985,
    2987,  2989,  2995,  2999,  3004,  3012,  3028,  3029,  3030,  3031,
    3032,  3033,  3034,  3035,  3036,  3041,  3051,  3057,  3066,  3079,
    3089,  3099,  3105,  3111,  3121,  3127,  3133,  3143,  3144,  3152,
    3162,  3167,  3173,  3179,  3185,  3197,  3198,  3206,  3216,  3221,
    3226,  3231,  3236,  3248,  3260,  3275,  3278,  3282,  3292,  3303,
    3308,  3319,  3324,  3328,  3333,  3337,  3342,  3346,  3351,  3355,
    3359,  3363,  3367,  3381,  3385,  3389,  3393,  3398,  3402,  3406,
    3410,  3414,  3428,  3429,  3430,  3431,  3432,  3433,  3434,  3442,
    3446,  3450,  3454,  3465,  3469,  3473,  3477,  3485,  3489,  3499,
    3503,  3507,  3511,  3515,  3523,  3525,  3532,  3536,  3540,  3544,
    3554,  3558,  3562,  3570,  3572,  3580,  3584,  3591,  3595,  3603,
    3607,  3615,  3623,  3627,  3636,  3639,  3643,  3647,  3651,  3655,
    3666,  3672,  3678,  3684,  3694,  3698,  3702,  3710,  3714,  3722,
    3730,  3743,  3756,  3770,  3783
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
  "\"element\"", "\"function\"", "\"score\"", "\"ftcontains\"",
  "\"weight\"", "\"declare ft-option\"", "\"||\"", "\"&&\"", "\"not in\"",
  "\"!\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"at start\"", "\"at end\"",
  "\"entire content\"", "\"lowercase\"", "\"uppercase\"",
  "\"case insensitive\"", "\"case sensitive\"", "\"with diacritics\"",
  "\"without diacritics\"", "\"diacritics sensitive\"",
  "\"diacritics insensitive\"", "\"with stemming\"",
  "\"without stemming\"", "\"with thesaurus\"", "\"without thesaurus\"",
  "\"relationship\"", "\"levels\"", "\"with stop words\"",
  "\"without stop words\"", "\"with default stop words\"", "\"language\"",
  "\"with wildcards\"", "\"without wildcards\"", "\"any\"", "\"any word\"",
  "\"all\"", "\"all words\"", "\"phrase\"", "\"exactly\"", "\"at least\"",
  "\"at most\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"without content\"",
  "_EOF_", "$accept", "Module", "VersionDecl", "MainModule",
  "LibraryModule", "ModuleDecl", "Prolog", "Setter", "Import", "Separator",
  "NamespaceDecl", "BoundarySpaceDecl", "DefaultNamespaceDecl",
  "OptionDecl", "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "ConstructionDecl", "FunctionDecl", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FlworExprForLetList",
  "ForOrLetClause", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "FTScoreVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderDirection", "EmptyHandling", "QuantifiedExpr",
  "QuantifyBindingList", "QuantifyBinding", "TypeswitchExpr",
  "CaseClauseList", "CaseClause", "IfExpr", "OrExpr", "AndExpr",
  "ComparisonExpr", "FTContainsExpr", "RangeExpr", "AdditiveExpr",
  "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
  "InstanceofExpr", "TreatExpr", "CastableExpr", "CastExpr", "UnaryExpr",
  "ValueExpr", "ValidateExpr", "ExtensionExpr", "PragmaList", "Pragma",
  "PathExpr", "RelativePathExpr", "StepExpr", "AxisStep", "ForwardStep",
  "ForwardAxis", "AbbrevForwardStep", "ReverseStep", "ReverseAxis",
  "AbbrevReverseStep", "NodeTest", "NameTest", "Wildcard", "FilterExpr",
  "PredicateList", "PrimaryExpr", "Literal", "NumericLiteral", "VarRef",
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
  "ElementName", "TypeName", "URILiteral", "FTSelection",
  "FTSelectionOptions", "FTOr", "FTAnd", "FTMildnot", "FTUnaryNot",
  "FTWordsSelection", "FTWords", "FTProximity", "FTMatchOption",
  "FTCaseOption", "FTDiacriticsOption", "FTStemOption",
  "FTThesaurusOption", "FTThesaurusIDList", "FTThesaurusID",
  "FTStopwordOption", "FTInclExclStringLiteralList", "FTRefOrList",
  "FTRefOrListStringList", "FTInclExclStringLiteral", "FTLanguageOption",
  "FTWildCardOption", "FTAnyallOption", "FTRange", "FTUnit", "FTBigUnit",
  "FTIgnoreOption", "IntegerLiteral", "DecimalLiteral", "DoubleLiteral",
  "StringLiteral", "QName", 0
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
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   237,   238,   238,   238,   238,   239,   239,   240,   241,
     242,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   245,   245,   246,
     247,   248,   248,   249,   249,   250,   251,   252,   252,   253,
     253,   254,   255,   255,   256,   256,   257,   258,   259,   259,
     259,   259,   260,   260,   261,   261,   262,   262,   262,   262,
     263,   263,   263,   263,   264,   264,   265,   265,   265,   265,
     265,   265,   265,   265,   266,   266,   267,   267,   268,   269,
     270,   270,   271,   271,   271,   271,   271,   272,   272,   272,
     272,   273,   273,   274,   274,   275,   276,   276,   277,   277,
     277,   277,   277,   277,   277,   277,   278,   279,   280,   281,
     281,   282,   282,   282,   282,   282,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   288,   288,   288,   289,
     289,   290,   290,   291,   291,   292,   292,   293,   293,   294,
     294,   295,   296,   296,   297,   297,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   299,   299,   299,   300,   300,   301,   301,   301,
     302,   302,   302,   302,   302,   303,   303,   303,   304,   304,
     304,   305,   305,   306,   306,   307,   307,   308,   308,   309,
     309,   309,   310,   310,   310,   311,   311,   311,   312,   312,
     313,   313,   314,   314,   315,   315,   315,   315,   316,   316,
     316,   317,   317,   318,   318,   319,   319,   320,   320,   320,
     320,   320,   320,   320,   321,   321,   322,   322,   323,   323,
     323,   323,   323,   324,   325,   325,   326,   326,   327,   327,
     327,   328,   329,   329,   330,   330,   330,   330,   330,   330,
     330,   330,   331,   331,   332,   332,   332,   333,   334,   334,
     335,   336,   337,   338,   338,   339,   339,   340,   340,   341,
     341,   341,   342,   342,   343,   343,   344,   344,   345,   345,
     345,   345,   345,   346,   346,   346,   346,   346,   347,   347,
     347,   347,   347,   347,   348,   348,   348,   348,   349,   350,
     351,   352,   352,   352,   352,   352,   352,   353,   354,   354,
     354,   354,   355,   356,   356,   356,   356,   357,   358,   359,
     359,   359,   359,   360,   360,   361,   362,   362,   362,   363,
     363,   363,   364,   364,   364,   365,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   367,   368,   368,   368,   369,
     370,   371,   371,   371,   372,   372,   372,   373,   373,   374,
     375,   376,   376,   376,   376,   377,   377,   378,   379,   380,
     381,   382,   383,   384,   384,   385,   385,   385,   386,   386,
     387,   387,   388,   388,   389,   389,   390,   390,   391,   391,
     391,   391,   391,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   393,   393,   393,   393,   393,   393,   393,   394,
     394,   394,   394,   395,   395,   395,   395,   396,   396,   397,
     397,   397,   397,   397,   398,   398,   399,   399,   399,   399,
     400,   400,   400,   401,   401,   402,   402,   403,   403,   404,
     404,   405,   406,   406,   407,   407,   407,   407,   407,   407,
     408,   408,   408,   408,   409,   409,   409,   410,   410,   411,
     412,   413,   414,   415,   416
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     2,     1,     1,     4,     6,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     5,     5,     4,     2,     3,     3,     5,
       5,     5,     1,     1,     1,     1,     4,     3,     4,     5,
       3,     4,     2,     3,     3,     3,     7,     6,     4,     3,
       7,     6,     6,     5,     3,     3,     6,     5,     7,     6,
       6,     5,     7,     6,     3,     1,     3,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     5,     4,     4,
       3,     2,     1,     1,     1,     2,     3,     1,     4,     5,
       5,     6,     5,     6,     6,     7,     3,     3,     2,     3,
       1,     4,     5,     5,     6,     3,     2,     3,     4,     3,
       1,     3,     5,     0,     1,     1,     0,     2,     2,     4,
       4,     3,     1,     4,     5,    10,     8,     2,     1,     4,
       7,     8,     3,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     4,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     4,     1,     4,     1,     4,     1,     4,     1,     2,
       2,     1,     1,     1,     1,     4,     5,     5,     3,     4,
       1,     2,     4,     3,     1,     2,     2,     1,     3,     3,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       1,     4,     4,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     4,     8,     0,     4,     3,     3,     0,     2,
       2,     2,     2,     0,     2,     2,     2,     2,     0,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       7,     6,     1,     4,     3,     7,     6,     4,     4,     4,
       3,     7,     6,     2,     1,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     2,
       2,     2,     3,     3,     2,     3,     5,     1,     1,     3,
       1,     2,     3,     5,     6,     1,     1,     3,     1,     1,
       1,     1,     1,     4,     2,     0,     2,     2,     3,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     3,     3,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     5,     5,     1,     0,     3,     2,     4,     4,     6,
       3,     1,     2,     0,     2,     2,     3,     1,     3,     2,
       2,     2,     1,     1,     0,     1,     1,     1,     1,     1,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
      11,     0,     0,     0,    11,     4,     5,    11,     0,     0,
       0,     1,     2,     3,     9,   464,     0,   463,   239,   240,
       0,     0,   460,   461,   462,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
     260,     0,   233,   217,   218,   219,   220,   221,   228,   238,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   232,   229,   222,   223,
     230,   231,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,    24,    25,    26,    21,
      22,    27,    28,     0,    23,     0,     8,    79,    81,    82,
       0,    92,    93,    94,    83,    84,    85,    86,   143,   145,
     161,   164,   166,   169,   174,   177,   180,   182,   184,   186,
     188,   191,   192,   194,     0,   200,   193,   207,   210,   211,
     242,     0,   216,   242,     0,   227,   225,   235,   237,   212,
     242,   244,   252,   245,   246,   247,   250,   251,   248,   249,
     267,   269,   270,   271,   268,   301,   302,   303,   304,   305,
     306,   234,   344,   336,   343,   342,   341,   338,   340,   337,
     339,   254,   255,   256,   253,   236,     0,     0,   263,   266,
       0,     0,     0,     0,     0,     0,    95,    97,   257,     0,
       0,     0,   108,   110,     0,     0,   132,     0,     0,     0,
     190,   189,   205,   206,     0,     0,     0,   224,     0,     0,
     351,   350,   349,   345,   259,     0,   274,     0,     0,     0,
       0,     0,   346,     0,     0,   358,   354,     0,   357,   369,
     366,   361,     0,   365,   370,     0,     0,     0,   368,     0,
     360,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   409,   410,   412,   411,   413,
     414,   415,   416,   417,   418,     0,   423,     0,   431,   433,
       0,   442,   443,    36,   402,   403,   404,   405,   406,   407,
     408,    29,    12,    13,    14,    15,    18,    19,    16,    17,
       0,     0,     0,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     0,   213,   215,   214,   226,   241,
       0,     6,     0,     0,   264,   314,     0,   309,   312,     0,
     320,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   353,
     352,   258,     0,     0,     0,     0,     0,   299,   347,   348,
       0,   355,     0,   362,     0,     0,   367,   359,     0,     0,
       0,    31,    32,   372,    47,    64,    65,    38,    37,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,    50,     0,    59,     0,     0,   420,   419,     0,
       0,   433,   432,   441,    80,    90,   116,     0,     0,     0,
       0,     0,   142,   144,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
       0,     0,   444,   444,   444,   444,   162,   375,   379,   381,
     383,   385,   387,   165,   167,   168,   170,   171,   172,   173,
     176,   175,   178,   179,     0,     0,     0,     0,   198,     0,
     208,   209,     0,     0,     0,   265,   313,   308,   319,   202,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
     107,   115,   109,     0,     0,   131,   129,   130,     0,     0,
       0,     0,   195,     0,   272,   288,   307,     0,     0,   317,
       0,   371,     0,     0,   318,   261,   262,     0,     0,    46,
       0,     0,     0,     0,    35,     0,     0,     0,     0,    75,
       0,     0,    48,     0,    51,     0,    58,   426,   424,   424,
     435,     0,   437,   430,     0,     0,   434,   123,   117,   120,
       0,    88,     0,    89,     0,     0,   384,   445,   446,   447,
     448,   449,   388,   389,   390,   391,     0,   163,     0,   374,
       0,     0,     0,     0,   181,   327,   332,   333,   335,   183,
     185,   324,   187,   199,     0,     7,    10,    98,     0,   325,
       0,     0,     0,     0,     0,     0,   111,     0,     0,     0,
     133,     0,     0,     0,   138,     0,   196,   197,     0,     0,
       0,     0,   356,   363,     0,     0,    30,    39,    40,    33,
      34,    44,    45,    41,     0,    63,     0,    77,     0,    71,
      67,     0,     0,     0,     0,    54,    55,    49,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     436,   439,   440,   124,   125,   126,     0,   118,    87,   386,
     444,   459,   378,   393,     0,     0,     0,     0,     0,     0,
     399,   400,   401,   377,   376,   380,   382,     0,     0,   331,
     330,   329,   326,   323,   243,   106,   100,     0,    99,   102,
       0,     0,     0,   112,   113,     0,   134,     0,     0,     0,
     137,     0,   278,   283,   275,   290,   295,   294,   300,     0,
     296,   297,   292,   289,   293,   291,   311,     0,   316,     0,
     364,   322,     0,    61,     0,    62,    76,     0,    73,    69,
      74,    70,    66,     0,    53,    57,   427,   450,   451,   452,
       0,   428,     0,   422,   421,   438,     0,   121,   119,   392,
     373,     0,     0,     0,   457,   458,   397,   398,   328,   334,
     101,   104,     0,   103,   114,     0,     0,     0,     0,     0,
       0,     0,     0,   310,   315,   321,    60,    78,    72,    68,
      56,     0,     0,   425,   127,   128,     0,   454,   455,   456,
     394,   395,   396,   105,     0,   139,   136,     0,   141,   281,
     280,   276,   279,   282,   286,   285,   277,   284,   287,   273,
     429,   453,   122,     0,     0,     0,   135,   140
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    79,    80,   282,
      81,    82,    83,    84,    85,    86,    87,    88,   405,   633,
      89,    90,    91,   544,   411,    92,    93,    94,    95,   538,
     539,   640,    96,   348,    98,    99,   100,   101,   102,   186,
     187,   493,   191,   103,   192,   193,   296,   297,   558,   559,
     665,   757,   104,   195,   196,   105,   613,   614,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   335,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   180,   149,   150,   151,   372,   714,   780,   781,
     619,   724,   152,   153,   725,   154,   155,   156,   349,   157,
     158,   159,   160,   590,   495,   584,   692,   585,   586,   161,
     162,   163,   164,   165,   166,   167,   227,   168,   239,   169,
     232,   170,   237,   228,   233,   520,   394,   456,   579,   457,
     458,   459,   460,   461,   462,   683,   273,   274,   275,   276,
     277,   657,   418,   278,   422,   421,   551,   556,   279,   280,
     572,   656,   800,   766,   577,   171,   172,   173,   174,   175
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -607
static const short int yypact[] =
{
     201,   -95,   -33,   136,   -69,  -607,  -607,  -607,   590,   276,
     290,  -607,  -607,  -607,   -46,  -607,   763,  -607,  -607,  -607,
     123,   248,  -607,  -607,  -607,  -607,   258,   319,   311,   361,
     -27,   357,   357,   284,   291,  2323,  2323,  2479,  2479,    -7,
    -607,   111,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
      66,   314,   327,   338,   919,   451,   340,   342,   347,   349,
     471,   -42,    74,    81,   364,   410,  -607,  -607,  -607,  -607,
    -607,  -607,   542,   542,   415,   420,   294,   116,   322,   424,
     424,   424,  -607,   424,   424,   424,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,   424,  -607,   424,  -607,   549,  -607,  -607,
     372,  -607,  -607,  -607,  -607,  -607,  -607,   524,   534,  -607,
     473,   413,   366,   333,   239,   310,  -607,   541,   520,   547,
     529,  -607,  -607,  -607,    39,  -607,  -607,   341,  -607,  -607,
    -607,   111,  -607,  -607,   111,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,   -65,   530,  -607,  -607,
      23,  1075,  1231,  1387,   298,   609,   587,  -607,  -607,   614,
     585,   583,   591,  -607,   619,    57,  -607,    67,  2167,  2167,
    -607,  -607,   341,   341,   496,   498,  2167,  -607,   517,   518,
    -607,  -607,  -607,  -607,  -607,    82,  -607,  2167,  2167,  2167,
    2167,   612,  -607,   522,   523,  -607,  -607,    93,  -607,  -607,
    -607,  -607,   186,  -607,  -607,  2167,  2167,   525,  -607,   528,
    -607,  2167,  2167,   622,   289,   630,   315,   301,    21,   -50,
     602,   643,   645,     6,    29,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,    -8,  -607,    14,  -607,  -607,
     640,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    2167,  2167,  2167,   608,   610,  -607,    52,   617,  2323,  2323,
    2323,  2323,  2323,  2323,  2323,  2323,  2323,  2323,  2323,  2323,
    2323,  2323,  2323,  2323,  2323,    48,  2323,  2323,  2323,  2323,
    2323,  2323,  2323,  2323,  2323,  2323,  2323,   589,   598,   599,
     603,  1543,  -607,  2479,  2479,   580,  -607,   580,  -607,   580,
     654,  -607,   630,  2167,  -607,  -607,    71,  -607,   549,   531,
    -607,    85,   631,  -607,    24,   311,     5,   655,  2167,   -27,
     251,   357,  2167,  2167,   225,   255,  2167,  2167,   100,  -607,
    -607,  -607,    43,   103,   104,   110,   113,  -607,  -607,  -607,
     542,  -607,   542,  -607,   181,   199,  -607,  -607,   211,   214,
     578,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,   618,
     630,   532,   533,  -607,  -607,   638,   665,   667,    90,   661,
     494,   630,   639,   663,   639,   640,   -23,  -607,  -607,   640,
     640,  -607,    69,  -607,  -607,  -607,  -607,  2167,   636,  2167,
     647,  2167,   534,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,    48,
    2167,   242,   224,   224,   224,   224,   445,   495,   499,   497,
    -607,  -607,  -607,   404,   333,   333,   239,   239,   239,   239,
     310,   310,  -607,  -607,   129,   129,   542,   542,  -607,   216,
    -607,  -607,  2167,   424,   424,  -607,  -607,  -607,  -607,  -607,
    2167,   652,   129,   -11,   648,   -25,  -607,  2167,   668,     4,
    -607,  -607,  -607,  2167,   669,  -607,  -607,  -607,   664,   649,
     217,   218,  -607,   592,  -607,  -607,  -607,   577,   584,  -607,
     605,  -607,   -38,   586,  -607,  -607,  -607,   630,   429,  -607,
     630,   630,   318,    41,  -607,   714,   -45,   129,    30,  -607,
     637,   588,   639,   630,   690,   641,   690,   161,  -607,  -607,
    -607,   256,  -607,    69,    14,    14,  -607,   469,   692,  -607,
    2167,  -607,  2167,  -607,   613,   229,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  2323,  -607,    48,   302,
      48,    48,   615,   616,  -607,   160,  -607,  -607,  -607,  -607,
    -607,   567,  -607,  -607,    45,  -607,  -607,  -607,   727,  -607,
    2167,   707,  2167,  2167,    17,   712,  -607,  2167,  2167,   710,
    -607,  2167,   254,   -18,  -607,  2167,  -607,  -607,   328,   309,
    1699,  1855,  -607,  -607,   646,  2011,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,  2167,  -607,    49,   695,  2167,  -607,
    -607,   -39,   715,   -15,   129,  -607,  -607,   690,  -607,   630,
     630,   640,  2323,  2323,  2323,  2323,   540,   257,   261,   640,
    -607,  -607,  -607,  -607,  -607,   709,  2167,   692,  -607,  -607,
     224,   239,   499,  -607,   736,  2323,   263,   263,   316,   316,
    -607,  -607,  -607,  -607,  -607,   497,  -607,   656,   657,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  2167,  -607,  -607,
    2167,   722,  2167,  -607,  -607,  2167,  -607,   756,   730,   345,
    -607,   708,  -607,  -607,  -607,  -607,  -607,  -607,  -607,   766,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,   644,  -607,   230,
    -607,  -607,   236,  -607,  2167,  -607,  -607,   245,  -607,  -607,
    -607,  -607,  -607,   166,  -607,   639,   263,   239,   239,   239,
     266,  -607,   735,  -607,  -607,  -607,   486,   734,  -607,  -607,
    -607,   -14,   209,   593,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  2167,  -607,  -607,   729,  2167,  2167,   781,  2167,
     325,    99,   670,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
     690,   576,  2323,  -607,  -607,  -607,   630,  -607,  -607,  -607,
    -607,  -607,  -607,  -607,   129,  -607,  -607,   757,  -607,  -607,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,   239,  -607,   759,  2167,  2167,  -607,  -607
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -607,  -607,  -607,   791,   792,  -607,   790,  -607,  -607,   -56,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,
    -607,  -607,  -607,  -407,  -607,  -607,  -607,  -607,  -607,  -607,
     156,  -585,  -607,    -6,   -16,  -607,  -607,   700,  -607,  -607,
     447,   312,  -339,  -607,  -607,   446,  -607,   508,   250,   140,
    -607,  -607,  -607,   779,   452,  -607,  -607,   204,  -607,  -607,
     514,   515,   545,  -607,   503,   234,  -299,   231,   249,  -607,
    -607,  -607,   521,  -607,  -607,  -607,  -607,   696,  -607,   539,
     246,  -607,  -607,  -607,  -607,  -607,  -607,  -607,    76,  -607,
    -607,  -607,   153,  -607,  -280,  -607,  -275,  -607,  -271,  -607,
    -607,  -264,  -607,  -607,   203,  -607,  -607,  -607,  -607,  -607,
    -607,  -199,  -607,  -607,  -607,  -607,  -607,  -607,   205,  -607,
    -607,  -607,  -607,   346,  -350,  -445,  -607,  -607,   112,  -442,
    -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,  -607,   765,
    -607,   767,  -607,   751,   755,   450,  -249,   380,  -607,  -607,
     259,   253,   262,   383,  -607,  -607,   260,  -607,  -607,  -607,
    -607,   286,  -415,  -607,   417,    46,  -607,  -607,  -607,  -607,
    -412,  -606,    80,   157,  -607,  -607,   187,  -607,  -267,   -54
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     179,   549,    97,   423,   412,   414,   499,   546,   229,   234,
     504,   189,   603,   393,   491,   494,   415,   498,   234,   229,
     466,   467,   468,   469,   283,   284,   600,   285,   286,   287,
     589,   415,   587,   587,   722,   452,   393,   288,   612,   289,
     453,   573,   574,   575,   454,   608,   497,   599,   215,   513,
     587,   455,    16,   419,   700,    17,   739,   343,   742,   323,
     324,   490,   492,   491,   642,   399,    22,    23,    24,    27,
     762,   763,   400,   208,   222,   204,   205,    15,   623,   290,
     209,   492,   634,     9,    15,   403,    29,   429,   638,   281,
     734,   361,   641,   484,   638,   587,   293,   294,   492,   340,
     639,   361,    63,   624,    10,   290,   738,   416,   814,   716,
     717,   362,     2,    72,    15,   404,   290,   207,   638,   290,
     341,   363,    76,    18,    19,   694,   206,   380,   535,   420,
     741,   815,    15,    77,   290,   647,    11,   290,   290,   344,
     791,    78,   554,   409,   290,   555,   643,   290,   547,    40,
     548,   529,   550,   552,   601,   709,   605,   190,   789,   190,
     609,   514,   542,   449,   515,   417,   413,   708,   644,   452,
     587,   452,   331,   190,   453,   346,   453,   351,   454,   410,
     454,   450,   210,   636,   225,   455,   635,   455,   190,   190,
     226,   230,   364,   365,   735,   812,   817,   231,   371,   743,
     368,   190,   587,   401,   402,   486,   536,   336,   190,   381,
     338,   373,   374,   375,   376,   290,   797,   798,   799,   488,
     382,    49,    50,    51,    52,    53,   720,   721,   537,   384,
     385,   816,   638,   290,   512,   388,   389,   516,   517,   451,
      50,    51,    52,    53,   518,   290,    16,   519,   290,    17,
     290,   290,   290,    61,    62,    63,   181,    15,   759,   290,
      22,    23,    24,   290,   290,   701,    72,    73,   582,   583,
     290,    61,    62,    63,   424,   425,   426,   671,   626,   290,
      29,   629,   630,   176,    72,    73,   337,   736,   503,   290,
     659,   752,   707,   339,   648,   752,   253,   254,   452,   638,
     452,   452,   383,   453,   177,   453,   453,   454,   492,   454,
     454,   788,   323,   324,   455,   523,   455,   455,   715,   716,
     717,   689,   690,   691,   352,   479,   521,   485,   521,   353,
      25,   718,   792,   524,   809,   716,   717,   793,   790,   323,
     324,   508,   501,    40,   184,   525,   506,   507,   526,   185,
     593,   616,   617,   747,   748,   749,   750,   449,   810,   823,
     510,   511,   587,   670,   784,    50,    51,    52,    53,   188,
     785,   509,   660,   753,   651,   450,   761,   754,     1,   787,
     777,   182,     2,   778,   746,   325,   326,   652,   653,   654,
     655,   183,   755,   582,   583,   194,    61,    62,    63,   198,
     744,   745,   319,   320,   321,   322,   199,   291,    28,    72,
      73,   557,    30,   561,   292,   563,   293,   294,   333,   334,
     588,   588,   588,   588,   391,   392,    55,   595,   596,   719,
     211,   243,   316,   317,   318,    60,   720,   721,   588,   797,
     798,   799,   638,   212,   565,   567,   568,   569,   570,   571,
     395,   396,   720,   721,   213,   811,   216,   712,   638,   713,
     397,   398,   673,   244,   245,   246,   247,   248,   249,   250,
     251,   317,   318,   217,   597,   218,   594,   252,   627,   628,
     219,   606,   220,   588,   631,   632,   221,   610,   674,   652,
     653,   654,   655,   821,   675,   676,   677,   235,   678,   679,
     680,   681,   682,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   663,   664,   267,   268,   269,
     270,   271,   272,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   794,   795,   267,   268,   269,
     270,   271,   272,   236,   557,    15,   668,   822,   241,   764,
     765,   464,   465,   242,   470,   471,   200,   201,   588,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   472,   473,   202,   203,   281,   480,
     481,   813,   818,   290,   696,   298,   698,   699,   591,   591,
     588,   703,   704,    15,    16,   706,   299,    17,   315,   711,
     661,   662,    18,    19,   327,   328,    20,    21,    22,    23,
      24,    25,   329,   330,    26,   729,   342,   354,   733,   732,
      27,   355,   356,   357,   358,   359,    28,   360,    29,   366,
      30,   367,   737,   369,   370,   377,   390,   393,   378,   379,
     406,   386,    31,    32,   387,    33,   407,    17,    34,   408,
     557,   427,   431,   474,   428,   475,   476,    35,    36,   482,
     477,   483,   489,   500,   527,   487,   528,    37,    38,   530,
     531,    39,   532,   533,   534,   540,   541,   545,   543,   560,
     576,   770,   562,   578,   771,   602,   773,   581,   580,   774,
     598,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   611,    55,   615,   607,
     620,   618,    56,    57,    58,    59,    60,   621,   786,   625,
     612,   622,   637,   645,   649,   646,   666,   650,   693,   669,
     687,   688,    61,    62,    63,   695,    64,    65,    66,    67,
      68,    69,    70,    71,   697,    72,    73,    74,    75,   702,
     588,   705,   492,   535,   751,    23,   803,   756,    76,   772,
     805,   806,   730,   808,   775,   776,    15,    16,   779,    77,
      17,   782,   768,   769,   415,    18,    19,    78,   783,    20,
      21,    22,    23,    24,    25,   796,   804,    26,   802,   807,
     820,   819,   824,    27,   825,    12,    13,    14,   740,    28,
     295,    29,   496,    30,   430,   502,   758,   604,   826,   827,
     667,   197,   432,   505,   433,    31,    32,   710,    33,   463,
     332,    34,   723,   592,   240,   727,   223,   238,   224,   564,
      35,    36,   522,   685,   566,   658,   767,   672,   553,   684,
      37,    38,   801,   686,    39,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
       0,   760,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   178,
      55,     0,     0,     0,     0,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    72,    73,
      74,    75,    15,    16,     0,     0,    17,     0,     0,     0,
       0,    18,    19,     0,     0,    20,    21,    22,    23,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   214,    55,     0,     0,     0,
       0,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,     0,    72,    73,    74,    75,    15,    16,
       0,     0,    17,     0,     0,     0,     0,    18,    19,     0,
       0,    20,    21,    22,    23,    24,    25,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
      33,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,     0,     0,     0,     0,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,   345,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     0,
      72,    73,    74,    75,    15,    16,     0,     0,    17,     0,
       0,     0,     0,    18,    19,     0,     0,    20,    21,    22,
      23,    24,    25,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    55,     0,
       0,     0,     0,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,   347,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    72,    73,    74,    75,
      15,    16,     0,     0,    17,     0,     0,     0,     0,    18,
      19,     0,     0,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    55,     0,     0,     0,     0,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,   350,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,     0,    72,    73,    74,    75,    15,    16,     0,     0,
      17,     0,     0,     0,     0,    18,    19,     0,     0,    20,
      21,    22,    23,    24,    25,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,    33,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
      55,     0,     0,     0,     0,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,   478,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    72,    73,
      74,    75,    15,    16,     0,     0,    17,     0,     0,     0,
       0,    18,    19,     0,     0,    20,    21,    22,    23,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,    55,     0,     0,     0,
       0,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,   726,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,     0,    72,    73,    74,    75,    15,    16,
       0,     0,    17,     0,     0,     0,     0,    18,    19,     0,
       0,    20,    21,    22,    23,    24,    25,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
      33,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,    55,     0,     0,     0,     0,    56,    57,    58,
      59,    60,     0,     0,     0,     0,     0,     0,     0,   728,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    69,    70,    71,     0,
      72,    73,    74,    75,    15,    16,     0,     0,    17,     0,
       0,     0,     0,    18,    19,     0,     0,    20,    21,    22,
      23,    24,    25,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,    55,     0,
       0,     0,     0,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,   731,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,     0,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    72,    73,    74,    75,
      15,    16,     0,     0,    17,     0,     0,     0,     0,    18,
      19,     0,     0,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,    55,     0,     0,     0,     0,    56,
      57,    58,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,     0,    64,    65,    66,    67,    68,    69,    70,
      71,     0,    72,    73,    74,    75,    15,    16,     0,     0,
      17,     0,     0,     0,     0,    18,    19,     0,     0,    20,
      21,    22,    23,    24,    25,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,     0,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
      55,     0,     0,     0,     0,    56,    57,    58,    59,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,     0,    64,
      65,    66,    67,    68,    69,    70,    71,     0,    72,    73,
      74,    75,    15,    16,     0,     0,    17,     0,     0,     0,
       0,    18,    19,     0,     0,    20,    21,    22,    23,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,    55,     0,     0,     0,
       0,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,     0,    64,    65,    66,    67,    68,
      69,    70,    71,     0,    72,    73,    74,    75
};

static const short int yycheck[] =
{
      16,   416,     8,   270,   253,   254,   356,   414,    62,    63,
     360,    38,    37,     7,    39,   354,    39,   356,    72,    73,
     319,   320,   321,   322,    80,    81,    37,    83,    84,    85,
     475,    39,   474,   475,   619,   315,     7,    93,    56,    95,
     315,   453,   454,   455,   315,    41,    41,   492,    54,     6,
     492,   315,     4,    39,    37,     7,   641,    34,   643,    73,
      74,    37,    57,    39,    34,    44,    18,    19,    20,    30,
     676,   677,    51,     7,   116,    82,    83,     3,   116,    34,
      14,    57,    41,   178,     3,   135,    38,    35,   133,   154,
      41,    34,   537,   342,   133,   537,    44,    45,    57,   164,
     145,    34,   144,   141,   137,    34,   145,   115,     9,    10,
      11,    54,   181,   155,     3,   165,    34,    41,   133,    34,
     176,    54,   168,    12,    13,    80,   133,    34,    38,   115,
     145,    32,     3,   179,    34,   542,     0,    34,    34,   116,
     746,   187,    73,   137,    34,    76,   116,    34,   415,   101,
     173,   400,   419,   420,   493,   173,   495,   184,   743,   184,
     499,   118,   411,   115,   121,   173,   137,   612,   138,   449,
     612,   451,   133,   184,   449,   181,   451,   183,   449,   173,
     451,   133,   116,   533,   110,   449,   145,   451,   184,   184,
     116,   110,   198,   199,   145,   780,   781,   116,   116,   644,
     206,   184,   644,   182,   183,   134,   116,   131,   184,   116,
     134,   217,   218,   219,   220,    34,   230,   231,   232,   134,
      34,   110,   111,   112,   113,   114,   127,   128,   138,   235,
     236,   132,   133,    34,   134,   241,   242,   134,   134,   191,
     111,   112,   113,   114,   134,    34,     4,   134,    34,     7,
      34,    34,    34,   142,   143,   144,   133,     3,   670,    34,
      18,    19,    20,    34,    34,   604,   155,   156,   139,   140,
      34,   142,   143,   144,   290,   291,   292,   576,   527,    34,
      38,   530,   531,     7,   155,   156,   133,   637,    37,    34,
      34,    34,    38,   140,   543,    34,   180,   181,   578,   133,
     580,   581,   116,   578,    14,   580,   581,   578,    57,   580,
     581,   145,    73,    74,   578,   134,   580,   581,     9,    10,
      11,   161,   162,   163,    26,   331,   380,   343,   382,    31,
      21,    22,    66,   134,     9,    10,    11,   752,   745,    73,
      74,   116,   358,   101,    25,   134,   362,   363,   134,    38,
     134,   134,   134,   652,   653,   654,   655,   115,    33,   804,
     366,   367,   804,   134,   134,   111,   112,   113,   114,     8,
     134,   116,   116,   116,   213,   133,   675,   116,   177,   134,
      35,   133,   181,    38,   651,    75,    76,   226,   227,   228,
     229,   133,   659,   139,   140,    38,   142,   143,   144,   115,
     649,   650,    69,    70,    71,    72,   115,    35,    36,   155,
     156,   427,    40,   429,    42,   431,    44,    45,    77,    78,
     474,   475,   476,   477,   135,   136,   117,   483,   484,   120,
     116,   137,    66,    67,    68,   126,   127,   128,   492,   230,
     231,   232,   133,   116,   450,   221,   222,   223,   224,   225,
     135,   136,   127,   128,   116,   130,     5,   129,   133,   131,
     159,   160,   160,   169,   170,   171,   172,   173,   174,   175,
     176,    67,    68,   133,   490,   133,   482,   183,    49,    50,
     133,   497,   133,   537,   166,   167,    15,   503,   186,   226,
     227,   228,   229,   792,   192,   193,   194,   133,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,    46,    47,   215,   216,   217,
     218,   219,   220,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,    49,    50,   215,   216,   217,
     218,   219,   220,   133,   560,     3,   562,   796,   133,   233,
     234,   317,   318,   133,   323,   324,    35,    36,   612,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   325,   326,    37,    38,   154,   333,
     334,   780,   781,    34,   600,    61,   602,   603,   476,   477,
     644,   607,   608,     3,     4,   611,    62,     7,   185,   615,
     554,   555,    12,    13,    63,    85,    16,    17,    18,    19,
      20,    21,    65,    84,    24,   621,    86,     8,   634,   625,
      30,    34,     8,    38,    41,    34,    36,     8,    38,   133,
      40,   133,   638,   116,   116,    23,    14,     7,   116,   116,
      38,   116,    52,    53,   116,    55,     3,     7,    58,     4,
     666,    43,    35,    64,    44,    57,    57,    67,    68,    79,
      57,     7,    31,     8,    86,   134,    48,    77,    78,   137,
     137,    81,    34,     8,     7,    14,   182,    14,    39,    43,
     235,   697,    35,   188,   700,    37,   702,   190,   189,   705,
      38,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    37,   117,    59,    41,
     133,   119,   122,   123,   124,   125,   126,   133,   734,   133,
      56,   116,     8,    86,    34,   137,    34,    86,   161,   116,
     115,   115,   142,   143,   144,     8,   146,   147,   148,   149,
     150,   151,   152,   153,    37,   155,   156,   157,   158,    37,
     804,    41,    57,    38,   214,    19,   772,    48,   168,    37,
     776,   777,   116,   779,     8,    35,     3,     4,    60,   179,
       7,     5,   116,   116,    39,    12,    13,   187,   134,    16,
      17,    18,    19,    20,    21,    51,    57,    24,   195,     8,
     214,   121,    35,    30,    35,     4,     4,     7,   642,    36,
     100,    38,   355,    40,   296,   359,   666,   495,   824,   825,
     560,    32,   298,   361,   299,    52,    53,   613,    55,   316,
     124,    58,   619,   477,    73,   620,    61,    72,    61,   449,
      67,    68,   382,   580,   451,   549,   679,   578,   421,   579,
      77,    78,   762,   581,    81,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
      -1,   674,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,   117,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,    -1,   117,    -1,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,    -1,   117,    -1,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    -1,   117,    -1,    -1,    -1,    -1,   122,
     123,   124,   125,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
     143,   144,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,    -1,
     117,    -1,    -1,    -1,    -1,   122,   123,   124,   125,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,   117,    -1,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,    -1,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   177,   181,   238,   239,   240,   241,   242,   243,   178,
     137,     0,   240,   241,   243,     3,     4,     7,    12,    13,
      16,    17,    18,    19,    20,    21,    24,    30,    36,    38,
      40,    52,    53,    55,    58,    67,    68,    77,    78,    81,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   117,   122,   123,   124,   125,
     126,   142,   143,   144,   146,   147,   148,   149,   150,   151,
     152,   153,   155,   156,   157,   158,   168,   179,   187,   244,
     245,   247,   248,   249,   250,   251,   252,   253,   254,   257,
     258,   259,   262,   263,   264,   265,   269,   270,   271,   272,
     273,   274,   275,   280,   289,   292,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   340,
     341,   342,   349,   350,   352,   353,   354,   356,   357,   358,
     359,   366,   367,   368,   369,   370,   371,   372,   374,   376,
     378,   412,   413,   414,   415,   416,     7,    14,   116,   271,
     339,   133,   133,   133,    25,    38,   276,   277,     8,    38,
     184,   279,   281,   282,    38,   290,   291,   290,   115,   115,
     309,   309,   316,   316,    82,    83,   133,   325,     7,    14,
     116,   116,   116,   116,   116,   270,     5,   133,   133,   133,
     133,    15,   116,   376,   378,   110,   116,   373,   380,   416,
     110,   116,   377,   381,   416,   133,   133,   379,   381,   375,
     380,   133,   133,   137,   169,   170,   171,   172,   173,   174,
     175,   176,   183,   180,   181,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   215,   216,   217,
     218,   219,   220,   393,   394,   395,   396,   397,   400,   405,
     406,   154,   246,   246,   246,   246,   246,   246,   246,   246,
      34,    35,    42,    44,    45,   274,   283,   284,    61,    62,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   185,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    63,    85,    65,
      84,   133,   314,    77,    78,   329,   325,   329,   325,   329,
     164,   246,    86,    34,   116,   134,   270,   134,   270,   355,
     134,   270,    26,    31,     8,    34,     8,    38,    41,    34,
       8,    34,    54,    54,   270,   270,   133,   133,   270,   116,
     116,   116,   343,   270,   270,   270,   270,    23,   116,   116,
      34,   116,    34,   116,   270,   270,   116,   116,   270,   270,
      14,   135,   136,     7,   383,   135,   136,   159,   160,    44,
      51,   182,   183,   135,   165,   255,    38,     3,     4,   137,
     173,   261,   383,   137,   383,    39,   115,   173,   399,    39,
     115,   402,   401,   415,   271,   271,   271,    43,    44,    35,
     284,    35,   297,   298,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   115,
     133,   191,   331,   333,   335,   338,   384,   386,   387,   388,
     389,   390,   391,   301,   302,   302,   303,   303,   303,   303,
     304,   304,   305,   305,    64,    57,    57,    57,   134,   270,
     317,   317,    79,     7,   383,   271,   134,   134,   134,    31,
      37,    39,    57,   278,   279,   361,   277,    41,   279,   361,
       8,   271,   282,    37,   361,   291,   271,   271,   116,   116,
     270,   270,   134,     6,   118,   121,   134,   134,   134,   134,
     382,   416,   382,   134,   134,   134,   134,    86,    48,   383,
     137,   137,    34,     8,     7,    38,   116,   138,   266,   267,
      14,   182,   383,    39,   260,    14,   260,   415,   173,   399,
     415,   403,   415,   401,    73,    76,   404,   271,   285,   286,
      43,   271,    35,   271,   384,   270,   390,   221,   222,   223,
     224,   225,   407,   407,   407,   407,   235,   411,   188,   385,
     189,   190,   139,   140,   362,   364,   365,   366,   416,   362,
     360,   365,   360,   134,   270,   246,   246,   271,    38,   362,
      37,   279,    37,    37,   278,   279,   271,    41,    41,   279,
     271,    37,    56,   293,   294,    59,   134,   134,   119,   347,
     133,   133,   116,   116,   141,   133,   383,    49,    50,   383,
     383,   166,   167,   256,    41,   145,   361,     8,   133,   145,
     268,   362,    34,   116,   138,    86,   137,   260,   383,    34,
      86,   213,   226,   227,   228,   229,   408,   398,   398,    34,
     116,   402,   402,    46,    47,   287,    34,   285,   271,   116,
     134,   303,   387,   160,   186,   192,   193,   194,   196,   197,
     198,   199,   200,   392,   393,   388,   389,   115,   115,   161,
     162,   163,   363,   161,    80,     8,   271,    37,   271,   271,
      37,   279,    37,   271,   271,    41,   271,    38,   362,   173,
     294,   271,   129,   131,   344,     9,    10,    11,    22,   120,
     127,   128,   268,   341,   348,   351,   134,   355,   134,   270,
     116,   134,   270,   271,    41,   145,   361,   270,   145,   268,
     267,   145,   268,   362,   383,   383,   415,   303,   303,   303,
     303,   214,    34,   116,   116,   415,    48,   288,   286,   407,
     413,   303,   408,   408,   233,   234,   410,   410,   116,   116,
     271,   271,    37,   271,   271,     8,    35,    35,    38,    60,
     345,   346,     5,   134,   134,   134,   271,   134,   145,   268,
     260,   408,    66,   399,    49,    50,    51,   230,   231,   232,
     409,   409,   195,   271,    57,   271,   271,     8,   271,     9,
      33,   130,   268,   348,     9,    32,   132,   268,   348,   121,
     214,   303,   383,   362,    35,    35,   271,   271
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
#line 576 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VersionDecl, (yylsp[-3]));

		if(!XPath2Utils::equals((yyvsp[-1].str),sz1_0))
			yyerror("This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
	}
    break;

  case 7:
#line 583 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VersionDecl, (yylsp[-5]));

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
	}
    break;

  case 8:
#line 617 "../src/parser/XQParser.y"
    {
	}
    break;

  case 9:
#line 624 "../src/parser/XQParser.y"
    {
	}
    break;

  case 10:
#line 631 "../src/parser/XQParser.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace((yyvsp[-1].str));
		CONTEXT->setNamespaceBinding((yyvsp[-3].str),(yyvsp[-1].str));
	}
    break;

  case 12:
#line 645 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a setter declaration after a variable, function or option declaration");
    }
    break;

  case 13:
#line 650 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains an import declaration after a variable, function or option declaration");
    }
    break;

  case 14:
#line 655 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a namespace declaration after a variable, function or option declaration");
    }
    break;

  case 15:
#line 660 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror("Prolog contains a default namespace declaration after a variable, function or option declaration");
    }
    break;

  case 16:
#line 665 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
    break;

  case 17:
#line 669 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
		XQUserFunction* decl=(yyvsp[-1].functDecl);
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	}
    break;

  case 18:
#line 676 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
    break;

  case 19:
#line 680 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 30:
#line 716 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(NamespaceDecl, (yylsp[-4]));

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
		}
    break;

  case 31:
#line 741 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BoundarySpaceDecl, (yylsp[-2]));

		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(true);
		}
    break;

  case 32:
#line 750 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BoundarySpaceDecl, (yylsp[-2]));

		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror("Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(false);
		}
    break;

  case 33:
#line 763 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(DefaultNamespaceDecl, (yylsp[-4]));

		    if(QP->_flags.get(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default element namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultElementAndTypeNS((yyvsp[0].str));
		}
    break;

  case 34:
#line 772 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(DefaultNamespaceDecl, (yylsp[-4]));

		    if(QP->_flags.get(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED))
			    yyerror("Prolog contains more than one default function namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultFuncNS((yyvsp[0].str));
		}
    break;

  case 35:
#line 785 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OptionDecl, (yylsp[-3]));

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
      }
    break;

  case 36:
#line 808 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FTOptionDecl, (yylsp[-1]));
      REJECT_NOT_FULLTEXT(FTOptionDecl, (yylsp[-1]));
	}
    break;

  case 37:
#line 817 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderingModeDecl, (yylsp[-2]));

		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	}
    break;

  case 38:
#line 826 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderingModeDecl, (yylsp[-2]));

		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror("Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	}
    break;

  case 39:
#line 839 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(EmptyOrderDecl, (yylsp[-4]));

		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	}
    break;

  case 40:
#line 848 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(EmptyOrderDecl, (yylsp[-4]));

		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror("Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
	}
    break;

  case 41:
#line 861 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(CopyNamespacesDecl, (yylsp[-4]));

		if(QP->_flags.get(BIT_COPYNAMESPACE_SPECIFIED))
			yyerror("Prolog contains more than one copy namespace declaration [err:XQST0055]");
		QP->_flags.set(BIT_COPYNAMESPACE_SPECIFIED);
		CONTEXT->setPreserveNamespaces(XPath2Utils::equals((yyvsp[-2].str),szTrue));
		CONTEXT->setInheritNamespaces(XPath2Utils::equals((yyvsp[0].str),szTrue));
    }
    break;

  case 42:
#line 875 "../src/parser/XQParser.y"
    {
        (yyval.str) = szTrue;
	}
    break;

  case 43:
#line 879 "../src/parser/XQParser.y"
    {
        (yyval.str) = szFalse;
	}
    break;

  case 44:
#line 887 "../src/parser/XQParser.y"
    {
        (yyval.str) = szTrue;
	}
    break;

  case 45:
#line 891 "../src/parser/XQParser.y"
    {
        (yyval.str) = szFalse;
	}
    break;

  case 46:
#line 899 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(DefaultCollationDecl, (yylsp[-3]));

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
		}
    break;

  case 47:
#line 920 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BaseURIDecl, (yylsp[-2]));

		    if(QP->_flags.get(BIT_BASEURI_SPECIFIED))
			    yyerror("Prolog contains more than one base URI declaration [err:XQST0032]");
		    QP->_flags.set(BIT_BASEURI_SPECIFIED);
			CONTEXT->setBaseURI((yyvsp[0].str));
		}
    break;

  case 48:
#line 933 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[-3]));

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
		}
    break;

  case 49:
#line 951 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[-4]));

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
		}
    break;

  case 50:
#line 969 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[-2]));

            try {
			  CONTEXT->addSchemaLocation((yyvsp[0].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
              throw e;
            }
		}
    break;

  case 51:
#line 981 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[-3]));

            try {
			  CONTEXT->addSchemaLocation((yyvsp[-1].str),(yyvsp[0].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
              throw e;
            }
		}
    break;

  case 52:
#line 996 "../src/parser/XQParser.y"
    {
		(yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
		(yyval.stringList)->push_back((yyvsp[0].str));
	}
    break;

  case 53:
#line 1001 "../src/parser/XQParser.y"
    {
		(yyvsp[-2].stringList)->push_back((yyvsp[0].str));
		(yyval.stringList) = (yyvsp[-2].stringList);
	}
    break;

  case 54:
#line 1010 "../src/parser/XQParser.y"
    {
			(yyval.str) = (yyvsp[-1].str);
		}
    break;

  case 55:
#line 1014 "../src/parser/XQParser.y"
    {
			(yyval.str) = (XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		}
    break;

  case 56:
#line 1022 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[-6]));

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
	}
    break;

  case 57:
#line 1037 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[-5]));

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
	}
    break;

  case 58:
#line 1052 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[-3]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[-1].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[-1].str),(yyvsp[0].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-3]).first_line, (yylsp[-3]).first_column);
          throw e;
        }
	}
    break;

  case 59:
#line 1066 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[-2]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[0].str))==0)
			yyerror("The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[0].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[-2]).first_line, (yylsp[-2]).first_column);
          throw e;
        }
	}
    break;

  case 60:
#line 1084 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[-6]));

		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-3].str),(yyvsp[-2].sequenceType),
                                                            WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 61:
#line 1092 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[-5]));

		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            WRAP((yylsp[0]), (yyvsp[0].astNode)),MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 62:
#line 1100 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[-5]));

		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-2].str),(yyvsp[-1].sequenceType),NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 63:
#line 1107 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[-4]));

		XQGlobalVariable* var=new (MEMMGR) XQGlobalVariable((yyvsp[-1].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR),
                                                            NULL,MEMMGR);
		QP->_query->addVariable(var);
	}
    break;

  case 64:
#line 1119 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ConstructionDecl, (yylsp[-2]));

		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
	}
    break;

  case 65:
#line 1128 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ConstructionDecl, (yylsp[-2]));

		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror("Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
	}
    break;

  case 66:
#line 1142 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-5]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		}
    break;

  case 67:
#line 1148 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-4]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),NULL, CONTEXT); 
		}
    break;

  case 68:
#line 1154 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-6]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		}
    break;

  case 69:
#line 1160 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-5]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,WRAP((yylsp[0]), (yyvsp[0].astNode)),(yyvsp[-1].sequenceType), CONTEXT); 
		}
    break;

  case 70:
#line 1166 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-5]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),(yyvsp[-2].funcParams),NULL,NULL, CONTEXT); 
		}
    break;

  case 71:
#line 1172 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-4]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-2].str),NULL,NULL,NULL, CONTEXT); 
		}
    break;

  case 72:
#line 1178 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-6]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-4].str),(yyvsp[-3].funcParams),NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		}
    break;

  case 73:
#line 1184 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[-5]));

			(yyval.functDecl) = new (MEMMGR) XQUserFunction((yyvsp[-3].str),NULL,NULL,(yyvsp[-1].sequenceType), CONTEXT); 
		}
    break;

  case 74:
#line 1194 "../src/parser/XQParser.y"
    {
			(yyvsp[-2].funcParams)->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = (yyvsp[-2].funcParams);
		}
    break;

  case 75:
#line 1199 "../src/parser/XQParser.y"
    {
			XQUserFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQUserFunction::VectorOfFunctionParameters(XQillaAllocator<XQUserFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back((yyvsp[0].funcParam));
			(yyval.funcParams) = paramList;
		}
    break;

  case 76:
#line 1209 "../src/parser/XQParser.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[-1].str),(yyvsp[0].sequenceType),MEMMGR);
		}
    break;

  case 77:
#line 1213 "../src/parser/XQParser.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[0].str),new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR) ,MEMMGR);
		}
    break;

  case 78:
#line 1221 "../src/parser/XQParser.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[-1].astNode)); 
		}
    break;

  case 79:
#line 1229 "../src/parser/XQParser.y"
    {
	    QP->_query->setQueryBody((yyvsp[0].astNode));
	}
    break;

  case 80:
#line 1237 "../src/parser/XQParser.y"
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
		}
    break;

  case 81:
#line 1255 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		}
    break;

  case 87:
#line 1272 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-4]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-4].variableBindingList), (yyvsp[-3].astNode), (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		}
    break;

  case 88:
#line 1276 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), (yyvsp[-2].astNode), NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		}
    break;

  case 89:
#line 1280 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-3]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-3].variableBindingList), NULL, (yyvsp[-2].sort), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		}
    break;

  case 90:
#line 1284 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[-2].variableBindingList), NULL, NULL, WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR));
		}
    break;

  case 91:
#line 1291 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = (yyvsp[-1].variableBindingList);
			for (VectorOfVariableBinding::iterator it = (yyvsp[0].variableBindingList)->begin(); it != (yyvsp[0].variableBindingList)->end (); ++it) 
				(yyvsp[-1].variableBindingList)->push_back(*it);
		}
    break;

  case 95:
#line 1308 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		}
    break;

  case 96:
#line 1315 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		}
    break;

  case 97:
#line 1319 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		}
    break;

  case 98:
#line 1327 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 99:
#line 1333 "../src/parser/XQParser.y"
    {
      // TBD FTScoreVar
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 100:
#line 1340 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),(yyvsp[-2].str));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 101:
#line 1346 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-4].str),(yyvsp[0].astNode),(yyvsp[-3].str));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 102:
#line 1352 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 103:
#line 1358 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-4].str),(yyvsp[0].astNode),NULL,(yyvsp[-3].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 104:
#line 1364 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-4].str),(yyvsp[0].astNode),(yyvsp[-2].str),(yyvsp[-3].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 105:
#line 1370 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-5].str),(yyvsp[0].astNode),(yyvsp[-3].str),(yyvsp[-4].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-6]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 106:
#line 1380 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(PositionalVar, (yylsp[-2]));

			(yyval.str) = (yyvsp[0].str); 
		}
    break;

  case 107:
#line 1390 "../src/parser/XQParser.y"
    {
      REJECT_NOT_FULLTEXT(FTScoreVar, (yylsp[-2]));

      (yyval.str) = (yyvsp[0].str);
    }
    break;

  case 108:
#line 1402 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(LetClause, (yylsp[-1]));

			(yyval.variableBindingList) = (yyvsp[0].variableBindingList);
		}
    break;

  case 109:
#line 1411 "../src/parser/XQParser.y"
    {
			(yyvsp[-2].variableBindingList)->push_back((yyvsp[0].variableBinding));
			(yyval.variableBindingList) = (yyvsp[-2].variableBindingList);
		}
    break;

  case 110:
#line 1416 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		}
    break;

  case 111:
#line 1424 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 112:
#line 1430 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-3].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 113:
#line 1436 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 114:
#line 1442 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[-4].str),(yyvsp[0].astNode),NULL,(yyvsp[-3].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-5]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 115:
#line 1448 "../src/parser/XQParser.y"
    {
		}
    break;

  case 116:
#line 1455 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(WhereClause, (yylsp[-1]));

			(yyval.astNode) = WRAP((yylsp[-1]), (yyvsp[0].astNode));
		}
    break;

  case 117:
#line 1465 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderByClause, (yylsp[-2]));

			(yyval.sort)=new (MEMMGR) XQSort(XQSort::unstable,(yyvsp[0].sortSpecList));
		}
    break;

  case 118:
#line 1471 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderByClause, (yylsp[-3]));

			(yyval.sort)=new (MEMMGR) XQSort(XQSort::stable,(yyvsp[0].sortSpecList));
		}
    break;

  case 119:
#line 1481 "../src/parser/XQParser.y"
    {
			(yyvsp[-2].sortSpecList)->push_back((yyvsp[0].sortSpec));
			(yyval.sortSpecList) = (yyvsp[-2].sortSpecList);
		}
    break;

  case 120:
#line 1486 "../src/parser/XQParser.y"
    {
			(yyval.sortSpecList) = new (MEMMGR) XQSort::VectorOfSortSpec(XQillaAllocator<XQSort::SortSpec*>(MEMMGR));
			(yyval.sortSpecList)->push_back((yyvsp[0].sortSpec));
		}
    break;

  case 121:
#line 1496 "../src/parser/XQParser.y"
    {
			(yyval.sortSpec) = new (MEMMGR) XQSort::SortSpec((yyvsp[-2].astNode),(yyvsp[-1].sortModifier)+(yyvsp[0].sortModifier),NULL);
		}
    break;

  case 122:
#line 1500 "../src/parser/XQParser.y"
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
		}
    break;

  case 123:
#line 1515 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; }
    break;

  case 124:
#line 1517 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; }
    break;

  case 125:
#line 1519 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::descending; }
    break;

  case 126:
#line 1524 "../src/parser/XQParser.y"
    { 
			switch(CONTEXT->getDefaultFLWOROrderingMode())
			{
			case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
				(yyval.sortModifier) = XQSort::SortSpec::empty_least; break;
			case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
				(yyval.sortModifier) = XQSort::SortSpec::empty_greatest; break;
			}
		}
    break;

  case 127:
#line 1534 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_greatest; }
    break;

  case 128:
#line 1536 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_least; }
    break;

  case 129:
#line 1543 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::some, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	}
    break;

  case 130:
#line 1547 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::every, (yyvsp[-2].variableBindingList), WRAP((yylsp[-1]), (yyvsp[0].astNode)), MEMMGR);
	}
    break;

  case 131:
#line 1554 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		}
    break;

  case 132:
#line 1558 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[0].variableBinding));
		}
    break;

  case 133:
#line 1566 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-2].str),(yyvsp[0].astNode));
			(yyval.variableBinding)->_line=(yylsp[-3]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 134:
#line 1572 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[-3].str),(yyvsp[0].astNode),NULL,(yyvsp[-2].sequenceType));
			(yyval.variableBinding)->_line=(yylsp[-4]).first_line;
			(yyval.variableBinding)->_file=QP->_query->getFile();
		}
    break;

  case 135:
#line 1582 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeswitchExpr, (yylsp[-9]));

			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-4]), (yyvsp[0].astNode)),MEMMGR->getPooledString((yyvsp[-2].str)));
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-9]), (yyvsp[-7].astNode)), (yyvsp[-5].clauseList), defClause, MEMMGR);
		}
    break;

  case 136:
#line 1589 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeswitchExpr, (yylsp[-7]));

			XQTypeswitch::Clause* defClause=new (MEMMGR) XQTypeswitch::Clause(NULL,WRAP((yylsp[-2]), (yyvsp[0].astNode)),NULL);
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[-7]), (yyvsp[-5].astNode)), (yyvsp[-3].clauseList), defClause, MEMMGR);
		}
    break;

  case 137:
#line 1599 "../src/parser/XQParser.y"
    {
			(yyvsp[-1].clauseList)->push_back((yyvsp[0].clause));
			(yyval.clauseList)=(yyvsp[-1].clauseList);
		}
    break;

  case 138:
#line 1604 "../src/parser/XQParser.y"
    {
			(yyval.clauseList)=new (MEMMGR) XQTypeswitch::VectorOfClause(XQillaAllocator<XQTypeswitch::Clause*>(MEMMGR));
			(yyval.clauseList)->push_back((yyvsp[0].clause));
		}
    break;

  case 139:
#line 1613 "../src/parser/XQParser.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-3]), (yyvsp[0].astNode)), NULL);
		}
    break;

  case 140:
#line 1617 "../src/parser/XQParser.y"
    { 
			(yyval.clause) = new (MEMMGR) XQTypeswitch::Clause((yyvsp[-2].sequenceType), WRAP((yylsp[-6]), (yyvsp[0].astNode)), MEMMGR->getPooledString((yyvsp[-4].str)));
		}
    break;

  case 141:
#line 1625 "../src/parser/XQParser.y"
    { 
	        (yyval.astNode) = WRAP((yylsp[-7]), new (MEMMGR) XQIf((yyvsp[-5].astNode), (yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR));
		}
    break;

  case 142:
#line 1633 "../src/parser/XQParser.y"
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
		}
    break;

  case 144:
#line 1652 "../src/parser/XQParser.y"
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
		}
    break;

  case 146:
#line 1676 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 147:
#line 1680 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 148:
#line 1684 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 149:
#line 1688 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 150:
#line 1692 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 151:
#line 1696 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[-2].astNode),(yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 152:
#line 1700 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Equals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 153:
#line 1704 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NotEquals(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 154:
#line 1708 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 155:
#line 1712 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 156:
#line 1716 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 157:
#line 1720 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 158:
#line 1724 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), MEMMGR));
		}
    break;

  case 159:
#line 1728 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), true, MEMMGR));
		}
    break;

  case 160:
#line 1732 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR), false,MEMMGR));
		}
    break;

  case 162:
#line 1741 "../src/parser/XQParser.y"
    {
        REJECT_NOT_FULLTEXT(FTContainsExpr, (yylsp[-2]));

        (yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) FTContains((yyvsp[-2].astNode), (yyvsp[0].ftselection), NULL, MEMMGR));
      }
    break;

  case 163:
#line 1747 "../src/parser/XQParser.y"
    {
        REJECT_NOT_FULLTEXT(FTContainsExpr, (yylsp[-3]));

        (yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) FTContains((yyvsp[-3].astNode), (yyvsp[-1].ftselection), (yyvsp[0].astNode), MEMMGR));
      }
    break;

  case 165:
#line 1758 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Range(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 167:
#line 1767 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Plus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 168:
#line 1771 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Minus(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 170:
#line 1780 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Multiply(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 171:
#line 1784 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Divide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 172:
#line 1788 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 173:
#line 1792 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Mod(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 175:
#line 1801 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 176:
#line 1805 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Union(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 178:
#line 1814 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Intersect(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 179:
#line 1818 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) Except(packageArgs((yyvsp[-2].astNode), (yyvsp[0].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 181:
#line 1827 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQInstanceOf((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	}
    break;

  case 183:
#line 1836 "../src/parser/XQParser.y"
    {
        XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR);
        treatAs->setIsTreatAsStatement(true);
		(yyval.astNode) = WRAP((yylsp[-2]), treatAs);
	}
    break;

  case 185:
#line 1847 "../src/parser/XQParser.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a castable expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-2]), new (MEMMGR) XQCastableAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	}
    break;

  case 187:
#line 1862 "../src/parser/XQParser.y"
    {
        const SequenceType::ItemType* itemType=(yyvsp[0].sequenceType)->getItemType();
        if((XPath2Utils::equals(itemType->getTypeURI(CONTEXT), XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA) &&
            XPath2Utils::equals(itemType->getType()->getName(), szNOTATION)) ||
           (XPath2Utils::equals(itemType->getTypeURI(CONTEXT), FunctionConstructor::XMLChXPath2DatatypesURI) &&
            XPath2Utils::equals(itemType->getType()->getName(), AnyAtomicType::fgDT_ANYATOMICTYPE)))
          yyerror("The target type of a cast expression must be an atomic type that is in the in-scope schema types and is not xs:NOTATION or xdt:anyAtomicType [err:XPST0080]");
		(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQCastAs((yyvsp[-3].astNode),(yyvsp[0].sequenceType),MEMMGR));
	}
    break;

  case 189:
#line 1877 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back((yyvsp[0].astNode));
			(yyval.astNode) = new (MEMMGR) UnaryMinus(args, MEMMGR);
		}
    break;

  case 190:
#line 1883 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = (yyvsp[0].astNode);
		}
    break;

  case 195:
#line 1902 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 196:
#line 1906 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-4]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
		}
    break;

  case 197:
#line 1910 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[-4]), new (MEMMGR) XQValidate((yyvsp[-1].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 198:
#line 1918 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[-2]));

		// we don't support any pragma
		yyerror("This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
	}
    break;

  case 199:
#line 1925 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[-3]));

		// we don't support any pragma
		(yyval.astNode) = (yyvsp[-1].astNode);
	}
    break;

  case 202:
#line 1942 "../src/parser/XQParser.y"
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
      }
    break;

  case 203:
#line 1959 "../src/parser/XQParser.y"
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
      }
    break;

  case 204:
#line 1980 "../src/parser/XQParser.y"
    {
			XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		}
    break;

  case 205:
#line 1986 "../src/parser/XQParser.y"
    {
			XQNav* nav=getNavigation((yyvsp[0].astNode),MEMMGR);
			nav->addInitialRootStep(MEMMGR);
			(yyval.astNode) = nav;
		}
    break;

  case 206:
#line 1992 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[0].astNode),MEMMGR);

      NodeTest *step = new (MEMMGR) NodeTest();
      step->setTypeWildcard();
      step->setNameWildcard();
      step->setNamespaceWildcard();
      nav->addStepFront(new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR));        

			nav->addInitialRootStep(MEMMGR);

			(yyval.astNode) = nav;
		}
    break;

  case 208:
#line 2011 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[-2].astNode),MEMMGR);
			nav->addStep((yyvsp[0].astNode));
			(yyval.astNode) = nav;
		}
    break;

  case 209:
#line 2017 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[-2].astNode),MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            nav->addStep(XQStep::DESCENDANT_OR_SELF, step);
			nav->addStep((yyvsp[0].astNode));

			(yyval.astNode) = nav;
		}
    break;

  case 213:
#line 2041 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		}
    break;

  case 214:
#line 2045 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
      (yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
		}
    break;

  case 215:
#line 2054 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        switch((yyvsp[-1].axis)) {
        case XQStep::NAMESPACE: (yyvsp[0].nodeTest)->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string); break;
        default: (yyvsp[0].nodeTest)->setNodeType(Node::element_string); break;
        }
      }

			(yyval.astNode) = new (MEMMGR) XQStep((yyvsp[-1].axis),(yyvsp[0].nodeTest),MEMMGR);
		}
    break;

  case 217:
#line 2077 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::CHILD;
		}
    break;

  case 218:
#line 2081 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::DESCENDANT;
		}
    break;

  case 219:
#line 2085 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ATTRIBUTE;
		}
    break;

  case 220:
#line 2089 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::SELF;
		}
    break;

  case 221:
#line 2093 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
		}
    break;

  case 222:
#line 2097 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::FOLLOWING_SIBLING;
		}
    break;

  case 223:
#line 2101 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::FOLLOWING;
		}
    break;

  case 224:
#line 2109 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[0].nodeTest), MEMMGR);
		}
    break;

  case 225:
#line 2117 "../src/parser/XQParser.y"
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
		}
    break;

  case 226:
#line 2135 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = new (MEMMGR) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), MEMMGR);
		}
    break;

  case 228:
#line 2152 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PARENT;
		}
    break;

  case 229:
#line 2156 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ANCESTOR;
		}
    break;

  case 230:
#line 2160 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PRECEDING_SIBLING;
		}
    break;

  case 231:
#line 2164 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PRECEDING;
		}
    break;

  case 232:
#line 2168 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
		}
    break;

  case 233:
#line 2176 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			(yyval.astNode) = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
		}
    break;

  case 236:
#line 2194 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
      step->setNodePrefix((yyvsp[0].qName)->getPrefix());
			step->setNodeName((yyvsp[0].qName)->getName());
			(yyval.nodeTest) = step;
		}
    break;

  case 238:
#line 2206 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 239:
#line 2213 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
      step->setNodePrefix((yyvsp[0].str));
			step->setNameWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 240:
#line 2220 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName((yyvsp[0].str));
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 241:
#line 2231 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[-1].astNode), (yyvsp[0].predicates));
		}
    break;

  case 242:
#line 2240 "../src/parser/XQParser.y"
    {
	        (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
		}
    break;

  case 243:
#line 2244 "../src/parser/XQParser.y"
    {
      XQPredicate *pred = new (MEMMGR) XQPredicate((yyvsp[-1].astNode), MEMMGR);
			(yyvsp[-3].predicates)->push_back(pred);
			(yyval.predicates) = (yyvsp[-3].predicates); 
		}
    break;

  case 257:
#line 2280 "../src/parser/XQParser.y"
    {
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf((yyvsp[0].str),':');
			if(nColon!=-1)
  				(yyval.astNode) = new (MEMMGR) XQVariable((yyvsp[0].str),MEMMGR);
			else
				(yyval.astNode) = new (MEMMGR) XQVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, (yyvsp[0].str),MEMMGR);
		}
    break;

  case 258:
#line 2292 "../src/parser/XQParser.y"
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
		}
    break;

  case 259:
#line 2306 "../src/parser/XQParser.y"
    { 
			(yyval.astNode) = WRAP((yylsp[-1]), new (MEMMGR) XQSequence(MEMMGR));
		}
    break;

  case 260:
#line 2314 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQContextItem(MEMMGR);
		}
    break;

  case 261:
#line 2322 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderedExpr, (yylsp[-3]));

			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[-1].astNode), MEMMGR));
		}
    break;

  case 262:
#line 2332 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[-3]));

			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[-1].astNode), MEMMGR));
		}
    break;

  case 263:
#line 2342 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = FNWRAP((yylsp[-1]), (yyvsp[-1].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-1].str), MEMMGR), args, MEMMGR));
		}
    break;

  case 264:
#line 2347 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[-2]), (yyvsp[-2].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[-2].str), MEMMGR), *(yyvsp[-1].itemList),MEMMGR));
		}
    break;

  case 265:
#line 2354 "../src/parser/XQParser.y"
    {
			(yyvsp[-2].itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList) = (yyvsp[-2].itemList);
		}
    break;

  case 266:
#line 2359 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		}
    break;

  case 267:
#line 2368 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(Constructor, (yylsp[0]));
    }
    break;

  case 268:
#line 2372 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(Constructor, (yylsp[0]));
    }
    break;

  case 272:
#line 2389 "../src/parser/XQParser.y"
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
		}
    break;

  case 273:
#line 2401 "../src/parser/XQParser.y"
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
                    ASTNode* last=elemContent->back();
				    Item::Ptr litVal = ((XQLiteral*)last)->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING &&
					   isAllSpaces(litVal->asString(CONTEXT)))
                    {
						elemContent->pop_back();
                        // special case: if the previous node was a CDATA, put it back
                        if(elemContent->size()>0 && elemContent->back()->getType()==ASTNode::DOM_CONSTRUCTOR &&
                           ((XQDOMConstructor*)elemContent->back())->getNodeType()==Node::cdata_string)
                        {
                            elemContent->push_back(last);
                        }
                    }
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
		}
    break;

  case 274:
#line 2442 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 275:
#line 2446 "../src/parser/XQParser.y"
    {
            (yyval.itemList) = (yyvsp[-3].itemList);
            bool bInsertAtFront=false;
            if(XPath2Utils::equals((yyvsp[-2].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString) ||
               XERCES_CPP_NAMESPACE_QUALIFIER XMLString::startsWith((yyvsp[-2].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSColonString))
            {
                // check that the value of an xmlns attribute is a stirng literal
                if((yyvsp[0].itemList)->size()>1 || ((yyvsp[0].itemList)->size()==1 && (yyvsp[0].itemList)->front()->getType()!=ASTNode::LITERAL))
                    yyerror("Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
                bInsertAtFront=true;
            }
            if((yyvsp[0].itemList)->size()>0 && (yyvsp[0].itemList)->back()==0)
                (yyvsp[0].itemList)->pop_back();
            ASTNode* attrItem=WRAP((yylsp[-2]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
                                            new (MEMMGR) XQLiteral(
                                                new (MEMMGR) AnyAtomicTypeConstructor(
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                    XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
                                                    (yyvsp[-2].str), AnyAtomicType::STRING),
                                                MEMMGR), 
                                            0, (yyvsp[0].itemList),MEMMGR));
            if(bInsertAtFront)
                (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
            else
                (yyval.itemList)->push_back(attrItem);
        }
    break;

  case 276:
#line 2478 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		}
    break;

  case 277:
#line 2482 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = (yyvsp[-1].itemList);
		}
    break;

  case 278:
#line 2491 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 279:
#line 2495 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
            if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
			    (yyval.itemList)->pop_back();
			(yyval.itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList)->push_back(0);
		}
    break;

  case 280:
#line 2503 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szQuote);
		}
    break;

  case 281:
#line 2508 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		}
    break;

  case 282:
#line 2513 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		}
    break;

  case 283:
#line 2523 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 284:
#line 2527 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
            if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
			    (yyval.itemList)->pop_back();
			(yyval.itemList)->push_back((yyvsp[0].astNode));
			(yyval.itemList)->push_back(0);
		}
    break;

  case 285:
#line 2535 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szApos);
		}
    break;

  case 286:
#line 2540 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		}
    break;

  case 287:
#line 2545 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[0].str));
		}
    break;

  case 288:
#line 2560 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
		}
    break;

  case 289:
#line 2564 "../src/parser/XQParser.y"
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
		}
    break;

  case 290:
#line 2585 "../src/parser/XQParser.y"
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
		}
    break;

  case 291:
#line 2614 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
				(yyval.itemList)->pop_back();

			// if the last token was a string literal made of whitespace and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
			{
				const XMLCh* lastString=NULL;
				Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
				if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
					lastString=litVal->asString(CONTEXT);
				if(lastString!=NULL && XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen(lastString)>0 && isAllSpaces(lastString) && !CONTEXT->getPreserveBoundarySpace())
					(yyval.itemList)->pop_back();
			}
			(yyval.itemList)->push_back((yyvsp[0].astNode));
		}
    break;

  case 292:
#line 2633 "../src/parser/XQParser.y"
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
		}
    break;

  case 293:
#line 2655 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[-1].itemList);
    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					(yyvsp[0].str), AnyAtomicType::STRING);

			(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
		}
    break;

  case 296:
#line 2673 "../src/parser/XQParser.y"
    {
		(yyval.str) = szCurlyOpen;
	}
    break;

  case 297:
#line 2677 "../src/parser/XQParser.y"
    {
		(yyval.str) = szCurlyClose;
	}
    break;

  case 298:
#line 2686 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[0]), new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
    break;

  case 299:
#line 2702 "../src/parser/XQParser.y"
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
		}
    break;

  case 300:
#line 2728 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[0]), new (MEMMGR) XQDOMConstructor(Node::cdata_string, 0, 0, content, MEMMGR));
		}
    break;

  case 307:
#line 2758 "../src/parser/XQParser.y"
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
		}
    break;

  case 308:
#line 2776 "../src/parser/XQParser.y"
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
		}
    break;

  case 309:
#line 2790 "../src/parser/XQParser.y"
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
		}
    break;

  case 310:
#line 2802 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
								  empty, content, MEMMGR));
		}
    break;

  case 311:
#line 2811 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::element_string,
								  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
								  empty, empty, MEMMGR));
		}
    break;

  case 313:
#line 2827 "../src/parser/XQParser.y"
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
		}
    break;

  case 314:
#line 2840 "../src/parser/XQParser.y"
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
		}
    break;

  case 315:
#line 2852 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
		}
    break;

  case 316:
#line 2860 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::attribute_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
		}
    break;

  case 317:
#line 2871 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::text_string, 0, 0, content, MEMMGR));
		}
    break;

  case 318:
#line 2881 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-3]), new (MEMMGR) XQDOMConstructor(Node::comment_string, 0, 0, content, MEMMGR));
		}
    break;

  case 319:
#line 2891 "../src/parser/XQParser.y"
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
	  }
    break;

  case 320:
#line 2904 "../src/parser/XQParser.y"
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
	  }
    break;

  case 321:
#line 2916 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[-1]), (yyvsp[-1].astNode)));
			(yyval.astNode) = WRAP((yylsp[-6]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-4]), (yyvsp[-4].astNode)), 
									  0, content, MEMMGR));
	  }
    break;

  case 322:
#line 2924 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[-5]), new (MEMMGR) XQDOMConstructor(Node::processing_instruction_string,
									  WRAP((yylsp[-3]), (yyvsp[-3].astNode)), 
									  0, empty, MEMMGR));
	  }
    break;

  case 323:
#line 2935 "../src/parser/XQParser.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[-1].qName)));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			(yyval.sequenceType) = seq;
		}
    break;

  case 324:
#line 2942 "../src/parser/XQParser.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[0].qName)));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		}
    break;

  case 325:
#line 2953 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[-1]));

			(yyval.sequenceType) = (yyvsp[0].sequenceType);
		}
    break;

  case 326:
#line 2963 "../src/parser/XQParser.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[-1].itemType));
			seq->setOccurrence((yyvsp[0].occurrence));
			(yyval.sequenceType) = seq;
		}
    break;

  case 327:
#line 2970 "../src/parser/XQParser.y"
    {
			SequenceType* seq=new (MEMMGR) SequenceType();
			seq->setItemType((yyvsp[0].itemType));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		}
    break;

  case 328:
#line 2977 "../src/parser/XQParser.y"
    { 
			(yyval.sequenceType) = new (MEMMGR) SequenceType(); 
		}
    break;

  case 329:
#line 2986 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 330:
#line 2988 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 331:
#line 2990 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 332:
#line 2996 "../src/parser/XQParser.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName));
	}
    break;

  case 333:
#line 3000 "../src/parser/XQParser.y"
    {
		(yyval.itemType) = (yyvsp[0].nodeTest)->getItemType();
		(yyvsp[0].nodeTest)->setItemType(NULL);
	}
    break;

  case 334:
#line 3005 "../src/parser/XQParser.y"
    {
		(yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	}
    break;

  case 335:
#line 3013 "../src/parser/XQParser.y"
    {
		(yyval.qName) = (yyvsp[0].qName);
	}
    break;

  case 345:
#line 3042 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	}
    break;

  case 346:
#line 3052 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 347:
#line 3058 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 348:
#line 3067 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 349:
#line 3080 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	}
    break;

  case 350:
#line 3090 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 351:
#line 3100 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	}
    break;

  case 352:
#line 3106 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	}
    break;

  case 353:
#line 3112 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	}
    break;

  case 354:
#line 3122 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	}
    break;

  case 355:
#line 3128 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 356:
#line 3134 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 358:
#line 3145 "../src/parser/XQParser.y"
    {
		(yyval.qName) = NULL;
	}
    break;

  case 359:
#line 3153 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 361:
#line 3168 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 362:
#line 3174 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 363:
#line 3180 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-3].qName),(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 364:
#line 3186 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[-4].qName),(yyvsp[-2].qName));
		pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	}
    break;

  case 366:
#line 3199 "../src/parser/XQParser.y"
    {
		(yyval.qName) = NULL;
	}
    break;

  case 367:
#line 3207 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 372:
#line 3237 "../src/parser/XQParser.y"
    {
		// the string must be whitespace-normalized
		XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS((yyvsp[0].str), MEMMGR);
        if((yyvsp[0].str) && *(yyvsp[0].str) && !XPath2Utils::isValidURI((yyvsp[0].str), MEMMGR))
          yyerror("The URI literal is not valid [err:XQST0046]");
		(yyval.str) = (yyvsp[0].str);
	}
    break;

  case 373:
#line 3249 "../src/parser/XQParser.y"
    {
    // TBD FTSelectionOptions and weight
    (yyval.ftselection) = (yyvsp[-3].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[-2].ftoptionlist)->begin();
        i != (yyvsp[-2].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete (yyvsp[-2].ftoptionlist);
	}
    break;

  case 374:
#line 3261 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[-1].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[0].ftoptionlist)->begin();
        i != (yyvsp[0].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete (yyvsp[0].ftoptionlist);
	}
    break;

  case 375:
#line 3275 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(MEMMGR);
	}
    break;

  case 376:
#line 3279 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[-1].ftoptionlist);
	}
    break;

  case 377:
#line 3283 "../src/parser/XQParser.y"
    {
    if((yyvsp[0].ftoption) != NULL)
      (yyvsp[-1].ftoptionlist)->push_back((yyvsp[0].ftoption));
    (yyval.ftoptionlist) = (yyvsp[-1].ftoptionlist);
	}
    break;

  case 378:
#line 3293 "../src/parser/XQParser.y"
    {
    if((yyvsp[-2].ftselection)->getType() == FTSelection::OR) {
      FTOr *op = (FTOr*)(yyvsp[-2].ftselection);
      op->addArg((yyvsp[0].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTOr((yyvsp[-2].ftselection), (yyvsp[0].ftselection), MEMMGR));
    }
	}
    break;

  case 380:
#line 3309 "../src/parser/XQParser.y"
    {
    if((yyvsp[-2].ftselection)->getType() == FTSelection::AND) {
      FTAnd *op = (FTAnd*)(yyvsp[-2].ftselection);
      op->addArg((yyvsp[0].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTAnd((yyvsp[-2].ftselection), (yyvsp[0].ftselection), MEMMGR));
    }
	}
    break;

  case 382:
#line 3325 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTMildnot((yyvsp[-2].ftselection), (yyvsp[0].ftselection), MEMMGR));
	}
    break;

  case 384:
#line 3334 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTUnaryNot((yyvsp[0].ftselection), MEMMGR));
	}
    break;

  case 386:
#line 3343 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[-1].ftselection);
	}
    break;

  case 388:
#line 3352 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTWords((yyvsp[-1].astNode), (yyvsp[0].ftanyalloption), MEMMGR));
	}
    break;

  case 389:
#line 3356 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTWords((yyvsp[-1].astNode), (yyvsp[0].ftanyalloption), MEMMGR));
	}
    break;

  case 390:
#line 3360 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTWords((yyvsp[-1].astNode), (yyvsp[0].ftanyalloption), MEMMGR));
	}
    break;

  case 391:
#line 3364 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-1]), new (MEMMGR) FTWords((yyvsp[-1].astNode), (yyvsp[0].ftanyalloption), MEMMGR));
	}
    break;

  case 392:
#line 3368 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = FTWRAP((yylsp[-2]), new (MEMMGR) FTWords((yyvsp[-2].astNode), (yyvsp[0].ftanyalloption), MEMMGR));
	}
    break;

  case 393:
#line 3382 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[0]), new (MEMMGR) FTOrder(MEMMGR));
	}
    break;

  case 394:
#line 3386 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[-2]), new (MEMMGR) FTWindow((yyvsp[-1].astNode), (yyvsp[0].ftunit), MEMMGR));
	}
    break;

  case 395:
#line 3390 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[-2]), new (MEMMGR) FTDistance((yyvsp[-1].ftrange), (yyvsp[0].ftunit), MEMMGR));
	}
    break;

  case 396:
#line 3394 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
	}
    break;

  case 397:
#line 3399 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[-1]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[0].ftunit), MEMMGR));
	}
    break;

  case 398:
#line 3403 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[-1]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[0].ftunit), MEMMGR));
	}
    break;

  case 399:
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[0]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
	}
    break;

  case 400:
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[0]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
	}
    break;

  case 401:
#line 3415 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = FTOPTIONWRAP((yylsp[0]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
	}
    break;

  case 409:
#line 3443 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
	}
    break;

  case 410:
#line 3447 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
	}
    break;

  case 411:
#line 3451 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
	}
    break;

  case 412:
#line 3455 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
	}
    break;

  case 413:
#line 3466 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
	}
    break;

  case 414:
#line 3470 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
	}
    break;

  case 415:
#line 3474 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
	}
    break;

  case 416:
#line 3478 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
	}
    break;

  case 417:
#line 3486 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
	}
    break;

  case 418:
#line 3490 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
	}
    break;

  case 419:
#line 3500 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
	}
    break;

  case 420:
#line 3504 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
	}
    break;

  case 421:
#line 3508 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
	}
    break;

  case 422:
#line 3512 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
	}
    break;

  case 423:
#line 3516 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
	}
    break;

  case 424:
#line 3523 "../src/parser/XQParser.y"
    {
	}
    break;

  case 425:
#line 3526 "../src/parser/XQParser.y"
    {
	}
    break;

  case 426:
#line 3533 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
	}
    break;

  case 427:
#line 3537 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
	}
    break;

  case 428:
#line 3541 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
	}
    break;

  case 429:
#line 3545 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
	}
    break;

  case 430:
#line 3555 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
	}
    break;

  case 431:
#line 3559 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
	}
    break;

  case 432:
#line 3563 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
	}
    break;

  case 433:
#line 3570 "../src/parser/XQParser.y"
    {
	}
    break;

  case 434:
#line 3573 "../src/parser/XQParser.y"
    {
	}
    break;

  case 435:
#line 3581 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
	}
    break;

  case 436:
#line 3585 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
	}
    break;

  case 437:
#line 3592 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
	}
    break;

  case 438:
#line 3596 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
	}
    break;

  case 439:
#line 3604 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
	}
    break;

  case 440:
#line 3608 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
	}
    break;

  case 441:
#line 3616 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
	}
    break;

  case 442:
#line 3624 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
	}
    break;

  case 443:
#line 3628 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
	}
    break;

  case 444:
#line 3636 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
	}
    break;

  case 445:
#line 3640 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
	}
    break;

  case 446:
#line 3644 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
	}
    break;

  case 447:
#line 3648 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
	}
    break;

  case 448:
#line 3652 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
	}
    break;

  case 449:
#line 3656 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
	}
    break;

  case 450:
#line 3667 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[0].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 451:
#line 3673 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[0].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 452:
#line 3679 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[0].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 453:
#line 3685 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[-2].astNode);
    (yyval.ftrange).arg2 = (yyvsp[0].astNode);
	}
    break;

  case 454:
#line 3695 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
	}
    break;

  case 455:
#line 3699 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
	}
    break;

  case 456:
#line 3703 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
	}
    break;

  case 457:
#line 3711 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
	}
    break;

  case 458:
#line 3715 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
	}
    break;

  case 459:
#line 3723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[0].astNode);
	}
    break;

  case 460:
#line 3731 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		}
    break;

  case 461:
#line 3744 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										(yyvsp[0].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		}
    break;

  case 462:
#line 3757 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										(yyvsp[0].str), AnyAtomicType::DOUBLE),
										MEMMGR);
		}
    break;

  case 463:
#line 3771 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[0].str), AnyAtomicType::STRING),
										MEMMGR);
		}
    break;

  case 464:
#line 3784 "../src/parser/XQParser.y"
    {
			(yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[0].str),MEMMGR);
		}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 6533 "../src/parser/XQParser.cpp"

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


#line 3788 "../src/parser/XQParser.y"


}	// namespace XQParser



