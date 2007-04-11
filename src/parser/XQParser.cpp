/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

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
     _AXIS_NAMESPACE_ = 365,
     _STAR_ = 366,
     _PROCESSING_INSTRUCTION_LPAR_ = 367,
     _COMMENT_LPAR_ = 368,
     _TEXT_LPAR_ = 369,
     _NODE_LPAR_ = 370,
     _LPAR_ = 371,
     _RPAR_ = 372,
     _START_TAG_OPEN_ = 373,
     _EMPTY_TAG_CLOSE_ = 374,
     _VALUE_INDICATOR_ = 375,
     _END_TAG_OPEN_ = 376,
     _TAG_CLOSE_ = 377,
     _DOCUMENT_CONSTR_ = 378,
     _ELEMENT_CONSTR_ = 379,
     _ATTRIBUTE_CONSTR_ = 380,
     _TEXT_CONSTR_ = 381,
     _PROCESSING_INSTRUCTION_START_ = 382,
     _LCURLY_BRACE_ESCAPE_ = 383,
     _RCURLY_BRACE_ESCAPE_ = 384,
     _OPEN_QUOT_ = 385,
     _CLOSE_QUOT_ = 386,
     _OPEN_APOS_ = 387,
     _CLOSE_APOS_ = 388,
     _LBRACE_ = 389,
     _RBRACE_ = 390,
     _PRESERVE_ = 391,
     _STRIP_ = 392,
     _NAMESPACE_ = 393,
     _EXPR_AS_ = 394,
     _EMPTY_ = 395,
     _ITEM_ = 396,
     _NILLABLE_ = 397,
     _DOCUMENT_NODE_LPAR_ = 398,
     _ATTRIBUTE_LPAR_ = 399,
     _ELEMENT_LPAR_ = 400,
     _EXTERNAL_ = 401,
     _PROCESSING_INSTRUCTION_CONSTR_ = 402,
     _COMMENT_CONSTR_ = 403,
     _AXIS_ANCESTOR_OR_SELF_ = 404,
     _AXIS_ANCESTOR_ = 405,
     _AXIS_FOLLOWING_SIBLING_ = 406,
     _AXIS_FOLLOWING_ = 407,
     _AXIS_PRECEDING_SIBLING_ = 408,
     _AXIS_PRECEDING_ = 409,
     _SEMICOLON_ = 410,
     _SCHEMA_ELEMENT_LPAR_ = 411,
     _SCHEMA_ATTRIBUTE_LPAR_ = 412,
     _ORDERED_ = 413,
     _UNORDERED_ = 414,
     _ORDERING_UNORDERED_ = 415,
     _ORDERING_ORDERED_ = 416,
     _ZERO_OR_ONE_ = 417,
     _ONE_OR_MORE_ = 418,
     _ZERO_OR_MORE_ = 419,
     _ENCODING_ = 420,
     _NO_PRESERVE_ = 421,
     _INHERIT_ = 422,
     _NO_INHERIT_ = 423,
     _DECLARE_ = 424,
     _BOUNDARYSPACE_ = 425,
     _BASEURI_ = 426,
     _CONSTRUCTION_ = 427,
     _ORDERING_ = 428,
     _DEFAULT_ = 429,
     _COPY_NAMESPACES_ = 430,
     _VARIABLE_KEYWORD_ = 431,
     _OPTION_ = 432,
     _XQUERY_ = 433,
     _VERSION_ = 434,
     _IMPORT_ = 435,
     _SCHEMA_ = 436,
     _MODULE_ = 437,
     _ELEMENT_ = 438,
     _FUNCTION_ = 439,
     _SCORE_ = 440,
     _FTCONTAINS_ = 441,
     _WEIGHT_ = 442,
     _DECLARE_FT_OPTION_ = 443,
     _DOUBLE_VERTICAL_BAR_ = 444,
     _DOUBLE_AMPERSAND_ = 445,
     _NOT_IN_ = 446,
     _BANG_ = 447,
     _WINDOW_ = 448,
     _DISTANCE_ = 449,
     _OCCURS_ = 450,
     _TIMES_ = 451,
     _SAME_ = 452,
     _DIFFERENT_ = 453,
     _AT_START_ = 454,
     _AT_END_ = 455,
     _ENTIRE_CONTENT_ = 456,
     _LOWERCASE_ = 457,
     _UPPERCASE_ = 458,
     _CASE_INSENSITIVE_ = 459,
     _CASE_SENSITIVE_ = 460,
     _WITH_DIACRITICS_ = 461,
     _WITHOUT_DIACRITICS_ = 462,
     _DIACRITICS_SENSITIVE_ = 463,
     _DIACRITICS_INSENSITIVE_ = 464,
     _WITH_STEMMING_ = 465,
     _WITHOUT_STEMMING_ = 466,
     _WITH_THESAURUS_ = 467,
     _WITHOUT_THESAURUS_ = 468,
     _RELATIONSHIP_ = 469,
     _LEVELS_ = 470,
     _WITH_STOP_WORDS_ = 471,
     _WITHOUT_STOP_WORDS_ = 472,
     _WITH_DEFAULT_STOP_WORDS_ = 473,
     _LANGUAGE_ = 474,
     _WITH_WILDCARDS_ = 475,
     _WITHOUT_WILDCARDS_ = 476,
     _ANY_ = 477,
     _ANY_WORD_ = 478,
     _ALL_ = 479,
     _ALL_WORDS_ = 480,
     _PHRASE_ = 481,
     _EXACTLY_ = 482,
     _AT_LEAST_ = 483,
     _AT_MOST_ = 484,
     _FROM_ = 485,
     _WORDS_ = 486,
     _SENTENCES_ = 487,
     _PARAGRAPHS_ = 488,
     _SENTENCE_ = 489,
     _PARAGRAPH_ = 490,
     _WITHOUT_CONTENT_ = 491,
     _REPLACE_ = 492,
     _MODIFY_ = 493,
     _FIRST_ = 494,
     _INSERT_ = 495,
     _BEFORE_ = 496,
     _AFTER_ = 497,
     _TRANSFORM_COPY_ = 498,
     _REVALIDATION_ = 499,
     _WITH_ = 500,
     _VALUE_OF_ = 501,
     _DO_ = 502,
     _RENAME_ = 503,
     _MODE_SKIP_ = 504,
     _LAST_ = 505,
     _DELETE_ = 506,
     _INTO_ = 507,
     _UPDATING_ = 508,
     _EOF_ = 509
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
#define _AXIS_NAMESPACE_ 365
#define _STAR_ 366
#define _PROCESSING_INSTRUCTION_LPAR_ 367
#define _COMMENT_LPAR_ 368
#define _TEXT_LPAR_ 369
#define _NODE_LPAR_ 370
#define _LPAR_ 371
#define _RPAR_ 372
#define _START_TAG_OPEN_ 373
#define _EMPTY_TAG_CLOSE_ 374
#define _VALUE_INDICATOR_ 375
#define _END_TAG_OPEN_ 376
#define _TAG_CLOSE_ 377
#define _DOCUMENT_CONSTR_ 378
#define _ELEMENT_CONSTR_ 379
#define _ATTRIBUTE_CONSTR_ 380
#define _TEXT_CONSTR_ 381
#define _PROCESSING_INSTRUCTION_START_ 382
#define _LCURLY_BRACE_ESCAPE_ 383
#define _RCURLY_BRACE_ESCAPE_ 384
#define _OPEN_QUOT_ 385
#define _CLOSE_QUOT_ 386
#define _OPEN_APOS_ 387
#define _CLOSE_APOS_ 388
#define _LBRACE_ 389
#define _RBRACE_ 390
#define _PRESERVE_ 391
#define _STRIP_ 392
#define _NAMESPACE_ 393
#define _EXPR_AS_ 394
#define _EMPTY_ 395
#define _ITEM_ 396
#define _NILLABLE_ 397
#define _DOCUMENT_NODE_LPAR_ 398
#define _ATTRIBUTE_LPAR_ 399
#define _ELEMENT_LPAR_ 400
#define _EXTERNAL_ 401
#define _PROCESSING_INSTRUCTION_CONSTR_ 402
#define _COMMENT_CONSTR_ 403
#define _AXIS_ANCESTOR_OR_SELF_ 404
#define _AXIS_ANCESTOR_ 405
#define _AXIS_FOLLOWING_SIBLING_ 406
#define _AXIS_FOLLOWING_ 407
#define _AXIS_PRECEDING_SIBLING_ 408
#define _AXIS_PRECEDING_ 409
#define _SEMICOLON_ 410
#define _SCHEMA_ELEMENT_LPAR_ 411
#define _SCHEMA_ATTRIBUTE_LPAR_ 412
#define _ORDERED_ 413
#define _UNORDERED_ 414
#define _ORDERING_UNORDERED_ 415
#define _ORDERING_ORDERED_ 416
#define _ZERO_OR_ONE_ 417
#define _ONE_OR_MORE_ 418
#define _ZERO_OR_MORE_ 419
#define _ENCODING_ 420
#define _NO_PRESERVE_ 421
#define _INHERIT_ 422
#define _NO_INHERIT_ 423
#define _DECLARE_ 424
#define _BOUNDARYSPACE_ 425
#define _BASEURI_ 426
#define _CONSTRUCTION_ 427
#define _ORDERING_ 428
#define _DEFAULT_ 429
#define _COPY_NAMESPACES_ 430
#define _VARIABLE_KEYWORD_ 431
#define _OPTION_ 432
#define _XQUERY_ 433
#define _VERSION_ 434
#define _IMPORT_ 435
#define _SCHEMA_ 436
#define _MODULE_ 437
#define _ELEMENT_ 438
#define _FUNCTION_ 439
#define _SCORE_ 440
#define _FTCONTAINS_ 441
#define _WEIGHT_ 442
#define _DECLARE_FT_OPTION_ 443
#define _DOUBLE_VERTICAL_BAR_ 444
#define _DOUBLE_AMPERSAND_ 445
#define _NOT_IN_ 446
#define _BANG_ 447
#define _WINDOW_ 448
#define _DISTANCE_ 449
#define _OCCURS_ 450
#define _TIMES_ 451
#define _SAME_ 452
#define _DIFFERENT_ 453
#define _AT_START_ 454
#define _AT_END_ 455
#define _ENTIRE_CONTENT_ 456
#define _LOWERCASE_ 457
#define _UPPERCASE_ 458
#define _CASE_INSENSITIVE_ 459
#define _CASE_SENSITIVE_ 460
#define _WITH_DIACRITICS_ 461
#define _WITHOUT_DIACRITICS_ 462
#define _DIACRITICS_SENSITIVE_ 463
#define _DIACRITICS_INSENSITIVE_ 464
#define _WITH_STEMMING_ 465
#define _WITHOUT_STEMMING_ 466
#define _WITH_THESAURUS_ 467
#define _WITHOUT_THESAURUS_ 468
#define _RELATIONSHIP_ 469
#define _LEVELS_ 470
#define _WITH_STOP_WORDS_ 471
#define _WITHOUT_STOP_WORDS_ 472
#define _WITH_DEFAULT_STOP_WORDS_ 473
#define _LANGUAGE_ 474
#define _WITH_WILDCARDS_ 475
#define _WITHOUT_WILDCARDS_ 476
#define _ANY_ 477
#define _ANY_WORD_ 478
#define _ALL_ 479
#define _ALL_WORDS_ 480
#define _PHRASE_ 481
#define _EXACTLY_ 482
#define _AT_LEAST_ 483
#define _AT_MOST_ 484
#define _FROM_ 485
#define _WORDS_ 486
#define _SENTENCES_ 487
#define _PARAGRAPHS_ 488
#define _SENTENCE_ 489
#define _PARAGRAPH_ 490
#define _WITHOUT_CONTENT_ 491
#define _REPLACE_ 492
#define _MODIFY_ 493
#define _FIRST_ 494
#define _INSERT_ 495
#define _BEFORE_ 496
#define _AFTER_ 497
#define _TRANSFORM_COPY_ 498
#define _REVALIDATION_ 499
#define _WITH_ 500
#define _VALUE_OF_ 501
#define _DO_ 502
#define _RENAME_ 503
#define _MODE_SKIP_ 504
#define _LAST_ 505
#define _DELETE_ 506
#define _INTO_ 507
#define _UPDATING_ 508
#define _EOF_ 509




/* Copy the first part of user declarations.  */
#line 14 "../src/parser/XQParser.y"


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
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/XQElementConstructor.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/XQPIConstructor.hpp>
#include <xqilla/ast/XQCommentConstructor.hpp>
#include <xqilla/ast/XQTextConstructor.hpp>
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

#include <xqilla/update/UDelete.hpp>
#include <xqilla/update/URename.hpp>
#include <xqilla/update/UReplace.hpp>
#include <xqilla/update/UReplaceValueOf.hpp>
#include <xqilla/update/UInsertAsFirst.hpp>
#include <xqilla/update/UInsertAsLast.hpp>
#include <xqilla/update/UInsertInto.hpp>
#include <xqilla/update/UInsertAfter.hpp>
#include <xqilla/update/UInsertBefore.hpp>
#include <xqilla/update/UTransform.hpp>
#include <xqilla/update/UApplyUpdates.hpp>

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
#include <xqilla/functions/FunctionRoot.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include "../config/xqilla_config.h"

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

#define QP       ((XQParserArgs*)qp)
#define CONTEXT  (QP->_context)
#define LANGUAGE (QP->_lexer->getLanguage())
#define MEMMGR   (CONTEXT->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos)   if(!QP->_lexer->isXQuery())   { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_XPATH(where,pos)    if(!QP->_lexer->isXPath())    { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_FULLTEXT(where,pos) if(!QP->_lexer->isFullText()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_UPDATE(where,pos)   if(!QP->_lexer->isUpdate())   { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object),   NULL, (pos).first_line, (pos).first_column))
#define FNWRAP(pos,name,object) (wrapForDebug((QP), (object), (name), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

#define BIT_ORDERING_SPECIFIED                  0
#define BIT_BOUNDARY_SPECIFIED                  1
#define BIT_COLLATION_SPECIFIED                 2
#define BIT_BASEURI_SPECIFIED                   3
#define BIT_CONSTRUCTION_SPECIFIED              4
#define BIT_EMPTYORDERING_SPECIFIED             5
#define BIT_COPYNAMESPACE_SPECIFIED             6
#define BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED   7
#define BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED  8
#define BIT_DECLARE_SECOND_STEP                 9
#define BIT_REVALIDATION_SPECIFIED              10

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

template<typename TYPE>
TYPE *wrapForDebug(XQParserArgs *qp, TYPE* pObjToWrap,
                   const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(pObjToWrap->getLine() == 0)
    pObjToWrap->setLocationInfo(QP->_query->getFile(), line, column);
  return pObjToWrap;
}

