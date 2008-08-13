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
     _INTEGER_LITERAL_ = 311,
     _DECIMAL_LITERAL_ = 312,
     _DOUBLE_LITERAL_ = 313,
     _ATTRIBUTE_ = 314,
     _COMMENT_ = 315,
     _DOCUMENT_NODE_ = 316,
     _NODE_ = 317,
     _PROCESSING_INSTRUCTION_ = 318,
     _SCHEMA_ATTRIBUTE_ = 319,
     _SCHEMA_ELEMENT_ = 320,
     _TEXT_ = 321,
     _EMPTY_SEQUENCE_ = 322,
     _BOUNDARY_SPACE_ = 323,
     _FT_OPTION_ = 324,
     _BASE_URI_ = 325,
     _LAX_ = 326,
     _STRICT_ = 327,
     _IDIV_ = 328,
     _CHILD_ = 329,
     _DESCENDANT_ = 330,
     _SELF_ = 331,
     _DESCENDANT_OR_SELF_ = 332,
     _FOLLOWING_SIBLING_ = 333,
     _FOLLOWING_ = 334,
     _PARENT_ = 335,
     _ANCESTOR_ = 336,
     _PRECEDING_SIBLING_ = 337,
     _PRECEDING_ = 338,
     _ANCESTOR_OR_SELF_ = 339,
     _DOCUMENT_ = 340,
     _NOT_ = 341,
     _SENSITIVE_ = 342,
     _INSENSITIVE_ = 343,
     _DIACRITICS_ = 344,
     _WITHOUT_ = 345,
     _WITHOUT_C_ = 346,
     _STEMMING_ = 347,
     _THESAURUS_ = 348,
     _STOP_ = 349,
     _WILDCARDS_ = 350,
     _ENTIRE_ = 351,
     _CONTENT_ = 352,
     _WORD_ = 353,
     _TYPE_ = 354,
     _START_ = 355,
     _END_ = 356,
     _MOST_ = 357,
     _SKIP_ = 358,
     _COPY_ = 359,
     _VALUE_ = 360,
     _WHITESPACE_ = 361,
     _PI_CONTENT_ = 362,
     _XML_COMMENT_CONTENT_ = 363,
     _EQ_ = 364,
     _NE_ = 365,
     _LT_ = 366,
     _LE_ = 367,
     _GT_ = 368,
     _GE_ = 369,
     _AT_ = 370,
     _QUOT_ATTR_CONTENT_ = 371,
     _APOS_ATTR_CONTENT_ = 372,
     _WHITESPACE_ELEMENT_CONTENT_ = 373,
     _ELEMENT_CONTENT_ = 374,
     _AT_LM_ = 375,
     _ORDERED_ = 376,
     _UNORDERED_ = 377,
     _QNAME_ = 378,
     _XMLNS_QNAME_ = 379,
     _CONSTR_QNAME_ = 380,
     _STRING_LITERAL_ = 381,
     _VARIABLE_ = 382,
     _NCNAME_COLON_STAR_ = 383,
     _STAR_COLON_NCNAME_ = 384,
     _PI_TARGET_ = 385,
     _PRAGMA_CONTENT_ = 386,
     _RETURN_ = 387,
     _FOR_ = 388,
     _IN_ = 389,
     _LET_ = 390,
     _WHERE_ = 391,
     _BY_ = 392,
     _ORDER_ = 393,
     _STABLE_ = 394,
     _ASCENDING_ = 395,
     _DESCENDING_ = 396,
     _EMPTY_ = 397,
     _GREATEST_ = 398,
     _LEAST_ = 399,
     _COLLATION_ = 400,
     _SOME_ = 401,
     _EVERY_ = 402,
     _SATISFIES_ = 403,
     _TYPESWITCH_ = 404,
     _CASE_ = 405,
     _CASE_S_ = 406,
     _AS_ = 407,
     _IF_ = 408,
     _THEN_ = 409,
     _ELSE_ = 410,
     _OR_ = 411,
     _AND_ = 412,
     _INSTANCE_ = 413,
     _OF_ = 414,
     _CASTABLE_ = 415,
     _TO_ = 416,
     _DIV_ = 417,
     _MOD_ = 418,
     _UNION_ = 419,
     _INTERSECT_ = 420,
     _EXCEPT_ = 421,
     _VALIDATE_ = 422,
     _CAST_ = 423,
     _TREAT_ = 424,
     _IS_ = 425,
     _PRESERVE_ = 426,
     _STRIP_ = 427,
     _NAMESPACE_ = 428,
     _ITEM_ = 429,
     _EXTERNAL_ = 430,
     _ENCODING_ = 431,
     _NO_PRESERVE_ = 432,
     _INHERIT_ = 433,
     _NO_INHERIT_ = 434,
     _DECLARE_ = 435,
     _CONSTRUCTION_ = 436,
     _ORDERING_ = 437,
     _DEFAULT_ = 438,
     _COPY_NAMESPACES_ = 439,
     _OPTION_ = 440,
     _XQUERY_ = 441,
     _VERSION_ = 442,
     _IMPORT_ = 443,
     _SCHEMA_ = 444,
     _MODULE_ = 445,
     _ELEMENT_ = 446,
     _FUNCTION_ = 447,
     _FUNCTION_EXT_ = 448,
     _SCORE_ = 449,
     _FTCONTAINS_ = 450,
     _WEIGHT_ = 451,
     _WINDOW_ = 452,
     _DISTANCE_ = 453,
     _OCCURS_ = 454,
     _TIMES_ = 455,
     _SAME_ = 456,
     _DIFFERENT_ = 457,
     _LOWERCASE_ = 458,
     _UPPERCASE_ = 459,
     _RELATIONSHIP_ = 460,
     _LEVELS_ = 461,
     _LANGUAGE_ = 462,
     _ANY_ = 463,
     _ALL_ = 464,
     _PHRASE_ = 465,
     _EXACTLY_ = 466,
     _FROM_ = 467,
     _WORDS_ = 468,
     _SENTENCES_ = 469,
     _PARAGRAPHS_ = 470,
     _SENTENCE_ = 471,
     _PARAGRAPH_ = 472,
     _REPLACE_ = 473,
     _MODIFY_ = 474,
     _FIRST_ = 475,
     _INSERT_ = 476,
     _BEFORE_ = 477,
     _AFTER_ = 478,
     _REVALIDATION_ = 479,
     _WITH_ = 480,
     _WITH_FT_ = 481,
     _NODES_ = 482,
     _RENAME_ = 483,
     _LAST_ = 484,
     _DELETE_ = 485,
     _INTO_ = 486,
     _UPDATING_ = 487,
     _ID_ = 488,
     _KEY_ = 489,
     _TEMPLATE_ = 490,
     _MATCHES_ = 491,
     _NAME_ = 492,
     _CALL_ = 493,
     _APPLY_ = 494,
     _TEMPLATES_ = 495,
     _MODE_ = 496,
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
     _XSLT_WS_TEXT_NODE_ = 543,
     _HASH_DEFAULT_ = 544,
     _HASH_ALL_ = 545,
     _HASH_CURRENT_ = 546
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
#define _INTEGER_LITERAL_ 311
#define _DECIMAL_LITERAL_ 312
#define _DOUBLE_LITERAL_ 313
#define _ATTRIBUTE_ 314
#define _COMMENT_ 315
#define _DOCUMENT_NODE_ 316
#define _NODE_ 317
#define _PROCESSING_INSTRUCTION_ 318
#define _SCHEMA_ATTRIBUTE_ 319
#define _SCHEMA_ELEMENT_ 320
#define _TEXT_ 321
#define _EMPTY_SEQUENCE_ 322
#define _BOUNDARY_SPACE_ 323
#define _FT_OPTION_ 324
#define _BASE_URI_ 325
#define _LAX_ 326
#define _STRICT_ 327
#define _IDIV_ 328
#define _CHILD_ 329
#define _DESCENDANT_ 330
#define _SELF_ 331
#define _DESCENDANT_OR_SELF_ 332
#define _FOLLOWING_SIBLING_ 333
#define _FOLLOWING_ 334
#define _PARENT_ 335
#define _ANCESTOR_ 336
#define _PRECEDING_SIBLING_ 337
#define _PRECEDING_ 338
#define _ANCESTOR_OR_SELF_ 339
#define _DOCUMENT_ 340
#define _NOT_ 341
#define _SENSITIVE_ 342
#define _INSENSITIVE_ 343
#define _DIACRITICS_ 344
#define _WITHOUT_ 345
#define _WITHOUT_C_ 346
#define _STEMMING_ 347
#define _THESAURUS_ 348
#define _STOP_ 349
#define _WILDCARDS_ 350
#define _ENTIRE_ 351
#define _CONTENT_ 352
#define _WORD_ 353
#define _TYPE_ 354
#define _START_ 355
#define _END_ 356
#define _MOST_ 357
#define _SKIP_ 358
#define _COPY_ 359
#define _VALUE_ 360
#define _WHITESPACE_ 361
#define _PI_CONTENT_ 362
#define _XML_COMMENT_CONTENT_ 363
#define _EQ_ 364
#define _NE_ 365
#define _LT_ 366
#define _LE_ 367
#define _GT_ 368
#define _GE_ 369
#define _AT_ 370
#define _QUOT_ATTR_CONTENT_ 371
#define _APOS_ATTR_CONTENT_ 372
#define _WHITESPACE_ELEMENT_CONTENT_ 373
#define _ELEMENT_CONTENT_ 374
#define _AT_LM_ 375
#define _ORDERED_ 376
#define _UNORDERED_ 377
#define _QNAME_ 378
#define _XMLNS_QNAME_ 379
#define _CONSTR_QNAME_ 380
#define _STRING_LITERAL_ 381
#define _VARIABLE_ 382
#define _NCNAME_COLON_STAR_ 383
#define _STAR_COLON_NCNAME_ 384
#define _PI_TARGET_ 385
#define _PRAGMA_CONTENT_ 386
#define _RETURN_ 387
#define _FOR_ 388
#define _IN_ 389
#define _LET_ 390
#define _WHERE_ 391
#define _BY_ 392
#define _ORDER_ 393
#define _STABLE_ 394
#define _ASCENDING_ 395
#define _DESCENDING_ 396
#define _EMPTY_ 397
#define _GREATEST_ 398
#define _LEAST_ 399
#define _COLLATION_ 400
#define _SOME_ 401
#define _EVERY_ 402
#define _SATISFIES_ 403
#define _TYPESWITCH_ 404
#define _CASE_ 405
#define _CASE_S_ 406
#define _AS_ 407
#define _IF_ 408
#define _THEN_ 409
#define _ELSE_ 410
#define _OR_ 411
#define _AND_ 412
#define _INSTANCE_ 413
#define _OF_ 414
#define _CASTABLE_ 415
#define _TO_ 416
#define _DIV_ 417
#define _MOD_ 418
#define _UNION_ 419
#define _INTERSECT_ 420
#define _EXCEPT_ 421
#define _VALIDATE_ 422
#define _CAST_ 423
#define _TREAT_ 424
#define _IS_ 425
#define _PRESERVE_ 426
#define _STRIP_ 427
#define _NAMESPACE_ 428
#define _ITEM_ 429
#define _EXTERNAL_ 430
#define _ENCODING_ 431
#define _NO_PRESERVE_ 432
#define _INHERIT_ 433
#define _NO_INHERIT_ 434
#define _DECLARE_ 435
#define _CONSTRUCTION_ 436
#define _ORDERING_ 437
#define _DEFAULT_ 438
#define _COPY_NAMESPACES_ 439
#define _OPTION_ 440
#define _XQUERY_ 441
#define _VERSION_ 442
#define _IMPORT_ 443
#define _SCHEMA_ 444
#define _MODULE_ 445
#define _ELEMENT_ 446
#define _FUNCTION_ 447
#define _FUNCTION_EXT_ 448
#define _SCORE_ 449
#define _FTCONTAINS_ 450
#define _WEIGHT_ 451
#define _WINDOW_ 452
#define _DISTANCE_ 453
#define _OCCURS_ 454
#define _TIMES_ 455
#define _SAME_ 456
#define _DIFFERENT_ 457
#define _LOWERCASE_ 458
#define _UPPERCASE_ 459
#define _RELATIONSHIP_ 460
#define _LEVELS_ 461
#define _LANGUAGE_ 462
#define _ANY_ 463
#define _ALL_ 464
#define _PHRASE_ 465
#define _EXACTLY_ 466
#define _FROM_ 467
#define _WORDS_ 468
#define _SENTENCES_ 469
#define _PARAGRAPHS_ 470
#define _SENTENCE_ 471
#define _PARAGRAPH_ 472
#define _REPLACE_ 473
#define _MODIFY_ 474
#define _FIRST_ 475
#define _INSERT_ 476
#define _BEFORE_ 477
#define _AFTER_ 478
#define _REVALIDATION_ 479
#define _WITH_ 480
#define _WITH_FT_ 481
#define _NODES_ 482
#define _RENAME_ 483
#define _LAST_ 484
#define _DELETE_ 485
#define _INTO_ 486
#define _UPDATING_ 487
#define _ID_ 488
#define _KEY_ 489
#define _TEMPLATE_ 490
#define _MATCHES_ 491
#define _NAME_ 492
#define _CALL_ 493
#define _APPLY_ 494
#define _TEMPLATES_ 495
#define _MODE_ 496
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
#define _HASH_DEFAULT_ 544
#define _HASH_ALL_ 545
#define _HASH_CURRENT_ 546




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
#include <xqilla/functions/FunctionId.hpp>
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
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh var_name[] = { 'n', 'a', 'm', 'e', 0 };

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
#line 1012 "../src/parser/XQParser.cpp"

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
#define YYFINAL  318
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  292
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  313
/* YYNRULES -- Number of rules.  */
#define YYNRULES  943
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1571

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   546

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
     285,   286,   287,   288,   289,   290,   291
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      25,    30,    31,    34,    35,    38,    41,    44,    47,    52,
      54,    58,    61,    65,    69,    73,    74,    77,    80,    83,
      85,    87,    89,    94,    96,    99,   103,   106,   107,   110,
     114,   116,   119,   123,   127,   130,   133,   137,   139,   142,
     146,   150,   153,   156,   160,   162,   165,   169,   173,   178,
     179,   183,   186,   187,   190,   193,   194,   197,   200,   203,
     206,   209,   212,   215,   218,   221,   224,   227,   230,   233,
     236,   239,   242,   245,   249,   251,   255,   259,   263,   265,
     267,   271,   273,   277,   281,   283,   285,   287,   288,   291,
     295,   297,   300,   301,   304,   308,   310,   313,   317,   321,
     324,   329,   335,   340,   342,   345,   351,   352,   356,   361,
     363,   367,   371,   375,   376,   380,   381,   385,   390,   392,
     395,   399,   403,   407,   409,   413,   417,   419,   423,   427,
     431,   433,   437,   439,   443,   447,   451,   455,   458,   460,
     464,   467,   471,   473,   476,   479,   483,   485,   487,   489,
     491,   493,   495,   500,   507,   509,   511,   513,   515,   517,
     520,   524,   528,   532,   536,   539,   541,   545,   549,   552,
     553,   558,   561,   564,   566,   568,   571,   574,   575,   579,
     583,   587,   591,   595,   599,   603,   607,   609,   611,   613,
     615,   617,   619,   621,   627,   635,   641,   649,   651,   653,
     656,   659,   661,   663,   666,   669,   670,   674,   678,   682,
     686,   690,   694,   698,   702,   706,   709,   712,   714,   716,
     719,   722,   723,   727,   731,   735,   739,   743,   747,   751,
     755,   758,   761,   763,   765,   770,   777,   780,   783,   790,
     791,   795,   799,   803,   807,   811,   815,   819,   823,   827,
     829,   831,   833,   835,   837,   839,   841,   843,   845,   847,
     849,   855,   859,   863,   869,   875,   880,   884,   888,   892,
     898,   904,   910,   912,   914,   916,   918,   923,   927,   933,
     938,   939,   942,   946,   950,   954,   962,   967,   974,   977,
     979,   983,   987,   994,  1003,  1010,  1019,  1022,  1026,  1027,
    1029,  1033,  1035,  1039,  1043,  1047,  1049,  1053,  1055,  1057,
    1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,
    1079,  1083,  1087,  1090,  1093,  1095,  1098,  1101,  1103,  1105,
    1108,  1112,  1114,  1122,  1123,  1127,  1128,  1132,  1135,  1139,
    1141,  1148,  1154,  1157,  1161,  1166,  1170,  1172,  1176,  1182,
    1184,  1185,  1187,  1189,  1190,  1193,  1196,  1201,  1206,  1210,
    1212,  1218,  1225,  1228,  1230,  1236,  1240,  1245,  1253,  1262,
    1266,  1268,  1272,  1274,  1278,  1282,  1283,  1288,  1292,  1296,
    1300,  1304,  1308,  1312,  1316,  1320,  1324,  1328,  1332,  1336,
    1338,  1342,  1347,  1349,  1353,  1355,  1359,  1363,  1365,  1369,
    1373,  1377,  1381,  1383,  1387,  1391,  1393,  1397,  1401,  1403,
    1408,  1410,  1415,  1417,  1422,  1424,  1429,  1431,  1434,  1437,
    1439,  1441,  1443,  1445,  1450,  1456,  1462,  1466,  1471,  1473,
    1476,  1481,  1483,  1486,  1488,  1491,  1494,  1496,  1498,  1502,
    1506,  1508,  1510,  1512,  1515,  1518,  1521,  1523,  1526,  1529,
    1532,  1535,  1538,  1541,  1544,  1547,  1550,  1552,  1555,  1557,
    1560,  1563,  1566,  1569,  1572,  1574,  1576,  1578,  1580,  1582,
    1584,  1586,  1588,  1591,  1592,  1597,  1599,  1601,  1603,  1605,
    1607,  1609,  1611,  1613,  1615,  1617,  1619,  1621,  1623,  1625,
    1627,  1630,  1632,  1636,  1639,  1641,  1646,  1651,  1655,  1660,
    1664,  1666,  1668,  1670,  1672,  1674,  1676,  1682,  1693,  1695,
    1697,  1698,  1706,  1714,  1715,  1717,  1721,  1725,  1729,  1733,
    1734,  1737,  1740,  1741,  1744,  1747,  1748,  1751,  1754,  1755,
    1758,  1761,  1762,  1765,  1768,  1771,  1774,  1778,  1779,  1781,
    1785,  1787,  1790,  1792,  1794,  1796,  1798,  1800,  1802,  1807,
    1811,  1813,  1817,  1820,  1824,  1828,  1833,  1838,  1842,  1844,
    1848,  1851,  1855,  1858,  1859,  1861,  1862,  1865,  1868,  1872,
    1873,  1875,  1877,  1879,  1881,  1885,  1887,  1889,  1891,  1893,
    1895,  1897,  1899,  1901,  1903,  1905,  1907,  1909,  1911,  1915,
    1919,  1924,  1929,  1933,  1937,  1941,  1946,  1951,  1955,  1960,
    1967,  1969,  1971,  1976,  1978,  1982,  1987,  1994,  2002,  2004,
    2006,  2011,  2013,  2015,  2017,  2019,  2021,  2026,  2029,  2030,
    2033,  2036,  2040,  2042,  2046,  2048,  2053,  2055,  2058,  2060,
    2064,  2066,  2069,  2072,  2075,  2078,  2083,  2085,  2089,  2093,
    2097,  2100,  2103,  2106,  2109,  2112,  2114,  2116,  2118,  2120,
    2122,  2124,  2126,  2128,  2130,  2133,  2136,  2139,  2142,  2145,
    2148,  2151,  2154,  2158,  2162,  2169,  2176,  2179,  2180,  2184,
    2187,  2192,  2197,  2204,  2210,  2214,  2220,  2221,  2224,  2227,
    2231,  2233,  2237,  2240,  2243,  2246,  2249,  2252,  2253,  2255,
    2258,  2260,  2263,  2265,  2268,  2272,  2276,  2281,  2283,  2285,
    2287,  2289,  2291,  2295,  2299,  2303,  2307,  2314,  2321,  2326,
    2331,  2336,  2339,  2342,  2345,  2348,  2351,  2359,  2365,  2371,
    2378,  2382,  2384,  2389,  2391,  2393,  2395,  2397,  2399,  2401,
    2407,  2415,  2424,  2435,  2442,  2451,  2452,  2455,  2458,  2462,
    2463,  2466,  2468,  2472,  2474,  2476,  2478,  2482,  2490,  2494,
    2502,  2508,  2518,  2520,  2522,  2524,  2526,  2530,  2536,  2538,
    2540,  2544,  2549,  2553,  2558,  2562,  2568,  2575,  2577,  2581,
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
    2845,  2847,  2849,  2851,  2853,  2855,  2857,  2859,  2861,  2863,
    2865,  2867,  2869,  2871,  2873,  2875,  2877,  2879,  2881,  2883,
    2885,  2887,  2889,  2891,  2893,  2895,  2897,  2899,  2901,  2903,
    2905,  2907,  2909,  2911
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     293,     0,    -1,     3,   411,    -1,     4,   362,    -1,     5,
     369,    -1,     6,   373,    -1,     7,   377,    -1,     8,   294,
      -1,   295,    -1,   311,    -1,   243,   296,   297,   242,    -1,
      -1,   296,   267,    -1,    -1,   297,   298,    -1,   297,   302,
      -1,   297,   307,    -1,   297,   309,    -1,   299,   304,   314,
     242,    -1,   244,    -1,   299,   275,   352,    -1,   299,   269,
      -1,   299,   278,   301,    -1,   299,   268,   300,    -1,   299,
     276,   519,    -1,    -1,   300,   123,    -1,   300,   289,    -1,
     300,   290,    -1,    56,    -1,    57,    -1,    58,    -1,   303,
     304,   314,   242,    -1,   252,    -1,   303,   269,    -1,   303,
     276,   519,    -1,   303,   272,    -1,    -1,   304,   305,    -1,
     306,   314,   242,    -1,   251,    -1,   306,   269,    -1,   306,
     277,   412,    -1,   306,   276,   519,    -1,   306,   271,    -1,
     306,   270,    -1,   308,   314,   242,    -1,   251,    -1,   308,
     269,    -1,   308,   277,   412,    -1,   308,   276,   519,    -1,
     308,   271,    -1,   308,   270,    -1,   310,   314,   242,    -1,
     257,    -1,   310,   269,    -1,   310,   277,   412,    -1,   310,
     276,   519,    -1,   284,   312,   314,   242,    -1,    -1,   312,
     286,   313,    -1,   312,   285,    -1,    -1,   313,   410,    -1,
     313,   116,    -1,    -1,   314,   318,    -1,   314,   311,    -1,
     314,   315,    -1,   314,   317,    -1,   314,   319,    -1,   314,
     323,    -1,   314,   328,    -1,   314,   330,    -1,   314,   329,
      -1,   314,   338,    -1,   314,   340,    -1,   314,   342,    -1,
     314,   344,    -1,   314,   346,    -1,   314,   334,    -1,   314,
     348,    -1,   314,   350,    -1,   316,   314,   242,    -1,   245,
      -1,   316,   277,   412,    -1,   316,   280,   313,    -1,   246,
     318,   242,    -1,   287,    -1,   288,    -1,   320,   322,   242,
      -1,   247,    -1,   320,   277,   412,    -1,   320,   268,   321,
      -1,   123,    -1,   289,    -1,   291,    -1,    -1,   322,   326,
      -1,   324,   325,   242,    -1,   248,    -1,   324,   269,    -1,
      -1,   325,   326,    -1,   327,   314,   242,    -1,   249,    -1,
     327,   269,    -1,   327,   277,   412,    -1,   327,   276,   519,
      -1,   327,   270,    -1,   250,   277,   412,   242,    -1,   256,
     279,   412,   314,   242,    -1,   253,   331,   333,   242,    -1,
     332,    -1,   331,   332,    -1,   254,   279,   412,   314,   242,
      -1,    -1,   255,   314,   242,    -1,   335,   336,   337,   242,
      -1,   262,    -1,   335,   277,   412,    -1,   335,   282,   313,
      -1,   335,   283,   313,    -1,    -1,   263,   314,   242,    -1,
      -1,   264,   314,   242,    -1,   339,   314,   242,   314,    -1,
     257,    -1,   339,   269,    -1,   339,   277,   412,    -1,   339,
     276,   519,    -1,   341,   314,   242,    -1,   258,    -1,   341,
     277,   412,    -1,   343,   314,   242,    -1,   259,    -1,   343,
     269,   313,    -1,   343,   277,   412,    -1,   345,   314,   242,
      -1,   260,    -1,   347,   314,   242,    -1,   261,    -1,   347,
     269,   313,    -1,   347,   281,   313,    -1,   347,   277,   412,
      -1,   347,   280,   313,    -1,   349,   242,    -1,   265,    -1,
     349,   277,   412,    -1,   349,   273,    -1,   351,   314,   242,
      -1,   266,    -1,   351,   273,    -1,   351,   274,    -1,   352,
      12,   353,    -1,   353,    -1,   358,    -1,    38,    -1,   355,
      -1,    38,    -1,    32,    -1,   233,    42,   356,    43,    -1,
     234,    42,   582,    35,   357,    43,    -1,   582,    -1,   480,
      -1,   478,    -1,   480,    -1,   359,    -1,   354,   359,    -1,
     355,    38,   359,    -1,   355,    32,   359,    -1,   358,    38,
     359,    -1,   358,    32,   359,    -1,   360,   361,    -1,   472,
      -1,    74,    19,   472,    -1,    59,    19,   472,    -1,    20,
     472,    -1,    -1,   476,    21,   412,    22,    -1,   378,   363,
      -1,   378,   364,    -1,   363,    -1,   364,    -1,   365,   411,
      -1,   381,   365,    -1,    -1,   365,   366,   385,    -1,   365,
     384,   385,    -1,   365,   386,   385,    -1,   365,   388,   385,
      -1,   365,   402,   385,    -1,   365,   367,   385,    -1,   365,
     585,   385,    -1,   365,   389,   385,    -1,   387,    -1,   396,
      -1,   397,    -1,   404,    -1,   391,    -1,   392,    -1,   393,
      -1,   180,   368,   604,   406,   410,    -1,   180,   368,   604,
     406,   152,   519,   410,    -1,   180,   368,   604,   406,   175,
      -1,   180,   368,   604,   406,   152,   519,   175,    -1,   192,
      -1,   193,    -1,   378,   370,    -1,   378,   371,    -1,   370,
      -1,   371,    -1,   372,   411,    -1,   381,   372,    -1,    -1,
     372,   366,   385,    -1,   372,   384,   385,    -1,   372,   386,
     385,    -1,   372,   388,   385,    -1,   372,   402,   385,    -1,
     372,   367,   385,    -1,   372,   585,   385,    -1,   372,   389,
     385,    -1,   372,   390,   385,    -1,   378,   374,    -1,   378,
     375,    -1,   374,    -1,   375,    -1,   376,   411,    -1,   381,
     376,    -1,    -1,   376,   383,   385,    -1,   376,   384,   385,
      -1,   376,   386,   385,    -1,   376,   388,   385,    -1,   376,
     402,   385,    -1,   376,   405,   385,    -1,   376,   585,   385,
      -1,   376,   389,   385,    -1,   378,   379,    -1,   378,   380,
      -1,   379,    -1,   380,    -1,   186,   187,   126,   385,    -1,
     186,   187,   126,   176,   126,   385,    -1,   382,   411,    -1,
     381,   382,    -1,   190,   173,   583,    39,   540,   385,    -1,
      -1,   382,   383,   385,    -1,   382,   384,   385,    -1,   382,
     386,   385,    -1,   382,   388,   385,    -1,   382,   402,   385,
      -1,   382,   405,   385,    -1,   382,   585,   385,    -1,   382,
     389,   385,    -1,   382,   390,   385,    -1,   387,    -1,   396,
      -1,   397,    -1,   404,    -1,   391,    -1,   392,    -1,   569,
      -1,   393,    -1,   398,    -1,   401,    -1,    53,    -1,   180,
     173,   583,    39,   540,    -1,   180,    68,   171,    -1,   180,
      68,   172,    -1,   180,   183,   191,   173,   540,    -1,   180,
     183,   368,   173,   540,    -1,   180,   185,   603,   126,    -1,
     180,    69,   550,    -1,   180,   182,   121,    -1,   180,   182,
     122,    -1,   180,   183,   138,   142,   143,    -1,   180,   183,
     138,   142,   144,    -1,   180,   184,   394,    35,   395,    -1,
     171,    -1,   177,    -1,   178,    -1,   179,    -1,   180,   183,
     145,   540,    -1,   180,    70,   540,    -1,   188,   189,   400,
     540,   399,    -1,   188,   189,   540,   399,    -1,    -1,   115,
     540,    -1,   399,    35,   540,    -1,   173,   583,    39,    -1,
     183,   191,   173,    -1,   188,   190,   173,   583,    39,   540,
     399,    -1,   188,   190,   540,   399,    -1,   180,   127,     9,
     481,   518,   403,    -1,    10,   413,    -1,   175,    -1,   180,
     181,   171,    -1,   180,   181,   172,    -1,   180,   407,   368,
     604,   406,   410,    -1,   180,   407,   368,   604,   406,   152,
     519,   410,    -1,   180,   407,   368,   604,   406,   175,    -1,
     180,   407,   368,   604,   406,   152,   519,   175,    -1,    42,
      43,    -1,    42,   408,    43,    -1,    -1,   232,    -1,   408,
      35,   409,    -1,   409,    -1,     9,   481,   518,    -1,    50,
     412,    52,    -1,    51,   412,    52,    -1,   412,    -1,   412,
      35,   413,    -1,   413,    -1,   414,    -1,   432,    -1,   435,
      -1,   439,    -1,   570,    -1,   572,    -1,   575,    -1,   574,
      -1,   576,    -1,   440,    -1,   591,    -1,   592,    -1,   415,
     132,   413,    -1,   416,   425,   426,    -1,   416,   425,    -1,
     416,   426,    -1,   416,    -1,   416,   417,    -1,   416,   422,
      -1,   417,    -1,   422,    -1,   133,   418,    -1,   418,    35,
     419,    -1,   419,    -1,     9,   481,   518,   420,   421,   134,
     413,    -1,    -1,   115,     9,   481,    -1,    -1,   194,     9,
     481,    -1,   135,   423,    -1,   423,    35,   424,    -1,   424,
      -1,     9,   481,   518,   421,    10,   413,    -1,   194,     9,
     481,    10,   413,    -1,   136,   413,    -1,   138,   137,   427,
      -1,   139,   138,   137,   427,    -1,   427,    35,   428,    -1,
     428,    -1,   429,   430,   431,    -1,   429,   430,   431,   145,
     540,    -1,   413,    -1,    -1,   140,    -1,   141,    -1,    -1,
     142,   143,    -1,   142,   144,    -1,   146,   433,   148,   413,
      -1,   147,   433,   148,   413,    -1,   433,    35,   434,    -1,
     434,    -1,     9,   481,   518,   134,   413,    -1,   149,    42,
     412,    43,   436,   437,    -1,   436,   438,    -1,   438,    -1,
     183,     9,   481,   132,   413,    -1,   183,   132,   413,    -1,
     150,   519,   132,   413,    -1,   150,     9,   481,   152,   519,
     132,   413,    -1,   153,    42,   412,    43,   154,   413,   155,
     413,    -1,   440,   156,   441,    -1,   441,    -1,   441,   157,
     442,    -1,   442,    -1,   444,    39,   444,    -1,   444,    13,
     444,    -1,    -1,   444,    26,   443,   444,    -1,   444,    14,
     444,    -1,   444,    15,   444,    -1,   444,    16,   444,    -1,
     444,   109,   444,    -1,   444,   110,   444,    -1,   444,   111,
     444,    -1,   444,   112,   444,    -1,   444,   113,   444,    -1,
     444,   114,   444,    -1,   444,   170,   444,    -1,   444,    17,
     444,    -1,   444,    18,   444,    -1,   444,    -1,   445,   195,
     541,    -1,   445,   195,   541,   568,    -1,   445,    -1,   446,
     161,   446,    -1,   446,    -1,   446,    36,   447,    -1,   446,
      37,   447,    -1,   447,    -1,   447,    11,   448,    -1,   447,
     162,   448,    -1,   447,    73,   448,    -1,   447,   163,   448,
      -1,   448,    -1,   448,    12,   449,    -1,   448,   164,   449,
      -1,   449,    -1,   449,   165,   450,    -1,   449,   166,   450,
      -1,   450,    -1,   451,   158,   159,   519,    -1,   451,    -1,
     452,   169,   152,   519,    -1,   452,    -1,   453,   160,   152,
     516,    -1,   453,    -1,   454,   168,   152,   516,    -1,   454,
      -1,    37,   454,    -1,    36,   454,    -1,   455,    -1,   456,
      -1,   461,    -1,   457,    -1,   167,    51,   412,    52,    -1,
     167,    71,    51,   412,    52,    -1,   167,    72,    51,   412,
      52,    -1,   458,    51,    52,    -1,   458,    51,   412,    52,
      -1,   459,    -1,   458,   459,    -1,    34,   493,   603,   460,
      -1,   131,    -1,   106,   131,    -1,   462,    -1,   462,   463,
      -1,    32,   463,    -1,   463,    -1,    38,    -1,   463,    38,
     464,    -1,   463,    32,   464,    -1,   464,    -1,   465,    -1,
     475,    -1,   466,   476,    -1,   469,   476,    -1,   467,   472,
      -1,   468,    -1,    74,    19,    -1,    75,    19,    -1,    59,
      19,    -1,    76,    19,    -1,    77,    19,    -1,    78,    19,
      -1,    79,    19,    -1,   173,    19,    -1,    20,   472,    -1,
     472,    -1,   470,   472,    -1,   471,    -1,    80,    19,    -1,
      81,    19,    -1,    82,    19,    -1,    83,    19,    -1,    84,
      19,    -1,    41,    -1,   523,    -1,   473,    -1,   584,    -1,
     474,    -1,    11,    -1,   128,    -1,   129,    -1,   477,   476,
      -1,    -1,   476,    21,   412,    22,    -1,   478,    -1,   480,
      -1,   482,    -1,   483,    -1,   486,    -1,   488,    -1,   484,
      -1,   485,    -1,   596,    -1,   599,    -1,   479,    -1,   582,
      -1,   579,    -1,   580,    -1,   581,    -1,     9,   481,    -1,
     603,    -1,    42,   412,    43,    -1,    42,    43,    -1,    40,
      -1,   121,    51,   412,    52,    -1,   122,    51,   412,    52,
      -1,   604,    42,    43,    -1,   604,    42,   487,    43,    -1,
     487,    35,   413,    -1,   413,    -1,   489,    -1,   505,    -1,
     490,    -1,   501,    -1,   503,    -1,    26,   491,   492,   493,
      44,    -1,    26,   491,   492,   493,    27,   500,    33,   491,
     493,    28,    -1,   123,    -1,   124,    -1,    -1,   492,   106,
     123,   493,    45,   493,   494,    -1,   492,   106,   124,   493,
      45,   493,   495,    -1,    -1,   106,    -1,    46,   496,    47,
      -1,    48,   498,    49,    -1,    46,   497,    47,    -1,    48,
     499,    49,    -1,    -1,   496,   410,    -1,   496,   116,    -1,
      -1,   497,   410,    -1,   497,   116,    -1,    -1,   498,   410,
      -1,   498,   117,    -1,    -1,   499,   410,    -1,   499,   117,
      -1,    -1,   500,   489,    -1,   500,   410,    -1,   500,   119,
      -1,   500,   118,    -1,    30,   502,    31,    -1,    -1,   108,
      -1,    29,   130,   504,    -1,   107,    -1,   106,   107,    -1,
     506,    -1,   507,    -1,   510,    -1,   511,    -1,   512,    -1,
     513,    -1,    85,    51,   412,    52,    -1,   191,   508,   509,
      -1,   125,    -1,    51,   412,    52,    -1,    51,    52,    -1,
      51,   412,    52,    -1,    59,   508,   509,    -1,    66,    51,
     412,    52,    -1,    60,    51,   412,    52,    -1,    63,   514,
     515,    -1,   125,    -1,    51,   412,    52,    -1,    51,    52,
      -1,    51,   412,    52,    -1,   522,   517,    -1,    -1,    23,
      -1,    -1,   152,   519,    -1,   521,   520,    -1,    67,    42,
      43,    -1,    -1,    11,    -1,    36,    -1,    23,    -1,   522,
      -1,   174,    42,    43,    -1,   523,    -1,   600,    -1,   602,
      -1,   584,    -1,   525,    -1,   533,    -1,   529,    -1,   535,
      -1,   531,    -1,   528,    -1,   527,    -1,   526,    -1,   524,
      -1,    62,    42,    43,    -1,    61,    42,    43,    -1,    61,
      42,   533,    43,    -1,    61,    42,   535,    43,    -1,    66,
      42,    43,    -1,    60,    42,    43,    -1,    63,    42,    43,
      -1,    63,    42,   583,    43,    -1,    63,    42,   126,    43,
      -1,    59,    42,    43,    -1,    59,    42,   530,    43,    -1,
      59,    42,   530,    35,   539,    43,    -1,   537,    -1,    11,
      -1,    64,    42,   532,    43,    -1,   537,    -1,   191,    42,
      43,    -1,   191,    42,   534,    43,    -1,   191,    42,   534,
      35,   539,    43,    -1,   191,    42,   534,    35,   539,    23,
      43,    -1,   538,    -1,    11,    -1,    65,    42,   536,    43,
      -1,   538,    -1,   584,    -1,   584,    -1,   584,    -1,   126,
      -1,   543,   542,   196,   580,    -1,   543,   542,    -1,    -1,
     542,   550,    -1,   542,   549,    -1,   543,    24,   544,    -1,
     544,    -1,   544,    25,   545,    -1,   545,    -1,   545,    86,
     134,   546,    -1,   546,    -1,    54,   547,    -1,   547,    -1,
      42,   541,    43,    -1,   548,    -1,   478,   564,    -1,   480,
     564,    -1,   483,   564,    -1,   486,   564,    -1,    51,   412,
      52,   564,    -1,   121,    -1,   197,   448,   566,    -1,   198,
     565,   566,    -1,   199,   565,   200,    -1,   201,   567,    -1,
     202,   567,    -1,   115,   100,    -1,   115,   101,    -1,    96,
      97,    -1,   551,    -1,   552,    -1,   553,    -1,   554,    -1,
     557,    -1,   562,    -1,   563,    -1,   203,    -1,   204,    -1,
     151,    87,    -1,   151,    88,    -1,   226,    89,    -1,    90,
      89,    -1,    89,    87,    -1,    89,    88,    -1,   226,    92,
      -1,    90,    92,    -1,   226,    93,   556,    -1,   226,    93,
     183,    -1,   226,    93,    42,   556,   555,    43,    -1,   226,
      93,    42,   183,   555,    43,    -1,    90,    93,    -1,    -1,
     555,    35,   556,    -1,   115,   582,    -1,   115,   582,   205,
     582,    -1,   115,   582,   565,   206,    -1,   115,   582,   205,
     582,   565,   206,    -1,   226,    94,   213,   559,   558,    -1,
      90,    94,   213,    -1,   226,   183,    94,   213,   558,    -1,
      -1,   558,   561,    -1,   115,   582,    -1,    42,   560,    43,
      -1,   582,    -1,   560,    35,   582,    -1,   164,   559,    -1,
     166,   559,    -1,   207,   582,    -1,   226,    95,    -1,    90,
      95,    -1,    -1,   208,    -1,   208,    98,    -1,   209,    -1,
     209,   213,    -1,   210,    -1,   211,   448,    -1,   120,   144,
     448,    -1,   120,   102,   448,    -1,   212,   448,   161,   448,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,    91,    97,   448,    -1,   180,   224,    72,    -1,   180,
     224,    71,    -1,   180,   224,   103,    -1,   571,   413,   152,
     220,   231,   413,    -1,   571,   413,   152,   229,   231,   413,
      -1,   571,   413,   231,   413,    -1,   571,   413,   223,   413,
      -1,   571,   413,   222,   413,    -1,   221,    62,    -1,   221,
     227,    -1,   573,   413,    -1,   230,    62,    -1,   230,   227,
      -1,   218,   105,   159,    62,   413,   225,   413,    -1,   218,
      62,   413,   225,   413,    -1,   228,    62,   413,   152,   413,
      -1,   104,   577,   219,   413,   132,   413,    -1,   577,    35,
     578,    -1,   578,    -1,     9,   481,    10,   413,    -1,    56,
      -1,    57,    -1,    58,    -1,   126,    -1,   603,    -1,   603,
      -1,   180,   235,   237,   603,   410,    -1,   180,   235,   237,
     603,   587,   586,   410,    -1,   180,   235,   237,   603,   588,
     236,   352,   410,    -1,   180,   235,   237,   603,   588,   236,
     352,   587,   586,   410,    -1,   180,   235,   588,   236,   352,
     410,    -1,   180,   235,   588,   236,   352,   587,   586,   410,
      -1,    -1,   152,   519,    -1,    42,    43,    -1,    42,   408,
      43,    -1,    -1,   241,   589,    -1,   590,    -1,   589,    35,
     590,    -1,   123,    -1,   289,    -1,   290,    -1,   238,   235,
     603,    -1,   238,   235,   603,   225,    42,   594,    43,    -1,
     239,   240,   413,    -1,   239,   240,   413,   225,    42,   594,
      43,    -1,   239,   240,   413,   241,   593,    -1,   239,   240,
     413,   241,   593,   225,    42,   594,    43,    -1,   603,    -1,
     289,    -1,   291,    -1,   595,    -1,   594,    35,   595,    -1,
       9,   481,   518,    10,   413,    -1,   597,    -1,   598,    -1,
     604,    55,    56,    -1,   193,   406,   518,   410,    -1,   475,
      42,    43,    -1,   475,    42,   487,    43,    -1,   193,    42,
      43,    -1,   193,    42,    43,   152,   519,    -1,   193,    42,
     601,    43,   152,   519,    -1,   519,    -1,   601,    35,   519,
      -1,    42,   521,    43,    -1,   604,    -1,    59,    -1,    60,
      -1,    61,    -1,   191,    -1,   174,    -1,   153,    -1,    62,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,   149,
      -1,    67,    -1,   193,    -1,   123,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    92,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,
      -1,   114,    -1,   115,    -1,   127,    -1,   132,    -1,   133,
      -1,   134,    -1,   135,    -1,   136,    -1,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   141,    -1,   142,    -1,   143,
      -1,   144,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,   150,    -1,   152,    -1,   154,    -1,   155,    -1,   156,
      -1,   157,    -1,   158,    -1,   159,    -1,   160,    -1,   161,
      -1,   162,    -1,   163,    -1,   164,    -1,   165,    -1,   166,
      -1,   167,    -1,   168,    -1,   169,    -1,   170,    -1,   171,
      -1,   172,    -1,   173,    -1,   175,    -1,   176,    -1,   177,
      -1,   178,    -1,   179,    -1,   180,    -1,   181,    -1,   182,
      -1,   183,    -1,   184,    -1,   185,    -1,   187,    -1,   188,
      -1,   189,    -1,   192,    -1,   194,    -1,   195,    -1,   196,
      -1,   197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,
      -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,
      -1,   222,    -1,   223,    -1,   224,    -1,   225,    -1,   227,
      -1,   228,    -1,   229,    -1,   230,    -1,   231,    -1,   232,
      -1,   121,    -1,   122,    -1,   233,    -1,   234,    -1,   235,
      -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,
      -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   719,   719,   721,   722,   723,   724,   726,   733,   762,
     788,   793,   795,   802,   804,   805,   806,   807,   811,   830,
     834,   839,   846,   851,   856,   865,   868,   874,   879,   886,
     886,   886,   889,   902,   906,   913,   918,   927,   930,   938,
     965,   969,   976,   982,   987,   992,  1001,  1025,  1029,  1036,
    1041,  1046,  1051,  1062,  1080,  1084,  1091,  1096,  1104,  1115,
    1118,  1125,  1135,  1138,  1143,  1157,  1160,  1165,  1170,  1175,
    1180,  1185,  1190,  1195,  1200,  1205,  1210,  1215,  1220,  1225,
    1230,  1235,  1240,  1248,  1266,  1270,  1275,  1284,  1290,  1290,
    1293,  1313,  1317,  1322,  1330,  1335,  1339,  1347,  1350,  1358,
    1371,  1375,  1386,  1389,  1397,  1415,  1419,  1426,  1431,  1436,
    1444,  1452,  1460,  1474,  1478,  1492,  1500,  1503,  1510,  1545,
    1549,  1554,  1560,  1570,  1573,  1581,  1584,  1591,  1609,  1613,
    1620,  1625,  1633,  1651,  1655,  1663,  1685,  1689,  1696,  1704,
    1713,  1721,  1758,  1762,  1769,  1776,  1785,  1794,  1806,  1810,
    1815,  1824,  1837,  1841,  1846,  1860,  1865,  1877,  1881,  1889,
    1902,  1910,  1923,  1930,  1944,  1944,  1947,  1947,  1969,  1973,
    1977,  1995,  2013,  2023,  2037,  2045,  2051,  2057,  2063,  2075,
    2078,  2092,  2093,  2094,  2095,  2099,  2102,  2106,  2108,  2112,
    2116,  2120,  2124,  2128,  2134,  2140,  2154,  2155,  2156,  2157,
    2158,  2159,  2160,  2166,  2170,  2174,  2178,  2184,  2184,  2191,
    2192,  2193,  2194,  2198,  2201,  2205,  2207,  2211,  2215,  2219,
    2223,  2227,  2233,  2239,  2243,  2254,  2255,  2256,  2257,  2261,
    2264,  2268,  2270,  2274,  2278,  2282,  2286,  2290,  2296,  2302,
    2313,  2314,  2315,  2316,  2321,  2326,  2348,  2351,  2355,  2367,
    2369,  2373,  2377,  2381,  2385,  2389,  2395,  2401,  2405,  2419,
    2420,  2421,  2422,  2423,  2424,  2425,  2426,  2430,  2430,  2433,
    2437,  2445,  2450,  2459,  2464,  2473,  2533,  2540,  2545,  2554,
    2559,  2568,  2578,  2582,  2590,  2594,  2602,  2618,  2627,  2639,
    2648,  2651,  2656,  2665,  2669,  2677,  2687,  2699,  2706,  2710,
    2718,  2723,  2733,  2737,  2741,  2745,  2752,  2756,  2763,  2766,
    2774,  2779,  2789,  2797,  2801,  2809,  2822,  2837,  2844,  2845,
    2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,  2855,
    2860,  2871,  2875,  2879,  2883,  2887,  2893,  2899,  2900,  2906,
    2913,  2917,  2921,  2933,  2936,  2947,  2950,  2960,  2967,  2971,
    2975,  2979,  2986,  2994,  2999,  3007,  3011,  3017,  3024,  3039,
    3056,  3059,  3063,  3071,  3079,  3083,  3092,  3100,  3111,  3115,
    3119,  3130,  3137,  3142,  3150,  3154,  3162,  3166,  3174,  3182,
    3191,  3196,  3205,  3215,  3219,  3223,  3223,  3227,  3231,  3235,
    3239,  3243,  3247,  3251,  3255,  3259,  3263,  3267,  3271,  3275,
    3280,  3284,  3288,  3293,  3297,  3302,  3306,  3310,  3315,  3319,
    3323,  3327,  3331,  3336,  3340,  3344,  3349,  3353,  3357,  3362,
    3366,  3371,  3376,  3381,  3385,  3390,  3394,  3399,  3405,  3411,
    3416,  3417,  3418,  3426,  3430,  3434,  3442,  3449,  3458,  3458,
    3462,  3482,  3483,  3491,  3492,  3498,  3519,  3523,  3537,  3543,
    3556,  3560,  3560,  3564,  3568,  3577,  3589,  3600,  3604,  3608,
    3612,  3616,  3620,  3624,  3628,  3636,  3644,  3661,  3669,  3678,
    3682,  3686,  3690,  3694,  3702,  3714,  3719,  3724,  3731,  3736,
    3743,  3750,  3761,  3771,  3774,  3785,  3786,  3787,  3788,  3789,
    3790,  3791,  3792,  3793,  3794,  3798,  3798,  3801,  3801,  3801,
    3805,  3812,  3816,  3820,  3828,  3836,  3846,  3856,  3860,  3867,
    3872,  3881,  3885,  3894,  3894,  3894,  3898,  3904,  3913,  3913,
    3918,  3921,  3930,  3941,  3941,  3946,  3950,  3957,  3961,  3972,
    3975,  3980,  3994,  3997,  4001,  4018,  4021,  4026,  4040,  4043,
    4047,  4068,  4071,  4076,  4081,  4091,  4107,  4122,  4125,  4130,
    4151,  4152,  4165,  4166,  4167,  4168,  4169,  4170,  4175,  4183,
    4191,  4195,  4203,  4207,  4216,  4224,  4232,  4240,  4247,  4260,
    4267,  4271,  4279,  4290,  4293,  4302,  4305,  4315,  4322,  4332,
    4333,  4335,  4337,  4343,  4347,  4351,  4352,  4353,  4357,  4369,
    4370,  4371,  4372,  4373,  4374,  4375,  4376,  4377,  4382,  4390,
    4394,  4399,  4408,  4416,  4424,  4428,  4432,  4440,  4444,  4448,
    4456,  4457,  4465,  4473,  4478,  4482,  4486,  4490,  4499,  4500,
    4508,  4515,  4518,  4521,  4524,  4528,  4540,  4552,  4568,  4571,
    4575,  4585,  4596,  4601,  4612,  4617,  4621,  4626,  4630,  4635,
    4639,  4644,  4648,  4652,  4656,  4660,  4674,  4678,  4682,  4686,
    4691,  4695,  4699,  4703,  4707,  4721,  4722,  4723,  4724,  4725,
    4726,  4727,  4735,  4739,  4743,  4747,  4758,  4762,  4766,  4770,
    4778,  4782,  4792,  4796,  4800,  4804,  4808,  4816,  4818,  4825,
    4829,  4833,  4837,  4847,  4851,  4855,  4863,  4865,  4873,  4877,
    4884,  4888,  4896,  4900,  4908,  4916,  4920,  4929,  4932,  4936,
    4940,  4944,  4948,  4959,  4965,  4971,  4977,  4987,  4991,  4995,
    5003,  5007,  5015,  5023,  5028,  5033,  5045,  5049,  5053,  5057,
    5061,  5067,  5067,  5072,  5078,  5078,  5083,  5087,  5097,  5105,
    5112,  5117,  5125,  5134,  5147,  5160,  5174,  5186,  5195,  5207,
    5211,  5215,  5220,  5225,  5230,  5239,  5242,  5250,  5254,  5262,
    5266,  5274,  5279,  5288,  5292,  5296,  5304,  5308,  5316,  5320,
    5324,  5328,  5336,  5340,  5344,  5352,  5357,  5367,  5380,  5380,
    5384,  5392,  5401,  5406,  5415,  5419,  5423,  5430,  5435,  5444,
    5453,  5453,  5453,  5453,  5453,  5453,  5453,  5453,  5454,  5454,
    5454,  5454,  5454,  5454,  5455,  5459,  5459,  5459,  5459,  5459,
    5459,  5459,  5459,  5459,  5459,  5460,  5460,  5460,  5460,  5460,
    5460,  5460,  5461,  5461,  5461,  5461,  5461,  5461,  5461,  5461,
    5462,  5462,  5462,  5462,  5462,  5462,  5462,  5462,  5462,  5462,
    5462,  5463,  5463,  5463,  5463,  5463,  5463,  5463,  5463,  5463,
    5463,  5463,  5463,  5464,  5464,  5464,  5464,  5464,  5464,  5464,
    5464,  5464,  5464,  5465,  5465,  5465,  5465,  5465,  5465,  5465,
    5465,  5465,  5465,  5465,  5465,  5466,  5466,  5466,  5466,  5466,
    5466,  5466,  5466,  5466,  5466,  5466,  5466,  5467,  5467,  5467,
    5467,  5467,  5467,  5467,  5467,  5467,  5468,  5468,  5468,  5468,
    5468,  5468,  5468,  5468,  5469,  5469,  5469,  5469,  5469,  5469,
    5469,  5469,  5469,  5470,  5470,  5470,  5470,  5470,  5470,  5470,
    5470,  5470,  5471,  5471,  5471,  5471,  5471,  5471,  5471,  5471,
    5471,  5471,  5472,  5472,  5472,  5472,  5472,  5472,  5472,  5472,
    5472,  5472,  5472,  5473,  5473,  5473,  5473,  5473,  5473,  5473,
    5473,  5473,  5473,  5473
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
  "\"}\"", "\";\"", "\"!\"", "\"#\"", "\"<integer literal>\"",
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
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"",
  "\"<XSLT end element>\"", "\"<xsl:stylesheet...\"",
  "\"<xsl:template...\"", "\"<xsl:value-of...\"", "\"<xsl:text...\"",
  "\"<xsl:apply-templates...\"", "\"<xsl:call-template...\"",
  "\"<xsl:with-param...\"", "\"<xsl:sequence...\"", "\"<xsl:param...\"",
  "\"<xsl:function...\"", "\"<xsl:choose...\"", "\"<xsl:when...\"",
  "\"<xsl:otherwise...\"", "\"<xsl:if...\"", "\"<xsl:variable...\"",
  "\"<xsl:comment...\"", "\"<xsl:processing-instruction...\"",
  "\"<xsl:document...\"", "\"<xsl:attribute...\"",
  "\"<xsl:analyze-string...\"", "\"<xsl:matching-substring...\"",
  "\"<xsl:non-matching-substring...\"", "\"<xsl:copy-of...\"",
  "\"<xsl:copy...\"", "\"version='...'\"", "\"mode='...'\"",
  "\"name='...'\"", "\"tunnel='...'\"", "\"required='...'\"",
  "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...'\"", "\"regex='...'\"",
  "\"flags='...'\"", "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "\"#default\"", "\"#all\"",
  "\"#current\"", "$accept", "SelectLanguage", "Start_XSLT",
  "Stylesheet_XSLT", "StylesheetAttrs_XSLT", "StylesheetContent_XSLT",
  "Template_XSLT", "TemplateAttrs_XSLT", "TemplateModes_XSLT",
  "Number_XSLT", "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT",
  "Param_XSLT", "ParamAttrs_XSLT", "GlobalParam_XSLT",
  "GlobalParamAttrs_XSLT", "GlobalVariable_XSLT",
  "GlobalVariableAttrs_XSLT", "LiteralResultElement_XSLT",
  "LiteralResultElementAttrs_XSLT", "AttrValueTemplate_XSLT",
  "SequenceConstructor_XSLT", "ValueOf_XSLT", "ValueOfAttrs_XSLT",
  "Text_XSLT", "TextNode_XSLT", "ApplyTemplates_XSLT",
  "ApplyTemplatesAttrs_XSLT", "ApplyTemplatesMode_XSLT",
  "ApplyTemplatesContent_XSLT", "CallTemplate_XSLT",
  "CallTemplateAttrs_XSLT", "CallTemplateContent_XSLT", "WithParam_XSLT",
  "WithParamAttrs_XSLT", "Sequence_XSLT", "If_XSLT", "Choose_XSLT",
  "WhenList_XSLT", "When_XSLT", "Otherwise_XSLT", "AnalyzeString_XSLT",
  "AnalyzeStringAttrs_XSLT", "MatchingSubstring_XSLT",
  "NonMatchingSubstring_XSLT", "Variable_XSLT", "VariableAttrs_XSLT",
  "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT", "PIAttrs_XSLT",
  "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
  "AttributeAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT", "Copy_XSLT",
  "CopyAttrs_XSLT", "Pattern_XSLT", "PathPattern_XSLT",
  "PathPatternStart_XSLT", "IdKeyPattern_XSLT", "IdValue_XSLT",
  "KeyValue_XSLT", "RelativePathPattern_XSLT", "PatternStep_XSLT",
  "PatternAxis_XSLT", "PatternStepPredicateList_XSLT", "Module_XQ",
  "MainModule_XQ", "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ",
  "FunctionDecl_XQ", "FunctionKeyword", "Module_XQF", "MainModule_XQF",
  "LibraryModule_XQF", "Prolog_XQF", "Module_XQU", "MainModule_XQU",
  "LibraryModule_XQU", "Prolog_XQU", "Module", "VersionDecl", "MainModule",
  "LibraryModule", "ModuleDecl", "Prolog", "Setter", "Import", "Separator",
  "NamespaceDecl", "BoundarySpaceDecl", "DefaultNamespaceDecl",
  "OptionDecl", "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
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
  "TemplateParamList", "TemplateDeclModesSection", "TemplateDeclModes",
  "TemplateDeclMode", "CallTemplateExpr", "ApplyTemplatesExpr",
  "ApplyTemplatesMode", "TemplateArgumentList", "TemplateArgument",
  "FunctionRef", "LiteralFunctionRef", "InlineFunction",
  "DereferencedFunctionCall", "FunctionType", "FunctionTypeArguments",
  "ParenthesizedItemType", "QNameValue", "FunctionName", 0
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
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   292,   293,   293,   293,   293,   293,   293,   294,   294,
     295,   296,   296,   297,   297,   297,   297,   297,   298,   299,
     299,   299,   299,   299,   299,   300,   300,   300,   300,   301,
     301,   301,   302,   303,   303,   303,   303,   304,   304,   305,
     306,   306,   306,   306,   306,   306,   307,   308,   308,   308,
     308,   308,   308,   309,   310,   310,   310,   310,   311,   312,
     312,   312,   313,   313,   313,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   316,   316,   316,   317,   318,   318,
     319,   320,   320,   320,   321,   321,   321,   322,   322,   323,
     324,   324,   325,   325,   326,   327,   327,   327,   327,   327,
     328,   329,   330,   331,   331,   332,   333,   333,   334,   335,
     335,   335,   335,   336,   336,   337,   337,   338,   339,   339,
     339,   339,   340,   341,   341,   342,   343,   343,   343,   344,
     345,   346,   347,   347,   347,   347,   347,   348,   349,   349,
     349,   350,   351,   351,   351,   352,   352,   353,   353,   353,
     354,   354,   355,   355,   356,   356,   357,   357,   358,   358,
     358,   358,   358,   358,   359,   360,   360,   360,   360,   361,
     361,   362,   362,   362,   362,   363,   364,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   366,   366,   366,   366,
     366,   366,   366,   367,   367,   367,   367,   368,   368,   369,
     369,   369,   369,   370,   371,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   373,   373,   373,   373,   374,
     375,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     377,   377,   377,   377,   378,   378,   379,   380,   381,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
     383,   383,   383,   383,   383,   383,   383,   384,   384,   385,
     386,   387,   387,   388,   388,   389,   390,   391,   391,   392,
     392,   393,   394,   394,   395,   395,   396,   397,   398,   398,
     399,   399,   399,   400,   400,   401,   401,   402,   403,   403,
     404,   404,   405,   405,   405,   405,   406,   406,   407,   407,
     408,   408,   409,   410,   410,   411,   412,   412,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     414,   415,   415,   415,   415,   416,   416,   416,   416,   417,
     418,   418,   419,   420,   420,   421,   421,   422,   423,   423,
     424,   424,   425,   426,   426,   427,   427,   428,   428,   429,
     430,   430,   430,   431,   431,   431,   432,   432,   433,   433,
     434,   435,   436,   436,   437,   437,   438,   438,   439,   440,
     440,   441,   441,   442,   442,   443,   442,   442,   442,   442,
     442,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     444,   444,   444,   445,   445,   446,   446,   446,   447,   447,
     447,   447,   447,   448,   448,   448,   449,   449,   449,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   454,
     455,   455,   455,   456,   456,   456,   457,   457,   458,   458,
     459,   460,   460,   461,   461,   461,   461,   462,   463,   463,
     463,   464,   464,   465,   465,   466,   466,   467,   467,   467,
     467,   467,   467,   467,   467,   468,   468,   469,   469,   470,
     470,   470,   470,   470,   471,   472,   472,   473,   473,   474,
     474,   474,   475,   476,   476,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   478,   478,   479,   479,   479,
     480,   481,   482,   482,   483,   484,   485,   486,   486,   487,
     487,   488,   488,   489,   489,   489,   490,   490,   491,   491,
     492,   492,   492,   493,   493,   494,   494,   495,   495,   496,
     496,   496,   497,   497,   497,   498,   498,   498,   499,   499,
     499,   500,   500,   500,   500,   500,   501,   502,   502,   503,
     504,   504,   505,   505,   505,   505,   505,   505,   506,   507,
     508,   508,   509,   509,   510,   511,   512,   513,   514,   514,
     515,   515,   516,   517,   517,   518,   518,   519,   519,   520,
     520,   520,   520,   521,   521,   521,   521,   521,   522,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   524,   525,
     525,   525,   526,   527,   528,   528,   528,   529,   529,   529,
     530,   530,   531,   532,   533,   533,   533,   533,   534,   534,
     535,   536,   537,   538,   539,   540,   541,   541,   542,   542,
     542,   543,   543,   544,   544,   545,   545,   546,   546,   547,
     547,   548,   548,   548,   548,   548,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   551,   551,   551,   551,   552,   552,   552,   552,
     553,   553,   554,   554,   554,   554,   554,   555,   555,   556,
     556,   556,   556,   557,   557,   557,   558,   558,   559,   559,
     560,   560,   561,   561,   562,   563,   563,   564,   564,   564,
     564,   564,   564,   565,   565,   565,   565,   566,   566,   566,
     567,   567,   568,   569,   569,   569,   570,   570,   570,   570,
     570,   571,   571,   572,   573,   573,   574,   574,   575,   576,
     577,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     585,   585,   585,   585,   585,   586,   586,   587,   587,   588,
     588,   589,   589,   590,   590,   590,   591,   591,   592,   592,
     592,   592,   593,   593,   593,   594,   594,   595,   596,   596,
     597,   598,   599,   599,   600,   600,   600,   601,   601,   602,
     603,   603,   603,   603,   603,   603,   603,   603,   603,   603,
     603,   603,   603,   603,   603,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   604,   604,
     604,   604,   604,   604
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     0,     2,     0,     2,     2,     2,     2,     4,     1,
       3,     2,     3,     3,     3,     0,     2,     2,     2,     1,
       1,     1,     4,     1,     2,     3,     2,     0,     2,     3,
       1,     2,     3,     3,     2,     2,     3,     1,     2,     3,
       3,     2,     2,     3,     1,     2,     3,     3,     4,     0,
       3,     2,     0,     2,     2,     0,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     1,     3,     3,     3,     1,     1,
       3,     1,     3,     3,     1,     1,     1,     0,     2,     3,
       1,     2,     0,     2,     3,     1,     2,     3,     3,     2,
       4,     5,     4,     1,     2,     5,     0,     3,     4,     1,
       3,     3,     3,     0,     3,     0,     3,     4,     1,     2,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     2,     1,     3,
       2,     3,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     2,
       3,     3,     3,     3,     2,     1,     3,     3,     2,     0,
       4,     2,     2,     1,     1,     2,     2,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     5,     7,     1,     1,     2,
       2,     1,     1,     2,     2,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     1,     2,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     4,     6,     2,     2,     6,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     5,     5,     4,     3,     3,     3,     5,
       5,     5,     1,     1,     1,     1,     4,     3,     5,     4,
       0,     2,     3,     3,     3,     7,     4,     6,     2,     1,
       3,     3,     6,     8,     6,     8,     2,     3,     0,     1,
       3,     1,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     2,     1,     2,     2,     1,     1,     2,
       3,     1,     7,     0,     3,     0,     3,     2,     3,     1,
       6,     5,     2,     3,     4,     3,     1,     3,     5,     1,
       0,     1,     1,     0,     2,     2,     4,     4,     3,     1,
       5,     6,     2,     1,     5,     3,     4,     7,     8,     3,
       1,     3,     1,     3,     3,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     4,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     4,
       1,     4,     1,     4,     1,     4,     1,     2,     2,     1,
       1,     1,     1,     4,     5,     5,     3,     4,     1,     2,
       4,     1,     2,     1,     2,     2,     1,     1,     3,     3,
       1,     1,     1,     2,     2,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     1,     4,     4,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     5,    10,     1,     1,
       0,     7,     7,     0,     1,     3,     3,     3,     3,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     2,     2,     3,     0,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     3,     2,     3,     3,     4,     4,     3,     1,     3,
       2,     3,     2,     0,     1,     0,     2,     2,     3,     0,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       4,     4,     3,     3,     3,     4,     4,     3,     4,     6,
       1,     1,     4,     1,     3,     4,     6,     7,     1,     1,
       4,     1,     1,     1,     1,     1,     4,     2,     0,     2,
       2,     3,     1,     3,     1,     4,     1,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     3,     3,     3,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     6,     6,     2,     0,     3,     2,
       4,     4,     6,     5,     3,     5,     0,     2,     2,     3,
       1,     3,     2,     2,     2,     2,     2,     0,     1,     2,
       1,     2,     1,     2,     3,     3,     4,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     6,     6,     4,     4,
       4,     2,     2,     2,     2,     2,     7,     5,     5,     6,
       3,     1,     4,     1,     1,     1,     1,     1,     1,     5,
       7,     8,    10,     6,     8,     0,     2,     2,     3,     0,
       2,     1,     3,     1,     1,     1,     3,     7,     3,     7,
       5,     9,     1,     1,     1,     1,     3,     5,     1,     1,
       3,     4,     3,     4,     3,     5,     6,     1,     3,     3,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   187,   215,   231,   249,     0,     0,     0,   479,
       0,     0,     0,   547,     0,   523,     0,     0,   447,   504,
     474,     0,   733,   734,   735,   781,   782,   783,   787,   788,
     789,   790,   791,   793,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   835,   836,   837,   838,   839,   933,   934,
     795,   736,   840,   480,   481,   841,   842,   843,   844,   845,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   792,   858,   859,   786,   860,   861,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   871,   872,   873,
     874,   875,   876,   877,   878,   879,   785,   880,   881,   882,
     883,   884,   885,   886,   887,   888,   889,   890,   891,   892,
     893,   784,   894,   794,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,   916,   917,   918,   919,   920,
     921,   922,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   935,   936,   937,   938,   939,   940,   941,   942,
     943,     2,   315,   317,   318,     0,   334,   337,   338,   319,
     320,   321,   327,   380,   382,   399,   402,   404,   407,   412,
     415,   418,   420,   422,   424,   426,   429,   430,   432,     0,
     438,   431,   443,   446,   450,   451,   483,     0,   456,   483,
       0,   468,   466,   476,   478,   452,   483,   485,   495,   486,
     487,   488,   491,   492,   489,   490,   511,   513,   514,   515,
     512,   552,   553,   554,   555,   556,   557,   475,   597,   589,
     596,   595,   594,   591,   593,   590,   592,   322,     0,   323,
       0,   325,   324,   326,   497,   498,   499,   496,   477,   328,
     329,   493,   768,   769,   494,   738,   780,     0,     0,     3,
     183,   184,     0,   187,   187,     4,   211,   212,     0,   215,
     215,     5,   227,   228,     0,   231,   231,     6,   249,   242,
     243,   249,     0,    11,    59,     7,     8,     9,     1,   781,
     782,   783,   787,   788,   789,   790,   791,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   831,
     933,   934,   842,   844,   855,   856,   792,   786,   873,   879,
     784,   794,   919,   922,   928,   930,   940,   941,   500,   501,
     780,   781,   782,   788,   791,   784,   465,   518,   519,   520,
       0,   548,     0,   445,   524,     0,   428,   427,   503,     0,
     459,     0,     0,   560,     0,     0,     0,     0,     0,     0,
       0,   568,     0,     0,     0,     0,     0,   457,   458,   460,
     461,   462,   463,   469,   470,   471,   472,   473,     0,     0,
       0,   731,     0,     0,     0,   339,   341,     0,     0,   347,
     349,     0,     0,   369,     0,     0,     0,     0,     0,     0,
     464,     0,     0,     0,   575,     0,     0,   721,   722,     0,
     724,   725,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   335,   336,   332,   333,     0,     0,     0,     0,     0,
       0,     0,     0,   385,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   439,
     444,     0,     0,   453,   455,   454,   467,     0,   482,     0,
     723,     0,     0,     0,     0,   885,   892,     0,     0,     0,
       0,   196,     0,     0,   200,   201,   202,   197,   198,   267,
     268,     0,   199,   185,     0,   181,   182,   186,   885,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,   209,
     210,   214,   885,     0,     0,     0,   259,     0,     0,   263,
     264,   266,   260,   261,     0,   262,     0,   229,   265,     0,
     225,   226,   230,   240,   241,   247,   885,     0,     0,     0,
       0,     0,     0,     0,     0,   246,     0,    13,    65,   523,
       0,   550,   549,   546,     0,   502,   611,   607,     0,   610,
     622,     0,     0,   564,   603,     0,   599,     0,     0,     0,
       0,   598,   604,     0,     0,   737,     0,     0,   567,     0,
     613,     0,   621,   623,   602,     0,     0,     0,     0,     0,
       0,     0,   575,     0,   575,     0,     0,   575,     0,     0,
       0,     0,     0,     0,     0,     0,   619,   614,     0,   618,
     559,     0,   306,     0,   311,     0,     0,     0,     0,     0,
     756,   758,   316,   330,   352,     0,     0,   331,   379,   381,
     384,   387,   388,   389,   397,   398,     0,   383,   390,   391,
     392,   393,   394,   395,   396,     0,     0,     0,   697,   697,
     697,   697,   400,   628,   632,   634,   636,   638,   640,     0,
     405,   406,   403,   408,   410,   409,   411,   413,   414,   416,
     417,     0,     0,     0,     0,   436,     0,   449,   448,     0,
     772,   510,     0,     0,     0,     0,     0,   507,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   208,   749,     0,     0,     0,   269,   188,   193,
     189,   190,   191,   195,   192,   194,     0,     0,     0,   216,
     221,   217,   218,   219,   223,   224,   220,   222,     0,     0,
     309,     0,   232,   233,   234,   235,   239,   236,   237,   238,
     308,   308,   250,   251,   252,   253,   257,   258,   254,   255,
     256,    12,     0,    61,    62,     0,   524,     0,   551,     0,
     441,   440,     0,   608,   561,   562,     0,   566,   600,   601,
     606,   605,   569,   570,     0,   612,   620,   565,   558,     0,
     730,     0,   505,   506,   343,   340,   345,     0,   348,     0,
     368,   366,   367,     0,     0,   433,     0,     0,     0,   615,
     575,     0,   307,     0,   793,   785,   794,   576,   579,   583,
     585,   588,   586,   587,     0,     0,   771,     0,     0,     0,
       0,     0,     0,   359,   353,   356,   360,     0,   386,     0,
       0,   637,   698,   700,   702,   641,   642,   643,   644,     0,
     401,     0,   627,     0,     0,   419,   421,   423,   573,   425,
     437,     0,     0,   773,     0,     0,   720,   719,   718,   508,
       0,   244,     0,   271,   272,   625,   287,     0,     0,   300,
     301,   277,   278,     0,     0,     0,     0,   282,   283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   290,     0,
     290,     0,     0,     0,   662,   663,     0,     0,   276,   655,
     656,   657,   658,   659,   660,   661,   714,   713,   715,     0,
      10,    19,    47,    33,    54,    14,    37,    15,    37,    16,
      65,    17,    65,    60,    58,    84,     0,    91,   100,     0,
       0,     0,   128,   133,   136,   140,   142,   119,   148,   152,
      88,    89,    67,    68,    65,    69,    66,    70,    97,    71,
     102,    72,    74,    73,    80,   123,    75,    65,    76,    65,
      77,    65,    78,    65,    79,    65,    81,     0,    82,    65,
     523,   523,   541,   516,   442,     0,   624,   563,   571,   732,
       0,     0,   345,     0,     0,     0,     0,     0,     0,   373,
       0,   434,   435,     0,   312,   310,     0,     0,     0,     0,
     580,   582,   581,   577,     0,     0,   727,     0,   728,     0,
       0,   763,   764,   760,   762,     0,   361,   362,   363,   354,
     639,   697,   699,   701,     0,   631,     0,     0,   646,     0,
       0,     0,     0,     0,     0,   630,   629,   633,     0,   574,
     572,   484,   509,     0,     0,     0,     0,   575,     0,     0,
     286,     0,     0,     0,   275,   749,   753,   754,   755,   750,
     751,     0,     0,     0,     0,   290,     0,   289,     0,   296,
     668,   669,   667,   671,   676,     0,   696,   664,   665,   694,
     666,   670,     0,     0,   695,     0,     0,    25,    21,     0,
       0,     0,    65,    34,    36,     0,    65,    48,    52,    51,
       0,     0,     0,    55,     0,     0,     0,    64,    63,     0,
       0,     0,   116,   113,     0,     0,    62,     0,     0,     0,
       0,   101,     0,    65,     0,    62,    62,   125,   129,     0,
       0,     0,     0,     0,    62,     0,     0,     0,    62,     0,
      62,    62,     0,   147,   150,     0,   153,   154,     0,     0,
       0,     0,   609,   729,     0,     0,     0,     0,   351,   370,
       0,     0,     0,   371,   372,     0,     0,   616,   779,   578,
     584,   774,   777,     0,   313,   314,     0,     0,     0,   765,
       0,     0,   355,     0,   357,   645,   712,   654,   652,   653,
     626,     0,     0,     0,     0,     0,     0,   710,   711,   650,
     651,   635,   716,   717,   245,   248,     0,   270,   279,   280,
     273,   274,   284,   285,   281,     0,   739,   745,     0,     0,
       0,   161,   160,   781,   802,   935,   936,     0,   156,     0,
     159,   157,   168,   179,   175,     0,   205,   203,   293,   294,
     288,   291,     0,     0,   684,     0,     0,   673,   672,     0,
       0,     0,    23,    20,    24,    29,    30,    31,    22,    40,
      38,    65,     0,    35,     0,    50,    49,    46,    57,    56,
      53,    87,     0,     0,    65,   114,     0,    65,    85,    86,
      83,    94,    95,    96,    93,    92,    90,   105,    98,    65,
      99,   103,     0,   120,   121,   122,    65,     0,   131,   130,
      65,   134,   132,   137,   138,   135,   139,   143,   145,   146,
     144,   141,   149,   151,   523,   523,     0,   545,   544,   543,
     542,   344,     0,   346,   350,     0,     0,     0,     0,     0,
     617,     0,     0,     0,   726,   575,     0,   757,   759,     0,
     364,   365,     0,   707,   708,   709,   647,     0,     0,   703,
       0,   648,   649,     0,   299,   297,   747,     0,     0,     0,
       0,   752,   178,     0,     0,     0,     0,     0,   743,   745,
     169,     0,     0,     0,     0,   174,     0,     0,   292,   290,
     677,   677,   679,     0,     0,   686,   686,     0,   304,   302,
      26,    27,    28,    41,    45,    44,     0,     0,     0,    18,
      32,   110,    65,     0,   112,     0,   106,   109,     0,     0,
       0,   124,     0,   118,   127,     0,     0,   523,   342,     0,
     376,     0,   375,   378,   775,   778,     0,     0,   766,     0,
     358,   705,   704,     0,   298,   748,   746,   740,     0,   177,
     176,     0,   165,   164,     0,   155,     0,   171,   170,   173,
     172,     0,   206,   204,   295,     0,     0,     0,     0,     0,
     690,   688,   683,   685,     0,    43,    42,    39,     0,   117,
     111,   108,   107,   104,   126,   529,   535,   521,   532,   538,
     522,     0,     0,     0,   776,     0,   761,   706,   741,   745,
     162,     0,   744,     0,     0,   675,   674,   680,   681,     0,
     689,     0,     0,   687,   305,   303,   115,     0,     0,     0,
       0,   517,     0,   374,   767,     0,     0,   166,   167,   180,
     678,     0,   691,   692,   693,   525,   531,   530,   526,   537,
     536,   527,   534,   533,   528,   540,   539,   377,   742,   163,
     682
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   315,   316,   577,   782,   945,   946,  1282,  1288,
     947,   948,  1122,  1290,  1291,   949,   950,   951,   952,   972,
     578,   953,   785,   973,   974,   975,   976,   977,   978,  1314,
    1150,   979,   980,  1152,  1318,  1319,   981,   982,   983,  1142,
    1143,  1306,   984,   985,  1157,  1327,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1257,  1258,  1259,  1260,  1471,  1546,  1261,  1262,  1263,  1405,
     289,   290,   291,   292,   507,   508,   734,   295,   296,   297,
     298,   301,   302,   303,   304,   307,   293,   309,   310,   294,
     312,   543,   509,   738,   510,   511,   512,   513,   535,   514,
     515,   516,   909,  1244,   517,   518,   519,  1097,   917,   520,
     521,  1385,   522,   556,   434,   761,   643,   644,  1138,   191,
     192,   193,   194,   195,   196,   197,   415,   416,  1012,  1014,
     198,   419,   420,   453,   454,   854,   855,   856,  1048,  1214,
     199,   422,   423,   200,  1018,  1193,  1019,   201,   202,   203,
     204,   666,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   791,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   493,   236,   237,   238,   239,   358,
     240,   241,   242,   243,   244,   712,   245,   246,   247,   369,
     579,   375,  1507,  1510,  1537,  1539,  1538,  1540,  1181,   248,
     372,   249,   582,   250,   251,   252,   384,   593,   253,   254,
     255,   256,   392,   608,   877,  1070,   646,   837,  1033,   838,
     839,   257,   258,   259,   260,   261,   262,   263,   588,   264,
     609,   265,   638,   266,   611,   589,   612,  1005,   896,   682,
     872,   683,   684,   685,   686,   687,   688,  1065,   928,   929,
     930,   931,   932,  1485,  1278,   933,  1492,  1415,  1489,  1533,
     934,   935,   865,  1225,  1376,  1229,   870,   558,   267,   268,
     269,   270,   271,   272,   273,   410,   411,   274,   275,   276,
     277,   604,   278,   524,  1389,  1247,   913,  1089,  1090,   279,
     280,  1043,  1208,  1209,   281,   282,   283,   284,   842,  1203,
     843,   285,   286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1310
