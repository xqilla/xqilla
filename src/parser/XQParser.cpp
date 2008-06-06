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
     _LANG_XPATH2_ = 258,
     _LANG_XQUERY_ = 259,
     _LANG_XQUERY_FULLTEXT_ = 260,
     _LANG_XQUERY_UPDATE_ = 261,
     _LANG_XQUERY_FULLTEXT_UPDATE_ = 262,
     _LANG_XSLT2_ = 263,
     _DOLLAR_ = 264,
     _COLON_EQUALS_ = 265,
     _ASTERISK_ = 266,
     _BAR_ = 267,
     _BANG_EQUALS_ = 268,
     _LESS_THAN_EQUALS_ = 269,
     _GREATER_THAN_ = 270,
     _GREATER_THAN_EQUALS_ = 271,
     _LESS_THAN_LESS_THAN_ = 272,
     _GREATER_THAN_GREATER_THAN_ = 273,
     _COLON_COLON_ = 274,
     _AT_SIGN_ = 275,
     _LSQUARE_ = 276,
     _RSQUARE_ = 277,
     _QUESTION_MARK_ = 278,
     _BAR_BAR_ = 279,
     _AMP_AMP_ = 280,
     _LESS_THAN_OP_OR_TAG_ = 281,
     _START_TAG_CLOSE_ = 282,
     _END_TAG_CLOSE_ = 283,
     _PI_START_ = 284,
     _XML_COMMENT_START_ = 285,
     _XML_COMMENT_END_ = 286,
     _SLASH_SLASH_ = 287,
     _END_TAG_OPEN_ = 288,
     _PRAGMA_OPEN_ = 289,
     _COMMA_ = 290,
     _PLUS_ = 291,
     _MINUS_ = 292,
     _SLASH_ = 293,
     _EQUALS_ = 294,
     _DOT_ = 295,
     _DOT_DOT_ = 296,
     _LPAR_ = 297,
     _RPAR_ = 298,
     _EMPTY_TAG_CLOSE_ = 299,
     _VALUE_INDICATOR_ = 300,
     _OPEN_QUOT_ = 301,
     _CLOSE_QUOT_ = 302,
     _OPEN_APOS_ = 303,
     _CLOSE_APOS_ = 304,
     _LBRACE_ = 305,
     _LBRACE_EXPR_ENCLOSURE_ = 306,
     _RBRACE_ = 307,
     _SEMICOLON_ = 308,
     _BANG_ = 309,
     _HASH_ = 310,
     _ARROW_ = 311,
     _INTEGER_LITERAL_ = 312,
     _DECIMAL_LITERAL_ = 313,
     _DOUBLE_LITERAL_ = 314,
     _ATTRIBUTE_ = 315,
     _COMMENT_ = 316,
     _DOCUMENT_NODE_ = 317,
     _NODE_ = 318,
     _PROCESSING_INSTRUCTION_ = 319,
     _SCHEMA_ATTRIBUTE_ = 320,
     _SCHEMA_ELEMENT_ = 321,
     _TEXT_ = 322,
     _EMPTY_SEQUENCE_ = 323,
     _BOUNDARY_SPACE_ = 324,
     _FT_OPTION_ = 325,
     _BASE_URI_ = 326,
     _LAX_ = 327,
     _STRICT_ = 328,
     _IDIV_ = 329,
     _CHILD_ = 330,
     _DESCENDANT_ = 331,
     _SELF_ = 332,
     _DESCENDANT_OR_SELF_ = 333,
     _FOLLOWING_SIBLING_ = 334,
     _FOLLOWING_ = 335,
     _PARENT_ = 336,
     _ANCESTOR_ = 337,
     _PRECEDING_SIBLING_ = 338,
     _PRECEDING_ = 339,
     _ANCESTOR_OR_SELF_ = 340,
     _DOCUMENT_ = 341,
     _NOT_ = 342,
     _SENSITIVE_ = 343,
     _INSENSITIVE_ = 344,
     _DIACRITICS_ = 345,
     _WITHOUT_ = 346,
     _WITHOUT_C_ = 347,
     _STEMMING_ = 348,
     _THESAURUS_ = 349,
     _STOP_ = 350,
     _WILDCARDS_ = 351,
     _ENTIRE_ = 352,
     _CONTENT_ = 353,
     _WORD_ = 354,
     _TYPE_ = 355,
     _START_ = 356,
     _END_ = 357,
     _MOST_ = 358,
     _SKIP_ = 359,
     _COPY_ = 360,
     _VALUE_ = 361,
     _WHITESPACE_ = 362,
     _PI_CONTENT_ = 363,
     _XML_COMMENT_CONTENT_ = 364,
     _EQ_ = 365,
     _NE_ = 366,
     _LT_ = 367,
     _LE_ = 368,
     _GT_ = 369,
     _GE_ = 370,
     _AT_ = 371,
     _QUOT_ATTR_CONTENT_ = 372,
     _APOS_ATTR_CONTENT_ = 373,
     _WHITESPACE_ELEMENT_CONTENT_ = 374,
     _ELEMENT_CONTENT_ = 375,
     _AT_LM_ = 376,
     _ORDERED_ = 377,
     _UNORDERED_ = 378,
     _QNAME_ = 379,
     _XMLNS_QNAME_ = 380,
     _CONSTR_QNAME_ = 381,
     _STRING_LITERAL_ = 382,
     _VARIABLE_ = 383,
     _NCNAME_COLON_STAR_ = 384,
     _STAR_COLON_NCNAME_ = 385,
     _PI_TARGET_ = 386,
     _PRAGMA_CONTENT_ = 387,
     _RETURN_ = 388,
     _FOR_ = 389,
     _IN_ = 390,
     _LET_ = 391,
     _WHERE_ = 392,
     _BY_ = 393,
     _ORDER_ = 394,
     _STABLE_ = 395,
     _ASCENDING_ = 396,
     _DESCENDING_ = 397,
     _EMPTY_ = 398,
     _GREATEST_ = 399,
     _LEAST_ = 400,
     _COLLATION_ = 401,
     _SOME_ = 402,
     _EVERY_ = 403,
     _SATISFIES_ = 404,
     _TYPESWITCH_ = 405,
     _CASE_ = 406,
     _CASE_S_ = 407,
     _AS_ = 408,
     _IF_ = 409,
     _THEN_ = 410,
     _ELSE_ = 411,
     _OR_ = 412,
     _AND_ = 413,
     _INSTANCE_ = 414,
     _OF_ = 415,
     _CASTABLE_ = 416,
     _TO_ = 417,
     _DIV_ = 418,
     _MOD_ = 419,
     _UNION_ = 420,
     _INTERSECT_ = 421,
     _EXCEPT_ = 422,
     _VALIDATE_ = 423,
     _CAST_ = 424,
     _TREAT_ = 425,
     _IS_ = 426,
     _PRESERVE_ = 427,
     _STRIP_ = 428,
     _NAMESPACE_ = 429,
     _ITEM_ = 430,
     _EXTERNAL_ = 431,
     _ENCODING_ = 432,
     _NO_PRESERVE_ = 433,
     _INHERIT_ = 434,
     _NO_INHERIT_ = 435,
     _DECLARE_ = 436,
     _CONSTRUCTION_ = 437,
     _ORDERING_ = 438,
     _DEFAULT_ = 439,
     _COPY_NAMESPACES_ = 440,
     _OPTION_ = 441,
     _XQUERY_ = 442,
     _VERSION_ = 443,
     _IMPORT_ = 444,
     _SCHEMA_ = 445,
     _MODULE_ = 446,
     _ELEMENT_ = 447,
     _FUNCTION_ = 448,
     _FUNCTION_EXT_ = 449,
     _SCORE_ = 450,
     _FTCONTAINS_ = 451,
     _WEIGHT_ = 452,
     _WINDOW_ = 453,
     _DISTANCE_ = 454,
     _OCCURS_ = 455,
     _TIMES_ = 456,
     _SAME_ = 457,
     _DIFFERENT_ = 458,
     _LOWERCASE_ = 459,
     _UPPERCASE_ = 460,
     _RELATIONSHIP_ = 461,
     _LEVELS_ = 462,
     _LANGUAGE_ = 463,
     _ANY_ = 464,
     _ALL_ = 465,
     _PHRASE_ = 466,
     _EXACTLY_ = 467,
     _FROM_ = 468,
     _WORDS_ = 469,
     _SENTENCES_ = 470,
     _PARAGRAPHS_ = 471,
     _SENTENCE_ = 472,
     _PARAGRAPH_ = 473,
     _REPLACE_ = 474,
     _MODIFY_ = 475,
     _FIRST_ = 476,
     _INSERT_ = 477,
     _BEFORE_ = 478,
     _AFTER_ = 479,
     _REVALIDATION_ = 480,
     _WITH_ = 481,
     _WITH_FT_ = 482,
     _NODES_ = 483,
     _RENAME_ = 484,
     _LAST_ = 485,
     _DELETE_ = 486,
     _INTO_ = 487,
     _UPDATING_ = 488,
     _ID_ = 489,
     _KEY_ = 490,
     _TEMPLATE_ = 491,
     _MATCHES_ = 492,
     _NAME_ = 493,
     _CALL_ = 494,
     _APPLY_ = 495,
     _TEMPLATES_ = 496,
     _XSLT_END_ELEMENT_ = 497,
     _XSLT_STYLESHEET_ = 498,
     _XSLT_TEMPLATE_ = 499,
     _XSLT_VALUE_OF_ = 500,
     _XSLT_TEXT_ = 501,
     _XSLT_APPLY_TEMPLATES_ = 502,
     _XSLT_CALL_TEMPLATE_ = 503,
     _XSLT_WITH_PARAM_ = 504,
     _XSLT_SEQUENCE_ = 505,
     _XSLT_PARAM_ = 506,
     _XSLT_FUNCTION_ = 507,
     _XSLT_CHOOSE_ = 508,
     _XSLT_WHEN_ = 509,
     _XSLT_OTHERWISE_ = 510,
     _XSLT_IF_ = 511,
     _XSLT_VARIABLE_ = 512,
     _XSLT_COMMENT_ = 513,
     _XSLT_PI_ = 514,
     _XSLT_DOCUMENT_ = 515,
     _XSLT_ATTRIBUTE_ = 516,
     _XSLT_ANALYZE_STRING_ = 517,
     _XSLT_MATCHING_SUBSTRING_ = 518,
     _XSLT_NON_MATCHING_SUBSTRING_ = 519,
     _XSLT_COPY_OF_ = 520,
     _XSLT_COPY_ = 521,
     _XSLT_VERSION_ = 522,
     _XSLT_MODE_ = 523,
     _XSLT_NAME_ = 524,
     _XSLT_TUNNEL_ = 525,
     _XSLT_REQUIRED_ = 526,
     _XSLT_OVERRIDE_ = 527,
     _XSLT_COPY_NAMESPACES_ = 528,
     _XSLT_INHERIT_NAMESPACES_ = 529,
     _XSLT_MATCH_ = 530,
     _XSLT_AS_ = 531,
     _XSLT_SELECT_ = 532,
     _XSLT_PRIORITY_ = 533,
     _XSLT_TEST_ = 534,
     _XSLT_SEPARATOR_ = 535,
     _XSLT_NAMESPACE_A_ = 536,
     _XSLT_REGEX_ = 537,
     _XSLT_FLAGS_ = 538,
     _XSLT_ELEMENT_NAME_ = 539,
     _XSLT_XMLNS_ATTR_ = 540,
     _XSLT_ATTR_NAME_ = 541,
     _XSLT_TEXT_NODE_ = 542,
     _XSLT_WS_TEXT_NODE_ = 543
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _LANG_XPATH2_ 258
#define _LANG_XQUERY_ 259
#define _LANG_XQUERY_FULLTEXT_ 260
#define _LANG_XQUERY_UPDATE_ 261
#define _LANG_XQUERY_FULLTEXT_UPDATE_ 262
#define _LANG_XSLT2_ 263
#define _DOLLAR_ 264
#define _COLON_EQUALS_ 265
#define _ASTERISK_ 266
#define _BAR_ 267
#define _BANG_EQUALS_ 268
#define _LESS_THAN_EQUALS_ 269
#define _GREATER_THAN_ 270
#define _GREATER_THAN_EQUALS_ 271
#define _LESS_THAN_LESS_THAN_ 272
#define _GREATER_THAN_GREATER_THAN_ 273
#define _COLON_COLON_ 274
#define _AT_SIGN_ 275
#define _LSQUARE_ 276
#define _RSQUARE_ 277
#define _QUESTION_MARK_ 278
#define _BAR_BAR_ 279
#define _AMP_AMP_ 280
#define _LESS_THAN_OP_OR_TAG_ 281
#define _START_TAG_CLOSE_ 282
#define _END_TAG_CLOSE_ 283
#define _PI_START_ 284
#define _XML_COMMENT_START_ 285
#define _XML_COMMENT_END_ 286
#define _SLASH_SLASH_ 287
#define _END_TAG_OPEN_ 288
#define _PRAGMA_OPEN_ 289
#define _COMMA_ 290
#define _PLUS_ 291
#define _MINUS_ 292
#define _SLASH_ 293
#define _EQUALS_ 294
#define _DOT_ 295
#define _DOT_DOT_ 296
#define _LPAR_ 297
#define _RPAR_ 298
#define _EMPTY_TAG_CLOSE_ 299
#define _VALUE_INDICATOR_ 300
#define _OPEN_QUOT_ 301
#define _CLOSE_QUOT_ 302
#define _OPEN_APOS_ 303
#define _CLOSE_APOS_ 304
#define _LBRACE_ 305
#define _LBRACE_EXPR_ENCLOSURE_ 306
#define _RBRACE_ 307
#define _SEMICOLON_ 308
#define _BANG_ 309
#define _HASH_ 310
#define _ARROW_ 311
#define _INTEGER_LITERAL_ 312
#define _DECIMAL_LITERAL_ 313
#define _DOUBLE_LITERAL_ 314
#define _ATTRIBUTE_ 315
#define _COMMENT_ 316
#define _DOCUMENT_NODE_ 317
#define _NODE_ 318
#define _PROCESSING_INSTRUCTION_ 319
#define _SCHEMA_ATTRIBUTE_ 320
#define _SCHEMA_ELEMENT_ 321
#define _TEXT_ 322
#define _EMPTY_SEQUENCE_ 323
#define _BOUNDARY_SPACE_ 324
#define _FT_OPTION_ 325
#define _BASE_URI_ 326
#define _LAX_ 327
#define _STRICT_ 328
#define _IDIV_ 329
#define _CHILD_ 330
#define _DESCENDANT_ 331
#define _SELF_ 332
#define _DESCENDANT_OR_SELF_ 333
#define _FOLLOWING_SIBLING_ 334
#define _FOLLOWING_ 335
#define _PARENT_ 336
#define _ANCESTOR_ 337
#define _PRECEDING_SIBLING_ 338
#define _PRECEDING_ 339
#define _ANCESTOR_OR_SELF_ 340
#define _DOCUMENT_ 341
#define _NOT_ 342
#define _SENSITIVE_ 343
#define _INSENSITIVE_ 344
#define _DIACRITICS_ 345
#define _WITHOUT_ 346
#define _WITHOUT_C_ 347
#define _STEMMING_ 348
#define _THESAURUS_ 349
#define _STOP_ 350
#define _WILDCARDS_ 351
#define _ENTIRE_ 352
#define _CONTENT_ 353
#define _WORD_ 354
#define _TYPE_ 355
#define _START_ 356
#define _END_ 357
#define _MOST_ 358
#define _SKIP_ 359
#define _COPY_ 360
#define _VALUE_ 361
#define _WHITESPACE_ 362
#define _PI_CONTENT_ 363
#define _XML_COMMENT_CONTENT_ 364
#define _EQ_ 365
#define _NE_ 366
#define _LT_ 367
#define _LE_ 368
#define _GT_ 369
#define _GE_ 370
#define _AT_ 371
#define _QUOT_ATTR_CONTENT_ 372
#define _APOS_ATTR_CONTENT_ 373
#define _WHITESPACE_ELEMENT_CONTENT_ 374
#define _ELEMENT_CONTENT_ 375
#define _AT_LM_ 376
#define _ORDERED_ 377
#define _UNORDERED_ 378
#define _QNAME_ 379
#define _XMLNS_QNAME_ 380
#define _CONSTR_QNAME_ 381
#define _STRING_LITERAL_ 382
#define _VARIABLE_ 383
#define _NCNAME_COLON_STAR_ 384
#define _STAR_COLON_NCNAME_ 385
#define _PI_TARGET_ 386
#define _PRAGMA_CONTENT_ 387
#define _RETURN_ 388
#define _FOR_ 389
#define _IN_ 390
#define _LET_ 391
#define _WHERE_ 392
#define _BY_ 393
#define _ORDER_ 394
#define _STABLE_ 395
#define _ASCENDING_ 396
#define _DESCENDING_ 397
#define _EMPTY_ 398
#define _GREATEST_ 399
#define _LEAST_ 400
#define _COLLATION_ 401
#define _SOME_ 402
#define _EVERY_ 403
#define _SATISFIES_ 404
#define _TYPESWITCH_ 405
#define _CASE_ 406
#define _CASE_S_ 407
#define _AS_ 408
#define _IF_ 409
#define _THEN_ 410
#define _ELSE_ 411
#define _OR_ 412
#define _AND_ 413
#define _INSTANCE_ 414
#define _OF_ 415
#define _CASTABLE_ 416
#define _TO_ 417
#define _DIV_ 418
#define _MOD_ 419
#define _UNION_ 420
#define _INTERSECT_ 421
#define _EXCEPT_ 422
#define _VALIDATE_ 423
#define _CAST_ 424
#define _TREAT_ 425
#define _IS_ 426
#define _PRESERVE_ 427
#define _STRIP_ 428
#define _NAMESPACE_ 429
#define _ITEM_ 430
#define _EXTERNAL_ 431
#define _ENCODING_ 432
#define _NO_PRESERVE_ 433
#define _INHERIT_ 434
#define _NO_INHERIT_ 435
#define _DECLARE_ 436
#define _CONSTRUCTION_ 437
#define _ORDERING_ 438
#define _DEFAULT_ 439
#define _COPY_NAMESPACES_ 440
#define _OPTION_ 441
#define _XQUERY_ 442
#define _VERSION_ 443
#define _IMPORT_ 444
#define _SCHEMA_ 445
#define _MODULE_ 446
#define _ELEMENT_ 447
#define _FUNCTION_ 448
#define _FUNCTION_EXT_ 449
#define _SCORE_ 450
#define _FTCONTAINS_ 451
#define _WEIGHT_ 452
#define _WINDOW_ 453
#define _DISTANCE_ 454
#define _OCCURS_ 455
#define _TIMES_ 456
#define _SAME_ 457
#define _DIFFERENT_ 458
#define _LOWERCASE_ 459
#define _UPPERCASE_ 460
#define _RELATIONSHIP_ 461
#define _LEVELS_ 462
#define _LANGUAGE_ 463
#define _ANY_ 464
#define _ALL_ 465
#define _PHRASE_ 466
#define _EXACTLY_ 467
#define _FROM_ 468
#define _WORDS_ 469
#define _SENTENCES_ 470
#define _PARAGRAPHS_ 471
#define _SENTENCE_ 472
#define _PARAGRAPH_ 473
#define _REPLACE_ 474
#define _MODIFY_ 475
#define _FIRST_ 476
#define _INSERT_ 477
#define _BEFORE_ 478
#define _AFTER_ 479
#define _REVALIDATION_ 480
#define _WITH_ 481
#define _WITH_FT_ 482
#define _NODES_ 483
#define _RENAME_ 484
#define _LAST_ 485
#define _DELETE_ 486
#define _INTO_ 487
#define _UPDATING_ 488
#define _ID_ 489
#define _KEY_ 490
#define _TEMPLATE_ 491
#define _MATCHES_ 492
#define _NAME_ 493
#define _CALL_ 494
#define _APPLY_ 495
#define _TEMPLATES_ 496
#define _XSLT_END_ELEMENT_ 497
#define _XSLT_STYLESHEET_ 498
#define _XSLT_TEMPLATE_ 499
#define _XSLT_VALUE_OF_ 500
#define _XSLT_TEXT_ 501
#define _XSLT_APPLY_TEMPLATES_ 502
#define _XSLT_CALL_TEMPLATE_ 503
#define _XSLT_WITH_PARAM_ 504
#define _XSLT_SEQUENCE_ 505
#define _XSLT_PARAM_ 506
#define _XSLT_FUNCTION_ 507
#define _XSLT_CHOOSE_ 508
#define _XSLT_WHEN_ 509
#define _XSLT_OTHERWISE_ 510
#define _XSLT_IF_ 511
#define _XSLT_VARIABLE_ 512
#define _XSLT_COMMENT_ 513
#define _XSLT_PI_ 514
#define _XSLT_DOCUMENT_ 515
#define _XSLT_ATTRIBUTE_ 516
#define _XSLT_ANALYZE_STRING_ 517
#define _XSLT_MATCHING_SUBSTRING_ 518
#define _XSLT_NON_MATCHING_SUBSTRING_ 519
#define _XSLT_COPY_OF_ 520
#define _XSLT_COPY_ 521
#define _XSLT_VERSION_ 522
#define _XSLT_MODE_ 523
#define _XSLT_NAME_ 524
#define _XSLT_TUNNEL_ 525
#define _XSLT_REQUIRED_ 526
#define _XSLT_OVERRIDE_ 527
#define _XSLT_COPY_NAMESPACES_ 528
#define _XSLT_INHERIT_NAMESPACES_ 529
#define _XSLT_MATCH_ 530
#define _XSLT_AS_ 531
#define _XSLT_SELECT_ 532
#define _XSLT_PRIORITY_ 533
#define _XSLT_TEST_ 534
#define _XSLT_SEPARATOR_ 535
#define _XSLT_NAMESPACE_A_ 536
#define _XSLT_REGEX_ 537
#define _XSLT_FLAGS_ 538
#define _XSLT_ELEMENT_NAME_ 539
#define _XSLT_XMLNS_ATTR_ 540
#define _XSLT_ATTR_NAME_ 541
#define _XSLT_TEXT_NODE_ 542
#define _XSLT_WS_TEXT_NODE_ 543




/* Copy the first part of user declarations.  */
#line 22 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <iostream>
#include <sstream>

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
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/XQNamespaceBinding.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNSResolver.hpp>

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
#include <xqilla/ast/XQFunctionConversion.hpp>
#include <xqilla/ast/XQAnalyzeString.hpp>
#include <xqilla/ast/XQCopyOf.hpp>
#include <xqilla/ast/XQCopy.hpp>
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/ConvertFunctionArg.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQPredicate.hpp>
#include <xqilla/ast/XQApplyTemplates.hpp>
#include <xqilla/ast/XQInlineFunction.hpp>
#include <xqilla/ast/XQFunctionDeref.hpp>
#include <xqilla/ast/XQFunctionRef.hpp>

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

#include <xqilla/ast/ContextTuple.hpp>
#include <xqilla/ast/ForTuple.hpp>
#include <xqilla/ast/LetTuple.hpp>
#include <xqilla/ast/WhereTuple.hpp>
#include <xqilla/ast/OrderByTuple.hpp>

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
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/functions/XQillaFunction.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
#include <xqilla/utils/XPath2NSUtils.hpp>
#include <xqilla/utils/UTF8Str.hpp>
#include "../config/xqilla_config.h"

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA  1
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

#define REJECT_NOT_XQUERY(where,pos)      if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_EXTENSION(where,pos)   if(!QP->_lexer->isExtensions()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

#define GET_NAVIGATION(pos, object) (((object)->getType() == ASTNode::NAVIGATION) ? (XQNav*)(object) : WRAP(pos, new (MEMMGR) XQNav((object), MEMMGR)))

#define PRESERVE_NS(pos, object) (QP->_lexer->getNSResolver() == 0 ? (object) : WRAP((pos), new (MEMMGR) XQNamespaceBinding(QP->_lexer->getNSResolver(), (object), MEMMGR)))

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