template<>
ASTNode *wrapForDebug(XQParserArgs *qp, ASTNode* pObjToWrap,
                      const XMLCh* fnName, unsigned int line, unsigned int column)
{
  if(pObjToWrap->getLine() == 0)
    pObjToWrap->setLocationInfo(QP->_query->getFile(), line, column);

  if(!CONTEXT->isDebuggingEnabled() && !CONTEXT->getDebugCallback())
    return pObjToWrap;
  if(fnName==NULL && (unsigned int)pObjToWrap->getType()==ASTNode::DEBUG_HOOK)
    return pObjToWrap;
  return new (MEMMGR) XQDebugHook(QP->_query->getFile(), line, column, pObjToWrap, fnName, MEMMGR);
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
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


/* Line 216 of yacc.c.  */
#line 898 "../src/parser/XQParser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
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
      while (YYID (0))
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
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2844

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  255
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  189
/* YYNRULES -- Number of rules.  */
#define YYNRULES  489
/* YYNRULES -- Number of states.  */
#define YYNSTATES  884

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   509

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    13,    18,    25,    28,
      31,    38,    39,    43,    47,    51,    55,    59,    63,    67,
      71,    73,    75,    77,    79,    81,    83,    85,    87,    89,
      91,    93,    99,   103,   107,   113,   119,   124,   127,   131,
     135,   141,   147,   153,   155,   157,   159,   161,   166,   170,
     175,   181,   185,   190,   193,   197,   201,   205,   213,   220,
     225,   229,   237,   244,   251,   257,   261,   265,   273,   280,
     289,   297,   305,   312,   321,   329,   330,   332,   336,   338,
     342,   345,   349,   351,   355,   357,   359,   361,   363,   365,
     367,   369,   371,   373,   375,   377,   383,   388,   393,   397,
     400,   402,   404,   406,   409,   413,   415,   420,   426,   432,
     439,   445,   452,   459,   467,   471,   475,   478,   482,   484,
     489,   495,   501,   508,   512,   515,   519,   524,   528,   530,
     534,   540,   541,   543,   545,   546,   549,   552,   557,   562,
     566,   568,   573,   579,   590,   599,   602,   604,   609,   617,
     626,   630,   632,   636,   638,   642,   646,   650,   654,   658,
     662,   666,   670,   674,   678,   682,   686,   690,   694,   698,
     700,   704,   709,   711,   715,   717,   721,   725,   727,   731,
     735,   739,   743,   745,   749,   753,   755,   759,   763,   765,
     770,   772,   777,   779,   784,   786,   791,   793,   796,   799,
     801,   803,   805,   807,   812,   818,   824,   828,   833,   835,
     838,   843,   847,   849,   852,   855,   857,   861,   865,   867,
     869,   871,   874,   877,   880,   882,   884,   886,   888,   890,
     892,   894,   896,   898,   901,   903,   906,   908,   910,   912,
     914,   916,   918,   920,   922,   924,   926,   928,   930,   932,
     934,   937,   938,   943,   945,   947,   949,   951,   953,   955,
     957,   959,   961,   963,   965,   967,   969,   972,   976,   979,
     981,   986,   991,   994,   998,  1002,  1004,  1006,  1008,  1010,
    1012,  1014,  1019,  1028,  1029,  1034,  1038,  1042,  1043,  1046,
    1049,  1052,  1055,  1056,  1059,  1062,  1065,  1068,  1069,  1072,
    1075,  1078,  1081,  1084,  1086,  1088,  1090,  1092,  1094,  1098,
    1100,  1102,  1104,  1106,  1108,  1110,  1112,  1117,  1122,  1126,
    1134,  1141,  1143,  1148,  1152,  1160,  1167,  1172,  1177,  1182,
    1186,  1194,  1201,  1204,  1206,  1209,  1212,  1214,  1218,  1220,
    1222,  1224,  1226,  1228,  1232,  1234,  1236,  1238,  1240,  1242,
    1244,  1246,  1248,  1250,  1252,  1255,  1258,  1262,  1266,  1269,
    1272,  1275,  1279,  1283,  1286,  1290,  1296,  1298,  1300,  1304,
    1306,  1309,  1313,  1319,  1326,  1328,  1330,  1334,  1336,  1338,
    1340,  1342,  1344,  1349,  1352,  1353,  1356,  1359,  1363,  1365,
    1369,  1371,  1375,  1377,  1380,  1382,  1386,  1388,  1391,  1394,
    1397,  1400,  1405,  1407,  1411,  1415,  1419,  1422,  1425,  1427,
    1429,  1431,  1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,
    1449,  1451,  1453,  1455,  1457,  1459,  1461,  1463,  1465,  1468,
    1471,  1477,  1483,  1485,  1486,  1490,  1493,  1498,  1503,  1510,
    1514,  1516,  1519,  1520,  1523,  1526,  1530,  1532,  1536,  1539,
    1542,  1545,  1547,  1549,  1550,  1552,  1554,  1556,  1558,  1560,
    1563,  1566,  1569,  1574,  1576,  1578,  1580,  1582,  1584,  1587,
    1591,  1595,  1599,  1607,  1615,  1621,  1627,  1633,  1637,  1644,
    1650,  1656,  1663,  1667,  1669,  1674,  1676,  1678,  1680,  1682
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     256,     0,    -1,   257,   258,    -1,   257,   259,    -1,   258,
      -1,   259,    -1,   178,   179,     7,   264,    -1,   178,   179,
       7,   165,     7,   264,    -1,   261,   288,    -1,   260,   261,
      -1,   182,   138,    14,    86,   402,   264,    -1,    -1,   261,
     262,   264,    -1,   261,   263,   264,    -1,   261,   265,   264,
      -1,   261,   267,   264,    -1,   261,   281,   264,    -1,   261,
     283,   264,    -1,   261,   268,   264,    -1,   261,   269,   264,
      -1,   266,    -1,   275,    -1,   276,    -1,   282,    -1,   270,
      -1,   271,    -1,   431,    -1,   272,    -1,   277,    -1,   280,
      -1,   155,    -1,   169,   138,    14,    86,   402,    -1,   169,
     170,   136,    -1,   169,   170,   137,    -1,   169,   174,   183,
     138,   402,    -1,   169,   174,   184,   138,   402,    -1,   169,
     177,     3,     7,    -1,   188,   412,    -1,   169,   173,   161,
      -1,   169,   173,   160,    -1,   169,   174,    44,    48,    49,
      -1,   169,   174,    44,    48,    50,    -1,   169,   175,   273,
      34,   274,    -1,   136,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,   174,    51,   402,    -1,   169,   171,   402,    -1,
     180,   181,   279,   402,    -1,   180,   181,   279,   402,   278,
      -1,   180,   181,   402,    -1,   180,   181,   402,   278,    -1,
      39,   402,    -1,   278,    34,   402,    -1,   138,    14,    86,
      -1,   174,   183,   138,    -1,   180,   182,   138,    14,    86,
     402,   278,    -1,   180,   182,   138,    14,    86,   402,    -1,
     180,   182,   402,   278,    -1,   180,   182,   402,    -1,   169,
     176,    38,     8,   380,    41,   290,    -1,   169,   176,    38,
       8,    41,   290,    -1,   169,   176,    38,     8,   380,   146,
      -1,   169,   176,    38,     8,   146,    -1,   169,   172,   136,
      -1,   169,   172,   137,    -1,   169,   284,   184,     4,   285,
     117,   287,    -1,   169,   284,   184,     4,   117,   287,    -1,
     169,   284,   184,     4,   285,   139,   381,   287,    -1,   169,
     284,   184,     4,   139,   381,   287,    -1,   169,   284,   184,
       4,   285,   117,   146,    -1,   169,   284,   184,     4,   117,
     146,    -1,   169,   284,   184,     4,   285,   139,   381,   146,
      -1,   169,   284,   184,     4,   139,   381,   146,    -1,    -1,
     253,    -1,   285,    34,   286,    -1,   286,    -1,    38,     8,
     380,    -1,    38,     8,    -1,   134,   289,   135,    -1,   289,
      -1,   289,    34,   290,    -1,   290,    -1,   291,    -1,   308,
      -1,   311,    -1,   314,    -1,   432,    -1,   433,    -1,   435,
      -1,   434,    -1,   436,    -1,   315,    -1,   292,   302,   303,
      35,   290,    -1,   292,   302,    35,   290,    -1,   292,   303,
      35,   290,    -1,   292,    35,   290,    -1,   292,   293,    -1,
     293,    -1,   294,    -1,   299,    -1,    36,   295,    -1,   295,
      34,   296,    -1,   296,    -1,    38,     8,    37,   290,    -1,
      38,     8,   298,    37,   290,    -1,    38,     8,   297,    37,
     290,    -1,    38,     8,   297,   298,    37,   290,    -1,    38,
       8,   380,    37,   290,    -1,    38,     8,   380,   298,    37,
     290,    -1,    38,     8,   380,   297,    37,   290,    -1,    38,
       8,   380,   297,   298,    37,   290,    -1,    39,    38,     8,
      -1,   185,    38,     8,    -1,    40,   300,    -1,   300,    34,
     301,    -1,   301,    -1,    38,     8,    41,   290,    -1,    38,
       8,   298,    41,   290,    -1,    38,     8,   380,    41,   290,
      -1,    38,     8,   380,   298,    41,   290,    -1,   298,    41,
     290,    -1,    42,   290,    -1,    44,    43,   304,    -1,    45,
      44,    43,   304,    -1,   304,    34,   305,    -1,   305,    -1,
     290,   306,   307,    -1,   290,   306,   307,    51,   402,    -1,
      -1,    46,    -1,    47,    -1,    -1,    48,    49,    -1,    48,
      50,    -1,    52,   309,    54,   290,    -1,    53,   309,    54,
     290,    -1,   309,    34,   310,    -1,   310,    -1,    38,     8,
      37,   290,    -1,    38,     8,   380,    37,   290,    -1,    55,
     116,   289,   117,   312,   174,    38,     8,    35,   290,    -1,
      55,   116,   289,   117,   312,   174,    35,   290,    -1,   312,
     313,    -1,   313,    -1,    56,   381,    35,   290,    -1,    56,
      38,     8,    57,   381,    35,   290,    -1,    58,   116,   289,
     117,    59,   290,    60,   290,    -1,   315,    61,   316,    -1,
     316,    -1,   316,    62,   317,    -1,   317,    -1,   318,    86,
     318,    -1,   318,    87,   318,    -1,   318,    88,   318,    -1,
     318,    89,   318,    -1,   318,    90,   318,    -1,   318,    91,
     318,    -1,   318,    92,   318,    -1,   318,    93,   318,    -1,
     318,    94,   318,    -1,   318,    95,   318,    -1,   318,    96,
     318,    -1,   318,    97,   318,    -1,   318,    98,   318,    -1,
     318,    99,   318,    -1,   318,   100,   318,    -1,   318,    -1,
     319,   186,   403,    -1,   319,   186,   403,   430,    -1,   319,
      -1,   320,    66,   320,    -1,   320,    -1,   320,    67,   321,
      -1,   320,    68,   321,    -1,   321,    -1,   321,    69,   322,
      -1,   321,    70,   322,    -1,   321,    71,   322,    -1,   321,
      72,   322,    -1,   322,    -1,   322,    74,   323,    -1,   322,
      73,   323,    -1,   323,    -1,   323,    75,   324,    -1,   323,
      76,   324,    -1,   324,    -1,   325,    63,    64,   381,    -1,
     325,    -1,   326,    85,    57,   381,    -1,   326,    -1,   327,
      65,    57,   379,    -1,   327,    -1,   328,    84,    57,   379,
      -1,   328,    -1,    68,   328,    -1,    67,   328,    -1,   329,
      -1,   330,    -1,   334,    -1,   331,    -1,    81,   134,   289,
     135,    -1,    81,    82,   134,   289,   135,    -1,    81,    83,
     134,   289,   135,    -1,   332,   134,   135,    -1,   332,   134,
     289,   135,    -1,   333,    -1,   332,   333,    -1,    30,    25,
      26,    31,    -1,    30,    25,    31,    -1,    77,    -1,    77,
     335,    -1,    78,   335,    -1,   335,    -1,   335,    77,   336,
      -1,   335,    78,   336,    -1,   336,    -1,   337,    -1,   347,
      -1,   338,   348,    -1,   341,   348,    -1,   339,   344,    -1,
     340,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   151,    -1,   152,    -1,   110,    -1,   102,   344,
      -1,   344,    -1,   342,   344,    -1,   343,    -1,   109,    -1,
     150,    -1,   153,    -1,   154,    -1,   149,    -1,   103,    -1,
     385,    -1,   345,    -1,   443,    -1,   346,    -1,   111,    -1,
      12,    -1,    13,    -1,   349,   348,    -1,    -1,   348,    79,
     289,    80,    -1,   350,    -1,   352,    -1,   353,    -1,   354,
      -1,   357,    -1,   359,    -1,   355,    -1,   356,    -1,   351,
      -1,   442,    -1,   439,    -1,   440,    -1,   441,    -1,    38,
       8,    -1,   116,   289,   117,    -1,   116,   117,    -1,   101,
      -1,   158,   134,   289,   135,    -1,   159,   134,   289,   135,
      -1,     4,   117,    -1,     4,   358,   117,    -1,   358,    34,
     290,    -1,   290,    -1,   360,    -1,   371,    -1,   361,    -1,
     368,    -1,   369,    -1,   118,     5,   362,   119,    -1,   118,
       5,   362,   122,   366,   121,     5,   122,    -1,    -1,   362,
       6,   120,   363,    -1,   130,   364,   131,    -1,   132,   365,
     133,    -1,    -1,   364,   287,    -1,   364,    33,    -1,   364,
       9,    -1,   364,   367,    -1,    -1,   365,   287,    -1,   365,
      32,    -1,   365,     9,    -1,   365,   367,    -1,    -1,   366,
     360,    -1,   366,     9,    -1,   366,   370,    -1,   366,   287,
      -1,   366,   367,    -1,    11,    -1,    10,    -1,   128,    -1,
     129,    -1,    21,    -1,   127,    15,    23,    -1,    22,    -1,
     372,    -1,   373,    -1,   375,    -1,   376,    -1,   377,    -1,
     378,    -1,   123,   134,   289,   135,    -1,    17,   134,   374,
     135,    -1,    17,   134,   135,    -1,   124,   134,   289,   135,
     134,   374,   135,    -1,   124,   134,   289,   135,   134,   135,
      -1,   289,    -1,    16,   134,   289,   135,    -1,    16,   134,
     135,    -1,   125,   134,   289,   135,   134,   289,   135,    -1,
     125,   134,   289,   135,   134,   135,    -1,   126,   134,   289,
     135,    -1,   148,   134,   289,   135,    -1,    24,   134,   289,
     135,    -1,    24,   134,   135,    -1,   147,   134,   289,   135,
     134,   289,   135,    -1,   147,   134,   289,   135,   134,   135,
      -1,   384,   162,    -1,   384,    -1,    57,   381,    -1,   383,
     382,    -1,   383,    -1,   140,   116,   117,    -1,   164,    -1,
     163,    -1,   162,    -1,   384,    -1,   385,    -1,   141,   116,
     117,    -1,   443,    -1,   387,    -1,   395,    -1,   391,    -1,
     397,    -1,   393,    -1,   390,    -1,   389,    -1,   388,    -1,
     386,    -1,   115,   117,    -1,   143,   117,    -1,   143,   395,
     117,    -1,   143,   397,   117,    -1,   114,   117,    -1,   113,
     117,    -1,   112,   117,    -1,   112,    14,   117,    -1,   112,
       7,   117,    -1,   144,   117,    -1,   144,   392,   117,    -1,
     144,   392,    34,   401,   117,    -1,   399,    -1,   111,    -1,
     157,   394,   117,    -1,   399,    -1,   145,   117,    -1,   145,
     396,   117,    -1,   145,   396,    34,   401,   117,    -1,   145,
     396,    34,   401,   142,   117,    -1,   400,    -1,   111,    -1,
     156,   398,   117,    -1,   400,    -1,   443,    -1,   443,    -1,
     443,    -1,     7,    -1,   405,   404,   187,   440,    -1,   405,
     404,    -1,    -1,   404,   412,    -1,   404,   411,    -1,   405,
     189,   406,    -1,   406,    -1,   406,   190,   407,    -1,   407,
      -1,   407,   191,   408,    -1,   408,    -1,   192,   409,    -1,
     409,    -1,   116,   403,   117,    -1,   410,    -1,   350,   426,
      -1,   352,   426,    -1,   354,   426,    -1,   357,   426,    -1,
     134,   289,   135,   426,    -1,   161,    -1,   193,   322,   428,
      -1,   194,   427,   428,    -1,   195,   427,   196,    -1,   197,
     429,    -1,   198,   429,    -1,   199,    -1,   200,    -1,   201,
      -1,   413,    -1,   414,    -1,   415,    -1,   416,    -1,   419,
      -1,   424,    -1,   425,    -1,   202,    -1,   203,    -1,   205,
      -1,   204,    -1,   206,    -1,   207,    -1,   208,    -1,   209,
      -1,   210,    -1,   211,    -1,   212,   418,    -1,   212,   174,
      -1,   212,   116,   418,   417,   117,    -1,   212,   116,   174,
     417,   117,    -1,   213,    -1,    -1,   417,    34,   418,    -1,
      39,   442,    -1,    39,   442,   214,   442,    -1,    39,   442,
     427,   215,    -1,    39,   442,   214,   442,   427,   215,    -1,
     216,   421,   420,    -1,   217,    -1,   218,   420,    -1,    -1,
     420,   423,    -1,    39,   442,    -1,   116,   422,   117,    -1,
     442,    -1,   422,    34,   442,    -1,    73,   421,    -1,    76,
     421,    -1,   219,   442,    -1,   220,    -1,   221,    -1,    -1,
     222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,
     227,   322,    -1,   228,   322,    -1,   229,   322,    -1,   230,
     322,    66,   322,    -1,   231,    -1,   232,    -1,   233,    -1,
     234,    -1,   235,    -1,   236,   322,    -1,   169,   244,    83,
      -1,   169,   244,    82,    -1,   169,   244,   249,    -1,   247,
     240,   290,    57,   239,   252,   290,    -1,   247,   240,   290,
      57,   250,   252,   290,    -1,   247,   240,   290,   252,   290,
      -1,   247,   240,   290,   242,   290,    -1,   247,   240,   290,
     241,   290,    -1,   247,   251,   290,    -1,   247,   237,   246,
     290,   245,   290,    -1,   247,   237,   290,   245,   290,    -1,
     247,   248,   290,    57,   290,    -1,   243,   437,   238,   290,
      35,   290,    -1,   437,    34,   438,    -1,   438,    -1,    38,
       8,    41,   290,    -1,    18,    -1,    19,    -1,    20,    -1,
       7,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   600,   600,   601,   602,   603,   608,   615,   649,   656,
     663,   675,   677,   682,   687,   692,   697,   701,   708,   712,
     726,   727,   728,   729,   730,   731,   732,   733,   738,   739,
     744,   749,   763,   772,   785,   794,   807,   831,   840,   849,
     862,   871,   884,   898,   902,   910,   914,   922,   944,   957,
     975,   993,  1005,  1020,  1025,  1034,  1038,  1046,  1061,  1076,
    1090,  1108,  1115,  1123,  1130,  1142,  1151,  1165,  1171,  1177,
    1183,  1189,  1195,  1201,  1207,  1216,  1219,  1227,  1232,  1242,
    1246,  1254,  1262,  1275,  1293,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,  1309,  1310,  1311,  1316,  1320,  1324,  1328,  1335,
    1341,  1345,  1346,  1352,  1359,  1363,  1371,  1375,  1380,  1384,
    1388,  1392,  1396,  1400,  1408,  1418,  1430,  1439,  1444,  1452,
    1456,  1460,  1464,  1468,  1475,  1485,  1491,  1501,  1506,  1516,
    1520,  1537,  1538,  1540,  1546,  1555,  1557,  1564,  1568,  1575,
    1579,  1587,  1591,  1599,  1606,  1616,  1621,  1630,  1634,  1642,
    1650,  1664,  1669,  1683,  1693,  1697,  1701,  1705,  1709,  1713,
    1717,  1721,  1725,  1729,  1733,  1737,  1741,  1745,  1749,  1753,
    1758,  1764,  1770,  1775,  1779,  1784,  1788,  1792,  1797,  1801,
    1805,  1809,  1813,  1818,  1822,  1826,  1831,  1835,  1839,  1844,
    1848,  1853,  1859,  1864,  1868,  1873,  1877,  1882,  1888,  1894,
    1899,  1900,  1901,  1909,  1913,  1917,  1925,  1932,  1942,  1943,
    1949,  1967,  1989,  2004,  2019,  2040,  2045,  2051,  2064,  2069,
    2070,  2075,  2079,  2088,  2100,  2111,  2115,  2119,  2123,  2127,
    2131,  2135,  2139,  2148,  2156,  2174,  2182,  2191,  2195,  2199,
    2203,  2207,  2215,  2227,  2228,  2233,  2240,  2245,  2252,  2259,
    2270,  2280,  2283,  2293,  2294,  2295,  2296,  2297,  2298,  2299,
    2300,  2305,  2306,  2311,  2312,  2313,  2319,  2331,  2345,  2353,
    2361,  2371,  2381,  2386,  2393,  2398,  2407,  2411,  2421,  2422,
    2423,  2428,  2435,  2472,  2475,  2501,  2505,  2515,  2518,  2526,
    2531,  2536,  2547,  2550,  2558,  2563,  2568,  2584,  2587,  2608,
    2637,  2656,  2678,  2697,  2698,  2699,  2703,  2712,  2727,  2751,
    2770,  2771,  2772,  2773,  2774,  2775,  2780,  2788,  2797,  2804,
    2813,  2824,  2829,  2837,  2844,  2852,  2863,  2871,  2879,  2890,
    2901,  2907,  2917,  2924,  2935,  2945,  2952,  2959,  2968,  2970,
    2972,  2978,  2982,  2987,  2995,  3011,  3012,  3013,  3014,  3015,
    3016,  3017,  3018,  3019,  3024,  3034,  3040,  3049,  3062,  3072,
    3082,  3088,  3094,  3104,  3110,  3116,  3126,  3127,  3135,  3145,
    3150,  3156,  3162,  3168,  3180,  3181,  3189,  3199,  3204,  3209,
    3214,  3219,  3231,  3243,  3258,  3261,  3265,  3275,  3286,  3291,
    3302,  3307,  3311,  3316,  3320,  3325,  3329,  3334,  3338,  3342,
    3346,  3350,  3364,  3368,  3372,  3376,  3381,  3385,  3389,  3393,
    3397,  3411,  3412,  3413,  3414,  3415,  3416,  3417,  3425,  3429,
    3433,  3437,  3448,  3452,  3456,  3460,  3468,  3472,  3482,  3486,
    3490,  3494,  3498,  3506,  3508,  3515,  3519,  3523,  3527,  3537,
    3541,  3545,  3553,  3555,  3563,  3567,  3574,  3578,  3586,  3590,
    3598,  3606,  3610,  3619,  3622,  3626,  3630,  3634,  3638,  3649,
    3655,  3661,  3667,  3677,  3681,  3685,  3693,  3697,  3705,  3713,
    3723,  3733,  3750,  3755,  3760,  3765,  3770,  3780,  3790,  3795,
    3806,  3816,  3824,  3829,  3837,  3846,  3859,  3872,  3886,  3899
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
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
  "\"parent::\"", "\"namespace::\"", "\"* (wildcard)\"",
  "\"processing-instruction(\"", "\"comment(\"", "\"text(\"", "\"node(\"",
  "\"(\"", "\")\"", "\"<\"", "\"/>\"", "\"=\"", "\">\"", "\"</\"",
  "\"document {\"", "\"element {\"", "\"attribute {\"", "\"text {\"",
  "\"<?\"", "\"{{\"", "\"}}\"", "\"\\\" (open)\"", "\"\\\" (close)\"",
  "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"}\"", "\"preserve\"",
  "\"strip\"", "\"namespace\"", "\") as\"", "\"empty-sequence\"",
  "\"item\"", "\"?\"", "\"document-node(\"", "\"attribute(\"",
  "\"element(\"", "\"external\"", "\"processing-instruction {\"",
  "\"comment {\"", "\"ancestor-or-self::\"", "\"ancestor::\"",
  "\"following-sibling::\"", "\"following::\"", "\"preceding-sibling::\"",
  "\"preceding::\"", "\";\"", "\"schema-element(\"",
  "\"schema-attribute(\"", "\"ordered {\"", "\"unordered {\"",
  "\"unordered\"", "\"ordered\"", "\"? (occurrence)\"",
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
  "\"replace\"", "\"modify\"", "\"first\"", "\"insert\"", "\"before\"",
  "\"after\"", "\"transform copy\"", "\"revalidation\"", "\"with\"",
  "\"value of\"", "\"do\"", "\"rename\"", "\"skip\"", "\"last\"",
  "\"delete\"", "\"into\"", "\"updating\"", "_EOF_", "$accept", "Module",
  "VersionDecl", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "FTOptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "ConstructionDecl", "FunctionDecl", "FunctionDeclUpdating", "ParamList",
  "Param", "EnclosedExpr", "QueryBody", "Expr", "ExprSingle", "FLWORExpr",
  "FlworExprForLetList", "ForOrLetClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "FTScoreVar", "LetClause",
  "LetBindingList", "LetBinding", "WhereClause", "OrderByClause",
  "OrderSpecList", "OrderSpec", "OrderDirection", "EmptyHandling",
  "QuantifiedExpr", "QuantifyBindingList", "QuantifyBinding",
  "TypeswitchExpr", "CaseClauseList", "CaseClause", "IfExpr", "OrExpr",
  "AndExpr", "ComparisonExpr", "FTContainsExpr", "RangeExpr",
  "AdditiveExpr", "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
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
  "FTIgnoreOption", "RevalidationDecl", "InsertExpr", "DeleteExpr",
  "ReplaceExpr", "RenameExpr", "TransformExpr", "TransformBindingList",
  "TransformBinding", "IntegerLiteral", "DecimalLiteral", "DoubleLiteral",
  "StringLiteral", "QName", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   255,   256,   256,   256,   256,   257,   257,   258,   259,
     260,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     262,   262,   262,   262,   262,   262,   262,   262,   263,   263,
     264,   265,   266,   266,   267,   267,   268,   269,   270,   270,
     271,   271,   272,   273,   273,   274,   274,   275,   276,   277,
     277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     280,   281,   281,   281,   281,   282,   282,   283,   283,   283,
     283,   283,   283,   283,   283,   284,   284,   285,   285,   286,
     286,   287,   288,   289,   289,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   291,   292,
     292,   293,   293,   294,   295,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   297,   298,   299,   300,   300,   301,
     301,   301,   301,   301,   302,   303,   303,   304,   304,   305,
     305,   306,   306,   306,   307,   307,   307,   308,   308,   309,
     309,   310,   310,   311,   311,   312,   312,   313,   313,   314,
     315,   315,   316,   316,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     318,   318,   318,   319,   319,   320,   320,   320,   321,   321,
     321,   321,   321,   322,   322,   322,   323,   323,   323,   324,
     324,   325,   325,   326,   326,   327,   327,   328,   328,   328,
     329,   329,   329,   330,   330,   330,   331,   331,   332,   332,
     333,   333,   334,   334,   334,   334,   335,   335,   335,   336,
     336,   337,   337,   338,   338,   339,   339,   339,   339,   339,
     339,   339,   339,   340,   340,   341,   341,   342,   342,   342,
     342,   342,   343,   344,   344,   345,   345,   346,   346,   346,
     347,   348,   348,   349,   349,   349,   349,   349,   349,   349,
     349,   350,   350,   351,   351,   351,   352,   353,   353,   354,
     355,   356,   357,   357,   358,   358,   359,   359,   360,   360,
     360,   361,   361,   362,   362,   363,   363,   364,   364,   364,
     364,   364,   365,   365,   365,   365,   365,   366,   366,   366,
     366,   366,   366,   367,   367,   367,   367,   368,   369,   370,
     371,   371,   371,   371,   371,   371,   372,   373,   373,   373,
     373,   374,   375,   375,   375,   375,   376,   377,   378,   378,
     378,   378,   379,   379,   380,   381,   381,   381,   382,   382,
     382,   383,   383,   383,   384,   385,   385,   385,   385,   385,
     385,   385,   385,   385,   386,   387,   387,   387,   388,   389,
     390,   390,   390,   391,   391,   391,   392,   392,   393,   394,
     395,   395,   395,   395,   396,   396,   397,   398,   399,   400,
     401,   402,   403,   403,   404,   404,   404,   405,   405,   406,
     406,   407,   407,   408,   408,   409,   409,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   412,   412,   412,   412,   412,   412,   412,   413,   413,
     413,   413,   414,   414,   414,   414,   415,   415,   416,   416,
     416,   416,   416,   417,   417,   418,   418,   418,   418,   419,
     419,   419,   420,   420,   421,   421,   422,   422,   423,   423,
     424,   425,   425,   426,   426,   426,   426,   426,   426,   427,
     427,   427,   427,   428,   428,   428,   429,   429,   430,   431,
     431,   431,   432,   432,   432,   432,   432,   433,   434,   434,
     435,   436,   437,   437,   438,   439,   440,   441,   442,   443
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     1,     4,     6,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     3,     3,     5,     5,     4,     2,     3,     3,
       5,     5,     5,     1,     1,     1,     1,     4,     3,     4,
       5,     3,     4,     2,     3,     3,     3,     7,     6,     4,
       3,     7,     6,     6,     5,     3,     3,     7,     6,     8,
       7,     7,     6,     8,     7,     0,     1,     3,     1,     3,
       2,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     4,     3,     2,
       1,     1,     1,     2,     3,     1,     4,     5,     5,     6,
       5,     6,     6,     7,     3,     3,     2,     3,     1,     4,
       5,     5,     6,     3,     2,     3,     4,     3,     1,     3,
       5,     0,     1,     1,     0,     2,     2,     4,     4,     3,
       1,     4,     5,    10,     8,     2,     1,     4,     7,     8,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     4,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     4,
       1,     4,     1,     4,     1,     4,     1,     2,     2,     1,
       1,     1,     1,     4,     5,     5,     3,     4,     1,     2,
       4,     3,     1,     2,     2,     1,     3,     3,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     1,
       4,     4,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     4,     8,     0,     4,     3,     3,     0,     2,     2,
       2,     2,     0,     2,     2,     2,     2,     0,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     3,     7,
       6,     1,     4,     3,     7,     6,     4,     4,     4,     3,
       7,     6,     2,     1,     2,     2,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     3,     3,     2,     2,
       2,     3,     3,     2,     3,     5,     1,     1,     3,     1,
       2,     3,     5,     6,     1,     1,     3,     1,     1,     1,
       1,     1,     4,     2,     0,     2,     2,     3,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     3,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       5,     5,     1,     0,     3,     2,     4,     4,     6,     3,
       1,     2,     0,     2,     2,     3,     1,     3,     2,     2,
       2,     1,     1,     0,     1,     1,     1,     1,     1,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     7,     7,     5,     5,     5,     3,     6,     5,
       5,     6,     3,     1,     4,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,     0,     0,     0,    11,     4,     5,    11,     0,     0,
       0,     1,     2,     3,     9,   489,     0,   488,   248,   249,
       0,     0,   485,   486,   487,   307,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   212,     0,     0,
     269,     0,   242,   225,   226,   227,   228,   229,   237,   232,
     247,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,   238,   230,
     231,   239,   240,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     0,     0,    24,
      25,    27,    21,    22,    28,    29,     0,    23,     0,     8,
      82,    84,    85,     0,   100,   101,   102,    86,    87,    88,
      94,   151,   153,   169,   172,   174,   177,   182,   185,   188,
     190,   192,   194,   196,   199,   200,   202,     0,   208,   201,
     215,   218,   219,   251,     0,   224,   251,     0,   236,   234,
     244,   246,   220,   251,   253,   261,   254,   255,   256,   259,
     260,   257,   258,   276,   278,   279,   280,   277,   310,   311,
     312,   313,   314,   315,   243,   353,   345,   352,   351,   350,
     347,   349,   346,   348,    26,    89,    90,    92,    91,    93,
     263,   264,   265,   262,   245,     0,     0,   272,   275,     0,
       0,     0,     0,     0,     0,   103,   105,   266,     0,     0,
       0,   116,   118,     0,     0,   140,     0,     0,     0,   198,
     197,   213,   214,     0,     0,     0,   233,     0,     0,   360,
     359,   358,   354,   268,     0,   283,     0,     0,     0,     0,
       0,   355,     0,     0,   367,   363,     0,   366,   378,   375,
     370,     0,   374,   379,     0,     0,     0,   377,     0,   369,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,   418,   419,   421,   420,
     422,   423,   424,   425,   426,   427,     0,   432,     0,   440,
     442,     0,   451,   452,    37,   411,   412,   413,   414,   415,
     416,   417,     0,     0,   483,     0,     0,     0,     0,    30,
      12,    13,    14,    15,    18,    19,    16,    17,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,   221,   223,   222,   235,   250,     0,     6,
       0,     0,   273,   323,     0,   318,   321,     0,   329,     0,
       0,   211,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   362,   361,   267,
       0,     0,     0,     0,     0,   308,   356,   357,     0,   364,
       0,   371,     0,     0,   376,   368,     0,     0,     0,    32,
      33,   381,    48,    65,    66,    39,    38,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   470,   469,   471,     0,
       0,     0,     0,    51,     0,    60,     0,     0,   429,   428,
       0,     0,   442,   441,   450,     0,     0,     0,     0,     0,
       0,     0,   477,    83,    98,   124,     0,     0,     0,     0,
       0,   150,   152,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,     0,     0,
       0,   453,   453,   453,   453,   170,   384,   388,   390,   392,
     394,   396,   173,   175,   176,   178,   179,   180,   181,   184,
     183,   186,   187,     0,     0,     0,     0,   206,     0,   216,
     217,     0,     0,     0,   274,   322,   317,   328,   210,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,   115,
     123,   117,     0,     0,   139,   137,   138,     0,     0,     0,
       0,   203,     0,   281,   297,   316,     0,     0,   326,     0,
     380,     0,     0,   327,   270,   271,     0,     0,    47,     0,
       0,     0,     0,    36,     0,     0,     0,    49,     0,    52,
       0,    59,   435,   433,   433,   444,     0,   446,   439,     0,
       0,   443,     0,   482,     0,     0,     0,     0,     0,     0,
       0,     0,   131,   125,   128,     0,    96,     0,    97,     0,
       0,   393,   454,   455,   456,   457,   458,   397,   398,   399,
     400,     0,   171,     0,   383,     0,     0,     0,     0,   189,
     336,   341,   342,   344,   191,   193,   333,   195,   207,     0,
       7,    10,   106,     0,   334,     0,     0,     0,     0,     0,
       0,   119,     0,     0,     0,   141,     0,     0,     0,   146,
       0,   204,   205,     0,     0,     0,     0,   365,   372,     0,
       0,    31,    40,    41,    34,    35,    45,    46,    42,     0,
      64,     0,     0,     0,     0,     0,    78,    55,    56,    50,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   445,   448,   449,   484,     0,     0,   479,     0,
       0,   476,   475,   474,   480,   132,   133,   134,     0,   126,
      95,   395,   453,   468,   387,   402,     0,     0,     0,     0,
       0,     0,   408,   409,   410,   386,   385,   389,   391,     0,
       0,   340,   339,   338,   335,   332,   252,   114,   108,     0,
     107,   110,     0,     0,     0,   120,   121,     0,   142,     0,
       0,     0,   145,     0,   287,   292,   284,   299,   304,   303,
     309,     0,   305,   306,     0,   301,   298,   302,   300,   320,
       0,   325,     0,   373,   331,     0,    62,     0,    63,    80,
      72,    68,     0,     0,     0,     0,    54,    58,   436,   459,
     460,   461,     0,   437,     0,   431,   430,   447,   481,   478,
       0,     0,     0,   129,   127,   401,   382,     0,     0,     0,
     466,   467,   406,   407,   337,   343,   109,   112,     0,   111,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     319,   324,   330,    61,    79,    74,    70,    77,    71,    67,
       0,    57,     0,     0,   434,   472,   473,   135,   136,     0,
     463,   464,   465,   403,   404,   405,   113,     0,   147,   144,
       0,   149,   290,   289,   285,   288,   291,   295,   294,   286,
     293,   296,   282,    81,    73,    69,   438,   462,   130,     0,
       0,     0,   143,   148
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    82,    83,   300,
      84,    85,    86,    87,    88,    89,    90,    91,   423,   668,
      92,    93,    94,   569,   432,    95,    96,    97,    98,   263,
     675,   676,   765,    99,   366,   101,   102,   103,   104,   105,
     195,   196,   522,   200,   106,   201,   202,   314,   315,   593,
     594,   707,   803,   107,   204,   205,   108,   648,   649,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   353,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   189,   152,   153,   154,   390,   756,   826,
     827,   654,   767,   155,   156,   768,   157,   158,   159,   367,
     160,   161,   162,   163,   625,   524,   619,   734,   620,   621,
     164,   165,   166,   167,   168,   169,   170,   236,   171,   248,
     172,   241,   173,   246,   237,   242,   549,   412,   485,   614,
     486,   487,   488,   489,   490,   491,   725,   284,   285,   286,
     287,   288,   689,   439,   289,   443,   442,   576,   581,   290,
     291,   607,   688,   853,   812,   612,   174,   175,   176,   177,
     178,   179,   293,   294,   180,   181,   182,   183,   184
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -610
static const yytype_int16 yypact[] =
{
     -89,   -40,     9,   145,    75,  -610,  -610,  -610,   593,   262,
     288,  -610,  -610,  -610,   -92,  -610,   801,  -610,  -610,  -610,
     154,   188,  -610,  -610,  -610,  -610,   205,   305,   295,   355,
       3,   330,   330,   272,   298,  2528,  2528,  2685,  2685,     0,
    -610,   238,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,    60,   308,   313,   318,   958,   392,   307,   309,   336,
     340,   407,   -45,    81,   115,   352,   362,  -610,  -610,  -610,
    -610,  -610,  -610,   463,   463,   367,   377,   281,   -65,  2365,
     476,  -128,   363,   363,   363,  -610,   363,   363,   363,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,   363,  -610,   363,  -610,
     492,  -610,  -610,   477,  -610,  -610,  -610,  -610,  -610,  -610,
     468,   471,  -610,   797,   349,   334,   390,    59,   197,  -610,
     502,   454,   504,   487,  -610,  -610,  -610,    74,  -610,  -610,
     219,  -610,  -610,  -610,   238,  -610,  -610,   238,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,   158,   494,  -610,  -610,    32,
    1115,  1272,  1429,    61,   570,   552,  -610,  -610,   579,   556,
     554,   564,  -610,   591,    51,  -610,    52,  2371,  2371,  -610,
    -610,   219,   219,   467,   469,  2371,  -610,   485,   490,  -610,
    -610,  -610,  -610,  -610,    46,  -610,  2371,  2371,  2371,  2371,
     581,  -610,   491,   498,  -610,  -610,    63,  -610,  -610,  -610,
    -610,   125,  -610,  -610,  2371,  2371,   501,  -610,   503,  -610,
    2371,  2371,   610,   297,   618,   335,   328,     7,   -71,   590,
     629,   -36,  -610,   451,    30,    49,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,    37,  -610,   213,  -610,
    -610,   630,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,   628,   -26,  -610,  1586,  2371,  2371,  2371,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  2371,  2371,
    2371,   595,   596,  -610,   280,   604,  2528,  2528,  2528,  2528,
    2528,  2528,  2528,  2528,  2528,  2528,  2528,  2528,  2528,  2528,
    2528,  2528,  2528,    35,  2528,  2528,  2528,  2528,  2528,  2528,
    2528,  2528,  2528,  2528,  2528,   577,   585,   586,   587,  1743,
    -610,  2685,  2685,   568,  -610,   568,  -610,   568,   642,  -610,
     618,  2371,  -610,  -610,    47,  -610,   492,   517,  -610,    79,
     624,  -610,    11,   295,    22,   648,  2371,     3,    53,   330,
    2371,  2371,   224,   229,  2371,  2371,    80,  -610,  -610,  -610,
      97,   101,   114,   124,   130,  -610,  -610,  -610,   463,  -610,
     463,  -610,   209,   220,  -610,  -610,   232,   234,   571,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,   614,   618,   520,
     521,  -610,  -610,   631,   655,   657,  -610,  -610,  -610,   662,
     653,   486,   618,   633,   654,   633,   630,    36,  -610,  -610,
     630,   630,  -610,    48,  -610,   632,   476,  2371,  2371,   430,
     -17,   619,  -610,  -610,  -610,  -610,  2371,   634,  2371,   643,
    2371,   471,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,    35,  2371,
     386,   253,   253,   253,   253,   443,   493,   495,   496,  -610,
    -610,  -610,   423,   390,   390,    59,    59,    59,    59,   197,
     197,  -610,  -610,   191,   191,   463,   463,  -610,   236,  -610,
    -610,  2371,   363,   363,  -610,  -610,  -610,  -610,  -610,  2371,
     645,   191,   -20,   647,    20,  -610,  2371,   649,   -13,  -610,
    -610,  -610,  2371,   651,  -610,  -610,  -610,   635,   627,   241,
     242,  -610,   569,  -610,  -610,  -610,   559,   576,  -610,   597,
    -610,   -48,   578,  -610,  -610,  -610,   618,   445,  -610,   618,
     618,   332,    21,  -610,   117,   636,   575,   633,   618,   681,
     638,   681,   199,  -610,  -610,  -610,   237,  -610,    48,   213,
     213,  -610,  2371,  -610,   686,   480,  2371,  -148,  2371,  2371,
    2371,  2371,   460,   695,  -610,  2371,  -610,  2371,  -610,   613,
     250,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  2528,  -610,    35,   343,    35,    35,   616,   617,  -610,
     246,  -610,  -610,  -610,  -610,  -610,   572,  -610,  -610,    27,
    -610,  -610,  -610,   727,  -610,  2371,   702,  2371,  2371,    15,
     711,  -610,  2371,  2371,   712,  -610,  2371,   324,     4,  -610,
    2371,  -610,  -610,   196,   119,  1900,  2057,  -610,  -610,   637,
    2214,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  2371,
    -610,    57,   747,   -19,   191,   116,  -610,  -610,  -610,   681,
    -610,   618,   618,   630,  2528,  2528,  2528,  2528,   541,   244,
     267,   630,  -610,  -610,  -610,  -610,  2371,  2371,  -610,   505,
     507,  -610,  -610,  -610,  -610,  -610,  -610,   715,  2371,   695,
    -610,  -610,   253,    59,   495,  -610,   741,  2528,   255,   255,
     274,   274,  -610,  -610,  -610,  -610,  -610,   496,  -610,   650,
     652,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  2371,
    -610,  -610,  2371,   728,  2371,  -610,  -610,  2371,  -610,   756,
     731,   239,  -610,   708,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,   765,  -610,  -610,  2371,  -610,  -610,  -610,  -610,  -610,
     639,  -610,   251,  -610,  -610,   252,  -610,  2371,  -610,   714,
    -610,  -610,   -15,   734,    -9,   191,  -610,   633,   255,    59,
      59,    59,   325,  -610,   736,  -610,  -610,  -610,  -610,  -610,
    2371,  2371,   474,   725,  -610,  -610,  -610,    -3,   185,   582,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  2371,  -610,
    -610,   720,  2371,  2371,   771,  2371,   133,   364,   658,   257,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
      -8,   681,   567,  2528,  -610,  -610,  -610,  -610,  -610,   618,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,   191,  -610,  -610,
     748,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,    59,  -610,   751,
    2371,  2371,  -610,  -610
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -610,  -610,  -610,   783,   784,  -610,   782,  -610,  -610,   -63,
    -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,  -421,  -610,  -610,  -610,  -610,  -610,  -610,
    -610,     8,  -609,  -610,    -6,   -16,  -610,  -610,   687,  -610,
    -610,   419,   269,  -329,  -610,  -610,   417,  -610,   481,   201,
      89,  -610,  -610,  -610,   766,   421,  -610,  -610,   153,  -610,
    -610,   499,   506,   611,  -610,   478,   192,  -328,   190,   214,
    -610,  -610,  -610,   532,  -610,  -610,  -610,  -610,   676,  -610,
     539,   231,  -610,  -610,  -610,  -610,  -610,  -610,  -610,   278,
    -610,  -610,  -610,   -35,  -610,  -326,  -610,  -304,  -610,  -299,
    -610,  -610,  -295,  -610,  -610,   156,  -610,  -610,  -610,  -610,
    -610,  -610,  -242,  -610,  -610,  -610,  -610,  -610,  -610,   161,
    -610,  -610,  -610,  -610,   320,  -356,  -485,  -610,  -610,    85,
    -477,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,  -610,
     749,  -610,   762,  -610,   753,   755,   429,  -261,   354,  -610,
    -610,   217,   218,   222,   365,  -610,  -610,   221,  -610,  -610,
    -610,  -610,   260,  -424,  -610,   400,    13,  -610,  -610,  -610,
    -610,  -452,  -381,    38,   122,  -610,  -610,  -610,  -610,  -610,
    -610,  -610,  -610,   398,  -610,   131,  -610,  -280,   -58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     188,   444,   100,   433,   435,   238,   243,   481,   446,   495,
     496,   497,   498,   574,   571,   243,   238,   635,   528,   624,
     301,   302,   533,   303,   304,   305,   622,   622,   643,   482,
     608,   609,   610,   306,   483,   307,   634,   411,   484,    16,
     587,   198,    17,   523,   622,   527,   426,   427,   519,   224,
     520,   417,   742,    22,    23,    24,   411,   638,   418,   520,
     647,   308,   669,   526,   781,   421,   361,   217,   521,   658,
     341,   342,   231,    29,   218,   436,   436,    77,   521,   521,
     308,   308,   213,   214,    15,   379,   379,   370,    78,     1,
     532,   699,   371,     2,   659,   422,    79,   398,   777,   513,
      64,   355,   700,   542,    27,   380,   381,   736,   357,   295,
     521,    73,   296,   308,   308,   764,   264,   265,    15,   764,
     297,   579,   359,   298,   580,   764,   764,   780,   757,   758,
     759,   835,   341,   342,   215,   308,    40,   838,   874,     9,
      25,   760,   862,   758,   759,    11,   679,    10,   308,   362,
     783,   478,   481,   437,   481,   672,   572,   558,   308,   400,
     575,   577,   750,   389,   308,   199,   863,   670,   430,   479,
     622,   567,   199,   836,   482,   839,   482,   219,   751,   483,
     399,   483,   515,   484,   364,   484,   369,   434,   199,   782,
     419,   420,   234,   636,    15,   640,   199,   622,   235,   644,
     199,   382,   383,   778,   431,   199,   671,   199,   349,   386,
     573,   438,   447,   428,   517,   541,   543,   865,   870,   544,
     391,   392,   393,   394,   588,   589,   239,   480,   850,   851,
     852,   875,   240,   784,   673,   590,   545,    56,   402,   403,
     761,    15,   401,   308,   406,   407,    61,   762,   763,   546,
      18,    19,   440,   764,   308,   785,   674,     2,   308,   547,
     805,   762,   763,   308,   864,   548,   308,   764,   308,   185,
     308,   691,   343,   344,   823,   308,   308,   824,   794,   449,
     450,   451,   452,   713,   308,   308,   308,   481,   190,   481,
     481,   308,   453,   454,   455,   661,   351,   352,   664,   665,
     840,   794,   186,    51,    52,    53,    54,   680,   622,   482,
     743,   482,   482,   299,   483,   458,   483,   483,   484,   216,
     484,   484,   191,   358,   311,   312,   754,    15,   755,   441,
     193,   617,   618,   194,    62,    63,    64,   808,   809,   192,
     550,   537,   550,   508,   552,   514,   538,    73,    74,    50,
      51,    52,    53,    54,   692,   553,   789,   790,   791,   792,
     530,   795,   749,   197,   535,   536,   841,   554,   203,   555,
     844,   628,   879,   867,   758,   759,   651,   652,   539,   540,
     622,    62,    63,    64,   796,   712,   831,   832,   207,   807,
      16,   843,   873,    17,    73,    74,   868,   225,   341,   342,
     334,   335,   336,   788,    22,    23,    24,   842,   731,   732,
     733,   797,   354,   683,   208,   356,   850,   851,   852,   252,
     786,   787,   230,   834,    29,   220,   684,   685,   686,   687,
     221,   584,   585,   409,   410,   222,    51,    52,    53,    54,
     592,   226,   596,   227,   598,   623,   623,   623,   623,   630,
     631,   253,   254,   255,   256,   257,   258,   259,   260,   337,
     338,   339,   340,   623,   617,   618,    15,    62,    63,    64,
     228,   413,   414,   600,   229,   602,   603,   604,   605,   606,
      73,    74,   684,   685,   686,   687,   244,    40,   415,   416,
     335,   336,   762,   763,   662,   663,   245,   869,   764,   666,
     667,   250,   478,   632,   715,   629,   705,   706,   810,   811,
     641,   251,   309,    28,   292,   877,   645,    30,   299,   310,
     479,   311,   312,   847,   848,   261,   308,   493,   494,   316,
     716,   499,   500,   317,   262,   333,   717,   718,   719,   346,
     720,   721,   722,   723,   724,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   501,   502,   278,
     279,   280,   281,   282,   283,   345,   695,   209,   210,   347,
     698,   348,   701,   702,   703,   704,   211,   212,   372,   592,
     360,   710,   509,   510,   866,   871,   373,   374,   878,   623,
     626,   626,   693,   694,   375,   376,    15,    16,   377,   378,
      17,   384,   387,   385,   395,    18,    19,   388,   396,    20,
      21,    22,    23,    24,    25,   397,   623,    26,   404,   738,
     405,   740,   741,    27,   408,   411,   745,   746,   424,    28,
     748,    29,   425,    30,   753,   429,   445,    17,   456,   460,
     457,   503,   504,   505,   506,    31,    32,   511,    33,   512,
     772,    34,   516,   776,   775,   518,   529,   556,   559,   560,
      35,    36,   557,   562,   563,   561,   564,   565,   570,   566,
      37,    38,   568,   582,    39,   586,   591,   595,   597,   611,
     798,   799,   613,   633,   637,   615,   650,   616,   646,   653,
     642,   647,   592,   655,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
     656,    56,   660,   678,   657,   681,    57,    58,    59,    60,
      61,   696,   677,   816,   682,   697,   817,   623,   819,   708,
     711,   820,   729,   730,   735,   737,    62,    63,    64,   739,
      65,    66,    67,    68,    69,    70,    71,    72,   744,    73,
      74,    75,    76,   747,   773,   779,   793,   800,   829,   801,
      23,   833,    77,   802,   821,   818,   822,   814,   825,   815,
     828,   521,   672,    78,   830,   436,   849,   857,   855,   860,
     872,    79,   876,   880,   845,   846,   881,    12,    13,    14,
     313,   837,   525,   639,   531,   459,   709,   804,   206,   623,
     534,   752,   856,   350,    15,    16,   858,   859,    17,   861,
     766,   232,   492,    18,    19,   461,   770,    20,    21,    22,
      23,    24,    25,   462,   233,    26,   627,   249,   247,   551,
     714,    27,   599,   727,   690,   726,    80,    28,   728,    29,
      81,    30,   578,   813,   583,   601,   854,   806,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,     0,    34,
       0,     0,     0,     0,   882,   883,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    39,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,     0,     0,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,   187,    56,
       0,     0,     0,     0,    57,    58,    59,    60,    61,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    15,    16,     0,     0,    17,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,    28,     0,    29,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,     0,    33,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,     0,     0,    80,     0,     0,     0,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   223,    56,     0,     0,     0,
       0,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,    74,    75,    76,    15,    16,
       0,     0,    17,     0,     0,     0,     0,    18,    19,     0,
       0,    20,    21,    22,    23,    24,    25,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,     0,
      33,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,     0,     0,    39,     0,     0,     0,
       0,    80,     0,     0,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    56,     0,     0,     0,     0,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
     363,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,    75,    76,    15,    16,     0,     0,    17,
       0,     0,     0,     0,    18,    19,     0,     0,    20,    21,
      22,    23,    24,    25,     0,     0,    26,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,    28,     0,
      29,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,     0,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,     0,     0,     0,     0,    80,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,     0,
      56,     0,     0,     0,     0,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,     0,     0,   365,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,     0,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,    74,
      75,    76,    15,    16,     0,     0,    17,     0,     0,     0,
       0,    18,    19,     0,     0,    20,    21,    22,    23,    24,
      25,     0,     0,    26,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,    28,     0,    29,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,    33,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,    37,    38,     0,     0,
      39,     0,     0,     0,     0,    80,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,     0,    56,     0,     0,
       0,     0,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,     0,     0,   368,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,     0,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,    74,    75,    76,    15,
      16,     0,     0,    17,     0,     0,     0,     0,    18,    19,
       0,     0,    20,    21,    22,    23,    24,    25,     0,     0,
      26,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,    28,     0,    29,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
       0,    33,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,    39,     0,     0,
       0,     0,    80,     0,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,     0,    56,     0,     0,     0,     0,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,     0,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,    74,    75,    76,    15,    16,     0,     0,
      17,     0,     0,     0,     0,    18,    19,     0,     0,    20,
      21,    22,    23,    24,    25,     0,     0,    26,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,    28,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,     0,    33,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    36,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,     0,     0,    39,     0,     0,     0,     0,    80,
       0,     0,   448,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
       0,    56,     0,     0,     0,     0,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,     0,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      74,    75,    76,    15,    16,     0,     0,    17,     0,     0,
       0,     0,    18,    19,     0,     0,    20,    21,    22,    23,
      24,    25,     0,     0,    26,     0,     0,     0,     0,     0,
      27,     0,     0,     0,     0,     0,    28,     0,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    32,     0,    33,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,     0,
       0,    39,     0,     0,     0,     0,    80,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,     0,    56,     0,
       0,     0,     0,    57,    58,    59,    60,    61,     0,     0,
       0,     0,     0,     0,     0,   769,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,     0,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,    74,    75,    76,
      15,    16,     0,     0,    17,     0,     0,     0,     0,    18,
      19,     0,     0,    20,    21,    22,    23,    24,    25,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,    28,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,    33,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,    39,     0,
       0,     0,     0,    80,     0,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,     0,    56,     0,     0,     0,     0,
      57,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,   771,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,     0,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,    74,    75,    76,    15,    16,     0,
       0,    17,     0,     0,     0,     0,    18,    19,     0,     0,
      20,    21,    22,    23,    24,    25,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
      28,     0,    29,     0,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,     0,    33,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,     0,     0,    39,     0,     0,     0,     0,
      80,     0,     0,     0,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     0,    56,     0,     0,     0,     0,    57,    58,    59,
      60,    61,     0,     0,     0,     0,     0,     0,     0,   774,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      73,    74,    75,    76,    15,    16,     0,     0,    17,     0,
       0,     0,     0,    18,    19,     0,     0,    20,    21,    22,
      23,    24,    25,     0,     0,    26,     0,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,    28,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,     0,    33,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    39,     0,     0,     0,     0,    80,     0,     0,
       0,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,     0,    56,
       0,     0,     0,     0,    57,    58,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,     0,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,    74,    75,
      76,    15,    16,     0,     0,    17,     0,     0,     0,     0,
      18,    19,     0,     0,    20,    21,    22,    23,    24,    25,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,    29,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,     0,
       0,   278,   279,   280,   281,   282,   283,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,     0,     0,    39,
       0,     0,     0,     0,    80,     0,     0,     0,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     0,    56,     0,     0,     0,
       0,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,     0,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,    74,    75,    76,    15,    16,
       0,     0,    17,     0,     0,     0,     0,    18,    19,     0,
       0,    20,    21,    22,    23,    24,    25,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,     0,    56,     0,     0,     0,     0,    57,    58,
      59,    60,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,     0,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
      16,   281,     8,   264,   265,    63,    64,   333,    34,   337,
     338,   339,   340,   437,   435,    73,    74,    37,   374,   504,
      83,    84,   378,    86,    87,    88,   503,   504,    41,   333,
     482,   483,   484,    96,   333,    98,   521,     7,   333,     4,
      57,    38,     7,   372,   521,   374,    82,    83,    37,    55,
      39,    44,    37,    18,    19,    20,     7,    37,    51,    39,
      56,    34,    41,    41,   673,   136,    34,     7,    57,   117,
      73,    74,   117,    38,    14,    39,    39,   169,    57,    57,
      34,    34,    82,    83,     3,    34,    34,    26,   180,   178,
      37,   239,    31,   182,   142,   166,   188,    34,    41,   360,
     145,   136,   250,     6,    30,    54,    54,    80,   143,   237,
      57,   156,   240,    34,    34,   134,   181,   182,     3,   134,
     248,    73,   185,   251,    76,   134,   134,   146,     9,    10,
      11,   146,    73,    74,   134,    34,   101,   146,   146,   179,
      21,    22,     9,    10,    11,     0,   567,   138,    34,   117,
      34,   116,   478,   116,   480,    38,   436,   418,    34,    34,
     440,   441,   647,   117,    34,   185,    33,   146,   138,   134,
     647,   432,   185,   782,   478,   784,   480,   117,   174,   478,
     117,   480,   135,   478,   190,   480,   192,   138,   185,   674,
     183,   184,   111,   522,     3,   524,   185,   674,   117,   528,
     185,   207,   208,   146,   174,   185,   562,   185,   134,   215,
     174,   174,   238,   249,   135,   135,   119,   826,   827,   122,
     226,   227,   228,   229,   241,   242,   111,   192,   231,   232,
     233,   840,   117,   117,   117,   252,   135,   118,   244,   245,
     121,     3,   117,    34,   250,   251,   127,   128,   129,   135,
      12,    13,    39,   134,    34,   139,   139,   182,    34,   135,
     712,   128,   129,    34,   131,   135,    34,   134,    34,     7,
      34,    34,    75,    76,    35,    34,    34,    38,    34,   295,
     296,   297,   298,   611,    34,    34,    34,   613,   134,   615,
     616,    34,   308,   309,   310,   556,    77,    78,   559,   560,
     785,    34,    14,   112,   113,   114,   115,   568,   785,   613,
     639,   615,   616,   155,   613,    35,   615,   616,   613,    41,
     615,   616,   134,   165,    44,    45,   130,     3,   132,   116,
      25,   140,   141,    38,   143,   144,   145,   718,   719,   134,
     398,   117,   400,   349,   135,   361,   117,   156,   157,   111,
     112,   113,   114,   115,   117,   135,   684,   685,   686,   687,
     376,   117,    38,     8,   380,   381,   787,   135,    38,   135,
     794,   135,   857,     9,    10,    11,   135,   135,   384,   385,
     857,   143,   144,   145,   117,   135,   135,   135,   116,   717,
       4,    66,   135,     7,   156,   157,    32,     5,    73,    74,
      66,    67,    68,   683,    18,    19,    20,   788,   162,   163,
     164,   691,   134,   214,   116,   137,   231,   232,   233,   138,
     681,   682,    15,   779,    38,   117,   227,   228,   229,   230,
     117,   447,   448,   136,   137,   117,   112,   113,   114,   115,
     456,   134,   458,   134,   460,   503,   504,   505,   506,   512,
     513,   170,   171,   172,   173,   174,   175,   176,   177,    69,
      70,    71,    72,   521,   140,   141,     3,   143,   144,   145,
     134,   136,   137,   479,   134,   222,   223,   224,   225,   226,
     156,   157,   227,   228,   229,   230,   134,   101,   160,   161,
      67,    68,   128,   129,    49,    50,   134,   133,   134,   167,
     168,   134,   116,   519,   161,   511,    46,    47,   234,   235,
     526,   134,    35,    36,    38,   843,   532,    40,   155,    42,
     134,    44,    45,    49,    50,   244,    34,   335,   336,    61,
     187,   341,   342,    62,   253,   186,   193,   194,   195,    85,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   343,   344,   216,
     217,   218,   219,   220,   221,    63,   582,    35,    36,    65,
     586,    84,   588,   589,   590,   591,    37,    38,     8,   595,
      86,   597,   351,   352,   826,   827,    34,     8,   849,   647,
     505,   506,   579,   580,    38,    41,     3,     4,    34,     8,
       7,   134,   117,   134,    23,    12,    13,   117,   117,    16,
      17,    18,    19,    20,    21,   117,   674,    24,   117,   635,
     117,   637,   638,    30,    14,     7,   642,   643,    38,    36,
     646,    38,     3,    40,   650,   184,     8,     7,    43,    35,
      44,    64,    57,    57,    57,    52,    53,    79,    55,     7,
     656,    58,   135,   669,   660,    31,     8,    86,   138,   138,
      67,    68,    48,     8,     7,    34,     4,    14,    14,   183,
      77,    78,    39,    41,    81,   245,    57,    43,    35,   236,
     696,   697,   189,    38,    37,   190,    59,   191,    37,   120,
      41,    56,   708,   134,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     134,   118,   134,   138,   117,    34,   123,   124,   125,   126,
     127,    35,    86,   739,    86,   245,   742,   785,   744,    34,
     117,   747,   116,   116,   162,     8,   143,   144,   145,    37,
     147,   148,   149,   150,   151,   152,   153,   154,    37,   156,
     157,   158,   159,    41,   117,     8,   215,   252,   764,   252,
      19,   777,   169,    48,     8,    37,    35,   117,    60,   117,
       5,    57,    38,   180,   135,    39,    51,    57,   196,     8,
     122,   188,   215,    35,   800,   801,    35,     4,     4,     7,
     103,   783,   373,   524,   377,   314,   595,   708,    32,   857,
     379,   648,   818,   127,     3,     4,   822,   823,     7,   825,
     654,    62,   334,    12,    13,   316,   655,    16,    17,    18,
      19,    20,    21,   317,    62,    24,   506,    74,    73,   400,
     613,    30,   478,   615,   574,   614,   243,    36,   616,    38,
     247,    40,   442,   721,   446,   480,   808,   716,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,   880,   881,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    81,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159,     3,     4,    -1,    -1,     7,
      -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      78,    -1,    -1,    81,    -1,    -1,    -1,    -1,   243,    -1,
      -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,    -1,   156,   157,
     158,   159,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,
      -1,    12,    13,    -1,    -1,    16,    17,    18,    19,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,
      81,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,    -1,   156,   157,   158,   159,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      -1,    -1,    16,    17,    18,    19,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,    -1,
      -1,    -1,   243,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,    -1,   156,   157,   158,   159,     3,     4,    -1,    -1,
       7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,   243,
      -1,    -1,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,    -1,   156,
     157,   158,   159,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,    -1,   156,   157,   158,   159,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    -1,    -1,    16,    17,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    55,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     143,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,    -1,   156,   157,   158,   159,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,    -1,
      16,    17,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    -1,    -1,    81,    -1,    -1,    -1,    -1,
     243,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,    -1,
     156,   157,   158,   159,     3,     4,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    12,    13,    -1,    -1,    16,    17,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    -1,    81,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,    -1,   156,   157,   158,
     159,     3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,
      12,    13,    -1,    -1,    16,    17,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,    -1,
      -1,   216,   217,   218,   219,   220,   221,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    78,    -1,    -1,    81,
      -1,    -1,    -1,    -1,   243,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   143,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,    -1,   156,   157,   158,   159,     3,     4,
      -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
      -1,   156,   157,   158,   159
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   178,   182,   256,   257,   258,   259,   260,   261,   179,
     138,     0,   258,   259,   261,     3,     4,     7,    12,    13,
      16,    17,    18,    19,    20,    21,    24,    30,    36,    38,
      40,    52,    53,    55,    58,    67,    68,    77,    78,    81,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   118,   123,   124,   125,
     126,   127,   143,   144,   145,   147,   148,   149,   150,   151,
     152,   153,   154,   156,   157,   158,   159,   169,   180,   188,
     243,   247,   262,   263,   265,   266,   267,   268,   269,   270,
     271,   272,   275,   276,   277,   280,   281,   282,   283,   288,
     289,   290,   291,   292,   293,   294,   299,   308,   311,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   359,   360,   361,   368,   369,   371,   372,   373,
     375,   376,   377,   378,   385,   386,   387,   388,   389,   390,
     391,   393,   395,   397,   431,   432,   433,   434,   435,   436,
     439,   440,   441,   442,   443,     7,    14,   117,   290,   358,
     134,   134,   134,    25,    38,   295,   296,     8,    38,   185,
     298,   300,   301,    38,   309,   310,   309,   116,   116,   328,
     328,   335,   335,    82,    83,   134,   344,     7,    14,   117,
     117,   117,   117,   117,   289,     5,   134,   134,   134,   134,
      15,   117,   395,   397,   111,   117,   392,   399,   443,   111,
     117,   396,   400,   443,   134,   134,   398,   400,   394,   399,
     134,   134,   138,   170,   171,   172,   173,   174,   175,   176,
     177,   244,   253,   284,   181,   182,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   216,   217,
     218,   219,   220,   221,   412,   413,   414,   415,   416,   419,
     424,   425,    38,   437,   438,   237,   240,   248,   251,   155,
     264,   264,   264,   264,   264,   264,   264,   264,    34,    35,
      42,    44,    45,   293,   302,   303,    61,    62,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   186,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    63,    85,    65,    84,   134,
     333,    77,    78,   348,   344,   348,   344,   348,   165,   264,
      86,    34,   117,   135,   289,   135,   289,   374,   135,   289,
      26,    31,     8,    34,     8,    38,    41,    34,     8,    34,
      54,    54,   289,   289,   134,   134,   289,   117,   117,   117,
     362,   289,   289,   289,   289,    23,   117,   117,    34,   117,
      34,   117,   289,   289,   117,   117,   289,   289,    14,   136,
     137,     7,   402,   136,   137,   160,   161,    44,    51,   183,
     184,   136,   166,   273,    38,     3,    82,    83,   249,   184,
     138,   174,   279,   402,   138,   402,    39,   116,   174,   418,
      39,   116,   421,   420,   442,     8,    34,   238,   246,   290,
     290,   290,   290,   290,   290,   290,    43,    44,    35,   303,
      35,   316,   317,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   116,   134,
     192,   350,   352,   354,   357,   403,   405,   406,   407,   408,
     409,   410,   320,   321,   321,   322,   322,   322,   322,   323,
     323,   324,   324,    64,    57,    57,    57,   135,   289,   336,
     336,    79,     7,   402,   290,   135,   135,   135,    31,    37,
      39,    57,   297,   298,   380,   296,    41,   298,   380,     8,
     290,   301,    37,   380,   310,   290,   290,   117,   117,   289,
     289,   135,     6,   119,   122,   135,   135,   135,   135,   401,
     443,   401,   135,   135,   135,   135,    86,    48,   402,   138,
     138,    34,     8,     7,     4,    14,   183,   402,    39,   278,
      14,   278,   442,   174,   418,   442,   422,   442,   420,    73,
      76,   423,    41,   438,   290,   290,   245,    57,   241,   242,
     252,    57,   290,   304,   305,    43,   290,    35,   290,   403,
     289,   409,   222,   223,   224,   225,   226,   426,   426,   426,
     426,   236,   430,   189,   404,   190,   191,   140,   141,   381,
     383,   384,   385,   443,   381,   379,   384,   379,   135,   289,
     264,   264,   290,    38,   381,    37,   298,    37,    37,   297,
     298,   290,    41,    41,   298,   290,    37,    56,   312,   313,
      59,   135,   135,   120,   366,   134,   134,   117,   117,   142,
     134,   402,    49,    50,   402,   402,   167,   168,   274,    41,
     146,   380,    38,   117,   139,   285,   286,    86,   138,   278,
     402,    34,    86,   214,   227,   228,   229,   230,   427,   417,
     417,    34,   117,   421,   421,   290,    35,   245,   290,   239,
     250,   290,   290,   290,   290,    46,    47,   306,    34,   304,
     290,   117,   135,   322,   406,   161,   187,   193,   194,   195,
     197,   198,   199,   200,   201,   411,   412,   407,   408,   116,
     116,   162,   163,   164,   382,   162,    80,     8,   290,    37,
     290,   290,    37,   298,    37,   290,   290,    41,   290,    38,
     381,   174,   313,   290,   130,   132,   363,     9,    10,    11,
      22,   121,   128,   129,   134,   287,   360,   367,   370,   135,
     374,   135,   289,   117,   135,   289,   290,    41,   146,     8,
     146,   287,   381,    34,   117,   139,   402,   402,   442,   322,
     322,   322,   322,   215,    34,   117,   117,   442,   290,   290,
     252,   252,    48,   307,   305,   426,   440,   322,   427,   427,
     234,   235,   429,   429,   117,   117,   290,   290,    37,   290,
     290,     8,    35,    35,    38,    60,   364,   365,     5,   289,
     135,   135,   135,   290,   380,   146,   287,   286,   146,   287,
     381,   278,   427,    66,   418,   290,   290,    49,    50,    51,
     231,   232,   233,   428,   428,   196,   290,    57,   290,   290,
       8,   290,     9,    33,   131,   287,   367,     9,    32,   133,
     287,   367,   122,   135,   146,   287,   215,   322,   402,   381,
      35,    35,   290,   290
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
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
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
    while (YYID (0))
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
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
      YYSIZE_T yyn = 0;
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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
      int yychecklim = YYLAST - yyn + 1;
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
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
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
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

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
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

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
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
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
	yytype_int16 *yyss1 = yyss;
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

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 609 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VersionDecl, (yylsp[(1) - (4)]));

		if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
			yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
	}
    break;

  case 7:
#line 616 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VersionDecl, (yylsp[(1) - (6)]));

		if(!XPath2Utils::equals((yyvsp[(3) - (6)].str),sz1_0))
			yyerror((yylsp[(2) - (6)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
        bool bValidEnc=false;
        if(((yyvsp[(5) - (6)].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && (yyvsp[(5) - (6)].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
           ((yyvsp[(5) - (6)].str)[0] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && (yyvsp[(5) - (6)].str)[0] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z))
        {
            bValidEnc=true;
            int nLen=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(5) - (6)].str));
            for(int i=1;i<nLen;i++)
            {
                if(((yyvsp[(5) - (6)].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_A && (yyvsp[(5) - (6)].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_Z) ||
                   ((yyvsp[(5) - (6)].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_a && (yyvsp[(5) - (6)].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chLatin_z) ||
                   ((yyvsp[(5) - (6)].str)[i] >= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_0 && (yyvsp[(5) - (6)].str)[i] <= XERCES_CPP_NAMESPACE_QUALIFIER chDigit_9) ||
                   (yyvsp[(5) - (6)].str)[i] == XERCES_CPP_NAMESPACE_QUALIFIER chPeriod ||
                   (yyvsp[(5) - (6)].str)[i] == XERCES_CPP_NAMESPACE_QUALIFIER chDash)
                {
                    continue;
                }
                bValidEnc=false;
                break;
            }
        }
        if(!bValidEnc)
          yyerror((yylsp[(5) - (6)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
		// TODO: store the encoding somewhere
	}
    break;

  case 8:
#line 650 "../src/parser/XQParser.y"
    {
	}
    break;

  case 9:
#line 657 "../src/parser/XQParser.y"
    {
	}
    break;

  case 10:
#line 664 "../src/parser/XQParser.y"
    {
		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(5) - (6)].str))==0)
			yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
		QP->_query->setIsLibraryModule();
		QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
		CONTEXT->setNamespaceBinding((yyvsp[(3) - (6)].str),(yyvsp[(5) - (6)].str));
	}
    break;

  case 12:
#line 678 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror((yylsp[(2) - (3)]), "Prolog contains a setter declaration after a variable, function or option declaration");
    }
    break;

  case 13:
#line 683 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror((yylsp[(2) - (3)]), "Prolog contains an import declaration after a variable, function or option declaration");
    }
    break;

  case 14:
#line 688 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror((yylsp[(2) - (3)]), "Prolog contains a namespace declaration after a variable, function or option declaration");
    }
    break;

  case 15:
#line 693 "../src/parser/XQParser.y"
    {
		if(QP->_flags.get(BIT_DECLARE_SECOND_STEP))
			yyerror((yylsp[(2) - (3)]), "Prolog contains a default namespace declaration after a variable, function or option declaration");
    }
    break;

  case 16:
#line 698 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
    break;

  case 17:
#line 702 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
		XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
		CONTEXT->addCustomFunction(decl);
		QP->_query->addFunction(decl);
	}
    break;

  case 18:
#line 709 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    }
    break;

  case 19:
#line 713 "../src/parser/XQParser.y"
    {
		QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 31:
#line 750 "../src/parser/XQParser.y"
    {

          REJECT_NOT_XQUERY(NamespaceDecl, (yylsp[(1) - (5)]));
          // if it has already bound, report an error
          if(QP->_namespaceDecls.containsKey((yyvsp[(3) - (5)].str)))
            yyerror((yylsp[(3) - (5)]), "Namespace prefix has already been bound to a namespace [err:XQST0033]");
          QP->_namespaceDecls.put((yyvsp[(3) - (5)].str),NULL);
          CONTEXT->setNamespaceBinding((yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].str));
		}
    break;

  case 32:
#line 764 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BoundarySpaceDecl, (yylsp[(1) - (3)]));

		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror((yylsp[(1) - (3)]), "Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(true);
		}
    break;

  case 33:
#line 773 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BoundarySpaceDecl, (yylsp[(1) - (3)]));

		    if(QP->_flags.get(BIT_BOUNDARY_SPECIFIED))
			    yyerror((yylsp[(1) - (3)]), "Prolog contains more than one boundary space declaration [err:XQST0068]");
		    QP->_flags.set(BIT_BOUNDARY_SPECIFIED);
			CONTEXT->setPreserveBoundarySpace(false);
		}
    break;

  case 34:
#line 786 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(DefaultNamespaceDecl, (yylsp[(1) - (5)]));

		    if(QP->_flags.get(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED))
			    yyerror((yylsp[(1) - (5)]), "Prolog contains more than one default element namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
		}
    break;

  case 35:
#line 795 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(DefaultNamespaceDecl, (yylsp[(1) - (5)]));

		    if(QP->_flags.get(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED))
			    yyerror((yylsp[(1) - (5)]), "Prolog contains more than one default function namespace declaration [err:XQST0066]");
		    QP->_flags.set(BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED);
			CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
		}
    break;

  case 36:
#line 808 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OptionDecl, (yylsp[(1) - (4)]));

        // validate the QName
		QualifiedName qName((yyvsp[(3) - (4)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror((yylsp[(3) - (4)]), "The option name must have a prefix [err:XPST0081]");

		try
		{
      LOCATION((yylsp[(3) - (4)]), loc);
			CONTEXT->getUriBoundToPrefix(prefix, &loc);
		}
		catch(NamespaceLookupException&)
		{
			yyerror((yylsp[(3) - (4)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
    break;

  case 37:
#line 832 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FTOptionDecl, (yylsp[(1) - (2)]));
      REJECT_NOT_FULLTEXT(FTOptionDecl, (yylsp[(1) - (2)]));
	}
    break;

  case 38:
#line 841 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderingModeDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
	}
    break;

  case 39:
#line 850 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderingModeDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_ORDERING_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one ordering mode declaration [err:XQST0065]");
		QP->_flags.set(BIT_ORDERING_SPECIFIED);
		CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
	}
    break;

  case 40:
#line 863 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(EmptyOrderDecl, (yylsp[(1) - (5)]));

		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror((yylsp[(1) - (5)]), "Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
	}
    break;

  case 41:
#line 872 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(EmptyOrderDecl, (yylsp[(1) - (5)]));

		if(QP->_flags.get(BIT_EMPTYORDERING_SPECIFIED))
			yyerror((yylsp[(1) - (5)]), "Prolog contains more than one empty ordering mode declaration [err:XQST0069]");
		QP->_flags.set(BIT_EMPTYORDERING_SPECIFIED);
		CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
	}
    break;

  case 42:
#line 885 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(CopyNamespacesDecl, (yylsp[(1) - (5)]));

		if(QP->_flags.get(BIT_COPYNAMESPACE_SPECIFIED))
			yyerror((yylsp[(1) - (5)]), "Prolog contains more than one copy namespace declaration [err:XQST0055]");
		QP->_flags.set(BIT_COPYNAMESPACE_SPECIFIED);
		CONTEXT->setPreserveNamespaces(XPath2Utils::equals((yyvsp[(3) - (5)].str),szTrue));
		CONTEXT->setInheritNamespaces(XPath2Utils::equals((yyvsp[(5) - (5)].str),szTrue));
    }
    break;

  case 43:
#line 899 "../src/parser/XQParser.y"
    {
        (yyval.str) = szTrue;
	}
    break;

  case 44:
#line 903 "../src/parser/XQParser.y"
    {
        (yyval.str) = szFalse;
	}
    break;

  case 45:
#line 911 "../src/parser/XQParser.y"
    {
        (yyval.str) = szTrue;
	}
    break;

  case 46:
#line 915 "../src/parser/XQParser.y"
    {
        (yyval.str) = szFalse;
	}
    break;

  case 47:
#line 923 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(DefaultCollationDecl, (yylsp[(1) - (4)]));

		    if(QP->_flags.get(BIT_COLLATION_SPECIFIED))
			    yyerror((yylsp[(1) - (4)]), "Prolog contains more than one default collation declaration [err:XQST0038]");
		    QP->_flags.set(BIT_COLLATION_SPECIFIED);
            try
            {
              LOCATION((yylsp[(4) - (4)]), loc);
                CONTEXT->getCollation((yyvsp[(4) - (4)].str), &loc);
            }
            catch(ContextException&)
            {
			    yyerror((yylsp[(4) - (4)]), "The specified collation does not exist [err:XQST0038]");
            }
			CONTEXT->setDefaultCollation((yyvsp[(4) - (4)].str));
		}
    break;

  case 48:
#line 945 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(BaseURIDecl, (yylsp[(1) - (3)]));

		    if(QP->_flags.get(BIT_BASEURI_SPECIFIED))
			    yyerror((yylsp[(1) - (3)]), "Prolog contains more than one base URI declaration [err:XQST0032]");
		    QP->_flags.set(BIT_BASEURI_SPECIFIED);
			CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
		}
    break;

  case 49:
#line 958 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[(1) - (4)]));

			if(XPath2Utils::equals((yyvsp[(3) - (4)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS((yyvsp[(4) - (4)].str));
			else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror((yylsp[(1) - (4)]), "A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));
            try {
			  CONTEXT->addSchemaLocation((yyvsp[(4) - (4)].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column);
              throw e;
            }
		}
    break;

  case 50:
#line 976 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[(1) - (5)]));

			if(XPath2Utils::equals((yyvsp[(3) - (5)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				CONTEXT->setDefaultElementAndTypeNS((yyvsp[(4) - (5)].str));
			else if(XPath2Utils::equals((yyvsp[(4) - (5)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString))
				yyerror((yylsp[(1) - (5)]), "A schema that has no target namespace cannot be bound to non-empty prefix [err:XQST0057]");
			else
				CONTEXT->setNamespaceBinding((yyvsp[(3) - (5)].str),(yyvsp[(4) - (5)].str));
            try {
			  CONTEXT->addSchemaLocation((yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column);
              throw e;
            }
		}
    break;

  case 51:
#line 994 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[(1) - (3)]));

            try {
			  CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str),NULL);
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
              throw e;
            }
		}
    break;

  case 52:
#line 1006 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(SchemaImport, (yylsp[(1) - (4)]));

            try {
			  CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].stringList));
            } catch(XQException& e) {
              if(e.getXQueryLine() == 0)
                e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column);
              throw e;
            }
		}
    break;

  case 53:
#line 1021 "../src/parser/XQParser.y"
    {
		(yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
		(yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
	}
    break;

  case 54:
#line 1026 "../src/parser/XQParser.y"
    {
		(yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
		(yyval.stringList) = (yyvsp[(1) - (3)].stringList);
	}
    break;

  case 55:
#line 1035 "../src/parser/XQParser.y"
    {
			(yyval.str) = (yyvsp[(2) - (3)].str);
		}
    break;

  case 56:
#line 1039 "../src/parser/XQParser.y"
    {
			(yyval.str) = (XMLCh*)XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString;
		}
    break;

  case 57:
#line 1047 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[(1) - (7)]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
			yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[(4) - (7)].str),(yyvsp[(6) - (7)].str));
        try {
		  QP->_query->importModule((yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (7)]).first_line, (yylsp[(1) - (7)]).first_column);
          throw e;
        }
	}
    break;

  case 58:
#line 1062 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[(1) - (6)]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(6) - (6)].str))==0)
			yyerror((yylsp[(6) - (6)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
		CONTEXT->setNamespaceBinding((yyvsp[(4) - (6)].str),(yyvsp[(6) - (6)].str));
        try {
		  QP->_query->importModule((yyvsp[(6) - (6)].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column);
          throw e;
        }
	}
    break;

  case 59:
#line 1077 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[(1) - (4)]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
			yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].stringList),CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column);
          throw e;
        }
	}
    break;

  case 60:
#line 1091 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ModuleImport, (yylsp[(1) - (3)]));

		if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::stringLen((yyvsp[(3) - (3)].str))==0)
			yyerror((yylsp[(3) - (3)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");
        try {
		  QP->_query->importModule((yyvsp[(3) - (3)].str),NULL,CONTEXT);
        } catch(XQException& e) {
          if(e.getXQueryLine() == 0)
            e.setXQueryPosition(QP->_query->getFile(), (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column);
          throw e;
        }
	}
    break;

  case 61:
#line 1109 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[(1) - (7)]));

		XQGlobalVariable* var=WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].sequenceType), WRAP((yylsp[(7) - (7)]), (yyvsp[(7) - (7)].astNode)),MEMMGR));
		QP->_query->addVariable(var);
	}
    break;

  case 62:
#line 1116 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[(1) - (6)]));

		XQGlobalVariable* var=WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str),WRAP((yylsp[(1) - (6)]), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR)),
                                                            WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),MEMMGR));
		QP->_query->addVariable(var);
	}
    break;

  case 63:
#line 1124 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[(1) - (6)]));

		XQGlobalVariable* var=WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].sequenceType),NULL,MEMMGR));
		QP->_query->addVariable(var);
	}
    break;

  case 64:
#line 1131 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(VarDecl, (yylsp[(1) - (5)]));

		XQGlobalVariable* var=WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (5)].str),WRAP((yylsp[(1) - (5)]), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR)),
                                                            NULL,MEMMGR));
		QP->_query->addVariable(var);
	}
    break;

  case 65:
#line 1143 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ConstructionDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
	}
    break;

  case 66:
#line 1152 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ConstructionDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_CONSTRUCTION_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one construction mode declaration [err:XQST0067]");
		QP->_flags.set(BIT_CONSTRUCTION_SPECIFIED);
		CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
	}
    break;

  case 67:
#line 1166 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (7)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].funcParams),WRAP((yylsp[(7) - (7)]), (yyvsp[(7) - (7)].astNode)),NULL, (yyvsp[(2) - (7)].boolean), CONTEXT));
		}
    break;

  case 68:
#line 1172 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (6)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),NULL,WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), CONTEXT));
		}
    break;

  case 69:
#line 1178 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (8)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].funcParams),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), CONTEXT));
		}
    break;

  case 70:
#line 1184 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (7)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str),NULL,WRAP((yylsp[(7) - (7)]), (yyvsp[(7) - (7)].astNode)),(yyvsp[(6) - (7)].sequenceType), (yyvsp[(2) - (7)].boolean), CONTEXT));
		}
    break;

  case 71:
#line 1190 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (7)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].funcParams),NULL,NULL, (yyvsp[(2) - (7)].boolean), CONTEXT));
		}
    break;

  case 72:
#line 1196 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (6)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),NULL,NULL,NULL, (yyvsp[(2) - (6)].boolean), CONTEXT));
		}
    break;

  case 73:
#line 1202 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (8)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].funcParams),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), CONTEXT));
		}
    break;

  case 74:
#line 1208 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FunctionDecl, (yylsp[(1) - (7)]));

			(yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str),NULL,NULL,(yyvsp[(6) - (7)].sequenceType), (yyvsp[(2) - (7)].boolean), CONTEXT));
		}
    break;

  case 75:
#line 1216 "../src/parser/XQParser.y"
    {
      (yyval.boolean) = false;
    }
    break;

  case 76:
#line 1220 "../src/parser/XQParser.y"
    {
      REJECT_NOT_UPDATE(FunctionDeclUpdating, (yylsp[(1) - (1)]));
      (yyval.boolean) = true;
    }
    break;

  case 77:
#line 1228 "../src/parser/XQParser.y"
    {
			(yyvsp[(1) - (3)].funcParams)->push_back((yyvsp[(3) - (3)].funcParam));
			(yyval.funcParams) = (yyvsp[(1) - (3)].funcParams);
		}
    break;

  case 78:
#line 1233 "../src/parser/XQParser.y"
    {
			XQUserFunction::VectorOfFunctionParameters* paramList = new (MEMMGR) XQUserFunction::VectorOfFunctionParameters(XQillaAllocator<XQUserFunction::XQFunctionParameter*>(MEMMGR));
			paramList->push_back((yyvsp[(1) - (1)].funcParam));
			(yyval.funcParams) = paramList;
		}
    break;

  case 79:
#line 1243 "../src/parser/XQParser.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].sequenceType),MEMMGR);
		}
    break;

  case 80:
#line 1247 "../src/parser/XQParser.y"
    {
			(yyval.funcParam) = new (MEMMGR) XQUserFunction::XQFunctionParameter((yyvsp[(2) - (2)].str),WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR)) ,MEMMGR);
		}
    break;

  case 81:
#line 1255 "../src/parser/XQParser.y"
    { 
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].astNode)); 
		}
    break;

  case 82:
#line 1263 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
	    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
	    QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
	}
    break;

  case 83:
#line 1276 "../src/parser/XQParser.y"
    {
			ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::PARENTHESIZED)
			{
				((XQParenthesizedExpr *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
				(yyval.astNode) = (yyvsp[(1) - (3)].astNode);
			}
			else
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem((yyvsp[(1) - (3)].astNode));
				dis->addItem((yyvsp[(3) - (3)].astNode));
				(yyval.astNode) = dis;
			}
		}
    break;

  case 84:
#line 1294 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = (yyvsp[(1) - (1)].astNode);
		}
    break;

  case 95:
#line 1317 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[(1) - (5)]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[(1) - (5)].variableBindingList), (yyvsp[(2) - (5)].astNode), (yyvsp[(3) - (5)].sort), WRAP((yylsp[(4) - (5)]), (yyvsp[(5) - (5)].astNode)), MEMMGR));
		}
    break;

  case 96:
#line 1321 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[(1) - (4)]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[(1) - (4)].variableBindingList), (yyvsp[(2) - (4)].astNode), NULL, WRAP((yylsp[(3) - (4)]), (yyvsp[(4) - (4)].astNode)), MEMMGR));
		}
    break;

  case 97:
#line 1325 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[(1) - (4)]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[(1) - (4)].variableBindingList), NULL, (yyvsp[(2) - (4)].sort), WRAP((yylsp[(3) - (4)]), (yyvsp[(4) - (4)].astNode)), MEMMGR));
		}
    break;

  case 98:
#line 1329 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[(1) - (3)]), szFLWOR, new (MEMMGR) XQFLWOR((yyvsp[(1) - (3)].variableBindingList), NULL, NULL, WRAP((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), MEMMGR));
		}
    break;

  case 99:
#line 1336 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = (yyvsp[(1) - (2)].variableBindingList);
			for (VectorOfVariableBinding::iterator it = (yyvsp[(2) - (2)].variableBindingList)->begin(); it != (yyvsp[(2) - (2)].variableBindingList)->end (); ++it) 
				(yyvsp[(1) - (2)].variableBindingList)->push_back(*it);
		}
    break;

  case 103:
#line 1353 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = (yyvsp[(2) - (2)].variableBindingList);
		}
    break;

  case 104:
#line 1360 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[(3) - (3)].variableBinding));
		}
    break;

  case 105:
#line 1364 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[(1) - (1)].variableBinding));
		}
    break;

  case 106:
#line 1372 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].astNode)));
		}
    break;

  case 107:
#line 1376 "../src/parser/XQParser.y"
    {
      // TBD FTScoreVar
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode)));
		}
    break;

  case 108:
#line 1381 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode),(yyvsp[(3) - (5)].str)));
		}
    break;

  case 109:
#line 1385 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].astNode),(yyvsp[(3) - (6)].str)));
		}
    break;

  case 110:
#line 1389 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode),NULL,(yyvsp[(3) - (5)].sequenceType)));
		}
    break;

  case 111:
#line 1393 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].astNode),NULL,(yyvsp[(3) - (6)].sequenceType)));
		}
    break;

  case 112:
#line 1397 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].astNode),(yyvsp[(4) - (6)].str),(yyvsp[(3) - (6)].sequenceType)));
		}
    break;

  case 113:
#line 1401 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (7)].str),(yyvsp[(7) - (7)].astNode),(yyvsp[(4) - (7)].str),(yyvsp[(3) - (7)].sequenceType)));
		}
    break;

  case 114:
#line 1409 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

			(yyval.str) = (yyvsp[(3) - (3)].str); 
		}
    break;

  case 115:
#line 1419 "../src/parser/XQParser.y"
    {
      REJECT_NOT_FULLTEXT(FTScoreVar, (yylsp[(1) - (3)]));

      (yyval.str) = (yyvsp[(3) - (3)].str);
    }
    break;

  case 116:
#line 1431 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(LetClause, (yylsp[(1) - (2)]));

			(yyval.variableBindingList) = (yyvsp[(2) - (2)].variableBindingList);
		}
    break;

  case 117:
#line 1440 "../src/parser/XQParser.y"
    {
			(yyvsp[(1) - (3)].variableBindingList)->push_back((yyvsp[(3) - (3)].variableBinding));
			(yyval.variableBindingList) = (yyvsp[(1) - (3)].variableBindingList);
		}
    break;

  case 118:
#line 1445 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[(1) - (1)].variableBinding));
		}
    break;

  case 119:
#line 1453 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].astNode)));
		}
    break;

  case 120:
#line 1457 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode)));
		}
    break;

  case 121:
#line 1461 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode),NULL,(yyvsp[(3) - (5)].sequenceType)));
		}
    break;

  case 122:
#line 1465 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].astNode),NULL,(yyvsp[(3) - (6)].sequenceType)));
		}
    break;

  case 123:
#line 1469 "../src/parser/XQParser.y"
    {
		}
    break;

  case 124:
#line 1476 "../src/parser/XQParser.y"
    { 
      REJECT_NOT_XQUERY(WhereClause, (yylsp[(1) - (2)]));

			(yyval.astNode) = WRAP((yylsp[(1) - (2)]), (yyvsp[(2) - (2)].astNode));
		}
    break;

  case 125:
#line 1486 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderByClause, (yylsp[(1) - (3)]));

			(yyval.sort)=new (MEMMGR) XQSort(XQSort::unstable,(yyvsp[(3) - (3)].sortSpecList));
		}
    break;

  case 126:
#line 1492 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderByClause, (yylsp[(1) - (4)]));

			(yyval.sort)=new (MEMMGR) XQSort(XQSort::stable,(yyvsp[(4) - (4)].sortSpecList));
		}
    break;

  case 127:
#line 1502 "../src/parser/XQParser.y"
    {
			(yyvsp[(1) - (3)].sortSpecList)->push_back((yyvsp[(3) - (3)].sortSpec));
			(yyval.sortSpecList) = (yyvsp[(1) - (3)].sortSpecList);
		}
    break;

  case 128:
#line 1507 "../src/parser/XQParser.y"
    {
			(yyval.sortSpecList) = new (MEMMGR) XQSort::VectorOfSortSpec(XQillaAllocator<XQSort::SortSpec*>(MEMMGR));
			(yyval.sortSpecList)->push_back((yyvsp[(1) - (1)].sortSpec));
		}
    break;

  case 129:
#line 1517 "../src/parser/XQParser.y"
    {
			(yyval.sortSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSort::SortSpec((yyvsp[(1) - (3)].astNode),(yyvsp[(2) - (3)].sortModifier)+(yyvsp[(3) - (3)].sortModifier),NULL));
		}
    break;

  case 130:
#line 1521 "../src/parser/XQParser.y"
    {
            try
            {
              LOCATION((yylsp[(5) - (5)]), loc);
                CONTEXT->getCollation((yyvsp[(5) - (5)].str), &loc);
            }
            catch(ContextException&)
            {
			    yyerror((yylsp[(5) - (5)]), "The specified collation does not exist [err:XQST0076]");
            }
			(yyval.sortSpec) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQSort::SortSpec((yyvsp[(1) - (5)].astNode),(yyvsp[(2) - (5)].sortModifier)+(yyvsp[(3) - (5)].sortModifier),(yyvsp[(5) - (5)].str)));
		}
    break;

  case 131:
#line 1537 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; }
    break;

  case 132:
#line 1539 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::ascending; }
    break;

  case 133:
#line 1541 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::descending; }
    break;

  case 134:
#line 1546 "../src/parser/XQParser.y"
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

  case 135:
#line 1556 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_greatest; }
    break;

  case 136:
#line 1558 "../src/parser/XQParser.y"
    { (yyval.sortModifier) = XQSort::SortSpec::empty_least; }
    break;

  case 137:
#line 1565 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::some, (yyvsp[(2) - (4)].variableBindingList), WRAP((yylsp[(3) - (4)]), (yyvsp[(4) - (4)].astNode)), MEMMGR);
	}
    break;

  case 138:
#line 1569 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = new (MEMMGR) XQQuantified(XQQuantified::every, (yyvsp[(2) - (4)].variableBindingList), WRAP((yylsp[(3) - (4)]), (yyvsp[(4) - (4)].astNode)), MEMMGR);
	}
    break;

  case 139:
#line 1576 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList)->push_back((yyvsp[(3) - (3)].variableBinding));
		}
    break;

  case 140:
#line 1580 "../src/parser/XQParser.y"
    {
			(yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
			(yyval.variableBindingList)->push_back((yyvsp[(1) - (1)].variableBinding));
		}
    break;

  case 141:
#line 1588 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].astNode)));
		}
    break;

  case 142:
#line 1592 "../src/parser/XQParser.y"
    {
			(yyval.variableBinding) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::forBinding,(yyvsp[(2) - (5)].str),(yyvsp[(5) - (5)].astNode),NULL,(yyvsp[(3) - (5)].sequenceType)));
		}
    break;

  case 143:
#line 1600 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeswitchExpr, (yylsp[(1) - (10)]));

			XQTypeswitch::Clause* defClause=WRAP((yylsp[(6) - (10)]), new (MEMMGR) XQTypeswitch::Clause(NULL,(yyvsp[(10) - (10)].astNode),MEMMGR->getPooledString((yyvsp[(8) - (10)].str))));
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (10)]), (yyvsp[(3) - (10)].astNode)), (yyvsp[(5) - (10)].clauseList), defClause, MEMMGR);
		}
    break;

  case 144:
#line 1607 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeswitchExpr, (yylsp[(1) - (8)]));

			XQTypeswitch::Clause* defClause=WRAP((yylsp[(6) - (8)]), new (MEMMGR) XQTypeswitch::Clause(NULL,(yyvsp[(8) - (8)].astNode),NULL));
			(yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (8)]), (yyvsp[(3) - (8)].astNode)), (yyvsp[(5) - (8)].clauseList), defClause, MEMMGR);
		}
    break;

  case 145:
#line 1617 "../src/parser/XQParser.y"
    {
			(yyvsp[(1) - (2)].clauseList)->push_back((yyvsp[(2) - (2)].clause));
			(yyval.clauseList)=(yyvsp[(1) - (2)].clauseList);
		}
    break;

  case 146:
#line 1622 "../src/parser/XQParser.y"
    {
			(yyval.clauseList)=new (MEMMGR) XQTypeswitch::VectorOfClause(XQillaAllocator<XQTypeswitch::Clause*>(MEMMGR));
			(yyval.clauseList)->push_back((yyvsp[(1) - (1)].clause));
		}
    break;

  case 147:
#line 1631 "../src/parser/XQParser.y"
    { 
			(yyval.clause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Clause((yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode), NULL));
		}
    break;

  case 148:
#line 1635 "../src/parser/XQParser.y"
    { 
			(yyval.clause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Clause((yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR->getPooledString((yyvsp[(3) - (7)].str))));
		}
    break;

  case 149:
#line 1643 "../src/parser/XQParser.y"
    { 
	        (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
		}
    break;

  case 150:
#line 1651 "../src/parser/XQParser.y"
    {
			ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),Or::name))
			{
				((Or*)prevExpr)->addArgument((yyvsp[(3) - (3)].astNode));
				(yyval.astNode) = prevExpr;
			}
			else
				(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 152:
#line 1670 "../src/parser/XQParser.y"
    {
			ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()==ASTNode::OPERATOR && 
			   XPath2Utils::equals(((XQOperator*)prevExpr)->getOperatorName(),And::name))
			{
				((And*)prevExpr)->addArgument((yyvsp[(3) - (3)].astNode));
				(yyval.astNode) = prevExpr;
			}
			else
				(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 154:
#line 1694 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 155:
#line 1698 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 156:
#line 1702 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 157:
#line 1706 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 158:
#line 1710 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 159:
#line 1714 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 160:
#line 1718 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 161:
#line 1722 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 162:
#line 1726 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 163:
#line 1730 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 164:
#line 1734 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 165:
#line 1738 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 166:
#line 1742 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
		}
    break;

  case 167:
#line 1746 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
		}
    break;

  case 168:
#line 1750 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
		}
    break;

  case 170:
#line 1759 "../src/parser/XQParser.y"
    {
        REJECT_NOT_FULLTEXT(FTContainsExpr, (yylsp[(1) - (3)]));

        (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
      }
    break;

  case 171:
#line 1765 "../src/parser/XQParser.y"
    {
        REJECT_NOT_FULLTEXT(FTContainsExpr, (yylsp[(1) - (4)]));

        (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
      }
    break;

  case 173:
#line 1776 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 175:
#line 1785 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 176:
#line 1789 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 178:
#line 1798 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 179:
#line 1802 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 180:
#line 1806 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 181:
#line 1810 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 183:
#line 1819 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 184:
#line 1823 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 186:
#line 1832 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 187:
#line 1836 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
		}
    break;

  case 189:
#line 1845 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
	}
    break;

  case 191:
#line 1854 "../src/parser/XQParser.y"
    {
        XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR);
        treatAs->setIsTreatAsStatement(true);
		(yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
	}
    break;

  case 193:
#line 1865 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
	}
    break;

  case 195:
#line 1874 "../src/parser/XQParser.y"
    {
		(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
	}
    break;

  case 197:
#line 1883 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back((yyvsp[(2) - (2)].astNode));
			(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
		}
    break;

  case 198:
#line 1889 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			args.push_back((yyvsp[(2) - (2)].astNode));
			(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
		}
    break;

  case 203:
#line 1910 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 204:
#line 1914 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
		}
    break;

  case 205:
#line 1918 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
		}
    break;

  case 206:
#line 1926 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

		// we don't support any pragma
		yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
	}
    break;

  case 207:
#line 1933 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

		// we don't support any pragma
		(yyval.astNode) = (yyvsp[(3) - (4)].astNode);
	}
    break;

  case 210:
#line 1950 "../src/parser/XQParser.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[(2) - (4)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror((yylsp[(2) - (4)]), "The pragma name must have a prefix [err:XPST0081]");

		try
		{
			LOCATION((yylsp[(2) - (4)]), loc);
			CONTEXT->getUriBoundToPrefix(prefix, &loc);
		}
		catch(NamespaceLookupException&)
		{
			yyerror((yylsp[(2) - (4)]), "The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
    break;

  case 211:
#line 1968 "../src/parser/XQParser.y"
    {
        // validate the QName
		QualifiedName qName((yyvsp[(2) - (3)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix==NULL || *prefix==0)
			yyerror((yylsp[(2) - (3)]), "The pragma name must have a prefix [err:XPST0081]");

		try
		{
			LOCATION((yylsp[(2) - (3)]), loc);
			CONTEXT->getUriBoundToPrefix(prefix, &loc);
		}
		catch(NamespaceLookupException&)
		{
			yyerror((yylsp[(2) - (3)]), "The pragma name is using an undefined namespace prefix [err:XPST0081]");
		}
      }
    break;

  case 212:
#line 1990 "../src/parser/XQParser.y"
    {
			XQNav *nav = new (MEMMGR) XQNav(MEMMGR);

      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

      SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
        SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

      XQTreatAs *treat = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
      nav->addStepFront(treat);

			(yyval.astNode) = nav;
		}
    break;

  case 213:
#line 2005 "../src/parser/XQParser.y"
    {
			XQNav* nav=getNavigation((yyvsp[(2) - (2)].astNode),MEMMGR);

      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

      SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
        SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

      XQTreatAs *treat = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
      nav->addStepFront(treat);

			(yyval.astNode) = nav;
		}
    break;

  case 214:
#line 2020 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[(2) - (2)].astNode),MEMMGR);

      NodeTest *step = new (MEMMGR) NodeTest();
      step->setTypeWildcard();
      step->setNameWildcard();
      step->setNamespaceWildcard();
      nav->addStepFront(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));

      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

      SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
        SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

      XQTreatAs *treat = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
      nav->addStepFront(treat);

			(yyval.astNode) = nav;
		}
    break;

  case 216:
#line 2046 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[(1) - (3)].astNode),MEMMGR);
			nav->addStep((yyvsp[(3) - (3)].astNode));
			(yyval.astNode) = nav;
		}
    break;

  case 217:
#line 2052 "../src/parser/XQParser.y"
    {
			XQNav *nav = getNavigation((yyvsp[(1) - (3)].astNode),MEMMGR);

            NodeTest *step = new (MEMMGR) NodeTest();
            step->setTypeWildcard();
            step->setNameWildcard();
            step->setNamespaceWildcard();
            nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));
			nav->addStep((yyvsp[(3) - (3)].astNode));

			(yyval.astNode) = nav;
		}
    break;

  case 221:
#line 2076 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
		}
    break;

  case 222:
#line 2080 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
		}
    break;

  case 223:
#line 2089 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
        switch((yyvsp[(1) - (2)].axis)) {
        case XQStep::NAMESPACE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string); break;
        default: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string); break;
        }
      }

			(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis),(yyvsp[(2) - (2)].nodeTest),MEMMGR));
		}
    break;

  case 225:
#line 2112 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::CHILD;
		}
    break;

  case 226:
#line 2116 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::DESCENDANT;
		}
    break;

  case 227:
#line 2120 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ATTRIBUTE;
		}
    break;

  case 228:
#line 2124 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::SELF;
		}
    break;

  case 229:
#line 2128 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
		}
    break;

  case 230:
#line 2132 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::FOLLOWING_SIBLING;
		}
    break;

  case 231:
#line 2136 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::FOLLOWING;
		}
    break;

  case 232:
#line 2140 "../src/parser/XQParser.y"
    {
        REJECT_NOT_XPATH(AxisNamespace, (yylsp[(1) - (1)]));
      (yyval.axis) = XQStep::NAMESPACE;
        }
    break;

  case 233:
#line 2149 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
        (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
      }

      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
		}
    break;

  case 234:
#line 2157 "../src/parser/XQParser.y"
    {
      XQStep::Axis axis = XQStep::CHILD;
      SequenceType::ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
      if(itemtype != 0 &&
         itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
        axis = XQStep::ATTRIBUTE;
      }
      else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
        (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
		}
    break;

  case 235:
#line 2175 "../src/parser/XQParser.y"
    {
      if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
        (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
      }

      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
		}
    break;

  case 237:
#line 2192 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PARENT;
		}
    break;

  case 238:
#line 2196 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ANCESTOR;
		}
    break;

  case 239:
#line 2200 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PRECEDING_SIBLING;
		}
    break;

  case 240:
#line 2204 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::PRECEDING;
		}
    break;

  case 241:
#line 2208 "../src/parser/XQParser.y"
    {
      (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
		}
    break;

  case 242:
#line 2216 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			step->setTypeWildcard();
			(yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
		}
    break;

  case 245:
#line 2234 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
      step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
			step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
			(yyval.nodeTest) = step;
		}
    break;

  case 247:
#line 2246 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNameWildcard();
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 248:
#line 2253 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
      step->setNodePrefix((yyvsp[(1) - (1)].str));
			step->setNameWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 249:
#line 2260 "../src/parser/XQParser.y"
    {
			NodeTest *step = new (MEMMGR) NodeTest();
			step->setNodeName((yyvsp[(1) - (1)].str));
			step->setNamespaceWildcard();
			(yyval.nodeTest) = step;
		}
    break;

  case 250:
#line 2271 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
		}
    break;

  case 251:
#line 2280 "../src/parser/XQParser.y"
    {
	        (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
		}
    break;

  case 252:
#line 2284 "../src/parser/XQParser.y"
    {
      XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
			(yyvsp[(1) - (4)].predicates)->push_back(pred);
			(yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
		}
    break;

  case 266:
#line 2320 "../src/parser/XQParser.y"
    {
		    int nColon=XERCES_CPP_NAMESPACE_QUALIFIER XMLString::indexOf((yyvsp[(2) - (2)].str),':');
			if(nColon!=-1)
  				(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str),MEMMGR));
			else
				(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable(XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgZeroLenString, (yyvsp[(2) - (2)].str),MEMMGR));
		}
    break;

  case 267:
#line 2332 "../src/parser/XQParser.y"
    { 
			ASTNode* prevExpr=(yyvsp[(2) - (3)].astNode);
			if((unsigned int)prevExpr->getType()==ASTNode::DEBUG_HOOK)
				prevExpr=((XQDebugHook*)prevExpr)->m_impl;
			if(prevExpr->getType()!=ASTNode::PARENTHESIZED)
			{
				XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
				dis->addItem((yyvsp[(2) - (3)].astNode));
				(yyval.astNode) = WRAP((yylsp[(2) - (3)]), dis);
			}
			else
				(yyval.astNode) = WRAP((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].astNode));
		}
    break;

  case 268:
#line 2346 "../src/parser/XQParser.y"
    { 
			(yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
		}
    break;

  case 269:
#line 2354 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
		}
    break;

  case 270:
#line 2362 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
		}
    break;

  case 271:
#line 2372 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
		}
    break;

  case 272:
#line 2382 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = FNWRAP((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[(1) - (2)].str), MEMMGR), args, MEMMGR));
		}
    break;

  case 273:
#line 2387 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = FNWRAP((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].str), new (MEMMGR) XQFunctionCall(new (MEMMGR) QualifiedName((yyvsp[(1) - (3)].str), MEMMGR), *(yyvsp[(2) - (3)].itemList),MEMMGR));
		}
    break;

  case 274:
#line 2394 "../src/parser/XQParser.y"
    {
			(yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
			(yyval.itemList) = (yyvsp[(1) - (3)].itemList);
		}
    break;

  case 275:
#line 2399 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
		}
    break;

  case 276:
#line 2408 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
    }
    break;

  case 277:
#line 2412 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
    }
    break;

  case 281:
#line 2429 "../src/parser/XQParser.y"
    { 
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor(
								WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (4)].str), /*isAttr*/false, MEMMGR)),
								(yyvsp[(3) - (4)].itemList), content, MEMMGR));
		}
    break;

  case 282:
#line 2436 "../src/parser/XQParser.y"
    { 
			if(!XPath2Utils::equals((yyvsp[(2) - (8)].str),(yyvsp[(7) - (8)].str)))
				yyerror((yylsp[(7) - (8)]), "Close tag does not match open tag");
			// if we are requested to strip whitespace-only nodes, check if the last element content should be removed
			VectorOfASTNodes* elemContent=(yyvsp[(5) - (8)].itemList);
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
			(yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQElementConstructor(
							  WRAP((yylsp[(2) - (8)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (8)].str), /*isAttr*/false, MEMMGR)),
							  (yyvsp[(3) - (8)].itemList), elemContent,MEMMGR));
		}
    break;

  case 283:
#line 2472 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 284:
#line 2476 "../src/parser/XQParser.y"
    {
            (yyval.itemList) = (yyvsp[(1) - (4)].itemList);
            bool bInsertAtFront=false;
            if(XPath2Utils::equals((yyvsp[(2) - (4)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSString) ||
               XERCES_CPP_NAMESPACE_QUALIFIER XMLString::startsWith((yyvsp[(2) - (4)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLNSColonString))
            {
                // check that the value of an xmlns attribute is a stirng literal
                if((yyvsp[(4) - (4)].itemList)->size()>1 || ((yyvsp[(4) - (4)].itemList)->size()==1 && (yyvsp[(4) - (4)].itemList)->front()->getType()!=ASTNode::LITERAL))
                    yyerror((yylsp[(4) - (4)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
                bInsertAtFront=true;
            }
            if((yyvsp[(4) - (4)].itemList)->size()>0 && (yyvsp[(4) - (4)].itemList)->back()==0)
                (yyvsp[(4) - (4)].itemList)->pop_back();
            ASTNode* attrItem=WRAP((yylsp[(2) - (4)]), new (MEMMGR)
              XQAttributeConstructor(WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (4)].str), /*isAttr*/true, MEMMGR)), (yyvsp[(4) - (4)].itemList),MEMMGR));
            if(bInsertAtFront)
                (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
            else
                (yyval.itemList)->push_back(attrItem);
        }
    break;

  case 285:
#line 2502 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = (yyvsp[(2) - (3)].itemList);
		}
    break;

  case 286:
#line 2506 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = (yyvsp[(2) - (3)].itemList);
		}
    break;

  case 287:
#line 2515 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 288:
#line 2519 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
            if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
			    (yyval.itemList)->pop_back();
			(yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
			(yyval.itemList)->push_back(0);
		}
    break;

  case 289:
#line 2527 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szQuote);
		}
    break;

  case 290:
#line 2532 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[(2) - (2)].str));
		}
    break;

  case 291:
#line 2537 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[(2) - (2)].str));
		}
    break;

  case 292:
#line 2547 "../src/parser/XQParser.y"
    { 
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
		}
    break;

  case 293:
#line 2551 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
            if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
			    (yyval.itemList)->pop_back();
			(yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
			(yyval.itemList)->push_back(0);
		}
    break;

  case 294:
#line 2559 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),szApos);
		}
    break;

  case 295:
#line 2564 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[(2) - (2)].str));
		}
    break;

  case 296:
#line 2569 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			merge_strings(CONTEXT,(yyval.itemList),(yyvsp[(2) - (2)].str));
		}
    break;

  case 297:
#line 2584 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
		}
    break;

  case 298:
#line 2588 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			// if the last token was a string literal made of whitespace and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if((yyval.itemList)->size()>0)
			{
				if((yyval.itemList)->back()==0)
					(yyval.itemList)->pop_back();
				else if(!CONTEXT->getPreserveBoundarySpace() && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && *lastString!=0 && isAllSpaces(lastString))
						(yyval.itemList)->pop_back();
				}
			}
			(yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
		}
    break;

  case 299:
#line 2609 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back() && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
			{
				XQLiteral *lit = (XQLiteral*)(yyval.itemList)->back();
				const XMLCh* string=lit->getItemConstructor()->createItem(CONTEXT)->asString(CONTEXT);
				string=XPath2Utils::concatStrings(string,(yyvsp[(2) - (2)].str),MEMMGR);

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
						(yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

				(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
			}
		}
    break;

  case 300:
#line 2638 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
				(yyval.itemList)->pop_back();

			// if the last token was a string literal made of whitespace and
			// we are adding a node constructor, and the context tells us to strip whitespace, remove it
			if(!CONTEXT->getPreserveBoundarySpace() && (yyval.itemList)->size()>0 && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
			{
				const XMLCh* lastString=NULL;
				Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
				if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
					lastString=litVal->asString(CONTEXT);
				if(lastString!=NULL && *lastString!=0 && isAllSpaces(lastString))
					(yyval.itemList)->pop_back();
			}
			(yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
		}
    break;

  case 301:
#line 2657 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			// if the last token was a string literal made of whitespace and
			// we are adding an enclosed expression, and the context tells us to strip whitespace, remove it
			if((yyval.itemList)->size()>0)
			{
				if((yyval.itemList)->back()==0)
					(yyval.itemList)->pop_back();
				else if(!CONTEXT->getPreserveBoundarySpace() && (yyval.itemList)->back()->getType()==ASTNode::LITERAL)
				{
					const XMLCh* lastString=NULL;
					Item::Ptr litVal = ((XQLiteral*)(yyval.itemList)->back())->getItemConstructor()->createItem(CONTEXT);
					if(((AnyAtomicType*)(const Item*)litVal)->getPrimitiveTypeIndex()==AnyAtomicType::STRING)
						lastString=litVal->asString(CONTEXT);
					if(lastString!=NULL && *lastString!=0 && isAllSpaces(lastString))
						(yyval.itemList)->pop_back();
				}
			}
			(yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
			(yyval.itemList)->push_back(0);
		}
    break;

  case 302:
#line 2679 "../src/parser/XQParser.y"
    {
			(yyval.itemList) = (yyvsp[(1) - (2)].itemList);
			if((yyval.itemList)->size()>0 && (yyval.itemList)->back()==0)
				(yyval.itemList)->pop_back();

    		AnyAtomicTypeConstructor *ic = new (MEMMGR)
      			AnyAtomicTypeConstructor(
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
							XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
					(yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

			(yyval.itemList)->push_back(new (MEMMGR) XQLiteral(ic, MEMMGR));
		}
    break;

  case 305:
#line 2700 "../src/parser/XQParser.y"
    {
		(yyval.str) = szCurlyOpen;
	}
    break;

  case 306:
#line 2704 "../src/parser/XQParser.y"
    {
		(yyval.str) = szCurlyClose;
	}
    break;

  case 307:
#line 2713 "../src/parser/XQParser.y"
    {
			ASTNode *value = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
		}
    break;

  case 308:
#line 2728 "../src/parser/XQParser.y"
    {
			if(XERCES_CPP_NAMESPACE_QUALIFIER XMLString::compareIString((yyvsp[(2) - (3)].str), XERCES_CPP_NAMESPACE_QUALIFIER XMLUni::fgXMLString)==0)
			  yyerror((yylsp[(2) - (3)]), "The target for the processing instruction must not be 'XML'");
			ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(3) - (3)].str), AnyAtomicType::STRING),
										MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(
								      WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(2) - (3)].str), AnyAtomicType::STRING),
										MEMMGR)), 
									  value, MEMMGR));
		}
    break;

  case 309:
#line 2752 "../src/parser/XQParser.y"
    {
			ASTNode *value = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
										MEMMGR);
			(yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(/*isCDATA*/true, value, MEMMGR));
		}
    break;

  case 316:
#line 2781 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor(WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)),MEMMGR));
		}
    break;

  case 317:
#line 2789 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)));
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor(
								  WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (4)].str), /*isAttr*/false, MEMMGR)),
								  empty, content,MEMMGR));
		}
    break;

  case 318:
#line 2798 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor(
								  WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (3)].str), /*isAttr*/false, MEMMGR)),
								  empty, empty,MEMMGR));
		}
    break;

  case 319:
#line 2805 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[(6) - (7)]), (yyvsp[(6) - (7)].astNode)));
			(yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQElementConstructor(
								  WRAP((yylsp[(3) - (7)]), (yyvsp[(3) - (7)].astNode)), 
								  empty, content, MEMMGR));
		}
    break;

  case 320:
#line 2814 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQElementConstructor(
								  WRAP((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].astNode)), 
								  empty, empty, MEMMGR));
		}
    break;

  case 322:
#line 2830 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)));
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQAttributeConstructor(
								      WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (4)].str), /*isAttr*/false, MEMMGR)),
									  content,MEMMGR));
		}
    break;

  case 323:
#line 2838 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor(
								      WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (3)].str), /*isAttr*/false, MEMMGR)),
									  empty,MEMMGR));
		}
    break;

  case 324:
#line 2845 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* content=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			content->push_back(WRAP((yylsp[(6) - (7)]), (yyvsp[(6) - (7)].astNode)));
			(yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQAttributeConstructor(
									  WRAP((yylsp[(3) - (7)]), (yyvsp[(3) - (7)].astNode)), 
									  content, MEMMGR));
		}
    break;

  case 325:
#line 2853 "../src/parser/XQParser.y"
    {
			VectorOfASTNodes* empty=new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
			(yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQAttributeConstructor(
									  WRAP((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].astNode)), 
									  empty, MEMMGR));
		}
    break;

  case 326:
#line 2864 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor(/*isCDATA*/false, WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)), MEMMGR));
		}
    break;

  case 327:
#line 2872 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor(WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)), MEMMGR));
		}
    break;

  case 328:
#line 2880 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQPIConstructor(
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(1) - (4)].str), AnyAtomicType::STRING),
										MEMMGR), 
									  WRAP((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].astNode)), MEMMGR));
	  }
    break;

  case 329:
#line 2891 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(
								      new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(1) - (3)].str), AnyAtomicType::STRING),
										MEMMGR), 
									  new (MEMMGR) XQSequence(MEMMGR), MEMMGR));
	  }
    break;

  case 330:
#line 2902 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQPIConstructor(
									  WRAP((yylsp[(3) - (7)]), (yyvsp[(3) - (7)].astNode)), 
									  WRAP((yylsp[(6) - (7)]), (yyvsp[(6) - (7)].astNode)), MEMMGR));
	  }
    break;

  case 331:
#line 2908 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQPIConstructor(
									  WRAP((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].astNode)), 
									  new (MEMMGR) XQSequence(MEMMGR), MEMMGR));
	  }
    break;

  case 332:
#line 2918 "../src/parser/XQParser.y"
    {
			SequenceType* seq=WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[(1) - (2)].qName)));
			seq->setOccurrence(SequenceType::QUESTION_MARK);
			(yyval.sequenceType) = seq;
		}
    break;

  case 333:
#line 2925 "../src/parser/XQParser.y"
    {
			SequenceType* seq=WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType());
			seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE,NULL,(yyvsp[(1) - (1)].qName)));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		}
    break;

  case 334:
#line 2936 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

			(yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
		}
    break;

  case 335:
#line 2946 "../src/parser/XQParser.y"
    {
			SequenceType* seq=WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
			seq->setItemType((yyvsp[(1) - (2)].itemType));
			seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
			(yyval.sequenceType) = seq;
		}
    break;

  case 336:
#line 2953 "../src/parser/XQParser.y"
    {
			SequenceType* seq=WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType());
			seq->setItemType((yyvsp[(1) - (1)].itemType));
			seq->setOccurrence(SequenceType::EXACTLY_ONE);
			(yyval.sequenceType) = seq;
		}
    break;

  case 337:
#line 2960 "../src/parser/XQParser.y"
    { 
			(yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
		}
    break;

  case 338:
#line 2969 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 339:
#line 2971 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 340:
#line 2973 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 341:
#line 2979 "../src/parser/XQParser.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
	}
    break;

  case 342:
#line 2983 "../src/parser/XQParser.y"
    {
		(yyval.itemType) = (yyvsp[(1) - (1)].nodeTest)->getItemType();
		(yyvsp[(1) - (1)].nodeTest)->setItemType(NULL);
	}
    break;

  case 343:
#line 2988 "../src/parser/XQParser.y"
    {
		(yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
	}
    break;

  case 344:
#line 2996 "../src/parser/XQParser.y"
    {
		(yyval.qName) = (yyvsp[(1) - (1)].qName);
	}
    break;

  case 354:
#line 3025 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	}
    break;

  case 355:
#line 3035 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 356:
#line 3041 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[(2) - (3)].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 357:
#line 3050 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		SequenceType::ItemType* elemTest=(yyvsp[(2) - (3)].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
		elemTest->setName(NULL);
		elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 358:
#line 3063 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	}
    break;

  case 359:
#line 3073 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 360:
#line 3083 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	}
    break;

  case 361:
#line 3089 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(2) - (3)].str))));
		(yyval.nodeTest) = step;
	}
    break;

  case 362:
#line 3095 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(2) - (3)].str))));
		(yyval.nodeTest) = step;
	}
    break;

  case 363:
#line 3105 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	}
    break;

  case 364:
#line 3111 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(2) - (3)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 365:
#line 3117 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(2) - (5)].qName),(yyvsp[(4) - (5)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 367:
#line 3128 "../src/parser/XQParser.y"
    {
		(yyval.qName) = NULL;
	}
    break;

  case 368:
#line 3136 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(2) - (3)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 370:
#line 3151 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 371:
#line 3157 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(2) - (3)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 372:
#line 3163 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(2) - (5)].qName),(yyvsp[(4) - (5)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 373:
#line 3169 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(2) - (6)].qName),(yyvsp[(4) - (6)].qName));
		pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	}
    break;

  case 375:
#line 3182 "../src/parser/XQParser.y"
    {
		(yyval.qName) = NULL;
	}
    break;

  case 376:
#line 3190 "../src/parser/XQParser.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(2) - (3)].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 381:
#line 3220 "../src/parser/XQParser.y"
    {
		// the string must be whitespace-normalized
		XERCES_CPP_NAMESPACE_QUALIFIER XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
        if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
          yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
		(yyval.str) = (yyvsp[(1) - (1)].str);
	}
    break;

  case 382:
#line 3232 "../src/parser/XQParser.y"
    {
    // TBD FTSelectionOptions and weight
    (yyval.ftselection) = (yyvsp[(1) - (4)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (4)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (4)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete (yyvsp[(2) - (4)].ftoptionlist);
	}
    break;

  case 383:
#line 3244 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (2)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (2)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete (yyvsp[(2) - (2)].ftoptionlist);
	}
    break;

  case 384:
#line 3258 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
	}
    break;

  case 385:
#line 3262 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
	}
    break;

  case 386:
#line 3266 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
	}
    break;

  case 387:
#line 3276 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::OR) {
      FTOr *op = (FTOr*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTOr((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
	}
    break;

  case 389:
#line 3292 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].ftselection)->getType() == FTSelection::AND) {
      FTAnd *op = (FTAnd*)(yyvsp[(1) - (3)].ftselection);
      op->addArg((yyvsp[(3) - (3)].ftselection));
      (yyval.ftselection) = op;
    }
    else {
      (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTAnd((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
    }
	}
    break;

  case 391:
#line 3308 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (3)].ftselection), (yyvsp[(3) - (3)].ftselection), MEMMGR));
	}
    break;

  case 393:
#line 3317 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
	}
    break;

  case 395:
#line 3326 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
	}
    break;

  case 397:
#line 3335 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
	}
    break;

  case 398:
#line 3339 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
	}
    break;

  case 399:
#line 3343 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
	}
    break;

  case 400:
#line 3347 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
	}
    break;

  case 401:
#line 3351 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
	}
    break;

  case 402:
#line 3365 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
	}
    break;

  case 403:
#line 3369 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
	}
    break;

  case 404:
#line 3373 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
	}
    break;

  case 405:
#line 3377 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
	}
    break;

  case 406:
#line 3382 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
	}
    break;

  case 407:
#line 3386 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
	}
    break;

  case 408:
#line 3390 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
	}
    break;

  case 409:
#line 3394 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
	}
    break;

  case 410:
#line 3398 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
	}
    break;

  case 418:
#line 3426 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
	}
    break;

  case 419:
#line 3430 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
	}
    break;

  case 420:
#line 3434 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
	}
    break;

  case 421:
#line 3438 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
	}
    break;

  case 422:
#line 3449 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
	}
    break;

  case 423:
#line 3453 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
	}
    break;

  case 424:
#line 3457 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
	}
    break;

  case 425:
#line 3461 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
	}
    break;

  case 426:
#line 3469 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
	}
    break;

  case 427:
#line 3473 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
	}
    break;

  case 428:
#line 3483 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
	}
    break;

  case 429:
#line 3487 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
	}
    break;

  case 430:
#line 3491 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
	}
    break;

  case 431:
#line 3495 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
	}
    break;

  case 432:
#line 3499 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
	}
    break;

  case 433:
#line 3506 "../src/parser/XQParser.y"
    {
	}
    break;

  case 434:
#line 3509 "../src/parser/XQParser.y"
    {
	}
    break;

  case 435:
#line 3516 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
	}
    break;

  case 436:
#line 3520 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
	}
    break;

  case 437:
#line 3524 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
	}
    break;

  case 438:
#line 3528 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
	}
    break;

  case 439:
#line 3538 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
	}
    break;

  case 440:
#line 3542 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
	}
    break;

  case 441:
#line 3546 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
	}
    break;

  case 442:
#line 3553 "../src/parser/XQParser.y"
    {
	}
    break;

  case 443:
#line 3556 "../src/parser/XQParser.y"
    {
	}
    break;

  case 444:
#line 3564 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
	}
    break;

  case 445:
#line 3568 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
	}
    break;

  case 446:
#line 3575 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
	}
    break;

  case 447:
#line 3579 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
	}
    break;

  case 448:
#line 3587 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
	}
    break;

  case 449:
#line 3591 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
	}
    break;

  case 450:
#line 3599 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
	}
    break;

  case 451:
#line 3607 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
	}
    break;

  case 452:
#line 3611 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
	}
    break;

  case 453:
#line 3619 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
	}
    break;

  case 454:
#line 3623 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
	}
    break;

  case 455:
#line 3627 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
	}
    break;

  case 456:
#line 3631 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
	}
    break;

  case 457:
#line 3635 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
	}
    break;

  case 458:
#line 3639 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
	}
    break;

  case 459:
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 460:
#line 3656 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 461:
#line 3662 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
	}
    break;

  case 462:
#line 3668 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
	}
    break;

  case 463:
#line 3678 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
	}
    break;

  case 464:
#line 3682 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
	}
    break;

  case 465:
#line 3686 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
	}
    break;

  case 466:
#line 3694 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
	}
    break;

  case 467:
#line 3698 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
	}
    break;

  case 468:
#line 3706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
	}
    break;

  case 469:
#line 3714 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(RevalidationDecl, (yylsp[(1) - (3)]));
    REJECT_NOT_UPDATE(RevalidationDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_REVALIDATION_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one revalidation declaration [err:TBD]");
		QP->_flags.set(BIT_REVALIDATION_SPECIFIED);
		CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 470:
#line 3724 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(RevalidationDecl, (yylsp[(1) - (3)]));
    REJECT_NOT_UPDATE(RevalidationDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_REVALIDATION_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one revalidation declaration [err:TBD]");
		QP->_flags.set(BIT_REVALIDATION_SPECIFIED);
		CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 471:
#line 3734 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(RevalidationDecl, (yylsp[(1) - (3)]));
    REJECT_NOT_UPDATE(RevalidationDecl, (yylsp[(1) - (3)]));

		if(QP->_flags.get(BIT_REVALIDATION_SPECIFIED))
			yyerror((yylsp[(1) - (3)]), "Prolog contains more than one revalidation declaration [err:TBD]");
		QP->_flags.set(BIT_REVALIDATION_SPECIFIED);
		CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 472:
#line 3751 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(InsertExpr, (yylsp[(1) - (7)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UInsertAsFirst((yyvsp[(3) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 473:
#line 3756 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(InsertExpr, (yylsp[(1) - (7)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UInsertAsLast((yyvsp[(3) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 474:
#line 3761 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(InsertExpr, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UInsertInto((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 475:
#line 3766 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(InsertExpr, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UInsertAfter((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 476:
#line 3771 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(InsertExpr, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UInsertBefore((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 477:
#line 3781 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(DeleteExpr, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) UDelete((yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 478:
#line 3791 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(ReplaceExpr, (yylsp[(1) - (6)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UReplaceValueOf((yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 479:
#line 3796 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(ReplaceExpr, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 480:
#line 3807 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(RenameExpr, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 481:
#line 3817 "../src/parser/XQParser.y"
    {
    REJECT_NOT_UPDATE(TransformExpr, (yylsp[(1) - (6)]));
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].variableBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 482:
#line 3825 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].variableBindingList)->push_back((yyvsp[(3) - (3)].variableBinding));
    (yyval.variableBindingList) = (yyvsp[(1) - (3)].variableBindingList);
  }
    break;

  case 483:
#line 3830 "../src/parser/XQParser.y"
    {
    (yyval.variableBindingList) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>(MEMMGR));
    (yyval.variableBindingList)->push_back((yyvsp[(1) - (1)].variableBinding));
  }
    break;

  case 484:
#line 3838 "../src/parser/XQParser.y"
    {
    (yyval.variableBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQVariableBinding(MEMMGR, XQVariableBinding::letBinding,(yyvsp[(2) - (4)].str),(yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 485:
#line 3847 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
										(yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		}
    break;

  case 486:
#line 3860 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
										(yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
										MEMMGR);
		}
    break;

  case 487:
#line 3873 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
										(yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
										MEMMGR);
		}
    break;

  case 488:
#line 3887 "../src/parser/XQParser.y"
    {
			(yyval.astNode) = new (MEMMGR) XQLiteral(
                    new (MEMMGR) AnyAtomicTypeConstructor(
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
										XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
										(yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
										MEMMGR);
		}
    break;

  case 489:
#line 3900 "../src/parser/XQParser.y"
    {
			(yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
		}
    break;


/* Line 1267 of yacc.c.  */
#line 6991 "../src/parser/XQParser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
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
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
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
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
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
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
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
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3904 "../src/parser/XQParser.y"


}	// namespace XQParser