static const yytype_int16 yypact[] =
{
     897,  2827,   500,   500,   500,   500,  -105,   172,  7116, -1310,
    5752,   349,    52,    34,  4225,   120,  3060,  3060, -1310, -1310,
   -1310,  1429, -1310, -1310, -1310,   293,   298,   170,   208,   258,
     264,   303,   428, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
     380,   529,   579,   593,   622,   627,   633,   642,   683,   688,
     723,   377, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,   424,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,   451,   695,
   -1310, -1310, -1310, -1310, -1310, -1310,   746, -1310,    61, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,   763,
     763, -1310,   753, -1310, -1310,   786, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,   313,
   -1310, -1310, -1310, -1310, -1310,   814, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,   299, -1310,   798, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,    79, -1310,
   -1310,    19, -1310, -1310, -1310, -1310, -1310,   787, -1310,    37,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310,   634,   637, -1310,
   -1310, -1310,   858, -1310, -1310,   764,   811, -1310, -1310, -1310,
   -1310, -1310,   752,   765, -1310,  1155,   721,   133,   129,   107,
     548, -1310,   769,   762,   778,   780, -1310, -1310, -1310,   309,
   -1310, -1310,  4225,   301, -1310, -1310, -1310,  5752, -1310, -1310,
    5752, -1310, -1310, -1310, -1310,   894, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,  2827, -1310,
    2827, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,   272,   772,   791, -1310,
   -1310, -1310,  3293,   779, -1310, -1310, -1310, -1310,  3526,   779,
   -1310, -1310, -1310, -1310,  3759,   779, -1310, -1310,   779, -1310,
   -1310, -1310,  3992, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,   911,   924,   932,   949,   959, -1310, -1310, -1310, -1310,
     619, -1310,   976,   301, -1310,  7116, -1310, -1310, -1310,   219,
   -1310,  5967,  2827, -1310,   958,   978,  2827,    50,   979,  6933,
    2827, -1310,   972,  7116,  7116,   986,  2827, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,  2827,  7116,
      38, -1310,  2827,  2827,  7116,   995, -1310,  7116,  1023,   998,
   -1310,  7116,    95, -1310,   155,  2827,  2827,  2827,   983,   984,
   -1310,  6182,   958,   162,   884,  2827,   880, -1310, -1310,  2827,
   -1310, -1310,  7116,  2827,  2827,  2827,   746,    61,  2827,   904,
     906, -1310, -1310,   645, -1310,  3060,  3060,  3060,  3060,  3060,
    3060,  3060,  3060, -1310,  3060,  3060,  3060,  3060,  3060,  3060,
    3060,  3060,  4858,  3060,  3060,  3060,  3060,  3060,  3060,  3060,
    3060,  3060,  3060,  3060,   883,   893,   895,   896,  1662, -1310,
     301,  4225,  4225,  1028, -1310,  1028, -1310,  1895,  1028,   319,
   -1310,  2128,   994,   925,  7116,   699,   668,  1000,  1000,  1000,
    1000, -1310,  1000,  1000, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,  1000, -1310, -1310,  1000, -1310, -1310,   251,   512,  1000,
    1000,  1000,  1000,  1000,  1000,  1000,  1000, -1310,  1000, -1310,
   -1310,   488,   302,  1000,  1000,  1000, -1310,  1000,  1000, -1310,
   -1310, -1310, -1310, -1310,  1000, -1310,  1000, -1310, -1310,  1000,
   -1310, -1310,   490, -1310, -1310,   520,   663,  1000,  1000,  1000,
    1000,  1000,  1000,  1000,  1000, -1310,  1000,   789,   604,   948,
     950, -1310, -1310, -1310,    67, -1310, -1310, -1310,   648, -1310,
   -1310,   414,  2361, -1310, -1310,   441, -1310,   303,   959,  1017,
    1018, -1310, -1310,  1019,  1022, -1310,   445,  2594, -1310,  1025,
   -1310,  1029, -1310, -1310, -1310,   476,   479,  1056,   424,  2827,
     492,   508,   884,   746,   884,  7116,    61,   884,   763,  2827,
    2827,   706,   722,   516,  2827,  2827, -1310, -1310,   727, -1310,
   -1310,  7116, -1310,   754, -1310,  6566,   864,   846,  1011,   922,
     852,    11, -1310, -1310, -1310,  2827,   942, -1310,   765, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,  3060, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310,  4858,  2827,  5075,   527,   527,
     527,   527,   989,  1057,  1059,   999, -1310, -1310, -1310,  1044,
     129,   129,   889,   107,   107,   107,   107,   548,   548, -1310,
   -1310,  6566,  6566,  7116,  7116, -1310,   524, -1310, -1310,  2827,
   -1310, -1310,   766,   396,  2827,  2827,  2827, -1310,   767, -1310,
     142,  1048,   758,   962,  1080,  7116,   768,   821,   371,   335,
    7116, -1310, -1310,   483,  7290,   -18,    41, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,   699,   668,   362, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,   512,   374,
   -1310,   759, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
     843,   736, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310,   430, -1310, -1310,  7295,   838,   560, -1310,   960,
   -1310, -1310,  7116, -1310, -1310, -1310,   556, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310,   558, -1310, -1310, -1310, -1310,  2827,
   -1310,   961, -1310, -1310,   975, -1310,   898,  1085, -1310,   963,
   -1310, -1310, -1310,   946,   944, -1310,   565,   567,  7116, -1310,
     884,  1090, -1310,  6750,  1060,  1061,  1063, -1310,   163, -1310,
   -1310, -1310, -1310, -1310,  2827,  2827, -1310,  2827,  2827,  2827,
    1066,  1067,  4408, -1310,  1078, -1310,   832,  2827, -1310,  1058,
     568, -1310,  1020,   902, -1310, -1310, -1310, -1310, -1310,  1030,
   -1310,  4858,  7443,  4858,   982, -1310, -1310, -1310,  1099, -1310,
   -1310,   517,  2827, -1310,   899,   901, -1310, -1310, -1310, -1310,
    1003, -1310,   962, -1310, -1310, -1310, -1310,  7116,  1086, -1310,
   -1310, -1310, -1310,   992,   962,   953,   964, -1310, -1310,  1100,
    1010,  7116,   -51,   907,   798,  7116,   947,   962,  1027,  7116,
    1027,   890,   781,   892, -1310, -1310,  1014,   426, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,  7290,
   -1310, -1310, -1310, -1310, -1310, -1310,   443, -1310,   502, -1310,
     446, -1310,   387,   375, -1310, -1310,   696, -1310, -1310,   870,
     903,   871, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310,   412, -1310, -1310, -1310,   359, -1310,
     886, -1310, -1310, -1310, -1310,   295, -1310,   389, -1310,   872,
   -1310,   539, -1310, -1310, -1310,   429, -1310,   -76, -1310,   712,
     120,   120, -1310, -1310, -1310,  1109, -1310, -1310, -1310, -1310,
    2827,  1144,   898,  1149,  1151,  2827,  2827,  4641,   154, -1310,
    2827, -1310, -1310,   308, -1310, -1310,  1116,  1119,  1120,  6382,
   -1310, -1310, -1310, -1310,   572,   588, -1310,   939, -1310,  1156,
    1156, -1310, -1310,   941, -1310,  2827, -1310, -1310,  1032,  1078,
   -1310,   527, -1310, -1310,  3060,  1059,  1082,   887, -1310,  1110,
    3060,   108,   108,   773,   773, -1310, -1310,   999,  4858, -1310,
   -1310, -1310, -1310,  2827,  2827,  1000,  1000,   884,   962,   850,
   -1310,   962,   962,   817, -1310,    29, -1310, -1310, -1310,  1147,
   -1310,  5306,   126,  1145,  1031,  1027,   962,  1158,  1159,  1158,
   -1310, -1310, -1310, -1310, -1310,   987, -1310, -1310, -1310, -1310,
   -1310, -1310,   106,   988, -1310,  1108,   798, -1310, -1310,  5306,
    6566,   757,   954, -1310, -1310,  6566,   954, -1310, -1310, -1310,
    6566,  2827,  7339, -1310,  6566,  2827,  7372, -1310, -1310,   965,
    2827,   927,   743, -1310,  2827,  2827, -1310,  7420,   -17,  2827,
     168, -1310,   352, -1310,  2827, -1310, -1310,   945, -1310,  6566,
    2827,  7453,  2827,  7486, -1310,  2827,  7519,  7552, -1310,  2827,
   -1310, -1310,  7585, -1310, -1310,  2827, -1310, -1310,  7618,  1163,
    1166,   503, -1310, -1310,  7116,  1079,  7116,  2827, -1310, -1310,
    7116,  1083,   137, -1310, -1310,  1064,  1178, -1310, -1310, -1310,
   -1310,  1071, -1310,   776, -1310, -1310,  2827,  7116,   777, -1310,
     792,  1180, -1310,   856,  1081, -1310,   107, -1310, -1310, -1310,
   -1310,    66,    62,  3060,  3060,   647,  1024, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,   101, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310,   166, -1310,  1073,   991,   -51,
    5752, -1310,  1070,   354,  1209,  1187,  1188,   496, -1310,  5537,
     594,   610, -1310,  1210, -1310,  6566, -1310, -1310, -1310, -1310,
    1158, -1310,   962,   962, -1310,    20,  1014, -1310, -1310,    92,
    1021,   138,   -31,  1220, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,   511,  7651, -1310,  7684, -1310,   858, -1310, -1310,   858,
   -1310, -1310,     5,  2827, -1310, -1310,   993,   858,   858,   375,
   -1310, -1310, -1310, -1310, -1310,   858, -1310, -1310, -1310,   522,
   -1310, -1310,  7717,   858,   375,   375, -1310,   997, -1310,   858,
   -1310,   858, -1310,   375,   858, -1310, -1310,   375,   858,   375,
     375, -1310,   858, -1310,   120,   120,   349, -1310, -1310, -1310,
   -1310, -1310,  2827, -1310, -1310,  1084,  2827,  7116,  2827,  2827,
   -1310,  6566,  6566,  1088, -1310,   884,  1156, -1310, -1310,  1156,
   -1310, -1310,   962, -1310, -1310, -1310, -1310,  3060,  3060,   107,
     102, -1310, -1310,  2827, -1310, -1310, -1310,   794,  6566,   864,
    5306, -1310, -1310,  5752,  5752,   159,  1014,  5306, -1310,  1073,
   -1310,  5537,  5537,  5537,  5537, -1310,  1216,    93, -1310,  1027,
   -1310, -1310,    12,  1014,  1014, -1310, -1310,  6566, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,  6566,  2827,  7750, -1310,
   -1310, -1310,   858,  7783, -1310,  7816, -1310, -1310,  6566,  2827,
    7849, -1310,  7882, -1310,   930,   631,   713,   120, -1310,  6566,
   -1310,  1106, -1310, -1310, -1310, -1310,  6566,  1231, -1310,   795,
   -1310,   107,   107,  3060, -1310, -1310, -1310, -1310,   496, -1310,
   -1310,  1200, -1310, -1310,  1211, -1310,   864, -1310, -1310, -1310,
   -1310,  2827, -1310, -1310,  1158,   796,   799,  1014,  1038,   808,
   -1310, -1310,   686,   686,   130, -1310,   858, -1310,  7915, -1310,
   -1310, -1310,   858, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,  1217,  1115,  2827, -1310,  2827, -1310,   107, -1310,  1073,
   -1310,   176, -1310,   557,  1133, -1310, -1310,   108, -1310,  1014,
   -1310,    92,    92, -1310, -1310, -1310, -1310,   409,   439,   454,
     473, -1310,  2827, -1310, -1310,   864,  1206, -1310, -1310,  1229,
   -1310,  1046, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310,   305, -1310, -1310, -1310, -1310, -1310, -1310,  1248,
   -1310,  -511,  -657, -1310, -1310, -1310,   300, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310,   103, -1310, -1310, -1310, -1310, -1310,
     115, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1093,  -139, -1310, -1310, -1310, -1310, -1310, -1022, -1310, -1310,
   -1310,   966,   967,   968,  -253,  -243,  -517, -1310,   971,   973,
     974, -1310,   970,   981,   977, -1310,   863,   969,   980,    49,
     985,  -283,  -266,  -447,  -254,  -255,  -194,  -167,  -282,  -237,
    -236,  -210, -1310, -1310,  -209,  -199, -1310,  -917, -1310, -1310,
    -165, -1310,  -176,  -279,  -855, -1310,    28,   440,  -582,   263,
     -21,  -252, -1310, -1310, -1310,  1091, -1310,   655, -1310,   267,
    1093, -1310,   654, -1310,   828,   427,   247, -1310, -1310, -1310,
   -1310,  1193,   666, -1310, -1310, -1310,   277, -1310, -1310,   842,
     844, -1310,  -308, -1310,   823,   530,  -471,   525,   528, -1310,
   -1310, -1310,   996, -1310, -1310, -1310, -1310,  1087, -1310, -1310,
   -1310,    55,   523, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
      -8, -1310, -1310, -1310,  -225, -1310,  -457, -1310,  -462,  -390,
   -1310,  -450, -1310, -1310,  -435,   800, -1310,   118, -1310,   -44,
   -1310,  -559, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,  1162,   873, -1310, -1310,
   -1310, -1310, -1310, -1310,   600, -1310,  -599,  -386, -1310,   474,
     314,  -585, -1310, -1310, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,   921, -1310,   923, -1310,   916,   882,   486,  -688,   636,
   -1310, -1310,   448,   449,   256,   656, -1310, -1310,   462, -1310,
   -1310, -1310, -1310,   -74, -1240, -1310,   -75,  -512, -1310, -1310,
   -1310, -1310,  -638, -1053,   117,   276, -1310, -1310, -1310, -1310,
   -1310, -1310, -1310, -1310, -1310, -1310,   725, -1310,   285, -1310,
    -914,  -465,  -380,  -104, -1309, -1201,   262, -1310,   100, -1310,
   -1310, -1310, -1023,   -16, -1310, -1310, -1310, -1310, -1310, -1310,
   -1310,    13,    26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -485
static const yytype_int16 yytable[] =
{
     379,   590,   366,  1099,   495,   693,   694,   695,   696,  1226,
     679,   498,  1109,   590,   613,   678,   499,  1210,   500,   617,
     787,   359,   680,   814,   622,   816,  1283,   624,   819,   567,
     572,   627,   531,   574,   360,  1411,   360,   681,   544,   721,
     444,   866,   867,   868,   532,   529,   568,   918,   920,   546,
     545,   613,   300,   306,   311,   530,  1399,   546,   569,  1092,
     840,   739,   740,   741,   846,   742,   743,   549,   550,   373,
     417,  1245,  1086,   618,   744,   549,   550,   745,   480,   844,
     845,   437,   749,   750,   751,   752,   753,   754,   755,   756,
    1476,   757,  1420,   596,   551,   552,   762,   763,   764,   440,
     765,   766,   551,   552,   533,   553,  1311,   767,   895,   768,
     547,  1383,   769,   553,   480,   597,   840,   840,   570,   480,
     772,   773,   774,   775,   776,   777,   778,   779,   555,   780,
     628,   534,  1222,   536,  1413,  1276,   555,   548,   313,   554,
     476,   435,   371,   844,   845,   571,  1357,   573,  1275,   660,
     661,   662,   663,   664,   665,   915,   667,   668,   669,   670,
     671,   672,   673,   674,  1377,   916,  1173,   895,     8,   473,
     474,   641,   318,   789,  1030,   641,   844,   845,  1270,   314,
     844,   845,   370,   647,   436,     8,  1031,   649,   844,   845,
     628,   651,   652,   653,   538,   737,   654,  1174,   790,  1032,
     559,  1175,   477,  1410,  1076,   642,  1378,  1414,   576,  1386,
    1545,   906,   387,   679,   919,   679,  1080,  1487,   678,   494,
     678,  1276,   496,  1223,  1224,   680,   374,   680,  1222,  1095,
     481,  1024,    22,    23,    24,   817,   851,  1400,  1087,  1088,
     681,   598,   681,   629,   939,   711,   438,  1431,   840,   711,
     388,   830,   852,   360,   444,   418,   360,   619,  1421,  1422,
     898,  1281,   585,  1463,   441,   841,   481,  1519,  1482,  1358,
     912,   481,  1312,   891,  1313,   531,  1384,   490,  1265,  1373,
    1374,  1375,   567,   572,  1550,    81,   574,   532,   529,  1277,
    1417,   478,   479,  1132,   475,  1136,   544,  1468,   530,   568,
     389,  1266,    81,   630,  1017,  1534,   393,   546,   545,   390,
     546,   569,   380,  1418,   501,   875,   876,  1147,   890,  1223,
    1224,   841,   841,   841,   841,   549,   550,   502,   549,   550,
    1161,  1196,  1163,   491,  1166,   381,  1167,  1192,  1172,   492,
     385,   431,  1178,    15,   382,   394,  1459,   533,   300,   386,
     382,  1197,   551,   552,   306,   551,   552,   311,   858,  1488,
     488,   591,  1412,   553,   427,   595,   553,   811,   547,   606,
     722,   570,   723,  1393,   534,   615,   536,   821,   822,  1477,
    1478,  1479,  1480,   391,   428,   429,   555,   616,   584,   555,
    1237,   620,   621,  1240,  1241,   548,   381,   554,   571,   397,
     573,   360,   605,   853,   631,   632,   633,   360,  1271,   679,
    1316,   679,  1006,  1215,   678,   360,   678,  1317,   383,   360,
     360,   680,   359,   680,   383,   844,   845,   359,   408,   724,
     359,   746,   840,   409,   359,   360,   681,   538,   681,   747,
     360,  1179,  1180,   360,   840,   936,   937,   360,  1006,   444,
    1093,   921,   922,   841,  1098,   650,  1555,   360,   559,   844,
     845,   576,   886,   887,   888,  1292,   794,   706,   360,  1294,
     395,   713,   367,   368,  1551,   725,   444,   938,  1236,   396,
     444,  1473,  1474,   726,   727,   728,   729,   730,  1558,   844,
     845,  1137,  1484,   797,  -308,  -308,  1322,   802,   689,  1490,
    1491,  1561,   412,  1246,   844,   845,   907,  1077,  1397,   903,
    1267,   444,   908,   923,   444,  1110,   904,   605,  1111,  1112,
    1113,  1114,  1564,   844,   845,  1556,   759,   444,   807,    11,
     360,   808,    12,    13,   760,   840,  1346,   733,  1245,  1071,
     840,   714,   715,   444,   812,   840,   844,   845,   398,   840,
     716,   444,   444,   844,   845,   523,  1559,  1009,  1153,   444,
     813,   537,   905,   731,   732,   924,   925,   557,   825,   926,
    1562,   796,  1154,  1527,   840,   575,   880,  1155,  1156,  1549,
     722,   748,   723,  1216,  1408,  1409,   804,  1002,   927,  1221,
    1565,   444,   444,   444,  1320,  1036,  1037,  1038,   399,  1349,
     444,  1317,   444,   444,  1003,   853,   679,   444,  1007,  1115,
    1008,   678,   400,   826,   827,  1552,   884,  1021,   680,  1022,
    1051,  1347,  1348,   444,  1204,   885,  1401,  1148,  1234,  1235,
    1072,  1191,  1402,   681,  1428,  1309,  1149,   841,   359,   724,
    1205,   401,  1403,  1202,  1324,  1325,   402,  1433,  1404,   841,
    1435,   360,   403,  1333,   359,   860,  1133,  1337,  1158,  1339,
    1340,   404,  1440,  1134,  1135,  1159,  1160,   360,   758,  1442,
     770,   360,   940,  1444,   941,  1398,   747,  1505,   747,  1506,
     840,   942,   943,   792,  1460,   725,   287,   944,   881,  1145,
     288,   793,  1146,   726,   727,   728,   729,   730,  1168,  1419,
     771,   689,   405,   689,   731,   732,  1169,   406,   747,  1170,
    1171,  1117,  1118,   482,   483,  1127,  1128,  1129,  1119,  1120,
     911,  1121,  1130,  1131,   912,   580,   581,   360,   360,   360,
     360,   722,   748,   723,  1284,   862,   863,   864,   605,  1293,
     841,   444,   407,   910,  1295,   841,   413,   733,  1298,   823,
     841,   360,  1379,  1380,   841,   414,   360,   444,  1183,  1508,
     914,  1509,   828,  1188,  1189,   824,  1457,   722,  1195,   723,
     829,  1123,   421,  1328,  1124,  1498,   840,   840,  1125,   841,
    1423,  1424,  1425,   449,   450,  1445,  1446,  1426,  1427,   831,
     724,  1436,  1437,   853,  1351,   425,  1353,   832,  1438,  1439,
    1355,   882,   882,   840,   722,   748,   723,  1467,  1164,   883,
     889,  1362,  1366,  1285,  1286,  1287,  1165,  1365,   360,  1363,
    1367,  1232,  1233,  1034,  1035,  1483,   724,  1366,   426,   831,
    1366,  1524,   840,   430,  1524,  1368,   725,  1465,  1516,  1525,
     433,   840,  1526,  1529,   726,   727,   728,   729,   730,   439,
    1531,  1530,  1532,   840,   360,  -308,  -308,   735,   736,   360,
    1373,  1374,  1375,   724,   840,  1044,   299,   305,   308,   442,
    1102,   840,   725,  1103,  1104,  1105,  1106,   443,   360,  1407,
     726,   727,   728,   729,   730,   841,  1518,   759,  1511,   783,
     784,   731,   732,   444,  1522,   760,   445,   689,   733,   689,
       1,     2,     3,     4,     5,     6,  1461,  1462,   455,   725,
     359,   722,  1535,   723,   844,   845,   472,   726,   727,   728,
     729,   730,   456,   360,  1085,   473,   474,   484,   605,   893,
     894,   485,   605,  1472,   733,  1354,   497,   360,   486,   899,
     900,   360,   901,   902,   446,   360,   447,   448,   487,   449,
     450,   731,   732,   381,  1364,  1557,  1560,  1563,  1566,   503,
     759,  1000,  1001,  1568,   504,  1116,   385,  1451,   760,   288,
     724,   733,  1046,  1047,   389,  1454,  1455,  1100,  1101,  1107,
    1108,   841,   841,   970,   971,  1176,  1177,  1218,  1219,  1227,
    1228,   395,  1517,  1238,  1239,  1242,  1243,  1141,  1304,  1370,
    1371,   431,  1466,   690,   691,   697,   698,   583,   841,   592,
     699,   700,   376,   377,   707,   708,   725,   878,   878,  1553,
    1554,   594,   601,   607,   726,   727,   728,   729,   730,   614,
     623,  1494,   625,   626,   634,   635,   645,   841,  1406,   648,
    1495,   655,   701,   360,   656,   702,   841,   703,   704,   709,
     719,   720,  1501,   737,   786,   360,   781,   788,   841,  1548,
     798,   799,   800,  1512,  1547,   801,   809,   759,   805,   841,
    1514,   847,   806,   848,   849,   760,   841,   850,   733,   857,
     869,   871,  -158,  1264,   873,   874,   501,   892,   895,   897,
    1011,  1004,  1013,  1010,   689,  1015,  1017,  1016,  1020,   641,
    1448,  1050,  1027,  1028,  1450,  1029,  1452,  1453,  1039,  1040,
    1296,  1264,  -158,  1045,  1299,  1053,  1068,   360,  1052,  1302,
    -158,  -158,  1069,  1307,  1308,  1078,  1081,  1054,  1315,  1075,
    1073,  1464,  1074,  1323,  1079,  1083,  1084,  1082,  1094,  1329,
      81,  1331,  1096,  1091,  1334,   360,   360,  1140,  1338,  1162,
    1144,   360,  1182,  1184,  1342,  1151,   360,  1141,  1186,  1198,
     360,  1187,  1199,  1200,  1206,  1207,  1211,    23,   457,   458,
     459,   460,   461,   462,  1213,   955,   956,   957,   958,  1217,
     959,   463,  1249,   960,  1268,   360,   961,   962,   963,   964,
     965,   966,   967,  1272,   464,   968,   969,   359,  1273,   359,
    1274,  1279,  1280,   359,  1269,  1289,  1303,  1301,  1344,  1326,
     360,  1345,   360,  1352,   314,  1356,   360,   970,   971,  1359,
     359,  1360,  1369,  1361,  1382,  1388,  1372,  1390,  1394,  1395,
    1396,  -483,  1397,   360,  1416,  1434,  1449,  1481,  1513,  1443,
    1456,  1515,  1392,  1520,  1528,  1541,  1521,  1542,  1276,  1569,
    -484,  1264,  1570,  1126,   317,  1321,  1139,  1305,  1475,   525,
     526,  1543,   527,  1544,   465,   466,   467,   468,   469,   470,
     539,  1025,   540,  1387,   541,   560,   360,   563,   815,  1185,
     818,   657,  1432,   562,  1049,   360,   561,   451,   564,   452,
    1567,   360,  1212,   424,   820,  1194,   565,   658,   692,  1350,
     659,   718,  1447,   432,   879,   640,   489,  1026,   599,   610,
     600,   859,  -158,   639,  1023,  -158,  -158,  -158,  -158,  1055,
    -158,  -158,  1067,  -158,  1231,   471,  -158,  -158,  -158,  -158,
    -158,  -158,  -158,   861,  1066,  -158,  -158,  1486,  -158,  -158,
    1230,  1493,  1381,   810,  1220,  -158,  -158,  1248,  -158,  1391,
    1458,     0,     0,     0,  -158,     0,     0,  -158,  -158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1264,   360,     0,  1469,  1470,   360,   360,  1264,
       0,     0,     0,  1264,  1264,  1264,  1264,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1496,     0,     0,     0,
       0,     0,     0,     0,   360,     0,   360,     0,  1502,   360,
     360,     0,     0,   360,     0,     0,     0,   360,   360,   360,
     360,     0,     0,     0,     0,     0,     0,     0,     8,     0,
       9,     0,     0,   360,     0,     0,     0,     0,     0,    10,
       0,     0,   360,     0,     0,    11,     0,     0,    12,    13,
    1523,    14,     0,    15,   360,    16,    17,    18,     0,    19,
      20,    21,   378,     0,     0,   360,     0,     0,     0,     0,
       0,     0,   360,     0,     0,    22,    23,    24,    25,    26,
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
     190,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   705,     0,     0,     0,    22,    23,
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
     187,   188,   189,   190,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,   710,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     184,   185,   186,   187,   188,   189,   190,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,   717,     0,     0,     0,     0,     0,     0,     0,     0,
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
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   795,     0,     0,     0,    22,    23,    24,
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
     188,   189,   190,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   803,     0,     0,     0,
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
     185,   186,   187,   188,   189,   190,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,    78,    79,
      80,     0,     0,    81,    82,    83,    84,     0,     0,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,     0,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   339,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,    78,    79,    80,     0,     0,    81,    82,    83,    84,
       0,     0,    85,   342,    87,   343,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   344,   345,   101,   346,
     103,     0,   104,   347,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,     0,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
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
     129,   130,   131,   505,   133,   134,   135,   136,   137,     0,
     138,   506,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,     0,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
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
     126,   127,   128,   129,   130,   131,   528,   133,   134,   135,
     136,   137,     0,   138,   506,   140,     0,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
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
     123,   124,   125,   126,   127,   128,   129,   130,   131,   542,
     133,   134,   135,   136,   137,     0,   138,   506,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
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
     130,   131,   566,   133,   134,   135,   136,   137,     0,   138,
     506,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   339,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,    78,    79,    80,     0,
       0,    81,    82,    83,    84,     0,     0,    85,   342,    87,
     343,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   344,   345,   101,   346,   103,     0,   104,   347,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   348,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   352,   169,   170,   353,   172,   173,   174,
     175,     0,   176,   354,   178,   355,   180,   181,   182,   183,
     184,   185,   186,   356,   357,   189,   190,   319,   320,   321,
     322,   323,   324,   325,   326,    33,    34,    35,    36,    37,
      38,    39,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   339,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   340,
     341,    80,     0,     0,     0,    82,     0,     0,     0,     0,
      85,   342,    87,   343,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   344,   345,   101,   346,   103,     0,
     104,   347,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   348,   120,   121,   122,   123,
     124,   349,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   350,
     142,   351,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   352,   169,   170,   353,
     172,   173,   174,   175,     0,   176,   354,   178,   355,   180,
     181,   182,   183,   184,   185,   186,   356,   357,   189,   190,
    1190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   833,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1041,     0,  1042,
     361,   362,    27,    28,   363,    30,    31,   364,   834,    34,
      35,    36,    37,    38,    39,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   339,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   340,   341,    80,     0,     0,     0,    82,     0,
       0,     0,     0,    85,   342,    87,   343,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   344,   345,   101,
     346,   103,     0,   104,   347,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   348,   120,
     121,   122,   123,   124,   349,   835,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   365,   142,   836,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   352,
     169,   170,   353,   172,   173,   174,   175,     8,   176,   354,
     178,   355,   180,   181,   182,   183,   184,   185,   186,   356,
     357,   189,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
     675,     0,     0,     0,     0,     0,     0,     0,     0,   676,
       0,     0,   677,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,    35,    36,    37,
      38,    39,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   339,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   340,
     341,    80,     0,     0,    81,    82,     0,     0,     0,     0,
      85,   342,    87,   343,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   344,   345,   101,     0,   103,     0,
     104,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   348,   120,   121,   122,   123,
     124,   349,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,     0,
     142,     0,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   352,   169,   170,   353,
     172,   173,   174,   175,     8,   176,   354,   178,   355,   180,
     181,   182,   183,   184,   185,   186,   356,   357,   189,   190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,   675,     0,     0,
       0,     0,     0,     0,     0,     0,   676,     0,     0,     0,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   339,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   340,   341,    80,     0,
       0,    81,    82,     0,     0,     0,     0,    85,   342,    87,
     343,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   344,   345,   101,     0,   103,     0,   104,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   348,   120,   121,   122,   123,   124,   349,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,     0,   142,     0,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   352,   169,   170,   353,   172,   173,   174,
     175,     0,   176,   354,   178,   355,   180,   181,   182,   183,
     184,   185,   186,   356,   357,   189,   190,     9,     0,     0,
       0,     0,     0,     0,     0,     0,  1250,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1251,     0,
       0,     0,     0,     0,  1252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1253,   362,    27,    28,   363,
      30,    31,   364,    33,    34,    35,    36,    37,    38,    39,
    1254,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     339,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   340,   341,    80,
       0,     0,     0,    82,    83,    84,     0,     0,    85,   342,
      87,   343,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   344,   345,   101,   346,   103,     0,   104,   347,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   348,   120,   121,   122,   123,   124,   349,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   365,   142,   351,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   352,   169,   170,   353,   172,   173,
     174,   175,     0,   176,   354,   178,   355,   180,   181,  1255,
    1256,   184,   185,   186,   356,   357,   189,   190,     9,     0,
       0,     0,     0,     0,     0,     0,     0,  1250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1253,   362,    27,    28,
     363,    30,    31,   364,    33,    34,    35,    36,    37,    38,
      39,  1254,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   339,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   340,   341,
      80,     0,     0,     0,    82,    83,    84,     0,     0,    85,
     342,    87,   343,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   344,   345,   101,   346,   103,     0,   104,
     347,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   348,   120,   121,   122,   123,   124,
     349,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   365,   142,
     351,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   352,   169,   170,   353,   172,
     173,   174,   175,     9,   176,   354,   178,   355,   180,   181,
     182,   183,   184,   185,   186,   356,   357,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,   362,    27,    28,   363,    30,    31,   364,    33,
      34,    35,    36,    37,    38,    39,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   339,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   340,   341,    80,     0,     0,     0,    82,
      83,    84,     0,     0,    85,   342,    87,   343,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   344,   345,
     101,   346,   103,     0,   104,   347,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   348,
     120,   121,   122,   123,   124,   349,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   365,   142,   351,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     352,   169,   170,   353,   172,   173,   174,   175,   586,   176,
     354,   178,   355,   180,   181,   182,   183,   184,   185,   186,
     356,   357,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     587,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   319,   320,   321,   322,
     323,   324,   325,   326,    33,    34,    35,    36,    37,    38,
      39,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    52,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   339,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,   340,   341,
      80,     0,     0,     0,    82,     0,     0,     0,     0,    85,
     342,    87,   343,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   344,   345,   101,   346,   103,     0,   104,
     347,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   348,   120,   121,   122,   123,   124,
     349,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   350,   142,
     351,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   352,   169,   170,   353,   172,
     173,   174,   175,   636,   176,   354,   178,   355,   180,   181,
     182,   183,   184,   185,   186,   356,   357,   189,   190,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   637,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   319,   320,   321,   322,   323,   324,   325,   326,    33,
      34,    35,    36,    37,    38,    39,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   339,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   340,   341,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   342,    87,   343,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   344,   345,
     101,   346,   103,     0,   104,   347,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   348,
     120,   121,   122,   123,   124,   349,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   350,   142,   351,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     352,   169,   170,   353,   172,   173,   174,   175,     0,   176,
     354,   178,   355,   180,   181,   182,   183,   184,   185,   186,
     356,   357,   189,   190,   833,  1201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   361,   362,    27,    28,   363,    30,    31,   364,   834,
      34,    35,    36,    37,    38,    39,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   339,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   340,   341,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   342,    87,   343,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   344,   345,
     101,   346,   103,     0,   104,   347,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   348,
     120,   121,   122,   123,   124,   349,   835,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   365,   142,   836,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     352,   169,   170,   353,   172,   173,   174,   175,   833,   176,
     354,   178,   355,   180,   181,   182,   183,   184,   185,   186,
     356,   357,   189,   190,     0,   361,   362,    27,    28,   363,
      30,    31,   364,   834,    34,    35,    36,    37,    38,    39,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     339,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   340,   341,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   342,
      87,   343,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   344,   345,   101,   346,   103,     0,   104,   347,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   348,   120,   121,   122,   123,   124,   349,
     835,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   365,   142,   836,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   352,   169,   170,   353,   172,   173,
     174,   175,   833,   176,   354,   178,   355,   180,   181,   182,
     183,   184,   185,   186,   356,   357,   189,   190,     0,   361,
     362,    27,    28,   363,    30,    31,   364,    33,    34,    35,
      36,    37,    38,    39,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   339,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   340,   341,    80,     0,     0,     0,    82,     0,     0,
       0,     0,    85,   342,    87,   343,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   344,   345,   101,   346,
     103,     0,   104,   347,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   348,   120,   121,
     122,   123,   124,   349,   835,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   365,   142,   836,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,   602,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,   319,   320,   321,   322,   323,   324,   325,   326,
      33,    34,    35,    36,    37,    38,    39,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   339,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   340,   341,    80,     0,     0,   603,
      82,     0,     0,     0,     0,    85,   342,    87,   343,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   344,
     345,   101,   346,   103,     0,   104,   347,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     348,   120,   121,   122,   123,   124,   349,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   350,   142,   351,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   352,   169,   170,   353,   172,   173,   174,   175,     0,
     176,   354,   178,   355,   180,   181,   182,   183,   184,   185,
     186,   356,   357,   189,   190,   319,   320,   321,   322,   323,
     324,   325,   326,    33,    34,    35,    36,    37,    38,    39,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     339,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   340,   341,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   342,
      87,   343,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   344,   345,   101,   346,   103,     0,   104,   347,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   348,   120,   121,   122,   123,   124,   349,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   350,   142,   351,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   352,   169,   170,   353,   172,   173,
     174,   175,     0,   176,   354,   178,   355,   180,   181,   182,
     183,   184,   185,   186,   356,   357,   189,   190,    34,    35,
      36,    37,    38,    39,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   339,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   340,   341,    80,     0,     0,     0,    82,     0,     0,
       0,     0,    85,   342,    87,   343,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   344,   345,   101,     0,
     103,     0,   104,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   348,   120,   121,
     122,   123,   124,   349,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,     0,   142,     0,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,     0,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,   921,   922,     0,     0,     0,   954,     0,  1056,
     955,   956,   957,   958,     0,   959,     0,     0,   960,     0,
       0,   961,   962,   963,   964,   965,   966,   967,  1057,     0,
     968,   969,     0,     0,  1058,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,  1297,   970,   971,   955,   956,   957,   958,     0,   959,
       0,     0,   960,     0,   923,   961,   962,   963,   964,   965,
     966,   967,     0,     0,   968,   969,     0,     0,     0,     0,
       0,     0,     0,     0,  1300,     0,     0,   955,   956,   957,
     958,     0,   959,   314,     0,   960,   970,   971,   961,   962,
     963,   964,   965,   966,   967,     0,     0,   968,   969,  1059,
    1060,  1061,  1062,     0,  1063,  1064,   924,   925,     0,     0,
     926,     0,     0,     0,     0,     0,   314,     0,     0,   970,
     971,     0,  1310,     0,     0,   955,   956,   957,   958,   927,
     959,     0,     0,   960,     0,     0,   961,   962,   963,   964,
     965,   966,   967,     0,     0,   968,   969,     0,     0,     0,
       0,     0,     0,     0,     0,  1330,     0,     0,   955,   956,
     957,   958,     0,   959,   314,     0,   960,   970,   971,   961,
     962,   963,   964,   965,   966,   967,     0,     0,   968,   969,
       0,     0,     0,     0,     0,     0,     0,     0,  1332,     0,
       0,   955,   956,   957,   958,     0,   959,   314,     0,   960,
     970,   971,   961,   962,   963,   964,   965,   966,   967,     0,
       0,   968,   969,     0,     0,     0,     0,     0,     0,     0,
       0,  1335,     0,     0,   955,   956,   957,   958,     0,   959,
     314,     0,   960,   970,   971,   961,   962,   963,   964,   965,
     966,   967,     0,     0,   968,   969,     0,     0,     0,     0,
       0,     0,     0,     0,  1336,     0,     0,   955,   956,   957,
     958,     0,   959,   314,     0,   960,   970,   971,   961,   962,
     963,   964,   965,   966,   967,     0,     0,   968,   969,     0,
       0,     0,     0,     0,     0,     0,     0,  1341,     0,     0,
     955,   956,   957,   958,     0,   959,   314,     0,   960,   970,
     971,   961,   962,   963,   964,   965,   966,   967,     0,     0,
     968,   969,     0,     0,     0,     0,     0,     0,     0,     0,
    1343,     0,     0,   955,   956,   957,   958,     0,   959,   314,
       0,   960,   970,   971,   961,   962,   963,   964,   965,   966,
     967,     0,     0,   968,   969,     0,     0,     0,     0,     0,
       0,     0,     0,  1429,     0,     0,   955,   956,   957,   958,
       0,   959,   314,     0,   960,   970,   971,   961,   962,   963,
     964,   965,   966,   967,     0,     0,   968,   969,     0,     0,
       0,     0,     0,     0,     0,     0,  1430,     0,     0,   955,
     956,   957,   958,     0,   959,   314,     0,   960,   970,   971,
     961,   962,   963,   964,   965,   966,   967,     0,     0,   968,
     969,     0,     0,     0,     0,     0,     0,     0,     0,  1441,
       0,     0,   955,   956,   957,   958,     0,   959,   314,     0,
     960,   970,   971,   961,   962,   963,   964,   965,   966,   967,
       0,     0,   968,   969,     0,     0,     0,     0,     0,     0,
       0,     0,  1497,     0,     0,   955,   956,   957,   958,     0,
     959,   314,     0,   960,   970,   971,   961,   962,   963,   964,
     965,   966,   967,     0,     0,   968,   969,     0,     0,     0,
       0,     0,     0,     0,     0,  1499,     0,     0,   955,   956,
     957,   958,     0,   959,   314,     0,   960,   970,   971,   961,
     962,   963,   964,   965,   966,   967,     0,     0,   968,   969,
       0,     0,     0,     0,     0,     0,     0,     0,  1500,     0,
       0,   955,   956,   957,   958,     0,   959,   314,     0,   960,
     970,   971,   961,   962,   963,   964,   965,   966,   967,     0,
       0,   968,   969,     0,     0,     0,     0,     0,     0,     0,
       0,  1503,     0,     0,   955,   956,   957,   958,     0,   959,
     314,     0,   960,   970,   971,   961,   962,   963,   964,   965,
     966,   967,     0,     0,   968,   969,     0,     0,     0,     0,
       0,     0,     0,     0,  1504,     0,     0,   955,   956,   957,
     958,     0,   959,   314,     0,   960,   970,   971,   961,   962,
     963,   964,   965,   966,   967,     0,     0,   968,   969,     0,
       0,     0,     0,     0,     0,     0,     0,  1536,     0,     0,
     955,   956,   957,   958,     0,   959,   314,     0,   960,   970,
     971,   961,   962,   963,   964,   965,   966,   967,     0,     0,
     968,   969,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,   970,   971
};

static const yytype_int16 yycheck[] =
{
      21,   381,    10,   920,   229,   476,   477,   478,   479,  1062,
     472,   236,   926,   393,   394,   472,   268,  1040,   270,   409,
     579,     8,   472,   622,   414,   624,  1119,   417,   627,   312,
     312,   421,   298,   312,     8,  1275,    10,   472,   304,   504,
      35,   679,   680,   681,   298,   298,   312,   735,   736,   304,
     304,   431,     3,     4,     5,   298,  1257,   312,   312,   914,
     645,   508,   509,   510,   646,   512,   513,   304,   304,    14,
       9,    42,   123,    35,   521,   312,   312,   524,    12,    50,
      51,    62,   529,   530,   531,   532,   533,   534,   535,   536,
    1399,   538,   123,    43,   304,   304,   543,   544,   545,    62,
     547,   548,   312,   312,   298,   304,   123,   554,   126,   556,
     304,    10,   559,   312,    12,    65,   701,   702,   312,    12,
     567,   568,   569,   570,   571,   572,   573,   574,   304,   576,
      35,   298,   120,   298,    42,   115,   312,   304,   243,   304,
      11,    62,   108,    50,    51,   312,     9,   312,    42,   457,
     458,   459,   460,   461,   462,   173,   464,   465,   466,   467,
     468,   469,   470,   471,   102,   183,   242,   126,     9,    36,
      37,     9,     0,   106,    11,     9,    50,    51,  1095,   284,
      50,    51,   130,   435,   105,     9,    23,   439,    50,    51,
      35,   443,   444,   445,   298,    53,   448,   273,   131,    36,
     304,   277,    73,   183,   892,    43,   144,   115,   312,    43,
    1519,   728,    42,   675,   173,   677,   904,   205,   675,   227,
     677,   115,   230,   211,   212,   675,   106,   677,   120,   917,
     164,   830,    56,    57,    58,   625,   225,  1259,   289,   290,
     675,   191,   677,   148,   761,   497,   227,   242,   833,   501,
      42,   641,   241,   227,    35,   194,   230,   219,   289,   290,
     725,  1116,    43,   161,   227,   645,   164,  1468,   175,   132,
     241,   164,   289,   720,   291,   541,   175,   222,   152,   213,
     214,   215,   565,   565,  1524,   126,   565,   541,   541,   183,
     152,   162,   163,   950,   161,   952,   562,  1390,   541,   565,
      42,   175,   126,   148,   150,   175,    42,   562,   562,    51,
     565,   565,    19,   175,    42,   701,   702,   974,   176,   211,
     212,   701,   702,   703,   704,   562,   562,    55,   565,   565,
     987,    23,   989,    32,   991,    42,   993,   183,   995,    38,
      42,    42,   999,    34,    51,    42,  1369,   541,   299,    51,
      51,    43,   562,   562,   305,   565,   565,   308,   666,  1412,
      51,   382,  1276,   562,    51,   386,   565,   619,   562,   390,
      68,   565,    70,    19,   541,   396,   541,   629,   630,  1401,
    1402,  1403,  1404,   125,    71,    72,   562,   408,   375,   565,
    1078,   412,   413,  1081,  1082,   562,    42,   562,   565,    19,
     565,   375,   389,   655,   425,   426,   427,   381,  1096,   871,
     242,   873,   792,  1051,   871,   389,   873,   249,   125,   393,
     394,   871,   409,   873,   125,    50,    51,   414,    51,   127,
     417,   180,  1017,     9,   421,   409,   871,   541,   873,   188,
     414,  1000,  1001,   417,  1029,    71,    72,   421,   828,    35,
     915,    89,    90,   833,   919,   442,    47,   431,   562,    50,
      51,   565,   714,   715,   716,  1122,    52,   488,   442,  1126,
      42,   152,   123,   124,  1527,   173,    35,   103,  1077,    51,
      35,  1395,  1396,   181,   182,   183,   184,   185,    49,    50,
      51,   116,  1409,    52,   192,   193,  1153,    52,   472,  1413,
    1414,    47,    51,  1085,    50,    51,   171,   897,    12,   138,
    1092,    35,   177,   151,    35,    89,   145,   504,    92,    93,
      94,    95,    49,    50,    51,   116,   224,    35,    52,    26,
     504,    52,    29,    30,   232,  1120,    33,   235,    42,    22,
    1125,   222,   223,    35,    52,  1130,    50,    51,    19,  1134,
     231,    35,    35,    50,    51,   292,   117,   809,   263,    35,
      52,   298,   191,   192,   193,   203,   204,   304,    52,   207,
     116,   592,   277,  1487,  1159,   312,    52,   282,   283,    22,
      68,    69,    70,  1054,  1272,  1273,   607,    27,   226,  1060,
     117,    35,    35,    35,   242,   847,   848,   849,    19,  1181,
      35,   249,    35,    35,    44,   857,  1068,    35,    52,   183,
      52,  1068,    19,   634,   635,  1529,   220,    52,  1068,    52,
      52,   118,   119,    35,    52,   229,    32,   268,  1075,  1076,
     882,  1017,    38,  1068,  1291,  1146,   277,  1017,   625,   127,
      52,    19,    32,  1029,  1155,  1156,    19,  1304,    38,  1029,
    1307,   625,    19,  1164,   641,   676,   269,  1168,   269,  1170,
    1171,    19,  1319,   276,   277,   276,   277,   641,   180,  1326,
     180,   645,   242,  1330,   244,  1257,   188,    46,   188,    48,
    1265,   251,   252,    35,  1372,   173,   186,   257,   709,   277,
     190,    43,   280,   181,   182,   183,   184,   185,   269,  1281,
     180,   675,    19,   677,   192,   193,   277,    19,   188,   280,
     281,   268,   269,   165,   166,   269,   270,   271,   275,   276,
     237,   278,   276,   277,   241,   106,   107,   701,   702,   703,
     704,    68,    69,    70,  1120,   208,   209,   210,   725,  1125,
    1120,    35,    19,   730,  1130,  1125,    51,   235,  1134,    43,
    1130,   725,  1223,  1224,  1134,     9,   730,    35,  1010,    46,
     734,    48,    35,  1015,  1016,    43,  1365,    68,  1020,    70,
      43,   269,     9,  1159,   272,  1432,  1361,  1362,   276,  1159,
     269,   270,   271,   138,   139,  1344,  1345,   276,   277,    35,
     127,   269,   270,  1045,  1184,    42,  1186,    43,   276,   277,
    1190,    35,    35,  1388,    68,    69,    70,  1389,   269,    43,
      43,    35,    35,    56,    57,    58,   277,  1207,   792,    43,
      43,  1073,  1074,   844,   845,  1407,   127,    35,    42,    35,
      35,    35,  1417,    19,    35,    43,   173,    43,    43,    43,
      42,  1426,    43,    35,   181,   182,   183,   184,   185,    62,
     164,    43,   166,  1438,   828,   192,   193,   189,   190,   833,
     213,   214,   215,   127,  1449,   852,     3,     4,     5,   235,
      89,  1456,   173,    92,    93,    94,    95,   240,   852,  1265,
     181,   182,   183,   184,   185,  1265,  1468,   224,  1447,   285,
     286,   192,   193,    35,  1476,   232,   132,   871,   235,   873,
       3,     4,     5,     6,     7,     8,  1377,  1378,   156,   173,
     897,    68,  1494,    70,    50,    51,   195,   181,   182,   183,
     184,   185,   157,   897,   911,    36,    37,   158,   915,   171,
     172,   169,   919,  1395,   235,  1187,    42,   911,   160,   171,
     172,   915,   121,   122,   133,   919,   135,   136,   168,   138,
     139,   192,   193,    42,  1206,  1537,  1538,  1539,  1540,   187,
     224,   123,   124,  1545,   173,   939,    42,  1357,   232,   190,
     127,   235,   140,   141,    42,  1361,  1362,    87,    88,    87,
      88,  1361,  1362,   287,   288,   273,   274,   100,   101,   216,
     217,    42,  1463,   143,   144,   178,   179,   254,   255,   143,
     144,    42,  1388,   473,   474,   480,   481,    31,  1388,    51,
     482,   483,    16,    17,   491,   492,   173,   703,   704,  1531,
    1532,    43,    43,    51,   181,   182,   183,   184,   185,    43,
      35,  1417,     9,    35,    51,    51,   152,  1417,  1263,   159,
    1426,   137,   159,  1017,   138,   152,  1426,   152,   152,    21,
      56,   126,  1438,    53,   106,  1029,   267,   107,  1438,  1521,
      43,    43,    43,  1449,  1521,    43,    10,   224,    43,  1449,
    1456,   225,    43,    62,   152,   232,  1456,   225,   235,   137,
      91,    24,    12,  1091,    25,    86,    42,    39,   126,     9,
     115,   131,   194,   132,  1068,    10,   150,   134,   154,     9,
    1352,    43,    42,    42,  1356,    42,  1358,  1359,    42,    42,
    1131,  1119,    42,    35,  1135,   213,   134,  1091,    98,  1140,
      50,    51,    23,  1144,  1145,    39,   173,    97,  1149,   126,
     231,  1383,   231,  1154,   142,    35,   126,   173,   191,  1160,
     126,  1162,   115,   236,  1165,  1119,  1120,   277,  1169,   277,
     279,  1125,    43,     9,  1175,   269,  1130,   254,     9,    43,
    1134,    10,    43,    43,   225,     9,   225,    57,    13,    14,
      15,    16,    17,    18,   142,   245,   246,   247,   248,    97,
     250,    26,    35,   253,    39,  1159,   256,   257,   258,   259,
     260,   261,   262,    35,    39,   265,   266,  1184,    39,  1186,
     213,   213,    94,  1190,   173,   251,   279,   242,    45,   264,
    1184,    45,  1186,   134,   284,   132,  1190,   287,   288,   155,
    1207,    43,    42,   152,   200,   152,   145,   236,    19,    42,
      42,    21,    12,  1207,   213,   242,   152,    21,   132,   242,
     152,    10,  1250,    43,   206,    28,    35,   132,   115,    43,
      21,  1259,   206,   948,     6,  1152,   956,  1142,  1397,   293,
     293,  1513,   294,  1515,   109,   110,   111,   112,   113,   114,
     299,   831,   299,  1245,   300,   305,  1250,   308,   623,  1012,
     626,   453,  1303,   306,   857,  1259,   305,   196,   308,   196,
    1542,  1265,  1045,   100,   628,  1018,   311,   455,   475,  1181,
     456,   501,  1346,   141,   704,   432,   219,   833,   387,   393,
     387,   675,   242,   431,   828,   245,   246,   247,   248,   871,
     250,   251,   873,   253,  1068,   170,   256,   257,   258,   259,
     260,   261,   262,   677,   872,   265,   266,  1411,   268,   269,
    1064,  1416,  1225,   618,  1059,   275,   276,  1085,   278,  1249,
    1366,    -1,    -1,    -1,   284,    -1,    -1,   287,   288,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1357,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1390,  1357,    -1,  1393,  1394,  1361,  1362,  1397,
      -1,    -1,    -1,  1401,  1402,  1403,  1404,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1427,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1388,    -1,  1390,    -1,  1439,  1393,
    1394,    -1,    -1,  1397,    -1,    -1,    -1,  1401,  1402,  1403,
    1404,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    -1,  1417,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,  1426,    -1,    -1,    26,    -1,    -1,    29,    30,
    1481,    32,    -1,    34,  1438,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    -1,  1449,    -1,    -1,    -1,    -1,
      -1,    -1,  1456,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,    -1,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    -1,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    -1,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,    -1,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    -1,    36,    37,    38,
      -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,    -1,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
     126,   127,   128,   129,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   187,   188,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
      -1,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    -1,    36,    37,    38,    -1,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,    -1,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,   126,   127,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    -1,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,
      37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    -1,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,   126,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,    -1,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,   126,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,    -1,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    -1,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    -1,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    -1,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,    -1,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,   291,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,    -1,   187,   188,
     189,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,     9,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    54,    -1,    56,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,   126,   127,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,    -1,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,    -1,
     192,    -1,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     9,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,   126,   127,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,    -1,   152,    -1,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,    -1,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,    -1,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    -1,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,    -1,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,    11,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
     128,   129,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    11,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,   112,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,
     123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    -1,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,    -1,   187,   188,   189,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,    11,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    -1,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    -1,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    -1,    -1,
      -1,   109,   110,   111,   112,   113,   114,   115,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    -1,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,    -1,   187,
     188,   189,    -1,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,    42,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,    42,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    43,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,    -1,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    -1,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,    -1,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,    -1,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,    -1,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,    -1,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,    -1,   192,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    -1,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    89,    90,    -1,    -1,    -1,   242,    -1,    96,
     245,   246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,   115,    -1,
     265,   266,    -1,    -1,   121,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,   242,   287,   288,   245,   246,   247,   248,    -1,   250,
      -1,    -1,   253,    -1,   151,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   284,    -1,   253,   287,   288,   256,   257,
     258,   259,   260,   261,   262,    -1,    -1,   265,   266,   196,
     197,   198,   199,    -1,   201,   202,   203,   204,    -1,    -1,
     207,    -1,    -1,    -1,    -1,    -1,   284,    -1,    -1,   287,
     288,    -1,   242,    -1,    -1,   245,   246,   247,   248,   226,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,   287,   288
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   293,     9,    11,
      20,    26,    29,    30,    32,    34,    36,    37,    38,    40,
      41,    42,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   109,   110,   111,   112,   113,   114,   115,   121,   122,
     123,   126,   127,   128,   129,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   187,   188,
     189,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   411,   412,   413,   414,   415,   416,   417,   422,   432,
     435,   439,   440,   441,   442,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   477,   478,   479,   480,
     482,   483,   484,   485,   486,   488,   489,   490,   501,   503,
     505,   506,   507,   510,   511,   512,   513,   523,   524,   525,
     526,   527,   528,   529,   531,   533,   535,   570,   571,   572,
     573,   574,   575,   576,   579,   580,   581,   582,   584,   591,
     592,   596,   597,   598,   599,   603,   604,   186,   190,   362,
     363,   364,   365,   378,   381,   369,   370,   371,   372,   378,
     381,   373,   374,   375,   376,   378,   381,   377,   378,   379,
     380,   381,   382,   243,   284,   294,   295,   311,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   104,
     121,   122,   133,   135,   146,   147,   149,   153,   167,   173,
     191,   193,   218,   221,   228,   230,   238,   239,   481,   603,
     604,    59,    60,    63,    66,   191,   472,   123,   124,   491,
     130,   108,   502,   463,   106,   493,   454,   454,    43,   412,
      19,    42,    51,   125,   508,    42,    51,    42,    42,    42,
      51,   125,   514,    42,    42,    42,    51,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    51,     9,
     577,   578,    51,    51,     9,   418,   419,     9,   194,   423,
     424,     9,   433,   434,   433,    42,    42,    51,    71,    72,
      19,    42,   508,    42,   406,    62,   105,    62,   227,    62,
      62,   227,   235,   240,    35,   132,   133,   135,   136,   138,
     139,   417,   422,   425,   426,   156,   157,    13,    14,    15,
      16,    17,    18,    26,    39,   109,   110,   111,   112,   113,
     114,   170,   195,    36,    37,   161,    11,    73,   162,   163,
      12,   164,   165,   166,   158,   169,   160,   168,    51,   459,
     463,    32,    38,   476,   472,   476,   472,    42,   476,   413,
     413,    42,    55,   187,   173,   180,   188,   366,   367,   384,
     386,   387,   388,   389,   391,   392,   393,   396,   397,   398,
     401,   402,   404,   411,   585,   363,   364,   365,   180,   366,
     367,   384,   386,   388,   389,   390,   402,   411,   585,   370,
     371,   372,   180,   383,   384,   386,   387,   388,   389,   391,
     392,   393,   396,   397,   402,   404,   405,   411,   569,   585,
     374,   375,   376,   379,   380,   382,   180,   383,   384,   386,
     388,   389,   390,   402,   405,   411,   585,   296,   312,   492,
     106,   107,   504,    31,   603,    43,    11,    43,   530,   537,
     584,   412,    51,   509,    43,   412,    43,    65,   191,   533,
     535,    43,    43,   126,   583,   603,   412,    51,   515,   532,
     537,   536,   538,   584,    43,   412,   412,   481,    35,   219,
     412,   412,   481,    35,   481,     9,    35,   481,    35,   148,
     148,   412,   412,   412,    51,    51,    11,    43,   534,   538,
     509,     9,    43,   408,   409,   152,   518,   413,   159,   413,
     603,   413,   413,   413,   413,   137,   138,   426,   441,   442,
     444,   444,   444,   444,   444,   444,   443,   444,   444,   444,
     444,   444,   444,   444,   444,    42,    51,    54,   478,   480,
     483,   486,   541,   543,   544,   545,   546,   547,   548,   604,
     447,   447,   446,   448,   448,   448,   448,   449,   449,   450,
     450,   159,   152,   152,   152,    52,   412,   464,   464,    21,
      43,   413,   487,   152,   222,   223,   231,    43,   487,    56,
     126,   583,    68,    70,   127,   173,   181,   182,   183,   184,
     185,   192,   193,   235,   368,   189,   190,    53,   385,   385,
     385,   385,   385,   385,   385,   385,   180,   188,    69,   385,
     385,   385,   385,   385,   385,   385,   385,   385,   180,   224,
     232,   407,   385,   385,   385,   385,   385,   385,   385,   385,
     180,   180,   385,   385,   385,   385,   385,   385,   385,   385,
     385,   267,   297,   285,   286,   314,   106,   493,   107,   106,
     131,   460,    35,    43,    52,    52,   412,    52,    43,    43,
      43,    43,    52,    52,   412,    43,    43,    52,    52,    10,
     578,   413,    52,    52,   518,   419,   518,   481,   424,   518,
     434,   413,   413,    43,    43,    52,   412,   412,    35,    43,
     481,    35,    43,    42,    67,   174,   193,   519,   521,   522,
     523,   584,   600,   602,    50,    51,   410,   225,    62,   152,
     225,   225,   241,   413,   427,   428,   429,   137,   444,   541,
     412,   547,   208,   209,   210,   564,   564,   564,   564,    91,
     568,    24,   542,    25,    86,   519,   519,   516,   522,   516,
      52,   412,    35,    43,   220,   229,   413,   413,   413,    43,
     176,   385,    39,   171,   172,   126,   540,     9,   583,   171,
     172,   121,   122,   138,   145,   191,   368,   171,   177,   394,
     603,   237,   241,   588,   604,   173,   183,   400,   540,   173,
     540,    89,    90,   151,   203,   204,   207,   226,   550,   551,
     552,   553,   554,   557,   562,   563,    71,    72,   103,   368,
     242,   244,   251,   252,   257,   298,   299,   302,   303,   307,
     308,   309,   310,   313,   242,   245,   246,   247,   248,   250,
     253,   256,   257,   258,   259,   260,   261,   262,   265,   266,
     287,   288,   311,   315,   316,   317,   318,   319,   320,   323,
     324,   328,   329,   330,   334,   335,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     123,   124,    27,    44,   131,   539,   584,    52,    52,   413,
     132,   115,   420,   194,   421,    10,   134,   150,   436,   438,
     154,    52,    52,   539,   518,   409,   521,    42,    42,    42,
      11,    23,    36,   520,   412,   412,   413,   413,   413,    42,
      42,   289,   291,   593,   603,    35,   140,   141,   430,   427,
      43,    52,    98,   213,    97,   544,    96,   115,   121,   196,
     197,   198,   199,   201,   202,   549,   550,   545,   134,    23,
     517,    22,   413,   231,   231,   126,   540,   481,    39,   142,
     540,   173,   173,    35,   126,   603,   123,   289,   290,   589,
     590,   236,   406,   583,   191,   540,   115,   399,   583,   399,
      87,    88,    89,    92,    93,    94,    95,    87,    88,   582,
      89,    92,    93,    94,    95,   183,   604,   268,   269,   275,
     276,   278,   304,   269,   272,   276,   304,   269,   270,   271,
     276,   277,   314,   269,   276,   277,   314,   116,   410,   318,
     277,   254,   331,   332,   279,   277,   280,   314,   268,   277,
     322,   269,   325,   263,   277,   282,   283,   336,   269,   276,
     277,   314,   277,   314,   269,   277,   314,   314,   269,   277,
     280,   281,   314,   242,   273,   277,   273,   274,   314,   493,
     493,   500,    43,   413,     9,   421,     9,    10,   413,   413,
       9,   519,   183,   437,   438,   413,    23,    43,    43,    43,
      43,    43,   519,   601,    52,    52,   225,     9,   594,   595,
     594,   225,   428,   142,   431,   564,   448,    97,   100,   101,
     580,   448,   120,   211,   212,   565,   565,   216,   217,   567,
     567,   546,   413,   413,   385,   385,   518,   540,   143,   144,
     540,   540,   178,   179,   395,    42,   410,   587,   588,    35,
      20,    32,    38,    59,    74,   233,   234,   352,   353,   354,
     355,   358,   359,   360,   472,   152,   175,   410,    39,   173,
     399,   540,    35,    39,   213,    42,   115,   183,   556,   213,
      94,   406,   300,   352,   519,    56,    57,    58,   301,   251,
     305,   306,   314,   519,   314,   519,   412,   242,   519,   412,
     242,   242,   412,   279,   255,   332,   333,   412,   412,   313,
     242,   123,   289,   291,   321,   412,   242,   249,   326,   327,
     242,   326,   314,   412,   313,   313,   264,   337,   519,   412,
     242,   412,   242,   313,   412,   242,   242,   313,   412,   313,
     313,   242,   412,   242,    45,    45,    33,   118,   119,   410,
     489,   481,   134,   481,   413,   481,   132,     9,   132,   155,
      43,   152,    35,    43,   413,   481,    35,    43,    43,    42,
     143,   144,   145,   213,   214,   215,   566,   102,   144,   448,
     448,   566,   200,    10,   175,   403,    43,   408,   152,   586,
     236,   590,   472,    19,    19,    42,    42,    12,   410,   587,
     359,    32,    38,    32,    38,   361,   476,   519,   540,   540,
     183,   556,   582,    42,   115,   559,   213,   152,   175,   410,
     123,   289,   290,   269,   270,   271,   276,   277,   314,   242,
     242,   242,   412,   314,   242,   314,   269,   270,   276,   277,
     314,   242,   314,   242,   314,   493,   493,   491,   413,   152,
     413,   481,   413,   413,   519,   519,   152,   518,   595,   594,
     540,   448,   448,   161,   413,    43,   519,   410,   352,   472,
     472,   356,   480,   582,   582,   353,   586,   359,   359,   359,
     359,    21,   175,   410,   399,   555,   555,   205,   565,   560,
     582,   582,   558,   558,   519,   519,   412,   242,   314,   242,
     242,   519,   412,   242,   242,    46,    48,   494,    46,    48,
     495,   493,   519,   132,   519,    10,    43,   448,   410,   587,
      43,    35,   410,   412,    35,    43,    43,   582,   206,    35,
      43,   164,   166,   561,   175,   410,   242,   496,   498,   497,
     499,    28,   132,   413,   413,   586,   357,   478,   480,    22,
     556,   565,   582,   559,   559,    47,   116,   410,    49,   117,
     410,    47,   116,   410,    49,   117,   410,   413,   410,    43,
     206
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
#line 734 "../src/parser/XQParser.y"
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
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR));

    ASTNode *nameVarRef2 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(nameVarRef2, empty, apply, MEMMGR)));

  }
    break;

  case 9:
#line 763 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR)));

    XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    modelist->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));

    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, 0, (yyvsp[(1) - (1)].astNode), 0, MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);

    // TBD execution of a named template - jpcs
    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR)));
  }
    break;

  case 10:
#line 789 "../src/parser/XQParser.y"
    {
  }
    break;

  case 12:
#line 796 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 18:
#line 812 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    if((yyvsp[(1) - (4)].functDecl)->getPattern() != 0 && (yyvsp[(1) - (4)].functDecl)->getModeList() == 0) {
      XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
      modelist->push_back(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
      (yyvsp[(1) - (4)].functDecl)->setModeList(modelist);
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 19:
#line 831 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 20:
#line 835 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 21:
#line 840 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 22:
#line 847 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 23:
#line 852 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 24:
#line 857 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 25:
#line 865 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 26:
#line 869 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 27:
#line 875 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 28:
#line 880 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 32:
#line 890 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 33:
#line 903 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 34:
#line 907 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 35:
#line 914 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 36:
#line 919 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 37:
#line 927 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 38:
#line 931 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 39:
#line 939 "../src/parser/XQParser.y"
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

  case 40:
#line 966 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 41:
#line 970 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 42:
#line 977 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 43:
#line 983 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 44:
#line 988 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 45:
#line 993 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 46:
#line 1002 "../src/parser/XQParser.y"
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

  case 47:
#line 1026 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 48:
#line 1030 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 49:
#line 1037 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 50:
#line 1042 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 51:
#line 1047 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 52:
#line 1052 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 53:
#line 1063 "../src/parser/XQParser.y"
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

  case 54:
#line 1081 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 55:
#line 1085 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 56:
#line 1092 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 57:
#line 1097 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 58:
#line 1105 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 59:
#line 1115 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 60:
#line 1119 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 61:
#line 1126 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 62:
#line 1135 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 63:
#line 1139 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 64:
#line 1144 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 65:
#line 1157 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 66:
#line 1161 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 67:
#line 1166 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 68:
#line 1171 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 69:
#line 1176 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 70:
#line 1181 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 71:
#line 1186 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 72:
#line 1191 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 73:
#line 1196 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 74:
#line 1201 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 75:
#line 1206 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 76:
#line 1211 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 77:
#line 1216 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 78:
#line 1221 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 79:
#line 1226 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 80:
#line 1231 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 81:
#line 1236 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 82:
#line 1241 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 83:
#line 1249 "../src/parser/XQParser.y"
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

  case 84:
#line 1267 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 85:
#line 1271 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 86:
#line 1276 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 87:
#line 1285 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 90:
#line 1294 "../src/parser/XQParser.y"
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

  case 91:
#line 1314 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 92:
#line 1318 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 93:
#line 1323 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 94:
#line 1331 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 95:
#line 1336 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 96:
#line 1340 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 97:
#line 1347 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 98:
#line 1351 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 99:
#line 1359 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 100:
#line 1372 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(0, 0, MEMMGR));
  }
    break;

  case 101:
#line 1376 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 102:
#line 1386 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 103:
#line 1390 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 104:
#line 1398 "../src/parser/XQParser.y"
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

  case 105:
#line 1416 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 106:
#line 1420 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 107:
#line 1427 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 108:
#line 1432 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 109:
#line 1437 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 110:
#line 1445 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (4)]), (yyvsp[(3) - (4)].astNode));
  }
    break;

  case 111:
#line 1453 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), empty, MEMMGR));
  }
    break;

  case 112:
#line 1461 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 113:
#line 1475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 114:
#line 1479 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 115:
#line 1493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), 0, MEMMGR));
  }
    break;

  case 116:
#line 1500 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 117:
#line 1504 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 118:
#line 1511 "../src/parser/XQParser.y"
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

  case 119:
#line 1546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 120:
#line 1550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 121:
#line 1555 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 122:
#line 1561 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 123:
#line 1570 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 124:
#line 1574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 125:
#line 1581 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 126:
#line 1585 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 127:
#line 1592 "../src/parser/XQParser.y"
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

  case 128:
#line 1610 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 129:
#line 1614 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 130:
#line 1621 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 131:
#line 1626 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 132:
#line 1634 "../src/parser/XQParser.y"
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

  case 133:
#line 1652 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 134:
#line 1656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 135:
#line 1664 "../src/parser/XQParser.y"
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

  case 136:
#line 1686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 137:
#line 1690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 138:
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 139:
#line 1705 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 140:
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 141:
#line 1722 "../src/parser/XQParser.y"
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
    else if(attr->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      attr->setChildren(children);
    }
  }
    break;

  case 142:
#line 1759 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 143:
#line 1763 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 144:
#line 1770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 145:
#line 1777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 146:
#line 1786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 147:
#line 1795 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 148:
#line 1807 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 149:
#line 1811 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 150:
#line 1816 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 151:
#line 1825 "../src/parser/XQParser.y"
    {
    XQCopy *as = (XQCopy*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 152:
#line 1838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 153:
#line 1842 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 154:
#line 1847 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 155:
#line 1861 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 156:
#line 1866 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 157:
#line 1878 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 158:
#line 1882 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 159:
#line 1890 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 160:
#line 1903 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 161:
#line 1911 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 162:
#line 1924 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 163:
#line 1931 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 168:
#line 1970 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 169:
#line 1974 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 170:
#line 1978 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[parent::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 171:
#line 1996 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[ancestor::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 172:
#line 2014 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 173:
#line 2024 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 174:
#line 2038 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 175:
#line 2046 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 176:
#line 2052 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 177:
#line 2058 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 178:
#line 2064 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 179:
#line 2075 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 180:
#line 2079 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 188:
#line 2109 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 189:
#line 2113 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 190:
#line 2117 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 191:
#line 2121 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 192:
#line 2125 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 193:
#line 2129 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 194:
#line 2135 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 195:
#line 2141 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 203:
#line 2167 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 204:
#line 2171 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 205:
#line 2175 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 206:
#line 2179 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 216:
#line 2208 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 217:
#line 2212 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 218:
#line 2216 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 219:
#line 2220 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 220:
#line 2224 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 221:
#line 2228 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 222:
#line 2234 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 223:
#line 2240 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 224:
#line 2244 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 232:
#line 2271 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 233:
#line 2275 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 234:
#line 2279 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 235:
#line 2283 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 236:
#line 2287 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 237:
#line 2291 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 238:
#line 2297 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 239:
#line 2303 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 244:
#line 2322 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 245:
#line 2327 "../src/parser/XQParser.y"
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

  case 248:
#line 2356 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 250:
#line 2370 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 251:
#line 2374 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 252:
#line 2378 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 253:
#line 2382 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 254:
#line 2386 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 255:
#line 2390 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 256:
#line 2396 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 257:
#line 2402 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 258:
#line 2406 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:
#line 2438 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 271:
#line 2446 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 272:
#line 2451 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 273:
#line 2460 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 274:
#line 2465 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 275:
#line 2474 "../src/parser/XQParser.y"
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
          CONTEXT->getDocumentCache()->setDoPSVI(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->getDocumentCache()->setDoPSVI(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:psvi. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else if(XPath2Utils::equals(qName.getName(), option_lint)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          CONTEXT->setDoLintWarnings(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          CONTEXT->setDoLintWarnings(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:lint. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 276:
#line 2534 "../src/parser/XQParser.y"
    {
  }
    break;

  case 277:
#line 2541 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 278:
#line 2546 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 279:
#line 2555 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 280:
#line 2560 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 281:
#line 2569 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 282:
#line 2579 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 283:
#line 2583 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 284:
#line 2591 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 285:
#line 2595 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 286:
#line 2603 "../src/parser/XQParser.y"
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

  case 287:
#line 2619 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 288:
#line 2628 "../src/parser/XQParser.y"
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

  case 289:
#line 2640 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 290:
#line 2648 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 291:
#line 2652 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 292:
#line 2657 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 293:
#line 2666 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 294:
#line 2670 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 295:
#line 2678 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 296:
#line 2688 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 297:
#line 2700 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 298:
#line 2707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 299:
#line 2711 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 300:
#line 2719 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 301:
#line 2724 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 302:
#line 2734 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 303:
#line 2738 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 304:
#line 2742 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 305:
#line 2746 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 306:
#line 2753 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 307:
#line 2757 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 308:
#line 2763 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 309:
#line 2767 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 310:
#line 2775 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 311:
#line 2780 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 312:
#line 2790 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 313:
#line 2798 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 314:
#line 2802 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 315:
#line 2810 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 316:
#line 2823 "../src/parser/XQParser.y"
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

  case 330:
#line 2861 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 331:
#line 2872 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 332:
#line 2876 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 333:
#line 2880 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 335:
#line 2888 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 336:
#line 2894 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 339:
#line 2907 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 340:
#line 2914 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 342:
#line 2922 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 343:
#line 2933 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 344:
#line 2937 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 345:
#line 2947 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 346:
#line 2951 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 347:
#line 2961 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 348:
#line 2968 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 350:
#line 2976 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 351:
#line 2980 "../src/parser/XQParser.y"
    {
  }
    break;

  case 352:
#line 2987 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 353:
#line 2995 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 354:
#line 3000 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 355:
#line 3008 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 357:
#line 3018 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 358:
#line 3025 "../src/parser/XQParser.y"
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

  case 359:
#line 3040 "../src/parser/XQParser.y"
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

  case 360:
#line 3056 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 361:
#line 3060 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 362:
#line 3064 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 363:
#line 3071 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 364:
#line 3080 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 365:
#line 3084 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 366:
#line 3093 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 367:
#line 3101 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 368:
#line 3112 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 370:
#line 3120 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 371:
#line 3131 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 372:
#line 3138 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 373:
#line 3143 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 374:
#line 3151 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 375:
#line 3155 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 376:
#line 3163 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 377:
#line 3167 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 378:
#line 3175 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 379:
#line 3183 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 381:
#line 3197 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 383:
#line 3216 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 384:
#line 3220 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 385:
#line 3223 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 386:
#line 3224 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 387:
#line 3228 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 388:
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 389:
#line 3236 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 390:
#line 3240 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 391:
#line 3244 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 392:
#line 3248 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 393:
#line 3252 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 394:
#line 3256 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 395:
#line 3260 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 396:
#line 3264 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 397:
#line 3268 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 398:
#line 3272 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 400:
#line 3281 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 401:
#line 3285 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 403:
#line 3294 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 405:
#line 3303 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 406:
#line 3307 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 408:
#line 3316 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 409:
#line 3320 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 410:
#line 3324 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 411:
#line 3328 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 413:
#line 3337 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 414:
#line 3341 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 416:
#line 3350 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 417:
#line 3354 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 419:
#line 3363 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 421:
#line 3372 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 423:
#line 3382 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 425:
#line 3391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 427:
#line 3400 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 428:
#line 3406 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 433:
#line 3427 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 434:
#line 3431 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 435:
#line 3435 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 436:
#line 3443 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 437:
#line 3450 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 440:
#line 3463 "../src/parser/XQParser.y"
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

  case 442:
#line 3484 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 444:
#line 3493 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 445:
#line 3499 "../src/parser/XQParser.y"
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

  case 447:
#line 3524 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 448:
#line 3538 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 449:
#line 3544 "../src/parser/XQParser.y"
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

  case 453:
#line 3565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 454:
#line 3569 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 455:
#line 3578 "../src/parser/XQParser.y"
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

  case 457:
#line 3601 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 458:
#line 3605 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 459:
#line 3609 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 460:
#line 3613 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 461:
#line 3617 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 462:
#line 3621 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 463:
#line 3625 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 464:
#line 3629 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 465:
#line 3637 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 466:
#line 3645 "../src/parser/XQParser.y"
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

  case 467:
#line 3662 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 469:
#line 3679 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 470:
#line 3683 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 471:
#line 3687 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 472:
#line 3691 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 473:
#line 3695 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 474:
#line 3703 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 475:
#line 3715 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 477:
#line 3725 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 479:
#line 3737 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 480:
#line 3744 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 481:
#line 3751 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 482:
#line 3762 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 483:
#line 3771 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 484:
#line 3775 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 500:
#line 3806 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 502:
#line 3817 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 503:
#line 3821 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 504:
#line 3829 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 505:
#line 3837 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 506:
#line 3847 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 507:
#line 3857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 508:
#line 3861 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 509:
#line 3868 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 510:
#line 3873 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 511:
#line 3882 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 512:
#line 3886 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 516:
#line 3899 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 517:
#line 3905 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 520:
#line 3918 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 521:
#line 3922 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 522:
#line 3931 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 525:
#line 3947 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 526:
#line 3951 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 527:
#line 3958 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 528:
#line 3962 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 529:
#line 3972 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 530:
#line 3976 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 531:
#line 3981 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 532:
#line 3994 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 533:
#line 3998 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 534:
#line 4002 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 535:
#line 4018 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 536:
#line 4022 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 537:
#line 4027 "../src/parser/XQParser.y"
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
#line 4040 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 539:
#line 4044 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 540:
#line 4048 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 541:
#line 4068 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 542:
#line 4072 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 543:
#line 4077 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 544:
#line 4082 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 545:
#line 4092 "../src/parser/XQParser.y"
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

  case 546:
#line 4108 "../src/parser/XQParser.y"
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

  case 547:
#line 4122 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 549:
#line 4131 "../src/parser/XQParser.y"
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

  case 551:
#line 4153 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 558:
#line 4176 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 559:
#line 4184 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 560:
#line 4192 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 561:
#line 4196 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 562:
#line 4204 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 563:
#line 4208 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 564:
#line 4217 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 565:
#line 4225 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 566:
#line 4233 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 567:
#line 4241 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 568:
#line 4248 "../src/parser/XQParser.y"
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

  case 569:
#line 4261 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 570:
#line 4268 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 571:
#line 4272 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 572:
#line 4280 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 573:
#line 4290 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 574:
#line 4294 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 575:
#line 4302 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 576:
#line 4306 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 577:
#line 4316 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 578:
#line 4323 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 579:
#line 4332 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 580:
#line 4334 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 581:
#line 4336 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 582:
#line 4338 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 583:
#line 4344 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 584:
#line 4348 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 598:
#line 4383 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 599:
#line 4391 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 600:
#line 4395 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 601:
#line 4400 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 602:
#line 4409 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 603:
#line 4417 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 604:
#line 4425 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 605:
#line 4429 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 606:
#line 4433 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 607:
#line 4441 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 608:
#line 4445 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 609:
#line 4449 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 611:
#line 4458 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 612:
#line 4466 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 614:
#line 4479 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 615:
#line 4483 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 616:
#line 4487 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 617:
#line 4491 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 619:
#line 4501 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 620:
#line 4509 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 625:
#line 4529 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 626:
#line 4541 "../src/parser/XQParser.y"
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

  case 627:
#line 4553 "../src/parser/XQParser.y"
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

  case 628:
#line 4568 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 629:
#line 4572 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 630:
#line 4576 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 631:
#line 4586 "../src/parser/XQParser.y"
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

  case 633:
#line 4602 "../src/parser/XQParser.y"
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

  case 635:
#line 4618 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 637:
#line 4627 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 639:
#line 4636 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 641:
#line 4645 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 642:
#line 4649 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 643:
#line 4653 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 644:
#line 4657 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 645:
#line 4661 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 646:
#line 4675 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 647:
#line 4679 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 648:
#line 4683 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 649:
#line 4687 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 650:
#line 4692 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 651:
#line 4696 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 652:
#line 4700 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 653:
#line 4704 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 654:
#line 4708 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 662:
#line 4736 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 663:
#line 4740 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 664:
#line 4744 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 665:
#line 4748 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 666:
#line 4759 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 667:
#line 4763 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 668:
#line 4767 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 669:
#line 4771 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 670:
#line 4779 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 671:
#line 4783 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 672:
#line 4793 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 673:
#line 4797 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 674:
#line 4801 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 675:
#line 4805 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 676:
#line 4809 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 677:
#line 4816 "../src/parser/XQParser.y"
    {
  }
    break;

  case 678:
#line 4819 "../src/parser/XQParser.y"
    {
  }
    break;

  case 679:
#line 4826 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 680:
#line 4830 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 681:
#line 4834 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 682:
#line 4838 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 683:
#line 4848 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 684:
#line 4852 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 685:
#line 4856 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 686:
#line 4863 "../src/parser/XQParser.y"
    {
  }
    break;

  case 687:
#line 4866 "../src/parser/XQParser.y"
    {
  }
    break;

  case 688:
#line 4874 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 689:
#line 4878 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 690:
#line 4885 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 691:
#line 4889 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 692:
#line 4897 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 693:
#line 4901 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 694:
#line 4909 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 695:
#line 4917 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 696:
#line 4921 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 697:
#line 4929 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 698:
#line 4933 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 699:
#line 4937 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 700:
#line 4941 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 701:
#line 4945 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 702:
#line 4949 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 703:
#line 4960 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 704:
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 705:
#line 4972 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 706:
#line 4978 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 707:
#line 4988 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 708:
#line 4992 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 709:
#line 4996 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 710:
#line 5004 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 711:
#line 5008 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 712:
#line 5016 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 713:
#line 5024 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 714:
#line 5029 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 715:
#line 5034 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 716:
#line 5046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 717:
#line 5050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 718:
#line 5054 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 719:
#line 5058 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 720:
#line 5062 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 723:
#line 5073 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 726:
#line 5084 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 727:
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 728:
#line 5098 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 729:
#line 5106 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 730:
#line 5113 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 731:
#line 5118 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 732:
#line 5126 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 733:
#line 5135 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 734:
#line 5148 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 735:
#line 5161 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 736:
#line 5175 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 737:
#line 5187 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 738:
#line 5196 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 739:
#line 5208 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 740:
#line 5212 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 741:
#line 5216 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 742:
#line 5221 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 743:
#line 5226 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 744:
#line 5231 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 745:
#line 5239 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 746:
#line 5243 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 747:
#line 5251 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 748:
#line 5255 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 749:
#line 5262 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 750:
#line 5267 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 751:
#line 5275 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 752:
#line 5280 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 753:
#line 5289 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 754:
#line 5293 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 755:
#line 5297 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 756:
#line 5305 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 757:
#line 5309 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 758:
#line 5317 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 759:
#line 5321 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 760:
#line 5325 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 761:
#line 5329 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 762:
#line 5337 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 763:
#line 5341 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 764:
#line 5345 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 765:
#line 5353 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 766:
#line 5358 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 767:
#line 5368 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 770:
#line 5385 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 771:
#line 5393 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 772:
#line 5402 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 773:
#line 5407 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 774:
#line 5416 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 775:
#line 5420 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 776:
#line 5424 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 777:
#line 5431 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 778:
#line 5436 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 779:
#line 5445 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 10379 "../src/parser/XQParser.cpp"
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


#line 5479 "../src/parser/XQParser.y"


}  // namespace XQParser