#define CHECK_SECOND_STEP(pos, name) { \
  if(QP->_flags.get(BIT_DECLARE_SECOND_STEP)) \
    yyerror((pos), "Prolog contains " name " declaration after a variable, function or option declaration"); \
}

#define CHECK_SPECIFIED(pos, bit, name, error) { \
  if(QP->_flags.get(bit)) \
    yyerror((pos), "Prolog contains more than one " name " declaration [err:" error "]"); \
  QP->_flags.set(bit); \
}

#define SET_NAMESPACE(pos, prefix, uri) { \
  if(QP->_namespaceDecls.containsKey((prefix))) \
    yyerror((pos), "Namespace prefix has already been bound to a namespace [err:XQST0033]"); \
  QP->_namespaceDecls.put((prefix), NULL); \
  CONTEXT->setNamespaceBinding((prefix), (uri)); \
}

#undef yylex
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh var_name[] = { 'n', 'a', 'm', 'e', 0 };

static const XMLCh err_XPDY0050[] = { 'e', 'r', 'r', ':', 'X', 'P', 'D', 'Y', '0', '0', '5', '0', 0 };

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
  VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
  args[0]=arg1Impl;
  args[1]=arg2Impl;

  return args;
}

static inline TupleNode *getLastAncestor(TupleNode *node)
{
  while(node->getParent()) node = const_cast<TupleNode*>(node->getParent());
  return node;
}

static inline TupleNode *setLastAncestor(TupleNode *node, TupleNode *ancestor)
{
  getLastAncestor(node)->setParent(ancestor);
  return node;
}

template<typename TYPE>
TYPE *wrapForDebug(XQParserArgs *qp, TYPE* pObjToWrap, unsigned int line, unsigned int column)
{
  if(pObjToWrap->getLine() == 0)
    pObjToWrap->setLocationInfo(QP->_query->getFile(), line, column);
  return pObjToWrap;
}

#define RESOLVE_QNAME(pos, qname) const XMLCh *uri, *name; resolveQName((pos), QP, (qname), uri, name)

static void resolveQName(const yyltype &pos, XQParserArgs *qp, const XMLCh *qname, const XMLCh *&uri, const XMLCh *&name)
{
  const XMLCh *prefix = XPath2NSUtils::getPrefix(qname, MEMMGR);
  name = XPath2NSUtils::getLocalName(qname);

  if(prefix == 0 || *prefix == 0) {
    uri = 0;
  }
  else {
    if(QP->_lexer->getNSResolver() == 0) {
      uri = CONTEXT->getNSResolver()->lookupNamespaceURI(prefix);
    }
    else {
      uri = QP->_lexer->getNSResolver()->lookupNamespaceURI(prefix);
    }

    if(uri == 0 || *uri == 0) {
      ostringstream oss;
      oss << "No namespace binding for prefix '" << UTF8(prefix) << "' [err:XTSE0280]";
      yyerror(pos, oss.str().c_str());
    }
  }
}

#define XSLT_VARIABLE_VALUE(pos, select, seqConstruct, seqType) variableValueXSLT((pos), QP, (select), (seqConstruct), (seqType))

