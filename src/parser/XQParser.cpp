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
#line 1005 "../src/parser/XQParser.cpp"

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
#define YYLAST   7718

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  289
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  305
/* YYNRULES -- Number of rules.  */
#define YYNRULES  918
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1537

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
     207,   210,   213,   216,   219,   222,   225,   228,   231,   235,
     237,   241,   245,   249,   251,   253,   257,   259,   263,   266,
     267,   270,   274,   276,   279,   280,   283,   287,   289,   292,
     296,   300,   303,   308,   314,   319,   321,   324,   330,   331,
     335,   340,   342,   346,   350,   354,   355,   359,   360,   364,
     369,   371,   374,   378,   382,   386,   388,   392,   396,   398,
     402,   406,   410,   412,   416,   418,   422,   426,   430,   434,
     437,   439,   443,   446,   450,   452,   454,   456,   459,   461,
     465,   469,   471,   473,   475,   479,   483,   486,   488,   492,
     496,   499,   500,   505,   510,   517,   519,   521,   523,   525,
     528,   531,   533,   535,   538,   541,   542,   546,   550,   554,
     558,   562,   566,   570,   574,   576,   578,   580,   582,   584,
     586,   588,   594,   602,   608,   616,   618,   620,   623,   626,
     628,   630,   633,   636,   637,   641,   645,   649,   653,   657,
     661,   665,   669,   673,   676,   679,   681,   683,   686,   689,
     690,   694,   698,   702,   706,   710,   714,   718,   722,   725,
     728,   730,   732,   737,   744,   747,   750,   757,   758,   762,
     766,   770,   774,   778,   782,   786,   790,   794,   796,   798,
     800,   802,   804,   806,   808,   810,   812,   814,   816,   822,
     826,   830,   836,   842,   847,   851,   855,   859,   865,   871,
     877,   879,   881,   883,   885,   890,   894,   900,   905,   906,
     909,   913,   917,   921,   929,   934,   941,   944,   946,   950,
     954,   961,   970,   977,   986,   989,   993,   994,   996,  1000,
    1002,  1006,  1010,  1014,  1016,  1020,  1022,  1024,  1026,  1028,
    1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,  1050,
    1054,  1057,  1060,  1062,  1065,  1068,  1070,  1072,  1075,  1079,
    1081,  1089,  1090,  1094,  1095,  1099,  1102,  1106,  1108,  1115,
    1121,  1124,  1128,  1133,  1137,  1139,  1143,  1149,  1151,  1152,
    1154,  1156,  1157,  1160,  1163,  1168,  1173,  1177,  1179,  1185,
    1192,  1195,  1197,  1203,  1207,  1212,  1220,  1229,  1233,  1235,
    1239,  1241,  1245,  1249,  1250,  1255,  1259,  1263,  1267,  1271,
    1275,  1279,  1283,  1287,  1291,  1295,  1299,  1303,  1305,  1309,
    1314,  1316,  1320,  1322,  1326,  1330,  1332,  1336,  1340,  1344,
    1348,  1350,  1354,  1358,  1360,  1364,  1368,  1370,  1375,  1377,
    1382,  1384,  1389,  1391,  1396,  1398,  1401,  1404,  1406,  1408,
    1410,  1412,  1417,  1423,  1429,  1433,  1438,  1440,  1443,  1448,
    1450,  1453,  1455,  1458,  1461,  1463,  1465,  1469,  1473,  1475,
    1477,  1479,  1482,  1485,  1488,  1490,  1493,  1496,  1499,  1502,
    1505,  1508,  1511,  1514,  1517,  1519,  1522,  1524,  1527,  1530,
    1533,  1536,  1539,  1541,  1543,  1545,  1547,  1549,  1551,  1553,
    1555,  1558,  1559,  1564,  1566,  1568,  1570,  1572,  1574,  1576,
    1578,  1580,  1582,  1584,  1586,  1588,  1590,  1592,  1594,  1597,
    1599,  1603,  1606,  1608,  1613,  1618,  1622,  1627,  1631,  1633,
    1635,  1637,  1639,  1641,  1643,  1649,  1660,  1662,  1664,  1665,
    1673,  1681,  1682,  1684,  1688,  1692,  1696,  1700,  1701,  1704,
    1707,  1708,  1711,  1714,  1715,  1718,  1721,  1722,  1725,  1728,
    1729,  1732,  1735,  1738,  1741,  1745,  1746,  1748,  1752,  1754,
    1757,  1759,  1761,  1763,  1765,  1767,  1769,  1774,  1778,  1780,
    1784,  1787,  1791,  1795,  1800,  1805,  1809,  1811,  1815,  1818,
    1822,  1825,  1826,  1828,  1829,  1832,  1835,  1839,  1840,  1842,
    1844,  1846,  1848,  1852,  1854,  1856,  1858,  1860,  1862,  1864,
    1866,  1868,  1870,  1872,  1874,  1876,  1878,  1882,  1886,  1891,
    1896,  1900,  1904,  1908,  1913,  1918,  1922,  1927,  1934,  1936,
    1938,  1943,  1945,  1949,  1954,  1961,  1969,  1971,  1973,  1978,
    1980,  1982,  1984,  1986,  1988,  1993,  1996,  1997,  2000,  2003,
    2007,  2009,  2013,  2015,  2020,  2022,  2025,  2027,  2031,  2033,
    2036,  2039,  2042,  2045,  2050,  2052,  2056,  2060,  2064,  2067,
    2070,  2073,  2076,  2079,  2081,  2083,  2085,  2087,  2089,  2091,
    2093,  2095,  2097,  2100,  2103,  2106,  2109,  2112,  2115,  2118,
    2121,  2125,  2129,  2136,  2143,  2146,  2147,  2151,  2154,  2159,
    2164,  2171,  2177,  2181,  2187,  2188,  2191,  2194,  2198,  2200,
    2204,  2207,  2210,  2213,  2216,  2219,  2220,  2222,  2225,  2227,
    2230,  2232,  2235,  2239,  2243,  2248,  2250,  2252,  2254,  2256,
    2258,  2262,  2266,  2270,  2274,  2281,  2288,  2293,  2298,  2303,
    2306,  2309,  2312,  2315,  2318,  2326,  2332,  2338,  2345,  2349,
    2351,  2356,  2358,  2360,  2362,  2364,  2366,  2368,  2374,  2382,
    2390,  2400,  2406,  2414,  2415,  2418,  2421,  2425,  2429,  2437,
    2441,  2449,  2451,  2455,  2461,  2463,  2465,  2469,  2474,  2479,
    2485,  2489,  2495,  2502,  2504,  2508,  2512,  2514,  2516,  2518,
    2520,  2522,  2524,  2526,  2528,  2530,  2532,  2534,  2536,  2538,
    2540,  2542,  2544,  2546,  2548,  2550,  2552,  2554,  2556,  2558,
    2560,  2562,  2564,  2566,  2568,  2570,  2572,  2574,  2576,  2578,
    2580,  2582,  2584,  2586,  2588,  2590,  2592,  2594,  2596,  2598,
    2600,  2602,  2604,  2606,  2608,  2610,  2612,  2614,  2616,  2618,
    2620,  2622,  2624,  2626,  2628,  2630,  2632,  2634,  2636,  2638,
    2640,  2642,  2644,  2646,  2648,  2650,  2652,  2654,  2656,  2658,
    2660,  2662,  2664,  2666,  2668,  2670,  2672,  2674,  2676,  2678,
    2680,  2682,  2684,  2686,  2688,  2690,  2692,  2694,  2696,  2698,
    2700,  2702,  2704,  2706,  2708,  2710,  2712,  2714,  2716,  2718,
    2720,  2722,  2724,  2726,  2728,  2730,  2732,  2734,  2736,  2738,
    2740,  2742,  2744,  2746,  2748,  2750,  2752,  2754,  2756,  2758,
    2760,  2762,  2764,  2766,  2768,  2770,  2772,  2774,  2776,  2778,
    2780,  2782,  2784,  2786,  2788,  2790,  2792,  2794,  2796,  2798,
    2800,  2802,  2804,  2806,  2808,  2810,  2812,  2814,  2816,  2818,
    2820,  2822,  2824,  2826,  2828,  2830,  2832,  2834,  2836
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     290,     0,    -1,     3,   404,    -1,     4,   355,    -1,     5,
     362,    -1,     6,   366,    -1,     7,   370,    -1,     8,   291,
      -1,   292,    -1,   307,    -1,   243,   293,   294,   242,    -1,
      -1,   293,   267,    -1,    -1,   294,   295,    -1,   294,   298,
      -1,   294,   303,    -1,   294,   305,    -1,   296,   300,   310,
     242,    -1,   244,    -1,   296,   275,   345,    -1,   296,   269,
      -1,   296,   278,   297,    -1,   296,   268,    -1,   296,   276,
     512,    -1,    57,    -1,    58,    -1,    59,    -1,   299,   300,
     310,   242,    -1,   252,    -1,   299,   269,    -1,   299,   276,
     512,    -1,   299,   272,    -1,    -1,   300,   301,    -1,   302,
     310,   242,    -1,   251,    -1,   302,   269,    -1,   302,   277,
     405,    -1,   302,   276,   512,    -1,   302,   271,    -1,   302,
     270,    -1,   304,   310,   242,    -1,   251,    -1,   304,   269,
      -1,   304,   277,   405,    -1,   304,   276,   512,    -1,   304,
     271,    -1,   304,   270,    -1,   306,   310,   242,    -1,   257,
      -1,   306,   269,    -1,   306,   277,   405,    -1,   306,   276,
     512,    -1,   284,   308,   310,   242,    -1,    -1,   308,   286,
     309,    -1,   308,   285,    -1,    -1,   309,   403,    -1,   309,
     117,    -1,    -1,   310,   314,    -1,   310,   307,    -1,   310,
     311,    -1,   310,   313,    -1,   310,   315,    -1,   310,   318,
      -1,   310,   323,    -1,   310,   325,    -1,   310,   324,    -1,
     310,   333,    -1,   310,   335,    -1,   310,   337,    -1,   310,
     339,    -1,   310,   341,    -1,   310,   329,    -1,   310,   343,
      -1,   312,   310,   242,    -1,   245,    -1,   312,   277,   405,
      -1,   312,   280,   309,    -1,   246,   314,   242,    -1,   287,
      -1,   288,    -1,   316,   317,   242,    -1,   247,    -1,   316,
     277,   405,    -1,   316,   268,    -1,    -1,   317,   321,    -1,
     319,   320,   242,    -1,   248,    -1,   319,   269,    -1,    -1,
     320,   321,    -1,   322,   310,   242,    -1,   249,    -1,   322,
     269,    -1,   322,   277,   405,    -1,   322,   276,   512,    -1,
     322,   270,    -1,   250,   277,   405,   242,    -1,   256,   279,
     405,   310,   242,    -1,   253,   326,   328,   242,    -1,   327,
      -1,   326,   327,    -1,   254,   279,   405,   310,   242,    -1,
      -1,   255,   310,   242,    -1,   330,   331,   332,   242,    -1,
     262,    -1,   330,   277,   405,    -1,   330,   282,   309,    -1,
     330,   283,   309,    -1,    -1,   263,   310,   242,    -1,    -1,
     264,   310,   242,    -1,   334,   310,   242,   310,    -1,   257,
      -1,   334,   269,    -1,   334,   277,   405,    -1,   334,   276,
     512,    -1,   336,   310,   242,    -1,   258,    -1,   336,   277,
     405,    -1,   338,   310,   242,    -1,   259,    -1,   338,   269,
     309,    -1,   338,   277,   405,    -1,   340,   310,   242,    -1,
     260,    -1,   342,   310,   242,    -1,   261,    -1,   342,   269,
     309,    -1,   342,   281,   309,    -1,   342,   277,   405,    -1,
     342,   280,   309,    -1,   344,   242,    -1,   265,    -1,   344,
     277,   405,    -1,   344,   273,    -1,   345,    12,   346,    -1,
     346,    -1,   348,    -1,    38,    -1,   347,   348,    -1,   352,
      -1,   352,    38,   348,    -1,   352,    32,   348,    -1,    38,
      -1,    32,    -1,   349,    -1,   348,    38,   349,    -1,   348,
      32,   349,    -1,   350,   351,    -1,   465,    -1,    75,    19,
     465,    -1,    60,    19,   465,    -1,    20,   465,    -1,    -1,
     469,    21,   405,    22,    -1,   234,    42,   353,    43,    -1,
     235,    42,   575,    35,   354,    43,    -1,   575,    -1,   473,
      -1,   471,    -1,   473,    -1,   371,   356,    -1,   371,   357,
      -1,   356,    -1,   357,    -1,   358,   404,    -1,   374,   358,
      -1,    -1,   358,   359,   378,    -1,   358,   377,   378,    -1,
     358,   379,   378,    -1,   358,   381,   378,    -1,   358,   395,
     378,    -1,   358,   360,   378,    -1,   358,   578,   378,    -1,
     358,   382,   378,    -1,   380,    -1,   389,    -1,   390,    -1,
     397,    -1,   384,    -1,   385,    -1,   386,    -1,   181,   361,
     593,   399,   403,    -1,   181,   361,   593,   399,   153,   512,
     403,    -1,   181,   361,   593,   399,   176,    -1,   181,   361,
     593,   399,   153,   512,   176,    -1,   193,    -1,   194,    -1,
     371,   363,    -1,   371,   364,    -1,   363,    -1,   364,    -1,
     365,   404,    -1,   374,   365,    -1,    -1,   365,   359,   378,
      -1,   365,   377,   378,    -1,   365,   379,   378,    -1,   365,
     381,   378,    -1,   365,   395,   378,    -1,   365,   360,   378,
      -1,   365,   578,   378,    -1,   365,   382,   378,    -1,   365,
     383,   378,    -1,   371,   367,    -1,   371,   368,    -1,   367,
      -1,   368,    -1,   369,   404,    -1,   374,   369,    -1,    -1,
     369,   376,   378,    -1,   369,   377,   378,    -1,   369,   379,
     378,    -1,   369,   381,   378,    -1,   369,   395,   378,    -1,
     369,   398,   378,    -1,   369,   578,   378,    -1,   369,   382,
     378,    -1,   371,   372,    -1,   371,   373,    -1,   372,    -1,
     373,    -1,   187,   188,   127,   378,    -1,   187,   188,   127,
     177,   127,   378,    -1,   375,   404,    -1,   374,   375,    -1,
     191,   174,   576,    39,   533,   378,    -1,    -1,   375,   376,
     378,    -1,   375,   377,   378,    -1,   375,   379,   378,    -1,
     375,   381,   378,    -1,   375,   395,   378,    -1,   375,   398,
     378,    -1,   375,   578,   378,    -1,   375,   382,   378,    -1,
     375,   383,   378,    -1,   380,    -1,   389,    -1,   390,    -1,
     397,    -1,   384,    -1,   385,    -1,   562,    -1,   386,    -1,
     391,    -1,   394,    -1,    53,    -1,   181,   174,   576,    39,
     533,    -1,   181,    69,   172,    -1,   181,    69,   173,    -1,
     181,   184,   192,   174,   533,    -1,   181,   184,   361,   174,
     533,    -1,   181,   186,   592,   127,    -1,   181,    70,   543,
      -1,   181,   183,   122,    -1,   181,   183,   123,    -1,   181,
     184,   139,   143,   144,    -1,   181,   184,   139,   143,   145,
      -1,   181,   185,   387,    35,   388,    -1,   172,    -1,   178,
      -1,   179,    -1,   180,    -1,   181,   184,   146,   533,    -1,
     181,    71,   533,    -1,   189,   190,   393,   533,   392,    -1,
     189,   190,   533,   392,    -1,    -1,   116,   533,    -1,   392,
      35,   533,    -1,   174,   576,    39,    -1,   184,   192,   174,
      -1,   189,   191,   174,   576,    39,   533,   392,    -1,   189,
     191,   533,   392,    -1,   181,   128,     9,   474,   511,   396,
      -1,    10,   406,    -1,   176,    -1,   181,   182,   172,    -1,
     181,   182,   173,    -1,   181,   400,   361,   593,   399,   403,
      -1,   181,   400,   361,   593,   399,   153,   512,   403,    -1,
     181,   400,   361,   593,   399,   176,    -1,   181,   400,   361,
     593,   399,   153,   512,   176,    -1,    42,    43,    -1,    42,
     401,    43,    -1,    -1,   233,    -1,   401,    35,   402,    -1,
     402,    -1,     9,   474,   511,    -1,    50,   405,    52,    -1,
      51,   405,    52,    -1,   405,    -1,   405,    35,   406,    -1,
     406,    -1,   407,    -1,   425,    -1,   428,    -1,   432,    -1,
     563,    -1,   565,    -1,   568,    -1,   567,    -1,   569,    -1,
     433,    -1,   581,    -1,   582,    -1,   408,   133,   406,    -1,
     409,   418,   419,    -1,   409,   418,    -1,   409,   419,    -1,
     409,    -1,   409,   410,    -1,   409,   415,    -1,   410,    -1,
     415,    -1,   134,   411,    -1,   411,    35,   412,    -1,   412,
      -1,     9,   474,   511,   413,   414,   135,   406,    -1,    -1,
     116,     9,   474,    -1,    -1,   195,     9,   474,    -1,   136,
     416,    -1,   416,    35,   417,    -1,   417,    -1,     9,   474,
     511,   414,    10,   406,    -1,   195,     9,   474,    10,   406,
      -1,   137,   406,    -1,   139,   138,   420,    -1,   140,   139,
     138,   420,    -1,   420,    35,   421,    -1,   421,    -1,   422,
     423,   424,    -1,   422,   423,   424,   146,   533,    -1,   406,
      -1,    -1,   141,    -1,   142,    -1,    -1,   143,   144,    -1,
     143,   145,    -1,   147,   426,   149,   406,    -1,   148,   426,
     149,   406,    -1,   426,    35,   427,    -1,   427,    -1,     9,
     474,   511,   135,   406,    -1,   150,    42,   405,    43,   429,
     430,    -1,   429,   431,    -1,   431,    -1,   184,     9,   474,
     133,   406,    -1,   184,   133,   406,    -1,   151,   512,   133,
     406,    -1,   151,     9,   474,   153,   512,   133,   406,    -1,
     154,    42,   405,    43,   155,   406,   156,   406,    -1,   433,
     157,   434,    -1,   434,    -1,   434,   158,   435,    -1,   435,
      -1,   437,    39,   437,    -1,   437,    13,   437,    -1,    -1,
     437,    26,   436,   437,    -1,   437,    14,   437,    -1,   437,
      15,   437,    -1,   437,    16,   437,    -1,   437,   110,   437,
      -1,   437,   111,   437,    -1,   437,   112,   437,    -1,   437,
     113,   437,    -1,   437,   114,   437,    -1,   437,   115,   437,
      -1,   437,   171,   437,    -1,   437,    17,   437,    -1,   437,
      18,   437,    -1,   437,    -1,   438,   196,   534,    -1,   438,
     196,   534,   561,    -1,   438,    -1,   439,   162,   439,    -1,
     439,    -1,   439,    36,   440,    -1,   439,    37,   440,    -1,
     440,    -1,   440,    11,   441,    -1,   440,   163,   441,    -1,
     440,    74,   441,    -1,   440,   164,   441,    -1,   441,    -1,
     441,    12,   442,    -1,   441,   165,   442,    -1,   442,    -1,
     442,   166,   443,    -1,   442,   167,   443,    -1,   443,    -1,
     444,   159,   160,   512,    -1,   444,    -1,   445,   170,   153,
     512,    -1,   445,    -1,   446,   161,   153,   509,    -1,   446,
      -1,   447,   169,   153,   509,    -1,   447,    -1,    37,   447,
      -1,    36,   447,    -1,   448,    -1,   449,    -1,   454,    -1,
     450,    -1,   168,    51,   405,    52,    -1,   168,    72,    51,
     405,    52,    -1,   168,    73,    51,   405,    52,    -1,   451,
      51,    52,    -1,   451,    51,   405,    52,    -1,   452,    -1,
     451,   452,    -1,    34,   486,   592,   453,    -1,   132,    -1,
     107,   132,    -1,   455,    -1,   455,   456,    -1,    32,   456,
      -1,   456,    -1,    38,    -1,   456,    38,   457,    -1,   456,
      32,   457,    -1,   457,    -1,   458,    -1,   468,    -1,   459,
     469,    -1,   462,   469,    -1,   460,   465,    -1,   461,    -1,
      75,    19,    -1,    76,    19,    -1,    60,    19,    -1,    77,
      19,    -1,    78,    19,    -1,    79,    19,    -1,    80,    19,
      -1,   174,    19,    -1,    20,   465,    -1,   465,    -1,   463,
     465,    -1,   464,    -1,    81,    19,    -1,    82,    19,    -1,
      83,    19,    -1,    84,    19,    -1,    85,    19,    -1,    41,
      -1,   516,    -1,   466,    -1,   577,    -1,   467,    -1,    11,
      -1,   129,    -1,   130,    -1,   470,   469,    -1,    -1,   469,
      21,   405,    22,    -1,   471,    -1,   473,    -1,   475,    -1,
     476,    -1,   479,    -1,   481,    -1,   477,    -1,   478,    -1,
     585,    -1,   588,    -1,   472,    -1,   575,    -1,   572,    -1,
     573,    -1,   574,    -1,     9,   474,    -1,   592,    -1,    42,
     405,    43,    -1,    42,    43,    -1,    40,    -1,   122,    51,
     405,    52,    -1,   123,    51,   405,    52,    -1,   593,    42,
      43,    -1,   593,    42,   480,    43,    -1,   480,    35,   406,
      -1,   406,    -1,   482,    -1,   498,    -1,   483,    -1,   494,
      -1,   496,    -1,    26,   484,   485,   486,    44,    -1,    26,
     484,   485,   486,    27,   493,    33,   484,   486,    28,    -1,
     124,    -1,   125,    -1,    -1,   485,   107,   124,   486,    45,
     486,   487,    -1,   485,   107,   125,   486,    45,   486,   488,
      -1,    -1,   107,    -1,    46,   489,    47,    -1,    48,   491,
      49,    -1,    46,   490,    47,    -1,    48,   492,    49,    -1,
      -1,   489,   403,    -1,   489,   117,    -1,    -1,   490,   403,
      -1,   490,   117,    -1,    -1,   491,   403,    -1,   491,   118,
      -1,    -1,   492,   403,    -1,   492,   118,    -1,    -1,   493,
     482,    -1,   493,   403,    -1,   493,   120,    -1,   493,   119,
      -1,    30,   495,    31,    -1,    -1,   109,    -1,    29,   131,
     497,    -1,   108,    -1,   107,   108,    -1,   499,    -1,   500,
      -1,   503,    -1,   504,    -1,   505,    -1,   506,    -1,    86,
      51,   405,    52,    -1,   192,   501,   502,    -1,   126,    -1,
      51,   405,    52,    -1,    51,    52,    -1,    51,   405,    52,
      -1,    60,   501,   502,    -1,    67,    51,   405,    52,    -1,
      61,    51,   405,    52,    -1,    64,   507,   508,    -1,   126,
      -1,    51,   405,    52,    -1,    51,    52,    -1,    51,   405,
      52,    -1,   515,   510,    -1,    -1,    23,    -1,    -1,   153,
     512,    -1,   514,   513,    -1,    68,    42,    43,    -1,    -1,
      11,    -1,    36,    -1,    23,    -1,   515,    -1,   175,    42,
      43,    -1,   516,    -1,   589,    -1,   591,    -1,   577,    -1,
     518,    -1,   526,    -1,   522,    -1,   528,    -1,   524,    -1,
     521,    -1,   520,    -1,   519,    -1,   517,    -1,    63,    42,
      43,    -1,    62,    42,    43,    -1,    62,    42,   526,    43,
      -1,    62,    42,   528,    43,    -1,    67,    42,    43,    -1,
      61,    42,    43,    -1,    64,    42,    43,    -1,    64,    42,
     576,    43,    -1,    64,    42,   127,    43,    -1,    60,    42,
      43,    -1,    60,    42,   523,    43,    -1,    60,    42,   523,
      35,   532,    43,    -1,   530,    -1,    11,    -1,    65,    42,
     525,    43,    -1,   530,    -1,   192,    42,    43,    -1,   192,
      42,   527,    43,    -1,   192,    42,   527,    35,   532,    43,
      -1,   192,    42,   527,    35,   532,    23,    43,    -1,   531,
      -1,    11,    -1,    66,    42,   529,    43,    -1,   531,    -1,
     577,    -1,   577,    -1,   577,    -1,   127,    -1,   536,   535,
     197,   573,    -1,   536,   535,    -1,    -1,   535,   543,    -1,
     535,   542,    -1,   536,    24,   537,    -1,   537,    -1,   537,
      25,   538,    -1,   538,    -1,   538,    87,   135,   539,    -1,
     539,    -1,    54,   540,    -1,   540,    -1,    42,   534,    43,
      -1,   541,    -1,   471,   557,    -1,   473,   557,    -1,   476,
     557,    -1,   479,   557,    -1,    51,   405,    52,   557,    -1,
     122,    -1,   198,   441,   559,    -1,   199,   558,   559,    -1,
     200,   558,   201,    -1,   202,   560,    -1,   203,   560,    -1,
     116,   101,    -1,   116,   102,    -1,    97,    98,    -1,   544,
      -1,   545,    -1,   546,    -1,   547,    -1,   550,    -1,   555,
      -1,   556,    -1,   204,    -1,   205,    -1,   152,    88,    -1,
     152,    89,    -1,   227,    90,    -1,    91,    90,    -1,    90,
      88,    -1,    90,    89,    -1,   227,    93,    -1,    91,    93,
      -1,   227,    94,   549,    -1,   227,    94,   184,    -1,   227,
      94,    42,   549,   548,    43,    -1,   227,    94,    42,   184,
     548,    43,    -1,    91,    94,    -1,    -1,   548,    35,   549,
      -1,   116,   575,    -1,   116,   575,   206,   575,    -1,   116,
     575,   558,   207,    -1,   116,   575,   206,   575,   558,   207,
      -1,   227,    95,   214,   552,   551,    -1,    91,    95,   214,
      -1,   227,   184,    95,   214,   551,    -1,    -1,   551,   554,
      -1,   116,   575,    -1,    42,   553,    43,    -1,   575,    -1,
     553,    35,   575,    -1,   165,   552,    -1,   167,   552,    -1,
     208,   575,    -1,   227,    96,    -1,    91,    96,    -1,    -1,
     209,    -1,   209,    99,    -1,   210,    -1,   210,   214,    -1,
     211,    -1,   212,   441,    -1,   121,   145,   441,    -1,   121,
     103,   441,    -1,   213,   441,   162,   441,    -1,   214,    -1,
     215,    -1,   216,    -1,   217,    -1,   218,    -1,    92,    98,
     441,    -1,   181,   225,    73,    -1,   181,   225,    72,    -1,
     181,   225,   104,    -1,   564,   406,   153,   221,   232,   406,
      -1,   564,   406,   153,   230,   232,   406,    -1,   564,   406,
     232,   406,    -1,   564,   406,   224,   406,    -1,   564,   406,
     223,   406,    -1,   222,    63,    -1,   222,   228,    -1,   566,
     406,    -1,   231,    63,    -1,   231,   228,    -1,   219,   106,
     160,    63,   406,   226,   406,    -1,   219,    63,   406,   226,
     406,    -1,   229,    63,   406,   153,   406,    -1,   105,   570,
     220,   406,   133,   406,    -1,   570,    35,   571,    -1,   571,
      -1,     9,   474,    10,   406,    -1,    57,    -1,    58,    -1,
      59,    -1,   127,    -1,   592,    -1,   592,    -1,   181,   236,
     238,   592,   403,    -1,   181,   236,   238,   592,   580,   579,
     403,    -1,   181,   236,   238,   592,   237,   345,   403,    -1,
     181,   236,   238,   592,   237,   345,   580,   579,   403,    -1,
     181,   236,   237,   345,   403,    -1,   181,   236,   237,   345,
     580,   579,   403,    -1,    -1,   153,   512,    -1,    42,    43,
      -1,    42,   401,    43,    -1,   239,   236,   592,    -1,   239,
     236,   592,   226,    42,   583,    43,    -1,   240,   241,   406,
      -1,   240,   241,   406,   226,    42,   583,    43,    -1,   584,
      -1,   583,    35,   584,    -1,     9,   474,   511,    10,   406,
      -1,   586,    -1,   587,    -1,   593,    55,    57,    -1,   194,
     399,   511,   403,    -1,   468,    56,    42,    43,    -1,   468,
      56,    42,   480,    43,    -1,   194,    42,    43,    -1,   194,
      42,    43,   153,   512,    -1,   194,    42,   590,    43,   153,
     512,    -1,   512,    -1,   590,    35,   512,    -1,    42,   514,
      43,    -1,   593,    -1,    60,    -1,    61,    -1,    62,    -1,
     192,    -1,   175,    -1,   154,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,   150,    -1,    68,    -1,
     194,    -1,   124,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,
      82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   104,    -1,   105,    -1,   106,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   128,    -1,   133,    -1,   134,    -1,   135,    -1,
     136,    -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   151,    -1,
     153,    -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,    -1,
     174,    -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   184,    -1,
     185,    -1,   186,    -1,   188,    -1,   189,    -1,   190,    -1,
     193,    -1,   195,    -1,   196,    -1,   197,    -1,   198,    -1,
     199,    -1,   200,    -1,   201,    -1,   202,    -1,   203,    -1,
     204,    -1,   205,    -1,   206,    -1,   207,    -1,   208,    -1,
     209,    -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,
     214,    -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,
     219,    -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,
     224,    -1,   225,    -1,   226,    -1,   228,    -1,   229,    -1,
     230,    -1,   231,    -1,   232,    -1,   233,    -1,   122,    -1,
     123,    -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,
     238,    -1,   239,    -1,   240,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   710,   710,   712,   713,   714,   715,   717,   724,   753,
     773,   778,   780,   787,   789,   790,   791,   792,   796,   809,
     813,   818,   825,   830,   835,   842,   842,   842,   845,   858,
     862,   869,   874,   883,   886,   894,   921,   925,   932,   938,
     943,   948,   957,   981,   985,   992,   997,  1002,  1007,  1018,
    1036,  1040,  1047,  1052,  1060,  1071,  1074,  1081,  1091,  1094,
    1099,  1113,  1116,  1121,  1126,  1131,  1136,  1141,  1146,  1151,
    1156,  1161,  1166,  1171,  1176,  1181,  1186,  1191,  1199,  1217,
    1221,  1226,  1235,  1241,  1241,  1244,  1264,  1268,  1273,  1282,
    1285,  1293,  1306,  1310,  1321,  1324,  1332,  1350,  1354,  1361,
    1366,  1371,  1379,  1387,  1395,  1409,  1413,  1427,  1435,  1438,
    1445,  1480,  1484,  1489,  1495,  1505,  1508,  1516,  1519,  1526,
    1544,  1548,  1555,  1560,  1568,  1586,  1590,  1598,  1620,  1624,
    1631,  1639,  1648,  1656,  1688,  1692,  1699,  1706,  1715,  1724,
    1736,  1740,  1745,  1759,  1764,  1776,  1780,  1788,  1807,  1812,
    1817,  1825,  1833,  1855,  1859,  1869,  1883,  1891,  1897,  1903,
    1909,  1921,  1924,  1935,  1940,  1948,  1948,  1951,  1951,  1959,
    1960,  1961,  1962,  1966,  1969,  1973,  1975,  1979,  1983,  1987,
    1991,  1995,  2001,  2007,  2021,  2022,  2023,  2024,  2025,  2026,
    2027,  2033,  2037,  2041,  2045,  2051,  2051,  2058,  2059,  2060,
    2061,  2065,  2068,  2072,  2074,  2078,  2082,  2086,  2090,  2094,
    2100,  2106,  2110,  2121,  2122,  2123,  2124,  2128,  2131,  2135,
    2137,  2141,  2145,  2149,  2153,  2157,  2163,  2169,  2180,  2181,
    2182,  2183,  2188,  2193,  2215,  2218,  2222,  2234,  2236,  2240,
    2244,  2248,  2252,  2256,  2262,  2268,  2272,  2286,  2287,  2288,
    2289,  2290,  2291,  2292,  2293,  2297,  2297,  2300,  2304,  2312,
    2317,  2326,  2331,  2340,  2389,  2396,  2401,  2410,  2415,  2424,
    2434,  2438,  2446,  2450,  2458,  2474,  2483,  2495,  2504,  2507,
    2512,  2521,  2525,  2533,  2543,  2555,  2562,  2566,  2574,  2579,
    2589,  2593,  2597,  2601,  2608,  2612,  2619,  2622,  2630,  2635,
    2645,  2653,  2657,  2665,  2678,  2693,  2700,  2701,  2702,  2703,
    2704,  2705,  2706,  2707,  2708,  2709,  2710,  2711,  2716,  2727,
    2731,  2735,  2739,  2743,  2749,  2755,  2756,  2762,  2769,  2773,
    2777,  2789,  2792,  2803,  2806,  2816,  2823,  2827,  2831,  2835,
    2842,  2850,  2855,  2863,  2867,  2873,  2880,  2895,  2912,  2915,
    2919,  2927,  2935,  2939,  2948,  2956,  2967,  2971,  2975,  2986,
    2993,  2998,  3006,  3010,  3018,  3022,  3030,  3038,  3047,  3052,
    3061,  3071,  3075,  3079,  3079,  3083,  3087,  3091,  3095,  3099,
    3103,  3107,  3111,  3115,  3119,  3123,  3127,  3131,  3136,  3140,
    3144,  3149,  3153,  3158,  3162,  3166,  3171,  3175,  3179,  3183,
    3187,  3192,  3196,  3200,  3205,  3209,  3213,  3218,  3222,  3227,
    3232,  3237,  3241,  3246,  3250,  3255,  3261,  3267,  3272,  3273,
    3274,  3282,  3286,  3290,  3298,  3305,  3314,  3314,  3318,  3338,
    3339,  3347,  3348,  3354,  3375,  3379,  3393,  3399,  3412,  3416,
    3416,  3420,  3424,  3433,  3445,  3456,  3460,  3464,  3468,  3472,
    3476,  3480,  3484,  3492,  3500,  3517,  3525,  3534,  3538,  3542,
    3546,  3550,  3558,  3570,  3575,  3580,  3587,  3592,  3599,  3606,
    3617,  3627,  3630,  3641,  3642,  3643,  3644,  3645,  3646,  3647,
    3648,  3649,  3650,  3654,  3654,  3657,  3657,  3657,  3661,  3668,
    3672,  3676,  3684,  3692,  3702,  3712,  3716,  3723,  3728,  3737,
    3741,  3750,  3750,  3750,  3754,  3760,  3769,  3769,  3774,  3777,
    3786,  3797,  3797,  3802,  3806,  3813,  3817,  3828,  3831,  3836,
    3850,  3853,  3857,  3874,  3877,  3882,  3896,  3899,  3903,  3924,
    3927,  3932,  3937,  3947,  3963,  3978,  3981,  3986,  4007,  4008,
    4021,  4022,  4023,  4024,  4025,  4026,  4031,  4039,  4047,  4051,
    4059,  4063,  4072,  4080,  4088,  4096,  4103,  4116,  4123,  4127,
    4135,  4146,  4149,  4158,  4161,  4171,  4178,  4188,  4189,  4191,
    4193,  4199,  4203,  4207,  4208,  4209,  4213,  4225,  4226,  4227,
    4228,  4229,  4230,  4231,  4232,  4233,  4238,  4246,  4250,  4255,
    4264,  4272,  4280,  4284,  4288,  4296,  4300,  4304,  4312,  4313,
    4321,  4329,  4334,  4338,  4342,  4346,  4355,  4356,  4364,  4371,
    4374,  4377,  4380,  4384,  4396,  4408,  4424,  4427,  4431,  4441,
    4452,  4457,  4468,  4473,  4477,  4482,  4486,  4491,  4495,  4500,
    4504,  4508,  4512,  4516,  4530,  4534,  4538,  4542,  4547,  4551,
    4555,  4559,  4563,  4577,  4578,  4579,  4580,  4581,  4582,  4583,
    4591,  4595,  4599,  4603,  4614,  4618,  4622,  4626,  4634,  4638,
    4648,  4652,  4656,  4660,  4664,  4672,  4674,  4681,  4685,  4689,
    4693,  4703,  4707,  4711,  4719,  4721,  4729,  4733,  4740,  4744,
    4752,  4756,  4764,  4772,  4776,  4785,  4788,  4792,  4796,  4800,
    4804,  4815,  4821,  4827,  4833,  4843,  4847,  4851,  4859,  4863,
    4871,  4879,  4884,  4889,  4901,  4905,  4909,  4913,  4917,  4923,
    4923,  4928,  4934,  4934,  4939,  4943,  4953,  4961,  4968,  4973,
    4981,  4990,  5003,  5016,  5030,  5042,  5051,  5063,  5067,  5071,
    5075,  5079,  5083,  5091,  5094,  5102,  5106,  5115,  5119,  5128,
    5132,  5140,  5145,  5155,  5168,  5168,  5172,  5180,  5189,  5194,
    5203,  5207,  5211,  5218,  5223,  5232,  5241,  5241,  5241,  5241,
    5241,  5241,  5241,  5241,  5242,  5242,  5242,  5242,  5242,  5242,
    5243,  5247,  5247,  5247,  5247,  5247,  5247,  5247,  5247,  5247,
    5247,  5248,  5248,  5248,  5248,  5248,  5248,  5248,  5249,  5249,
    5249,  5249,  5249,  5249,  5249,  5249,  5250,  5250,  5250,  5250,
    5250,  5250,  5250,  5250,  5250,  5250,  5250,  5251,  5251,  5251,
    5251,  5251,  5251,  5251,  5251,  5251,  5251,  5251,  5251,  5252,
    5252,  5252,  5252,  5252,  5252,  5252,  5252,  5252,  5252,  5253,
    5253,  5253,  5253,  5253,  5253,  5253,  5253,  5253,  5253,  5253,
    5253,  5254,  5254,  5254,  5254,  5254,  5254,  5254,  5254,  5254,
    5254,  5254,  5254,  5255,  5255,  5255,  5255,  5255,  5255,  5255,
    5255,  5255,  5256,  5256,  5256,  5256,  5256,  5256,  5256,  5256,
    5257,  5257,  5257,  5257,  5257,  5257,  5257,  5257,  5257,  5258,
    5258,  5258,  5258,  5258,  5258,  5258,  5258,  5258,  5259,  5259,
    5259,  5259,  5259,  5259,  5259,  5259,  5259,  5259,  5260,  5260,
    5260,  5260,  5260,  5260,  5260,  5260,  5260,  5260,  5260,  5261,
    5261,  5261,  5261,  5261,  5261,  5261,  5261,  5261,  5261
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
  "AttributeAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT", "Pattern_XSLT",
  "PathPattern_XSLT", "PathPatternStart_XSLT", "RelativePathPattern_XSLT",
  "PatternStep_XSLT", "PatternAxis_XSLT", "PatternStepPredicateList_XSLT",
  "IdKeyPattern_XSLT", "IdValue_XSLT", "KeyValue_XSLT", "Module_XQ",
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
     310,   310,   310,   310,   310,   310,   310,   310,   311,   312,
     312,   312,   313,   314,   314,   315,   316,   316,   316,   317,
     317,   318,   319,   319,   320,   320,   321,   322,   322,   322,
     322,   322,   323,   324,   325,   326,   326,   327,   328,   328,
     329,   330,   330,   330,   330,   331,   331,   332,   332,   333,
     334,   334,   334,   334,   335,   336,   336,   337,   338,   338,
     338,   339,   340,   341,   342,   342,   342,   342,   342,   343,
     344,   344,   344,   345,   345,   346,   346,   346,   346,   346,
     346,   347,   347,   348,   348,   348,   349,   350,   350,   350,
     350,   351,   351,   352,   352,   353,   353,   354,   354,   355,
     355,   355,   355,   356,   357,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   359,   359,   359,   359,   359,   359,
     359,   360,   360,   360,   360,   361,   361,   362,   362,   362,
     362,   363,   364,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   366,   366,   366,   366,   367,   368,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   370,
     370,   370,   371,   371,   372,   373,   374,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   376,   377,   377,   378,   379,   380,
     380,   381,   381,   382,   383,   384,   384,   385,   385,   386,
     387,   387,   388,   388,   389,   390,   391,   391,   392,   392,
     392,   393,   393,   394,   394,   395,   396,   396,   397,   397,
     398,   398,   398,   398,   399,   399,   400,   400,   401,   401,
     402,   403,   403,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   407,   408,
     408,   408,   408,   409,   409,   409,   409,   410,   411,   411,
     412,   413,   413,   414,   414,   415,   416,   416,   417,   417,
     418,   419,   419,   420,   420,   421,   421,   422,   423,   423,
     423,   424,   424,   424,   425,   425,   426,   426,   427,   428,
     429,   429,   430,   430,   431,   431,   432,   433,   433,   434,
     434,   435,   435,   436,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   437,   437,
     437,   438,   438,   439,   439,   439,   440,   440,   440,   440,
     440,   441,   441,   441,   442,   442,   442,   443,   443,   444,
     444,   445,   445,   446,   446,   447,   447,   447,   448,   448,
     448,   449,   449,   449,   450,   450,   451,   451,   452,   453,
     453,   454,   454,   454,   454,   455,   456,   456,   456,   457,
     457,   458,   458,   459,   459,   460,   460,   460,   460,   460,
     460,   460,   460,   461,   461,   462,   462,   463,   463,   463,
     463,   463,   464,   465,   465,   466,   466,   467,   467,   467,
     468,   469,   469,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   471,   472,   472,   472,   473,   474,
     475,   475,   476,   477,   478,   479,   479,   480,   480,   481,
     481,   482,   482,   482,   483,   483,   484,   484,   485,   485,
     485,   486,   486,   487,   487,   488,   488,   489,   489,   489,
     490,   490,   490,   491,   491,   491,   492,   492,   492,   493,
     493,   493,   493,   493,   494,   495,   495,   496,   497,   497,
     498,   498,   498,   498,   498,   498,   499,   500,   501,   501,
     502,   502,   503,   504,   505,   506,   507,   507,   508,   508,
     509,   510,   510,   511,   511,   512,   512,   513,   513,   513,
     513,   514,   514,   514,   514,   514,   515,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   517,   518,   518,   518,
     519,   520,   521,   521,   521,   522,   522,   522,   523,   523,
     524,   525,   526,   526,   526,   526,   527,   527,   528,   529,
     530,   531,   532,   533,   534,   534,   535,   535,   535,   536,
     536,   537,   537,   538,   538,   539,   539,   540,   540,   541,
     541,   541,   541,   541,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   543,   543,   543,   543,   543,   543,   543,
     544,   544,   544,   544,   545,   545,   545,   545,   546,   546,
     547,   547,   547,   547,   547,   548,   548,   549,   549,   549,
     549,   550,   550,   550,   551,   551,   552,   552,   553,   553,
     554,   554,   555,   556,   556,   557,   557,   557,   557,   557,
     557,   558,   558,   558,   558,   559,   559,   559,   560,   560,
     561,   562,   562,   562,   563,   563,   563,   563,   563,   564,
     564,   565,   566,   566,   567,   567,   568,   569,   570,   570,
     571,   572,   573,   574,   575,   576,   577,   578,   578,   578,
     578,   578,   578,   579,   579,   580,   580,   581,   581,   582,
     582,   583,   583,   584,   585,   585,   586,   587,   588,   588,
     589,   589,   589,   590,   590,   591,   592,   592,   592,   592,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   592,
     592,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593,   593,
     593,   593,   593,   593,   593,   593,   593,   593,   593
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
       2,     2,     2,     2,     2,     2,     2,     2,     3,     1,
       3,     3,     3,     1,     1,     3,     1,     3,     2,     0,
       2,     3,     1,     2,     0,     2,     3,     1,     2,     3,
       3,     2,     4,     5,     4,     1,     2,     5,     0,     3,
       4,     1,     3,     3,     3,     0,     3,     0,     3,     4,
       1,     2,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     2,
       1,     3,     2,     3,     1,     1,     1,     2,     1,     3,
       3,     1,     1,     1,     3,     3,     2,     1,     3,     3,
       2,     0,     4,     4,     6,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     0,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     5,     7,     5,     7,     1,     1,     2,     2,     1,
       1,     2,     2,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     4,     6,     2,     2,     6,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     3,
       3,     5,     5,     4,     3,     3,     3,     5,     5,     5,
       1,     1,     1,     1,     4,     3,     5,     4,     0,     2,
       3,     3,     3,     7,     4,     6,     2,     1,     3,     3,
       6,     8,     6,     8,     2,     3,     0,     1,     3,     1,
       3,     3,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     1,     2,     2,     1,     1,     2,     3,     1,
       7,     0,     3,     0,     3,     2,     3,     1,     6,     5,
       2,     3,     4,     3,     1,     3,     5,     1,     0,     1,
       1,     0,     2,     2,     4,     4,     3,     1,     5,     6,
       2,     1,     5,     3,     4,     7,     8,     3,     1,     3,
       1,     3,     3,     0,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     4,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     4,     1,     4,
       1,     4,     1,     4,     1,     2,     2,     1,     1,     1,
       1,     4,     5,     5,     3,     4,     1,     2,     4,     1,
       2,     1,     2,     2,     1,     1,     3,     3,     1,     1,
       1,     2,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     1,     4,     4,     3,     4,     3,     1,     1,
       1,     1,     1,     1,     5,    10,     1,     1,     0,     7,
       7,     0,     1,     3,     3,     3,     3,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     0,     2,     2,     0,
       2,     2,     2,     2,     3,     0,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     1,     3,
       2,     3,     3,     4,     4,     3,     1,     3,     2,     3,
       2,     0,     1,     0,     2,     2,     3,     0,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     4,     4,
       3,     3,     3,     4,     4,     3,     4,     6,     1,     1,
       4,     1,     3,     4,     6,     7,     1,     1,     4,     1,
       1,     1,     1,     1,     4,     2,     0,     2,     2,     3,
       1,     3,     1,     4,     1,     2,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     3,     3,     3,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     6,     6,     2,     0,     3,     2,     4,     4,
       6,     5,     3,     5,     0,     2,     2,     3,     1,     3,
       2,     2,     2,     2,     2,     0,     1,     2,     1,     2,
       1,     2,     3,     3,     4,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     6,     6,     4,     4,     4,     2,
       2,     2,     2,     2,     7,     5,     5,     6,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     5,     7,     7,
       9,     5,     7,     0,     2,     2,     3,     3,     7,     3,
       7,     1,     3,     5,     1,     1,     3,     4,     4,     5,
       3,     5,     6,     1,     3,     3,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   175,   203,   219,   237,     0,     0,     0,   467,
       0,     0,     0,   535,     0,   511,     0,     0,   435,   492,
     462,     0,   721,   722,   723,   757,   758,   759,   763,   764,
     765,   766,   767,   769,   772,   773,   774,   775,   776,   777,
     778,   779,   780,   781,   782,   783,   784,   785,   786,   787,
     788,   789,   790,   791,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   809,   810,   811,   812,   813,   814,   815,   909,   910,
     771,   724,   816,   468,   469,   817,   818,   819,   820,   821,
     822,   823,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   768,   834,   835,   762,   836,   837,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   761,   856,   857,   858,
     859,   860,   861,   862,   863,   864,   865,   866,   867,   868,
     869,   760,   870,   770,   871,   872,   873,   874,   875,   876,
     877,   878,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   911,   912,   913,   914,   915,   916,   917,   918,
       2,   303,   305,   306,     0,   322,   325,   326,   307,   308,
     309,   315,   368,   370,   387,   390,   392,   395,   400,   403,
     406,   408,   410,   412,   414,   417,   418,   420,     0,   426,
     419,   431,   434,   438,   439,   471,     0,   444,   471,     0,
     456,   454,   464,   466,   440,   471,   473,   483,   474,   475,
     476,   479,   480,   477,   478,   499,   501,   502,   503,   500,
     540,   541,   542,   543,   544,   545,   463,   585,   577,   584,
     583,   582,   579,   581,   578,   580,   310,     0,   311,     0,
     313,   312,   314,   485,   486,   487,   484,   465,   316,   317,
     481,   744,   745,   482,   726,   756,     0,     0,     3,   171,
     172,     0,   175,   175,     4,   199,   200,     0,   203,   203,
       5,   215,   216,     0,   219,   219,     6,   237,   230,   231,
     237,     0,    11,    55,     7,     8,     9,     1,   757,   758,
     759,   763,   764,   765,   766,   767,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   789,   807,   909,
     910,   818,   820,   831,   832,   768,   762,   849,   855,   760,
     770,   895,   898,   904,   906,   916,   917,   488,   489,   756,
     757,   758,   764,   767,   760,   453,   506,   507,   508,     0,
     536,     0,   433,   512,     0,   416,   415,   491,     0,   447,
       0,     0,   548,     0,     0,     0,     0,     0,     0,     0,
     556,     0,     0,     0,     0,     0,   445,   446,   448,   449,
     450,   451,   457,   458,   459,   460,   461,     0,     0,     0,
     719,     0,     0,     0,   327,   329,     0,     0,   335,   337,
       0,     0,   357,     0,     0,     0,     0,     0,     0,   452,
       0,     0,     0,   563,     0,     0,   709,   710,     0,   712,
     713,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     323,   324,   320,   321,     0,     0,     0,     0,     0,     0,
       0,     0,   373,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   427,   432,
       0,     0,   441,   443,   442,   455,     0,   470,     0,   711,
       0,     0,     0,     0,   861,   868,     0,     0,     0,     0,
     184,     0,     0,   188,   189,   190,   185,   186,   255,   256,
       0,   187,   173,     0,   169,   170,   174,   861,     0,     0,
       0,     0,     0,     0,     0,     0,   201,     0,   197,   198,
     202,   861,     0,     0,     0,   247,     0,     0,   251,   252,
     254,   248,   249,     0,   250,     0,   217,   253,     0,   213,
     214,   218,   228,   229,   235,   861,     0,     0,     0,     0,
       0,     0,     0,     0,   234,     0,    13,    61,   511,     0,
     538,   537,   534,     0,   490,   599,   595,     0,   598,   610,
       0,     0,   552,   591,     0,   587,     0,     0,     0,     0,
     586,   592,     0,     0,   725,     0,     0,   555,     0,   601,
       0,   609,   611,   590,     0,     0,     0,     0,     0,     0,
       0,   563,     0,   563,     0,     0,   563,     0,     0,     0,
       0,     0,     0,     0,     0,   607,   602,     0,   606,   547,
       0,   294,     0,   299,     0,     0,     0,     0,     0,   737,
     739,   304,   318,   340,     0,     0,   319,   367,   369,   372,
     375,   376,   377,   385,   386,     0,   371,   378,   379,   380,
     381,   382,   383,   384,     0,     0,     0,   685,   685,   685,
     685,   388,   616,   620,   622,   624,   626,   628,     0,   393,
     394,   391,   396,   398,   397,   399,   401,   402,   404,   405,
       0,     0,     0,     0,   424,     0,   437,   436,     0,     0,
       0,     0,     0,     0,   495,   498,     0,   746,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   195,
     196,     0,     0,     0,     0,   257,   176,   181,   177,   178,
     179,   183,   180,   182,     0,     0,     0,   204,   209,   205,
     206,   207,   211,   212,   208,   210,     0,     0,   297,     0,
     220,   221,   222,   223,   227,   224,   225,   226,   296,   296,
     238,   239,   240,   241,   245,   246,   242,   243,   244,    12,
       0,    57,    58,     0,   512,     0,   539,     0,   429,   428,
       0,   596,   549,   550,     0,   554,   588,   589,   594,   593,
     557,   558,     0,   600,   608,   553,   546,     0,   718,     0,
     493,   494,   331,   328,   333,     0,   336,     0,   356,   354,
     355,     0,     0,   421,     0,     0,     0,   603,   563,     0,
     295,     0,   769,   761,   770,   564,   567,   571,   573,   576,
     574,   575,     0,     0,   747,     0,     0,     0,     0,     0,
     347,   341,   344,   348,     0,   374,     0,     0,   625,   686,
     688,   690,   629,   630,   631,   632,     0,   389,     0,   615,
       0,     0,   407,   409,   411,   561,   413,   425,     0,   748,
       0,     0,     0,   708,   707,   706,     0,   496,     0,   232,
       0,   259,   260,   613,   275,     0,     0,   288,   289,   265,
     266,     0,     0,     0,     0,   270,   271,     0,     0,     0,
       0,     0,     0,     0,     0,   278,     0,   278,     0,     0,
       0,   650,   651,     0,     0,   264,   643,   644,   645,   646,
     647,   648,   649,   702,   701,   703,     0,    10,    19,    43,
      29,    50,    14,    33,    15,    33,    16,    61,    17,    61,
      56,    54,    79,     0,    86,    92,     0,     0,     0,   120,
     125,   128,   132,   134,   111,   140,    83,    84,    63,    64,
      61,    65,    62,    66,    89,    67,    94,    68,    70,    69,
      76,   115,    71,    61,    72,    61,    73,    61,    74,    61,
      75,    61,    77,     0,   511,   511,   529,   504,   430,     0,
     612,   551,   559,   720,     0,     0,   333,     0,     0,     0,
       0,     0,     0,   361,     0,   422,   423,     0,   300,   298,
       0,     0,     0,     0,   568,   570,   569,   565,     0,     0,
     715,     0,   716,     0,     0,     0,   349,   350,   351,   342,
     627,   685,   687,   689,     0,   619,     0,     0,   634,     0,
       0,     0,     0,     0,     0,   618,   617,   621,     0,   562,
     560,   472,   749,     0,     0,   497,     0,     0,   563,     0,
       0,   274,     0,     0,     0,   263,     0,   152,   151,   757,
     778,   911,   912,     0,   144,     0,   145,   153,   161,   148,
     157,     0,     0,     0,     0,   278,     0,   277,     0,   284,
     656,   657,   655,   659,   664,     0,   684,   652,   653,   682,
     654,   658,     0,     0,   683,     0,     0,    23,    21,     0,
       0,     0,    61,    30,    32,     0,    61,    44,    48,    47,
       0,     0,     0,    51,     0,     0,     0,    60,    59,     0,
       0,     0,   108,   105,     0,     0,    58,     0,    88,     0,
       0,    93,     0,    61,     0,    58,    58,   117,   121,     0,
       0,     0,     0,     0,    58,     0,     0,     0,    58,     0,
      58,    58,     0,   139,   142,     0,     0,     0,     0,   597,
     717,     0,     0,     0,     0,   339,   358,     0,     0,     0,
     359,   360,     0,     0,   604,   755,   566,   572,   750,   753,
       0,   301,   302,     0,     0,     0,   741,     0,   343,     0,
     345,   633,   700,   642,   640,   641,   614,     0,     0,     0,
       0,     0,     0,   698,   699,   638,   639,   623,   704,   705,
     233,   236,     0,   258,   267,   268,   261,   262,   272,   273,
     269,   160,     0,     0,     0,     0,     0,     0,   731,   733,
     147,     0,     0,   156,     0,     0,     0,     0,   727,   733,
       0,   193,   191,   281,   282,   276,   279,     0,     0,   672,
       0,     0,   661,   660,     0,     0,     0,    20,    24,    25,
      26,    27,    22,    36,    34,    61,     0,    31,     0,    46,
      45,    42,    53,    52,    49,    82,     0,     0,    61,   106,
       0,    61,    80,    81,    78,    87,    85,    97,    90,    61,
      91,    95,     0,   112,   113,   114,    61,     0,   123,   122,
      61,   126,   124,   129,   130,   127,   131,   135,   137,   138,
     136,   133,   141,   511,   511,     0,   533,   532,   531,   530,
     332,     0,   334,   338,     0,     0,     0,     0,     0,   605,
       0,     0,     0,   714,   563,     0,   738,   740,   352,   353,
       0,   695,   696,   697,   635,     0,     0,   691,     0,   636,
     637,     0,   287,   285,   159,   158,     0,   166,   165,     0,
     143,   735,     0,     0,     0,   155,   154,     0,   150,   149,
       0,     0,     0,   280,   278,   665,   665,   667,     0,     0,
     674,   674,     0,   292,   290,    37,    41,    40,     0,     0,
       0,    18,    28,   102,    61,     0,   104,     0,    98,   101,
       0,     0,     0,   116,     0,   110,   119,     0,     0,   511,
     330,     0,   364,     0,   363,   366,   751,   754,     0,     0,
     742,   346,   693,   692,     0,   286,   163,     0,   736,   734,
     732,     0,   729,   733,   728,   194,   192,   283,     0,     0,
       0,     0,     0,   678,   676,   671,   673,     0,    39,    38,
      35,     0,   109,   103,   100,    99,    96,   118,   517,   523,
     509,   520,   526,   510,     0,     0,     0,   752,     0,   694,
       0,   167,   168,   162,     0,     0,   663,   662,   668,   669,
       0,   677,     0,     0,   675,   293,   291,   107,     0,     0,
       0,     0,   505,     0,   362,   743,   164,   730,   666,     0,
     679,   680,   681,   513,   519,   518,   514,   525,   524,   515,
     522,   521,   516,   528,   527,   365,   670
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   314,   315,   576,   780,   942,   943,  1282,   944,
     945,  1122,  1284,  1285,   946,   947,   948,   949,   968,   577,
     950,   783,   969,   970,   971,   972,   973,   974,  1150,   975,
     976,  1152,  1308,  1309,   977,   978,   979,  1142,  1143,  1300,
     980,   981,  1157,  1317,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,  1083,  1084,  1085,  1086,
    1087,  1088,  1253,  1089,  1376,  1490,   288,   289,   290,   291,
     506,   507,   732,   294,   295,   296,   297,   300,   301,   302,
     303,   306,   292,   308,   309,   293,   311,   542,   508,   736,
     509,   510,   511,   512,   534,   513,   514,   515,   907,  1240,
     516,   517,   518,  1097,   914,   519,   520,  1373,   521,   555,
     433,   759,   642,   643,  1138,   190,   191,   192,   193,   194,
     195,   196,   414,   415,  1006,  1008,   197,   418,   419,   452,
     453,   851,   852,   853,  1038,  1210,   198,   421,   422,   199,
    1012,  1190,  1013,   200,   201,   202,   203,   665,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   789,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     492,   235,   236,   237,   238,   357,   239,   240,   241,   242,
     243,   716,   244,   245,   246,   368,   578,   374,  1480,  1483,
    1508,  1510,  1509,  1511,  1178,   247,   371,   248,   581,   249,
     250,   251,   383,   592,   252,   253,   254,   255,   391,   607,
     874,  1060,   645,   835,  1027,   836,   837,   256,   257,   258,
     259,   260,   261,   262,   587,   263,   608,   264,   637,   265,
     610,   588,   611,   999,   894,   681,   869,   682,   683,   684,
     685,   686,   687,  1055,   925,   926,   927,   928,   929,  1458,
    1273,   930,  1465,  1400,  1462,  1504,   931,   932,   862,  1221,
    1364,  1225,   867,   557,   266,   267,   268,   269,   270,   271,
     272,   409,   410,   273,   274,   275,   276,   603,   277,   523,
    1384,  1249,   278,   279,  1205,  1206,   280,   281,   282,   283,
     840,  1200,   841,   284,   285
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1233
static const yytype_int16 yypact[] =
{
     957,  2813,   253,   253,   253,   253,  -131,   166,  6911, -1233,
    5543,   385,    98,   129,  4211,   136,  3046,  3046, -1233, -1233,
   -1233,  1415, -1233, -1233, -1233,    56,    85,   244,   254,   146,
     276,   309,   152, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
     320,   388,   447,   510,   536,   607,   611,   620,   645,   698,
     703,   434, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,   562,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,   454,   558,
   -1233, -1233, -1233, -1233, -1233, -1233,   584, -1233,     6, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,   719,
     719, -1233,   692, -1233, -1233,   701, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,   472,
   -1233, -1233, -1233, -1233, -1233,   728, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233,   326, -1233,   711, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,    58, -1233,
   -1233,     7, -1233, -1233, -1233, -1233, -1233,   697, -1233,    27,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233,   527,   544, -1233,
   -1233,   734, -1233, -1233,   641,   797, -1233, -1233, -1233, -1233,
   -1233,   631,   637, -1233,  1030,   635,    96,   157,    60,   632,
   -1233,   682,   691,   718,   726, -1233, -1233, -1233,   281, -1233,
   -1233,  4211,    90, -1233, -1233, -1233,  5543, -1233, -1233,  5543,
   -1233, -1233, -1233, -1233,   855, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233,  2813, -1233,  2813,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233,   123,   747,   776, -1233, -1233,
   -1233,  3279,   763, -1233, -1233, -1233, -1233,  3512,   763, -1233,
   -1233, -1233, -1233,  3745,   763, -1233, -1233,   763, -1233, -1233,
   -1233,  3978, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
     925,   927,   930,   933,   948, -1233, -1233, -1233, -1233,   808,
   -1233,   961,    90, -1233,  6911, -1233, -1233, -1233,   298, -1233,
    5759,  2813, -1233,   944,   959,  2813,    44,   971,  6729,  2813,
   -1233,   949,  6911,  6911,   973,  2813, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233,  2813,  6911,    32,
   -1233,  2813,  2813,  6911,   969, -1233,  6911,  1009,   991, -1233,
    6911,    34, -1233,   128,  2813,  2813,  2813,   984,   990, -1233,
    5975,   944,   288,   898,  2813,   889, -1233, -1233,  2813, -1233,
   -1233,  6911,  2813,  2813,  2813,   584,     6,  2813,   915,   920,
   -1233, -1233,   784, -1233,  3046,  3046,  3046,  3046,  3046,  3046,
    3046,  3046, -1233,  3046,  3046,  3046,  3046,  3046,  3046,  3046,
    3046,  4647,  3046,  3046,  3046,  3046,  3046,  3046,  3046,  3046,
    3046,  3046,  3046,   895,   911,   928,   929,  1648, -1233,    90,
    4211,  4211,  1059, -1233,  1059, -1233,  1043,  1059,   245, -1233,
    1881,  1029,   964,  6911,   758,   739,  1035,  1035,  1035,  1035,
   -1233,  1035,  1035, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
    1035, -1233, -1233,  1035, -1233, -1233,   318,   487,  1035,  1035,
    1035,  1035,  1035,  1035,  1035,  1035, -1233,  1035, -1233, -1233,
     422,   664,  1035,  1035,  1035, -1233,  1035,  1035, -1233, -1233,
   -1233, -1233, -1233,  1035, -1233,  1035, -1233, -1233,  1035, -1233,
   -1233,   473, -1233, -1233,   551,   493,  1035,  1035,  1035,  1035,
    1035,  1035,  1035,  1035, -1233,  1035,   825,   653,   987,   988,
   -1233, -1233, -1233,     2, -1233, -1233, -1233,   722, -1233, -1233,
     343,  2114, -1233, -1233,   486, -1233,   309,   948,  1052,  1054,
   -1233, -1233,  1055,  1056, -1233,   496,  2347, -1233,  1057, -1233,
    1058, -1233, -1233, -1233,   517,   518,  1092,   562,  2813,   524,
     526,   898,   584,   898,  6911,     6,   898,   719,  2813,  2813,
     727,   759,   533,  2813,  2813, -1233, -1233,   785, -1233, -1233,
    6911, -1233,   800, -1233,  6360,   896,   877,  1041,   952,   880,
     881, -1233, -1233, -1233,  2813,   970, -1233,   637, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233,  3046, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233,  4647,  2813,  4865,   501,   501,   501,
     501,  1017,  1086,  1089,  1028, -1233, -1233, -1233,  1074,   157,
     157,   912,    60,    60,    60,    60,   632,   632, -1233, -1233,
    6360,  6360,  6911,  6911, -1233,   542, -1233, -1233,  2813,  2580,
     196,  2813,  2813,  2813, -1233, -1233,   810, -1233,    82,  1079,
     798,   992,  1112,  6911,   801,   860,   466,   177,  6911, -1233,
   -1233,   749,  7084,   173,    -4, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233,   758,   739,   402, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233,   487,   321, -1233,   795,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,   827,   794,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
     457, -1233, -1233,  1034,   872,   574, -1233,   993, -1233, -1233,
    6911, -1233, -1233, -1233,   579, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233,   590, -1233, -1233, -1233, -1233,  2813, -1233,   995,
   -1233, -1233,  1004, -1233,   934,  1113, -1233,   989, -1233, -1233,
   -1233,   979,   976, -1233,   592,   630,  6911, -1233,   898,  1123,
   -1233,  6545,  1091,  1093,  1094, -1233,   503, -1233, -1233, -1233,
   -1233, -1233,  2813,  2813, -1233,  2813,  2813,  2813,  1095,  1096,
   -1233,  1099, -1233,   857,  2813, -1233,  1103,   650, -1233,  1040,
     935, -1233, -1233, -1233, -1233, -1233,  1049, -1233,  4647,  1070,
    4647,  1013, -1233, -1233, -1233,  1127, -1233, -1233,   347, -1233,
     816,   922,   923, -1233, -1233, -1233,  2813, -1233,  1025, -1233,
     992, -1233, -1233, -1233, -1233,  6911,  1114, -1233, -1233, -1233,
   -1233,  1014,   992,   982,   985, -1233, -1233,  1128,  1031,  5096,
    6911,   711,  6911,   972,   992,  1046,  6911,  1046,   917,   863,
     919, -1233, -1233,  1038,   557, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233,  7084, -1233, -1233, -1233,
   -1233, -1233, -1233,   511, -1233,   528, -1233,   540, -1233,   429,
      45, -1233, -1233,   733, -1233, -1233,   891,   918,   887, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
     420, -1233, -1233, -1233,   203, -1233,   900, -1233, -1233, -1233,
   -1233,   297, -1233,   468, -1233,   894, -1233,   601, -1233, -1233,
   -1233,   450, -1233,    88,   136,   136, -1233, -1233, -1233,  1134,
   -1233, -1233, -1233, -1233,  2813,  1161,   934,  1169,  1172,  2813,
    2813,  4429,   -54, -1233,  2813, -1233, -1233,   149, -1233, -1233,
    1140,  1141,  1144,  6175, -1233, -1233, -1233, -1233,   655,   661,
   -1233,   962, -1233,  1180,  1180,  2813, -1233, -1233,  1048,  1099,
   -1233,   501, -1233, -1233,  3046,  1089,  1100,   921, -1233,  1135,
    3046,    81,    81,   807,   807, -1233, -1233,  1028,  4647, -1233,
   -1233, -1233, -1233,  2813,  2813, -1233,  1035,  1035,   898,   992,
     884, -1233,   992,   992,   852, -1233,  5543, -1233,    23,   283,
    1181,  1160,  1163,   490, -1233,  5327,   365, -1233,  1182,   552,
   -1233,    69,   262,  1167,  1033,  1046,   992,  1173,  1170,  1173,
   -1233, -1233, -1233, -1233, -1233,   997, -1233, -1233, -1233, -1233,
   -1233, -1233,    15,   999, -1233,  1119,   711, -1233, -1233,  5096,
    6360,   756,   965, -1233, -1233,  6360,   965, -1233, -1233, -1233,
    6360,  2813,  1067, -1233,  6360,  2813,  1111, -1233, -1233,   975,
    2813,   939,   779, -1233,  2813,  2813, -1233,  5098, -1233,  2813,
     179, -1233,   230, -1233,  2813, -1233, -1233,   956, -1233,  6360,
    2813,  7085,  2813,  7106, -1233,  2813,  7139,  7160, -1233,  2813,
   -1233, -1233,  7193, -1233, -1233,  2813,  1176,  1178,   569, -1233,
   -1233,  6911,  1097,  6911,  2813, -1233, -1233,  6911,  1098,    72,
   -1233, -1233,  1068,  1183, -1233, -1233, -1233, -1233,  1076, -1233,
     841, -1233, -1233,  2813,  6911,   842, -1233,   847, -1233,   893,
    1081, -1233,    60, -1233, -1233, -1233, -1233,   175,    22,  3046,
    3046,   640,  1032, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233,    36, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233,  5543,  5543,    54,  1038,  5096,   295, -1233,  1083,
     365,  5327,  5327, -1233,  1216,  5327,  5327,  5096, -1233,  1083,
    6360, -1233, -1233, -1233, -1233,  1173, -1233,   992,   992, -1233,
     -39,  1038, -1233, -1233,    74,  1026,   397,  1227, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233,   604,  7214, -1233,  7247, -1233,
     734, -1233, -1233,   734, -1233, -1233,   -19,  2813, -1233, -1233,
    1000,   734,   734,    45, -1233,   734, -1233, -1233, -1233,   563,
   -1233, -1233,  7268,   734,    45,    45, -1233,  1003, -1233,   734,
   -1233,   734, -1233,    45,   734, -1233, -1233,    45,   734,    45,
      45, -1233,   734,   136,   136,   385, -1233, -1233, -1233, -1233,
   -1233,  2813, -1233, -1233,  1088,  2813,  6911,  2813,  2813, -1233,
    6360,  6360,  1104, -1233,   898,  1180, -1233, -1233, -1233, -1233,
     992, -1233, -1233, -1233, -1233,  3046,  3046,    60,    33, -1233,
   -1233,  2813, -1233, -1233, -1233, -1233,  1203, -1233, -1233,  1218,
   -1233, -1233,   848,  6360,   896, -1233, -1233,  2813,   365,   365,
     490,   896,   308, -1233,  1046, -1233, -1233,   111,  1038,  1038,
   -1233, -1233,  6360, -1233, -1233, -1233, -1233, -1233,  6360,  2813,
    7301, -1233, -1233, -1233,   734,  7322, -1233,  7355, -1233, -1233,
    6360,  2813,  7376, -1233,  7409, -1233,  4864,   735,   796,   136,
   -1233,  6360, -1233,  1125, -1233, -1233, -1233, -1233,  6360,  1246,
   -1233, -1233,    60,    60,  3046, -1233, -1233,   508, -1233, -1233,
   -1233,   424, -1233,  1083, -1233, -1233, -1233,  1173,   864,   871,
    1038,  1064,   875, -1233, -1233,   760,   760,   312, -1233,   734,
   -1233,  7430, -1233, -1233, -1233,   734, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233,  1233,  1129,  2813, -1233,  2813,    60,
    1223, -1233, -1233,  1256,   896,  1184, -1233, -1233,    81, -1233,
    1038, -1233,    74,    74, -1233, -1233, -1233, -1233,   469,   324,
     483,   573, -1233,  2813, -1233, -1233, -1233, -1233, -1233,  1078,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233,   338, -1233, -1233, -1233, -1233, -1233, -1233,  1280, -1233,
    -334,  -774, -1233, -1233, -1233,   335, -1233, -1233, -1233, -1233,
   -1233, -1233,   137, -1233, -1233, -1233, -1233, -1233,   156, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1064,    55, -1233,  -999,
    -212, -1233, -1233, -1233, -1233, -1233, -1233,  1010,  1011,  1012,
    -290,  -289,  -552, -1233,  1006,  1008,  1020, -1233,  1007,  1027,
    1002, -1233,   916,  1001,  1023,    46,  1024,  -277,  -245,  -429,
    -235,  -219,   -97,   -70,  -274,  -218,  -134,  -132, -1233, -1233,
     -64,   -63, -1233,  -904, -1233, -1233,   -36, -1233,   -58,  -255,
    -850, -1233,    63,   504,  -642,   352,    50,  -258, -1233, -1233,
   -1233,  1121, -1233,   713, -1233,   330,  1142, -1233,   715, -1233,
     892,   491,   306, -1233, -1233, -1233, -1233,  1248,   723, -1233,
   -1233, -1233,   334, -1233, -1233,   906,   897, -1233,  -309, -1233,
     888,   585,  -453,   582,   589, -1233, -1233, -1233,  1050, -1233,
   -1233, -1233, -1233,  1131, -1233, -1233, -1233,    28,   583, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233,     8, -1233, -1233, -1233,
    -216, -1233,  -454, -1233,  -466,  -380, -1233,  -450, -1233, -1233,
    -412,   654, -1233,   187, -1233,    31, -1233,  -558, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233,  1236,   943, -1233, -1233, -1233, -1233, -1233, -1233,
     675, -1233,  -582,  -647, -1233,   548,   373,  -612, -1233, -1233,
   -1233, -1233, -1233, -1233, -1233, -1233, -1233,   994, -1233,   996,
   -1233,   998,   951,   559,  -686,   709, -1233, -1233,   516,   519,
     328,   712, -1233, -1233,   522, -1233, -1233, -1233, -1233,    -9,
   -1232, -1233,    -5,  -424, -1233, -1233, -1233, -1233,  -649, -1009,
     171,   339, -1233, -1233, -1233, -1233, -1233, -1233, -1233, -1233,
   -1233, -1233,   780, -1233,   353, -1233,  -917,  -493,  -366,    11,
   -1199, -1087, -1233, -1233,   367,    48, -1233, -1233, -1233, -1233,
   -1233, -1233, -1233,    -7,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -473
static const yytype_int16 yytable[] =
{
     359,   358,   359,   844,  1259,   678,  1109,   528,   529,   498,
     719,   499,   494,  1099,   589,   416,   443,   677,   365,   497,
     785,   679,   692,   693,   694,   695,   589,   612,   616,   863,
     864,   865,   838,   621,   566,  -146,   623,   571,  1396,   812,
     626,   814,   372,  1222,   817,   479,  1371,   915,   917,   299,
     305,   310,   530,   872,   873,  1277,   573,  1270,   543,   680,
    1391,  1092,   531,     8,   612,  -146,   567,   617,   544,   627,
     436,   378,   479,  -146,  -146,   379,   568,  1271,   737,   738,
     739,  1346,   740,   741,   545,   548,  1250,   595,   838,   838,
     439,   742,   545,   548,   743,   842,   843,  1011,   380,   747,
     748,   749,   750,   751,   752,   753,   754,   381,   755,   787,
     596,  1247,   312,   760,   761,   762,  1398,   763,   764,   842,
     843,   434,   490,   893,   765,  1365,   766,   384,   491,   767,
    1189,  1271,   472,   473,   788,   735,   385,   770,   771,   772,
     773,   774,   775,   776,   777,  1395,   778,   659,   660,   661,
     662,   663,   664,   313,   666,   667,   668,   669,   670,   671,
     672,   673,  1137,   627,   435,   500,   317,  1366,   475,   549,
     916,   550,  1193,  1132,   904,  1136,   646,   549,   501,   550,
     648,    81,   382,   628,   650,   651,   652,   479,   388,   653,
    1399,  1265,  1194,  1390,   394,  1444,  1147,   389,   480,  1272,
     532,   417,  1218,   395,  1067,  1347,   546,   936,   678,  1161,
     678,  1163,  1372,  1166,   569,  1167,  1071,  1172,   359,   838,
     677,   359,   677,  1413,   679,   480,   679,   533,  1095,   369,
     896,   476,  1218,   547,   493,   437,   597,   495,   370,   551,
     552,   570,   715,   373,   815,   554,  1018,   551,   552,   489,
     528,   529,   618,   554,  1494,   440,  1388,  1389,   474,   888,
     828,   535,   680,  1518,   680,  -146,  1276,   553,  -146,  -146,
    -146,  -146,   390,  -146,  -146,   572,  -146,   629,   839,  -146,
    -146,  -146,  -146,  -146,  -146,  -146,   386,   566,  -146,   889,
     571,  -146,  -146,  1219,  1220,   530,   387,   640,  -146,  -146,
     893,  -146,  1242,  1453,   640,   531,  1257,  -146,   537,   573,
    -146,  -146,   842,   843,   558,    15,   543,  1460,   392,   567,
     477,   478,   575,  1219,  1220,   380,   544,  1378,  1379,   568,
    1173,   641,   487,   443,   839,   839,   839,   839,  1381,   396,
     480,   584,   545,   548,   299,   545,   548,   912,  1286,   905,
     305,   393,  1288,   310,  1397,   906,   855,   913,   842,   843,
     809,  1174,   842,   843,  1188,  1175,   359,   583,   430,  1061,
     819,   820,   359,  1526,   842,   843,  1199,   381,   443,  1312,
     359,   604,   443,  1233,   359,   359,  1236,  1237,  1461,  1361,
    1362,  1363,  1211,   933,   934,   792,   850,  1251,   710,   838,
     359,   358,   678,  1252,   678,   359,   358,   397,   359,   358,
    1266,   838,   359,   358,   677,  1260,   677,   881,   679,  1093,
     679,  1306,   359,  1098,  1000,   935,   882,   549,  1307,   550,
     549,   590,   550,   359,   649,   594,  1176,  1177,  1261,   605,
     286,  1248,  1527,   532,   287,   614,  1493,   842,   843,  1258,
    1262,   715,   382,   883,   884,   885,   680,   615,   680,   443,
    1000,   619,   620,   688,   546,   839,   398,   569,   711,   712,
     533,  1148,  1310,  1278,   630,   631,   632,   713,  1287,  1307,
    1149,  1463,  1464,  1289,  1455,   407,  1232,  1292,  1505,  1519,
    1457,   547,   918,   919,   570,   359,   604,   551,   552,   744,
     551,   552,  1246,   554,   535,   411,   554,   745,   838,   366,
     367,  1410,  1318,   838,  1024,  1068,  1523,     8,   838,   842,
     843,   443,   838,   426,  1415,   553,  1025,  1417,   572,   399,
    1529,   443,  1247,   842,   843,  1422,  1338,   705,   795,  1026,
     842,   843,  1424,  1498,   427,   428,  1426,   838,   800,  1003,
    1402,   537,   443,   443,   920,   400,   720,   746,   721,   443,
    1153,   443,   720,   746,   721,    22,    23,    24,   443,   805,
     806,   408,   558,  1403,  1154,   575,   810,   443,   811,  1155,
    1156,  1393,  1394,  1520,  1255,   823,  1524,  1030,  1031,  1032,
    1256,  1212,   678,   413,   877,    11,   850,  1217,    12,    13,
    1530,   996,  1335,   756,   677,   901,   921,   922,   679,   412,
     923,   745,   902,  1392,   443,   722,   359,   358,   997,   842,
     843,   722,  1532,   842,   843,   443,   401,   443,  1065,   924,
     402,  1001,   359,   358,  1404,    81,   359,  1230,  1231,   403,
    1471,   794,  1002,   522,  1015,   839,   680,  1110,   838,   536,
    1111,  1112,  1113,  1114,   768,   556,   802,   839,   903,   729,
     730,   723,   745,   574,   404,   443,   688,   723,   688,   724,
     725,   726,   727,   728,  1441,   724,   725,   726,   727,   728,
     729,   730,  1016,   824,   825,   443,  -296,  -296,  1336,  1337,
     443,  1533,   359,   359,   359,   359,   443,  1145,  1133,   937,
    1146,   938,  1041,  1436,  1437,  1134,  1135,  1201,   939,   940,
     859,   860,   861,  1202,   941,   359,   604,   405,   757,  1168,
     359,   908,   406,   731,   911,   857,   758,  1169,   420,   731,
    1170,  1171,   769,   720,   424,   721,  1449,  1158,   838,   838,
     745,  1115,  1450,   425,  1159,  1160,  1180,   429,  1452,  1454,
    1456,  1185,  1186,   432,   839,  1467,  1192,   790,   878,   839,
     438,  1468,   443,   441,   839,   791,  1367,  1368,   839,   443,
     821,   838,  1439,  1474,   444,  1427,  1428,   850,  1377,  1117,
    1118,  1478,   359,  1479,  1485,   442,  1119,  1120,   454,  1121,
     838,  1487,   722,   839,   443,   455,   838,  1123,   481,   482,
    1124,  1340,   822,  1342,  1125,  1228,  1229,  1344,   838,  1127,
    1128,  1129,  1303,  1279,  1280,  1281,  1130,  1131,   359,   838,
     826,  1314,  1315,   359,  1354,  1506,   838,   720,   827,   721,
    1323,   471,  1418,  1419,  1327,   829,  1329,  1330,   723,  1420,
    1421,   483,  1481,   830,  1482,   886,   724,   725,   726,   727,
     728,   886,  1517,   887,  1361,  1362,  1363,  -296,  -296,  1062,
     688,   484,   688,   720,   746,   721,  1525,  1528,  1531,  1534,
    1164,  1484,  1254,  1405,  1406,  1407,  1351,  1355,  1165,   485,
    1408,  1409,  1355,   829,  1352,  1356,   722,   359,   358,   757,
    1357,  1448,  1028,  1029,   839,   486,   720,   758,   721,  1495,
     731,   359,   359,  1091,   359,   604,  1495,  1496,   359,   604,
    1500,   496,  1442,  1443,  1497,   579,   580,  1090,  1501,   298,
     304,   307,   722,   448,   449,  1502,  1343,  1503,  1116,   733,
     734,   445,   723,   446,   447,   502,   448,   449,   781,   782,
     724,   725,   726,   727,   728,  1353,   842,   843,   472,   473,
     503,   729,   730,  1102,   287,   722,  1103,  1104,  1105,  1106,
       1,     2,     3,     4,     5,     6,  1433,   380,   723,   384,
     891,   892,   388,   897,   898,   394,   724,   725,   726,   727,
     728,  1492,   899,   900,   839,   839,   909,   910,   729,   730,
     430,  1489,   582,  1491,   731,   591,   994,   995,  1036,  1037,
     606,   723,   593,   359,   622,  1100,  1101,  1107,  1108,   724,
     725,   726,   727,   728,   600,   359,   613,   839,   624,   757,
     966,   967,  1214,  1215,  1223,  1224,   625,   758,  1234,  1235,
     731,  1238,  1239,  1141,  1298,   633,   839,  1358,  1359,  1385,
    1386,   634,   839,   456,   457,   458,   459,   460,   461,   647,
     688,   644,   757,   654,   839,   700,   462,   689,   690,   655,
     758,   696,   697,   731,   701,   839,   375,   376,   359,   463,
     698,   699,   839,   706,   707,   875,   875,   359,  1521,  1522,
     708,   702,   703,  1430,  1241,   709,   717,  1432,   735,  1434,
    1435,   718,   779,  1090,   784,   796,   786,   797,   798,   799,
     803,   804,   807,   845,   846,   847,   848,   849,   854,   866,
     868,   359,   359,  1445,   870,   871,   500,   359,   890,   893,
    1005,   895,   359,  1009,  1010,   998,   359,  1090,  1004,  1007,
    1011,  1014,   640,  1021,  1035,  1022,  1023,  1033,  1034,  1042,
     464,   465,   466,   467,   468,   469,  1040,  1044,  1058,  1043,
    1059,   359,  1066,  1069,  1063,  1064,  1072,  1070,  1075,  1073,
     918,   919,  1096,  1074,  1094,    81,  1144,  1046,  1140,  1151,
    1181,  1162,  1141,   359,   358,   359,   358,  1179,  1183,   359,
     358,  1290,  1184,  1195,  1196,  1293,  1047,  1197,  1203,  1204,
    1296,  1209,  1048,    23,  1301,  1302,   359,   358,  1213,  1305,
    1243,   470,  1244,  -471,  1313,  1245,  1263,  1264,  1267,  1268,
    1319,  1269,  1321,  1274,  1275,  1324,  1283,  1295,  1297,  1328,
    1316,  1333,   920,  1334,  1348,  1332,  1349,  1360,  1514,  1350,
    1515,  1345,  1341,  1370,   359,   359,  1383,  1387,   359,  1246,
    1401,  1431,  1416,   359,   359,  1425,  1446,   359,   359,   359,
    1374,  1375,   359,  1447,  1090,  1535,  1488,  1438,  1486,  1090,
    1090,  1512,  1513,  1090,  1090,  1090,  1516,  1049,  1050,  1051,
    1052,  1499,  1053,  1054,   921,   922,   951,  -472,   923,   952,
     953,   954,   955,  1126,   956,  1536,   316,   957,  1139,  1311,
     958,   959,   960,   961,   962,   963,   964,   924,  1299,   965,
    1271,  1380,   524,   525,   538,   526,   539,   561,   562,  1291,
    1382,   559,   952,   953,   954,   955,   450,   956,   313,   540,
     957,   966,   967,   958,   959,   960,   961,   962,   963,   964,
     563,   560,   965,  1019,   564,   813,  1182,   451,   359,   358,
     816,  1208,   359,   359,   656,  1039,  1191,  1414,   423,   488,
     818,   313,   658,  1294,   966,   967,   952,   953,   954,   955,
     657,   956,   691,   880,   957,  1339,  1429,   958,   959,   960,
     961,   962,   963,   964,   639,   359,   965,   431,   876,  1020,
     598,   638,   599,   856,  1045,  1017,  1227,  1459,   858,  1057,
     609,  1056,  1369,  1226,   359,   313,  1466,   808,   966,   967,
     359,  1207,  1216,  1440,     0,     0,     0,     0,     0,     0,
       0,     0,   359,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   359,     8,     0,     9,     0,     0,     0,
     359,     0,     0,     0,     0,    10,     0,  1451,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,   377,  1469,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1475,    22,    23,    24,    25,    26,    27,    28,    29,
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
     351,   169,   170,   352,   172,   173,   174,   175,  1187,   176,
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
     953,   954,   955,     0,   956,     0,  1076,   957,     0,     0,
     958,   959,   960,   961,   962,   963,   964,     0,  1077,   965,
       0,     0,     0,     0,  1078,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   313,     0,
       0,   966,   967,     0,     0,     0,  1079,   361,    27,    28,
     362,    30,    31,   363,    33,    34,    35,    36,    37,    38,
      39,  1080,   327,   328,   329,   330,   331,   332,   333,   334,
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
    1081,  1082,   184,   185,   186,   355,   356,   189,     9,     0,
    1304,     0,     0,   952,   953,   954,   955,  1076,   956,     0,
       0,   957,     0,     0,   958,   959,   960,   961,   962,   963,
     964,     0,     0,   965,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   313,     0,     0,   966,   967,  1079,   361,    27,
      28,   362,    30,    31,   363,    33,    34,    35,    36,    37,
      38,    39,  1080,   327,   328,   329,   330,   331,   332,   333,
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
     183,   184,   185,   186,   355,   356,   189,   831,  1198,     0,
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
     184,   185,   186,   355,   356,   189,     0,  1320,     0,     0,
     952,   953,   954,   955,     0,   956,     0,     0,   957,     0,
       0,   958,   959,   960,   961,   962,   963,   964,  1322,     0,
     965,   952,   953,   954,   955,     0,   956,     0,     0,   957,
       0,     0,   958,   959,   960,   961,   962,   963,   964,   313,
       0,   965,   966,   967,     0,     0,     0,     0,     0,     0,
       0,  1325,     0,     0,   952,   953,   954,   955,     0,   956,
     313,     0,   957,   966,   967,   958,   959,   960,   961,   962,
     963,   964,  1326,     0,   965,   952,   953,   954,   955,     0,
     956,     0,     0,   957,     0,     0,   958,   959,   960,   961,
     962,   963,   964,   313,     0,   965,   966,   967,     0,     0,
       0,     0,     0,     0,     0,  1331,     0,     0,   952,   953,
     954,   955,     0,   956,   313,     0,   957,   966,   967,   958,
     959,   960,   961,   962,   963,   964,  1411,     0,   965,   952,
     953,   954,   955,     0,   956,     0,     0,   957,     0,     0,
     958,   959,   960,   961,   962,   963,   964,   313,     0,   965,
     966,   967,     0,     0,     0,     0,     0,     0,     0,  1412,
       0,     0,   952,   953,   954,   955,     0,   956,   313,     0,
     957,   966,   967,   958,   959,   960,   961,   962,   963,   964,
    1423,     0,   965,   952,   953,   954,   955,     0,   956,     0,
       0,   957,     0,     0,   958,   959,   960,   961,   962,   963,
     964,   313,     0,   965,   966,   967,     0,     0,     0,     0,
       0,     0,     0,  1470,     0,     0,   952,   953,   954,   955,
       0,   956,   313,     0,   957,   966,   967,   958,   959,   960,
     961,   962,   963,   964,  1472,     0,   965,   952,   953,   954,
     955,     0,   956,     0,     0,   957,     0,     0,   958,   959,
     960,   961,   962,   963,   964,   313,     0,   965,   966,   967,
       0,     0,     0,     0,     0,     0,     0,  1473,     0,     0,
     952,   953,   954,   955,     0,   956,   313,     0,   957,   966,
     967,   958,   959,   960,   961,   962,   963,   964,  1476,     0,
     965,   952,   953,   954,   955,     0,   956,     0,     0,   957,
       0,     0,   958,   959,   960,   961,   962,   963,   964,   313,
       0,   965,   966,   967,     0,     0,     0,     0,     0,     0,
       0,  1477,     0,     0,   952,   953,   954,   955,     0,   956,
     313,     0,   957,   966,   967,   958,   959,   960,   961,   962,
     963,   964,  1507,     0,   965,   952,   953,   954,   955,     0,
     956,     0,     0,   957,     0,     0,   958,   959,   960,   961,
     962,   963,   964,   313,     0,   965,   966,   967,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   313,     0,     0,   966,   967
};

static const yytype_int16 yycheck[] =
{
       8,     8,    10,   645,  1091,   471,   923,   297,   297,   267,
     503,   269,   228,   917,   380,     9,    35,   471,    10,   235,
     578,   471,   475,   476,   477,   478,   392,   393,   408,   678,
     679,   680,   644,   413,   311,    12,   416,   311,  1270,   621,
     420,   623,    14,  1052,   626,    12,    10,   733,   734,     3,
       4,     5,   297,   700,   701,  1119,   311,    42,   303,   471,
    1259,   911,   297,     9,   430,    42,   311,    35,   303,    35,
      63,    21,    12,    50,    51,    19,   311,   116,   507,   508,
     509,     9,   511,   512,   303,   303,  1085,    43,   700,   701,
      63,   520,   311,   311,   523,    50,    51,   151,    42,   528,
     529,   530,   531,   532,   533,   534,   535,    51,   537,   107,
      66,    42,   243,   542,   543,   544,    42,   546,   547,    50,
      51,    63,    32,   127,   553,   103,   555,    42,    38,   558,
     184,   116,    36,    37,   132,    53,    51,   566,   567,   568,
     569,   570,   571,   572,   573,   184,   575,   456,   457,   458,
     459,   460,   461,   284,   463,   464,   465,   466,   467,   468,
     469,   470,   117,    35,   106,    42,     0,   145,    11,   303,
     174,   303,    23,   947,   726,   949,   434,   311,    55,   311,
     438,   127,   126,   149,   442,   443,   444,    12,    42,   447,
     116,  1095,    43,  1257,    42,   162,   970,    51,   165,   184,
     297,   195,   121,    51,   890,   133,   303,   759,   674,   983,
     676,   985,   176,   987,   311,   989,   902,   991,   226,   831,
     674,   229,   676,   242,   674,   165,   676,   297,   914,   131,
     723,    74,   121,   303,   226,   228,   192,   229,   109,   303,
     303,   311,   500,   107,   624,   303,   828,   311,   311,   221,
     540,   540,   220,   311,  1453,   228,  1255,  1256,   162,   177,
     640,   297,   674,  1495,   676,   242,  1116,   303,   245,   246,
     247,   248,   126,   250,   251,   311,   253,   149,   644,   256,
     257,   258,   259,   260,   261,   262,    42,   564,   265,   718,
     564,   268,   269,   212,   213,   540,    42,     9,   275,   276,
     127,   278,    19,  1390,     9,   540,   237,   284,   297,   564,
     287,   288,    50,    51,   303,    34,   561,   206,    42,   564,
     163,   164,   311,   212,   213,    42,   561,  1244,  1245,   564,
     242,    43,    51,    35,   700,   701,   702,   703,    43,    19,
     165,    43,   561,   561,   298,   564,   564,   174,  1122,   172,
     304,    42,  1126,   307,  1271,   178,   665,   184,    50,    51,
     618,   273,    50,    51,  1011,   277,   374,   374,    42,    22,
     628,   629,   380,    49,    50,    51,  1023,    51,    35,  1153,
     388,   388,    35,  1069,   392,   393,  1072,  1073,  1397,   214,
     215,   216,  1041,    72,    73,    52,   654,    32,   153,  1011,
     408,   408,   868,    38,   870,   413,   413,    19,   416,   416,
    1096,  1023,   420,   420,   868,   153,   870,   221,   868,   912,
     870,   242,   430,   916,   790,   104,   230,   561,   249,   561,
     564,   381,   564,   441,   441,   385,   994,   995,   176,   389,
     187,  1083,   118,   540,   191,   395,    22,    50,    51,  1091,
    1092,   709,   126,   711,   712,   713,   868,   407,   870,    35,
     826,   411,   412,   471,   561,   831,    19,   564,   223,   224,
     540,   268,   242,  1120,   424,   425,   426,   232,  1125,   249,
     277,  1398,  1399,  1130,   176,    51,  1068,  1134,   176,  1498,
    1394,   561,    90,    91,   564,   503,   503,   561,   561,   181,
     564,   564,    12,   561,   540,    51,   564,   189,  1120,   124,
     125,  1285,  1159,  1125,    11,   895,    47,     9,  1130,    50,
      51,    35,  1134,    51,  1298,   561,    23,  1301,   564,    19,
      47,    35,    42,    50,    51,  1309,  1178,   487,    52,    36,
      50,    51,  1316,  1460,    72,    73,  1320,  1159,    52,   807,
     153,   540,    35,    35,   152,    19,    69,    70,    71,    35,
     263,    35,    69,    70,    71,    57,    58,    59,    35,    52,
      52,     9,   561,   176,   277,   564,    52,    35,    52,   282,
     283,  1267,  1268,  1500,    32,    52,   117,   845,   846,   847,
      38,  1044,  1058,     9,    52,    26,   854,  1050,    29,    30,
     117,    27,    33,   181,  1058,   139,   204,   205,  1058,    51,
     208,   189,   146,  1260,    35,   128,   624,   624,    44,    50,
      51,   128,    49,    50,    51,    35,    19,    35,   886,   227,
      19,    52,   640,   640,  1276,   127,   644,  1066,  1067,    19,
    1414,   591,    52,   291,    52,  1011,  1058,    90,  1260,   297,
      93,    94,    95,    96,   181,   303,   606,  1023,   192,   193,
     194,   174,   189,   311,    19,    35,   674,   174,   676,   182,
     183,   184,   185,   186,  1360,   182,   183,   184,   185,   186,
     193,   194,    52,   633,   634,    35,   193,   194,   119,   120,
      35,   118,   700,   701,   702,   703,    35,   277,   269,   242,
     280,   244,    52,  1350,  1351,   276,   277,    52,   251,   252,
     209,   210,   211,    52,   257,   723,   723,    19,   225,   269,
     728,   728,    19,   236,   732,   675,   233,   277,     9,   236,
     280,   281,   181,    69,    42,    71,  1383,   269,  1350,  1351,
     189,   184,  1384,    42,   276,   277,  1004,    19,  1390,  1391,
    1392,  1009,  1010,    42,  1120,  1402,  1014,    35,   708,  1125,
      63,  1408,    35,   236,  1130,    43,  1219,  1220,  1134,    35,
      43,  1383,  1354,  1420,   133,  1333,  1334,  1035,  1244,   268,
     269,    46,   790,    48,  1431,   241,   275,   276,   157,   278,
    1402,  1438,   128,  1159,    35,   158,  1408,   269,   166,   167,
     272,  1181,    43,  1183,   276,  1063,  1064,  1187,  1420,   269,
     270,   271,  1146,    57,    58,    59,   276,   277,   826,  1431,
      35,  1155,  1156,   831,  1204,  1467,  1438,    69,    43,    71,
    1164,   196,   269,   270,  1168,    35,  1170,  1171,   174,   276,
     277,   159,    46,    43,    48,    35,   182,   183,   184,   185,
     186,    35,  1494,    43,   214,   215,   216,   193,   194,    43,
     868,   170,   870,    69,    70,    71,  1508,  1509,  1510,  1511,
     269,  1429,  1088,   269,   270,   271,    35,    35,   277,   161,
     276,   277,    35,    35,    43,    43,   128,   895,   895,   225,
      43,    43,   842,   843,  1260,   169,    69,   233,    71,    35,
     236,   909,   910,   910,   912,   912,    35,    43,   916,   916,
      35,    56,  1365,  1366,    43,   107,   108,   909,    43,     3,
       4,     5,   128,   139,   140,   165,  1184,   167,   936,   190,
     191,   134,   174,   136,   137,   188,   139,   140,   285,   286,
     182,   183,   184,   185,   186,  1203,    50,    51,    36,    37,
     174,   193,   194,    90,   191,   128,    93,    94,    95,    96,
       3,     4,     5,     6,     7,     8,  1346,    42,   174,    42,
     172,   173,    42,   172,   173,    42,   182,   183,   184,   185,
     186,  1447,   122,   123,  1350,  1351,   237,   238,   193,   194,
      42,  1444,    31,  1447,   236,    51,   124,   125,   141,   142,
      51,   174,    43,  1011,    35,    88,    89,    88,    89,   182,
     183,   184,   185,   186,    43,  1023,    43,  1383,     9,   225,
     287,   288,   101,   102,   217,   218,    35,   233,   144,   145,
     236,   179,   180,   254,   255,    51,  1402,   144,   145,  1251,
    1252,    51,  1408,    13,    14,    15,    16,    17,    18,   160,
    1058,   153,   225,   138,  1420,   160,    26,   472,   473,   139,
     233,   479,   480,   236,   153,  1431,    16,    17,  1076,    39,
     481,   482,  1438,   490,   491,   702,   703,  1085,  1502,  1503,
      21,   153,   153,  1341,  1076,    42,    57,  1345,    53,  1347,
    1348,   127,   267,  1085,   107,    43,   108,    43,    43,    43,
      43,    43,    10,   226,    63,   153,   226,   226,   138,    92,
      24,  1119,  1120,  1371,    25,    87,    42,  1125,    39,   127,
     116,     9,  1130,    10,   135,   132,  1134,  1119,   133,   195,
     151,   155,     9,    42,    35,    42,    42,    42,    42,    99,
     110,   111,   112,   113,   114,   115,    43,    98,   135,   214,
      23,  1159,   127,    39,   232,   232,   174,   143,   127,   174,
      90,    91,   116,    35,   192,   127,   279,    97,   277,   269,
       9,   277,   254,  1181,  1181,  1183,  1183,    43,     9,  1187,
    1187,  1131,    10,    43,    43,  1135,   116,    43,   226,     9,
    1140,   143,   122,    58,  1144,  1145,  1204,  1204,    98,  1149,
      19,   171,    42,    21,  1154,    42,    39,   174,    35,    39,
    1160,   214,  1162,   214,    95,  1165,   251,   242,   279,  1169,
     264,    45,   152,    45,   156,  1175,    43,   146,  1486,   153,
    1488,   133,   135,   201,  1242,  1243,   153,    21,  1246,    12,
     214,   153,   242,  1251,  1252,   242,    43,  1255,  1256,  1257,
    1242,  1243,  1260,    35,  1246,  1513,    10,   153,   133,  1251,
    1252,    28,   133,  1255,  1256,  1257,    43,   197,   198,   199,
     200,   207,   202,   203,   204,   205,   242,    21,   208,   245,
     246,   247,   248,   945,   250,   207,     6,   253,   953,  1152,
     256,   257,   258,   259,   260,   261,   262,   227,  1142,   265,
     116,  1246,   292,   292,   298,   293,   298,   305,   307,   242,
    1247,   304,   245,   246,   247,   248,   195,   250,   284,   299,
     253,   287,   288,   256,   257,   258,   259,   260,   261,   262,
     307,   304,   265,   829,   310,   622,  1006,   195,  1346,  1346,
     625,  1035,  1350,  1351,   452,   854,  1012,  1297,   100,   218,
     627,   284,   455,   242,   287,   288,   245,   246,   247,   248,
     454,   250,   474,   709,   253,  1178,  1335,   256,   257,   258,
     259,   260,   261,   262,   431,  1383,   265,   141,   703,   831,
     386,   430,   386,   674,   868,   826,  1058,  1396,   676,   870,
     392,   869,  1221,  1054,  1402,   284,  1401,   617,   287,   288,
    1408,  1034,  1049,  1355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1431,     9,    -1,    11,    -1,    -1,    -1,
    1438,    -1,    -1,    -1,    -1,    20,    -1,  1387,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      -1,    36,    37,    38,    -1,    40,    41,    42,    43,  1409,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1421,    57,    58,    59,    60,    61,    62,    63,    64,
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
      -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
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
     262,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,   256,   257,   258,   259,   260,   261,   262,   242,    -1,
     265,   245,   246,   247,   248,    -1,   250,    -1,    -1,   253,
      -1,    -1,   256,   257,   258,   259,   260,   261,   262,   284,
      -1,   265,   287,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     284,    -1,   253,   287,   288,   256,   257,   258,   259,   260,
     261,   262,   242,    -1,   265,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
     260,   261,   262,   284,    -1,   265,   287,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   284,    -1,   253,   287,   288,   256,
     257,   258,   259,   260,   261,   262,   242,    -1,   265,   245,
     246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,    -1,
     256,   257,   258,   259,   260,   261,   262,   284,    -1,   265,
     287,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   284,    -1,
     253,   287,   288,   256,   257,   258,   259,   260,   261,   262,
     242,    -1,   265,   245,   246,   247,   248,    -1,   250,    -1,
      -1,   253,    -1,    -1,   256,   257,   258,   259,   260,   261,
     262,   284,    -1,   265,   287,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   284,    -1,   253,   287,   288,   256,   257,   258,
     259,   260,   261,   262,   242,    -1,   265,   245,   246,   247,
     248,    -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,
     258,   259,   260,   261,   262,   284,    -1,   265,   287,   288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   284,    -1,   253,   287,
     288,   256,   257,   258,   259,   260,   261,   262,   242,    -1,
     265,   245,   246,   247,   248,    -1,   250,    -1,    -1,   253,
      -1,    -1,   256,   257,   258,   259,   260,   261,   262,   284,
      -1,   265,   287,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     284,    -1,   253,   287,   288,   256,   257,   258,   259,   260,
     261,   262,   242,    -1,   265,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
     260,   261,   262,   284,    -1,   265,   287,   288,    -1,    -1,
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
     404,   405,   406,   407,   408,   409,   410,   415,   425,   428,
     432,   433,   434,   435,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   470,   471,   472,   473,   475,
     476,   477,   478,   479,   481,   482,   483,   494,   496,   498,
     499,   500,   503,   504,   505,   506,   516,   517,   518,   519,
     520,   521,   522,   524,   526,   528,   563,   564,   565,   566,
     567,   568,   569,   572,   573,   574,   575,   577,   581,   582,
     585,   586,   587,   588,   592,   593,   187,   191,   355,   356,
     357,   358,   371,   374,   362,   363,   364,   365,   371,   374,
     366,   367,   368,   369,   371,   374,   370,   371,   372,   373,
     374,   375,   243,   284,   291,   292,   307,     0,    60,    61,
      62,    63,    64,    65,    66,    67,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   105,   122,
     123,   134,   136,   147,   148,   150,   154,   168,   174,   192,
     194,   219,   222,   229,   231,   239,   240,   474,   592,   593,
      60,    61,    64,    67,   192,   465,   124,   125,   484,   131,
     109,   495,   456,   107,   486,   447,   447,    43,   405,    19,
      42,    51,   126,   501,    42,    51,    42,    42,    42,    51,
     126,   507,    42,    42,    42,    51,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    51,     9,   570,
     571,    51,    51,     9,   411,   412,     9,   195,   416,   417,
       9,   426,   427,   426,    42,    42,    51,    72,    73,    19,
      42,   501,    42,   399,    63,   106,    63,   228,    63,    63,
     228,   236,   241,    35,   133,   134,   136,   137,   139,   140,
     410,   415,   418,   419,   157,   158,    13,    14,    15,    16,
      17,    18,    26,    39,   110,   111,   112,   113,   114,   115,
     171,   196,    36,    37,   162,    11,    74,   163,   164,    12,
     165,   166,   167,   159,   170,   161,   169,    51,   452,   456,
      32,    38,   469,   465,   469,   465,    56,   469,   406,   406,
      42,    55,   188,   174,   181,   189,   359,   360,   377,   379,
     380,   381,   382,   384,   385,   386,   389,   390,   391,   394,
     395,   397,   404,   578,   356,   357,   358,   181,   359,   360,
     377,   379,   381,   382,   383,   395,   404,   578,   363,   364,
     365,   181,   376,   377,   379,   380,   381,   382,   384,   385,
     386,   389,   390,   395,   397,   398,   404,   562,   578,   367,
     368,   369,   372,   373,   375,   181,   376,   377,   379,   381,
     382,   383,   395,   398,   404,   578,   293,   308,   485,   107,
     108,   497,    31,   592,    43,    11,    43,   523,   530,   577,
     405,    51,   502,    43,   405,    43,    66,   192,   526,   528,
      43,    43,   127,   576,   592,   405,    51,   508,   525,   530,
     529,   531,   577,    43,   405,   405,   474,    35,   220,   405,
     405,   474,    35,   474,     9,    35,   474,    35,   149,   149,
     405,   405,   405,    51,    51,    11,    43,   527,   531,   502,
       9,    43,   401,   402,   153,   511,   406,   160,   406,   592,
     406,   406,   406,   406,   138,   139,   419,   434,   435,   437,
     437,   437,   437,   437,   437,   436,   437,   437,   437,   437,
     437,   437,   437,   437,    42,    51,    54,   471,   473,   476,
     479,   534,   536,   537,   538,   539,   540,   541,   593,   440,
     440,   439,   441,   441,   441,   441,   442,   442,   443,   443,
     160,   153,   153,   153,    52,   405,   457,   457,    21,    42,
     153,   223,   224,   232,    43,   406,   480,    57,   127,   576,
      69,    71,   128,   174,   182,   183,   184,   185,   186,   193,
     194,   236,   361,   190,   191,    53,   378,   378,   378,   378,
     378,   378,   378,   378,   181,   189,    70,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   181,   225,   233,   400,
     378,   378,   378,   378,   378,   378,   378,   378,   181,   181,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   267,
     294,   285,   286,   310,   107,   486,   108,   107,   132,   453,
      35,    43,    52,    52,   405,    52,    43,    43,    43,    43,
      52,    52,   405,    43,    43,    52,    52,    10,   571,   406,
      52,    52,   511,   412,   511,   474,   417,   511,   427,   406,
     406,    43,    43,    52,   405,   405,    35,    43,   474,    35,
      43,    42,    68,   175,   194,   512,   514,   515,   516,   577,
     589,   591,    50,    51,   403,   226,    63,   153,   226,   226,
     406,   420,   421,   422,   138,   437,   534,   405,   540,   209,
     210,   211,   557,   557,   557,   557,    92,   561,    24,   535,
      25,    87,   512,   512,   509,   515,   509,    52,   405,    43,
     480,   221,   230,   406,   406,   406,    35,    43,   177,   378,
      39,   172,   173,   127,   533,     9,   576,   172,   173,   122,
     123,   139,   146,   192,   361,   172,   178,   387,   592,   237,
     238,   593,   174,   184,   393,   533,   174,   533,    90,    91,
     152,   204,   205,   208,   227,   543,   544,   545,   546,   547,
     550,   555,   556,    72,    73,   104,   361,   242,   244,   251,
     252,   257,   295,   296,   298,   299,   303,   304,   305,   306,
     309,   242,   245,   246,   247,   248,   250,   253,   256,   257,
     258,   259,   260,   261,   262,   265,   287,   288,   307,   311,
     312,   313,   314,   315,   316,   318,   319,   323,   324,   325,
     329,   330,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   124,   125,    27,    44,   132,   532,
     577,    52,    52,   406,   133,   116,   413,   195,   414,    10,
     135,   151,   429,   431,   155,    52,    52,   532,   511,   402,
     514,    42,    42,    42,    11,    23,    36,   513,   405,   405,
     406,   406,   406,    42,    42,    35,   141,   142,   423,   420,
      43,    52,    99,   214,    98,   537,    97,   116,   122,   197,
     198,   199,   200,   202,   203,   542,   543,   538,   135,    23,
     510,    22,    43,   232,   232,   406,   127,   533,   474,    39,
     143,   533,   174,   174,    35,   127,    20,    32,    38,    60,
      75,   234,   235,   345,   346,   347,   348,   349,   350,   352,
     465,   592,   399,   576,   192,   533,   116,   392,   576,   392,
      88,    89,    90,    93,    94,    95,    96,    88,    89,   575,
      90,    93,    94,    95,    96,   184,   593,   268,   269,   275,
     276,   278,   300,   269,   272,   276,   300,   269,   270,   271,
     276,   277,   310,   269,   276,   277,   310,   117,   403,   314,
     277,   254,   326,   327,   279,   277,   280,   310,   268,   277,
     317,   269,   320,   263,   277,   282,   283,   331,   269,   276,
     277,   310,   277,   310,   269,   277,   310,   310,   269,   277,
     280,   281,   310,   242,   273,   277,   486,   486,   493,    43,
     406,     9,   414,     9,    10,   406,   406,     9,   512,   184,
     430,   431,   406,    23,    43,    43,    43,    43,    43,   512,
     590,    52,    52,   226,     9,   583,   584,   583,   421,   143,
     424,   557,   441,    98,   101,   102,   573,   441,   121,   212,
     213,   558,   558,   217,   218,   560,   560,   539,   406,   406,
     378,   378,   511,   533,   144,   145,   533,   533,   179,   180,
     388,   465,    19,    19,    42,    42,    12,    42,   403,   580,
     348,    32,    38,   351,   469,    32,    38,   237,   403,   580,
     153,   176,   403,    39,   174,   392,   533,    35,    39,   214,
      42,   116,   184,   549,   214,    95,   399,   345,   512,    57,
      58,    59,   297,   251,   301,   302,   310,   512,   310,   512,
     405,   242,   512,   405,   242,   242,   405,   279,   255,   327,
     328,   405,   405,   309,   242,   405,   242,   249,   321,   322,
     242,   321,   310,   405,   309,   309,   264,   332,   512,   405,
     242,   405,   242,   309,   405,   242,   242,   309,   405,   309,
     309,   242,   405,    45,    45,    33,   119,   120,   403,   482,
     474,   135,   474,   406,   474,   133,     9,   133,   156,    43,
     153,    35,    43,   406,   474,    35,    43,    43,   144,   145,
     146,   214,   215,   216,   559,   103,   145,   441,   441,   559,
     201,    10,   176,   396,   465,   465,   353,   473,   575,   575,
     346,    43,   401,   153,   579,   349,   349,    21,   348,   348,
     345,   579,   512,   533,   533,   184,   549,   575,    42,   116,
     552,   214,   153,   176,   403,   269,   270,   271,   276,   277,
     310,   242,   242,   242,   405,   310,   242,   310,   269,   270,
     276,   277,   310,   242,   310,   242,   310,   486,   486,   484,
     406,   153,   406,   474,   406,   406,   512,   512,   153,   511,
     584,   533,   441,   441,   162,   406,    43,    35,    43,   512,
     403,   405,   403,   580,   403,   176,   403,   392,   548,   548,
     206,   558,   553,   575,   575,   551,   551,   512,   512,   405,
     242,   310,   242,   242,   512,   405,   242,   242,    46,    48,
     487,    46,    48,   488,   486,   512,   133,   512,    10,   441,
     354,   471,   473,    22,   579,    35,    43,    43,   575,   207,
      35,    43,   165,   167,   554,   176,   403,   242,   489,   491,
     490,   492,    28,   133,   406,   406,    43,   403,   549,   558,
     575,   552,   552,    47,   117,   403,    49,   118,   403,    47,
     117,   403,    49,   118,   403,   406,   207
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
#line 725 "../src/parser/XQParser.y"
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
#line 754 "../src/parser/XQParser.y"
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
#line 774 "../src/parser/XQParser.y"
    {
  }
    break;

  case 12:
#line 781 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 18:
#line 797 "../src/parser/XQParser.y"
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
#line 810 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 20:
#line 814 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 21:
#line 819 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 22:
#line 826 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 23:
#line 831 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD mode - jpcs
  }
    break;

  case 24:
#line 836 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:
#line 846 "../src/parser/XQParser.y"
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
#line 859 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 30:
#line 863 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 31:
#line 870 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 32:
#line 875 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 33:
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 34:
#line 887 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 35:
#line 895 "../src/parser/XQParser.y"
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
#line 922 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 37:
#line 926 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 38:
#line 933 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 39:
#line 939 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 40:
#line 944 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 41:
#line 949 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 42:
#line 958 "../src/parser/XQParser.y"
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
#line 982 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 44:
#line 986 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 45:
#line 993 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 46:
#line 998 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 47:
#line 1003 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 48:
#line 1008 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 49:
#line 1019 "../src/parser/XQParser.y"
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
#line 1037 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 51:
#line 1041 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:
#line 1048 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:
#line 1053 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:
#line 1061 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 55:
#line 1071 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 56:
#line 1075 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 57:
#line 1082 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 58:
#line 1091 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 59:
#line 1095 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 60:
#line 1100 "../src/parser/XQParser.y"
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
#line 1113 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 62:
#line 1117 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 63:
#line 1122 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 64:
#line 1127 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 65:
#line 1132 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 66:
#line 1137 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 67:
#line 1142 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 68:
#line 1147 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 69:
#line 1152 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 70:
#line 1157 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 71:
#line 1162 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 72:
#line 1167 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 73:
#line 1172 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 74:
#line 1177 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 75:
#line 1182 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 76:
#line 1187 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 77:
#line 1192 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 78:
#line 1200 "../src/parser/XQParser.y"
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

  case 79:
#line 1218 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 80:
#line 1222 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 81:
#line 1227 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 82:
#line 1236 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 85:
#line 1245 "../src/parser/XQParser.y"
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

  case 86:
#line 1265 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, MEMMGR));
  }
    break;

  case 87:
#line 1269 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 88:
#line 1274 "../src/parser/XQParser.y"
    {
    // TBD mode - jpcs
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 89:
#line 1282 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 90:
#line 1286 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 91:
#line 1294 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 92:
#line 1307 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(0, 0, MEMMGR));
  }
    break;

  case 93:
#line 1311 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 94:
#line 1321 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 95:
#line 1325 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 96:
#line 1333 "../src/parser/XQParser.y"
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

  case 97:
#line 1351 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 98:
#line 1355 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 99:
#line 1362 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 100:
#line 1367 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 101:
#line 1372 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 102:
#line 1380 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (4)]), (yyvsp[(3) - (4)].astNode));
  }
    break;

  case 103:
#line 1388 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), empty, MEMMGR));
  }
    break;

  case 104:
#line 1396 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 105:
#line 1410 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 106:
#line 1414 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 107:
#line 1428 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), 0, MEMMGR));
  }
    break;

  case 108:
#line 1435 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 109:
#line 1439 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 110:
#line 1446 "../src/parser/XQParser.y"
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

  case 111:
#line 1481 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 112:
#line 1485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 113:
#line 1490 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 114:
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 115:
#line 1505 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 116:
#line 1509 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 117:
#line 1516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 118:
#line 1520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 119:
#line 1527 "../src/parser/XQParser.y"
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

  case 120:
#line 1545 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple()), 0, 0, MEMMGR));
  }
    break;

  case 121:
#line 1549 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 122:
#line 1556 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 123:
#line 1561 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 124:
#line 1569 "../src/parser/XQParser.y"
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

  case 125:
#line 1587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 126:
#line 1591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 127:
#line 1599 "../src/parser/XQParser.y"
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

  case 128:
#line 1621 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 129:
#line 1625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 130:
#line 1632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 131:
#line 1640 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 132:
#line 1649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 133:
#line 1657 "../src/parser/XQParser.y"
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

  case 134:
#line 1689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 135:
#line 1693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 136:
#line 1700 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 137:
#line 1707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 138:
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 139:
#line 1725 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 140:
#line 1737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 141:
#line 1741 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 142:
#line 1746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 143:
#line 1760 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 144:
#line 1765 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 145:
#line 1777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 146:
#line 1781 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 147:
#line 1789 "../src/parser/XQParser.y"
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

  case 148:
#line 1808 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 149:
#line 1813 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 150:
#line 1818 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 151:
#line 1826 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 152:
#line 1834 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 153:
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 154:
#line 1860 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 155:
#line 1870 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 156:
#line 1884 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 157:
#line 1892 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 158:
#line 1898 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 159:
#line 1904 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 160:
#line 1910 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 161:
#line 1921 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 162:
#line 1925 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 163:
#line 1936 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 164:
#line 1941 "../src/parser/XQParser.y"
    {
    // TBD id() and key() - jpcs
    (yyval.astNode) = 0;
  }
    break;

  case 176:
#line 1976 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 177:
#line 1980 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 178:
#line 1984 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 179:
#line 1988 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 180:
#line 1992 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 181:
#line 1996 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 182:
#line 2002 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 183:
#line 2008 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 191:
#line 2034 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 192:
#line 2038 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 193:
#line 2042 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 194:
#line 2046 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 204:
#line 2075 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 205:
#line 2079 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 206:
#line 2083 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 207:
#line 2087 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 208:
#line 2091 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 209:
#line 2095 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 210:
#line 2101 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 211:
#line 2107 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 212:
#line 2111 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 220:
#line 2138 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 221:
#line 2142 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 222:
#line 2146 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 223:
#line 2150 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 224:
#line 2154 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 225:
#line 2158 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 226:
#line 2164 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 227:
#line 2170 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 232:
#line 2189 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 233:
#line 2194 "../src/parser/XQParser.y"
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

  case 236:
#line 2223 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 238:
#line 2237 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 239:
#line 2241 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 240:
#line 2245 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 241:
#line 2249 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 242:
#line 2253 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 243:
#line 2257 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 244:
#line 2263 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 245:
#line 2269 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:
#line 2273 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 258:
#line 2305 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 259:
#line 2313 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 260:
#line 2318 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 261:
#line 2327 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 262:
#line 2332 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 263:
#line 2341 "../src/parser/XQParser.y"
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

  case 264:
#line 2390 "../src/parser/XQParser.y"
    {
  }
    break;

  case 265:
#line 2397 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 266:
#line 2402 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 267:
#line 2411 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 268:
#line 2416 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 269:
#line 2425 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 270:
#line 2435 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 271:
#line 2439 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 272:
#line 2447 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 273:
#line 2451 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 274:
#line 2459 "../src/parser/XQParser.y"
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

  case 275:
#line 2475 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 276:
#line 2484 "../src/parser/XQParser.y"
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

  case 277:
#line 2496 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 278:
#line 2504 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 279:
#line 2508 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 280:
#line 2513 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 281:
#line 2522 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 282:
#line 2526 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 283:
#line 2534 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 284:
#line 2544 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 285:
#line 2556 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 286:
#line 2563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 287:
#line 2567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 288:
#line 2575 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 289:
#line 2580 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 290:
#line 2590 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 291:
#line 2594 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 292:
#line 2598 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 293:
#line 2602 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 294:
#line 2609 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 295:
#line 2613 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 296:
#line 2619 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 297:
#line 2623 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 298:
#line 2631 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 299:
#line 2636 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 300:
#line 2646 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 301:
#line 2654 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 302:
#line 2658 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 303:
#line 2666 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 304:
#line 2679 "../src/parser/XQParser.y"
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

  case 318:
#line 2717 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple()));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 319:
#line 2728 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 320:
#line 2732 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 321:
#line 2736 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 323:
#line 2744 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 324:
#line 2750 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 327:
#line 2763 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 328:
#line 2770 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 330:
#line 2778 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 331:
#line 2789 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 332:
#line 2793 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 333:
#line 2803 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 334:
#line 2807 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 335:
#line 2817 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 336:
#line 2824 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 338:
#line 2832 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 339:
#line 2836 "../src/parser/XQParser.y"
    {
  }
    break;

  case 340:
#line 2843 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 341:
#line 2851 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 342:
#line 2856 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 343:
#line 2864 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 345:
#line 2874 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 346:
#line 2881 "../src/parser/XQParser.y"
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

  case 347:
#line 2896 "../src/parser/XQParser.y"
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

  case 348:
#line 2912 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 349:
#line 2916 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 350:
#line 2920 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 351:
#line 2927 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 352:
#line 2936 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 353:
#line 2940 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 354:
#line 2949 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 355:
#line 2957 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 356:
#line 2968 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 358:
#line 2976 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 359:
#line 2987 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 360:
#line 2994 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 361:
#line 2999 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 362:
#line 3007 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 363:
#line 3011 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 364:
#line 3019 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 365:
#line 3023 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 366:
#line 3031 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 367:
#line 3039 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 369:
#line 3053 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 371:
#line 3072 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 372:
#line 3076 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 373:
#line 3079 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 374:
#line 3080 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 375:
#line 3084 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 376:
#line 3088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 377:
#line 3092 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 378:
#line 3096 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 379:
#line 3100 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 380:
#line 3104 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 381:
#line 3108 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 382:
#line 3112 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 383:
#line 3116 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 384:
#line 3120 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 385:
#line 3124 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 386:
#line 3128 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 388:
#line 3137 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 389:
#line 3141 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 391:
#line 3150 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 393:
#line 3159 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 394:
#line 3163 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 396:
#line 3172 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 397:
#line 3176 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 398:
#line 3180 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 399:
#line 3184 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 401:
#line 3193 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 402:
#line 3197 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 404:
#line 3206 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 405:
#line 3210 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 407:
#line 3219 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 409:
#line 3228 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 411:
#line 3238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 413:
#line 3247 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 415:
#line 3256 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 416:
#line 3262 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 421:
#line 3283 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 422:
#line 3287 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 423:
#line 3291 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 424:
#line 3299 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 425:
#line 3306 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 428:
#line 3319 "../src/parser/XQParser.y"
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

  case 430:
#line 3340 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 432:
#line 3349 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 433:
#line 3355 "../src/parser/XQParser.y"
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

  case 435:
#line 3380 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 436:
#line 3394 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 437:
#line 3400 "../src/parser/XQParser.y"
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

  case 441:
#line 3421 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 442:
#line 3425 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 443:
#line 3434 "../src/parser/XQParser.y"
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

  case 445:
#line 3457 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 446:
#line 3461 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 447:
#line 3465 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 448:
#line 3469 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 449:
#line 3473 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 450:
#line 3477 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 451:
#line 3481 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 452:
#line 3485 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 453:
#line 3493 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 454:
#line 3501 "../src/parser/XQParser.y"
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

  case 455:
#line 3518 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 457:
#line 3535 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 458:
#line 3539 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 459:
#line 3543 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 460:
#line 3547 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 461:
#line 3551 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 462:
#line 3559 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 463:
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 465:
#line 3581 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 467:
#line 3593 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 468:
#line 3600 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 469:
#line 3607 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 470:
#line 3618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 471:
#line 3627 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 472:
#line 3631 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 488:
#line 3662 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 490:
#line 3673 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 491:
#line 3677 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 492:
#line 3685 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 493:
#line 3693 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 494:
#line 3703 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 495:
#line 3713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 496:
#line 3717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 497:
#line 3724 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 498:
#line 3729 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 499:
#line 3738 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 500:
#line 3742 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 504:
#line 3755 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 505:
#line 3761 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 508:
#line 3774 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 509:
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 510:
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 513:
#line 3803 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 514:
#line 3807 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 515:
#line 3814 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 516:
#line 3818 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 517:
#line 3828 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 518:
#line 3832 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 519:
#line 3837 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 520:
#line 3850 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 521:
#line 3854 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 522:
#line 3858 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 523:
#line 3874 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 524:
#line 3878 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 525:
#line 3883 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 526:
#line 3896 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 527:
#line 3900 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 528:
#line 3904 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 529:
#line 3924 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 530:
#line 3928 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 531:
#line 3933 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 532:
#line 3938 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 533:
#line 3948 "../src/parser/XQParser.y"
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

  case 534:
#line 3964 "../src/parser/XQParser.y"
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

  case 535:
#line 3978 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 537:
#line 3987 "../src/parser/XQParser.y"
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

  case 539:
#line 4009 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 546:
#line 4032 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 547:
#line 4040 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 548:
#line 4048 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 549:
#line 4052 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 550:
#line 4060 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 551:
#line 4064 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 552:
#line 4073 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 553:
#line 4081 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 554:
#line 4089 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 555:
#line 4097 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 556:
#line 4104 "../src/parser/XQParser.y"
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

  case 557:
#line 4117 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 558:
#line 4124 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 559:
#line 4128 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 560:
#line 4136 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 561:
#line 4146 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 562:
#line 4150 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 563:
#line 4158 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 564:
#line 4162 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 565:
#line 4172 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 566:
#line 4179 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 567:
#line 4188 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 568:
#line 4190 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 569:
#line 4192 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 570:
#line 4194 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 571:
#line 4200 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 572:
#line 4204 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 586:
#line 4239 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 587:
#line 4247 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 588:
#line 4251 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 589:
#line 4256 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 590:
#line 4265 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 591:
#line 4273 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 592:
#line 4281 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 593:
#line 4285 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 594:
#line 4289 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 595:
#line 4297 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 596:
#line 4301 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 597:
#line 4305 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 599:
#line 4314 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 600:
#line 4322 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 602:
#line 4335 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 603:
#line 4339 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 604:
#line 4343 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 605:
#line 4347 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 607:
#line 4357 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 608:
#line 4365 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 613:
#line 4385 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 614:
#line 4397 "../src/parser/XQParser.y"
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

  case 615:
#line 4409 "../src/parser/XQParser.y"
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

  case 616:
#line 4424 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 617:
#line 4428 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 618:
#line 4432 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 619:
#line 4442 "../src/parser/XQParser.y"
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

  case 621:
#line 4458 "../src/parser/XQParser.y"
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

  case 623:
#line 4474 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 625:
#line 4483 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 627:
#line 4492 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 629:
#line 4501 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 630:
#line 4505 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 631:
#line 4509 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 632:
#line 4513 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 633:
#line 4517 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 634:
#line 4531 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 635:
#line 4535 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 636:
#line 4539 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 637:
#line 4543 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 638:
#line 4548 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 639:
#line 4552 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 640:
#line 4556 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 641:
#line 4560 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 642:
#line 4564 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 650:
#line 4592 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 651:
#line 4596 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 652:
#line 4600 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 653:
#line 4604 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 654:
#line 4615 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 655:
#line 4619 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 656:
#line 4623 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 657:
#line 4627 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 658:
#line 4635 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 659:
#line 4639 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 660:
#line 4649 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 661:
#line 4653 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 662:
#line 4657 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 663:
#line 4661 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 664:
#line 4665 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 665:
#line 4672 "../src/parser/XQParser.y"
    {
  }
    break;

  case 666:
#line 4675 "../src/parser/XQParser.y"
    {
  }
    break;

  case 667:
#line 4682 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 668:
#line 4686 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 669:
#line 4690 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 670:
#line 4694 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 671:
#line 4704 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 672:
#line 4708 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 673:
#line 4712 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 674:
#line 4719 "../src/parser/XQParser.y"
    {
  }
    break;

  case 675:
#line 4722 "../src/parser/XQParser.y"
    {
  }
    break;

  case 676:
#line 4730 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 677:
#line 4734 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 678:
#line 4741 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 679:
#line 4745 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 680:
#line 4753 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 681:
#line 4757 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 682:
#line 4765 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 683:
#line 4773 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 684:
#line 4777 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 685:
#line 4785 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 686:
#line 4789 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 687:
#line 4793 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 688:
#line 4797 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 689:
#line 4801 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 690:
#line 4805 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 691:
#line 4816 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 692:
#line 4822 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 693:
#line 4828 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 694:
#line 4834 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 695:
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 696:
#line 4848 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 697:
#line 4852 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 698:
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 699:
#line 4864 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 700:
#line 4872 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 701:
#line 4880 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 702:
#line 4885 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 703:
#line 4890 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 704:
#line 4902 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 705:
#line 4906 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 706:
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 707:
#line 4914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 708:
#line 4918 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 711:
#line 4929 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 714:
#line 4940 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 715:
#line 4944 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 716:
#line 4954 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 717:
#line 4962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 718:
#line 4969 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 719:
#line 4974 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 720:
#line 4982 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 721:
#line 4991 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 722:
#line 5004 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 723:
#line 5017 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 724:
#line 5031 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 725:
#line 5043 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 726:
#line 5052 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 727:
#line 5064 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 728:
#line 5068 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 729:
#line 5072 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].itemList), 0, (yyvsp[(7) - (7)].astNode), 0, MEMMGR));
  }
    break;

  case 730:
#line 5076 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (9)].str), (yyvsp[(6) - (9)].itemList), (yyvsp[(7) - (9)].argSpecs), (yyvsp[(9) - (9)].astNode), (yyvsp[(8) - (9)].sequenceType), MEMMGR));
  }
    break;

  case 731:
#line 5080 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(4) - (5)].itemList), 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 732:
#line 5084 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(4) - (7)].itemList), (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 733:
#line 5091 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 734:
#line 5095 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 735:
#line 5103 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 736:
#line 5107 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 737:
#line 5116 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 738:
#line 5120 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 739:
#line 5129 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, MEMMGR));
  }
    break;

  case 740:
#line 5133 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 741:
#line 5141 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 742:
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 743:
#line 5156 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 746:
#line 5173 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 747:
#line 5181 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 748:
#line 5190 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 749:
#line 5195 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (5)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].itemList), MEMMGR));
  }
    break;

  case 750:
#line 5204 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 751:
#line 5208 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 752:
#line 5212 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 753:
#line 5219 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 754:
#line 5224 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 755:
#line 5233 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 9993 "../src/parser/XQParser.cpp"
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


#line 5267 "../src/parser/XQParser.y"


}  // namespace XQParser