static ASTNode *variableValueXSLT(const yyltype &pos, XQParserArgs *qp, ASTNode *select, XQParenthesizedExpr *seqConstruct, SequenceType *seqType)
{
  if(!seqConstruct->getChildren().empty()) {
    if(select != 0) return 0; // signifies an error
    
    if(seqType == 0) {
      return WRAP(pos, new (MEMMGR) XQDocumentConstructor(seqConstruct, MEMMGR));
    }

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(seqConstruct, seqType, MEMMGR));
  }

  if(select != 0) {
    if(seqType == 0) return select;

    return WRAP(pos, new (MEMMGR) XQFunctionConversion(select, seqType, MEMMGR));
  }

  if(seqType == 0) {
    return WRAP(pos, new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  XMLUni::fgZeroLenString, AnyAtomicType::STRING),
                  MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
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
#line 1006 "../src/parser/XQParser.cpp"

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
#define YYFINAL  317
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   7878

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  289
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  307
/* YYNRULES -- Number of rules.  */
#define YYNRULES  923
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1544

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   543

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
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
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      25,    30,    31,    34,    35,    38,    41,    44,    47,    52,
      54,    58,    61,    65,    68,    72,    74,    76,    78,    83,
      85,    88,    92,    95,    96,    99,   103,   105,   108,   112,
     116,   119,   122,   126,   128,   131,   135,   139,   142,   145,
     149,   151,   154,   158,   162,   167,   168,   172,   175,   176,
     179,   182,   183,   186,   189,   192,   195,   198,   201,   204,
     207,   210,   213,   216,   219,   222,   225,   228,   231,   234,
     238,   240,   244,   248,   252,   254,   256,   260,   262,   266,
     269,   270,   273,   277,   279,   282,   283,   286,   290,   292,
     295,   299,   303,   306,   311,   317,   322,   324,   327,   333,
     334,   338,   343,   345,   349,   353,   357,   358,   362,   363,
     367,   372,   374,   377,   381,   385,   389,   391,   395,   399,
     401,   405,   409,   413,   415,   419,   421,   425,   429,   433,
     437,   440,   442,   446,   449,   453,   455,   458,   461,   465,
     467,   469,   471,   474,   476,   480,   484,   486,   488,   490,
     494,   498,   501,   503,   507,   511,   514,   515,   520,   525,
     532,   534,   536,   538,   540,   543,   546,   548,   550,   553,
     556,   557,   561,   565,   569,   573,   577,   581,   585,   589,
     591,   593,   595,   597,   599,   601,   603,   609,   617,   623,
     631,   633,   635,   638,   641,   643,   645,   648,   651,   652,
     656,   660,   664,   668,   672,   676,   680,   684,   688,   691,
     694,   696,   698,   701,   704,   705,   709,   713,   717,   721,
     725,   729,   733,   737,   740,   743,   745,   747,   752,   759,
     762,   765,   772,   773,   777,   781,   785,   789,   793,   797,
     801,   805,   809,   811,   813,   815,   817,   819,   821,   823,
     825,   827,   829,   831,   837,   841,   845,   851,   857,   862,
     866,   870,   874,   880,   886,   892,   894,   896,   898,   900,
     905,   909,   915,   920,   921,   924,   928,   932,   936,   944,
     949,   956,   959,   961,   965,   969,   976,   985,   992,  1001,
    1004,  1008,  1009,  1011,  1015,  1017,  1021,  1025,  1029,  1031,
    1035,  1037,  1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,
    1055,  1057,  1059,  1061,  1065,  1069,  1072,  1075,  1077,  1080,
    1083,  1085,  1087,  1090,  1094,  1096,  1104,  1105,  1109,  1110,
    1114,  1117,  1121,  1123,  1130,  1136,  1139,  1143,  1148,  1152,
    1154,  1158,  1164,  1166,  1167,  1169,  1171,  1172,  1175,  1178,
    1183,  1188,  1192,  1194,  1200,  1207,  1210,  1212,  1218,  1222,
    1227,  1235,  1244,  1248,  1250,  1254,  1256,  1260,  1264,  1265,
    1270,  1274,  1278,  1282,  1286,  1290,  1294,  1298,  1302,  1306,
    1310,  1314,  1318,  1320,  1324,  1329,  1331,  1335,  1337,  1341,
    1345,  1347,  1351,  1355,  1359,  1363,  1365,  1369,  1373,  1375,
    1379,  1383,  1385,  1390,  1392,  1397,  1399,  1404,  1406,  1411,
    1413,  1416,  1419,  1421,  1423,  1425,  1427,  1432,  1438,  1444,
    1448,  1453,  1455,  1458,  1463,  1465,  1468,  1470,  1473,  1476,
    1478,  1480,  1484,  1488,  1490,  1492,  1494,  1497,  1500,  1503,
    1505,  1508,  1511,  1514,  1517,  1520,  1523,  1526,  1529,  1532,
    1534,  1537,  1539,  1542,  1545,  1548,  1551,  1554,  1556,  1558,
    1560,  1562,  1564,  1566,  1568,  1570,  1573,  1574,  1579,  1581,
    1583,  1585,  1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,
    1603,  1605,  1607,  1609,  1612,  1614,  1618,  1621,  1623,  1628,
    1633,  1637,  1642,  1646,  1648,  1650,  1652,  1654,  1656,  1658,
    1664,  1675,  1677,  1679,  1680,  1688,  1696,  1697,  1699,  1703,
    1707,  1711,  1715,  1716,  1719,  1722,  1723,  1726,  1729,  1730,
    1733,  1736,  1737,  1740,  1743,  1744,  1747,  1750,  1753,  1756,
    1760,  1761,  1763,  1767,  1769,  1772,  1774,  1776,  1778,  1780,
    1782,  1784,  1789,  1793,  1795,  1799,  1802,  1806,  1810,  1815,
    1820,  1824,  1826,  1830,  1833,  1837,  1840,  1841,  1843,  1844,
    1847,  1850,  1854,  1855,  1857,  1859,  1861,  1863,  1867,  1869,
    1871,  1873,  1875,  1877,  1879,  1881,  1883,  1885,  1887,  1889,
    1891,  1893,  1897,  1901,  1906,  1911,  1915,  1919,  1923,  1928,
    1933,  1937,  1942,  1949,  1951,  1953,  1958,  1960,  1964,  1969,
    1976,  1984,  1986,  1988,  1993,  1995,  1997,  1999,  2001,  2003,
    2008,  2011,  2012,  2015,  2018,  2022,  2024,  2028,  2030,  2035,
    2037,  2040,  2042,  2046,  2048,  2051,  2054,  2057,  2060,  2065,
    2067,  2071,  2075,  2079,  2082,  2085,  2088,  2091,  2094,  2096,
    2098,  2100,  2102,  2104,  2106,  2108,  2110,  2112,  2115,  2118,
    2121,  2124,  2127,  2130,  2133,  2136,  2140,  2144,  2151,  2158,
    2161,  2162,  2166,  2169,  2174,  2179,  2186,  2192,  2196,  2202,
    2203,  2206,  2209,  2213,  2215,  2219,  2222,  2225,  2228,  2231,
    2234,  2235,  2237,  2240,  2242,  2245,  2247,  2250,  2254,  2258,
    2263,  2265,  2267,  2269,  2271,  2273,  2277,  2281,  2285,  2289,
    2296,  2303,  2308,  2313,  2318,  2321,  2324,  2327,  2330,  2333,
    2341,  2347,  2353,  2360,  2364,  2366,  2371,  2373,  2375,  2377,
    2379,  2381,  2383,  2389,  2397,  2405,  2415,  2421,  2429,  2430,
    2433,  2436,  2440,  2444,  2452,  2456,  2464,  2466,  2470,  2476,
    2478,  2480,  2484,  2489,  2494,  2500,  2504,  2510,  2517,  2519,
    2523,  2527,  2529,  2531,  2533,  2535,  2537,  2539,  2541,  2543,
    2545,  2547,  2549,  2551,  2553,  2555,  2557,  2559,  2561,  2563,
    2565,  2567,  2569,  2571,  2573,  2575,  2577,  2579,  2581,  2583,
    2585,  2587,  2589,  2591,  2593,  2595,  2597,  2599,  2601,  2603,
    2605,  2607,  2609,  2611,  2613,  2615,  2617,  2619,  2621,  2623,
    2625,  2627,  2629,  2631,  2633,  2635,  2637,  2639,  2641,  2643,
    2645,  2647,  2649,  2651,  2653,  2655,  2657,  2659,  2661,  2663,
    2665,  2667,  2669,  2671,  2673,  2675,  2677,  2679,  2681,  2683,
    2685,  2687,  2689,  2691,  2693,  2695,  2697,  2699,  2701,  2703,
    2705,  2707,  2709,  2711,  2713,  2715,  2717,  2719,  2721,  2723,
    2725,  2727,  2729,  2731,  2733,  2735,  2737,  2739,  2741,  2743,
    2745,  2747,  2749,  2751,  2753,  2755,  2757,  2759,  2761,  2763,
    2765,  2767,  2769,  2771,  2773,  2775,  2777,  2779,  2781,  2783,
    2785,  2787,  2789,  2791,  2793,  2795,  2797,  2799,  2801,  2803,
    2805,  2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,
    2825,  2827,  2829,  2831,  2833,  2835,  2837,  2839,  2841,  2843,
    2845,  2847,  2849,  2851
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     290,     0,    -1,     3,   406,    -1,     4,   357,    -1,     5,
     364,    -1,     6,   368,    -1,     7,   372,    -1,     8,   291,
      -1,   292,    -1,   307,    -1,   243,   293,   294,   242,    -1,
      -1,   293,   267,    -1,    -1,   294,   295,    -1,   294,   298,
      -1,   294,   303,    -1,   294,   305,    -1,   296,   300,   310,
     242,    -1,   244,    -1,   296,   275,   347,    -1,   296,   269,
      -1,   296,   278,   297,    -1,   296,   268,    -1,   296,   276,
     514,    -1,    57,    -1,    58,    -1,    59,    -1,   299,   300,
     310,   242,    -1,   252,    -1,   299,   269,    -1,   299,   276,
     514,    -1,   299,   272,    -1,    -1,   300,   301,    -1,   302,
     310,   242,    -1,   251,    -1,   302,   269,    -1,   302,   277,
     407,    -1,   302,   276,   514,    -1,   302,   271,    -1,   302,
     270,    -1,   304,   310,   242,    -1,   251,    -1,   304,   269,
      -1,   304,   277,   407,    -1,   304,   276,   514,    -1,   304,
     271,    -1,   304,   270,    -1,   306,   310,   242,    -1,   257,
      -1,   306,   269,    -1,   306,   277,   407,    -1,   306,   276,
     514,    -1,   284,   308,   310,   242,    -1,    -1,   308,   286,
     309,    -1,   308,   285,    -1,    -1,   309,   405,    -1,   309,
     117,    -1,    -1,   310,   314,    -1,   310,   307,    -1,   310,
     311,    -1,   310,   313,    -1,   310,   315,    -1,   310,   318,
      -1,   310,   323,    -1,   310,   325,    -1,   310,   324,    -1,
     310,   333,    -1,   310,   335,    -1,   310,   337,    -1,   310,
     339,    -1,   310,   341,    -1,   310,   329,    -1,   310,   343,
      -1,   310,   345,    -1,   312,   310,   242,    -1,   245,    -1,
     312,   277,   407,    -1,   312,   280,   309,    -1,   246,   314,
     242,    -1,   287,    -1,   288,    -1,   316,   317,   242,    -1,
     247,    -1,   316,   277,   407,    -1,   316,   268,    -1,    -1,
     317,   321,    -1,   319,   320,   242,    -1,   248,    -1,   319,
     269,    -1,    -1,   320,   321,    -1,   322,   310,   242,    -1,
     249,    -1,   322,   269,    -1,   322,   277,   407,    -1,   322,
     276,   514,    -1,   322,   270,    -1,   250,   277,   407,   242,
      -1,   256,   279,   407,   310,   242,    -1,   253,   326,   328,
     242,    -1,   327,    -1,   326,   327,    -1,   254,   279,   407,
     310,   242,    -1,    -1,   255,   310,   242,    -1,   330,   331,
     332,   242,    -1,   262,    -1,   330,   277,   407,    -1,   330,
     282,   309,    -1,   330,   283,   309,    -1,    -1,   263,   310,
     242,    -1,    -1,   264,   310,   242,    -1,   334,   310,   242,
     310,    -1,   257,    -1,   334,   269,    -1,   334,   277,   407,
      -1,   334,   276,   514,    -1,   336,   310,   242,    -1,   258,
      -1,   336,   277,   407,    -1,   338,   310,   242,    -1,   259,
      -1,   338,   269,   309,    -1,   338,   277,   407,    -1,   340,
     310,   242,    -1,   260,    -1,   342,   310,   242,    -1,   261,
      -1,   342,   269,   309,    -1,   342,   281,   309,    -1,   342,
     277,   407,    -1,   342,   280,   309,    -1,   344,   242,    -1,
     265,    -1,   344,   277,   407,    -1,   344,   273,    -1,   346,
     310,   242,    -1,   266,    -1,   346,   273,    -1,   346,   274,
      -1,   347,    12,   348,    -1,   348,    -1,   350,    -1,    38,
      -1,   349,   350,    -1,   354,    -1,   354,    38,   350,    -1,
     354,    32,   350,    -1,    38,    -1,    32,    -1,   351,    -1,
     350,    38,   351,    -1,   350,    32,   351,    -1,   352,   353,
      -1,   467,    -1,    75,    19,   467,    -1,    60,    19,   467,
      -1,    20,   467,    -1,    -1,   471,    21,   407,    22,    -1,
     234,    42,   355,    43,    -1,   235,    42,   577,    35,   356,
      43,    -1,   577,    -1,   475,    -1,   473,    -1,   475,    -1,
     373,   358,    -1,   373,   359,    -1,   358,    -1,   359,    -1,
     360,   406,    -1,   376,   360,    -1,    -1,   360,   361,   380,
      -1,   360,   379,   380,    -1,   360,   381,   380,    -1,   360,
     383,   380,    -1,   360,   397,   380,    -1,   360,   362,   380,
      -1,   360,   580,   380,    -1,   360,   384,   380,    -1,   382,
      -1,   391,    -1,   392,    -1,   399,    -1,   386,    -1,   387,
      -1,   388,    -1,   181,   363,   595,   401,   405,    -1,   181,
     363,   595,   401,   153,   514,   405,    -1,   181,   363,   595,
     401,   176,    -1,   181,   363,   595,   401,   153,   514,   176,
      -1,   193,    -1,   194,    -1,   373,   365,    -1,   373,   366,
      -1,   365,    -1,   366,    -1,   367,   406,    -1,   376,   367,
      -1,    -1,   367,   361,   380,    -1,   367,   379,   380,    -1,
     367,   381,   380,    -1,   367,   383,   380,    -1,   367,   397,
     380,    -1,   367,   362,   380,    -1,   367,   580,   380,    -1,
     367,   384,   380,    -1,   367,   385,   380,    -1,   373,   369,
      -1,   373,   370,    -1,   369,    -1,   370,    -1,   371,   406,
      -1,   376,   371,    -1,    -1,   371,   378,   380,    -1,   371,
     379,   380,    -1,   371,   381,   380,    -1,   371,   383,   380,
      -1,   371,   397,   380,    -1,   371,   400,   380,    -1,   371,
     580,   380,    -1,   371,   384,   380,    -1,   373,   374,    -1,
     373,   375,    -1,   374,    -1,   375,    -1,   187,   188,   127,
     380,    -1,   187,   188,   127,   177,   127,   380,    -1,   377,
     406,    -1,   376,   377,    -1,   191,   174,   578,    39,   535,
     380,    -1,    -1,   377,   378,   380,    -1,   377,   379,   380,
      -1,   377,   381,   380,    -1,   377,   383,   380,    -1,   377,
     397,   380,    -1,   377,   400,   380,    -1,   377,   580,   380,
      -1,   377,   384,   380,    -1,   377,   385,   380,    -1,   382,
      -1,   391,    -1,   392,    -1,   399,    -1,   386,    -1,   387,
      -1,   564,    -1,   388,    -1,   393,    -1,   396,    -1,    53,
      -1,   181,   174,   578,    39,   535,    -1,   181,    69,   172,
      -1,   181,    69,   173,    -1,   181,   184,   192,   174,   535,
      -1,   181,   184,   363,   174,   535,    -1,   181,   186,   594,
     127,    -1,   181,    70,   545,    -1,   181,   183,   122,    -1,
     181,   183,   123,    -1,   181,   184,   139,   143,   144,    -1,
     181,   184,   139,   143,   145,    -1,   181,   185,   389,    35,
     390,    -1,   172,    -1,   178,    -1,   179,    -1,   180,    -1,
     181,   184,   146,   535,    -1,   181,    71,   535,    -1,   189,
     190,   395,   535,   394,    -1,   189,   190,   535,   394,    -1,
      -1,   116,   535,    -1,   394,    35,   535,    -1,   174,   578,
      39,    -1,   184,   192,   174,    -1,   189,   191,   174,   578,
      39,   535,   394,    -1,   189,   191,   535,   394,    -1,   181,
     128,     9,   476,   513,   398,    -1,    10,   408,    -1,   176,
      -1,   181,   182,   172,    -1,   181,   182,   173,    -1,   181,
     402,   363,   595,   401,   405,    -1,   181,   402,   363,   595,
     401,   153,   514,   405,    -1,   181,   402,   363,   595,   401,
     176,    -1,   181,   402,   363,   595,   401,   153,   514,   176,
      -1,    42,    43,    -1,    42,   403,    43,    -1,    -1,   233,
      -1,   403,    35,   404,    -1,   404,    -1,     9,   476,   513,
      -1,    50,   407,    52,    -1,    51,   407,    52,    -1,   407,
      -1,   407,    35,   408,    -1,   408,    -1,   409,    -1,   427,
      -1,   430,    -1,   434,    -1,   565,    -1,   567,    -1,   570,
      -1,   569,    -1,   571,    -1,   435,    -1,   583,    -1,   584,
      -1,   410,   133,   408,    -1,   411,   420,   421,    -1,   411,
     420,    -1,   411,   421,    -1,   411,    -1,   411,   412,    -1,
     411,   417,    -1,   412,    -1,   417,    -1,   134,   413,    -1,
     413,    35,   414,    -1,   414,    -1,     9,   476,   513,   415,
     416,   135,   408,    -1,    -1,   116,     9,   476,    -1,    -1,
     195,     9,   476,    -1,   136,   418,    -1,   418,    35,   419,
      -1,   419,    -1,     9,   476,   513,   416,    10,   408,    -1,
     195,     9,   476,    10,   408,    -1,   137,   408,    -1,   139,
     138,   422,    -1,   140,   139,   138,   422,    -1,   422,    35,
     423,    -1,   423,    -1,   424,   425,   426,    -1,   424,   425,
     426,   146,   535,    -1,   408,    -1,    -1,   141,    -1,   142,
      -1,    -1,   143,   144,    -1,   143,   145,    -1,   147,   428,
     149,   408,    -1,   148,   428,   149,   408,    -1,   428,    35,
     429,    -1,   429,    -1,     9,   476,   513,   135,   408,    -1,
     150,    42,   407,    43,   431,   432,    -1,   431,   433,    -1,
     433,    -1,   184,     9,   476,   133,   408,    -1,   184,   133,
     408,    -1,   151,   514,   133,   408,    -1,   151,     9,   476,
     153,   514,   133,   408,    -1,   154,    42,   407,    43,   155,
     408,   156,   408,    -1,   435,   157,   436,    -1,   436,    -1,
     436,   158,   437,    -1,   437,    -1,   439,    39,   439,    -1,
     439,    13,   439,    -1,    -1,   439,    26,   438,   439,    -1,
     439,    14,   439,    -1,   439,    15,   439,    -1,   439,    16,
     439,    -1,   439,   110,   439,    -1,   439,   111,   439,    -1,
     439,   112,   439,    -1,   439,   113,   439,    -1,   439,   114,
     439,    -1,   439,   115,   439,    -1,   439,   171,   439,    -1,
     439,    17,   439,    -1,   439,    18,   439,    -1,   439,    -1,
     440,   196,   536,    -1,   440,   196,   536,   563,    -1,   440,
      -1,   441,   162,   441,    -1,   441,    -1,   441,    36,   442,
      -1,   441,    37,   442,    -1,   442,    -1,   442,    11,   443,
      -1,   442,   163,   443,    -1,   442,    74,   443,    -1,   442,
     164,   443,    -1,   443,    -1,   443,    12,   444,    -1,   443,
     165,   444,    -1,   444,    -1,   444,   166,   445,    -1,   444,
     167,   445,    -1,   445,    -1,   446,   159,   160,   514,    -1,
     446,    -1,   447,   170,   153,   514,    -1,   447,    -1,   448,
     161,   153,   511,    -1,   448,    -1,   449,   169,   153,   511,
      -1,   449,    -1,    37,   449,    -1,    36,   449,    -1,   450,
      -1,   451,    -1,   456,    -1,   452,    -1,   168,    51,   407,
      52,    -1,   168,    72,    51,   407,    52,    -1,   168,    73,
      51,   407,    52,    -1,   453,    51,    52,    -1,   453,    51,
     407,    52,    -1,   454,    -1,   453,   454,    -1,    34,   488,
     594,   455,    -1,   132,    -1,   107,   132,    -1,   457,    -1,
     457,   458,    -1,    32,   458,    -1,   458,    -1,    38,    -1,
     458,    38,   459,    -1,   458,    32,   459,    -1,   459,    -1,
     460,    -1,   470,    -1,   461,   471,    -1,   464,   471,    -1,
     462,   467,    -1,   463,    -1,    75,    19,    -1,    76,    19,
      -1,    60,    19,    -1,    77,    19,    -1,    78,    19,    -1,
      79,    19,    -1,    80,    19,    -1,   174,    19,    -1,    20,
     467,    -1,   467,    -1,   465,   467,    -1,   466,    -1,    81,
      19,    -1,    82,    19,    -1,    83,    19,    -1,    84,    19,
      -1,    85,    19,    -1,    41,    -1,   518,    -1,   468,    -1,
     579,    -1,   469,    -1,    11,    -1,   129,    -1,   130,    -1,
     472,   471,    -1,    -1,   471,    21,   407,    22,    -1,   473,
      -1,   475,    -1,   477,    -1,   478,    -1,   481,    -1,   483,
      -1,   479,    -1,   480,    -1,   587,    -1,   590,    -1,   474,
      -1,   577,    -1,   574,    -1,   575,    -1,   576,    -1,     9,
     476,    -1,   594,    -1,    42,   407,    43,    -1,    42,    43,
      -1,    40,    -1,   122,    51,   407,    52,    -1,   123,    51,
     407,    52,    -1,   595,    42,    43,    -1,   595,    42,   482,
      43,    -1,   482,    35,   408,    -1,   408,    -1,   484,    -1,
     500,    -1,   485,    -1,   496,    -1,   498,    -1,    26,   486,
     487,   488,    44,    -1,    26,   486,   487,   488,    27,   495,
      33,   486,   488,    28,    -1,   124,    -1,   125,    -1,    -1,
     487,   107,   124,   488,    45,   488,   489,    -1,   487,   107,
     125,   488,    45,   488,   490,    -1,    -1,   107,    -1,    46,
     491,    47,    -1,    48,   493,    49,    -1,    46,   492,    47,
      -1,    48,   494,    49,    -1,    -1,   491,   405,    -1,   491,
     117,    -1,    -1,   492,   405,    -1,   492,   117,    -1,    -1,
     493,   405,    -1,   493,   118,    -1,    -1,   494,   405,    -1,
     494,   118,    -1,    -1,   495,   484,    -1,   495,   405,    -1,
     495,   120,    -1,   495,   119,    -1,    30,   497,    31,    -1,
      -1,   109,    -1,    29,   131,   499,    -1,   108,    -1,   107,
     108,    -1,   501,    -1,   502,    -1,   505,    -1,   506,    -1,
     507,    -1,   508,    -1,    86,    51,   407,    52,    -1,   192,
     503,   504,    -1,   126,    -1,    51,   407,    52,    -1,    51,
      52,    -1,    51,   407,    52,    -1,    60,   503,   504,    -1,
      67,    51,   407,    52,    -1,    61,    51,   407,    52,    -1,
      64,   509,   510,    -1,   126,    -1,    51,   407,    52,    -1,
      51,    52,    -1,    51,   407,    52,    -1,   517,   512,    -1,
      -1,    23,    -1,    -1,   153,   514,    -1,   516,   515,    -1,
      68,    42,    43,    -1,    -1,    11,    -1,    36,    -1,    23,
      -1,   517,    -1,   175,    42,    43,    -1,   518,    -1,   591,
      -1,   593,    -1,   579,    -1,   520,    -1,   528,    -1,   524,
      -1,   530,    -1,   526,    -1,   523,    -1,   522,    -1,   521,
      -1,   519,    -1,    63,    42,    43,    -1,    62,    42,    43,
      -1,    62,    42,   528,    43,    -1,    62,    42,   530,    43,
      -1,    67,    42,    43,    -1,    61,    42,    43,    -1,    64,
      42,    43,    -1,    64,    42,   578,    43,    -1,    64,    42,
     127,    43,    -1,    60,    42,    43,    -1,    60,    42,   525,
      43,    -1,    60,    42,   525,    35,   534,    43,    -1,   532,
      -1,    11,    -1,    65,    42,   527,    43,    -1,   532,    -1,
     192,    42,    43,    -1,   192,    42,   529,    43,    -1,   192,
      42,   529,    35,   534,    43,    -1,   192,    42,   529,    35,
     534,    23,    43,    -1,   533,    -1,    11,    -1,    66,    42,
     531,    43,    -1,   533,    -1,   579,    -1,   579,    -1,   579,
      -1,   127,    -1,   538,   537,   197,   575,    -1,   538,   537,
      -1,    -1,   537,   545,    -1,   537,   544,    -1,   538,    24,
     539,    -1,   539,    -1,   539,    25,   540,    -1,   540,    -1,
     540,    87,   135,   541,    -1,   541,    -1,    54,   542,    -1,
     542,    -1,    42,   536,    43,    -1,   543,    -1,   473,   559,
      -1,   475,   559,    -1,   478,   559,    -1,   481,   559,    -1,
      51,   407,    52,   559,    -1,   122,    -1,   198,   443,   561,
      -1,   199,   560,   561,    -1,   200,   560,   201,    -1,   202,
     562,    -1,   203,   562,    -1,   116,   101,    -1,   116,   102,
      -1,    97,    98,    -1,   546,    -1,   547,    -1,   548,    -1,
     549,    -1,   552,    -1,   557,    -1,   558,    -1,   204,    -1,
     205,    -1,   152,    88,    -1,   152,    89,    -1,   227,    90,
      -1,    91,    90,    -1,    90,    88,    -1,    90,    89,    -1,
     227,    93,    -1,    91,    93,    -1,   227,    94,   551,    -1,
     227,    94,   184,    -1,   227,    94,    42,   551,   550,    43,
      -1,   227,    94,    42,   184,   550,    43,    -1,    91,    94,
      -1,    -1,   550,    35,   551,    -1,   116,   577,    -1,   116,
     577,   206,   577,    -1,   116,   577,   560,   207,    -1,   116,
     577,   206,   577,   560,   207,    -1,   227,    95,   214,   554,
     553,    -1,    91,    95,   214,    -1,   227,   184,    95,   214,
     553,    -1,    -1,   553,   556,    -1,   116,   577,    -1,    42,
     555,    43,    -1,   577,    -1,   555,    35,   577,    -1,   165,
     554,    -1,   167,   554,    -1,   208,   577,    -1,   227,    96,
      -1,    91,    96,    -1,    -1,   209,    -1,   209,    99,    -1,
     210,    -1,   210,   214,    -1,   211,    -1,   212,   443,    -1,
     121,   145,   443,    -1,   121,   103,   443,    -1,   213,   443,
     162,   443,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,   218,    -1,    92,    98,   443,    -1,   181,   225,    73,
      -1,   181,   225,    72,    -1,   181,   225,   104,    -1,   566,
     408,   153,   221,   232,   408,    -1,   566,   408,   153,   230,
     232,   408,    -1,   566,   408,   232,   408,    -1,   566,   408,
     224,   408,    -1,   566,   408,   223,   408,    -1,   222,    63,
      -1,   222,   228,    -1,   568,   408,    -1,   231,    63,    -1,
     231,   228,    -1,   219,   106,   160,    63,   408,   226,   408,
      -1,   219,    63,   408,   226,   408,    -1,   229,    63,   408,
     153,   408,    -1,   105,   572,   220,   408,   133,   408,    -1,
     572,    35,   573,    -1,   573,    -1,     9,   476,    10,   408,
      -1,    57,    -1,    58,    -1,    59,    -1,   127,    -1,   594,
      -1,   594,    -1,   181,   236,   238,   594,   405,    -1,   181,
     236,   238,   594,   582,   581,   405,    -1,   181,   236,   238,
     594,   237,   347,   405,    -1,   181,   236,   238,   594,   237,
     347,   582,   581,   405,    -1,   181,   236,   237,   347,   405,
      -1,   181,   236,   237,   347,   582,   581,   405,    -1,    -1,
     153,   514,    -1,    42,    43,    -1,    42,   403,    43,    -1,
     239,   236,   594,    -1,   239,   236,   594,   226,    42,   585,
      43,    -1,   240,   241,   408,    -1,   240,   241,   408,   226,
      42,   585,    43,    -1,   586,    -1,   585,    35,   586,    -1,
       9,   476,   513,    10,   408,    -1,   588,    -1,   589,    -1,
     595,    55,    57,    -1,   194,   401,   513,   405,    -1,   470,
      56,    42,    43,    -1,   470,    56,    42,   482,    43,    -1,
     194,    42,    43,    -1,   194,    42,    43,   153,   514,    -1,
     194,    42,   592,    43,   153,   514,    -1,   514,    -1,   592,
      35,   514,    -1,    42,   516,    43,    -1,   595,    -1,    60,
      -1,    61,    -1,    62,    -1,   192,    -1,   175,    -1,   154,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,    67,
      -1,   150,    -1,    68,    -1,   194,    -1,   124,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   106,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   116,    -1,   128,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,
      -1,   144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,   151,    -1,   153,    -1,   155,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,
      -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,
      -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,
      -1,   172,    -1,   173,    -1,   174,    -1,   176,    -1,   177,
      -1,   178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,
      -1,   183,    -1,   184,    -1,   185,    -1,   186,    -1,   188,
      -1,   189,    -1,   190,    -1,   193,    -1,   195,    -1,   196,
      -1,   197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,
      -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,
      -1,   222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,
      -1,   228,    -1,   229,    -1,   230,    -1,   231,    -1,   232,
      -1,   233,    -1,   122,    -1,   123,    -1,   234,    -1,   235,
      -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,
      -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   711,   711,   713,   714,   715,   716,   718,   725,   754,
     774,   779,   781,   788,   790,   791,   792,   793,   797,   810,
     814,   819,   826,   831,   836,   843,   843,   843,   846,   859,
     863,   870,   875,   884,   887,   895,   922,   926,   933,   939,
     944,   949,   958,   982,   986,   993,   998,  1003,  1008,  1019,
    1037,  1041,  1048,  1053,  1061,  1072,  1075,  1082,  1092,  1095,
    1100,  1114,  1117,  1122,  1127,  1132,  1137,  1142,  1147,  1152,
    1157,  1162,  1167,  1172,  1177,  1182,  1187,  1192,  1197,  1205,
    1223,  1227,  1232,  1241,  1247,  1247,  1250,  1270,  1274,  1279,
    1288,  1291,  1299,  1312,  1316,  1327,  1330,  1338,  1356,  1360,
    1367,  1372,  1377,  1385,  1393,  1401,  1415,  1419,  1433,  1441,
    1444,  1451,  1486,  1490,  1495,  1501,  1511,  1514,  1522,  1525,
    1532,  1550,  1554,  1561,  1566,  1574,  1592,  1596,  1604,  1626,
    1630,  1637,  1645,  1654,  1662,  1694,  1698,  1705,  1712,  1721,
    1730,  1742,  1746,  1751,  1760,  1773,  1777,  1782,  1796,  1801,
    1813,  1817,  1825,  1844,  1849,  1854,  1862,  1870,  1892,  1896,
    1906,  1920,  1928,  1934,  1940,  1946,  1958,  1961,  1972,  1977,
    1985,  1985,  1988,  1988,  1996,  1997,  1998,  1999,  2003,  2006,
    2010,  2012,  2016,  2020,  2024,  2028,  2032,  2038,  2044,  2058,
    2059,  2060,  2061,  2062,  2063,  2064,  2070,  2074,  2078,  2082,
    2088,  2088,  2095,  2096,  2097,  2098,  2102,  2105,  2109,  2111,
    2115,  2119,  2123,  2127,  2131,  2137,  2143,  2147,  2158,  2159,
    2160,  2161,  2165,  2168,  2172,  2174,  2178,  2182,  2186,  2190,
    2194,  2200,  2206,  2217,  2218,  2219,  2220,  2225,  2230,  2252,
    2255,  2259,  2271,  2273,  2277,  2281,  2285,  2289,  2293,  2299,
    2305,  2309,  2323,  2324,  2325,  2326,  2327,  2328,  2329,  2330,
    2334,  2334,  2337,  2341,  2349,  2354,  2363,  2368,  2377,  2426,
    2433,  2438,  2447,  2452,  2461,  2471,  2475,  2483,  2487,  2495,
    2511,  2520,  2532,  2541,  2544,  2549,  2558,  2562,  2570,  2580,
    2592,  2599,  2603,  2611,  2616,  2626,  2630,  2634,  2638,  2645,
    2649,  2656,  2659,  2667,  2672,  2682,  2690,  2694,  2702,  2715,
    2730,  2737,  2738,  2739,  2740,  2741,  2742,  2743,  2744,  2745,
    2746,  2747,  2748,  2753,  2764,  2768,  2772,  2776,  2780,  2786,
    2792,  2793,  2799,  2806,  2810,  2814,  2826,  2829,  2840,  2843,
    2853,  2860,  2864,  2868,  2872,  2879,  2887,  2892,  2900,  2904,
    2910,  2917,  2932,  2949,  2952,  2956,  2964,  2972,  2976,  2985,
    2993,  3004,  3008,  3012,  3023,  3030,  3035,  3043,  3047,  3055,
    3059,  3067,  3075,  3084,  3089,  3098,  3108,  3112,  3116,  3116,
    3120,  3124,  3128,  3132,  3136,  3140,  3144,  3148,  3152,  3156,
    3160,  3164,  3168,  3173,  3177,  3181,  3186,  3190,  3195,  3199,
    3203,  3208,  3212,  3216,  3220,  3224,  3229,  3233,  3237,  3242,
    3246,  3250,  3255,  3259,  3264,  3269,  3274,  3278,  3283,  3287,
    3292,  3298,  3304,  3309,  3310,  3311,  3319,  3323,  3327,  3335,
    3342,  3351,  3351,  3355,  3375,  3376,  3384,  3385,  3391,  3412,
    3416,  3430,  3436,  3449,  3453,  3453,  3457,  3461,  3470,  3482,
    3493,  3497,  3501,  3505,  3509,  3513,  3517,  3521,  3529,  3537,
    3554,  3562,  3571,  3575,  3579,  3583,  3587,  3595,  3607,  3612,
    3617,  3624,  3629,  3636,  3643,  3654,  3664,  3667,  3678,  3679,
    3680,  3681,  3682,  3683,  3684,  3685,  3686,  3687,  3691,  3691,
    3694,  3694,  3694,  3698,  3705,  3709,  3713,  3721,  3729,  3739,
    3749,  3753,  3760,  3765,  3774,  3778,  3787,  3787,  3787,  3791,
    3797,  3806,  3806,  3811,  3814,  3823,  3834,  3834,  3839,  3843,
    3850,  3854,  3865,  3868,  3873,  3887,  3890,  3894,  3911,  3914,
    3919,  3933,  3936,  3940,  3961,  3964,  3969,  3974,  3984,  4000,
    4015,  4018,  4023,  4044,  4045,  4058,  4059,  4060,  4061,  4062,
    4063,  4068,  4076,  4084,  4088,  4096,  4100,  4109,  4117,  4125,
    4133,  4140,  4153,  4160,  4164,  4172,  4183,  4186,  4195,  4198,
    4208,  4215,  4225,  4226,  4228,  4230,  4236,  4240,  4244,  4245,
    4246,  4250,  4262,  4263,  4264,  4265,  4266,  4267,  4268,  4269,
    4270,  4275,  4283,  4287,  4292,  4301,  4309,  4317,  4321,  4325,
    4333,  4337,  4341,  4349,  4350,  4358,  4366,  4371,  4375,  4379,
    4383,  4392,  4393,  4401,  4408,  4411,  4414,  4417,  4421,  4433,
    4445,  4461,  4464,  4468,  4478,  4489,  4494,  4505,  4510,  4514,
    4519,  4523,  4528,  4532,  4537,  4541,  4545,  4549,  4553,  4567,
    4571,  4575,  4579,  4584,  4588,  4592,  4596,  4600,  4614,  4615,
    4616,  4617,  4618,  4619,  4620,  4628,  4632,  4636,  4640,  4651,
    4655,  4659,  4663,  4671,  4675,  4685,  4689,  4693,  4697,  4701,
    4709,  4711,  4718,  4722,  4726,  4730,  4740,  4744,  4748,  4756,
    4758,  4766,  4770,  4777,  4781,  4789,  4793,  4801,  4809,  4813,
    4822,  4825,  4829,  4833,  4837,  4841,  4852,  4858,  4864,  4870,
    4880,  4884,  4888,  4896,  4900,  4908,  4916,  4921,  4926,  4938,
    4942,  4946,  4950,  4954,  4960,  4960,  4965,  4971,  4971,  4976,
    4980,  4990,  4998,  5005,  5010,  5018,  5027,  5040,  5053,  5067,
    5079,  5088,  5100,  5104,  5108,  5112,  5116,  5120,  5128,  5131,
    5139,  5143,  5152,  5156,  5165,  5169,  5177,  5182,  5192,  5205,
    5205,  5209,  5217,  5226,  5231,  5240,  5244,  5248,  5255,  5260,
    5269,  5278,  5278,  5278,  5278,  5278,  5278,  5278,  5278,  5279,
    5279,  5279,  5279,  5279,  5279,  5280,  5284,  5284,  5284,  5284,
    5284,  5284,  5284,  5284,  5284,  5284,  5285,  5285,  5285,  5285,
    5285,  5285,  5285,  5286,  5286,  5286,  5286,  5286,  5286,  5286,
    5286,  5287,  5287,  5287,  5287,  5287,  5287,  5287,  5287,  5287,
    5287,  5287,  5288,  5288,  5288,  5288,  5288,  5288,  5288,  5288,
    5288,  5288,  5288,  5288,  5289,  5289,  5289,  5289,  5289,  5289,
    5289,  5289,  5289,  5289,  5290,  5290,  5290,  5290,  5290,  5290,
    5290,  5290,  5290,  5290,  5290,  5290,  5291,  5291,  5291,  5291,
    5291,  5291,  5291,  5291,  5291,  5291,  5291,  5291,  5292,  5292,
    5292,  5292,  5292,  5292,  5292,  5292,  5292,  5293,  5293,  5293,
    5293,  5293,  5293,  5293,  5293,  5294,  5294,  5294,  5294,  5294,
    5294,  5294,  5294,  5294,  5295,  5295,  5295,  5295,  5295,  5295,
    5295,  5295,  5295,  5296,  5296,  5296,  5296,  5296,  5296,  5296,
    5296,  5296,  5296,  5297,  5297,  5297,  5297,  5297,  5297,  5297,
    5297,  5297,  5297,  5297,  5298,  5298,  5298,  5298,  5298,  5298,
    5298,  5298,  5298,  5298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<Language: XPath2>\"",
  "\"<Language: XQuery>\"", "\"<Language: XQuery Fulltext>\"",
  "\"<Language: XQuery Update>\"",
  "\"<Language: XQuery Fulltext Update>\"", "\"<Language: XSLT 2.0>\"",
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"||\"", "\"&&\"", "\"<\"",
  "\"> (start tag close)\"", "\"> (end tag close)\"", "\"<?\"", "\"<!--\"",
  "\"-->\"", "\"//\"", "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"",
  "\"/\"", "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"",
  "\")\"", "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"",
  "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"{ (expression enclosure)\"",
  "\"}\"", "\";\"", "\"!\"", "\"#\"", "\"=>\"", "\"<integer literal>\"",
  "\"<decimal literal>\"", "\"<double literal>\"", "\"attribute\"",
  "\"comment\"", "\"document-node\"", "\"node\"",
  "\"processing-instruction\"", "\"schema-attribute\"",
  "\"schema-element\"", "\"text\"", "\"empty-sequence\"",
  "\"boundary-space\"", "\"ft-option\"", "\"base-uri\"", "\"lax\"",
  "\"strict\"", "\"idiv\"", "\"child\"", "\"descendant\"", "\"self\"",
  "\"descendant-or-self\"", "\"following-sibling\"", "\"following\"",
  "\"parent\"", "\"ancestor\"", "\"preceding-sibling\"", "\"preceding\"",
  "\"ancestor-of-self\"", "\"document\"", "\"not\"", "\"sensitive\"",
  "\"insensitive\"", "\"diacritics\"", "\"without\"",
  "\"without (followed by content)\"", "\"stemming\"", "\"thesaurus\"",
  "\"stop\"", "\"wildcards\"", "\"entire\"", "\"content\"", "\"word\"",
  "\"type\"", "\"start\"", "\"end\"", "\"most\"", "\"skip\"", "\"copy\"",
  "\"value\"", "\"<whitespace>\"", "\"<processing instruction content>\"",
  "\"<xml comment content>\"", "\"eq\"", "\"ne\"", "\"lt\"", "\"le\"",
  "\"gt\"", "\"ge\"", "\"at\"", "\"<quot attribute content>\"",
  "\"<apos attribute content>\"", "\"<whitespace element content>\"",
  "\"<element content>\"", "\"at (followed by least or most)\"",
  "\"ordered\"", "\"unordered\"", "\"<qualified name>\"",
  "\"<xmlns qualified name>\"",
  "\"<computed constructor qualified name>\"", "\"'...'\"", "\"variable\"",
  "\"<NCName>:*\"", "\"*:<NCName>\"",
  "\"<processing instruction target>\"", "\"<pragma content>\"",
  "\"return\"", "\"for\"", "\"in\"", "\"let\"", "\"where\"", "\"by\"",
  "\"order\"", "\"stable\"", "\"ascending\"", "\"descending\"",
  "\"empty\"", "\"greatest\"", "\"least\"", "\"collation\"", "\"some\"",
  "\"every\"", "\"satisfies\"", "\"typeswitch\"", "\"case\"",
  "\"case (followed by (in)sensitive)\"", "\"as\"", "\"if\"", "\"then\"",
  "\"else\"", "\"or\"", "\"and\"", "\"instance\"", "\"of\"",
  "\"castable\"", "\"to\"", "\"div\"", "\"mod\"", "\"union\"",
  "\"intersect\"", "\"except\"", "\"validate\"", "\"cast\"", "\"treat\"",
  "\"is\"", "\"preserve\"", "\"strip\"", "\"namespace\"", "\"item\"",
  "\"external\"", "\"encoding\"", "\"no-preserve\"", "\"inherit\"",
  "\"no-inherit\"", "\"declare\"", "\"construction\"", "\"ordering\"",
  "\"default\"", "\"copy-namespaces\"", "\"option\"", "\"xquery\"",
  "\"version\"", "\"import\"", "\"schema\"", "\"module\"", "\"element\"",
  "\"function\"", "\"function (ext)\"", "\"score\"", "\"ftcontains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"with (ft option)\"", "\"nodes\"",
  "\"rename\"", "\"last\"", "\"delete\"", "\"into\"", "\"updating\"",
  "\"id\"", "\"key\"", "\"template\"", "\"matches\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"<XSLT end element>\"",
  "\"<xsl:stylesheet...\"", "\"<xsl:template...\"", "\"<xsl:value-of...\"",
  "\"<xsl:text...\"", "\"<xsl:apply-templates...\"",
  "\"<xsl:call-template...\"", "\"<xsl:with-param...\"",
  "\"<xsl:sequence...\"", "\"<xsl:param...\"", "\"<xsl:function...\"",
  "\"<xsl:choose...\"", "\"<xsl:when...\"", "\"<xsl:otherwise...\"",
  "\"<xsl:if...\"", "\"<xsl:variable...\"", "\"<xsl:comment...\"",
  "\"<xsl:processing-instruction...\"", "\"<xsl:document...\"",
  "\"<xsl:attribute...\"", "\"<xsl:analyze-string...\"",
  "\"<xsl:matching-substring...\"", "\"<xsl:non-matching-substring...\"",
  "\"<xsl:copy-of...\"", "\"<xsl:copy...\"", "\"version='...'\"",
  "\"mode='...'\"", "\"name='...'\"", "\"tunnel='...'\"",
  "\"required='...'\"", "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...'\"", "\"regex='...'\"",
  "\"flags='...'\"", "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "$accept", "SelectLanguage",
  "Start_XSLT", "Stylesheet_XSLT", "StylesheetAttrs_XSLT",
  "StylesheetContent_XSLT", "Template_XSLT", "TemplateAttrs_XSLT",
  "Number_XSLT", "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT",
  "Param_XSLT", "ParamAttrs_XSLT", "GlobalParam_XSLT",
  "GlobalParamAttrs_XSLT", "GlobalVariable_XSLT",
  "GlobalVariableAttrs_XSLT", "LiteralResultElement_XSLT",
  "LiteralResultElementAttrs_XSLT", "AttrValueTemplate_XSLT",
  "SequenceConstructor_XSLT", "ValueOf_XSLT", "ValueOfAttrs_XSLT",
  "Text_XSLT", "TextNode_XSLT", "ApplyTemplates_XSLT",
  "ApplyTemplatesAttrs_XSLT", "ApplyTemplatesContent_XSLT",
  "CallTemplate_XSLT", "CallTemplateAttrs_XSLT",
  "CallTemplateContent_XSLT", "WithParam_XSLT", "WithParamAttrs_XSLT",
  "Sequence_XSLT", "If_XSLT", "Choose_XSLT", "WhenList_XSLT", "When_XSLT",
  "Otherwise_XSLT", "AnalyzeString_XSLT", "AnalyzeStringAttrs_XSLT",
  "MatchingSubstring_XSLT", "NonMatchingSubstring_XSLT", "Variable_XSLT",
  "VariableAttrs_XSLT", "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT",
  "PIAttrs_XSLT", "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
  "AttributeAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT", "Copy_XSLT",
  "CopyAttrs_XSLT", "Pattern_XSLT", "PathPattern_XSLT",
  "PathPatternStart_XSLT", "RelativePathPattern_XSLT", "PatternStep_XSLT",
  "PatternAxis_XSLT", "PatternStepPredicateList_XSLT", "IdKeyPattern_XSLT",
  "IdValue_XSLT", "KeyValue_XSLT", "Module_XQ", "MainModule_XQ",
  "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ", "FunctionDecl_XQ",
  "FunctionKeyword", "Module_XQF", "MainModule_XQF", "LibraryModule_XQF",
  "Prolog_XQF", "Module_XQU", "MainModule_XQU", "LibraryModule_XQU",
  "Prolog_XQU", "Module", "VersionDecl", "MainModule", "LibraryModule",
  "ModuleDecl", "Prolog", "Setter", "Import", "Separator", "NamespaceDecl",
  "BoundarySpaceDecl", "DefaultNamespaceDecl", "OptionDecl",
  "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "VarDeclValue", "ConstructionDecl", "FunctionDecl", "FunctionParamList",
  "FunctionDeclUpdating", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "FlworExprForLetList", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "FTScoreVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "OrderByClause", "OrderSpecList",
  "OrderSpec", "OrderExpr", "OrderDirection", "EmptyHandling",
  "QuantifiedExpr", "QuantifyBindingList", "QuantifyBinding",
  "TypeswitchExpr", "CaseClauseList", "DefaultCase", "CaseClause",
  "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr", "@1", "FTContainsExpr",
  "RangeExpr", "AdditiveExpr", "MultiplicativeExpr", "UnionExpr",
  "IntersectExceptExpr", "InstanceofExpr", "TreatExpr", "CastableExpr",
  "CastExpr", "UnaryExpr", "ValueExpr", "ValidateExpr", "ExtensionExpr",
  "PragmaList", "Pragma", "PragmaContents", "PathExpr", "LeadingSlash",
  "RelativePathExpr", "StepExpr", "AxisStep", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "FilterExpr", "PredicateList",
  "PrimaryExpr", "Literal", "NumericLiteral", "VarRef", "VarName",
  "ParenthesizedExpr", "ContextItemExpr", "OrderedExpr", "UnorderedExpr",
  "FunctionCall", "FunctionCallArgumentList", "Constructor",
  "DirectConstructor", "DirElemConstructor", "DirElemConstructorQName",
  "DirAttributeList", "OptionalWhitespace", "DirAttributeValue",
  "LiteralDirAttributeValue", "QuotAttrValueContent",
  "LiteralQuotAttrValueContent", "AposAttrValueContent",
  "LiteralAposAttrValueContent", "DirElementContent",
  "DirCommentConstructor", "DirCommentContents", "DirPIConstructor",
  "DirPIContents", "ComputedConstructor", "CompDocConstructor",
  "CompElemConstructor", "CompConstructorName", "ContentExpr",
  "CompAttrConstructor", "CompTextConstructor", "CompCommentConstructor",
  "CompPIConstructor", "CompPINCName", "CompPIConstructorContent",
  "SingleType", "SingleTypeOccurrence", "TypeDeclaration", "SequenceType",
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
  "FTIgnoreOption", "RevalidationDecl", "InsertExpr", "InsertExprBegin",
  "DeleteExpr", "DeleteExprBegin", "ReplaceExpr", "RenameExpr",
  "TransformExpr", "TransformBindingList", "TransformBinding",
  "IntegerLiteral", "DecimalLiteral", "DoubleLiteral", "StringLiteral",
  "NCName", "QName", "TemplateDecl", "TemplateSequenceType",
  "TemplateParamList", "CallTemplateExpr", "ApplyTemplatesExpr",
  "TemplateArgumentList", "TemplateArgument", "FunctionRef",
  "LiteralFunctionRef", "InlineFunction", "DereferencedFunctionCall",
  "FunctionType", "FunctionTypeArguments", "ParenthesizedItemType",
  "QNameValue", "FunctionName", 0
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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   289,   290,   290,   290,   290,   290,   290,   291,   291,
     292,   293,   293,   294,   294,   294,   294,   294,   295,   296,
     296,   296,   296,   296,   296,   297,   297,   297,   298,   299,
     299,   299,   299,   300,   300,   301,   302,   302,   302,   302,
     302,   302,   303,   304,   304,   304,   304,   304,   304,   305,
     306,   306,   306,   306,   307,   308,   308,   308,   309,   309,
     309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   311,
     312,   312,   312,   313,   314,   314,   315,   316,   316,   316,
     317,   317,   318,   319,   319,   320,   320,   321,   322,   322,
     322,   322,   322,   323,   324,   325,   326,   326,   327,   328,
     328,   329,   330,   330,   330,   330,   331,   331,   332,   332,
     333,   334,   334,   334,   334,   335,   336,   336,   337,   338,
     338,   338,   339,   340,   341,   342,   342,   342,   342,   342,
     343,   344,   344,   344,   345,   346,   346,   346,   347,   347,
     348,   348,   348,   348,   348,   348,   349,   349,   350,   350,
     350,   351,   352,   352,   352,   352,   353,   353,   354,   354,
     355,   355,   356,   356,   357,   357,   357,   357,   358,   359,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   362,   362,   362,   362,
     363,   363,   364,   364,   364,   364,   365,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   367,   368,   368,
     368,   368,   369,   370,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   372,   372,   372,   372,   373,   373,   374,
     375,   376,   377,   377,   377,   377,   377,   377,   377,   377,
     377,   377,   378,   378,   378,   378,   378,   378,   378,   378,
     379,   379,   380,   381,   382,   382,   383,   383,   384,   385,
     386,   386,   387,   387,   388,   389,   389,   390,   390,   391,
     392,   393,   393,   394,   394,   394,   395,   395,   396,   396,
     397,   398,   398,   399,   399,   400,   400,   400,   400,   401,
     401,   402,   402,   403,   403,   404,   405,   405,   406,   407,
     407,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   409,   410,   410,   410,   410,   411,   411,
     411,   411,   412,   413,   413,   414,   415,   415,   416,   416,
     417,   418,   418,   419,   419,   420,   421,   421,   422,   422,
     423,   423,   424,   425,   425,   425,   426,   426,   426,   427,
     427,   428,   428,   429,   430,   431,   431,   432,   432,   433,
     433,   434,   435,   435,   436,   436,   437,   437,   438,   437,
     437,   437,   437,   437,   437,   437,   437,   437,   437,   437,
     437,   437,   437,   439,   439,   439,   440,   440,   441,   441,
     441,   442,   442,   442,   442,   442,   443,   443,   443,   444,
     444,   444,   445,   445,   446,   446,   447,   447,   448,   448,
     449,   449,   449,   450,   450,   450,   451,   451,   451,   452,
     452,   453,   453,   454,   455,   455,   456,   456,   456,   456,
     457,   458,   458,   458,   459,   459,   460,   460,   461,   461,
     462,   462,   462,   462,   462,   462,   462,   462,   463,   463,
     464,   464,   465,   465,   465,   465,   465,   466,   467,   467,
     468,   468,   469,   469,   469,   470,   471,   471,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   473,   473,
     474,   474,   474,   475,   476,   477,   477,   478,   479,   480,
     481,   481,   482,   482,   483,   483,   484,   484,   484,   485,
     485,   486,   486,   487,   487,   487,   488,   488,   489,   489,
     490,   490,   491,   491,   491,   492,   492,   492,   493,   493,
     493,   494,   494,   494,   495,   495,   495,   495,   495,   496,
     497,   497,   498,   499,   499,   500,   500,   500,   500,   500,
     500,   501,   502,   503,   503,   504,   504,   505,   506,   507,
     508,   509,   509,   510,   510,   511,   512,   512,   513,   513,
     514,   514,   515,   515,   515,   515,   516,   516,   516,   516,
     516,   517,   518,   518,   518,   518,   518,   518,   518,   518,
     518,   519,   520,   520,   520,   521,   522,   523,   523,   523,
     524,   524,   524,   525,   525,   526,   527,   528,   528,   528,
     528,   529,   529,   530,   531,   532,   533,   534,   535,   536,
     536,   537,   537,   537,   538,   538,   539,   539,   540,   540,
     541,   541,   542,   542,   543,   543,   543,   543,   543,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   546,   547,
     547,   547,   547,   548,   548,   549,   549,   549,   549,   549,
     550,   550,   551,   551,   551,   551,   552,   552,   552,   553,
     553,   554,   554,   555,   555,   556,   556,   557,   558,   558,
     559,   559,   559,   559,   559,   559,   560,   560,   560,   560,
     561,   561,   561,   562,   562,   563,   564,   564,   564,   565,
     565,   565,   565,   565,   566,   566,   567,   568,   568,   569,
     569,   570,   571,   572,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   580,   580,   580,   580,   580,   581,   581,
     582,   582,   583,   583,   584,   584,   585,   585,   586,   587,
     587,   588,   589,   590,   590,   591,   591,   591,   592,   592,
     593,   594,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   594,   594,   594,   594,   594,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     0,     2,     0,     2,     2,     2,     2,     4,     1,
       3,     2,     3,     2,     3,     1,     1,     1,     4,     1,
       2,     3,     2,     0,     2,     3,     1,     2,     3,     3,
       2,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       1,     2,     3,     3,     4,     0,     3,     2,     0,     2,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       1,     3,     3,     3,     1,     1,     3,     1,     3,     2,
       0,     2,     3,     1,     2,     0,     2,     3,     1,     2,
       3,     3,     2,     4,     5,     4,     1,     2,     5,     0,
       3,     4,     1,     3,     3,     3,     0,     3,     0,     3,
       4,     1,     2,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     1,     3,     3,     3,     3,
       2,     1,     3,     2,     3,     1,     2,     2,     3,     1,
       1,     1,     2,     1,     3,     3,     1,     1,     1,     3,
       3,     2,     1,     3,     3,     2,     0,     4,     4,     6,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     5,     7,     5,     7,
       1,     1,     2,     2,     1,     1,     2,     2,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     4,     6,     2,
       2,     6,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     3,     5,     5,     4,     3,
       3,     3,     5,     5,     5,     1,     1,     1,     1,     4,
       3,     5,     4,     0,     2,     3,     3,     3,     7,     4,
       6,     2,     1,     3,     3,     6,     8,     6,     8,     2,
       3,     0,     1,     3,     1,     3,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     2,     2,     1,     2,     2,
       1,     1,     2,     3,     1,     7,     0,     3,     0,     3,
       2,     3,     1,     6,     5,     2,     3,     4,     3,     1,
       3,     5,     1,     0,     1,     1,     0,     2,     2,     4,
       4,     3,     1,     5,     6,     2,     1,     5,     3,     4,
       7,     8,     3,     1,     3,     1,     3,     3,     0,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     4,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     4,     1,     4,     1,     4,     1,     4,     1,
       2,     2,     1,     1,     1,     1,     4,     5,     5,     3,
       4,     1,     2,     4,     1,     2,     1,     2,     2,     1,
       1,     3,     3,     1,     1,     1,     2,     2,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     1,     4,     4,
       3,     4,     3,     1,     1,     1,     1,     1,     1,     5,
      10,     1,     1,     0,     7,     7,     0,     1,     3,     3,
       3,     3,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     2,     2,     3,
       0,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     2,     3,     3,     4,     4,
       3,     1,     3,     2,     3,     2,     0,     1,     0,     2,
       2,     3,     0,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     4,     3,     3,     3,     4,     4,
       3,     4,     6,     1,     1,     4,     1,     3,     4,     6,
       7,     1,     1,     4,     1,     1,     1,     1,     1,     4,
       2,     0,     2,     2,     3,     1,     3,     1,     4,     1,
       2,     1,     3,     1,     2,     2,     2,     2,     4,     1,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     6,     6,     2,
       0,     3,     2,     4,     4,     6,     5,     3,     5,     0,
       2,     2,     3,     1,     3,     2,     2,     2,     2,     2,
       0,     1,     2,     1,     2,     1,     2,     3,     3,     4,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     6,
       6,     4,     4,     4,     2,     2,     2,     2,     2,     7,
       5,     5,     6,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     5,     7,     7,     9,     5,     7,     0,     2,
       2,     3,     3,     7,     3,     7,     1,     3,     5,     1,
       1,     3,     4,     4,     5,     3,     5,     6,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   180,   208,   224,   242,     0,     0,     0,   472,
       0,     0,     0,   540,     0,   516,     0,     0,   440,   497,
     467,     0,   726,   727,   728,   762,   763,   764,   768,   769,
     770,   771,   772,   774,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,   799,   800,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   914,   915,
     776,   729,   821,   473,   474,   822,   823,   824,   825,   826,
     827,   828,   829,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   773,   839,   840,   767,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   766,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   872,   873,
     874,   765,   875,   775,   876,   877,   878,   879,   880,   881,
     882,   883,   884,   885,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
     912,   913,   916,   917,   918,   919,   920,   921,   922,   923,
       2,   308,   310,   311,     0,   327,   330,   331,   312,   313,
     314,   320,   373,   375,   392,   395,   397,   400,   405,   408,
     411,   413,   415,   417,   419,   422,   423,   425,     0,   431,
     424,   436,   439,   443,   444,   476,     0,   449,   476,     0,
     461,   459,   469,   471,   445,   476,   478,   488,   479,   480,
     481,   484,   485,   482,   483,   504,   506,   507,   508,   505,
     545,   546,   547,   548,   549,   550,   468,   590,   582,   589,
     588,   587,   584,   586,   583,   585,   315,     0,   316,     0,
     318,   317,   319,   490,   491,   492,   489,   470,   321,   322,
     486,   749,   750,   487,   731,   761,     0,     0,     3,   176,
     177,     0,   180,   180,     4,   204,   205,     0,   208,   208,
       5,   220,   221,     0,   224,   224,     6,   242,   235,   236,
     242,     0,    11,    55,     7,     8,     9,     1,   762,   763,
     764,   768,   769,   770,   771,   772,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   792,   793,   794,   812,   914,
     915,   823,   825,   836,   837,   773,   767,   854,   860,   765,
     775,   900,   903,   909,   911,   921,   922,   493,   494,   761,
     762,   763,   769,   772,   765,   458,   511,   512,   513,     0,
     541,     0,   438,   517,     0,   421,   420,   496,     0,   452,
       0,     0,   553,     0,     0,     0,     0,     0,     0,     0,
     561,     0,     0,     0,     0,     0,   450,   451,   453,   454,
     455,   456,   462,   463,   464,   465,   466,     0,     0,     0,
     724,     0,     0,     0,   332,   334,     0,     0,   340,   342,
       0,     0,   362,     0,     0,     0,     0,     0,     0,   457,
       0,     0,     0,   568,     0,     0,   714,   715,     0,   717,
     718,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     328,   329,   325,   326,     0,     0,     0,     0,     0,     0,
       0,     0,   378,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   432,   437,
       0,     0,   446,   448,   447,   460,     0,   475,     0,   716,
       0,     0,     0,     0,   866,   873,     0,     0,     0,     0,
     189,     0,     0,   193,   194,   195,   190,   191,   260,   261,
       0,   192,   178,     0,   174,   175,   179,   866,     0,     0,
       0,     0,     0,     0,     0,     0,   206,     0,   202,   203,
     207,   866,     0,     0,     0,   252,     0,     0,   256,   257,
     259,   253,   254,     0,   255,     0,   222,   258,     0,   218,
     219,   223,   233,   234,   240,   866,     0,     0,     0,     0,
       0,     0,     0,     0,   239,     0,    13,    61,   516,     0,
     543,   542,   539,     0,   495,   604,   600,     0,   603,   615,
       0,     0,   557,   596,     0,   592,     0,     0,     0,     0,
     591,   597,     0,     0,   730,     0,     0,   560,     0,   606,
       0,   614,   616,   595,     0,     0,     0,     0,     0,     0,
       0,   568,     0,   568,     0,     0,   568,     0,     0,     0,
       0,     0,     0,     0,     0,   612,   607,     0,   611,   552,
       0,   299,     0,   304,     0,     0,     0,     0,     0,   742,
     744,   309,   323,   345,     0,     0,   324,   372,   374,   377,
     380,   381,   382,   390,   391,     0,   376,   383,   384,   385,
     386,   387,   388,   389,     0,     0,     0,   690,   690,   690,
     690,   393,   621,   625,   627,   629,   631,   633,     0,   398,
     399,   396,   401,   403,   402,   404,   406,   407,   409,   410,
       0,     0,     0,     0,   429,     0,   442,   441,     0,     0,
       0,     0,     0,     0,   500,   503,     0,   751,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
     201,     0,     0,     0,     0,   262,   181,   186,   182,   183,
     184,   188,   185,   187,     0,     0,     0,   209,   214,   210,
     211,   212,   216,   217,   213,   215,     0,     0,   302,     0,
     225,   226,   227,   228,   232,   229,   230,   231,   301,   301,
     243,   244,   245,   246,   250,   251,   247,   248,   249,    12,
       0,    57,    58,     0,   517,     0,   544,     0,   434,   433,
       0,   601,   554,   555,     0,   559,   593,   594,   599,   598,
     562,   563,     0,   605,   613,   558,   551,     0,   723,     0,
     498,   499,   336,   333,   338,     0,   341,     0,   361,   359,
     360,     0,     0,   426,     0,     0,     0,   608,   568,     0,
     300,     0,   774,   766,   775,   569,   572,   576,   578,   581,
     579,   580,     0,     0,   752,     0,     0,     0,     0,     0,
     352,   346,   349,   353,     0,   379,     0,     0,   630,   691,
     693,   695,   634,   635,   636,   637,     0,   394,     0,   620,
       0,     0,   412,   414,   416,   566,   418,   430,     0,   753,
       0,     0,     0,   713,   712,   711,     0,   501,     0,   237,
       0,   264,   265,   618,   280,     0,     0,   293,   294,   270,
     271,     0,     0,     0,     0,   275,   276,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,   283,     0,     0,
       0,   655,   656,     0,     0,   269,   648,   649,   650,   651,
     652,   653,   654,   707,   706,   708,     0,    10,    19,    43,
      29,    50,    14,    33,    15,    33,    16,    61,    17,    61,
      56,    54,    80,     0,    87,    93,     0,     0,     0,   121,
     126,   129,   133,   135,   112,   141,   145,    84,    85,    63,
      64,    61,    65,    62,    66,    90,    67,    95,    68,    70,
      69,    76,   116,    71,    61,    72,    61,    73,    61,    74,
      61,    75,    61,    77,     0,    78,    61,   516,   516,   534,
     509,   435,     0,   617,   556,   564,   725,     0,     0,   338,
       0,     0,     0,     0,     0,     0,   366,     0,   427,   428,
       0,   305,   303,     0,     0,     0,     0,   573,   575,   574,
     570,     0,     0,   720,     0,   721,     0,     0,     0,   354,
     355,   356,   347,   632,   690,   692,   694,     0,   624,     0,
       0,   639,     0,     0,     0,     0,     0,     0,   623,   622,
     626,     0,   567,   565,   477,   754,     0,     0,   502,     0,
       0,   568,     0,     0,   279,     0,     0,     0,   268,     0,
     157,   156,   762,   783,   916,   917,     0,   149,     0,   150,
     158,   166,   153,   162,     0,     0,     0,     0,   283,     0,
     282,     0,   289,   661,   662,   660,   664,   669,     0,   689,
     657,   658,   687,   659,   663,     0,     0,   688,     0,     0,
      23,    21,     0,     0,     0,    61,    30,    32,     0,    61,
      44,    48,    47,     0,     0,     0,    51,     0,     0,     0,
      60,    59,     0,     0,     0,   109,   106,     0,     0,    58,
       0,    89,     0,     0,    94,     0,    61,     0,    58,    58,
     118,   122,     0,     0,     0,     0,     0,    58,     0,     0,
       0,    58,     0,    58,    58,     0,   140,   143,     0,   146,
     147,     0,     0,     0,     0,   602,   722,     0,     0,     0,
       0,   344,   363,     0,     0,     0,   364,   365,     0,     0,
     609,   760,   571,   577,   755,   758,     0,   306,   307,     0,
       0,     0,   746,     0,   348,     0,   350,   638,   705,   647,
     645,   646,   619,     0,     0,     0,     0,     0,     0,   703,
     704,   643,   644,   628,   709,   710,   238,   241,     0,   263,
     272,   273,   266,   267,   277,   278,   274,   165,     0,     0,
       0,     0,     0,     0,   736,   738,   152,     0,     0,   161,
       0,     0,     0,     0,   732,   738,     0,   198,   196,   286,
     287,   281,   284,     0,     0,   677,     0,     0,   666,   665,
       0,     0,     0,    20,    24,    25,    26,    27,    22,    36,
      34,    61,     0,    31,     0,    46,    45,    42,    53,    52,
      49,    83,     0,     0,    61,   107,     0,    61,    81,    82,
      79,    88,    86,    98,    91,    61,    92,    96,     0,   113,
     114,   115,    61,     0,   124,   123,    61,   127,   125,   130,
     131,   128,   132,   136,   138,   139,   137,   134,   142,   144,
     516,   516,     0,   538,   537,   536,   535,   337,     0,   339,
     343,     0,     0,     0,     0,     0,   610,     0,     0,     0,
     719,   568,     0,   743,   745,   357,   358,     0,   700,   701,
     702,   640,     0,     0,   696,     0,   641,   642,     0,   292,
     290,   164,   163,     0,   171,   170,     0,   148,   740,     0,
       0,     0,   160,   159,     0,   155,   154,     0,     0,     0,
     285,   283,   670,   670,   672,     0,     0,   679,   679,     0,
     297,   295,    37,    41,    40,     0,     0,     0,    18,    28,
     103,    61,     0,   105,     0,    99,   102,     0,     0,     0,
     117,     0,   111,   120,     0,     0,   516,   335,     0,   369,
       0,   368,   371,   756,   759,     0,     0,   747,   351,   698,
     697,     0,   291,   168,     0,   741,   739,   737,     0,   734,
     738,   733,   199,   197,   288,     0,     0,     0,     0,     0,
     683,   681,   676,   678,     0,    39,    38,    35,     0,   110,
     104,   101,   100,    97,   119,   522,   528,   514,   525,   531,
     515,     0,     0,     0,   757,     0,   699,     0,   172,   173,
     167,     0,     0,   668,   667,   673,   674,     0,   682,     0,
       0,   680,   298,   296,   108,     0,     0,     0,     0,   510,
       0,   367,   748,   169,   735,   671,     0,   684,   685,   686,
     518,   524,   523,   519,   530,   529,   520,   527,   526,   521,
     533,   532,   370,   675
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   314,   315,   576,   780,   942,   943,  1288,   944,
     945,  1125,  1290,  1291,   946,   947,   948,   949,   969,   577,
     950,   783,   970,   971,   972,   973,   974,   975,  1153,   976,
     977,  1155,  1314,  1315,   978,   979,   980,  1145,  1146,  1306,
     981,   982,  1160,  1323,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,  1086,  1087,
    1088,  1089,  1090,  1091,  1259,  1092,  1383,  1497,   288,   289,
     290,   291,   506,   507,   732,   294,   295,   296,   297,   300,
     301,   302,   303,   306,   292,   308,   309,   293,   311,   542,
     508,   736,   509,   510,   511,   512,   534,   513,   514,   515,
     907,  1246,   516,   517,   518,  1100,   914,   519,   520,  1380,
     521,   555,   433,   759,   642,   643,  1141,   190,   191,   192,
     193,   194,   195,   196,   414,   415,  1009,  1011,   197,   418,
     419,   452,   453,   851,   852,   853,  1041,  1216,   198,   421,
     422,   199,  1015,  1196,  1016,   200,   201,   202,   203,   665,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   789,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   492,   235,   236,   237,   238,   357,   239,   240,
     241,   242,   243,   716,   244,   245,   246,   368,   578,   374,
    1487,  1490,  1515,  1517,  1516,  1518,  1184,   247,   371,   248,
     581,   249,   250,   251,   383,   592,   252,   253,   254,   255,
     391,   607,   874,  1063,   645,   835,  1030,   836,   837,   256,
     257,   258,   259,   260,   261,   262,   587,   263,   608,   264,
     637,   265,   610,   588,   611,  1002,   894,   681,   869,   682,
     683,   684,   685,   686,   687,  1058,   925,   926,   927,   928,
     929,  1465,  1279,   930,  1472,  1407,  1469,  1511,   931,   932,
     862,  1227,  1371,  1231,   867,   557,   266,   267,   268,   269,
     270,   271,   272,   409,   410,   273,   274,   275,   276,   603,
     277,   523,  1391,  1255,   278,   279,  1211,  1212,   280,   281,
     282,   283,   840,  1206,   841,   284,   285
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1255
static const yytype_int16 yypact[] =
{
     972,  2823,   536,   536,   536,   536,    77,    66,  6921, -1255,
    5553,   103,    22,    54,  4221,    88,  3056,  3056, -1255, -1255,
   -1255,  1425, -1255, -1255, -1255,   267,   455,   299,   346,   256,
     372,   388,   529, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
     481,   492,   523,   541,   598,   601,   616,   736,   753,   757,
     760,   423, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   561,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   640,   651,
   -1255, -1255, -1255, -1255, -1255, -1255,   696, -1255,    29, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   782,
     782, -1255,   755, -1255, -1255,   764, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   306,
   -1255, -1255, -1255, -1255, -1255,   794, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255,   280, -1255,   778, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,    76, -1255,
   -1255,     1, -1255, -1255, -1255, -1255, -1255,   738, -1255,    20,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255,   590,   588, -1255,
   -1255,   804, -1255, -1255,   728,   685, -1255, -1255, -1255, -1255,
   -1255,   675,   705, -1255,   996,   692,   112,    95,   110,   506,
   -1255,   744,   724,   770,   749, -1255, -1255, -1255,   392, -1255,
   -1255,  4221,   387, -1255, -1255, -1255,  5553, -1255, -1255,  5553,
   -1255, -1255, -1255, -1255,   869, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255,  2823, -1255,  2823,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255,   249,   745,   763, -1255, -1255,
   -1255,  3289,   761, -1255, -1255, -1255, -1255,  3522,   761, -1255,
   -1255, -1255, -1255,  3755,   761, -1255, -1255,   761, -1255, -1255,
   -1255,  3988, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
     914,   927,   929,   931,   939, -1255, -1255, -1255, -1255,   609,
   -1255,   969,   387, -1255,  6921, -1255, -1255, -1255,   300, -1255,
    5769,  2823, -1255,   966,   978,  2823,   101,   982,  6739,  2823,
   -1255,   975,  6921,  6921,   984,  2823, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255,  2823,  6921,    27,
   -1255,  2823,  2823,  6921,   995, -1255,  6921,  1029,  1006, -1255,
    6921,    65, -1255,    83,  2823,  2823,  2823,   998,   999, -1255,
    5985,   966,   142,   903,  2823,   897, -1255, -1255,  2823, -1255,
   -1255,  6921,  2823,  2823,  2823,   696,    29,  2823,   920,   921,
   -1255, -1255,   712, -1255,  3056,  3056,  3056,  3056,  3056,  3056,
    3056,  3056, -1255,  3056,  3056,  3056,  3056,  3056,  3056,  3056,
    3056,  4657,  3056,  3056,  3056,  3056,  3056,  3056,  3056,  3056,
    3056,  3056,  3056,   906,   910,   915,   916,  1658, -1255,   387,
    4221,  4221,  1046, -1255,  1046, -1255,  1030,  1046,   166, -1255,
    1891,  1019,   951,  6921,   683,   665,  1026,  1026,  1026,  1026,
   -1255,  1026,  1026, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
    1026, -1255, -1255,  1026, -1255, -1255,   158,     7,  1026,  1026,
    1026,  1026,  1026,  1026,  1026,  1026, -1255,  1026, -1255, -1255,
     210,   699,  1026,  1026,  1026, -1255,  1026,  1026, -1255, -1255,
   -1255, -1255, -1255,  1026, -1255,  1026, -1255, -1255,  1026, -1255,
   -1255,   281, -1255, -1255,   421,   514,  1026,  1026,  1026,  1026,
    1026,  1026,  1026,  1026, -1255,  1026,   814,   456,   985,   974,
   -1255, -1255, -1255,   231, -1255, -1255, -1255,   632, -1255, -1255,
     406,  2124, -1255, -1255,   438, -1255,   388,   939,  1048,  1050,
   -1255, -1255,  1051,  1053, -1255,   440,  2357, -1255,  1054, -1255,
    1055, -1255, -1255, -1255,   491,   497,  1079,   561,  2823,   499,
     500,   903,   696,   903,  6921,    29,   903,   782,  2823,  2823,
     642,   666,   501,  2823,  2823, -1255, -1255,   671, -1255, -1255,
    6921, -1255,   686, -1255,  6370,   821,   874,  1038,   949,   877,
     878, -1255, -1255, -1255,  2823,   967, -1255,   705, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255,  3056, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255,  4657,  2823,  4875,   548,   548,   548,
     548,  1020,  1089,  1091,  1031, -1255, -1255, -1255,  1075,    95,
      95,   838,   110,   110,   110,   110,   506,   506, -1255, -1255,
    6370,  6370,  6921,  6921, -1255,   544, -1255, -1255,  2823,  2590,
     318,  2823,  2823,  2823, -1255, -1255,   687, -1255,    64,  1080,
     718,   994,  1113,  6921,   726,   784,   384,   369,  6921, -1255,
   -1255,   672,  7094,   128,    89, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255,   683,   665,   304, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255,     7,   364, -1255,   721,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   901,   664,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
     399, -1255, -1255,  1071,   797,   554, -1255,   991, -1255, -1255,
    6921, -1255, -1255, -1255,   551, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255,   556, -1255, -1255, -1255, -1255,  2823, -1255,   997,
   -1255, -1255,  1008, -1255,   932,  1118, -1255,  1000, -1255, -1255,
   -1255,   980,   977, -1255,   557,   566,  6921, -1255,   903,  1127,
   -1255,  6555,  1096,  1097,  1099, -1255,   331, -1255, -1255, -1255,
   -1255, -1255,  2823,  2823, -1255,  2823,  2823,  2823,  1100,  1101,
   -1255,  1110, -1255,   785,  2823, -1255,  1105,   570, -1255,  1052,
     935, -1255, -1255, -1255, -1255, -1255,  1057, -1255,  4657,  1093,
    4657,  1015, -1255, -1255, -1255,  1129, -1255, -1255,   464, -1255,
     697,   924,   925, -1255, -1255, -1255,  2823, -1255,  1032, -1255,
     994, -1255, -1255, -1255, -1255,  6921,  1114, -1255, -1255, -1255,
   -1255,  1017,   994,   987,   989, -1255, -1255,  1123,  1035,  5106,
    6921,   778,  6921,   973,   994,  1056,  6921,  1056,   841,   872,
     854, -1255, -1255,  1037,   479, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255,  7094, -1255, -1255, -1255,
   -1255, -1255, -1255,   435, -1255,   531, -1255,   413, -1255,   376,
     264, -1255, -1255,   660, -1255, -1255,   889,   917,   890, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255,   394, -1255, -1255, -1255,   344, -1255,   899, -1255, -1255,
   -1255, -1255,   189, -1255,   393, -1255,   896, -1255,   449, -1255,
   -1255, -1255,   380, -1255,  -116, -1255,   676,    88,    88, -1255,
   -1255, -1255,  1131, -1255, -1255, -1255, -1255,  2823,  1166,   932,
    1167,  1168,  2823,  2823,  4439,    -5, -1255,  2823, -1255, -1255,
     353, -1255, -1255,  1134,  1137,  1139,  6185, -1255, -1255, -1255,
   -1255,   571,   576, -1255,   960, -1255,  1179,  1179,  2823, -1255,
   -1255,  1049,  1110, -1255,   548, -1255, -1255,  3056,  1091,  1095,
     853, -1255,  1136,  3056,   104,   104,   746,   746, -1255, -1255,
    1031,  4657, -1255, -1255, -1255, -1255,  2823,  2823, -1255,  1026,
    1026,   903,   994,   839, -1255,   994,   994,   806, -1255,  5553,
   -1255,   786,   350,  1170,  1153,  1155,   314, -1255,  5337,   575,
   -1255,  1177,   602, -1255,    60,   123,  1160,  1033,  1056,   994,
    1169,  1164,  1169, -1255, -1255, -1255, -1255, -1255,   992, -1255,
   -1255, -1255, -1255, -1255, -1255,    96,  1003, -1255,  1116,   778,
   -1255, -1255,  5106,  6370,   758,   957, -1255, -1255,  6370,   957,
   -1255, -1255, -1255,  6370,  2823,  1115, -1255,  6370,  2823,  5108,
   -1255, -1255,   970,  2823,   934,   735, -1255,  2823,  2823, -1255,
    7095, -1255,  2823,   -99, -1255,   340, -1255,  2823, -1255, -1255,
     950, -1255,  6370,  2823,  7128,  2823,  7161, -1255,  2823,  7194,
    7227, -1255,  2823, -1255, -1255,  7260, -1255, -1255,  2823, -1255,
   -1255,  7293,  1174,  1175,   495, -1255, -1255,  6921,  1087,  6921,
    2823, -1255, -1255,  6921,  1090,   136, -1255, -1255,  1068,  1183,
   -1255, -1255, -1255, -1255,  1074, -1255,   701, -1255, -1255,  2823,
    6921,   703, -1255,   708, -1255,   848,  1083, -1255,   110, -1255,
   -1255, -1255, -1255,   130,    38,  3056,  3056,   629,  1034, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,    55, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,  5553,  5553,
     106,  1037,  5106,   156, -1255,  1084,   575,  5337,  5337, -1255,
    1211,  5337,  5337,  5106, -1255,  1084,  6370, -1255, -1255, -1255,
   -1255,  1169, -1255,   994,   994, -1255,    21,  1037, -1255, -1255,
      82,  1022,   137,  1221, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255,   669,  7326, -1255,  7359, -1255,   804, -1255, -1255,   804,
   -1255, -1255,   -22,  2823, -1255, -1255,  1001,   804,   804,   264,
   -1255,   804, -1255, -1255, -1255,   378, -1255, -1255,  7392,   804,
     264,   264, -1255,  1004, -1255,   804, -1255,   804, -1255,   264,
     804, -1255, -1255,   264,   804,   264,   264, -1255,   804, -1255,
      88,    88,   103, -1255, -1255, -1255, -1255, -1255,  2823, -1255,
   -1255,  1085,  2823,  6921,  2823,  2823, -1255,  6370,  6370,  1086,
   -1255,   903,  1179, -1255, -1255, -1255, -1255,   994, -1255, -1255,
   -1255, -1255,  3056,  3056,   110,    87, -1255, -1255,  2823, -1255,
   -1255, -1255, -1255,  1199, -1255, -1255,  1212, -1255, -1255,   710,
    6370,   821, -1255, -1255,  2823,   575,   575,   314,   821,   108,
   -1255,  1056, -1255, -1255,   117,  1037,  1037, -1255, -1255,  6370,
   -1255, -1255, -1255, -1255, -1255,  6370,  2823,  7425, -1255, -1255,
   -1255,   804,  7458, -1255,  7491, -1255, -1255,  6370,  2823,  7524,
   -1255,  7557, -1255,  4874,   329,   787,    88, -1255,  6370, -1255,
    1119, -1255, -1255, -1255, -1255,  6370,  1238, -1255, -1255,   110,
     110,  3056, -1255, -1255,   145, -1255, -1255, -1255,   498, -1255,
    1084, -1255, -1255, -1255,  1169,   713,   742,  1037,  1058,   759,
   -1255, -1255,   623,   623,   120, -1255,   804, -1255,  7590, -1255,
   -1255, -1255,   804, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255,  1228,  1124,  2823, -1255,  2823,   110,  1218, -1255, -1255,
    1241,   821,  1148, -1255, -1255,   104, -1255,  1037, -1255,    82,
      82, -1255, -1255, -1255, -1255,   105,   126,   336,   367, -1255,
    2823, -1255, -1255, -1255, -1255, -1255,  1059, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255,   322, -1255, -1255, -1255, -1255, -1255, -1255,  1264, -1255,
    -378,  -824, -1255, -1255, -1255,   323, -1255, -1255, -1255, -1255,
   -1255, -1255,   116, -1255, -1255, -1255, -1255, -1255,   132, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1040,    23,
   -1255,  -991,  -263, -1255, -1255, -1255, -1255, -1255, -1255,   986,
     990,   993,  -272,  -257,  -548, -1255,   981,   983,  1005, -1255,
     976,   979,  1002, -1255,   875,  1007,  1016,    51,  1012,  -302,
    -258,  -439,  -253,  -283,  -240,  -117,  -287,  -276,  -236,  -224,
   -1255, -1255,  -202,  -191, -1255,  -914, -1255, -1255,   -47, -1255,
    -190,  -275,  -859, -1255,    31,   459,  -557,   216,    53,  -208,
   -1255, -1255, -1255,  1094, -1255,   677, -1255,   285,  1107, -1255,
     678, -1255,   856,   446,   268, -1255, -1255, -1255, -1255,  1205,
     682, -1255, -1255, -1255,   295, -1255, -1255,   857,   860, -1255,
      98, -1255,   851,   524,  -460,   519,   521, -1255, -1255, -1255,
     988, -1255, -1255, -1255, -1255,  1108, -1255, -1255, -1255,    46,
     525, -1255, -1255, -1255, -1255, -1255, -1255, -1255,    11, -1255,
   -1255, -1255,  -227, -1255,  -467, -1255,  -466,  -379, -1255,  -461,
   -1255, -1255,  -457,   625, -1255,   151, -1255,    -4, -1255,  -566,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255,  1198,   909, -1255, -1255, -1255, -1255,
   -1255, -1255,   638, -1255,  -575,  -678, -1255,   511,   317,  -504,
   -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255, -1255,   958,
   -1255,   961, -1255,   954,   913,   522,  -648,   679, -1255, -1255,
     483,   482,   293,   688, -1255, -1255,   509, -1255, -1255, -1255,
   -1255,   -37, -1229, -1255,   -41,  -486, -1255, -1255, -1255, -1255,
    -647, -1036,   143,   312, -1255, -1255, -1255, -1255, -1255, -1255,
   -1255, -1255, -1255, -1255,   762, -1255,   332, -1255,  -917,  -477,
    -350,   -46, -1254, -1087, -1255, -1255,   348,    24, -1255, -1255,
   -1255, -1255, -1255, -1255, -1255,    41,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -478
static const yytype_int16 yytable[] =
{
     359,   494,   359,  1102,   677,   678,  1112,  1265,   497,   566,
     679,  1398,   785,   443,   680,   692,   693,   694,   695,  1228,
     545,   365,   872,   873,   571,   528,   719,   548,   545,   616,
     589,   863,   864,   865,   621,   548,   573,   623,   416,   530,
     529,   626,   589,   612,   531,   543,   812,  1403,   814,   358,
     544,   817,  1095,   567,   299,   305,   310,   532,   568,   498,
     372,   499,   617,   546,   436,  1378,   317,   549,   737,   738,
     739,   569,   740,   741,   378,   549,   720,   746,   721,   550,
     612,   742,  1283,   439,   743,   915,   917,   550,   844,   747,
     748,   749,   750,   751,   752,   753,   754,  1256,   755,   479,
     627,   551,  1253,   760,   761,   762,   475,   763,   764,   551,
     842,   843,   552,   554,   765,     8,   766,   735,   627,   767,
     552,   554,   479,  1135,  1405,  1139,  1176,   770,   771,   772,
     773,   774,   775,   776,   777,   722,   778,  1277,  1276,   434,
     838,  1372,   479,  1312,   595,  1353,  1014,  1150,   472,   473,
    1313,   640,  1530,   369,     8,   842,   843,  1177,   842,   843,
    1164,  1178,  1166,   370,  1169,   640,  1170,   596,  1175,   476,
     842,   843,  1181,   842,   843,  1533,   842,   843,   904,  1195,
     533,   723,   435,  1373,  1271,   641,   547,   842,   843,   724,
     725,   726,   727,   728,   570,   373,   838,   838,  1406,  1388,
     729,   730,    22,    23,    24,  1402,  1501,   677,   678,   677,
     678,   936,  1277,   679,   628,   679,   893,   680,   359,   680,
    1420,   359,  1531,  1397,   417,  1224,   646,   366,   367,   437,
     648,  1379,   629,    81,   650,   651,   652,   493,  1224,   653,
     495,   888,  1070,   731,  1534,   815,   896,   618,   440,  1451,
     535,   537,   480,  1021,  1074,   893,   553,   558,   477,   478,
    1282,   828,   566,   916,   572,   575,  1098,   489,   528,  1354,
    1395,  1396,    81,  1525,   474,   480,  1266,   571,   545,   889,
    1278,   545,   530,   529,  1462,   548,   379,   531,   548,   573,
    1409,   500,   715,   597,   839,   480,  1512,  1263,   388,  1267,
     532,  1292,   912,   543,   501,  1294,   567,   389,   544,   380,
    1460,   568,   913,  1410,   842,   843,  1225,  1226,   381,   710,
     312,   546,   430,  1467,   569,   549,  1252,   838,   549,  1225,
    1226,   381,  1318,  1385,  1386,   443,  1194,   550,   787,   744,
     550,   386,  1027,   584,  1368,  1369,  1370,   745,  1205,   299,
     839,   839,   839,   839,  1028,   305,  1253,   426,   310,   551,
    1404,   313,   551,   788,   842,   843,   359,  1029,  1468,  1248,
     552,   554,   359,   552,   554,  1485,  1199,  1486,   427,   428,
     359,  1140,   390,  1536,   359,   359,   842,   843,   387,   711,
     712,   756,   380,   382,   918,   919,  1200,  1217,   713,   745,
     359,   677,   678,   677,   678,   359,   382,   679,   359,   679,
     809,   680,   359,   680,   392,   583,  1539,   842,   843,   490,
     819,   820,   359,   533,  1239,   491,    15,  1242,  1243,   604,
     393,  1182,  1183,   359,   590,  1096,   933,   934,   594,  1101,
    1003,   443,   605,   487,   547,  1284,   850,   570,   614,   358,
    1293,  1272,  1156,  1537,   358,  1295,   920,   358,   792,  1298,
     615,   358,   768,   688,   619,   620,  1157,  1417,   935,  1526,
     745,  1158,  1159,   443,   407,   443,  1003,   630,   631,   632,
    1422,   839,   649,  1424,  1324,  1540,  1064,  1464,  1470,  1471,
     795,  1429,   800,   535,   537,   359,  1238,   384,  1431,   443,
     396,   715,  1433,   883,   884,   885,   385,   522,   921,   922,
     838,   397,   923,   536,   553,   558,  1071,   572,   575,   556,
    1500,    11,   838,   901,    12,    13,   443,   574,  1342,  1254,
     902,   924,   443,   443,   443,   443,   443,  1264,  1268,   881,
     705,   905,   398,   805,   604,   842,   843,   906,   882,   806,
    1505,   810,   811,   823,   659,   660,   661,   662,   663,   664,
     399,   666,   667,   668,   669,   670,   671,   672,   673,  1113,
     408,   394,  1114,  1115,  1116,  1117,   903,   729,   730,   443,
     395,   999,  1316,   720,   746,   721,   443,  1218,  1399,  1313,
    1527,   443,   443,  1223,   677,   678,   877,  1478,  1000,  1006,
     679,   443,   769,  1004,   680,   443,   443,  1257,  1005,  1018,
     745,   443,  1151,  1258,  1343,  1344,   359,   400,  1019,   838,
     401,  1152,  1044,  1207,   838,  1400,  1401,  1345,  1208,   838,
    1236,  1237,   359,   838,  1261,   402,   359,  1033,  1034,  1035,
    1262,   937,   722,   938,   794,  1136,   850,  1425,  1426,  1171,
     939,   940,  1137,  1138,  1427,  1428,   941,  1172,   838,   802,
    1173,  1174,  1161,  1118,   839,   358,   688,   790,   688,  1162,
    1163,  1148,   481,   482,  1149,   791,   839,   443,  1068,  1443,
    1444,   358,  1130,  1131,  1132,   821,   824,   825,   723,  1133,
    1134,   411,   359,   359,   359,   359,   724,   725,   726,   727,
     728,   443,   412,  1120,  1121,   413,   826,  -301,  -301,   822,
    1122,  1123,  1456,  1124,   827,   359,   579,   580,  1167,  1448,
     359,   829,   886,   286,   911,  1411,  1168,   287,   857,   830,
     887,  1474,   886,   720,   746,   721,  1358,  1475,  1362,   757,
    1065,   781,   782,  1362,  1359,   829,  1363,   758,  1502,  1481,
     731,  1364,   720,  1455,   721,   403,  1503,   859,   860,   861,
    1492,   878,   838,   855,   604,  1374,  1375,  1494,   720,   908,
     721,  1309,   404,   839,  1434,  1435,   405,  1502,   839,   406,
    1320,  1321,   359,   839,  1384,  1504,  1446,   839,  1509,  1329,
    1510,   420,   722,  1333,  1507,  1335,  1336,   424,  -151,  1186,
    1126,   438,  1508,  1127,  1191,  1192,   425,  1128,  1347,  1198,
    1349,   722,   839,   429,  1351,  1285,  1286,  1287,   359,   445,
     432,   446,   447,   359,   448,   449,   441,   722,  -151,   442,
     850,  1361,   454,  1488,  1457,  1489,  -151,  -151,   723,   443,
    1459,  1461,  1463,  1368,  1369,  1370,   724,   725,   726,   727,
     728,   448,   449,   838,   838,   733,   734,   723,  1234,  1235,
     688,   444,   688,   455,  1260,   724,   725,   726,   727,   728,
    1491,   842,   843,   723,   472,   473,   729,   730,   298,   304,
     307,   724,   725,   726,   727,   728,   838,   359,   471,   757,
     891,   892,  -301,  -301,   484,  1031,  1032,   758,   897,   898,
     731,   359,   359,   483,   359,   838,   899,   900,   359,   909,
     910,   838,  1449,  1450,   729,   730,   839,  1513,   486,   731,
    1093,   997,   998,   838,   757,   496,  1039,  1040,  1119,  1103,
    1104,   485,   758,   502,   838,   731,   358,   503,  1412,  1413,
    1414,   838,  1110,  1111,  1524,  1415,  1416,   967,   968,  1179,
    1180,  1094,   287,   604,  1220,  1221,   380,   604,  1532,  1535,
    1538,  1541,  1105,  1229,  1230,  1106,  1107,  1108,  1109,   384,
     720,   388,   721,   394,  1440,     1,     2,     3,     4,     5,
       6,   430,  1350,  1240,  1241,  1244,  1245,  1498,  1499,  1144,
    1304,  1496,  1365,  1366,  1392,  1393,   689,   690,   696,   697,
     582,  1360,   698,   699,   375,   376,   359,   839,   839,   456,
     457,   458,   459,   460,   461,   706,   707,   591,   359,   875,
     875,   593,   462,  1528,  1529,   600,   606,   613,  -151,   722,
     622,  -151,  -151,  -151,  -151,   463,  -151,  -151,   624,  -151,
     839,   625,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   633,
     634,  -151,  -151,   688,  -151,  -151,   644,   647,   654,   839,
     655,  -151,  -151,   701,  -151,   839,   700,   708,   702,   703,
    -151,   359,   709,  -151,  -151,   723,   717,   839,   718,   735,
     359,   779,   786,   724,   725,   726,   727,   728,   839,   807,
    1247,   796,   784,   797,   798,   839,   799,   803,   804,  1093,
     845,   846,   847,   848,   849,   854,   464,   465,   466,   467,
     468,   469,   866,   868,   359,   359,   870,   500,   871,   890,
     359,   893,   895,  1001,  1008,   359,   757,  1010,  1012,   359,
    1007,  1014,  1017,  1093,   758,  1013,   640,   731,  1024,  1025,
    1437,  1026,  1036,  1037,  1439,  1038,  1441,  1442,  1043,  1046,
    1061,  1045,  1062,  1072,   359,  1047,  1066,  1067,  1077,  1069,
    1073,  1075,  1078,  1076,    81,  1097,  1143,   470,  1154,  1147,
    1452,  1144,  1099,  1165,  1185,  1187,  1189,  1201,  1190,   359,
    1202,   359,  1203,   918,   919,   359,  1209,  1296,  1210,  1249,
    1049,  1299,  1215,  1219,    23,  1250,  1302,  1251,  -476,  1269,
    1307,  1308,   359,  1274,  1273,  1311,  1275,  1270,  1289,  1050,
    1319,  1281,  1301,  1303,  1322,  1051,  1325,  1280,  1327,  1340,
    1341,  1330,  1348,  1352,  1355,  1334,  1356,  1357,   358,  1367,
     358,  1338,  1394,  1252,   358,  1377,  1408,  1390,  1438,  1445,
     359,   359,  1453,  1423,   359,   920,  1432,  1454,  1495,   359,
     359,   358,  1493,   359,   359,   359,  1519,  1520,   359,  1381,
    1382,  1523,  -477,  1093,  1277,  1506,  1543,  1129,  1093,  1093,
     316,  1317,  1093,  1093,  1093,  1387,  1142,  1305,   524,   538,
     559,   539,   525,   560,  1389,  1521,   526,  1522,  1022,   450,
    1052,  1053,  1054,  1055,  1188,  1056,  1057,   921,   922,   813,
    1042,   923,   451,   816,   540,   423,  1214,   561,   656,   818,
    1197,   657,  1542,   951,   562,   658,   952,   953,   954,   955,
     924,   956,   564,   563,   957,   691,   488,   958,   959,   960,
     961,   962,   963,   964,   880,  1346,   965,   966,  1436,   431,
     639,   876,  1023,   638,   598,   359,   609,   599,  1020,   359,
     359,  1048,  1060,   856,  1233,   313,  1421,  1297,   967,   968,
     952,   953,   954,   955,   858,   956,  1466,  1473,   957,  1232,
    1376,   958,   959,   960,   961,   962,   963,   964,  1059,   808,
     965,   966,   359,     0,  1222,  1213,  1447,     0,     0,     0,
       0,     0,     0,     0,   358,     0,     0,     0,     0,   313,
       0,   359,   967,   968,     0,     0,     0,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     8,     0,     9,   359,     0,     0,
       0,     0,     0,     0,     0,    10,     0,  1458,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,   377,  1476,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1482,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     704,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,   714,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,     0,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   793,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    78,    79,    80,     0,
       0,    81,    82,    83,    84,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   801,
       0,     0,     0,     0,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,    78,
      79,    80,     0,     0,    81,    82,    83,    84,     0,     0,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,   879,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,    78,    79,    80,     0,     0,    81,    82,    83,
      84,     0,     0,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,     0,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,    78,    79,    80,     0,     0,
      81,    82,    83,    84,     0,     0,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   338,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,    78,    79,
      80,     0,     0,    81,    82,    83,    84,     0,     0,    85,
     341,    87,   342,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   343,   344,   101,   345,   103,     0,   104,
     346,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   351,   169,   170,   352,   172,
     173,   174,   175,     0,   176,   353,   178,   354,   180,   181,
     182,   183,   184,   185,   186,   355,   356,   189,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    78,    79,    80,     0,     0,    81,    82,    83,    84,
       0,     0,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,     0,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     504,   133,   134,   135,   136,   137,     0,   138,   505,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,    78,    79,    80,     0,     0,    81,
      82,    83,    84,     0,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,     0,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   527,   133,   134,   135,   136,   137,     0,
     138,   505,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,    78,    79,    80,
       0,     0,    81,    82,    83,    84,     0,     0,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   541,   133,   134,   135,
     136,   137,     0,   138,   505,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   565,
     133,   134,   135,   136,   137,     0,   138,   505,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   338,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,   341,    87,   342,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   343,   344,
     101,   345,   103,     0,   104,   346,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   347,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     351,   169,   170,   352,   172,   173,   174,   175,  1193,   176,
     353,   178,   354,   180,   181,   182,   183,   184,   185,   186,
     355,   356,   189,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   831,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
     361,    27,    28,   362,    30,    31,   363,   832,    34,    35,
      36,    37,    38,    39,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   338,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   339,   340,    80,     0,     0,     0,    82,     0,     0,
       0,     0,    85,   341,    87,   342,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   343,   344,   101,   345,
     103,     0,   104,   346,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   347,   120,   121,
     122,   123,   124,   348,   833,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   364,   142,   834,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   351,   169,
     170,   352,   172,   173,   174,   175,     8,   176,   353,   178,
     354,   180,   181,   182,   183,   184,   185,   186,   355,   356,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    19,     0,   674,
       0,     0,     0,     0,     0,     0,     0,     0,   675,     0,
       0,   676,     0,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   338,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   339,
     340,    80,     0,     0,    81,    82,     0,     0,     0,     0,
      85,   341,    87,   342,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   343,   344,   101,     0,   103,     0,
     104,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   347,   120,   121,   122,   123,
     124,   348,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,     0,
     142,     0,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   351,   169,   170,   352,
     172,   173,   174,   175,     8,   176,   353,   178,   354,   180,
     181,   182,   183,   184,   185,   186,   355,   356,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,   674,     0,     0,
       0,     0,     0,     0,     0,     0,   675,     0,     0,     0,
       0,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     338,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   339,   340,    80,
       0,     0,    81,    82,     0,     0,     0,     0,    85,   341,
      87,   342,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   343,   344,   101,     0,   103,     0,   104,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   347,   120,   121,   122,   123,   124,   348,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,     0,   142,     0,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   351,   169,   170,   352,   172,   173,
     174,   175,     0,   176,   353,   178,   354,   180,   181,   182,
     183,   184,   185,   186,   355,   356,   189,     9,     0,   952,
     953,   954,   955,     0,   956,     0,  1079,   957,     0,     0,
     958,   959,   960,   961,   962,   963,   964,     0,  1080,   965,
     966,     0,     0,     0,  1081,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     0,
       0,   967,   968,     0,     0,     0,  1082,   361,    27,    28,
     362,    30,    31,   363,    33,    34,    35,    36,    37,    38,
      39,  1083,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   338,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   339,   340,
      80,     0,     0,     0,    82,    83,    84,     0,     0,    85,
     341,    87,   342,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   343,   344,   101,   345,   103,     0,   104,
     346,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   347,   120,   121,   122,   123,   124,
     348,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   364,   142,
     350,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   351,   169,   170,   352,   172,
     173,   174,   175,     0,   176,   353,   178,   354,   180,   181,
    1084,  1085,   184,   185,   186,   355,   356,   189,     9,     0,
    1300,     0,     0,   952,   953,   954,   955,  1079,   956,     0,
       0,   957,     0,     0,   958,   959,   960,   961,   962,   963,
     964,     0,     0,   965,   966,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   313,     0,     0,   967,   968,  1082,   361,    27,
      28,   362,    30,    31,   363,    33,    34,    35,    36,    37,
      38,    39,  1083,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   338,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   339,
     340,    80,     0,     0,     0,    82,    83,    84,     0,     0,
      85,   341,    87,   342,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   343,   344,   101,   345,   103,     0,
     104,   346,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   347,   120,   121,   122,   123,
     124,   348,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   364,
     142,   350,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   351,   169,   170,   352,
     172,   173,   174,   175,     9,   176,   353,   178,   354,   180,
     181,   182,   183,   184,   185,   186,   355,   356,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   360,   361,    27,    28,   362,    30,    31,
     363,    33,    34,    35,    36,    37,    38,    39,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   338,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   339,   340,    80,     0,     0,
       0,    82,    83,    84,     0,     0,    85,   341,    87,   342,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     343,   344,   101,   345,   103,     0,   104,   346,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   347,   120,   121,   122,   123,   124,   348,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   364,   142,   350,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   351,   169,   170,   352,   172,   173,   174,   175,
     585,   176,   353,   178,   354,   180,   181,   182,   183,   184,
     185,   186,   355,   356,   189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   586,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,    33,    34,    35,
      36,    37,    38,    39,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   338,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   339,   340,    80,     0,     0,     0,    82,     0,     0,
       0,     0,    85,   341,    87,   342,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   343,   344,   101,   345,
     103,     0,   104,   346,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   347,   120,   121,
     122,   123,   124,   348,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   349,   142,   350,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   351,   169,
     170,   352,   172,   173,   174,   175,   635,   176,   353,   178,
     354,   180,   181,   182,   183,   184,   185,   186,   355,   356,
     189,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   636,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,   325,    33,    34,    35,    36,    37,    38,    39,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     338,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   339,   340,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   341,
      87,   342,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   343,   344,   101,   345,   103,     0,   104,   346,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   347,   120,   121,   122,   123,   124,   348,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   349,   142,   350,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   351,   169,   170,   352,   172,   173,
     174,   175,     0,   176,   353,   178,   354,   180,   181,   182,
     183,   184,   185,   186,   355,   356,   189,   831,  1204,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   360,   361,    27,    28,   362,
      30,    31,   363,   832,    34,    35,    36,    37,    38,    39,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     338,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   339,   340,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   341,
      87,   342,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   343,   344,   101,   345,   103,     0,   104,   346,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   347,   120,   121,   122,   123,   124,   348,
     833,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   364,   142,   834,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   351,   169,   170,   352,   172,   173,
     174,   175,   831,   176,   353,   178,   354,   180,   181,   182,
     183,   184,   185,   186,   355,   356,   189,     0,     0,     0,
     360,   361,    27,    28,   362,    30,    31,   363,   832,    34,
      35,    36,    37,    38,    39,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   338,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   339,   340,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   341,    87,   342,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   343,   344,   101,
     345,   103,     0,   104,   346,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   347,   120,
     121,   122,   123,   124,   348,   833,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   364,   142,   834,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   351,
     169,   170,   352,   172,   173,   174,   175,   831,   176,   353,
     178,   354,   180,   181,   182,   183,   184,   185,   186,   355,
     356,   189,     0,     0,     0,   360,   361,    27,    28,   362,
      30,    31,   363,    33,    34,    35,    36,    37,    38,    39,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     338,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   339,   340,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   341,
      87,   342,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   343,   344,   101,   345,   103,     0,   104,   346,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   347,   120,   121,   122,   123,   124,   348,
     833,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   364,   142,   834,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   351,   169,   170,   352,   172,   173,
     174,   175,   601,   176,   353,   178,   354,   180,   181,   182,
     183,   184,   185,   186,   355,   356,   189,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,    33,    34,    35,
      36,    37,    38,    39,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   338,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   339,   340,    80,     0,     0,   602,    82,     0,     0,
       0,     0,    85,   341,    87,   342,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   343,   344,   101,   345,
     103,     0,   104,   346,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   347,   120,   121,
     122,   123,   124,   348,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   349,   142,   350,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   351,   169,
     170,   352,   172,   173,   174,   175,     0,   176,   353,   178,
     354,   180,   181,   182,   183,   184,   185,   186,   355,   356,
     189,   318,   319,   320,   321,   322,   323,   324,   325,    33,
      34,    35,    36,    37,    38,    39,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   338,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   339,   340,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   341,    87,   342,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   343,   344,
     101,   345,   103,     0,   104,   346,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   347,
     120,   121,   122,   123,   124,   348,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   349,   142,   350,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     351,   169,   170,   352,   172,   173,   174,   175,     0,   176,
     353,   178,   354,   180,   181,   182,   183,   184,   185,   186,
     355,   356,   189,    34,    35,    36,    37,    38,    39,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   338,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   339,   340,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   341,    87,
     342,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   343,   344,   101,     0,   103,     0,   104,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   347,   120,   121,   122,   123,   124,   348,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,     0,   142,     0,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   351,   169,   170,   352,   172,   173,   174,
     175,     0,   176,   353,   178,   354,   180,   181,   182,   183,
     184,   185,   186,   355,   356,   189,     0,  1310,     0,     0,
     952,   953,   954,   955,     0,   956,     0,     0,   957,     0,
       0,   958,   959,   960,   961,   962,   963,   964,     0,     0,
     965,   966,     0,     0,     0,     0,     0,     0,     0,     0,
    1326,     0,     0,   952,   953,   954,   955,     0,   956,   313,
       0,   957,   967,   968,   958,   959,   960,   961,   962,   963,
     964,     0,     0,   965,   966,     0,     0,     0,     0,     0,
       0,     0,     0,  1328,     0,     0,   952,   953,   954,   955,
       0,   956,   313,     0,   957,   967,   968,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,     0,     0,
       0,     0,     0,     0,     0,     0,  1331,     0,     0,   952,
     953,   954,   955,     0,   956,   313,     0,   957,   967,   968,
     958,   959,   960,   961,   962,   963,   964,     0,     0,   965,
     966,     0,     0,     0,     0,     0,     0,     0,     0,  1332,
       0,     0,   952,   953,   954,   955,     0,   956,   313,     0,
     957,   967,   968,   958,   959,   960,   961,   962,   963,   964,
       0,     0,   965,   966,     0,     0,     0,     0,     0,     0,
       0,     0,  1337,     0,     0,   952,   953,   954,   955,     0,
     956,   313,     0,   957,   967,   968,   958,   959,   960,   961,
     962,   963,   964,     0,     0,   965,   966,     0,     0,     0,
       0,     0,     0,     0,     0,  1339,     0,     0,   952,   953,
     954,   955,     0,   956,   313,     0,   957,   967,   968,   958,
     959,   960,   961,   962,   963,   964,     0,     0,   965,   966,
       0,     0,     0,     0,     0,     0,     0,     0,  1418,     0,
       0,   952,   953,   954,   955,     0,   956,   313,     0,   957,
     967,   968,   958,   959,   960,   961,   962,   963,   964,     0,
       0,   965,   966,     0,     0,     0,     0,     0,     0,     0,
       0,  1419,     0,     0,   952,   953,   954,   955,     0,   956,
     313,     0,   957,   967,   968,   958,   959,   960,   961,   962,
     963,   964,     0,     0,   965,   966,     0,     0,     0,     0,
       0,     0,     0,     0,  1430,     0,     0,   952,   953,   954,
     955,     0,   956,   313,     0,   957,   967,   968,   958,   959,
     960,   961,   962,   963,   964,     0,     0,   965,   966,     0,
       0,     0,     0,     0,     0,     0,     0,  1477,     0,     0,
     952,   953,   954,   955,     0,   956,   313,     0,   957,   967,
     968,   958,   959,   960,   961,   962,   963,   964,     0,     0,
     965,   966,     0,     0,     0,     0,     0,     0,     0,     0,
    1479,     0,     0,   952,   953,   954,   955,     0,   956,   313,
       0,   957,   967,   968,   958,   959,   960,   961,   962,   963,
     964,     0,     0,   965,   966,     0,     0,     0,     0,     0,
       0,     0,     0,  1480,     0,     0,   952,   953,   954,   955,
       0,   956,   313,     0,   957,   967,   968,   958,   959,   960,
     961,   962,   963,   964,     0,     0,   965,   966,     0,     0,
       0,     0,     0,     0,     0,     0,  1483,     0,     0,   952,
     953,   954,   955,     0,   956,   313,     0,   957,   967,   968,
     958,   959,   960,   961,   962,   963,   964,     0,     0,   965,
     966,     0,     0,     0,     0,     0,     0,     0,     0,  1484,
       0,     0,   952,   953,   954,   955,     0,   956,   313,     0,
     957,   967,   968,   958,   959,   960,   961,   962,   963,   964,
       0,     0,   965,   966,     0,     0,     0,     0,     0,     0,
       0,     0,  1514,     0,     0,   952,   953,   954,   955,     0,
     956,   313,     0,   957,   967,   968,   958,   959,   960,   961,
     962,   963,   964,     0,     0,   965,   966,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,     0,     0,   967,   968
};

static const yytype_int16 yycheck[] =
{
       8,   228,    10,   917,   471,   471,   923,  1094,   235,   311,
     471,  1265,   578,    35,   471,   475,   476,   477,   478,  1055,
     303,    10,   700,   701,   311,   297,   503,   303,   311,   408,
     380,   678,   679,   680,   413,   311,   311,   416,     9,   297,
     297,   420,   392,   393,   297,   303,   621,  1276,   623,     8,
     303,   626,   911,   311,     3,     4,     5,   297,   311,   267,
      14,   269,    35,   303,    63,    10,     0,   303,   507,   508,
     509,   311,   511,   512,    21,   311,    69,    70,    71,   303,
     430,   520,  1122,    63,   523,   733,   734,   311,   645,   528,
     529,   530,   531,   532,   533,   534,   535,  1088,   537,    12,
      35,   303,    42,   542,   543,   544,    11,   546,   547,   311,
      50,    51,   303,   303,   553,     9,   555,    53,    35,   558,
     311,   311,    12,   947,    42,   949,   242,   566,   567,   568,
     569,   570,   571,   572,   573,   128,   575,   116,    42,    63,
     644,   103,    12,   242,    43,     9,   151,   971,    36,    37,
     249,     9,    47,   131,     9,    50,    51,   273,    50,    51,
     984,   277,   986,   109,   988,     9,   990,    66,   992,    74,
      50,    51,   996,    50,    51,    49,    50,    51,   726,   184,
     297,   174,   106,   145,  1098,    43,   303,    50,    51,   182,
     183,   184,   185,   186,   311,   107,   700,   701,   116,    43,
     193,   194,    57,    58,    59,   184,  1460,   674,   674,   676,
     676,   759,   116,   674,   149,   676,   127,   674,   226,   676,
     242,   229,   117,  1263,   195,   121,   434,   124,   125,   228,
     438,   176,   149,   127,   442,   443,   444,   226,   121,   447,
     229,   177,   890,   236,   118,   624,   723,   220,   228,   162,
     297,   297,   165,   828,   902,   127,   303,   303,   163,   164,
    1119,   640,   564,   174,   311,   311,   914,   221,   540,   133,
    1261,  1262,   127,  1502,   162,   165,   153,   564,   561,   718,
     184,   564,   540,   540,   176,   561,    19,   540,   564,   564,
     153,    42,   500,   192,   644,   165,   176,   237,    42,   176,
     540,  1125,   174,   561,    55,  1129,   564,    51,   561,    42,
    1397,   564,   184,   176,    50,    51,   212,   213,    51,   153,
     243,   561,    42,   206,   564,   561,    12,   831,   564,   212,
     213,    51,  1156,  1250,  1251,    35,  1014,   561,   107,   181,
     564,    42,    11,    43,   214,   215,   216,   189,  1026,   298,
     700,   701,   702,   703,    23,   304,    42,    51,   307,   561,
    1277,   284,   564,   132,    50,    51,   374,    36,  1404,    19,
     561,   561,   380,   564,   564,    46,    23,    48,    72,    73,
     388,   117,   126,    47,   392,   393,    50,    51,    42,   223,
     224,   181,    42,   126,    90,    91,    43,  1044,   232,   189,
     408,   868,   868,   870,   870,   413,   126,   868,   416,   870,
     618,   868,   420,   870,    42,   374,    49,    50,    51,    32,
     628,   629,   430,   540,  1072,    38,    34,  1075,  1076,   388,
      42,   997,   998,   441,   381,   912,    72,    73,   385,   916,
     790,    35,   389,    51,   561,  1123,   654,   564,   395,   408,
    1128,  1099,   263,   117,   413,  1133,   152,   416,    52,  1137,
     407,   420,   181,   471,   411,   412,   277,  1291,   104,  1505,
     189,   282,   283,    35,    51,    35,   826,   424,   425,   426,
    1304,   831,   441,  1307,  1162,   118,    22,  1401,  1405,  1406,
      52,  1315,    52,   540,   540,   503,  1071,    42,  1322,    35,
      19,   709,  1326,   711,   712,   713,    51,   291,   204,   205,
    1014,    19,   208,   297,   561,   561,   895,   564,   564,   303,
      22,    26,  1026,   139,    29,    30,    35,   311,    33,  1086,
     146,   227,    35,    35,    35,    35,    35,  1094,  1095,   221,
     487,   172,    19,    52,   503,    50,    51,   178,   230,    52,
    1467,    52,    52,    52,   456,   457,   458,   459,   460,   461,
      19,   463,   464,   465,   466,   467,   468,   469,   470,    90,
       9,    42,    93,    94,    95,    96,   192,   193,   194,    35,
      51,    27,   242,    69,    70,    71,    35,  1047,  1266,   249,
    1507,    35,    35,  1053,  1061,  1061,    52,  1421,    44,   807,
    1061,    35,   181,    52,  1061,    35,    35,    32,    52,    52,
     189,    35,   268,    38,   119,   120,   624,    19,    52,  1123,
      19,   277,    52,    52,  1128,  1273,  1274,  1184,    52,  1133,
    1069,  1070,   640,  1137,    32,    19,   644,   845,   846,   847,
      38,   242,   128,   244,   591,   269,   854,   269,   270,   269,
     251,   252,   276,   277,   276,   277,   257,   277,  1162,   606,
     280,   281,   269,   184,  1014,   624,   674,    35,   676,   276,
     277,   277,   166,   167,   280,    43,  1026,    35,   886,  1357,
    1358,   640,   269,   270,   271,    43,   633,   634,   174,   276,
     277,    51,   700,   701,   702,   703,   182,   183,   184,   185,
     186,    35,    51,   268,   269,     9,    35,   193,   194,    43,
     275,   276,  1390,   278,    43,   723,   107,   108,   269,  1367,
     728,    35,    35,   187,   732,  1282,   277,   191,   675,    43,
      43,  1409,    35,    69,    70,    71,    35,  1415,    35,   225,
      43,   285,   286,    35,    43,    35,    43,   233,    35,  1427,
     236,    43,    69,    43,    71,    19,    43,   209,   210,   211,
    1438,   708,  1266,   665,   723,  1225,  1226,  1445,    69,   728,
      71,  1149,    19,  1123,  1340,  1341,    19,    35,  1128,    19,
    1158,  1159,   790,  1133,  1250,    43,  1361,  1137,   165,  1167,
     167,     9,   128,  1171,    35,  1173,  1174,    42,    12,  1007,
     269,    63,    43,   272,  1012,  1013,    42,   276,  1187,  1017,
    1189,   128,  1162,    19,  1193,    57,    58,    59,   826,   134,
      42,   136,   137,   831,   139,   140,   236,   128,    42,   241,
    1038,  1210,   157,    46,  1391,    48,    50,    51,   174,    35,
    1397,  1398,  1399,   214,   215,   216,   182,   183,   184,   185,
     186,   139,   140,  1357,  1358,   190,   191,   174,  1066,  1067,
     868,   133,   870,   158,  1091,   182,   183,   184,   185,   186,
    1436,    50,    51,   174,    36,    37,   193,   194,     3,     4,
       5,   182,   183,   184,   185,   186,  1390,   895,   196,   225,
     172,   173,   193,   194,   170,   842,   843,   233,   172,   173,
     236,   909,   910,   159,   912,  1409,   122,   123,   916,   237,
     238,  1415,  1372,  1373,   193,   194,  1266,  1474,   169,   236,
     909,   124,   125,  1427,   225,    56,   141,   142,   936,    88,
      89,   161,   233,   188,  1438,   236,   895,   174,   269,   270,
     271,  1445,    88,    89,  1501,   276,   277,   287,   288,   273,
     274,   910,   191,   912,   101,   102,    42,   916,  1515,  1516,
    1517,  1518,    90,   217,   218,    93,    94,    95,    96,    42,
      69,    42,    71,    42,  1353,     3,     4,     5,     6,     7,
       8,    42,  1190,   144,   145,   179,   180,  1454,  1454,   254,
     255,  1451,   144,   145,  1257,  1258,   472,   473,   479,   480,
      31,  1209,   481,   482,    16,    17,  1014,  1357,  1358,    13,
      14,    15,    16,    17,    18,   490,   491,    51,  1026,   702,
     703,    43,    26,  1509,  1510,    43,    51,    43,   242,   128,
      35,   245,   246,   247,   248,    39,   250,   251,     9,   253,
    1390,    35,   256,   257,   258,   259,   260,   261,   262,    51,
      51,   265,   266,  1061,   268,   269,   153,   160,   138,  1409,
     139,   275,   276,   153,   278,  1415,   160,    21,   153,   153,
     284,  1079,    42,   287,   288,   174,    57,  1427,   127,    53,
    1088,   267,   108,   182,   183,   184,   185,   186,  1438,    10,
    1079,    43,   107,    43,    43,  1445,    43,    43,    43,  1088,
     226,    63,   153,   226,   226,   138,   110,   111,   112,   113,
     114,   115,    92,    24,  1122,  1123,    25,    42,    87,    39,
    1128,   127,     9,   132,   116,  1133,   225,   195,    10,  1137,
     133,   151,   155,  1122,   233,   135,     9,   236,    42,    42,
    1348,    42,    42,    42,  1352,    35,  1354,  1355,    43,   214,
     135,    99,    23,    39,  1162,    98,   232,   232,    35,   127,
     143,   174,   127,   174,   127,   192,   277,   171,   269,   279,
    1378,   254,   116,   277,    43,     9,     9,    43,    10,  1187,
      43,  1189,    43,    90,    91,  1193,   226,  1134,     9,    19,
      97,  1138,   143,    98,    58,    42,  1143,    42,    21,    39,
    1147,  1148,  1210,    39,    35,  1152,   214,   174,   251,   116,
    1157,    95,   242,   279,   264,   122,  1163,   214,  1165,    45,
      45,  1168,   135,   133,   156,  1172,    43,   153,  1187,   146,
    1189,  1178,    21,    12,  1193,   201,   214,   153,   153,   153,
    1248,  1249,    43,   242,  1252,   152,   242,    35,    10,  1257,
    1258,  1210,   133,  1261,  1262,  1263,    28,   133,  1266,  1248,
    1249,    43,    21,  1252,   116,   207,   207,   945,  1257,  1258,
       6,  1155,  1261,  1262,  1263,  1252,   953,  1145,   292,   298,
     304,   298,   292,   304,  1253,  1493,   293,  1495,   829,   195,
     197,   198,   199,   200,  1009,   202,   203,   204,   205,   622,
     854,   208,   195,   625,   299,   100,  1038,   305,   452,   627,
    1015,   454,  1520,   242,   307,   455,   245,   246,   247,   248,
     227,   250,   310,   307,   253,   474,   218,   256,   257,   258,
     259,   260,   261,   262,   709,  1184,   265,   266,  1342,   141,
     431,   703,   831,   430,   386,  1353,   392,   386,   826,  1357,
    1358,   868,   870,   674,  1061,   284,  1303,   242,   287,   288,
     245,   246,   247,   248,   676,   250,  1403,  1408,   253,  1057,
    1227,   256,   257,   258,   259,   260,   261,   262,   869,   617,
     265,   266,  1390,    -1,  1052,  1037,  1362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1353,    -1,    -1,    -1,    -1,   284,
      -1,  1409,   287,   288,    -1,    -1,    -1,  1415,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1427,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1438,    -1,    -1,    -1,     9,    -1,    11,  1445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,  1394,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    43,  1416,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1428,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,   188,   189,   190,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,    -1,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    -1,   188,   189,   190,    -1,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    -1,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    -1,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
     127,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
      -1,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,   127,   128,   129,   130,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,    -1,
     188,   189,   190,    -1,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,    -1,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      -1,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,    -1,   188,   189,   190,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,    -1,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,
     129,   130,    -1,    -1,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     9,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     9,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,    -1,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,    -1,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,    -1,
     193,    -1,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     9,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,    -1,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
      -1,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,    -1,   193,    -1,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    11,    -1,   245,
     246,   247,   248,    -1,   250,    -1,    20,   253,    -1,    -1,
     256,   257,   258,   259,   260,   261,   262,    -1,    32,   265,
     266,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,    -1,
      -1,   287,   288,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,    -1,   188,   189,   190,    -1,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,    -1,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    11,    -1,
     242,    -1,    -1,   245,   246,   247,   248,    20,   250,    -1,
      -1,   253,    -1,    -1,   256,   257,   258,   259,   260,   261,
     262,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   284,    -1,    -1,   287,   288,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,   110,   111,   112,
     113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,
     123,   124,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    -1,   188,   189,   190,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    11,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
      -1,   128,   129,   130,    -1,    -1,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    -1,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
      -1,   188,   189,   190,    -1,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
      11,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,    11,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    -1,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    42,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,    -1,   188,   189,
     190,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,    42,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,   110,   111,   112,   113,   114,
     115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    -1,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,    -1,   188,   189,   190,    -1,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,    43,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,   110,
     111,   112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,
      -1,   122,   123,   124,    -1,    -1,   127,   128,    -1,    -1,
      -1,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,    -1,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,    -1,   188,   189,   190,
      -1,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,    -1,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,    -1,   188,
     189,   190,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,    -1,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,    -1,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,    -1,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,    -1,   188,   189,   190,    -1,    -1,   193,    -1,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,    -1,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   284,
      -1,   253,   287,   288,   256,   257,   258,   259,   260,   261,
     262,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   284,    -1,   253,   287,   288,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   284,    -1,   253,   287,   288,
     256,   257,   258,   259,   260,   261,   262,    -1,    -1,   265,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   284,    -1,
     253,   287,   288,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   284,    -1,   253,   287,   288,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   284,    -1,   253,   287,   288,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   284,    -1,   253,
     287,   288,   256,   257,   258,   259,   260,   261,   262,    -1,
      -1,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     284,    -1,   253,   287,   288,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   284,    -1,   253,   287,   288,   256,   257,
     258,   259,   260,   261,   262,    -1,    -1,   265,   266,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   284,    -1,   253,   287,
     288,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   284,
      -1,   253,   287,   288,   256,   257,   258,   259,   260,   261,
     262,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   284,    -1,   253,   287,   288,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   284,    -1,   253,   287,   288,
     256,   257,   258,   259,   260,   261,   262,    -1,    -1,   265,
     266,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   284,    -1,
     253,   287,   288,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   284,    -1,   253,   287,   288,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   284,    -1,    -1,   287,   288
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   290,     9,    11,
      20,    26,    29,    30,    32,    34,    36,    37,    38,    40,
      41,    42,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   110,   111,   112,   113,   114,   115,   116,   122,   123,
     124,   127,   128,   129,   130,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   188,   189,
     190,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     406,   407,   408,   409,   410,   411,   412,   417,   427,   430,
     434,   435,   436,   437,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   472,   473,   474,   475,   477,
     478,   479,   480,   481,   483,   484,   485,   496,   498,   500,
     501,   502,   505,   506,   507,   508,   518,   519,   520,   521,
     522,   523,   524,   526,   528,   530,   565,   566,   567,   568,
     569,   570,   571,   574,   575,   576,   577,   579,   583,   584,
     587,   588,   589,   590,   594,   595,   187,   191,   357,   358,
     359,   360,   373,   376,   364,   365,   366,   367,   373,   376,
     368,   369,   370,   371,   373,   376,   372,   373,   374,   375,
     376,   377,   243,   284,   291,   292,   307,     0,    60,    61,
      62,    63,    64,    65,    66,    67,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   105,   122,
     123,   134,   136,   147,   148,   150,   154,   168,   174,   192,
     194,   219,   222,   229,   231,   239,   240,   476,   594,   595,
      60,    61,    64,    67,   192,   467,   124,   125,   486,   131,
     109,   497,   458,   107,   488,   449,   449,    43,   407,    19,
      42,    51,   126,   503,    42,    51,    42,    42,    42,    51,
     126,   509,    42,    42,    42,    51,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    51,     9,   572,
     573,    51,    51,     9,   413,   414,     9,   195,   418,   419,
       9,   428,   429,   428,    42,    42,    51,    72,    73,    19,
      42,   503,    42,   401,    63,   106,    63,   228,    63,    63,
     228,   236,   241,    35,   133,   134,   136,   137,   139,   140,
     412,   417,   420,   421,   157,   158,    13,    14,    15,    16,
      17,    18,    26,    39,   110,   111,   112,   113,   114,   115,
     171,   196,    36,    37,   162,    11,    74,   163,   164,    12,
     165,   166,   167,   159,   170,   161,   169,    51,   454,   458,
      32,    38,   471,   467,   471,   467,    56,   471,   408,   408,
      42,    55,   188,   174,   181,   189,   361,   362,   379,   381,
     382,   383,   384,   386,   387,   388,   391,   392,   393,   396,
     397,   399,   406,   580,   358,   359,   360,   181,   361,   362,
     379,   381,   383,   384,   385,   397,   406,   580,   365,   366,
     367,   181,   378,   379,   381,   382,   383,   384,   386,   387,
     388,   391,   392,   397,   399,   400,   406,   564,   580,   369,
     370,   371,   374,   375,   377,   181,   378,   379,   381,   383,
     384,   385,   397,   400,   406,   580,   293,   308,   487,   107,
     108,   499,    31,   594,    43,    11,    43,   525,   532,   579,
     407,    51,   504,    43,   407,    43,    66,   192,   528,   530,
      43,    43,   127,   578,   594,   407,    51,   510,   527,   532,
     531,   533,   579,    43,   407,   407,   476,    35,   220,   407,
     407,   476,    35,   476,     9,    35,   476,    35,   149,   149,
     407,   407,   407,    51,    51,    11,    43,   529,   533,   504,
       9,    43,   403,   404,   153,   513,   408,   160,   408,   594,
     408,   408,   408,   408,   138,   139,   421,   436,   437,   439,
     439,   439,   439,   439,   439,   438,   439,   439,   439,   439,
     439,   439,   439,   439,    42,    51,    54,   473,   475,   478,
     481,   536,   538,   539,   540,   541,   542,   543,   595,   442,
     442,   441,   443,   443,   443,   443,   444,   444,   445,   445,
     160,   153,   153,   153,    52,   407,   459,   459,    21,    42,
     153,   223,   224,   232,    43,   408,   482,    57,   127,   578,
      69,    71,   128,   174,   182,   183,   184,   185,   186,   193,
     194,   236,   363,   190,   191,    53,   380,   380,   380,   380,
     380,   380,   380,   380,   181,   189,    70,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   181,   225,   233,   402,
     380,   380,   380,   380,   380,   380,   380,   380,   181,   181,
     380,   380,   380,   380,   380,   380,   380,   380,   380,   267,
     294,   285,   286,   310,   107,   488,   108,   107,   132,   455,
      35,    43,    52,    52,   407,    52,    43,    43,    43,    43,
      52,    52,   407,    43,    43,    52,    52,    10,   573,   408,
      52,    52,   513,   414,   513,   476,   419,   513,   429,   408,
     408,    43,    43,    52,   407,   407,    35,    43,   476,    35,
      43,    42,    68,   175,   194,   514,   516,   517,   518,   579,
     591,   593,    50,    51,   405,   226,    63,   153,   226,   226,
     408,   422,   423,   424,   138,   439,   536,   407,   542,   209,
     210,   211,   559,   559,   559,   559,    92,   563,    24,   537,
      25,    87,   514,   514,   511,   517,   511,    52,   407,    43,
     482,   221,   230,   408,   408,   408,    35,    43,   177,   380,
      39,   172,   173,   127,   535,     9,   578,   172,   173,   122,
     123,   139,   146,   192,   363,   172,   178,   389,   594,   237,
     238,   595,   174,   184,   395,   535,   174,   535,    90,    91,
     152,   204,   205,   208,   227,   545,   546,   547,   548,   549,
     552,   557,   558,    72,    73,   104,   363,   242,   244,   251,
     252,   257,   295,   296,   298,   299,   303,   304,   305,   306,
     309,   242,   245,   246,   247,   248,   250,   253,   256,   257,
     258,   259,   260,   261,   262,   265,   266,   287,   288,   307,
     311,   312,   313,   314,   315,   316,   318,   319,   323,   324,
     325,   329,   330,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   124,   125,    27,
      44,   132,   534,   579,    52,    52,   408,   133,   116,   415,
     195,   416,    10,   135,   151,   431,   433,   155,    52,    52,
     534,   513,   404,   516,    42,    42,    42,    11,    23,    36,
     515,   407,   407,   408,   408,   408,    42,    42,    35,   141,
     142,   425,   422,    43,    52,    99,   214,    98,   539,    97,
     116,   122,   197,   198,   199,   200,   202,   203,   544,   545,
     540,   135,    23,   512,    22,    43,   232,   232,   408,   127,
     535,   476,    39,   143,   535,   174,   174,    35,   127,    20,
      32,    38,    60,    75,   234,   235,   347,   348,   349,   350,
     351,   352,   354,   467,   594,   401,   578,   192,   535,   116,
     394,   578,   394,    88,    89,    90,    93,    94,    95,    96,
      88,    89,   577,    90,    93,    94,    95,    96,   184,   595,
     268,   269,   275,   276,   278,   300,   269,   272,   276,   300,
     269,   270,   271,   276,   277,   310,   269,   276,   277,   310,
     117,   405,   314,   277,   254,   326,   327,   279,   277,   280,
     310,   268,   277,   317,   269,   320,   263,   277,   282,   283,
     331,   269,   276,   277,   310,   277,   310,   269,   277,   310,
     310,   269,   277,   280,   281,   310,   242,   273,   277,   273,
     274,   310,   488,   488,   495,    43,   408,     9,   416,     9,
      10,   408,   408,     9,   514,   184,   432,   433,   408,    23,
      43,    43,    43,    43,    43,   514,   592,    52,    52,   226,
       9,   585,   586,   585,   423,   143,   426,   559,   443,    98,
     101,   102,   575,   443,   121,   212,   213,   560,   560,   217,
     218,   562,   562,   541,   408,   408,   380,   380,   513,   535,
     144,   145,   535,   535,   179,   180,   390,   467,    19,    19,
      42,    42,    12,    42,   405,   582,   350,    32,    38,   353,
     471,    32,    38,   237,   405,   582,   153,   176,   405,    39,
     174,   394,   535,    35,    39,   214,    42,   116,   184,   551,
     214,    95,   401,   347,   514,    57,    58,    59,   297,   251,
     301,   302,   310,   514,   310,   514,   407,   242,   514,   407,
     242,   242,   407,   279,   255,   327,   328,   407,   407,   309,
     242,   407,   242,   249,   321,   322,   242,   321,   310,   407,
     309,   309,   264,   332,   514,   407,   242,   407,   242,   309,
     407,   242,   242,   309,   407,   309,   309,   242,   407,   242,
      45,    45,    33,   119,   120,   405,   484,   476,   135,   476,
     408,   476,   133,     9,   133,   156,    43,   153,    35,    43,
     408,   476,    35,    43,    43,   144,   145,   146,   214,   215,
     216,   561,   103,   145,   443,   443,   561,   201,    10,   176,
     398,   467,   467,   355,   475,   577,   577,   348,    43,   403,
     153,   581,   351,   351,    21,   350,   350,   347,   581,   514,
     535,   535,   184,   551,   577,    42,   116,   554,   214,   153,
     176,   405,   269,   270,   271,   276,   277,   310,   242,   242,
     242,   407,   310,   242,   310,   269,   270,   276,   277,   310,
     242,   310,   242,   310,   488,   488,   486,   408,   153,   408,
     476,   408,   408,   514,   514,   153,   513,   586,   535,   443,
     443,   162,   408,    43,    35,    43,   514,   405,   407,   405,
     582,   405,   176,   405,   394,   550,   550,   206,   560,   555,
     577,   577,   553,   553,   514,   514,   407,   242,   310,   242,
     242,   514,   407,   242,   242,    46,    48,   489,    46,    48,
     490,   488,   514,   133,   514,    10,   443,   356,   473,   475,
      22,   581,    35,    43,    43,   577,   207,    35,    43,   165,
     167,   556,   176,   405,   242,   491,   493,   492,   494,    28,
     133,   408,   408,    43,   405,   551,   560,   577,   554,   554,
      47,   117,   405,    49,   118,   405,    47,   117,   405,    49,
     118,   405,   408,   207
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
        case 8:
#line 726 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                         SchemaSymbols::fgDT_STRING,
                                         SequenceType::QUESTION_MARK, MEMMGR));

    XQGlobalVariable *nameVar =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, optionalString,
                                             WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR)), MEMMGR, /*isParam*/true));
    nameVar->setVariableURI(XQillaFunction::XMLChFunctionURI);
    nameVar->setVariableLocalName(var_name);

    QP->_query->addVariable(nameVar);

    // TBD execution of a named template - jpcs
/*     ASTNode *nameVarRef1 = WRAP(@1, new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)); */
/*     ASTNode *cast = WRAP(@1, new (MEMMGR) XQNameExpression(nameVarRef1, MEMMGR)); */
/*     XQCallTemplate *call = WRAP(@1, new (MEMMGR) XQCallTemplate(cast, 0, MEMMGR)); */

    ASTNode *empty =  WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));

    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, MEMMGR));

    ASTNode *nameVarRef2 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(nameVarRef2, empty, apply, MEMMGR)));

  }
    break;

  case 9:
#line 755 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR)));

    QP->_query->addFunction(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, 0, (yyvsp[(1) - (1)].astNode), 0, MEMMGR)));

    // TBD execution of a named template - jpcs
    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, MEMMGR)));
  }
    break;

  case 10:
#line 775 "../src/parser/XQParser.y"
    {
  }
    break;

  case 12:
#line 782 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 18:
#line 798 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 19:
#line 811 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 20:
#line 815 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 21:
#line 820 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 22:
#line 827 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 23:
#line 832 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD mode - jpcs
  }
    break;

  case 24:
#line 837 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:
#line 847 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 29:
#line 860 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 30:
#line 864 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 31:
#line 871 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 32:
#line 876 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 33:
#line 884 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 34:
#line 888 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 35:
#line 896 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);

    if((yyval.argSpec)->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param instruction does not have a {}name attribute");
    }

    if((yyval.argSpec)->getType() == 0) {
      (yyval.argSpec)->setType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR)));
    }

    // TBD default parameter values - jpcs

/*     if(!$2->getChildren().empty()) { */
/*       if($$->value != 0) { */
/*         yyerror(@1, "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]"); */
/*       } */
/*       $$->value = $2; */
/*     } */
/*     else if($$->value == 0) { */
/*       yyerror(@1, "The xsl:with-param instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]"); */
/*     } */
  }
    break;

  case 36:
#line 923 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 37:
#line 927 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 38:
#line 934 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 39:
#line 940 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 40:
#line 945 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 41:
#line 950 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 42:
#line 959 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].globalVar)->isRequired()) {
      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() != 0 || !(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
        yyerror((yylsp[(1) - (3)]), "A required xsl:param declaration must be empty and must not specify a {}select attribute");
      }
    }
    else {
      (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));

      if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:param declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
      }
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  }
    break;

  case 43:
#line 983 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 44:
#line 987 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 45:
#line 994 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 46:
#line 999 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 47:
#line 1004 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 48:
#line 1009 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 49:
#line 1020 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (ASTNode*)(yyvsp[(1) - (3)].globalVar)->getVariableExpr(), (yyvsp[(2) - (3)].parenExpr), (SequenceType*)(yyvsp[(1) - (3)].globalVar)->getSequenceType()));
    (yyvsp[(1) - (3)].globalVar)->setSequenceType(0);

    if((yyvsp[(1) - (3)].globalVar)->getVariableExpr() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (3)].globalVar)->getVariableLocalName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:variable declaration does not have a {}name attribute");
    }

    QP->_query->addVariable((yyvsp[(1) - (3)].globalVar));
  }
    break;

  case 50:
#line 1038 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 51:
#line 1042 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:
#line 1049 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:
#line 1054 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:
#line 1062 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 55:
#line 1072 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 56:
#line 1076 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 57:
#line 1083 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 58:
#line 1092 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 59:
#line 1096 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 60:
#line 1101 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 61:
#line 1114 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 62:
#line 1118 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 63:
#line 1123 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 64:
#line 1128 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 65:
#line 1133 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 66:
#line 1138 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 67:
#line 1143 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 68:
#line 1148 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 69:
#line 1153 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 70:
#line 1158 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 71:
#line 1163 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 72:
#line 1168 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 73:
#line 1173 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 74:
#line 1178 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 75:
#line 1183 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 76:
#line 1188 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 77:
#line 1193 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 78:
#line 1198 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 79:
#line 1206 "../src/parser/XQParser.y"
    {
    XQTextConstructor *text = (XQTextConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = text;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(text->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
      }
      text->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(text->getValue() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:value-of instruction has neither a select attribute nor a sequence constructor [err:XTSE0870]");
    }
  }
    break;

  case 80:
#line 1224 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 81:
#line 1228 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 82:
#line 1233 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 83:
#line 1242 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 86:
#line 1251 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    XQApplyTemplates *apply = (XQApplyTemplates*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = apply;

    apply->setArguments((yyvsp[(2) - (3)].templateArgs));

    if(apply->getExpression() == 0) {
      NodeTest *nt = new (MEMMGR) NodeTest();
      nt->setTypeWildcard();
      nt->setNameWildcard();
      nt->setNamespaceWildcard();

      apply->setExpression(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::CHILD, nt, MEMMGR)));
    }
  }
    break;

  case 87:
#line 1271 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, MEMMGR));
  }
    break;

  case 88:
#line 1275 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 89:
#line 1280 "../src/parser/XQParser.y"
    {
    // TBD mode - jpcs
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 90:
#line 1288 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 91:
#line 1292 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 92:
#line 1300 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 93:
#line 1313 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(0, 0, MEMMGR));
  }
    break;

  case 94:
#line 1317 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 95:
#line 1327 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 96:
#line 1331 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 97:
#line 1339 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);

    if((yyval.templateArg)->name == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction does not have a {}name attribute");
    }

    (yyvsp[(1) - (3)].templateArg)->value = XSLT_VARIABLE_VALUE((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].templateArg)->value, (yyvsp[(2) - (3)].parenExpr), (yyvsp[(1) - (3)].templateArg)->seqType);
    (yyvsp[(1) - (3)].templateArg)->seqType = 0;

    if((yyvsp[(1) - (3)].templateArg)->value == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:with-param instruction has both a select attribute and a sequence constructor [err:XTSE0870]");
    }
  }
    break;

  case 98:
#line 1357 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 99:
#line 1361 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 100:
#line 1368 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 101:
#line 1373 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 102:
#line 1378 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 103:
#line 1386 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (4)]), (yyvsp[(3) - (4)].astNode));
  }
    break;

  case 104:
#line 1394 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), empty, MEMMGR));
  }
    break;

  case 105:
#line 1402 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 106:
#line 1416 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 107:
#line 1420 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 108:
#line 1434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), 0, MEMMGR));
  }
    break;

  case 109:
#line 1441 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 110:
#line 1445 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 111:
#line 1452 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs

    XQAnalyzeString *as = (XQAnalyzeString*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (4)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}select attribute");
    }

    if(as->getRegex() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction does not have a {}regex attribute");
    }

    if((yyvsp[(2) - (4)].astNode) == 0) {
      if((yyvsp[(3) - (4)].astNode) == 0) {
        yyerror((yylsp[(1) - (4)]), "The xsl:analyze-string instruction doesn't contain an xsl:matching-substring or xsl:non-matching-substring child [err:XTSE1130]");
      }

      as->setMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setMatch((yyvsp[(2) - (4)].astNode));
    }
    if((yyvsp[(3) - (4)].astNode) == 0) {
      as->setNonMatch(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
    else {
      as->setNonMatch((yyvsp[(3) - (4)].astNode));
    }
  }
    break;

  case 112:
#line 1487 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 113:
#line 1491 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 114:
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 115:
#line 1502 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 116:
#line 1511 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 117:
#line 1515 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 118:
#line 1522 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 119:
#line 1526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 120:
#line 1533 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (4)].letTuple)->setExpression(XSLT_VARIABLE_VALUE((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].letTuple)->getExpression(), (yyvsp[(2) - (4)].parenExpr), (yyvsp[(1) - (4)].letTuple)->seqType));
    (yyvsp[(1) - (4)].letTuple)->seqType = 0;

    if((yyvsp[(1) - (4)].letTuple)->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (4)].letTuple)->getVarName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction does not have a {}name attribute");
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQReturn((yyvsp[(1) - (4)].letTuple), (yyvsp[(4) - (4)].parenExpr), MEMMGR));
  }
    break;

  case 121:
#line 1551 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple()), 0, 0, MEMMGR));
  }
    break;

  case 122:
#line 1555 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 123:
#line 1562 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 124:
#line 1567 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 125:
#line 1575 "../src/parser/XQParser.y"
    {
    XQCommentConstructor *comment = (XQCommentConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = comment;

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(comment->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:comment instruction has both a select attribute and a sequence constructor [err:XTSE0940]");
      }
      comment->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(comment->getValue() == 0) {
      comment->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  }
    break;

  case 126:
#line 1593 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 127:
#line 1597 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 128:
#line 1605 "../src/parser/XQParser.y"
    {
    XQPIConstructor *pi = (XQPIConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = pi;

    if(pi->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(pi->getValue() != 0) {
        yyerror((yylsp[(1) - (3)]), "The xsl:processing-instruction instruction has both a select attribute and a sequence constructor [err:XTSE0880]");
      }
      pi->setValue((yyvsp[(2) - (3)].parenExpr));
    }
    else if(pi->getValue() == 0) {
      pi->setValue(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
    }
  }
    break;

  case 129:
#line 1627 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 130:
#line 1631 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 131:
#line 1638 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:
#line 1646 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 133:
#line 1655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 134:
#line 1663 "../src/parser/XQParser.y"
    {
    XQAttributeConstructor *attr = (XQAttributeConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = attr;

    if(attr->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction does not have a {}name attribute");
    }

    if(attr->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back(attr->namespaceExpr);
      args.push_back(const_cast<ASTNode*>(attr->getName()));
      FunctionQName *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FunctionQName(args, MEMMGR));
      attr->setName(name);
      attr->namespaceExpr = 0;
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(attr->getChildren() != 0 && !attr->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      attr->setChildren(children);
    }
  }
    break;

  case 135:
#line 1695 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 136:
#line 1699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 137:
#line 1706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 138:
#line 1713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 139:
#line 1722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 140:
#line 1731 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 141:
#line 1743 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 142:
#line 1747 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 143:
#line 1752 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 144:
#line 1761 "../src/parser/XQParser.y"
    {
    XQCopy *as = (XQCopy*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 145:
#line 1774 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 146:
#line 1778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 147:
#line 1783 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 148:
#line 1797 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 149:
#line 1802 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 150:
#line 1814 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 151:
#line 1818 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 152:
#line 1826 "../src/parser/XQParser.y"
    {
    // TBD buggy - jpcs
    XQPredicate *pred = 0;
    ASTNode *step = (yyvsp[(2) - (2)].astNode);
    while(step->getType() == ASTNode::PREDICATE) {
      pred = (XQPredicate*)step;
      step = (ASTNode*)pred->getPredicate();
    }

    XQPredicate *newPred = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate(step, (yyvsp[(1) - (2)].astNode), MEMMGR));

    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
    if(pred != 0) {
      pred->setPredicate(newPred);
    } else {
      (yyval.astNode) = newPred;
    }
  }
    break;

  case 153:
#line 1845 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 154:
#line 1850 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 155:
#line 1855 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 156:
#line 1863 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 157:
#line 1871 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 158:
#line 1893 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 159:
#line 1897 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 160:
#line 1907 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 161:
#line 1921 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 162:
#line 1929 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 163:
#line 1935 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 164:
#line 1941 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 165:
#line 1947 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 166:
#line 1958 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 167:
#line 1962 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 168:
#line 1973 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 169:
#line 1978 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 181:
#line 2013 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 182:
#line 2017 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 183:
#line 2021 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 184:
#line 2025 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 185:
#line 2029 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 186:
#line 2033 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 187:
#line 2039 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 188:
#line 2045 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 196:
#line 2071 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 197:
#line 2075 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 198:
#line 2079 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 199:
#line 2083 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 209:
#line 2112 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 210:
#line 2116 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 211:
#line 2120 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 212:
#line 2124 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 213:
#line 2128 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 214:
#line 2132 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 215:
#line 2138 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 216:
#line 2144 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 217:
#line 2148 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 225:
#line 2175 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 226:
#line 2179 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 227:
#line 2183 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 228:
#line 2187 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 229:
#line 2191 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 230:
#line 2195 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 231:
#line 2201 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 232:
#line 2207 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 237:
#line 2226 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 238:
#line 2231 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (6)].str), sz1_0))
      yyerror((yylsp[(2) - (6)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");

    XMLCh *encName = (yyvsp[(5) - (6)].str);
    if((*encName < chLatin_A || *encName > chLatin_Z) && (*encName < chLatin_a || *encName > chLatin_z))
      yyerror((yylsp[(5) - (6)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");

    for(++encName; *encName; ++encName) {
      if((*encName < chLatin_A || *encName > chLatin_Z) &&
         (*encName < chLatin_a || *encName > chLatin_z) &&
         (*encName < chDigit_0 || *encName > chDigit_9) &&
         *encName != chPeriod && *encName != chDash)
        yyerror((yylsp[(5) - (6)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
    }

    // TODO: store the encoding somewhere
  }
    break;

  case 241:
#line 2260 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 243:
#line 2274 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 244:
#line 2278 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 245:
#line 2282 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 246:
#line 2286 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 247:
#line 2290 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 248:
#line 2294 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 249:
#line 2300 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 250:
#line 2306 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 251:
#line 2310 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 263:
#line 2342 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 264:
#line 2350 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 265:
#line 2355 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 266:
#line 2364 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 267:
#line 2369 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 268:
#line 2378 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (4)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix == 0 || *prefix == 0)
      yyerror((yylsp[(3) - (4)]), "The option name must have a prefix [err:XPST0081]");

    const XMLCh *uri = 0;
    try {
      LOCATION((yylsp[(3) - (4)]), loc);
      uri = CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (4)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }

    if(XPath2Utils::equals(uri, XQillaFunction::XMLChFunctionURI)) {
      if(XPath2Utils::equals(qName.getName(), option_projection)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setProjection(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setProjection(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:projection. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_psvi)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
/*           CONTEXT->setDoPSVI(true); */
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
/*           CONTEXT->setDoPSVI(false); */
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:psvi. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 269:
#line 2427 "../src/parser/XQParser.y"
    {
  }
    break;

  case 270:
#line 2434 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 271:
#line 2439 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 272:
#line 2448 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 273:
#line 2453 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 274:
#line 2462 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 275:
#line 2472 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 276:
#line 2476 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 277:
#line 2484 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 278:
#line 2488 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 279:
#line 2496 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (4)]), BIT_COLLATION_SPECIFIED, "default collation", "XQST0038");
    try {
      LOCATION((yylsp[(4) - (4)]), loc);
      CONTEXT->getCollation((yyvsp[(4) - (4)].str), &loc);
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (4)]), "The specified collation does not exist [err:XQST0038]");
    }
    CONTEXT->setDefaultCollation((yyvsp[(4) - (4)].str));
  }
    break;

  case 280:
#line 2512 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 281:
#line 2521 "../src/parser/XQParser.y"
    {
    if(XPath2Utils::equals((yyvsp[(3) - (5)].str), XMLUni::fgZeroLenString))
      CONTEXT->setDefaultElementAndTypeNS((yyvsp[(4) - (5)].str));
    else if(XPath2Utils::equals((yyvsp[(4) - (5)].str), XMLUni::fgZeroLenString))
      yyerror((yylsp[(1) - (5)]), "A schema that has no target namespace cannot be bound to a non-empty prefix [err:XQST0057]");
    else {
      SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].str));
    }
    LOCATION((yylsp[(1) - (5)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].stringList), &loc);
  }
    break;

  case 282:
#line 2533 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 283:
#line 2541 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 284:
#line 2545 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 285:
#line 2550 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 286:
#line 2559 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 287:
#line 2563 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 288:
#line 2571 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 289:
#line 2581 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 290:
#line 2593 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 291:
#line 2600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 292:
#line 2604 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 293:
#line 2612 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 294:
#line 2617 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 295:
#line 2627 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 296:
#line 2631 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 297:
#line 2635 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 298:
#line 2639 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 299:
#line 2646 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 300:
#line 2650 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 301:
#line 2656 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 302:
#line 2660 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 303:
#line 2668 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 304:
#line 2673 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 305:
#line 2683 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 306:
#line 2691 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 307:
#line 2695 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 308:
#line 2703 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 309:
#line 2716 "../src/parser/XQParser.y"
    {
      ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
      if(prevExpr->getType()==ASTNode::PARENTHESIZED)
      {
        ((XQParenthesizedExpr *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
      }
      else {
        XQParenthesizedExpr *dis = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
        dis->addItem((yyvsp[(1) - (3)].astNode));
        dis->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = dis;
      }
    }
    break;

  case 323:
#line 2754 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple()));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 324:
#line 2765 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 325:
#line 2769 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 326:
#line 2773 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 328:
#line 2781 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 329:
#line 2787 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 332:
#line 2800 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 333:
#line 2807 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 335:
#line 2815 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 336:
#line 2826 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 337:
#line 2830 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 338:
#line 2840 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 339:
#line 2844 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 340:
#line 2854 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 341:
#line 2861 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 343:
#line 2869 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 344:
#line 2873 "../src/parser/XQParser.y"
    {
  }
    break;

  case 345:
#line 2880 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 346:
#line 2888 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 347:
#line 2893 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 348:
#line 2901 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 350:
#line 2911 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 351:
#line 2918 "../src/parser/XQParser.y"
    {
    try {
      LOCATION((yylsp[(4) - (5)]), loc);
      Collation *collation = CONTEXT->getCollation((yyvsp[(5) - (5)].str), &loc);

      (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (5)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (5)].orderByModifier) | (yyvsp[(3) - (5)].orderByModifier), collation, MEMMGR));
    }
    catch(ContextException&) {
      yyerror((yylsp[(4) - (5)]), "The specified collation does not exist [err:XQST0076]");
    }
  }
    break;

  case 352:
#line 2933 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING),
                   SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                                SchemaSymbols::fgDT_STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 353:
#line 2949 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 354:
#line 2953 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 355:
#line 2957 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 356:
#line 2964 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 357:
#line 2973 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 358:
#line 2977 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 359:
#line 2986 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 360:
#line 2994 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 361:
#line 3005 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 363:
#line 3013 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 364:
#line 3024 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 365:
#line 3031 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 366:
#line 3036 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 367:
#line 3044 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 368:
#line 3048 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 369:
#line 3056 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 370:
#line 3060 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 371:
#line 3068 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 372:
#line 3076 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 374:
#line 3090 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 376:
#line 3109 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 377:
#line 3113 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 378:
#line 3116 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 379:
#line 3117 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 380:
#line 3121 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 381:
#line 3125 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 382:
#line 3129 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 383:
#line 3133 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 384:
#line 3137 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 385:
#line 3141 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 386:
#line 3145 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 387:
#line 3149 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 388:
#line 3153 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 389:
#line 3157 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 390:
#line 3161 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 391:
#line 3165 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 393:
#line 3174 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 394:
#line 3178 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 396:
#line 3187 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 398:
#line 3196 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 399:
#line 3200 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 401:
#line 3209 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 402:
#line 3213 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 403:
#line 3217 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 404:
#line 3221 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 406:
#line 3230 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 407:
#line 3234 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 409:
#line 3243 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 410:
#line 3247 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 412:
#line 3256 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 414:
#line 3265 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 416:
#line 3275 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 418:
#line 3284 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 420:
#line 3293 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 421:
#line 3299 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 426:
#line 3320 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 427:
#line 3324 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 428:
#line 3328 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 429:
#line 3336 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 430:
#line 3343 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 433:
#line 3356 "../src/parser/XQParser.y"
    {
        // validate the QName
        QualifiedName qName((yyvsp[(3) - (4)].str));
        const XMLCh* prefix=qName.getPrefix();
        if(prefix == NULL || *prefix == 0)
          yyerror((yylsp[(3) - (4)]), "The pragma name must have a prefix [err:XPST0081]");

        try {
          LOCATION((yylsp[(3) - (4)]), loc);
          CONTEXT->getUriBoundToPrefix(prefix, &loc);
        }
        catch(NamespaceLookupException&) {
          yyerror((yylsp[(3) - (4)]), "The pragma name is using an undefined namespace prefix [err:XPST0081]");
        }
      }
    break;

  case 435:
#line 3377 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 437:
#line 3386 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 438:
#line 3392 "../src/parser/XQParser.y"
    {
    XQNav *nav = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 440:
#line 3417 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 441:
#line 3431 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 442:
#line 3437 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep((yyvsp[(3) - (3)].astNode));

    (yyval.astNode) = nav;
  }
    break;

  case 446:
#line 3458 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 447:
#line 3462 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 448:
#line 3471 "../src/parser/XQParser.y"
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

  case 450:
#line 3494 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 451:
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 452:
#line 3502 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 453:
#line 3506 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 454:
#line 3510 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 455:
#line 3514 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 456:
#line 3518 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 457:
#line 3522 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 458:
#line 3530 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 459:
#line 3538 "../src/parser/XQParser.y"
    {
    XQStep::Axis axis = XQStep::CHILD;
    SequenceType::ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
      axis = XQStep::ATTRIBUTE;
    }
    else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
  }
    break;

  case 460:
#line 3555 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 462:
#line 3572 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 463:
#line 3576 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 464:
#line 3580 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 465:
#line 3584 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 466:
#line 3588 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 467:
#line 3596 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 468:
#line 3608 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 470:
#line 3618 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 472:
#line 3630 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 473:
#line 3637 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 474:
#line 3644 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 475:
#line 3655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 476:
#line 3664 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 477:
#line 3668 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 493:
#line 3699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 495:
#line 3710 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 496:
#line 3714 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 497:
#line 3722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 498:
#line 3730 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 499:
#line 3740 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 500:
#line 3750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 501:
#line 3754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 502:
#line 3761 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 503:
#line 3766 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 504:
#line 3775 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 505:
#line 3779 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 509:
#line 3792 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 510:
#line 3798 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 513:
#line 3811 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 514:
#line 3815 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 515:
#line 3824 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 518:
#line 3840 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 519:
#line 3844 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 520:
#line 3851 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 521:
#line 3855 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 522:
#line 3865 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 523:
#line 3869 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 524:
#line 3874 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 525:
#line 3887 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 526:
#line 3891 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 527:
#line 3895 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 528:
#line 3911 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 529:
#line 3915 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 530:
#line 3920 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 531:
#line 3933 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 532:
#line 3937 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 533:
#line 3941 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 534:
#line 3961 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 535:
#line 3965 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 536:
#line 3970 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 537:
#line 3975 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 538:
#line 3985 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
        AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
    }
  }
    break;

  case 539:
#line 4001 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING),
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 540:
#line 4015 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 542:
#line 4024 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(3) - (3)].str), AnyAtomicType::STRING),
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(
                    WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING),
                  MEMMGR)), 
                  value, MEMMGR));
  }
    break;

  case 544:
#line 4046 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 551:
#line 4069 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 552:
#line 4077 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 553:
#line 4085 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 554:
#line 4089 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 555:
#line 4097 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 556:
#line 4101 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 557:
#line 4110 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 558:
#line 4118 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 559:
#line 4126 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 560:
#line 4134 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 561:
#line 4141 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING);

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(ic, MEMMGR));
  }
    break;

  case 562:
#line 4154 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 563:
#line 4161 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 564:
#line 4165 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 565:
#line 4173 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 566:
#line 4183 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 567:
#line 4187 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 568:
#line 4195 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 569:
#line 4199 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 570:
#line 4209 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 571:
#line 4216 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 572:
#line 4225 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 573:
#line 4227 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 574:
#line 4229 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 575:
#line 4231 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 576:
#line 4237 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 577:
#line 4241 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 591:
#line 4276 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 592:
#line 4284 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 593:
#line 4288 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 594:
#line 4293 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 595:
#line 4302 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 596:
#line 4310 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 597:
#line 4318 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 598:
#line 4322 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 599:
#line 4326 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 600:
#line 4334 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 601:
#line 4338 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 602:
#line 4342 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 604:
#line 4351 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 605:
#line 4359 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 607:
#line 4372 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 608:
#line 4376 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 609:
#line 4380 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 610:
#line 4384 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 612:
#line 4394 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 613:
#line 4402 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 618:
#line 4422 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 619:
#line 4434 "../src/parser/XQParser.y"
    {
    // TBD FTSelectionOptions and weight
    (yyval.ftselection) = (yyvsp[(1) - (4)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (4)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (4)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
/*     delete $2; */
  }
    break;

  case 620:
#line 4446 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);

    VectorOfFTOptions *options = (yyvsp[(2) - (2)].ftoptionlist);
    for(VectorOfFTOptions::iterator i = options->begin();
        i != options->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
/*     delete options; */
  }
    break;

  case 621:
#line 4461 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 622:
#line 4465 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 623:
#line 4469 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 624:
#line 4479 "../src/parser/XQParser.y"
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

  case 626:
#line 4495 "../src/parser/XQParser.y"
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

  case 628:
#line 4511 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 630:
#line 4520 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 632:
#line 4529 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 634:
#line 4538 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 635:
#line 4542 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 636:
#line 4546 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 637:
#line 4550 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 638:
#line 4554 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 639:
#line 4568 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 640:
#line 4572 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 641:
#line 4576 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 642:
#line 4580 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 643:
#line 4585 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 644:
#line 4589 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 645:
#line 4593 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 646:
#line 4597 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 647:
#line 4601 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 655:
#line 4629 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 656:
#line 4633 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 657:
#line 4637 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 658:
#line 4641 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 659:
#line 4652 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 660:
#line 4656 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 661:
#line 4660 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 662:
#line 4664 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 663:
#line 4672 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 664:
#line 4676 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 665:
#line 4686 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 666:
#line 4690 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 667:
#line 4694 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 668:
#line 4698 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 669:
#line 4702 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 670:
#line 4709 "../src/parser/XQParser.y"
    {
  }
    break;

  case 671:
#line 4712 "../src/parser/XQParser.y"
    {
  }
    break;

  case 672:
#line 4719 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 673:
#line 4723 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 674:
#line 4727 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 675:
#line 4731 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 676:
#line 4741 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 677:
#line 4745 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 678:
#line 4749 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 679:
#line 4756 "../src/parser/XQParser.y"
    {
  }
    break;

  case 680:
#line 4759 "../src/parser/XQParser.y"
    {
  }
    break;

  case 681:
#line 4767 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 682:
#line 4771 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 683:
#line 4778 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 684:
#line 4782 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 685:
#line 4790 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 686:
#line 4794 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 687:
#line 4802 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 688:
#line 4810 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 689:
#line 4814 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 690:
#line 4822 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 691:
#line 4826 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 692:
#line 4830 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 693:
#line 4834 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 694:
#line 4838 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 695:
#line 4842 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 696:
#line 4853 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 697:
#line 4859 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 698:
#line 4865 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 699:
#line 4871 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 700:
#line 4881 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 701:
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 702:
#line 4889 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 703:
#line 4897 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 704:
#line 4901 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 705:
#line 4909 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 706:
#line 4917 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 707:
#line 4922 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 708:
#line 4927 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 709:
#line 4939 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 710:
#line 4943 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 711:
#line 4947 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 712:
#line 4951 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 713:
#line 4955 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 716:
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 719:
#line 4977 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 720:
#line 4981 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 721:
#line 4991 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 722:
#line 4999 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 723:
#line 5006 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 724:
#line 5011 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 725:
#line 5019 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 726:
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 727:
#line 5041 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 728:
#line 5054 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 729:
#line 5068 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 730:
#line 5080 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 731:
#line 5089 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 732:
#line 5101 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 733:
#line 5105 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 734:
#line 5109 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].itemList), 0, (yyvsp[(7) - (7)].astNode), 0, MEMMGR));
  }
    break;

  case 735:
#line 5113 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].itemList), (yyvsp[(7) - (9)].argSpecs), (yyvsp[(9) - (9)].astNode), (yyvsp[(8) - (9)].sequenceType), MEMMGR));
  }
    break;

  case 736:
#line 5117 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(4) - (5)].itemList), 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 737:
#line 5121 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(4) - (7)].itemList), (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 738:
#line 5128 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 739:
#line 5132 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 740:
#line 5140 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 741:
#line 5144 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 742:
#line 5153 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 743:
#line 5157 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 744:
#line 5166 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, MEMMGR));
  }
    break;

  case 745:
#line 5170 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 746:
#line 5178 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 747:
#line 5183 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 748:
#line 5193 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 751:
#line 5210 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 752:
#line 5218 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 753:
#line 5227 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 754:
#line 5232 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].itemList), MEMMGR));
  }
    break;

  case 755:
#line 5241 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 756:
#line 5245 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 757:
#line 5249 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 758:
#line 5256 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 759:
#line 5261 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 760:
#line 5270 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 10080 "../src/parser/XQParser.cpp"
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


#line 5304 "../src/parser/XQParser.y"


}  // namespace XQParser


