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
     _XSLT_FOR_EACH_ = 522,
     _XSLT_OUTPUT_ = 523,
     _XSLT_VERSION_ = 524,
     _XSLT_MODE_ = 525,
     _XSLT_NAME_ = 526,
     _XSLT_DOCTYPE_PUBLIC_ = 527,
     _XSLT_DOCTYPE_SYSTEM_ = 528,
     _XSLT_ENCODING_ = 529,
     _XSLT_MEDIA_TYPE_ = 530,
     _XSLT_NORMALIZATION_FORM_ = 531,
     _XSLT_STANDALONE_ = 532,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 533,
     _XSLT_TUNNEL_ = 534,
     _XSLT_REQUIRED_ = 535,
     _XSLT_OVERRIDE_ = 536,
     _XSLT_COPY_NAMESPACES_ = 537,
     _XSLT_INHERIT_NAMESPACES_ = 538,
     _XSLT_BYTE_ORDER_MARK_ = 539,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 540,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 541,
     _XSLT_INDENT_ = 542,
     _XSLT_OMIT_XML_DECLARATION_ = 543,
     _XSLT_UNDECLARE_PREFIXES_ = 544,
     _XSLT_MATCH_ = 545,
     _XSLT_AS_ = 546,
     _XSLT_SELECT_ = 547,
     _XSLT_PRIORITY_ = 548,
     _XSLT_TEST_ = 549,
     _XSLT_SEPARATOR_ = 550,
     _XSLT_NAMESPACE_A_ = 551,
     _XSLT_REGEX_ = 552,
     _XSLT_FLAGS_ = 553,
     _XSLT_METHOD_ = 554,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 555,
     _XSLT_USE_CHARACTER_MAPS_ = 556,
     _XSLT_ELEMENT_NAME_ = 557,
     _XSLT_XMLNS_ATTR_ = 558,
     _XSLT_ATTR_NAME_ = 559,
     _XSLT_TEXT_NODE_ = 560,
     _XSLT_WS_TEXT_NODE_ = 561,
     _HASH_DEFAULT_ = 562,
     _HASH_ALL_ = 563,
     _HASH_CURRENT_ = 564,
     _XML_ = 565,
     _HTML_ = 566,
     _XHTML_ = 567
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
#define _XSLT_FOR_EACH_ 522
#define _XSLT_OUTPUT_ 523
#define _XSLT_VERSION_ 524
#define _XSLT_MODE_ 525
#define _XSLT_NAME_ 526
#define _XSLT_DOCTYPE_PUBLIC_ 527
#define _XSLT_DOCTYPE_SYSTEM_ 528
#define _XSLT_ENCODING_ 529
#define _XSLT_MEDIA_TYPE_ 530
#define _XSLT_NORMALIZATION_FORM_ 531
#define _XSLT_STANDALONE_ 532
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 533
#define _XSLT_TUNNEL_ 534
#define _XSLT_REQUIRED_ 535
#define _XSLT_OVERRIDE_ 536
#define _XSLT_COPY_NAMESPACES_ 537
#define _XSLT_INHERIT_NAMESPACES_ 538
#define _XSLT_BYTE_ORDER_MARK_ 539
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 540
#define _XSLT_INCLUDE_CONTENT_TYPE_ 541
#define _XSLT_INDENT_ 542
#define _XSLT_OMIT_XML_DECLARATION_ 543
#define _XSLT_UNDECLARE_PREFIXES_ 544
#define _XSLT_MATCH_ 545
#define _XSLT_AS_ 546
#define _XSLT_SELECT_ 547
#define _XSLT_PRIORITY_ 548
#define _XSLT_TEST_ 549
#define _XSLT_SEPARATOR_ 550
#define _XSLT_NAMESPACE_A_ 551
#define _XSLT_REGEX_ 552
#define _XSLT_FLAGS_ 553
#define _XSLT_METHOD_ 554
#define _XSLT_CDATA_SECTION_ELEMENTS_ 555
#define _XSLT_USE_CHARACTER_MAPS_ 556
#define _XSLT_ELEMENT_NAME_ 557
#define _XSLT_XMLNS_ATTR_ 558
#define _XSLT_ATTR_NAME_ 559
#define _XSLT_TEXT_NODE_ 560
#define _XSLT_WS_TEXT_NODE_ 561
#define _HASH_DEFAULT_ 562
#define _HASH_ALL_ 563
#define _HASH_CURRENT_ 564
#define _XML_ 565
#define _HTML_ 566
#define _XHTML_ 567




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
#include <xqilla/ast/XQMap.hpp>

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
#line 1055 "../src/parser/XQParser.cpp"

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
#define YYLAST   8358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  313
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  320
/* YYNRULES -- Number of rules.  */
#define YYNRULES  976
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1611

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   567

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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      28,    30,    31,    34,    37,    38,    41,    44,    47,    50,
      53,    58,    60,    64,    67,    71,    75,    79,    80,    83,
      86,    89,    91,    93,    95,   100,   102,   105,   109,   112,
     113,   116,   120,   122,   125,   129,   133,   136,   139,   143,
     145,   148,   152,   156,   159,   162,   166,   168,   171,   175,
     179,   182,   184,   187,   191,   194,   198,   201,   204,   207,
     210,   213,   216,   219,   222,   225,   228,   231,   235,   238,
     240,   242,   244,   246,   248,   250,   253,   258,   259,   263,
     266,   267,   270,   273,   274,   277,   280,   283,   285,   287,
     289,   291,   293,   295,   297,   299,   301,   303,   305,   307,
     309,   311,   313,   315,   319,   321,   325,   329,   333,   335,
     337,   341,   343,   347,   351,   353,   355,   357,   358,   361,
     365,   367,   370,   371,   374,   378,   380,   383,   387,   391,
     394,   399,   405,   410,   412,   415,   421,   422,   426,   431,
     433,   437,   441,   445,   446,   450,   451,   455,   460,   462,
     465,   469,   473,   477,   479,   483,   487,   489,   493,   497,
     501,   503,   507,   509,   513,   517,   521,   525,   528,   530,
     534,   537,   541,   543,   546,   549,   553,   555,   559,   563,
     565,   567,   569,   571,   573,   575,   580,   587,   589,   591,
     593,   595,   597,   600,   604,   608,   612,   616,   619,   621,
     625,   629,   632,   633,   638,   641,   644,   646,   648,   651,
     654,   655,   659,   663,   667,   671,   675,   679,   683,   687,
     689,   691,   693,   695,   697,   699,   701,   707,   715,   721,
     729,   731,   733,   736,   739,   741,   743,   746,   749,   750,
     754,   758,   762,   766,   770,   774,   778,   782,   786,   789,
     792,   794,   796,   799,   802,   803,   807,   811,   815,   819,
     823,   827,   831,   835,   838,   841,   843,   845,   850,   857,
     860,   863,   870,   871,   875,   879,   883,   887,   891,   895,
     899,   903,   907,   909,   911,   913,   915,   917,   919,   921,
     923,   925,   927,   929,   935,   939,   943,   949,   955,   960,
     964,   968,   972,   978,   984,   990,   992,   994,   996,   998,
    1003,  1007,  1013,  1018,  1019,  1022,  1026,  1030,  1034,  1042,
    1047,  1054,  1057,  1059,  1063,  1067,  1074,  1083,  1090,  1099,
    1102,  1106,  1107,  1109,  1113,  1115,  1119,  1123,  1127,  1129,
    1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1157,  1159,  1163,  1167,  1170,  1173,  1175,  1178,
    1181,  1183,  1185,  1188,  1192,  1194,  1202,  1203,  1207,  1208,
    1212,  1215,  1219,  1221,  1228,  1234,  1237,  1241,  1246,  1250,
    1252,  1256,  1262,  1264,  1265,  1267,  1269,  1270,  1273,  1276,
    1281,  1286,  1290,  1292,  1298,  1305,  1308,  1310,  1316,  1320,
    1325,  1333,  1342,  1346,  1348,  1352,  1354,  1358,  1362,  1363,
    1368,  1372,  1376,  1380,  1384,  1388,  1392,  1396,  1400,  1404,
    1408,  1412,  1416,  1418,  1422,  1427,  1429,  1433,  1435,  1439,
    1443,  1445,  1449,  1453,  1457,  1461,  1463,  1467,  1471,  1473,
    1477,  1481,  1483,  1488,  1490,  1495,  1497,  1502,  1504,  1509,
    1511,  1514,  1517,  1519,  1521,  1523,  1525,  1530,  1536,  1542,
    1546,  1551,  1553,  1556,  1561,  1563,  1566,  1568,  1571,  1574,
    1576,  1578,  1582,  1586,  1588,  1590,  1592,  1595,  1598,  1601,
    1603,  1606,  1609,  1612,  1615,  1618,  1621,  1624,  1627,  1630,
    1632,  1635,  1637,  1640,  1643,  1646,  1649,  1652,  1654,  1656,
    1658,  1660,  1662,  1664,  1666,  1668,  1671,  1672,  1677,  1679,
    1681,  1683,  1685,  1687,  1689,  1691,  1693,  1695,  1697,  1699,
    1701,  1703,  1705,  1707,  1710,  1712,  1716,  1719,  1721,  1726,
    1731,  1735,  1740,  1744,  1746,  1748,  1750,  1752,  1754,  1756,
    1762,  1773,  1775,  1777,  1778,  1786,  1794,  1795,  1797,  1801,
    1805,  1809,  1813,  1814,  1817,  1820,  1821,  1824,  1827,  1828,
    1831,  1834,  1835,  1838,  1841,  1842,  1845,  1848,  1851,  1854,
    1858,  1859,  1861,  1865,  1867,  1870,  1872,  1874,  1876,  1878,
    1880,  1882,  1887,  1891,  1893,  1897,  1900,  1904,  1908,  1913,
    1918,  1922,  1924,  1928,  1931,  1935,  1938,  1939,  1941,  1942,
    1945,  1948,  1952,  1953,  1955,  1957,  1959,  1961,  1965,  1967,
    1969,  1971,  1973,  1975,  1977,  1979,  1981,  1983,  1985,  1987,
    1989,  1991,  1995,  1999,  2004,  2009,  2013,  2017,  2021,  2026,
    2031,  2035,  2040,  2047,  2049,  2051,  2056,  2058,  2062,  2067,
    2074,  2082,  2084,  2086,  2091,  2093,  2095,  2097,  2099,  2101,
    2106,  2109,  2110,  2113,  2116,  2120,  2122,  2126,  2128,  2133,
    2135,  2138,  2140,  2144,  2146,  2149,  2152,  2155,  2158,  2163,
    2165,  2169,  2173,  2177,  2180,  2183,  2186,  2189,  2192,  2194,
    2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2213,  2216,
    2219,  2222,  2225,  2228,  2231,  2234,  2238,  2242,  2249,  2256,
    2259,  2260,  2264,  2267,  2272,  2277,  2284,  2290,  2294,  2300,
    2301,  2304,  2307,  2311,  2313,  2317,  2320,  2323,  2326,  2329,
    2332,  2333,  2335,  2338,  2340,  2343,  2345,  2348,  2352,  2356,
    2361,  2363,  2365,  2367,  2369,  2371,  2375,  2379,  2383,  2387,
    2394,  2401,  2406,  2411,  2416,  2419,  2422,  2425,  2428,  2431,
    2439,  2445,  2451,  2458,  2462,  2464,  2469,  2471,  2473,  2475,
    2477,  2479,  2481,  2487,  2495,  2504,  2515,  2522,  2531,  2532,
    2535,  2538,  2542,  2543,  2546,  2548,  2552,  2554,  2556,  2558,
    2562,  2570,  2574,  2582,  2588,  2598,  2600,  2602,  2604,  2606,
    2610,  2616,  2618,  2620,  2624,  2629,  2633,  2638,  2642,  2648,
    2655,  2657,  2661,  2665,  2667,  2669,  2671,  2673,  2675,  2677,
    2679,  2681,  2683,  2685,  2687,  2689,  2691,  2693,  2695,  2697,
    2699,  2701,  2703,  2705,  2707,  2709,  2711,  2713,  2715,  2717,
    2719,  2721,  2723,  2725,  2727,  2729,  2731,  2733,  2735,  2737,
    2739,  2741,  2743,  2745,  2747,  2749,  2751,  2753,  2755,  2757,
    2759,  2761,  2763,  2765,  2767,  2769,  2771,  2773,  2775,  2777,
    2779,  2781,  2783,  2785,  2787,  2789,  2791,  2793,  2795,  2797,
    2799,  2801,  2803,  2805,  2807,  2809,  2811,  2813,  2815,  2817,
    2819,  2821,  2823,  2825,  2827,  2829,  2831,  2833,  2835,  2837,
    2839,  2841,  2843,  2845,  2847,  2849,  2851,  2853,  2855,  2857,
    2859,  2861,  2863,  2865,  2867,  2869,  2871,  2873,  2875,  2877,
    2879,  2881,  2883,  2885,  2887,  2889,  2891,  2893,  2895,  2897,
    2899,  2901,  2903,  2905,  2907,  2909,  2911,  2913,  2915,  2917,
    2919,  2921,  2923,  2925,  2927,  2929,  2931,  2933,  2935,  2937,
    2939,  2941,  2943,  2945,  2947,  2949,  2951,  2953,  2955,  2957,
    2959,  2961,  2963,  2965,  2967,  2969,  2971,  2973,  2975,  2977,
    2979,  2981,  2983,  2985,  2987,  2989,  2991
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     314,     0,    -1,     3,   439,    -1,     4,   390,    -1,     5,
     397,    -1,     6,   401,    -1,     7,   405,    -1,     8,   315,
      -1,   316,    -1,   243,   317,   318,   242,    -1,   336,    -1,
      -1,   317,   269,    -1,   317,   278,    -1,    -1,   318,   319,
      -1,   318,   323,    -1,   318,   328,    -1,   318,   330,    -1,
     318,   332,    -1,   320,   325,   339,   242,    -1,   244,    -1,
     320,   290,   380,    -1,   320,   271,    -1,   320,   293,   322,
      -1,   320,   270,   321,    -1,   320,   291,   547,    -1,    -1,
     321,   123,    -1,   321,   307,    -1,   321,   308,    -1,    56,
      -1,    57,    -1,    58,    -1,   324,   325,   339,   242,    -1,
     252,    -1,   324,   271,    -1,   324,   291,   547,    -1,   324,
     281,    -1,    -1,   325,   326,    -1,   327,   339,   242,    -1,
     251,    -1,   327,   271,    -1,   327,   292,   440,    -1,   327,
     291,   547,    -1,   327,   280,    -1,   327,   279,    -1,   329,
     339,   242,    -1,   251,    -1,   329,   271,    -1,   329,   292,
     440,    -1,   329,   291,   547,    -1,   329,   280,    -1,   329,
     279,    -1,   331,   339,   242,    -1,   257,    -1,   331,   271,
      -1,   331,   292,   440,    -1,   331,   291,   547,    -1,   333,
     242,    -1,   268,    -1,   333,   271,    -1,   333,   299,   334,
      -1,   333,   284,    -1,   333,   300,   335,    -1,   333,   272,
      -1,   333,   273,    -1,   333,   274,    -1,   333,   285,    -1,
     333,   286,    -1,   333,   287,    -1,   333,   275,    -1,   333,
     276,    -1,   333,   288,    -1,   333,   277,    -1,   333,   289,
      -1,   333,   301,   335,    -1,   333,   269,    -1,   310,    -1,
     311,    -1,   312,    -1,    66,    -1,   123,    -1,   123,    -1,
     335,   123,    -1,   302,   337,   339,   242,    -1,    -1,   337,
     304,   338,    -1,   337,   303,    -1,    -1,   338,   438,    -1,
     338,   116,    -1,    -1,   339,   344,    -1,   339,   336,    -1,
     339,   340,    -1,   341,    -1,   343,    -1,   345,    -1,   349,
      -1,   354,    -1,   356,    -1,   355,    -1,   364,    -1,   366,
      -1,   368,    -1,   370,    -1,   372,    -1,   360,    -1,   374,
      -1,   376,    -1,   378,    -1,   342,   339,   242,    -1,   245,
      -1,   342,   292,   440,    -1,   342,   295,   338,    -1,   246,
     344,   242,    -1,   305,    -1,   306,    -1,   346,   348,   242,
      -1,   247,    -1,   346,   292,   440,    -1,   346,   270,   347,
      -1,   123,    -1,   307,    -1,   309,    -1,    -1,   348,   352,
      -1,   350,   351,   242,    -1,   248,    -1,   350,   271,    -1,
      -1,   351,   352,    -1,   353,   339,   242,    -1,   249,    -1,
     353,   271,    -1,   353,   292,   440,    -1,   353,   291,   547,
      -1,   353,   279,    -1,   250,   292,   440,   242,    -1,   256,
     294,   440,   339,   242,    -1,   253,   357,   359,   242,    -1,
     358,    -1,   357,   358,    -1,   254,   294,   440,   339,   242,
      -1,    -1,   255,   339,   242,    -1,   361,   362,   363,   242,
      -1,   262,    -1,   361,   292,   440,    -1,   361,   297,   338,
      -1,   361,   298,   338,    -1,    -1,   263,   339,   242,    -1,
      -1,   264,   339,   242,    -1,   365,   339,   242,   339,    -1,
     257,    -1,   365,   271,    -1,   365,   292,   440,    -1,   365,
     291,   547,    -1,   367,   339,   242,    -1,   258,    -1,   367,
     292,   440,    -1,   369,   339,   242,    -1,   259,    -1,   369,
     271,   338,    -1,   369,   292,   440,    -1,   371,   339,   242,
      -1,   260,    -1,   373,   339,   242,    -1,   261,    -1,   373,
     271,   338,    -1,   373,   296,   338,    -1,   373,   292,   440,
      -1,   373,   295,   338,    -1,   375,   242,    -1,   265,    -1,
     375,   292,   440,    -1,   375,   282,    -1,   377,   339,   242,
      -1,   266,    -1,   377,   282,    -1,   377,   283,    -1,   379,
     339,   242,    -1,   267,    -1,   379,   292,   440,    -1,   380,
      12,   381,    -1,   381,    -1,   386,    -1,    38,    -1,   383,
      -1,    38,    -1,    32,    -1,   233,    42,   384,    43,    -1,
     234,    42,   610,    35,   385,    43,    -1,   610,    -1,   508,
      -1,   506,    -1,   508,    -1,   387,    -1,   382,   387,    -1,
     383,    38,   387,    -1,   383,    32,   387,    -1,   386,    38,
     387,    -1,   386,    32,   387,    -1,   388,   389,    -1,   500,
      -1,    74,    19,   500,    -1,    59,    19,   500,    -1,    20,
     500,    -1,    -1,   504,    21,   440,    22,    -1,   406,   391,
      -1,   406,   392,    -1,   391,    -1,   392,    -1,   393,   439,
      -1,   409,   393,    -1,    -1,   393,   394,   413,    -1,   393,
     412,   413,    -1,   393,   414,   413,    -1,   393,   416,   413,
      -1,   393,   430,   413,    -1,   393,   395,   413,    -1,   393,
     613,   413,    -1,   393,   417,   413,    -1,   415,    -1,   424,
      -1,   425,    -1,   432,    -1,   419,    -1,   420,    -1,   421,
      -1,   180,   396,   632,   434,   438,    -1,   180,   396,   632,
     434,   152,   547,   438,    -1,   180,   396,   632,   434,   175,
      -1,   180,   396,   632,   434,   152,   547,   175,    -1,   192,
      -1,   193,    -1,   406,   398,    -1,   406,   399,    -1,   398,
      -1,   399,    -1,   400,   439,    -1,   409,   400,    -1,    -1,
     400,   394,   413,    -1,   400,   412,   413,    -1,   400,   414,
     413,    -1,   400,   416,   413,    -1,   400,   430,   413,    -1,
     400,   395,   413,    -1,   400,   613,   413,    -1,   400,   417,
     413,    -1,   400,   418,   413,    -1,   406,   402,    -1,   406,
     403,    -1,   402,    -1,   403,    -1,   404,   439,    -1,   409,
     404,    -1,    -1,   404,   411,   413,    -1,   404,   412,   413,
      -1,   404,   414,   413,    -1,   404,   416,   413,    -1,   404,
     430,   413,    -1,   404,   433,   413,    -1,   404,   613,   413,
      -1,   404,   417,   413,    -1,   406,   407,    -1,   406,   408,
      -1,   407,    -1,   408,    -1,   186,   187,   126,   413,    -1,
     186,   187,   126,   176,   126,   413,    -1,   410,   439,    -1,
     409,   410,    -1,   190,   173,   611,    39,   568,   413,    -1,
      -1,   410,   411,   413,    -1,   410,   412,   413,    -1,   410,
     414,   413,    -1,   410,   416,   413,    -1,   410,   430,   413,
      -1,   410,   433,   413,    -1,   410,   613,   413,    -1,   410,
     417,   413,    -1,   410,   418,   413,    -1,   415,    -1,   424,
      -1,   425,    -1,   432,    -1,   419,    -1,   420,    -1,   597,
      -1,   421,    -1,   426,    -1,   429,    -1,    53,    -1,   180,
     173,   611,    39,   568,    -1,   180,    68,   171,    -1,   180,
      68,   172,    -1,   180,   183,   191,   173,   568,    -1,   180,
     183,   396,   173,   568,    -1,   180,   185,   631,   126,    -1,
     180,    69,   578,    -1,   180,   182,   121,    -1,   180,   182,
     122,    -1,   180,   183,   138,   142,   143,    -1,   180,   183,
     138,   142,   144,    -1,   180,   184,   422,    35,   423,    -1,
     171,    -1,   177,    -1,   178,    -1,   179,    -1,   180,   183,
     145,   568,    -1,   180,    70,   568,    -1,   188,   189,   428,
     568,   427,    -1,   188,   189,   568,   427,    -1,    -1,   115,
     568,    -1,   427,    35,   568,    -1,   173,   611,    39,    -1,
     183,   191,   173,    -1,   188,   190,   173,   611,    39,   568,
     427,    -1,   188,   190,   568,   427,    -1,   180,   127,     9,
     509,   546,   431,    -1,    10,   441,    -1,   175,    -1,   180,
     181,   171,    -1,   180,   181,   172,    -1,   180,   435,   396,
     632,   434,   438,    -1,   180,   435,   396,   632,   434,   152,
     547,   438,    -1,   180,   435,   396,   632,   434,   175,    -1,
     180,   435,   396,   632,   434,   152,   547,   175,    -1,    42,
      43,    -1,    42,   436,    43,    -1,    -1,   232,    -1,   436,
      35,   437,    -1,   437,    -1,     9,   509,   546,    -1,    50,
     440,    52,    -1,    51,   440,    52,    -1,   440,    -1,   440,
      35,   441,    -1,   441,    -1,   442,    -1,   460,    -1,   463,
      -1,   467,    -1,   598,    -1,   600,    -1,   603,    -1,   602,
      -1,   604,    -1,   468,    -1,   619,    -1,   620,    -1,   443,
     132,   441,    -1,   444,   453,   454,    -1,   444,   453,    -1,
     444,   454,    -1,   444,    -1,   444,   445,    -1,   444,   450,
      -1,   445,    -1,   450,    -1,   133,   446,    -1,   446,    35,
     447,    -1,   447,    -1,     9,   509,   546,   448,   449,   134,
     441,    -1,    -1,   115,     9,   509,    -1,    -1,   194,     9,
     509,    -1,   135,   451,    -1,   451,    35,   452,    -1,   452,
      -1,     9,   509,   546,   449,    10,   441,    -1,   194,     9,
     509,    10,   441,    -1,   136,   441,    -1,   138,   137,   455,
      -1,   139,   138,   137,   455,    -1,   455,    35,   456,    -1,
     456,    -1,   457,   458,   459,    -1,   457,   458,   459,   145,
     568,    -1,   441,    -1,    -1,   140,    -1,   141,    -1,    -1,
     142,   143,    -1,   142,   144,    -1,   146,   461,   148,   441,
      -1,   147,   461,   148,   441,    -1,   461,    35,   462,    -1,
     462,    -1,     9,   509,   546,   134,   441,    -1,   149,    42,
     440,    43,   464,   465,    -1,   464,   466,    -1,   466,    -1,
     183,     9,   509,   132,   441,    -1,   183,   132,   441,    -1,
     150,   547,   132,   441,    -1,   150,     9,   509,   152,   547,
     132,   441,    -1,   153,    42,   440,    43,   154,   441,   155,
     441,    -1,   468,   156,   469,    -1,   469,    -1,   469,   157,
     470,    -1,   470,    -1,   472,    39,   472,    -1,   472,    13,
     472,    -1,    -1,   472,    26,   471,   472,    -1,   472,    14,
     472,    -1,   472,    15,   472,    -1,   472,    16,   472,    -1,
     472,   109,   472,    -1,   472,   110,   472,    -1,   472,   111,
     472,    -1,   472,   112,   472,    -1,   472,   113,   472,    -1,
     472,   114,   472,    -1,   472,   170,   472,    -1,   472,    17,
     472,    -1,   472,    18,   472,    -1,   472,    -1,   473,   195,
     569,    -1,   473,   195,   569,   596,    -1,   473,    -1,   474,
     161,   474,    -1,   474,    -1,   474,    36,   475,    -1,   474,
      37,   475,    -1,   475,    -1,   475,    11,   476,    -1,   475,
     162,   476,    -1,   475,    73,   476,    -1,   475,   163,   476,
      -1,   476,    -1,   476,    12,   477,    -1,   476,   164,   477,
      -1,   477,    -1,   477,   165,   478,    -1,   477,   166,   478,
      -1,   478,    -1,   479,   158,   159,   547,    -1,   479,    -1,
     480,   169,   152,   547,    -1,   480,    -1,   481,   160,   152,
     544,    -1,   481,    -1,   482,   168,   152,   544,    -1,   482,
      -1,    37,   482,    -1,    36,   482,    -1,   483,    -1,   484,
      -1,   489,    -1,   485,    -1,   167,    51,   440,    52,    -1,
     167,    71,    51,   440,    52,    -1,   167,    72,    51,   440,
      52,    -1,   486,    51,    52,    -1,   486,    51,   440,    52,
      -1,   487,    -1,   486,   487,    -1,    34,   521,   631,   488,
      -1,   131,    -1,   106,   131,    -1,   490,    -1,   490,   491,
      -1,    32,   491,    -1,   491,    -1,    38,    -1,   491,    38,
     492,    -1,   491,    32,   492,    -1,   492,    -1,   493,    -1,
     503,    -1,   494,   504,    -1,   497,   504,    -1,   495,   500,
      -1,   496,    -1,    74,    19,    -1,    75,    19,    -1,    59,
      19,    -1,    76,    19,    -1,    77,    19,    -1,    78,    19,
      -1,    79,    19,    -1,   173,    19,    -1,    20,   500,    -1,
     500,    -1,   498,   500,    -1,   499,    -1,    80,    19,    -1,
      81,    19,    -1,    82,    19,    -1,    83,    19,    -1,    84,
      19,    -1,    41,    -1,   551,    -1,   501,    -1,   612,    -1,
     502,    -1,    11,    -1,   128,    -1,   129,    -1,   505,   504,
      -1,    -1,   504,    21,   440,    22,    -1,   506,    -1,   508,
      -1,   510,    -1,   511,    -1,   514,    -1,   516,    -1,   512,
      -1,   513,    -1,   624,    -1,   627,    -1,   507,    -1,   610,
      -1,   607,    -1,   608,    -1,   609,    -1,     9,   509,    -1,
     631,    -1,    42,   440,    43,    -1,    42,    43,    -1,    40,
      -1,   121,    51,   440,    52,    -1,   122,    51,   440,    52,
      -1,   632,    42,    43,    -1,   632,    42,   515,    43,    -1,
     515,    35,   441,    -1,   441,    -1,   517,    -1,   533,    -1,
     518,    -1,   529,    -1,   531,    -1,    26,   519,   520,   521,
      44,    -1,    26,   519,   520,   521,    27,   528,    33,   519,
     521,    28,    -1,   123,    -1,   124,    -1,    -1,   520,   106,
     123,   521,    45,   521,   522,    -1,   520,   106,   124,   521,
      45,   521,   523,    -1,    -1,   106,    -1,    46,   524,    47,
      -1,    48,   526,    49,    -1,    46,   525,    47,    -1,    48,
     527,    49,    -1,    -1,   524,   438,    -1,   524,   116,    -1,
      -1,   525,   438,    -1,   525,   116,    -1,    -1,   526,   438,
      -1,   526,   117,    -1,    -1,   527,   438,    -1,   527,   117,
      -1,    -1,   528,   517,    -1,   528,   438,    -1,   528,   119,
      -1,   528,   118,    -1,    30,   530,    31,    -1,    -1,   108,
      -1,    29,   130,   532,    -1,   107,    -1,   106,   107,    -1,
     534,    -1,   535,    -1,   538,    -1,   539,    -1,   540,    -1,
     541,    -1,    85,    51,   440,    52,    -1,   191,   536,   537,
      -1,   125,    -1,    51,   440,    52,    -1,    51,    52,    -1,
      51,   440,    52,    -1,    59,   536,   537,    -1,    66,    51,
     440,    52,    -1,    60,    51,   440,    52,    -1,    63,   542,
     543,    -1,   125,    -1,    51,   440,    52,    -1,    51,    52,
      -1,    51,   440,    52,    -1,   550,   545,    -1,    -1,    23,
      -1,    -1,   152,   547,    -1,   549,   548,    -1,    67,    42,
      43,    -1,    -1,    11,    -1,    36,    -1,    23,    -1,   550,
      -1,   174,    42,    43,    -1,   551,    -1,   628,    -1,   630,
      -1,   612,    -1,   553,    -1,   561,    -1,   557,    -1,   563,
      -1,   559,    -1,   556,    -1,   555,    -1,   554,    -1,   552,
      -1,    62,    42,    43,    -1,    61,    42,    43,    -1,    61,
      42,   561,    43,    -1,    61,    42,   563,    43,    -1,    66,
      42,    43,    -1,    60,    42,    43,    -1,    63,    42,    43,
      -1,    63,    42,   611,    43,    -1,    63,    42,   126,    43,
      -1,    59,    42,    43,    -1,    59,    42,   558,    43,    -1,
      59,    42,   558,    35,   567,    43,    -1,   565,    -1,    11,
      -1,    64,    42,   560,    43,    -1,   565,    -1,   191,    42,
      43,    -1,   191,    42,   562,    43,    -1,   191,    42,   562,
      35,   567,    43,    -1,   191,    42,   562,    35,   567,    23,
      43,    -1,   566,    -1,    11,    -1,    65,    42,   564,    43,
      -1,   566,    -1,   612,    -1,   612,    -1,   612,    -1,   126,
      -1,   571,   570,   196,   608,    -1,   571,   570,    -1,    -1,
     570,   578,    -1,   570,   577,    -1,   571,    24,   572,    -1,
     572,    -1,   572,    25,   573,    -1,   573,    -1,   573,    86,
     134,   574,    -1,   574,    -1,    54,   575,    -1,   575,    -1,
      42,   569,    43,    -1,   576,    -1,   506,   592,    -1,   508,
     592,    -1,   511,   592,    -1,   514,   592,    -1,    51,   440,
      52,   592,    -1,   121,    -1,   197,   476,   594,    -1,   198,
     593,   594,    -1,   199,   593,   200,    -1,   201,   595,    -1,
     202,   595,    -1,   115,   100,    -1,   115,   101,    -1,    96,
      97,    -1,   579,    -1,   580,    -1,   581,    -1,   582,    -1,
     585,    -1,   590,    -1,   591,    -1,   203,    -1,   204,    -1,
     151,    87,    -1,   151,    88,    -1,   226,    89,    -1,    90,
      89,    -1,    89,    87,    -1,    89,    88,    -1,   226,    92,
      -1,    90,    92,    -1,   226,    93,   584,    -1,   226,    93,
     183,    -1,   226,    93,    42,   584,   583,    43,    -1,   226,
      93,    42,   183,   583,    43,    -1,    90,    93,    -1,    -1,
     583,    35,   584,    -1,   115,   610,    -1,   115,   610,   205,
     610,    -1,   115,   610,   593,   206,    -1,   115,   610,   205,
     610,   593,   206,    -1,   226,    94,   213,   587,   586,    -1,
      90,    94,   213,    -1,   226,   183,    94,   213,   586,    -1,
      -1,   586,   589,    -1,   115,   610,    -1,    42,   588,    43,
      -1,   610,    -1,   588,    35,   610,    -1,   164,   587,    -1,
     166,   587,    -1,   207,   610,    -1,   226,    95,    -1,    90,
      95,    -1,    -1,   208,    -1,   208,    98,    -1,   209,    -1,
     209,   213,    -1,   210,    -1,   211,   476,    -1,   120,   144,
     476,    -1,   120,   102,   476,    -1,   212,   476,   161,   476,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,    91,    97,   476,    -1,   180,   224,    72,    -1,   180,
     224,    71,    -1,   180,   224,   103,    -1,   599,   441,   152,
     220,   231,   441,    -1,   599,   441,   152,   229,   231,   441,
      -1,   599,   441,   231,   441,    -1,   599,   441,   223,   441,
      -1,   599,   441,   222,   441,    -1,   221,    62,    -1,   221,
     227,    -1,   601,   441,    -1,   230,    62,    -1,   230,   227,
      -1,   218,   105,   159,    62,   441,   225,   441,    -1,   218,
      62,   441,   225,   441,    -1,   228,    62,   441,   152,   441,
      -1,   104,   605,   219,   441,   132,   441,    -1,   605,    35,
     606,    -1,   606,    -1,     9,   509,    10,   441,    -1,    56,
      -1,    57,    -1,    58,    -1,   126,    -1,   631,    -1,   631,
      -1,   180,   235,   237,   631,   438,    -1,   180,   235,   237,
     631,   615,   614,   438,    -1,   180,   235,   237,   631,   616,
     236,   380,   438,    -1,   180,   235,   237,   631,   616,   236,
     380,   615,   614,   438,    -1,   180,   235,   616,   236,   380,
     438,    -1,   180,   235,   616,   236,   380,   615,   614,   438,
      -1,    -1,   152,   547,    -1,    42,    43,    -1,    42,   436,
      43,    -1,    -1,   241,   617,    -1,   618,    -1,   617,    35,
     618,    -1,   123,    -1,   307,    -1,   308,    -1,   238,   235,
     631,    -1,   238,   235,   631,   225,    42,   622,    43,    -1,
     239,   240,   441,    -1,   239,   240,   441,   225,    42,   622,
      43,    -1,   239,   240,   441,   241,   621,    -1,   239,   240,
     441,   241,   621,   225,    42,   622,    43,    -1,   631,    -1,
     307,    -1,   309,    -1,   623,    -1,   622,    35,   623,    -1,
       9,   509,   546,    10,   441,    -1,   625,    -1,   626,    -1,
     632,    55,    56,    -1,   193,   434,   546,   438,    -1,   503,
      42,    43,    -1,   503,    42,   515,    43,    -1,   193,    42,
      43,    -1,   193,    42,    43,   152,   547,    -1,   193,    42,
     629,    43,   152,   547,    -1,   547,    -1,   629,    35,   547,
      -1,    42,   549,    43,    -1,   632,    -1,    59,    -1,    60,
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
       0,   741,   741,   743,   744,   745,   746,   748,   755,   782,
     785,   806,   808,   812,   819,   821,   822,   823,   824,   825,
     829,   848,   852,   857,   864,   869,   874,   883,   886,   892,
     897,   904,   904,   904,   907,   920,   924,   931,   936,   945,
     948,   956,   983,   987,   994,  1000,  1005,  1010,  1019,  1043,
    1047,  1054,  1059,  1064,  1069,  1080,  1098,  1102,  1109,  1114,
    1122,  1147,  1150,  1153,  1156,  1159,  1162,  1165,  1168,  1171,
    1174,  1177,  1180,  1183,  1186,  1189,  1192,  1195,  1198,  1204,
    1205,  1206,  1207,  1208,  1220,  1223,  1229,  1240,  1243,  1250,
    1260,  1263,  1268,  1282,  1285,  1290,  1295,  1303,  1304,  1305,
    1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,
    1316,  1317,  1318,  1322,  1340,  1344,  1349,  1358,  1364,  1364,
    1367,  1387,  1391,  1396,  1404,  1409,  1413,  1421,  1424,  1432,
    1445,  1449,  1460,  1463,  1471,  1489,  1493,  1500,  1505,  1510,
    1518,  1526,  1534,  1548,  1552,  1566,  1574,  1577,  1584,  1619,
    1623,  1628,  1634,  1644,  1647,  1655,  1658,  1665,  1683,  1687,
    1694,  1699,  1707,  1725,  1729,  1737,  1759,  1763,  1770,  1778,
    1787,  1795,  1832,  1836,  1843,  1850,  1859,  1868,  1880,  1884,
    1889,  1898,  1911,  1915,  1920,  1929,  1943,  1947,  1960,  1965,
    1977,  1981,  1989,  2002,  2010,  2023,  2030,  2044,  2044,  2047,
    2047,  2069,  2073,  2077,  2095,  2113,  2123,  2137,  2145,  2151,
    2157,  2163,  2175,  2178,  2192,  2193,  2194,  2195,  2199,  2202,
    2206,  2208,  2212,  2216,  2220,  2224,  2228,  2234,  2240,  2254,
    2255,  2256,  2257,  2258,  2259,  2260,  2266,  2270,  2274,  2278,
    2284,  2284,  2291,  2292,  2293,  2294,  2298,  2301,  2305,  2307,
    2311,  2315,  2319,  2323,  2327,  2333,  2339,  2343,  2354,  2355,
    2356,  2357,  2361,  2364,  2368,  2370,  2374,  2378,  2382,  2386,
    2390,  2396,  2402,  2413,  2414,  2415,  2416,  2421,  2426,  2448,
    2451,  2455,  2467,  2469,  2473,  2477,  2481,  2485,  2489,  2495,
    2501,  2505,  2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,
    2530,  2530,  2533,  2537,  2545,  2550,  2559,  2564,  2573,  2633,
    2640,  2645,  2654,  2659,  2668,  2678,  2682,  2690,  2694,  2702,
    2718,  2727,  2739,  2748,  2751,  2756,  2765,  2769,  2777,  2787,
    2799,  2806,  2810,  2818,  2823,  2833,  2837,  2841,  2845,  2852,
    2856,  2863,  2866,  2874,  2879,  2889,  2897,  2901,  2909,  2922,
    2937,  2944,  2945,  2946,  2947,  2948,  2949,  2950,  2951,  2952,
    2953,  2954,  2955,  2960,  2971,  2975,  2979,  2983,  2987,  2993,
    2999,  3000,  3006,  3013,  3017,  3021,  3033,  3036,  3047,  3050,
    3060,  3067,  3071,  3075,  3079,  3086,  3094,  3099,  3107,  3111,
    3117,  3124,  3139,  3156,  3159,  3163,  3171,  3179,  3183,  3192,
    3200,  3211,  3215,  3219,  3230,  3237,  3242,  3250,  3254,  3262,
    3266,  3274,  3282,  3291,  3296,  3305,  3315,  3319,  3323,  3323,
    3327,  3331,  3335,  3339,  3343,  3347,  3351,  3355,  3359,  3363,
    3367,  3371,  3375,  3380,  3384,  3388,  3393,  3397,  3402,  3406,
    3410,  3415,  3419,  3423,  3427,  3431,  3436,  3440,  3444,  3449,
    3453,  3457,  3462,  3466,  3471,  3476,  3481,  3485,  3490,  3494,
    3499,  3505,  3511,  3516,  3517,  3518,  3526,  3530,  3534,  3542,
    3549,  3558,  3558,  3562,  3582,  3583,  3591,  3592,  3598,  3619,
    3623,  3637,  3643,  3656,  3660,  3660,  3664,  3668,  3677,  3689,
    3700,  3704,  3708,  3712,  3716,  3720,  3724,  3728,  3736,  3744,
    3761,  3769,  3778,  3782,  3786,  3790,  3794,  3802,  3814,  3819,
    3824,  3831,  3836,  3843,  3850,  3861,  3871,  3874,  3885,  3886,
    3887,  3888,  3889,  3890,  3891,  3892,  3893,  3894,  3898,  3898,
    3901,  3901,  3901,  3905,  3912,  3916,  3920,  3928,  3936,  3946,
    3956,  3960,  3967,  3972,  3981,  3985,  3994,  3994,  3994,  3998,
    4004,  4013,  4013,  4018,  4021,  4030,  4041,  4041,  4046,  4050,
    4057,  4061,  4072,  4075,  4080,  4094,  4097,  4101,  4118,  4121,
    4126,  4140,  4143,  4147,  4168,  4171,  4176,  4181,  4191,  4207,
    4222,  4225,  4230,  4251,  4252,  4265,  4266,  4267,  4268,  4269,
    4270,  4275,  4283,  4291,  4295,  4303,  4307,  4316,  4324,  4332,
    4340,  4347,  4360,  4367,  4371,  4379,  4390,  4393,  4402,  4405,
    4415,  4422,  4432,  4433,  4435,  4437,  4443,  4447,  4451,  4452,
    4453,  4457,  4469,  4470,  4471,  4472,  4473,  4474,  4475,  4476,
    4477,  4482,  4490,  4494,  4499,  4508,  4516,  4524,  4528,  4532,
    4540,  4544,  4548,  4556,  4557,  4565,  4573,  4578,  4582,  4586,
    4590,  4599,  4600,  4608,  4615,  4618,  4621,  4624,  4628,  4640,
    4652,  4668,  4671,  4675,  4685,  4696,  4701,  4712,  4717,  4721,
    4726,  4730,  4735,  4739,  4744,  4748,  4752,  4756,  4760,  4774,
    4778,  4782,  4786,  4791,  4795,  4799,  4803,  4807,  4821,  4822,
    4823,  4824,  4825,  4826,  4827,  4835,  4839,  4843,  4847,  4858,
    4862,  4866,  4870,  4878,  4882,  4892,  4896,  4900,  4904,  4908,
    4916,  4918,  4925,  4929,  4933,  4937,  4947,  4951,  4955,  4963,
    4965,  4973,  4977,  4984,  4988,  4996,  5000,  5008,  5016,  5020,
    5029,  5032,  5036,  5040,  5044,  5048,  5059,  5065,  5071,  5077,
    5087,  5091,  5095,  5103,  5107,  5115,  5123,  5128,  5133,  5145,
    5149,  5153,  5157,  5161,  5167,  5167,  5172,  5178,  5178,  5183,
    5187,  5197,  5205,  5212,  5217,  5225,  5234,  5247,  5260,  5274,
    5286,  5295,  5307,  5311,  5315,  5320,  5325,  5330,  5339,  5342,
    5350,  5354,  5362,  5366,  5374,  5379,  5388,  5392,  5396,  5404,
    5408,  5416,  5420,  5424,  5428,  5436,  5440,  5444,  5452,  5457,
    5467,  5480,  5480,  5484,  5492,  5501,  5506,  5515,  5519,  5523,
    5530,  5535,  5544,  5553,  5553,  5553,  5553,  5553,  5553,  5553,
    5553,  5554,  5554,  5554,  5554,  5554,  5554,  5555,  5559,  5559,
    5559,  5559,  5559,  5559,  5559,  5559,  5559,  5559,  5560,  5560,
    5560,  5560,  5560,  5560,  5560,  5561,  5561,  5561,  5561,  5561,
    5561,  5561,  5561,  5562,  5562,  5562,  5562,  5562,  5562,  5562,
    5562,  5562,  5562,  5562,  5563,  5563,  5563,  5563,  5563,  5563,
    5563,  5563,  5563,  5563,  5563,  5563,  5564,  5564,  5564,  5564,
    5564,  5564,  5564,  5564,  5564,  5564,  5565,  5565,  5565,  5565,
    5565,  5565,  5565,  5565,  5565,  5565,  5565,  5565,  5566,  5566,
    5566,  5566,  5566,  5566,  5566,  5566,  5566,  5566,  5566,  5566,
    5567,  5567,  5567,  5567,  5567,  5567,  5567,  5567,  5567,  5568,
    5568,  5568,  5568,  5568,  5568,  5568,  5568,  5569,  5569,  5569,
    5569,  5569,  5569,  5569,  5569,  5569,  5570,  5570,  5570,  5570,
    5570,  5570,  5570,  5570,  5570,  5571,  5571,  5571,  5571,  5571,
    5571,  5571,  5571,  5571,  5571,  5572,  5572,  5572,  5572,  5572,
    5572,  5572,  5572,  5572,  5572,  5572,  5573,  5573,  5573,  5573,
    5573,  5573,  5573,  5573,  5573,  5573,  5573
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
  "\"<xsl:copy...\"", "\"<xsl:for-each...\"", "\"<xsl:output...\"",
  "\"version='...'\"", "\"mode='...'\"", "\"name='...'\"",
  "\"doctype-public='...'\"", "\"doctype-system='...'\"",
  "\"encoding='...'\"", "\"media-type='...'\"",
  "\"normalization-form='...'\"", "\"standalone='...'\"",
  "\"exclude-result-prefixes='...'\"", "\"tunnel='...'\"",
  "\"required='...'\"", "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"byte-order-mark='...'\"",
  "\"escape-uri-attributes='...'\"", "\"include-content-type='...'\"",
  "\"indent='...'\"", "\"omit-xml-declaration='...'\"",
  "\"undeclare-prefixes='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...'\"", "\"regex='...'\"",
  "\"flags='...'\"", "\"method='...'\"",
  "\"cdata-section-elements='...'\"", "\"use-character-maps='...'\"",
  "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "\"#default\"", "\"#all\"",
  "\"#current\"", "\"xml\"", "\"html\"", "\"xhtml\"", "$accept",
  "SelectLanguage", "Start_XSLT", "Stylesheet_XSLT",
  "StylesheetAttrs_XSLT", "StylesheetContent_XSLT", "Template_XSLT",
  "TemplateAttrs_XSLT", "TemplateModes_XSLT", "Number_XSLT",
  "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT",
  "ParamAttrs_XSLT", "GlobalParam_XSLT", "GlobalParamAttrs_XSLT",
  "GlobalVariable_XSLT", "GlobalVariableAttrs_XSLT", "Output_XSLT",
  "OutputAttrs_XSLT", "OutputMethod_XSLT", "QNames_XSLT",
  "LiteralResultElement_XSLT", "LiteralResultElementAttrs_XSLT",
  "AttrValueTemplate_XSLT", "SequenceConstructor_XSLT", "Instruction_XSLT",
  "ValueOf_XSLT", "ValueOfAttrs_XSLT", "Text_XSLT", "TextNode_XSLT",
  "ApplyTemplates_XSLT", "ApplyTemplatesAttrs_XSLT",
  "ApplyTemplatesMode_XSLT", "ApplyTemplatesContent_XSLT",
  "CallTemplate_XSLT", "CallTemplateAttrs_XSLT",
  "CallTemplateContent_XSLT", "WithParam_XSLT", "WithParamAttrs_XSLT",
  "Sequence_XSLT", "If_XSLT", "Choose_XSLT", "WhenList_XSLT", "When_XSLT",
  "Otherwise_XSLT", "AnalyzeString_XSLT", "AnalyzeStringAttrs_XSLT",
  "MatchingSubstring_XSLT", "NonMatchingSubstring_XSLT", "Variable_XSLT",
  "VariableAttrs_XSLT", "Comment_XSLT", "CommentAttrs_XSLT", "PI_XSLT",
  "PIAttrs_XSLT", "Document_XSLT", "DocumentAttrs_XSLT", "Attribute_XSLT",
  "AttributeAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT", "Copy_XSLT",
  "CopyAttrs_XSLT", "ForEach_XSLT", "ForEachAttrs_XSLT", "Pattern_XSLT",
  "PathPattern_XSLT", "PathPatternStart_XSLT", "IdKeyPattern_XSLT",
  "IdValue_XSLT", "KeyValue_XSLT", "RelativePathPattern_XSLT",
  "PatternStep_XSLT", "PatternAxis_XSLT", "PatternStepPredicateList_XSLT",
  "Module_XQ", "MainModule_XQ", "LibraryModule_XQ", "Prolog_XQ",
  "Setter_XQ", "FunctionDecl_XQ", "FunctionKeyword", "Module_XQF",
  "MainModule_XQF", "LibraryModule_XQF", "Prolog_XQF", "Module_XQU",
  "MainModule_XQU", "LibraryModule_XQU", "Prolog_XQU", "Module",
  "VersionDecl", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "FTOptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
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
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   313,   314,   314,   314,   314,   314,   314,   315,   316,
     316,   317,   317,   317,   318,   318,   318,   318,   318,   318,
     319,   320,   320,   320,   320,   320,   320,   321,   321,   321,
     321,   322,   322,   322,   323,   324,   324,   324,   324,   325,
     325,   326,   327,   327,   327,   327,   327,   327,   328,   329,
     329,   329,   329,   329,   329,   330,   331,   331,   331,   331,
     332,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   334,
     334,   334,   334,   334,   335,   335,   336,   337,   337,   337,
     338,   338,   338,   339,   339,   339,   339,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   341,   342,   342,   342,   343,   344,   344,
     345,   346,   346,   346,   347,   347,   347,   348,   348,   349,
     350,   350,   351,   351,   352,   353,   353,   353,   353,   353,
     354,   355,   356,   357,   357,   358,   359,   359,   360,   361,
     361,   361,   361,   362,   362,   363,   363,   364,   365,   365,
     365,   365,   366,   367,   367,   368,   369,   369,   369,   370,
     371,   372,   373,   373,   373,   373,   373,   374,   375,   375,
     375,   376,   377,   377,   377,   378,   379,   379,   380,   380,
     381,   381,   381,   382,   382,   383,   383,   384,   384,   385,
     385,   386,   386,   386,   386,   386,   386,   387,   388,   388,
     388,   388,   389,   389,   390,   390,   390,   390,   391,   392,
     393,   393,   393,   393,   393,   393,   393,   393,   393,   394,
     394,   394,   394,   394,   394,   394,   395,   395,   395,   395,
     396,   396,   397,   397,   397,   397,   398,   399,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   401,   401,
     401,   401,   402,   403,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   405,   405,   405,   405,   406,   406,   407,
     408,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   413,   414,   415,   415,   416,   416,   417,   418,
     419,   419,   420,   420,   421,   422,   422,   423,   423,   424,
     425,   426,   426,   427,   427,   427,   428,   428,   429,   429,
     430,   431,   431,   432,   432,   433,   433,   433,   433,   434,
     434,   435,   435,   436,   436,   437,   438,   438,   439,   440,
     440,   441,   441,   441,   441,   441,   441,   441,   441,   441,
     441,   441,   441,   442,   443,   443,   443,   443,   444,   444,
     444,   444,   445,   446,   446,   447,   448,   448,   449,   449,
     450,   451,   451,   452,   452,   453,   454,   454,   455,   455,
     456,   456,   457,   458,   458,   458,   459,   459,   459,   460,
     460,   461,   461,   462,   463,   464,   464,   465,   465,   466,
     466,   467,   468,   468,   469,   469,   470,   470,   471,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   472,   472,   472,   473,   473,   474,   474,
     474,   475,   475,   475,   475,   475,   476,   476,   476,   477,
     477,   477,   478,   478,   479,   479,   480,   480,   481,   481,
     482,   482,   482,   483,   483,   483,   484,   484,   484,   485,
     485,   486,   486,   487,   488,   488,   489,   489,   489,   489,
     490,   491,   491,   491,   492,   492,   493,   493,   494,   494,
     495,   495,   495,   495,   495,   495,   495,   495,   496,   496,
     497,   497,   498,   498,   498,   498,   498,   499,   500,   500,
     501,   501,   502,   502,   502,   503,   504,   504,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   506,   506,
     507,   507,   507,   508,   509,   510,   510,   511,   512,   513,
     514,   514,   515,   515,   516,   516,   517,   517,   517,   518,
     518,   519,   519,   520,   520,   520,   521,   521,   522,   522,
     523,   523,   524,   524,   524,   525,   525,   525,   526,   526,
     526,   527,   527,   527,   528,   528,   528,   528,   528,   529,
     530,   530,   531,   532,   532,   533,   533,   533,   533,   533,
     533,   534,   535,   536,   536,   537,   537,   538,   539,   540,
     541,   542,   542,   543,   543,   544,   545,   545,   546,   546,
     547,   547,   548,   548,   548,   548,   549,   549,   549,   549,
     549,   550,   551,   551,   551,   551,   551,   551,   551,   551,
     551,   552,   553,   553,   553,   554,   555,   556,   556,   556,
     557,   557,   557,   558,   558,   559,   560,   561,   561,   561,
     561,   562,   562,   563,   564,   565,   566,   567,   568,   569,
     569,   570,   570,   570,   571,   571,   572,   572,   573,   573,
     574,   574,   575,   575,   576,   576,   576,   576,   576,   577,
     577,   577,   577,   577,   577,   577,   577,   577,   578,   578,
     578,   578,   578,   578,   578,   579,   579,   579,   579,   580,
     580,   580,   580,   581,   581,   582,   582,   582,   582,   582,
     583,   583,   584,   584,   584,   584,   585,   585,   585,   586,
     586,   587,   587,   588,   588,   589,   589,   590,   591,   591,
     592,   592,   592,   592,   592,   592,   593,   593,   593,   593,
     594,   594,   594,   595,   595,   596,   597,   597,   597,   598,
     598,   598,   598,   598,   599,   599,   600,   601,   601,   602,
     602,   603,   604,   605,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   613,   613,   613,   613,   613,   614,   614,
     615,   615,   616,   616,   617,   617,   618,   618,   618,   619,
     619,   620,   620,   620,   620,   621,   621,   621,   622,   622,
     623,   624,   624,   625,   626,   627,   627,   628,   628,   628,
     629,   629,   630,   631,   631,   631,   631,   631,   631,   631,
     631,   631,   631,   631,   631,   631,   631,   631,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632,   632,   632,   632,
     632,   632,   632,   632,   632,   632,   632
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       4,     1,     3,     2,     3,     3,     3,     0,     2,     2,
       2,     1,     1,     1,     4,     1,     2,     3,     2,     0,
       2,     3,     1,     2,     3,     3,     2,     2,     3,     1,
       2,     3,     3,     2,     2,     3,     1,     2,     3,     3,
       2,     1,     2,     3,     2,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     2,     4,     0,     3,     2,
       0,     2,     2,     0,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     3,     1,     1,
       3,     1,     3,     3,     1,     1,     1,     0,     2,     3,
       1,     2,     0,     2,     3,     1,     2,     3,     3,     2,
       4,     5,     4,     1,     2,     5,     0,     3,     4,     1,
       3,     3,     3,     0,     3,     0,     3,     4,     1,     2,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     3,     3,     3,     2,     1,     3,
       2,     3,     1,     2,     2,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     2,     1,     3,
       3,     2,     0,     4,     2,     2,     1,     1,     2,     2,
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
       1,     1,     5,     7,     8,    10,     6,     8,     0,     2,
       2,     3,     0,     2,     1,     3,     1,     1,     1,     3,
       7,     3,     7,     5,     9,     1,     1,     1,     1,     3,
       5,     1,     1,     3,     4,     3,     4,     3,     5,     6,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   220,   248,   264,   282,     0,     0,     0,   512,
       0,     0,     0,   580,     0,   556,     0,     0,   480,   537,
     507,     0,   766,   767,   768,   814,   815,   816,   820,   821,
     822,   823,   824,   826,   829,   830,   831,   832,   833,   834,
     835,   836,   837,   838,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   966,   967,
     828,   769,   873,   513,   514,   874,   875,   876,   877,   878,
     879,   880,   881,   882,   883,   884,   885,   886,   887,   888,
     889,   890,   825,   891,   892,   819,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   818,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   817,   927,   827,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   968,   969,   970,   971,   972,   973,   974,   975,
     976,     2,   348,   350,   351,     0,   367,   370,   371,   352,
     353,   354,   360,   413,   415,   432,   435,   437,   440,   445,
     448,   451,   453,   455,   457,   459,   462,   463,   465,     0,
     471,   464,   476,   479,   483,   484,   516,     0,   489,   516,
       0,   501,   499,   509,   511,   485,   516,   518,   528,   519,
     520,   521,   524,   525,   522,   523,   544,   546,   547,   548,
     545,   585,   586,   587,   588,   589,   590,   508,   630,   622,
     629,   628,   627,   624,   626,   623,   625,   355,     0,   356,
       0,   358,   357,   359,   530,   531,   532,   529,   510,   361,
     362,   526,   801,   802,   527,   771,   813,     0,     0,     3,
     216,   217,     0,   220,   220,     4,   244,   245,     0,   248,
     248,     5,   260,   261,     0,   264,   264,     6,   282,   275,
     276,   282,     0,    11,    87,     7,     8,    10,     1,   814,
     815,   816,   820,   821,   822,   823,   824,   835,   836,   837,
     838,   839,   840,   841,   842,   843,   844,   845,   846,   864,
     966,   967,   875,   877,   888,   889,   825,   819,   906,   912,
     817,   827,   952,   955,   961,   963,   973,   974,   533,   534,
     813,   814,   815,   821,   824,   817,   498,   551,   552,   553,
       0,   581,     0,   478,   557,     0,   461,   460,   536,     0,
     492,     0,     0,   593,     0,     0,     0,     0,     0,     0,
       0,   601,     0,     0,     0,     0,     0,   490,   491,   493,
     494,   495,   496,   502,   503,   504,   505,   506,     0,     0,
       0,   764,     0,     0,     0,   372,   374,     0,     0,   380,
     382,     0,     0,   402,     0,     0,     0,     0,     0,     0,
     497,     0,     0,     0,   608,     0,     0,   754,   755,     0,
     757,   758,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   368,   369,   365,   366,     0,     0,     0,     0,     0,
       0,     0,     0,   418,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   472,
     477,     0,     0,   486,   488,   487,   500,     0,   515,     0,
     756,     0,     0,     0,     0,   918,   925,     0,     0,     0,
       0,   229,     0,     0,   233,   234,   235,   230,   231,   300,
     301,     0,   232,   218,     0,   214,   215,   219,   918,     0,
       0,     0,     0,     0,     0,     0,     0,   246,     0,   242,
     243,   247,   918,     0,     0,     0,   292,     0,     0,   296,
     297,   299,   293,   294,     0,   295,     0,   262,   298,     0,
     258,   259,   263,   273,   274,   280,   918,     0,     0,     0,
       0,     0,     0,     0,     0,   279,     0,    14,    93,   556,
       0,   583,   582,   579,     0,   535,   644,   640,     0,   643,
     655,     0,     0,   597,   636,     0,   632,     0,     0,     0,
       0,   631,   637,     0,     0,   770,     0,     0,   600,     0,
     646,     0,   654,   656,   635,     0,     0,     0,     0,     0,
       0,     0,   608,     0,   608,     0,     0,   608,     0,     0,
       0,     0,     0,     0,     0,     0,   652,   647,     0,   651,
     592,     0,   339,     0,   344,     0,     0,     0,     0,     0,
     789,   791,   349,   363,   385,     0,     0,   364,   412,   414,
     417,   420,   421,   422,   430,   431,     0,   416,   423,   424,
     425,   426,   427,   428,   429,     0,     0,     0,   730,   730,
     730,   730,   433,   661,   665,   667,   669,   671,   673,     0,
     438,   439,   436,   441,   443,   442,   444,   446,   447,   449,
     450,     0,     0,     0,     0,   469,     0,   482,   481,     0,
     805,   543,     0,     0,     0,     0,     0,   540,     0,   803,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   240,   241,   782,     0,     0,     0,   302,   221,   226,
     222,   223,   224,   228,   225,   227,     0,     0,     0,   249,
     254,   250,   251,   252,   256,   257,   253,   255,     0,     0,
     342,     0,   265,   266,   267,   268,   272,   269,   270,   271,
     341,   341,   283,   284,   285,   286,   290,   291,   287,   288,
     289,    12,    13,     0,    89,    90,     0,   557,     0,   584,
       0,   474,   473,     0,   641,   594,   595,     0,   599,   633,
     634,   639,   638,   602,   603,     0,   645,   653,   598,   591,
       0,   763,     0,   538,   539,   376,   373,   378,     0,   381,
       0,   401,   399,   400,     0,     0,   466,     0,     0,     0,
     648,   608,     0,   340,     0,   826,   818,   827,   609,   612,
     616,   618,   621,   619,   620,     0,     0,   804,     0,     0,
       0,     0,     0,     0,   392,   386,   389,   393,     0,   419,
       0,     0,   670,   731,   733,   735,   674,   675,   676,   677,
       0,   434,     0,   660,     0,     0,   452,   454,   456,   606,
     458,   470,     0,     0,   806,     0,     0,   753,   752,   751,
     541,     0,   277,     0,   304,   305,   658,   320,     0,     0,
     333,   334,   310,   311,     0,     0,     0,     0,   315,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   323,
       0,   323,     0,     0,     0,   695,   696,     0,     0,   309,
     688,   689,   690,   691,   692,   693,   694,   747,   746,   748,
       0,     9,    21,    49,    35,    56,    61,    15,    39,    16,
      39,    17,    93,    18,    93,    19,     0,    88,    86,   114,
       0,   121,   130,     0,     0,     0,   158,   163,   166,   170,
     172,   149,   178,   182,   186,   118,   119,    95,    96,    97,
      93,    98,    94,    99,   127,   100,   132,   101,   103,   102,
     109,   153,   104,    93,   105,    93,   106,    93,   107,    93,
     108,    93,   110,     0,   111,    93,   112,    93,   556,   556,
     574,   549,   475,     0,   657,   596,   604,   765,     0,     0,
     378,     0,     0,     0,     0,     0,     0,   406,     0,   467,
     468,     0,   345,   343,     0,     0,     0,     0,   613,   615,
     614,   610,     0,     0,   760,     0,   761,     0,     0,   796,
     797,   793,   795,     0,   394,   395,   396,   387,   672,   730,
     732,   734,     0,   664,     0,     0,   679,     0,     0,     0,
       0,     0,     0,   663,   662,   666,     0,   607,   605,   517,
     542,     0,     0,     0,     0,   608,     0,     0,   319,     0,
       0,     0,   308,   782,   786,   787,   788,   783,   784,     0,
       0,     0,     0,   323,     0,   322,     0,   329,   701,   702,
     700,   704,   709,     0,   729,   697,   698,   727,   699,   703,
       0,     0,   728,     0,     0,    27,    23,     0,     0,     0,
      93,    36,    38,     0,    93,    50,    54,    53,     0,     0,
       0,    57,     0,     0,     0,    60,    78,    62,    66,    67,
      68,    72,    73,    75,    64,    69,    70,    71,    74,    76,
       0,     0,     0,    92,    91,     0,     0,     0,   146,   143,
       0,     0,    90,     0,     0,     0,     0,   131,     0,    93,
       0,    90,    90,   155,   159,     0,     0,     0,     0,     0,
      90,     0,     0,     0,    90,     0,    90,    90,     0,   177,
     180,     0,   183,   184,     0,     0,     0,     0,     0,     0,
     642,   762,     0,     0,     0,     0,   384,   403,     0,     0,
       0,   404,   405,     0,     0,   649,   812,   611,   617,   807,
     810,     0,   346,   347,     0,     0,     0,   798,     0,     0,
     388,     0,   390,   678,   745,   687,   685,   686,   659,     0,
       0,     0,     0,     0,     0,   743,   744,   683,   684,   668,
     749,   750,   278,   281,     0,   303,   312,   313,   306,   307,
     317,   318,   314,     0,   772,   778,     0,     0,     0,   194,
     193,   814,   835,   968,   969,     0,   189,     0,   192,   190,
     201,   212,   208,     0,   238,   236,   326,   327,   321,   324,
       0,     0,   717,     0,     0,   706,   705,     0,     0,     0,
      25,    22,    26,    31,    32,    33,    24,    42,    40,    93,
       0,    37,     0,    52,    51,    48,    59,    58,    55,    82,
      83,    79,    80,    81,    63,    84,    65,    77,   117,     0,
       0,    93,   144,     0,    93,   115,   116,   113,   124,   125,
     126,   123,   122,   120,   135,   128,    93,   129,   133,     0,
     150,   151,   152,    93,     0,   161,   160,    93,   164,   162,
     167,   168,   165,   169,   173,   175,   176,   174,   171,   179,
     181,   187,   185,   556,   556,     0,   578,   577,   576,   575,
     377,     0,   379,   383,     0,     0,     0,     0,     0,   650,
       0,     0,     0,   759,   608,     0,   790,   792,     0,   397,
     398,     0,   740,   741,   742,   680,     0,     0,   736,     0,
     681,   682,     0,   332,   330,   780,     0,     0,     0,     0,
     785,   211,     0,     0,     0,     0,     0,   776,   778,   202,
       0,     0,     0,     0,   207,     0,     0,   325,   323,   710,
     710,   712,     0,     0,   719,   719,     0,   337,   335,    28,
      29,    30,    43,    47,    46,     0,     0,     0,    20,    34,
      85,   140,    93,     0,   142,     0,   136,   139,     0,     0,
       0,   154,     0,   148,   157,     0,     0,   556,   375,     0,
     409,     0,   408,   411,   808,   811,     0,     0,   799,     0,
     391,   738,   737,     0,   331,   781,   779,   773,     0,   210,
     209,     0,   198,   197,     0,   188,     0,   204,   203,   206,
     205,     0,   239,   237,   328,     0,     0,     0,     0,     0,
     723,   721,   716,   718,     0,    45,    44,    41,     0,   147,
     141,   138,   137,   134,   156,   562,   568,   554,   565,   571,
     555,     0,     0,     0,   809,     0,   794,   739,   774,   778,
     195,     0,   777,     0,     0,   708,   707,   713,   714,     0,
     722,     0,     0,   720,   338,   336,   145,     0,     0,     0,
       0,   550,     0,   407,   800,     0,     0,   199,   200,   213,
     711,     0,   724,   725,   726,   558,   564,   563,   559,   570,
     569,   560,   567,   566,   561,   573,   572,   410,   775,   196,
     715
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   315,   316,   577,   783,   947,   948,  1310,  1316,
     949,   950,  1130,  1318,  1319,   951,   952,   953,   954,   955,
     956,  1334,  1336,   977,   578,   957,   786,   978,   979,   980,
     981,   982,   983,   984,  1351,  1176,   985,   986,  1178,  1355,
    1356,   987,   988,   989,  1168,  1169,  1343,   990,   991,  1183,
    1364,   992,   993,   994,   995,   996,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1285,  1286,  1287,
    1288,  1511,  1586,  1289,  1290,  1291,  1444,   289,   290,   291,
     292,   507,   508,   734,   295,   296,   297,   298,   301,   302,
     303,   304,   307,   293,   309,   310,   294,   312,   543,   509,
     738,   510,   511,   512,   513,   535,   514,   515,   516,   910,
    1272,   517,   518,   519,  1105,   918,   520,   521,  1424,   522,
     556,   434,   761,   643,   644,  1164,   191,   192,   193,   194,
     195,   196,   197,   415,   416,  1020,  1022,   198,   419,   420,
     453,   454,   855,   856,   857,  1056,  1242,   199,   422,   423,
     200,  1026,  1221,  1027,   201,   202,   203,   204,   666,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   792,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   493,   236,   237,   238,   239,   358,   240,   241,   242,
     243,   244,   712,   245,   246,   247,   369,   579,   375,  1547,
    1550,  1577,  1579,  1578,  1580,  1209,   248,   372,   249,   582,
     250,   251,   252,   384,   593,   253,   254,   255,   256,   392,
     608,   878,  1078,   646,   838,  1041,   839,   840,   257,   258,
     259,   260,   261,   262,   263,   588,   264,   609,   265,   638,
     266,   611,   589,   612,  1013,   897,   682,   873,   683,   684,
     685,   686,   687,   688,  1073,   929,   930,   931,   932,   933,
    1525,  1306,   934,  1532,  1454,  1529,  1573,   935,   936,   866,
    1253,  1415,  1257,   871,   558,   267,   268,   269,   270,   271,
     272,   273,   410,   411,   274,   275,   276,   277,   604,   278,
     524,  1428,  1275,   914,  1097,  1098,   279,   280,  1051,  1236,
    1237,   281,   282,   283,   284,   843,  1231,   844,   285,   286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1339
static const yytype_int16 yypact[] =
{
     853,  3094,   148,   148,   148,   148,  -108,   118,  7184, -1339,
    5820,   827,    35,   101,  4492,   216,  3327,  3327, -1339, -1339,
   -1339,  1696, -1339, -1339, -1339,   294,   326,   201,   330,   312,
     344,   421,   410, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
     476,   494,   584,   591,   620,   662,   674,   695,   726,   756,
     767,   709, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   781,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   745,   778,
   -1339, -1339, -1339, -1339, -1339, -1339,   798, -1339,    67, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   833,
     833, -1339,   676, -1339, -1339,   832, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   399,
   -1339, -1339, -1339, -1339, -1339,   794, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339,   389, -1339,   836, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,    47, -1339,
   -1339,    -7, -1339, -1339, -1339, -1339, -1339,   839, -1339,     8,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339,   660,   642, -1339,
   -1339, -1339,   885, -1339, -1339,   757,   795, -1339, -1339, -1339,
   -1339, -1339,   755,   769, -1339,   159,   708,   103,   178,   121,
     750, -1339,   766,   760,   775,   764, -1339, -1339, -1339,   396,
   -1339, -1339,  4492,   123, -1339, -1339, -1339,  5820, -1339, -1339,
    5820, -1339, -1339, -1339, -1339,   895, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,  3094, -1339,
    3094, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339,   245,   759,   783, -1339,
   -1339, -1339,  3560,   752, -1339, -1339, -1339, -1339,  3793,   752,
   -1339, -1339, -1339, -1339,  4026,   752, -1339, -1339,   752, -1339,
   -1339, -1339,  4259, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339,   906,   922,   930,   934,   961, -1339, -1339, -1339, -1339,
     812, -1339,   913,   123, -1339,  7184, -1339, -1339, -1339,   590,
   -1339,  6035,  3094, -1339,   956,   978,  3094,    76,   982,  7001,
    3094, -1339,   981,  7184,  7184,   992,  3094, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,  3094,  7184,
      56, -1339,  3094,  3094,  7184,  1002, -1339,  7184,  1033,  1016,
   -1339,  7184,    69, -1339,   172,  3094,  3094,  3094,  1008,  1011,
   -1339,  6250,   956,   137,   901,  3094,   914, -1339, -1339,  3094,
   -1339, -1339,  7184,  3094,  3094,  3094,   798,    67,  3094,   935,
     936, -1339, -1339,   816, -1339,  3327,  3327,  3327,  3327,  3327,
    3327,  3327,  3327, -1339,  3327,  3327,  3327,  3327,  3327,  3327,
    3327,  3327,  4926,  3327,  3327,  3327,  3327,  3327,  3327,  3327,
    3327,  3327,  3327,  3327,   916,   926,   927,   931,  1929, -1339,
     123,  4492,  4492,  1055, -1339,  1055, -1339,  2162,  1055,   314,
   -1339,  2395,  1026,   958,  7184,   809,   772,  1032,  1032,  1032,
    1032, -1339,  1032,  1032, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339,  1032, -1339, -1339,  1032, -1339, -1339,   441,   796,  1032,
    1032,  1032,  1032,  1032,  1032,  1032,  1032, -1339,  1032, -1339,
   -1339,   452,   586,  1032,  1032,  1032, -1339,  1032,  1032, -1339,
   -1339, -1339, -1339, -1339,  1032, -1339,  1032, -1339, -1339,  1032,
   -1339, -1339,   556, -1339, -1339,   567,   580,  1032,  1032,  1032,
    1032,  1032,  1032,  1032,  1032, -1339,  1032,   405,   667,   980,
     984, -1339, -1339, -1339,   105, -1339, -1339, -1339,   711, -1339,
   -1339,   505,  2628, -1339, -1339,   528, -1339,   421,   961,  1045,
    1046, -1339, -1339,  1049,  1050, -1339,   555,  2861, -1339,  1051,
   -1339,  1052, -1339, -1339, -1339,   566,   589,  1087,   781,  3094,
     595,   601,   901,   798,   901,  7184,    67,   901,   833,  3094,
    3094,   713,   741,   608,  3094,  3094, -1339, -1339,   742, -1339,
   -1339,  7184, -1339,   746, -1339,  6634,   924,   873,  1037,   949,
     877,   -72, -1339, -1339, -1339,  3094,   966, -1339,   769, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339,  3327, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339,  4926,  3094,  5143,   342,   342,
     342,   342,  1013,  1081,  1082,  1022, -1339, -1339, -1339,  1067,
     178,   178,   947,   121,   121,   121,   121,   750,   750, -1339,
   -1339,  6634,  6634,  7184,  7184, -1339,   635, -1339, -1339,  3094,
   -1339, -1339,   762,   491,  3094,  3094,  3094, -1339,   768, -1339,
      42,  1071,   815,   985,  1104,  7184,   824,   876,   470,   498,
    7184, -1339, -1339,   130,  7358,    18,   -10, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339,   809,   772,   152, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   796,   490,
   -1339,   807, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
     725,   385, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339,   438, -1339, -1339,  1075,   882,   650, -1339,
     983, -1339, -1339,  7184, -1339, -1339, -1339,   649, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339,   680, -1339, -1339, -1339, -1339,
    3094, -1339,   988, -1339, -1339,  1000, -1339,   929,  1106, -1339,
     987, -1339, -1339, -1339,   967,   970, -1339,   699,   706,  7184,
   -1339,   901,  1116, -1339,  6818,  1085,  1088,  1089, -1339,   131,
   -1339, -1339, -1339, -1339, -1339,  3094,  3094, -1339,  3094,  3094,
    3094,  1090,  1091,  1442, -1339,  1100, -1339,   868,  3094, -1339,
    1083,   731, -1339,  1038,   928, -1339, -1339, -1339, -1339, -1339,
    1040, -1339,  4926,   991,  4926,  1004, -1339, -1339, -1339,  1117,
   -1339, -1339,   557,  3094, -1339,   915,   917, -1339, -1339, -1339,
   -1339,  1018, -1339,   985, -1339, -1339, -1339, -1339,  7184,  1112,
   -1339, -1339, -1339, -1339,  1015,   985,   979,   989, -1339, -1339,
    1118,  1034,  7184,   -52,   932,   836,  7184,   972,   985,  1043,
    7184,  1043,   923,   792,   925, -1339, -1339,  1035,   304, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
    7358, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   285, -1339,
     325, -1339,   448, -1339,   374, -1339,  1084,   307, -1339, -1339,
     710, -1339, -1339,   872,   912,   875, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
     549, -1339, -1339, -1339,  -113, -1339,   900, -1339, -1339, -1339,
   -1339,   302, -1339,   380, -1339,   880, -1339,   143, -1339, -1339,
   -1339,    93, -1339,  -111, -1339,   735, -1339,   881,   216,   216,
   -1339, -1339, -1339,  1132, -1339, -1339, -1339, -1339,  3094,  1167,
     929,  1168,  1169,  3094,  3094,  4709,    33, -1339,  3094, -1339,
   -1339,   442, -1339, -1339,  1135,  1138,  1140,  6450, -1339, -1339,
   -1339, -1339,   739,   747, -1339,   960, -1339,  1182,  1182, -1339,
   -1339,   971, -1339,  3094, -1339, -1339,  1057,  1100, -1339,   342,
   -1339, -1339,  3327,  1082,  1105,   919, -1339,  1144,  3327,    -9,
      -9,   811,   811, -1339, -1339,  1022,  4926, -1339, -1339, -1339,
   -1339,  3094,  3094,  1032,  1032,   901,   985,   886, -1339,   985,
     985,   855, -1339,    87, -1339, -1339, -1339,  1162, -1339,  5374,
     173,  1164,  1036,  1043,   985,  1170,  1171,  1170, -1339, -1339,
   -1339, -1339, -1339,   995, -1339, -1339, -1339, -1339, -1339, -1339,
      51,   999, -1339,  1120,   836, -1339, -1339,  5374,  6634,   744,
     965, -1339, -1339,  6634,   965, -1339, -1339, -1339,  6634,  3094,
    7359, -1339,  6634,  3094,  7385, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
     -16,  1095,  1095, -1339, -1339,   986,  3094,   933,   786, -1339,
    3094,  3094, -1339,  7436,   -27,  3094,   269, -1339,   332, -1339,
    3094, -1339, -1339,   957, -1339,  6634,  3094,  7462,  3094,  7513,
   -1339,  3094,  7539,  7590, -1339,  3094, -1339, -1339,  7616, -1339,
   -1339,  3094, -1339, -1339,  7667,  3094,  7693,  1177,  1178,   509,
   -1339, -1339,  7184,  1092,  7184,  3094, -1339, -1339,  7184,  1093,
      94, -1339, -1339,  1069,  1186, -1339, -1339, -1339, -1339,  1078,
   -1339,   771, -1339, -1339,  3094,  7184,   788, -1339,   793,  1190,
   -1339,   902,  1097, -1339,   121, -1339, -1339, -1339, -1339,   102,
       3,  3327,  3327,   654,  1047, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339,    71, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339,   150, -1339,  1086,   998,   -52,  5820, -1339,
    1010,   289,  1216,  1195,  1198,   522, -1339,  5605,   181,   647,
   -1339,  1222, -1339,  6634, -1339, -1339, -1339, -1339,  1170, -1339,
     985,   985, -1339,    75,  1035, -1339, -1339,    90,  1060,   187,
      11,  1234, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   458,
    7744, -1339,  7770, -1339,   885, -1339, -1339,   885, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339,  1125,  1125, -1339,    34,
    3094, -1339, -1339,  1007,   885,   885,   307, -1339, -1339, -1339,
   -1339, -1339,   885, -1339, -1339, -1339,   262, -1339, -1339,  7821,
     885,   307,   307, -1339,  1012, -1339,   885, -1339,   885, -1339,
     307,   885, -1339, -1339,   307,   885,   307,   307, -1339,   885,
   -1339,   885, -1339,   216,   216,   827, -1339, -1339, -1339, -1339,
   -1339,  3094, -1339, -1339,  1098,  3094,  7184,  3094,  3094, -1339,
    6634,  6634,  1101, -1339,   901,  1182, -1339, -1339,  1182, -1339,
   -1339,   985, -1339, -1339, -1339, -1339,  3327,  3327,   121,   183,
   -1339, -1339,  3094, -1339, -1339, -1339,   803,  6634,   924,  5374,
   -1339, -1339,  5820,  5820,   136,  1035,  5374, -1339,  1086, -1339,
    5605,  5605,  5605,  5605, -1339,  1238,   149, -1339,  1043, -1339,
   -1339,   169,  1035,  1035, -1339, -1339,  6634, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339,  6634,  3094,  7847, -1339, -1339,
   -1339, -1339,   885,  7898, -1339,  7924, -1339, -1339,  6634,  3094,
    7975, -1339,  8001, -1339,  8026,   846,   854,   216, -1339,  6634,
   -1339,  1133, -1339, -1339, -1339, -1339,  6634,  1254, -1339,   804,
   -1339,   121,   121,  3327, -1339, -1339, -1339, -1339,   522, -1339,
   -1339,  1231, -1339, -1339,  1243, -1339,   924, -1339, -1339, -1339,
   -1339,  3094, -1339, -1339,  1170,   805,   810,  1035,  1076,   820,
   -1339, -1339,   653,   653,   333, -1339,   885, -1339,  8052, -1339,
   -1339, -1339,   885, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339,  1255,  1152,  3094, -1339,  3094, -1339,   121, -1339,  1086,
   -1339,   459, -1339,   690,  1172, -1339, -1339,    -9, -1339,  1035,
   -1339,    90,    90, -1339, -1339, -1339, -1339,   433,   427,   496,
     471, -1339,  3094, -1339, -1339,   924,  1242, -1339, -1339,  1265,
   -1339,  1096, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339,   339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339,   128,  1285, -1339,  -473,  -837, -1339, -1339, -1339,
   -1339,   335, -1339, -1339, -1339, -1339, -1339, -1339, -1339,   114,
   -1339, -1339, -1339, -1339, -1339,   125, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1108,  -140, -1339,
   -1339, -1339, -1339, -1339, -1090, -1339, -1339, -1339,  1006,  1017,
    1003,  -249,  -242,  -401, -1339,  1005,  1009,  1014, -1339,  1001,
    1019,  1021, -1339,   867,   997,  1030,    38,  1028,  -288,  -253,
    -446,  -251,  -284,  -192,  -120,  -286,  -264,  -260,  -258, -1339,
   -1339,  -239,  -232, -1339,  -916, -1339, -1339,  -116, -1339,  -230,
    -279,  -879, -1339,    36,   479,  -612,   418,   -21,  -191, -1339,
   -1339, -1339,  1122, -1339,   707, -1339,   293,  1147, -1339,   703,
   -1339,   891,   487,   295, -1339, -1339, -1339, -1339,  1246,   719,
   -1339, -1339, -1339,   323, -1339, -1339,   896,   894, -1339,    32,
   -1339,   879,   576,  -464,   575,   581, -1339, -1339, -1339,  1041,
   -1339, -1339, -1339, -1339,  1146, -1339, -1339, -1339,    17,   577,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339,    20, -1339, -1339,
   -1339,  -226, -1339,  -465, -1339,  -471,  -392, -1339,  -445, -1339,
   -1339,  -412,   851, -1339,   154, -1339,   -19, -1339,  -575, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339,  1226,   942, -1339, -1339, -1339, -1339, -1339,
   -1339,   671, -1339,  -606,  -442, -1339,   542,   363,  -551, -1339,
   -1339, -1339, -1339, -1339, -1339, -1339, -1339, -1339,  1020, -1339,
    1023, -1339,   993,   948,   553,  -678,   712, -1339, -1339,   506,
     514,   313,   715, -1339, -1339,   517, -1339, -1339, -1339, -1339,
     -57, -1280, -1339,   -61,  -501, -1339, -1339, -1339, -1339,  -642,
   -1038,   142,   324, -1339, -1339, -1339, -1339, -1339, -1339, -1339,
   -1339, -1339, -1339,   780, -1339,   336, -1339,  -925,  -496,  -245,
     -90, -1338, -1217,   306, -1339,   127, -1339, -1339, -1339, -1042,
      -5, -1339, -1339, -1339, -1339, -1339, -1339, -1339,    27,     1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -518
static const yytype_int16 yytable[] =
{
     379,   679,  1117,   495,   788,  1107,  1238,   678,   721,   360,
     498,   360,   693,   694,   695,   696,   815,   617,   817,  1311,
     546,   820,   622,  1450,   567,   624,   572,   680,   546,   627,
     366,   373,  1254,   574,   847,   359,  1100,   867,   868,   869,
     549,   300,   306,   311,   550,   531,   551,   532,   549,   529,
    1329,   544,   550,   545,   551,   437,   530,   919,   921,   568,
     681,   569,   739,   740,   741,   552,   742,   743,  1438,   444,
     440,  1094,   553,   552,   555,   744,   417,   499,   745,   500,
     553,  1422,   555,   749,   750,   751,   752,   753,   754,   755,
     756,   618,   757,  1303,   841,   737,  1348,   762,   763,   764,
    1516,   765,   766,  1396,   628,  1416,   533,  1330,   767,   435,
     768,  1250,   547,   769,   480,  1140,   896,  1144,   318,   596,
     570,   772,   773,   774,   775,   776,   777,   778,   779,  1273,
     780,  1199,  1452,   480,  1459,   313,   590,   845,   846,   473,
     474,   597,  1038,  1173,   896,     8,   641,  1417,   590,   613,
     841,   841,   436,   852,  1039,   491,  1187,  1174,  1189,   641,
    1192,   492,  1193,   920,  1198,   370,  1304,  1040,  1204,   853,
    1206,  1200,   457,   458,   459,   460,   461,   462,   534,  1175,
     642,  1201,   536,  1025,   548,   463,   613,  1298,   554,   476,
    1304,   916,   571,  1425,   314,   480,   573,  1439,   464,   845,
     846,   917,  1251,  1252,   679,  1453,   679,   628,   538,   371,
     678,   790,   678,  1440,   559,  1084,  1220,   629,   891,  1441,
     438,  1585,   576,   845,   846,  1032,  1397,  1088,   360,   899,
     680,   360,   680,   818,  1305,   441,   791,   845,   846,   490,
    1103,   922,   923,   387,   647,  1309,  1423,   494,   649,   831,
     496,   477,   651,   652,   653,  1095,  1096,   654,  1449,   876,
     877,   418,    81,   681,   475,   681,   481,   598,   465,   466,
     467,   468,   469,   470,   892,   619,  1471,   567,   546,   572,
    1349,   546,  1350,   841,  1590,   481,   574,   501,   531,  1250,
     532,  1559,   529,  1320,  1331,  1332,  1333,  1322,   549,   530,
     502,   549,   550,   924,   551,   550,   711,   551,  1432,   544,
     711,   545,   568,   380,   569,  1412,  1413,  1414,  1460,  1461,
     630,  1508,   374,   552,  1522,  1293,   552,   907,   913,   471,
     553,   381,   555,   553,   287,   555,   381,   300,   288,  1456,
     478,   479,  1359,   306,  1503,   382,   311,   481,  1294,   533,
    1517,  1518,  1519,  1520,   389,   925,   926,   845,   846,   927,
     940,   591,  1457,   390,  1194,   595,  1499,   912,   385,   606,
     547,   913,   388,   570,  1527,   615,   360,   386,   928,  1451,
    1251,  1252,   360,   845,   846,  1195,   393,   616,  1196,  1197,
     360,   620,   621,  1118,   360,   360,  1119,  1120,  1121,  1122,
     842,   679,   584,   679,   631,   632,   633,   678,  1265,   678,
     360,  1268,  1269,  1528,  1190,   360,   605,  1243,   360,   383,
    1101,   534,   360,  1163,  1106,   536,  1299,   680,   812,   680,
      15,   431,   360,  1207,  1208,  1191,   359,   391,   822,   823,
     382,   359,   548,   360,   359,   571,   554,   488,   359,   573,
     427,   538,   395,   722,   748,   723,   842,   842,   842,   842,
     681,   396,   681,   394,   854,  1224,   713,   706,     8,   650,
     428,   429,   559,   689,   841,   576,  1598,   845,   846,  1264,
    1595,  1274,  1467,   845,   846,  1225,   841,  1123,  1295,   660,
     661,   662,   663,   664,   665,   397,   667,   668,   669,   670,
     671,   672,   673,   674,  1473,   360,  1085,  1475,  1574,  1513,
    1514,  1353,   724,   398,   383,    22,    23,    24,  1354,  1480,
    1604,   845,   846,   887,   888,   889,  1482,  1530,  1531,  1591,
    1484,   605,  1524,  1476,  1436,    11,   714,   715,    12,    13,
     444,  1477,  1385,  1601,  1599,   716,   845,   846,  1014,  1596,
     863,   864,   865,  1478,  1479,  1125,  1126,   795,   725,   845,
     846,   937,   938,   444,  1273,  1179,   726,   727,   728,   729,
     730,   797,   845,   846,  1357,  1127,  1128,   841,  1129,  1079,
     798,  1354,   841,  1219,  1014,    81,   805,   841,  1605,   842,
     444,   841,   444,   939,  1180,  1230,  1131,  1388,  1244,  1181,
    1182,   444,  1567,   399,  1249,   679,  1132,   803,   904,   759,
     400,   678,  1602,   827,   828,   905,  1133,   760,   808,  1017,
     733,   746,  1447,  1448,   444,   444,   360,  1386,  1387,   747,
     444,   680,   758,   585,   841,  1538,   444,  1262,  1263,   401,
     747,   809,   360,   444,  1592,  1141,   360,   813,   722,   748,
     723,  1184,   359,   814,   722,   861,   723,  1044,  1045,  1046,
     826,   906,   731,   732,   681,  1142,  1143,   854,   359,   908,
     444,  1185,  1186,  1437,   781,   909,   689,  1010,   689,  1442,
     941,   402,   942,   782,   444,  1443,  1312,   881,   882,   943,
     944,  1321,  1080,   403,  1011,   945,  1323,  1458,   859,  1346,
    1326,  1015,   360,   360,   360,   360,   946,   724,  1361,  1362,
     523,   885,  1589,   724,   404,   444,   537,  1370,   425,  1135,
     886,  1374,   557,  1376,  1377,   444,   360,  1136,  1137,  1462,
     575,   360,  1016,  1500,   444,   915,   770,  1463,  1464,  1138,
    1139,   444,   841,  1365,   747,   405,   793,   771,   444,  1465,
    1466,  1029,   605,   725,   794,   747,   824,   911,  1030,   725,
     408,   726,   727,   728,   729,   730,   444,   726,   727,   728,
     729,   730,  -341,  -341,   444,   406,   444,   829,  -341,  -341,
     842,   832,   444,  1059,   825,   830,   407,  1418,  1419,   833,
     409,  1232,   842,   722,   360,   723,   412,   883,  1497,  1233,
    1313,  1314,  1315,   883,   759,   884,  1401,   414,  1485,  1486,
     759,   890,   760,   430,  1402,   733,  1507,  1571,   760,  1572,
    1390,   733,  1392,  1405,  1042,  1043,  1394,  1211,  1405,   413,
     360,  1406,  1216,  1217,  1523,   360,  1407,  1223,   832,  1405,
    1564,  1171,   421,  1404,  1172,  1564,  1505,  1556,  1565,   841,
     841,  1446,   724,  1566,   360,  1569,     1,     2,     3,     4,
       5,     6,   854,  1570,   722,   748,   723,  1412,  1413,  1414,
     299,   305,   308,   689,   426,   689,   841,   722,   433,   723,
    1052,  1110,   443,   842,  1111,  1112,  1113,  1114,   842,   445,
    1260,  1261,  1545,   842,  1546,   442,  1558,   842,   725,   360,
    1548,   439,  1549,   472,  1562,   841,   726,   727,   728,   729,
     730,   455,  1551,   360,   841,   482,   483,   360,   580,   581,
     444,   360,  1575,   724,   484,   359,   456,   841,   446,   485,
     447,   448,   487,   449,   450,   486,   724,   497,   841,  1093,
     842,  1124,   288,   605,   583,   841,   503,   605,   381,   759,
     367,   368,  1501,  1502,   449,   450,   504,   760,  1494,  1495,
     733,   735,   736,  1512,   385,  1597,  1600,  1603,  1606,   725,
     784,   785,   389,  1608,   845,   846,   395,   726,   727,   728,
     729,   730,   725,   473,   474,  1506,   894,   895,   731,   732,
     726,   727,   728,   729,   730,   900,   901,   902,   903,   731,
     732,   731,   732,   431,  1491,  1008,  1009,   592,  1054,  1055,
    1108,  1109,  1115,  1116,  1534,   975,   976,  1202,  1203,  1246,
    1247,   594,  -191,  1535,  1393,   601,   360,  1255,  1256,  1266,
    1267,   733,   607,  1270,  1271,   614,  1541,   623,   360,  1557,
    1167,  1341,   625,  1403,   733,  1409,  1410,  1552,   842,   690,
     691,   626,  -191,   645,  1554,   697,   698,   376,   377,   634,
    -191,  -191,   635,   699,   700,  1445,   879,   879,   707,   708,
    1593,  1594,   655,   648,   656,   701,   709,   689,   702,   703,
     922,   923,   719,   704,   720,   737,   787,  1064,   799,   800,
    1588,   789,   801,   802,   806,   807,  1587,   810,   848,   849,
     360,   850,   851,   858,   870,   872,  1065,   874,   875,   501,
     893,   896,  1066,   898,  1012,  1019,  1023,  1025,  1324,  1292,
    1018,  1024,  1327,  1021,  1028,   641,  1058,  1035,   360,   360,
    1036,  1037,  1047,  1048,   360,  1053,  1060,  1062,  1076,   360,
    1077,  1061,   924,   360,  1083,  1339,  1081,  1292,  1082,  1344,
    1345,  1086,  1089,  1091,  1352,   842,   842,  1087,  1104,  1360,
    1092,    81,  1090,  1102,  1166,  1366,  1167,  1368,  1099,  1170,
    1371,  1177,  1188,  1205,  1375,  1210,  1212,  1214,  1226,  1215,
    1379,  1227,   842,  1228,  1381,  1234,   360,  1067,  1068,  1069,
    1070,  1235,  1071,  1072,   925,   926,  1239,  1277,   927,  1241,
    1488,    23,  1245,  1296,  1490,  1300,  1492,  1493,  1302,  1297,
    1301,   842,  1307,   360,  1308,   360,  1317,   928,  1335,   360,
     842,  1363,  1383,  1384,  1398,  1395,  1391,  1340,  1338,  1399,
    1400,  1504,  1408,   842,  1429,  1433,   360,  1434,  1427,   359,
    1435,   359,  1411,  -516,   842,   359,  1436,  1421,  1470,  1474,
    1489,   842,  -191,  1496,  1483,  -191,  -191,  -191,  -191,  1521,
    -191,  -191,   359,  -191,  1555,  1553,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  1455,  1560,  -191,  -191,  -191,  1561,   360,
    -191,  -191,  1568,  1581,  1582,  1609,  -517,  1304,   360,  1134,
    1337,   317,  1358,  1342,   360,  1165,  1515,   527,  1431,   525,
    -191,  -191,  1610,  -191,   539,   563,   560,  1292,   540,  1426,
     526,  1033,  -191,  1213,   541,  -191,  -191,   958,   451,  1472,
     959,   960,   961,   962,   561,   963,  1145,   562,   964,   819,
     816,   965,   966,   967,   968,   969,   970,   971,   564,   565,
     972,   973,   974,   452,   657,  1057,   424,   821,  1240,  1222,
     659,   658,   718,  1146,   692,  1147,  1148,  1149,  1150,  1151,
    1152,  1153,  1583,  1389,  1584,   489,  1487,   432,  1154,  1155,
    1156,  1157,  1158,  1159,   640,   880,  1034,   314,  1063,   639,
     975,   976,  1031,  1160,  1161,  1162,   610,   860,  1075,  1259,
    1074,  1607,   862,  1526,  1533,  1420,  1258,   360,   811,  1276,
    1498,   360,   360,  1248,  1430,     0,     0,   599,     0,     0,
     600,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   359,     0,     0,     0,     0,   360,     0,
     360,     0,     0,   360,   360,     0,     0,   360,     0,     0,
       0,   360,   360,   360,   360,  1536,     0,     0,     0,  1292,
       0,     0,  1509,  1510,     0,     0,  1292,   360,  1542,     0,
    1292,  1292,  1292,  1292,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,     0,     0,     0,   360,     0,     0,
    1563,   319,   320,   321,   322,   323,   324,   325,   326,    33,
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
     356,   357,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1049,
       0,  1050,    22,    23,    24,    25,    26,    27,    28,    29,
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
     183,   184,   185,   186,   187,   188,   189,   190,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   705,     0,     0,     0,    22,    23,    24,    25,    26,
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
      18,     0,    19,    20,    21,   710,     0,     0,     0,     0,
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
     187,   188,   189,   190,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,   717,     0,
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
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     796,     0,     0,     0,    22,    23,    24,    25,    26,    27,
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
       0,     0,     0,   804,     0,     0,     0,    22,    23,    24,
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
      68,   339,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,    78,    79,
      80,     0,     0,    81,    82,    83,    84,     0,     0,    85,
     342,    87,   343,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   344,   345,   101,   346,   103,     0,   104,
     347,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,     0,   138,   139,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   352,   169,   170,   353,   172,
     173,   174,   175,     0,   176,   354,   178,   355,   180,   181,
     182,   183,   184,   185,   186,   356,   357,   189,   190,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
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
     505,   133,   134,   135,   136,   137,     0,   138,   506,   140,
       0,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
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
     129,   130,   131,   528,   133,   134,   135,   136,   137,     0,
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
     126,   127,   128,   129,   130,   131,   542,   133,   134,   135,
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
     123,   124,   125,   126,   127,   128,   129,   130,   131,   566,
     133,   134,   135,   136,   137,     0,   138,   506,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,     0,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   339,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,    78,    79,    80,     0,     0,    81,    82,
      83,    84,     0,     0,    85,   342,    87,   343,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   344,   345,
     101,   346,   103,     0,   104,   347,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   348,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     352,   169,   170,   353,   172,   173,   174,   175,  1218,   176,
     354,   178,   355,   180,   181,   182,   183,   184,   185,   186,
     356,   357,   189,   190,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   834,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   361,   362,
      27,    28,   363,    30,    31,   364,   835,    34,    35,    36,
      37,    38,    39,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   339,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
     340,   341,    80,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   342,    87,   343,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   344,   345,   101,   346,   103,
       0,   104,   347,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   348,   120,   121,   122,
     123,   124,   349,   836,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     365,   142,   837,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   352,   169,   170,
     353,   172,   173,   174,   175,     8,   176,   354,   178,   355,
     180,   181,   182,   183,   184,   185,   186,   356,   357,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,   675,     0,
       0,     0,     0,     0,     0,     0,     0,   676,     0,     0,
     677,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    36,    37,    38,    39,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     339,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   340,   341,    80,
       0,     0,    81,    82,     0,     0,     0,     0,    85,   342,
      87,   343,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   344,   345,   101,     0,   103,     0,   104,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   348,   120,   121,   122,   123,   124,   349,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,     0,   142,     0,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   352,   169,   170,   353,   172,   173,
     174,   175,     8,   176,   354,   178,   355,   180,   181,   182,
     183,   184,   185,   186,   356,   357,   189,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,   675,     0,     0,     0,     0,
       0,     0,     0,     0,   676,     0,     0,     0,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    35,    36,    37,    38,    39,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   339,    70,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,   340,   341,    80,     0,     0,    81,
      82,     0,     0,     0,     0,    85,   342,    87,   343,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   344,
     345,   101,     0,   103,     0,   104,     0,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     348,   120,   121,   122,   123,   124,   349,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,     0,   142,     0,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   352,   169,   170,   353,   172,   173,   174,   175,     0,
     176,   354,   178,   355,   180,   181,   182,   183,   184,   185,
     186,   356,   357,   189,   190,     9,     0,     0,     0,     0,
       0,     0,     0,     0,  1278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1279,     0,     0,     0,
       0,     0,  1280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1281,   362,    27,    28,   363,    30,    31,
     364,    33,    34,    35,    36,    37,    38,    39,  1282,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   339,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   340,   341,    80,     0,     0,
       0,    82,    83,    84,     0,     0,    85,   342,    87,   343,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     344,   345,   101,   346,   103,     0,   104,   347,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   348,   120,   121,   122,   123,   124,   349,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   365,   142,   351,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   352,   169,   170,   353,   172,   173,   174,   175,
       0,   176,   354,   178,   355,   180,   181,  1283,  1284,   184,
     185,   186,   356,   357,   189,   190,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1281,   362,    27,    28,   363,    30,
      31,   364,    33,    34,    35,    36,    37,    38,    39,  1282,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   339,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   340,   341,    80,     0,
       0,     0,    82,    83,    84,     0,     0,    85,   342,    87,
     343,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   344,   345,   101,   346,   103,     0,   104,   347,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   348,   120,   121,   122,   123,   124,   349,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   365,   142,   351,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   352,   169,   170,   353,   172,   173,   174,
     175,     9,   176,   354,   178,   355,   180,   181,   182,   183,
     184,   185,   186,   356,   357,   189,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,    27,    28,   363,    30,    31,   364,    33,    34,    35,
      36,    37,    38,    39,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   339,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   340,   341,    80,     0,     0,     0,    82,    83,    84,
       0,     0,    85,   342,    87,   343,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   344,   345,   101,   346,
     103,     0,   104,   347,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   348,   120,   121,
     122,   123,   124,   349,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   365,   142,   351,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,   586,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   319,   320,   321,   322,   323,   324,
     325,   326,    33,    34,    35,    36,    37,    38,    39,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   339,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   340,   341,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   342,    87,
     343,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   344,   345,   101,   346,   103,     0,   104,   347,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   348,   120,   121,   122,   123,   124,   349,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   350,   142,   351,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   352,   169,   170,   353,   172,   173,   174,
     175,   636,   176,   354,   178,   355,   180,   181,   182,   183,
     184,   185,   186,   356,   357,   189,   190,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   637,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   319,
     320,   321,   322,   323,   324,   325,   326,    33,    34,    35,
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
     122,   123,   124,   349,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   350,   142,   351,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,     0,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,   834,  1229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   361,
     362,    27,    28,   363,    30,    31,   364,   835,    34,    35,
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
     122,   123,   124,   349,   836,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,   365,   142,   837,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   352,   169,
     170,   353,   172,   173,   174,   175,   834,   176,   354,   178,
     355,   180,   181,   182,   183,   184,   185,   186,   356,   357,
     189,   190,     0,   361,   362,    27,    28,   363,    30,    31,
     364,   835,    34,    35,    36,    37,    38,    39,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   339,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   340,   341,    80,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   342,    87,   343,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     344,   345,   101,   346,   103,     0,   104,   347,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   348,   120,   121,   122,   123,   124,   349,   836,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   365,   142,   837,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   352,   169,   170,   353,   172,   173,   174,   175,
     834,   176,   354,   178,   355,   180,   181,   182,   183,   184,
     185,   186,   356,   357,   189,   190,     0,   361,   362,    27,
      28,   363,    30,    31,   364,    33,    34,    35,    36,    37,
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
     124,   349,   836,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,   365,
     142,   837,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   352,   169,   170,   353,
     172,   173,   174,   175,   602,   176,   354,   178,   355,   180,
     181,   182,   183,   184,   185,   186,   356,   357,   189,   190,
     319,   320,   321,   322,   323,   324,   325,   326,    33,    34,
      35,    36,    37,    38,    39,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   339,    70,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,   340,   341,    80,     0,     0,   603,    82,     0,
       0,     0,     0,    85,   342,    87,   343,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   344,   345,   101,
     346,   103,     0,   104,   347,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   348,   120,
     121,   122,   123,   124,   349,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     0,   138,   139,
     140,     0,   350,   142,   351,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   352,
     169,   170,   353,   172,   173,   174,   175,     0,   176,   354,
     178,   355,   180,   181,   182,   183,   184,   185,   186,   356,
     357,   189,   190,   319,   320,   321,   322,   323,   324,   325,
     326,    33,    34,    35,    36,    37,    38,    39,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
      52,    53,    54,    55,    56,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,   339,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,   340,   341,    80,     0,     0,
       0,    82,     0,     0,     0,     0,    85,   342,    87,   343,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     344,   345,   101,   346,   103,     0,   104,   347,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   348,   120,   121,   122,   123,   124,   349,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       0,   138,   139,   140,     0,   350,   142,   351,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   352,   169,   170,   353,   172,   173,   174,   175,
       0,   176,   354,   178,   355,   180,   181,   182,   183,   184,
     185,   186,   356,   357,   189,   190,    34,    35,    36,    37,
      38,    39,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    52,    53,    54,    55,    56,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   339,    70,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,   340,
     341,    80,     0,     0,     0,    82,     0,     0,     0,     0,
      85,   342,    87,   343,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   344,   345,   101,     0,   103,     0,
     104,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   348,   120,   121,   122,   123,
     124,   349,     0,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,     0,   138,   139,   140,     0,     0,
     142,     0,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   352,   169,   170,   353,
     172,   173,   174,   175,     0,   176,   354,   178,   355,   180,
     181,   182,   183,   184,   185,   186,   356,   357,   189,   190,
       0,  1325,     0,     0,   959,   960,   961,   962,     0,   963,
       0,     0,   964,     0,     0,   965,   966,   967,   968,   969,
     970,   971,     0,     0,   972,   973,   974,  1328,     0,     0,
     959,   960,   961,   962,     0,   963,     0,     0,   964,     0,
       0,   965,   966,   967,   968,   969,   970,   971,     0,     0,
     972,   973,   974,     0,     0,     0,     0,     0,     0,     0,
       0,   314,     0,     0,   975,   976,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1347,     0,
       0,   959,   960,   961,   962,     0,   963,   314,     0,   964,
     975,   976,   965,   966,   967,   968,   969,   970,   971,     0,
       0,   972,   973,   974,  1367,     0,     0,   959,   960,   961,
     962,     0,   963,     0,     0,   964,     0,     0,   965,   966,
     967,   968,   969,   970,   971,     0,     0,   972,   973,   974,
       0,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,   975,   976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1369,     0,     0,   959,   960,
     961,   962,     0,   963,   314,     0,   964,   975,   976,   965,
     966,   967,   968,   969,   970,   971,     0,     0,   972,   973,
     974,  1372,     0,     0,   959,   960,   961,   962,     0,   963,
       0,     0,   964,     0,     0,   965,   966,   967,   968,   969,
     970,   971,     0,     0,   972,   973,   974,     0,     0,     0,
       0,     0,     0,     0,     0,   314,     0,     0,   975,   976,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1373,     0,     0,   959,   960,   961,   962,     0,
     963,   314,     0,   964,   975,   976,   965,   966,   967,   968,
     969,   970,   971,     0,     0,   972,   973,   974,  1378,     0,
       0,   959,   960,   961,   962,     0,   963,     0,     0,   964,
       0,     0,   965,   966,   967,   968,   969,   970,   971,     0,
       0,   972,   973,   974,     0,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,   975,   976,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1380,
       0,     0,   959,   960,   961,   962,     0,   963,   314,     0,
     964,   975,   976,   965,   966,   967,   968,   969,   970,   971,
       0,     0,   972,   973,   974,  1382,     0,     0,   959,   960,
     961,   962,     0,   963,     0,     0,   964,     0,     0,   965,
     966,   967,   968,   969,   970,   971,     0,     0,   972,   973,
     974,     0,     0,     0,     0,     0,     0,     0,     0,   314,
       0,     0,   975,   976,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1468,     0,     0,   959,
     960,   961,   962,     0,   963,   314,     0,   964,   975,   976,
     965,   966,   967,   968,   969,   970,   971,     0,     0,   972,
     973,   974,  1469,     0,     0,   959,   960,   961,   962,     0,
     963,     0,     0,   964,     0,     0,   965,   966,   967,   968,
     969,   970,   971,     0,     0,   972,   973,   974,     0,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,   975,
     976,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1481,     0,     0,   959,   960,   961,   962,
       0,   963,   314,     0,   964,   975,   976,   965,   966,   967,
     968,   969,   970,   971,     0,     0,   972,   973,   974,  1537,
       0,     0,   959,   960,   961,   962,     0,   963,     0,     0,
     964,     0,     0,   965,   966,   967,   968,   969,   970,   971,
       0,     0,   972,   973,   974,     0,     0,     0,     0,     0,
       0,     0,     0,   314,     0,     0,   975,   976,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1539,     0,     0,   959,   960,   961,   962,     0,   963,   314,
       0,   964,   975,   976,   965,   966,   967,   968,   969,   970,
     971,     0,     0,   972,   973,   974,  1540,     0,     0,   959,
     960,   961,   962,     0,   963,     0,     0,   964,     0,     0,
     965,   966,   967,   968,   969,   970,   971,     0,     0,   972,
     973,   974,     0,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,   975,   976,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1543,     0,     0,
     959,   960,   961,   962,     0,   963,   314,     0,   964,   975,
     976,   965,   966,   967,   968,   969,   970,   971,     0,     0,
     972,   973,   974,  1544,     0,     0,   959,   960,   961,   962,
       0,   963,     0,     0,   964,     0,     0,   965,   966,   967,
     968,   969,   970,   971,     0,     0,   972,   973,   974,     0,
       0,   959,   960,   961,   962,     0,   963,   314,     0,   964,
     975,   976,   965,   966,   967,   968,   969,   970,   971,     0,
       0,   972,   973,   974,  1576,     0,     0,   959,   960,   961,
     962,     0,   963,   314,     0,   964,   975,   976,   965,   966,
     967,   968,   969,   970,   971,     0,     0,   972,   973,   974,
       0,     0,     0,     0,     0,     0,     0,     0,   314,     0,
       0,   975,   976,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   314,     0,     0,   975,   976
};

static const yytype_int16 yycheck[] =
{
      21,   472,   927,   229,   579,   921,  1048,   472,   504,     8,
     236,    10,   476,   477,   478,   479,   622,   409,   624,  1127,
     304,   627,   414,  1303,   312,   417,   312,   472,   312,   421,
      10,    14,  1070,   312,   646,     8,   915,   679,   680,   681,
     304,     3,     4,     5,   304,   298,   304,   298,   312,   298,
      66,   304,   312,   304,   312,    62,   298,   735,   736,   312,
     472,   312,   508,   509,   510,   304,   512,   513,  1285,    35,
      62,   123,   304,   312,   304,   521,     9,   268,   524,   270,
     312,    10,   312,   529,   530,   531,   532,   533,   534,   535,
     536,    35,   538,    42,   645,    53,   123,   543,   544,   545,
    1438,   547,   548,     9,    35,   102,   298,   123,   554,    62,
     556,   120,   304,   559,    12,   952,   126,   954,     0,    43,
     312,   567,   568,   569,   570,   571,   572,   573,   574,    42,
     576,   242,    42,    12,   123,   243,   381,    50,    51,    36,
      37,    65,    11,   980,   126,     9,     9,   144,   393,   394,
     701,   702,   105,   225,    23,    32,   993,   270,   995,     9,
     997,    38,   999,   173,  1001,   130,   115,    36,  1005,   241,
    1007,   282,    13,    14,    15,    16,    17,    18,   298,   292,
      43,   292,   298,   150,   304,    26,   431,  1103,   304,    11,
     115,   173,   312,    43,   302,    12,   312,  1287,    39,    50,
      51,   183,   211,   212,   675,   115,   677,    35,   298,   108,
     675,   106,   677,    32,   304,   893,   183,   148,   176,    38,
     227,  1559,   312,    50,    51,   831,   132,   905,   227,   725,
     675,   230,   677,   625,   183,   227,   131,    50,    51,   222,
     918,    89,    90,    42,   435,  1124,   175,   227,   439,   641,
     230,    73,   443,   444,   445,   307,   308,   448,   183,   701,
     702,   194,   126,   675,   161,   677,   164,   191,   109,   110,
     111,   112,   113,   114,   720,   219,   242,   565,   562,   565,
     307,   565,   309,   834,  1564,   164,   565,    42,   541,   120,
     541,  1508,   541,  1130,   310,   311,   312,  1134,   562,   541,
      55,   565,   562,   151,   562,   565,   497,   565,    19,   562,
     501,   562,   565,    19,   565,   213,   214,   215,   307,   308,
     148,  1429,   106,   562,   175,   152,   565,   728,   241,   170,
     562,    42,   562,   565,   186,   565,    42,   299,   190,   152,
     162,   163,  1179,   305,   161,    51,   308,   164,   175,   541,
    1440,  1441,  1442,  1443,    42,   203,   204,    50,    51,   207,
     761,   382,   175,    51,   271,   386,  1408,   237,    42,   390,
     562,   241,    42,   565,   205,   396,   375,    51,   226,  1304,
     211,   212,   381,    50,    51,   292,    42,   408,   295,   296,
     389,   412,   413,    89,   393,   394,    92,    93,    94,    95,
     645,   872,   375,   874,   425,   426,   427,   872,  1086,   874,
     409,  1089,  1090,  1451,   271,   414,   389,  1059,   417,   125,
     916,   541,   421,   116,   920,   541,  1104,   872,   619,   874,
      34,    42,   431,  1008,  1009,   292,   409,   125,   629,   630,
      51,   414,   562,   442,   417,   565,   562,    51,   421,   565,
      51,   541,    42,    68,    69,    70,   701,   702,   703,   704,
     872,    51,   874,    42,   655,    23,   152,   488,     9,   442,
      71,    72,   562,   472,  1025,   565,    49,    50,    51,  1085,
      47,  1093,  1319,    50,    51,    43,  1037,   183,  1100,   457,
     458,   459,   460,   461,   462,    19,   464,   465,   466,   467,
     468,   469,   470,   471,  1341,   504,   898,  1344,   175,  1434,
    1435,   242,   127,    19,   125,    56,    57,    58,   249,  1356,
      49,    50,    51,   714,   715,   716,  1363,  1452,  1453,  1567,
    1367,   504,  1448,   271,    12,    26,   222,   223,    29,    30,
      35,   279,    33,    47,   117,   231,    50,    51,   793,   116,
     208,   209,   210,   291,   292,   270,   271,    52,   173,    50,
      51,    71,    72,    35,    42,   263,   181,   182,   183,   184,
     185,   592,    50,    51,   242,   290,   291,  1128,   293,    22,
      52,   249,  1133,  1025,   829,   126,   607,  1138,   117,   834,
      35,  1142,    35,   103,   292,  1037,   271,  1209,  1062,   297,
     298,    35,  1527,    19,  1068,  1076,   281,    52,   138,   224,
      19,  1076,   116,   634,   635,   145,   291,   232,    52,   810,
     235,   180,  1300,  1301,    35,    35,   625,   118,   119,   188,
      35,  1076,   180,    43,  1185,  1472,    35,  1083,  1084,    19,
     188,    52,   641,    35,  1569,   271,   645,    52,    68,    69,
      70,   271,   625,    52,    68,   676,    70,   848,   849,   850,
      52,   191,   192,   193,  1076,   291,   292,   858,   641,   171,
      35,   291,   292,  1285,   269,   177,   675,    27,   677,    32,
     242,    19,   244,   278,    35,    38,  1128,    52,   709,   251,
     252,  1133,   883,    19,    44,   257,  1138,  1309,   666,  1172,
    1142,    52,   701,   702,   703,   704,   268,   127,  1181,  1182,
     292,   220,    22,   127,    19,    35,   298,  1190,    42,   271,
     229,  1194,   304,  1196,  1197,    35,   725,   279,   280,   271,
     312,   730,    52,  1411,    35,   734,   180,   279,   280,   291,
     292,    35,  1293,  1185,   188,    19,    35,   180,    35,   291,
     292,    52,   725,   173,    43,   188,    43,   730,    52,   173,
      51,   181,   182,   183,   184,   185,    35,   181,   182,   183,
     184,   185,   192,   193,    35,    19,    35,    35,   192,   193,
    1025,    35,    35,    52,    43,    43,    19,  1251,  1252,    43,
       9,    52,  1037,    68,   793,    70,    51,    35,  1404,    52,
      56,    57,    58,    35,   224,    43,    35,     9,  1383,  1384,
     224,    43,   232,    19,    43,   235,  1428,   164,   232,   166,
    1212,   235,  1214,    35,   845,   846,  1218,  1018,    35,    51,
     829,    43,  1023,  1024,  1446,   834,    43,  1028,    35,    35,
      35,   292,     9,  1235,   295,    35,    43,    43,    43,  1400,
    1401,  1293,   127,    43,   853,    35,     3,     4,     5,     6,
       7,     8,  1053,    43,    68,    69,    70,   213,   214,   215,
       3,     4,     5,   872,    42,   874,  1427,    68,    42,    70,
     853,    89,   240,  1128,    92,    93,    94,    95,  1133,   132,
    1081,  1082,    46,  1138,    48,   235,  1508,  1142,   173,   898,
      46,    62,    48,   195,  1516,  1456,   181,   182,   183,   184,
     185,   156,  1487,   912,  1465,   165,   166,   916,   106,   107,
      35,   920,  1534,   127,   158,   898,   157,  1478,   133,   169,
     135,   136,   168,   138,   139,   160,   127,    42,  1489,   912,
    1185,   940,   190,   916,    31,  1496,   187,   920,    42,   224,
     123,   124,  1416,  1417,   138,   139,   173,   232,  1400,  1401,
     235,   189,   190,  1434,    42,  1577,  1578,  1579,  1580,   173,
     303,   304,    42,  1585,    50,    51,    42,   181,   182,   183,
     184,   185,   173,    36,    37,  1427,   171,   172,   192,   193,
     181,   182,   183,   184,   185,   171,   172,   121,   122,   192,
     193,   192,   193,    42,  1396,   123,   124,    51,   140,   141,
      87,    88,    87,    88,  1456,   305,   306,   282,   283,   100,
     101,    43,    12,  1465,  1215,    43,  1025,   216,   217,   143,
     144,   235,    51,   178,   179,    43,  1478,    35,  1037,  1503,
     254,   255,     9,  1234,   235,   143,   144,  1489,  1293,   473,
     474,    35,    42,   152,  1496,   480,   481,    16,    17,    51,
      50,    51,    51,   482,   483,  1291,   703,   704,   491,   492,
    1571,  1572,   137,   159,   138,   159,    21,  1076,   152,   152,
      89,    90,    56,   152,   126,    53,   106,    96,    43,    43,
    1561,   107,    43,    43,    43,    43,  1561,    10,   225,    62,
    1099,   152,   225,   137,    91,    24,   115,    25,    86,    42,
      39,   126,   121,     9,   131,   115,    10,   150,  1139,  1099,
     132,   134,  1143,   194,   154,     9,    43,    42,  1127,  1128,
      42,    42,    42,    42,  1133,    35,    98,    97,   134,  1138,
      23,   213,   151,  1142,   126,  1166,   231,  1127,   231,  1170,
    1171,    39,   173,    35,  1175,  1400,  1401,   142,   115,  1180,
     126,   126,   173,   191,   292,  1186,   254,  1188,   236,   294,
    1191,   271,   292,   292,  1195,    43,     9,     9,    43,    10,
    1201,    43,  1427,    43,  1205,   225,  1185,   196,   197,   198,
     199,     9,   201,   202,   203,   204,   225,    35,   207,   142,
    1391,    57,    97,    39,  1395,    35,  1397,  1398,   213,   173,
      39,  1456,   213,  1212,    94,  1214,   251,   226,   123,  1218,
    1465,   264,    45,    45,   155,   132,   134,   294,   242,    43,
     152,  1422,    42,  1478,   236,    19,  1235,    42,   152,  1212,
      42,  1214,   145,    21,  1489,  1218,    12,   200,   123,   242,
     152,  1496,   242,   152,   242,   245,   246,   247,   248,    21,
     250,   251,  1235,   253,    10,   132,   256,   257,   258,   259,
     260,   261,   262,   213,    43,   265,   266,   267,    35,  1278,
     270,   271,   206,    28,   132,    43,    21,   115,  1287,   950,
    1162,     6,  1178,  1168,  1293,   960,  1436,   294,  1278,   293,
     290,   291,   206,   293,   299,   308,   305,  1287,   299,  1273,
     293,   832,   302,  1020,   300,   305,   306,   242,   196,  1340,
     245,   246,   247,   248,   305,   250,   242,   306,   253,   626,
     623,   256,   257,   258,   259,   260,   261,   262,   308,   311,
     265,   266,   267,   196,   453,   858,   100,   628,  1053,  1026,
     456,   455,   501,   269,   475,   271,   272,   273,   274,   275,
     276,   277,  1553,  1209,  1555,   219,  1385,   141,   284,   285,
     286,   287,   288,   289,   432,   704,   834,   302,   872,   431,
     305,   306,   829,   299,   300,   301,   393,   675,   874,  1076,
     873,  1582,   677,  1450,  1455,  1253,  1072,  1396,   618,  1093,
    1405,  1400,  1401,  1067,  1277,    -1,    -1,   387,    -1,    -1,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1396,    -1,    -1,    -1,    -1,  1427,    -1,
    1429,    -1,    -1,  1432,  1433,    -1,    -1,  1436,    -1,    -1,
      -1,  1440,  1441,  1442,  1443,  1466,    -1,    -1,    -1,  1429,
      -1,    -1,  1432,  1433,    -1,    -1,  1436,  1456,  1479,    -1,
    1440,  1441,  1442,  1443,    -1,    -1,  1465,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1478,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1489,    -1,    -1,    -1,    -1,    -1,    -1,  1496,    -1,    -1,
    1521,    59,    60,    61,    62,    63,    64,    65,    66,    67,
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
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,
      -1,   309,    56,    57,    58,    59,    60,    61,    62,    63,
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
      -1,    52,    -1,    -1,    -1,    56,    57,    58,    59,    60,
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
      38,    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
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
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    56,    57,    58,    59,    60,    61,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
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
     218,   219,   220,   221,   222,   223,   224,   225,     9,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    -1,    -1,    -1,   109,   110,
     111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      -1,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,    -1,   187,   188,   189,    -1,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     9,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      54,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,    -1,    -1,    -1,   109,   110,   111,   112,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
      -1,    -1,   126,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    -1,   150,    -1,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
      -1,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,    -1,   187,   188,   189,    -1,    -1,   192,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,     9,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    56,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,    -1,
      -1,    -1,   109,   110,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,   126,
     127,    -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    -1,   150,    -1,   152,    -1,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,    -1,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,    -1,
     187,   188,   189,    -1,    -1,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,    -1,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,   128,   129,    -1,    -1,   132,   133,   134,   135,
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
     236,   237,   238,   239,   240,   241,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    11,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   112,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,    -1,    -1,    -1,   127,   128,   129,
      -1,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,    -1,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,    -1,   187,   188,   189,
      -1,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,    11,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,   112,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,
      -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,    -1,   187,   188,   189,    -1,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,    11,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
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
     220,   221,   222,   223,   224,   225,    -1,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
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
     220,   221,   222,   223,   224,   225,    42,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    -1,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
      -1,   187,   188,   189,    -1,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
      42,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    -1,    59,    60,    61,
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
     222,   223,   224,   225,    43,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,   112,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,    -1,    -1,   126,   127,    -1,
      -1,    -1,    -1,   132,   133,   134,   135,   136,   137,   138,
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
     239,   240,   241,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,   112,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
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
     236,   237,   238,   239,   240,   241,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,    -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,    -1,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,    -1,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    -1,   187,   188,   189,    -1,    -1,
     192,    -1,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,    -1,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
      -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,   267,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   302,    -1,    -1,   305,   306,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   302,    -1,   253,
     305,   306,   256,   257,   258,   259,   260,   261,   262,    -1,
      -1,   265,   266,   267,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,
     258,   259,   260,   261,   262,    -1,    -1,   265,   266,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,   305,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   302,    -1,   253,   305,   306,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
      -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,   267,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,   305,   306,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,   302,    -1,   253,   305,   306,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,   267,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,    -1,    -1,   253,
      -1,    -1,   256,   257,   258,   259,   260,   261,   262,    -1,
      -1,   265,   266,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   302,    -1,    -1,   305,   306,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   302,    -1,
     253,   305,   306,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,    -1,    -1,   253,    -1,    -1,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,   306,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   302,    -1,   253,   305,   306,
     256,   257,   258,   259,   260,   261,   262,    -1,    -1,   265,
     266,   267,   242,    -1,    -1,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,   267,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,   305,
     306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   302,    -1,   253,   305,   306,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,    -1,    -1,
     253,    -1,    -1,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,   305,   306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,    -1,   245,   246,   247,   248,    -1,   250,   302,
      -1,   253,   305,   306,   256,   257,   258,   259,   260,   261,
     262,    -1,    -1,   265,   266,   267,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,    -1,
     256,   257,   258,   259,   260,   261,   262,    -1,    -1,   265,
     266,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,   305,   306,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   302,    -1,   253,   305,
     306,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   267,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   302,    -1,   253,
     305,   306,   256,   257,   258,   259,   260,   261,   262,    -1,
      -1,   265,   266,   267,   242,    -1,    -1,   245,   246,   247,
     248,    -1,   250,   302,    -1,   253,   305,   306,   256,   257,
     258,   259,   260,   261,   262,    -1,    -1,   265,   266,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,
      -1,   305,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   302,    -1,    -1,   305,   306
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   314,     9,    11,
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
     241,   439,   440,   441,   442,   443,   444,   445,   450,   460,
     463,   467,   468,   469,   470,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   505,   506,   507,   508,
     510,   511,   512,   513,   514,   516,   517,   518,   529,   531,
     533,   534,   535,   538,   539,   540,   541,   551,   552,   553,
     554,   555,   556,   557,   559,   561,   563,   598,   599,   600,
     601,   602,   603,   604,   607,   608,   609,   610,   612,   619,
     620,   624,   625,   626,   627,   631,   632,   186,   190,   390,
     391,   392,   393,   406,   409,   397,   398,   399,   400,   406,
     409,   401,   402,   403,   404,   406,   409,   405,   406,   407,
     408,   409,   410,   243,   302,   315,   316,   336,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   104,
     121,   122,   133,   135,   146,   147,   149,   153,   167,   173,
     191,   193,   218,   221,   228,   230,   238,   239,   509,   631,
     632,    59,    60,    63,    66,   191,   500,   123,   124,   519,
     130,   108,   530,   491,   106,   521,   482,   482,    43,   440,
      19,    42,    51,   125,   536,    42,    51,    42,    42,    42,
      51,   125,   542,    42,    42,    42,    51,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    51,     9,
     605,   606,    51,    51,     9,   446,   447,     9,   194,   451,
     452,     9,   461,   462,   461,    42,    42,    51,    71,    72,
      19,    42,   536,    42,   434,    62,   105,    62,   227,    62,
      62,   227,   235,   240,    35,   132,   133,   135,   136,   138,
     139,   445,   450,   453,   454,   156,   157,    13,    14,    15,
      16,    17,    18,    26,    39,   109,   110,   111,   112,   113,
     114,   170,   195,    36,    37,   161,    11,    73,   162,   163,
      12,   164,   165,   166,   158,   169,   160,   168,    51,   487,
     491,    32,    38,   504,   500,   504,   500,    42,   504,   441,
     441,    42,    55,   187,   173,   180,   188,   394,   395,   412,
     414,   415,   416,   417,   419,   420,   421,   424,   425,   426,
     429,   430,   432,   439,   613,   391,   392,   393,   180,   394,
     395,   412,   414,   416,   417,   418,   430,   439,   613,   398,
     399,   400,   180,   411,   412,   414,   415,   416,   417,   419,
     420,   421,   424,   425,   430,   432,   433,   439,   597,   613,
     402,   403,   404,   407,   408,   410,   180,   411,   412,   414,
     416,   417,   418,   430,   433,   439,   613,   317,   337,   520,
     106,   107,   532,    31,   631,    43,    11,    43,   558,   565,
     612,   440,    51,   537,    43,   440,    43,    65,   191,   561,
     563,    43,    43,   126,   611,   631,   440,    51,   543,   560,
     565,   564,   566,   612,    43,   440,   440,   509,    35,   219,
     440,   440,   509,    35,   509,     9,    35,   509,    35,   148,
     148,   440,   440,   440,    51,    51,    11,    43,   562,   566,
     537,     9,    43,   436,   437,   152,   546,   441,   159,   441,
     631,   441,   441,   441,   441,   137,   138,   454,   469,   470,
     472,   472,   472,   472,   472,   472,   471,   472,   472,   472,
     472,   472,   472,   472,   472,    42,    51,    54,   506,   508,
     511,   514,   569,   571,   572,   573,   574,   575,   576,   632,
     475,   475,   474,   476,   476,   476,   476,   477,   477,   478,
     478,   159,   152,   152,   152,    52,   440,   492,   492,    21,
      43,   441,   515,   152,   222,   223,   231,    43,   515,    56,
     126,   611,    68,    70,   127,   173,   181,   182,   183,   184,
     185,   192,   193,   235,   396,   189,   190,    53,   413,   413,
     413,   413,   413,   413,   413,   413,   180,   188,    69,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   180,   224,
     232,   435,   413,   413,   413,   413,   413,   413,   413,   413,
     180,   180,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   269,   278,   318,   303,   304,   339,   106,   521,   107,
     106,   131,   488,    35,    43,    52,    52,   440,    52,    43,
      43,    43,    43,    52,    52,   440,    43,    43,    52,    52,
      10,   606,   441,    52,    52,   546,   447,   546,   509,   452,
     546,   462,   441,   441,    43,    43,    52,   440,   440,    35,
      43,   509,    35,    43,    42,    67,   174,   193,   547,   549,
     550,   551,   612,   628,   630,    50,    51,   438,   225,    62,
     152,   225,   225,   241,   441,   455,   456,   457,   137,   472,
     569,   440,   575,   208,   209,   210,   592,   592,   592,   592,
      91,   596,    24,   570,    25,    86,   547,   547,   544,   550,
     544,    52,   440,    35,    43,   220,   229,   441,   441,   441,
      43,   176,   413,    39,   171,   172,   126,   568,     9,   611,
     171,   172,   121,   122,   138,   145,   191,   396,   171,   177,
     422,   631,   237,   241,   616,   632,   173,   183,   428,   568,
     173,   568,    89,    90,   151,   203,   204,   207,   226,   578,
     579,   580,   581,   582,   585,   590,   591,    71,    72,   103,
     396,   242,   244,   251,   252,   257,   268,   319,   320,   323,
     324,   328,   329,   330,   331,   332,   333,   338,   242,   245,
     246,   247,   248,   250,   253,   256,   257,   258,   259,   260,
     261,   262,   265,   266,   267,   305,   306,   336,   340,   341,
     342,   343,   344,   345,   346,   349,   350,   354,   355,   356,
     360,   361,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   123,   124,
      27,    44,   131,   567,   612,    52,    52,   441,   132,   115,
     448,   194,   449,    10,   134,   150,   464,   466,   154,    52,
      52,   567,   546,   437,   549,    42,    42,    42,    11,    23,
      36,   548,   440,   440,   441,   441,   441,    42,    42,   307,
     309,   621,   631,    35,   140,   141,   458,   455,    43,    52,
      98,   213,    97,   572,    96,   115,   121,   196,   197,   198,
     199,   201,   202,   577,   578,   573,   134,    23,   545,    22,
     441,   231,   231,   126,   568,   509,    39,   142,   568,   173,
     173,    35,   126,   631,   123,   307,   308,   617,   618,   236,
     434,   611,   191,   568,   115,   427,   611,   427,    87,    88,
      89,    92,    93,    94,    95,    87,    88,   610,    89,    92,
      93,    94,    95,   183,   632,   270,   271,   290,   291,   293,
     325,   271,   281,   291,   325,   271,   279,   280,   291,   292,
     339,   271,   291,   292,   339,   242,   269,   271,   272,   273,
     274,   275,   276,   277,   284,   285,   286,   287,   288,   289,
     299,   300,   301,   116,   438,   344,   292,   254,   357,   358,
     294,   292,   295,   339,   270,   292,   348,   271,   351,   263,
     292,   297,   298,   362,   271,   291,   292,   339,   292,   339,
     271,   292,   339,   339,   271,   292,   295,   296,   339,   242,
     282,   292,   282,   283,   339,   292,   339,   521,   521,   528,
      43,   441,     9,   449,     9,    10,   441,   441,     9,   547,
     183,   465,   466,   441,    23,    43,    43,    43,    43,    43,
     547,   629,    52,    52,   225,     9,   622,   623,   622,   225,
     456,   142,   459,   592,   476,    97,   100,   101,   608,   476,
     120,   211,   212,   593,   593,   216,   217,   595,   595,   574,
     441,   441,   413,   413,   546,   568,   143,   144,   568,   568,
     178,   179,   423,    42,   438,   615,   616,    35,    20,    32,
      38,    59,    74,   233,   234,   380,   381,   382,   383,   386,
     387,   388,   500,   152,   175,   438,    39,   173,   427,   568,
      35,    39,   213,    42,   115,   183,   584,   213,    94,   434,
     321,   380,   547,    56,    57,    58,   322,   251,   326,   327,
     339,   547,   339,   547,   440,   242,   547,   440,   242,    66,
     123,   310,   311,   312,   334,   123,   335,   335,   242,   440,
     294,   255,   358,   359,   440,   440,   338,   242,   123,   307,
     309,   347,   440,   242,   249,   352,   353,   242,   352,   339,
     440,   338,   338,   264,   363,   547,   440,   242,   440,   242,
     338,   440,   242,   242,   338,   440,   338,   338,   242,   440,
     242,   440,   242,    45,    45,    33,   118,   119,   438,   517,
     509,   134,   509,   441,   509,   132,     9,   132,   155,    43,
     152,    35,    43,   441,   509,    35,    43,    43,    42,   143,
     144,   145,   213,   214,   215,   594,   102,   144,   476,   476,
     594,   200,    10,   175,   431,    43,   436,   152,   614,   236,
     618,   500,    19,    19,    42,    42,    12,   438,   615,   387,
      32,    38,    32,    38,   389,   504,   547,   568,   568,   183,
     584,   610,    42,   115,   587,   213,   152,   175,   438,   123,
     307,   308,   271,   279,   280,   291,   292,   339,   242,   242,
     123,   242,   440,   339,   242,   339,   271,   279,   291,   292,
     339,   242,   339,   242,   339,   521,   521,   519,   441,   152,
     441,   509,   441,   441,   547,   547,   152,   546,   623,   622,
     568,   476,   476,   161,   441,    43,   547,   438,   380,   500,
     500,   384,   508,   610,   610,   381,   614,   387,   387,   387,
     387,    21,   175,   438,   427,   583,   583,   205,   593,   588,
     610,   610,   586,   586,   547,   547,   440,   242,   339,   242,
     242,   547,   440,   242,   242,    46,    48,   522,    46,    48,
     523,   521,   547,   132,   547,    10,    43,   476,   438,   615,
      43,    35,   438,   440,    35,    43,    43,   610,   206,    35,
      43,   164,   166,   589,   175,   438,   242,   524,   526,   525,
     527,    28,   132,   441,   441,   614,   385,   506,   508,    22,
     584,   593,   610,   587,   587,    47,   116,   438,    49,   117,
     438,    47,   116,   438,    49,   117,   438,   441,   438,    43,
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
#line 756 "../src/parser/XQParser.y"
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

    ASTNode *nameVarRef1 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    XQCallTemplate *call = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate(nameVarRef1, 0, MEMMGR));

    ASTNode *ci = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
    ASTNode *apply = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(ci, 0, 0, MEMMGR));

    ASTNode *nameVarRef2 = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR));
    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(nameVarRef2, call, apply, MEMMGR)));
  }
    break;

  case 9:
#line 783 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:
#line 786 "../src/parser/XQParser.y"
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
  }
    break;

  case 12:
#line 809 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:
#line 813 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 20:
#line 830 "../src/parser/XQParser.y"
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

  case 21:
#line 849 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 22:
#line 853 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 23:
#line 858 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 24:
#line 865 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 25:
#line 870 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 26:
#line 875 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 27:
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 28:
#line 887 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 29:
#line 893 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:
#line 898 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 34:
#line 908 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 35:
#line 921 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 36:
#line 925 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:
#line 932 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 38:
#line 937 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 39:
#line 945 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 40:
#line 949 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 41:
#line 957 "../src/parser/XQParser.y"
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

  case 42:
#line 984 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 43:
#line 988 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 44:
#line 995 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 45:
#line 1001 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 46:
#line 1006 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 47:
#line 1011 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 48:
#line 1020 "../src/parser/XQParser.y"
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

  case 49:
#line 1044 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 50:
#line 1048 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 51:
#line 1055 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 52:
#line 1060 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:
#line 1065 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 54:
#line 1070 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 55:
#line 1081 "../src/parser/XQParser.y"
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

  case 56:
#line 1099 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 57:
#line 1103 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 58:
#line 1110 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 59:
#line 1115 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:
#line 1123 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 61:
#line 1148 "../src/parser/XQParser.y"
    {
  }
    break;

  case 62:
#line 1151 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:
#line 1154 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:
#line 1157 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:
#line 1160 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:
#line 1163 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:
#line 1166 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:
#line 1169 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:
#line 1172 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:
#line 1175 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:
#line 1178 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:
#line 1181 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:
#line 1184 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:
#line 1187 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:
#line 1190 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:
#line 1193 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:
#line 1196 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:
#line 1199 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:
#line 1209 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 84:
#line 1221 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:
#line 1224 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:
#line 1230 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 87:
#line 1240 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 88:
#line 1244 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 89:
#line 1251 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 90:
#line 1260 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 91:
#line 1264 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 92:
#line 1269 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 93:
#line 1282 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 94:
#line 1286 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 95:
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 96:
#line 1296 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 113:
#line 1323 "../src/parser/XQParser.y"
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

  case 114:
#line 1341 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 115:
#line 1345 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 116:
#line 1350 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 117:
#line 1359 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 120:
#line 1368 "../src/parser/XQParser.y"
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

  case 121:
#line 1388 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 122:
#line 1392 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 123:
#line 1397 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 124:
#line 1405 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 125:
#line 1410 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 126:
#line 1414 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 127:
#line 1421 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 128:
#line 1425 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 129:
#line 1433 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 130:
#line 1446 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 131:
#line 1450 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 132:
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 133:
#line 1464 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 134:
#line 1472 "../src/parser/XQParser.y"
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

  case 135:
#line 1490 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 136:
#line 1494 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 137:
#line 1501 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 138:
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 139:
#line 1511 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 140:
#line 1519 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (4)]), (yyvsp[(3) - (4)].astNode));
  }
    break;

  case 141:
#line 1527 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), empty, MEMMGR));
  }
    break;

  case 142:
#line 1535 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 143:
#line 1549 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 144:
#line 1553 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 145:
#line 1567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (5)]), (yyvsp[(3) - (5)].astNode)), (yyvsp[(4) - (5)].parenExpr), 0, MEMMGR));
  }
    break;

  case 146:
#line 1574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 147:
#line 1578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 148:
#line 1585 "../src/parser/XQParser.y"
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

  case 149:
#line 1620 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 150:
#line 1624 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 151:
#line 1629 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 152:
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 153:
#line 1644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 154:
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 155:
#line 1655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 156:
#line 1659 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 157:
#line 1666 "../src/parser/XQParser.y"
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

  case 158:
#line 1684 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 159:
#line 1688 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 160:
#line 1695 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 161:
#line 1700 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 162:
#line 1708 "../src/parser/XQParser.y"
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

  case 163:
#line 1726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 164:
#line 1730 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 165:
#line 1738 "../src/parser/XQParser.y"
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

  case 166:
#line 1760 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 167:
#line 1764 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 168:
#line 1771 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 169:
#line 1779 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 170:
#line 1788 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 171:
#line 1796 "../src/parser/XQParser.y"
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

  case 172:
#line 1833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 173:
#line 1837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 174:
#line 1844 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 175:
#line 1851 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 176:
#line 1860 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 177:
#line 1869 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 178:
#line 1881 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 179:
#line 1885 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 180:
#line 1890 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 181:
#line 1899 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 182:
#line 1912 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 183:
#line 1916 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 184:
#line 1921 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 185:
#line 1930 "../src/parser/XQParser.y"
    {
    // TBD xsl:sort - jpcs
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQMap *map = (XQMap*)(yyval.astNode);
    map->setArg2((yyvsp[(2) - (3)].parenExpr));

    if(map->getArg1() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:for-each instruction does not have a {}select attribute");
    }
  }
    break;

  case 186:
#line 1944 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 187:
#line 1948 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 188:
#line 1961 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 189:
#line 1966 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 190:
#line 1978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 191:
#line 1982 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 192:
#line 1990 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 193:
#line 2003 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 194:
#line 2011 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 195:
#line 2024 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 196:
#line 2031 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 201:
#line 2070 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 202:
#line 2074 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 203:
#line 2078 "../src/parser/XQParser.y"
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

  case 204:
#line 2096 "../src/parser/XQParser.y"
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

  case 205:
#line 2114 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 206:
#line 2124 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 207:
#line 2138 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 208:
#line 2146 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 209:
#line 2152 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 210:
#line 2158 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 211:
#line 2164 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 212:
#line 2175 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 213:
#line 2179 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 221:
#line 2209 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 222:
#line 2213 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 223:
#line 2217 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 224:
#line 2221 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 225:
#line 2225 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 226:
#line 2229 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 227:
#line 2235 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 228:
#line 2241 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 236:
#line 2267 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 237:
#line 2271 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 238:
#line 2275 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 239:
#line 2279 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 249:
#line 2308 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 250:
#line 2312 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 251:
#line 2316 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 252:
#line 2320 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 253:
#line 2324 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 254:
#line 2328 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 255:
#line 2334 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 256:
#line 2340 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 257:
#line 2344 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 265:
#line 2371 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 266:
#line 2375 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 267:
#line 2379 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 268:
#line 2383 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 269:
#line 2387 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:
#line 2391 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 271:
#line 2397 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 272:
#line 2403 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 277:
#line 2422 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 278:
#line 2427 "../src/parser/XQParser.y"
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

  case 281:
#line 2456 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 283:
#line 2470 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 284:
#line 2474 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 285:
#line 2478 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 286:
#line 2482 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 287:
#line 2486 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 288:
#line 2490 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 289:
#line 2496 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 290:
#line 2502 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 291:
#line 2506 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 303:
#line 2538 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 304:
#line 2546 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 305:
#line 2551 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 306:
#line 2560 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 307:
#line 2565 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 308:
#line 2574 "../src/parser/XQParser.y"
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

  case 309:
#line 2634 "../src/parser/XQParser.y"
    {
  }
    break;

  case 310:
#line 2641 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 311:
#line 2646 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 312:
#line 2655 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 313:
#line 2660 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 314:
#line 2669 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 315:
#line 2679 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 316:
#line 2683 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 317:
#line 2691 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 318:
#line 2695 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 319:
#line 2703 "../src/parser/XQParser.y"
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

  case 320:
#line 2719 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 321:
#line 2728 "../src/parser/XQParser.y"
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

  case 322:
#line 2740 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 323:
#line 2748 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 324:
#line 2752 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 325:
#line 2757 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 326:
#line 2766 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 327:
#line 2770 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 328:
#line 2778 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 329:
#line 2788 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 330:
#line 2800 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 331:
#line 2807 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 332:
#line 2811 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 333:
#line 2819 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 334:
#line 2824 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 335:
#line 2834 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 336:
#line 2838 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 337:
#line 2842 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 338:
#line 2846 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 339:
#line 2853 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 340:
#line 2857 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 341:
#line 2863 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 342:
#line 2867 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 343:
#line 2875 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 344:
#line 2880 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 345:
#line 2890 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 346:
#line 2898 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 347:
#line 2902 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 348:
#line 2910 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 349:
#line 2923 "../src/parser/XQParser.y"
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

  case 363:
#line 2961 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 364:
#line 2972 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 365:
#line 2976 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 366:
#line 2980 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 368:
#line 2988 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 369:
#line 2994 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 372:
#line 3007 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 373:
#line 3014 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 375:
#line 3022 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 376:
#line 3033 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 377:
#line 3037 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 378:
#line 3047 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 379:
#line 3051 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 380:
#line 3061 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 381:
#line 3068 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 383:
#line 3076 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 384:
#line 3080 "../src/parser/XQParser.y"
    {
  }
    break;

  case 385:
#line 3087 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 386:
#line 3095 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 387:
#line 3100 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 388:
#line 3108 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 390:
#line 3118 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 391:
#line 3125 "../src/parser/XQParser.y"
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

  case 392:
#line 3140 "../src/parser/XQParser.y"
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

  case 393:
#line 3156 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 394:
#line 3160 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 395:
#line 3164 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 396:
#line 3171 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 397:
#line 3180 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 398:
#line 3184 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 399:
#line 3193 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 400:
#line 3201 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 401:
#line 3212 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 403:
#line 3220 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 404:
#line 3231 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 405:
#line 3238 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 406:
#line 3243 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 407:
#line 3251 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 408:
#line 3255 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 409:
#line 3263 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 410:
#line 3267 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 411:
#line 3275 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 412:
#line 3283 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 414:
#line 3297 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 416:
#line 3316 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:
#line 3320 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:
#line 3323 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 419:
#line 3324 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:
#line 3328 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:
#line 3332 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 422:
#line 3336 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 423:
#line 3340 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 424:
#line 3344 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 425:
#line 3348 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 426:
#line 3352 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 427:
#line 3356 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 428:
#line 3360 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 429:
#line 3364 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 430:
#line 3368 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 431:
#line 3372 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 433:
#line 3381 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 434:
#line 3385 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 436:
#line 3394 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:
#line 3403 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:
#line 3416 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:
#line 3420 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:
#line 3424 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:
#line 3428 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:
#line 3437 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 447:
#line 3441 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 449:
#line 3450 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 450:
#line 3454 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 452:
#line 3463 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 454:
#line 3472 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 456:
#line 3482 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 458:
#line 3491 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 460:
#line 3500 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 461:
#line 3506 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 466:
#line 3527 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 467:
#line 3531 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 468:
#line 3535 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 469:
#line 3543 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 470:
#line 3550 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 473:
#line 3563 "../src/parser/XQParser.y"
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

  case 475:
#line 3584 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 477:
#line 3593 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 478:
#line 3599 "../src/parser/XQParser.y"
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

  case 480:
#line 3624 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 481:
#line 3638 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 482:
#line 3644 "../src/parser/XQParser.y"
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

  case 486:
#line 3665 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 487:
#line 3669 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 488:
#line 3678 "../src/parser/XQParser.y"
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

  case 490:
#line 3701 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 491:
#line 3705 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 492:
#line 3709 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 493:
#line 3713 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 494:
#line 3717 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 495:
#line 3721 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 496:
#line 3725 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 497:
#line 3729 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 498:
#line 3737 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 499:
#line 3745 "../src/parser/XQParser.y"
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

  case 500:
#line 3762 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 502:
#line 3779 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 503:
#line 3783 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 504:
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 505:
#line 3791 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 506:
#line 3795 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 507:
#line 3803 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 508:
#line 3815 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 510:
#line 3825 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 512:
#line 3837 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 513:
#line 3844 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 514:
#line 3851 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 515:
#line 3862 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 516:
#line 3871 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 517:
#line 3875 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 533:
#line 3906 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 535:
#line 3917 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 536:
#line 3921 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 537:
#line 3929 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 538:
#line 3937 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 539:
#line 3947 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 540:
#line 3957 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 541:
#line 3961 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 542:
#line 3968 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 543:
#line 3973 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 544:
#line 3982 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 545:
#line 3986 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 549:
#line 3999 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 550:
#line 4005 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 553:
#line 4018 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 554:
#line 4022 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 555:
#line 4031 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 558:
#line 4047 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 559:
#line 4051 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 560:
#line 4058 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 561:
#line 4062 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 562:
#line 4072 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 563:
#line 4076 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 564:
#line 4081 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 565:
#line 4094 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 566:
#line 4098 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 567:
#line 4102 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 568:
#line 4118 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 569:
#line 4122 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 570:
#line 4127 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 571:
#line 4140 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 572:
#line 4144 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 573:
#line 4148 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 574:
#line 4168 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 575:
#line 4172 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 576:
#line 4177 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 577:
#line 4182 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 578:
#line 4192 "../src/parser/XQParser.y"
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

  case 579:
#line 4208 "../src/parser/XQParser.y"
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

  case 580:
#line 4222 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 582:
#line 4231 "../src/parser/XQParser.y"
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

  case 584:
#line 4253 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 591:
#line 4276 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 592:
#line 4284 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 593:
#line 4292 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 594:
#line 4296 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 595:
#line 4304 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 596:
#line 4308 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 597:
#line 4317 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 598:
#line 4325 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 599:
#line 4333 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 600:
#line 4341 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 601:
#line 4348 "../src/parser/XQParser.y"
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

  case 602:
#line 4361 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 603:
#line 4368 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 604:
#line 4372 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 605:
#line 4380 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 606:
#line 4390 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 607:
#line 4394 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 608:
#line 4402 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 609:
#line 4406 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 610:
#line 4416 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 611:
#line 4423 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 612:
#line 4432 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 613:
#line 4434 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 614:
#line 4436 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 615:
#line 4438 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 616:
#line 4444 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 617:
#line 4448 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 631:
#line 4483 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 632:
#line 4491 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 633:
#line 4495 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 634:
#line 4500 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 635:
#line 4509 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 636:
#line 4517 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 637:
#line 4525 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 638:
#line 4529 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 639:
#line 4533 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 640:
#line 4541 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 641:
#line 4545 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 642:
#line 4549 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 644:
#line 4558 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 645:
#line 4566 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 647:
#line 4579 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 648:
#line 4583 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 649:
#line 4587 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 650:
#line 4591 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 652:
#line 4601 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 653:
#line 4609 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 658:
#line 4629 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 659:
#line 4641 "../src/parser/XQParser.y"
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

  case 660:
#line 4653 "../src/parser/XQParser.y"
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

  case 661:
#line 4668 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 662:
#line 4672 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 663:
#line 4676 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 664:
#line 4686 "../src/parser/XQParser.y"
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

  case 666:
#line 4702 "../src/parser/XQParser.y"
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

  case 668:
#line 4718 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 670:
#line 4727 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 672:
#line 4736 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 674:
#line 4745 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 675:
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 676:
#line 4753 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 677:
#line 4757 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 678:
#line 4761 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 679:
#line 4775 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 680:
#line 4779 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 681:
#line 4783 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 682:
#line 4787 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 683:
#line 4792 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 684:
#line 4796 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 685:
#line 4800 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 686:
#line 4804 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 687:
#line 4808 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 695:
#line 4836 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 696:
#line 4840 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 697:
#line 4844 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 698:
#line 4848 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 699:
#line 4859 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 700:
#line 4863 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 701:
#line 4867 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 702:
#line 4871 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 703:
#line 4879 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 704:
#line 4883 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 705:
#line 4893 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 706:
#line 4897 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 707:
#line 4901 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 708:
#line 4905 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 709:
#line 4909 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 710:
#line 4916 "../src/parser/XQParser.y"
    {
  }
    break;

  case 711:
#line 4919 "../src/parser/XQParser.y"
    {
  }
    break;

  case 712:
#line 4926 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 713:
#line 4930 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 714:
#line 4934 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 715:
#line 4938 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 716:
#line 4948 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 717:
#line 4952 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 718:
#line 4956 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 719:
#line 4963 "../src/parser/XQParser.y"
    {
  }
    break;

  case 720:
#line 4966 "../src/parser/XQParser.y"
    {
  }
    break;

  case 721:
#line 4974 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 722:
#line 4978 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 723:
#line 4985 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 724:
#line 4989 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 725:
#line 4997 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 726:
#line 5001 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 727:
#line 5009 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 728:
#line 5017 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 729:
#line 5021 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 730:
#line 5029 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 731:
#line 5033 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 732:
#line 5037 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 733:
#line 5041 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 734:
#line 5045 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 735:
#line 5049 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 736:
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 737:
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 738:
#line 5072 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 739:
#line 5078 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 740:
#line 5088 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 741:
#line 5092 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 742:
#line 5096 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 743:
#line 5104 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 744:
#line 5108 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 745:
#line 5116 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 746:
#line 5124 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 747:
#line 5129 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 748:
#line 5134 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 749:
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 750:
#line 5150 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 751:
#line 5154 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 752:
#line 5158 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 753:
#line 5162 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 756:
#line 5173 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 759:
#line 5184 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 760:
#line 5188 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 761:
#line 5198 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 762:
#line 5206 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 763:
#line 5213 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 764:
#line 5218 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 765:
#line 5226 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 766:
#line 5235 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 767:
#line 5248 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 768:
#line 5261 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 769:
#line 5275 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 770:
#line 5287 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 771:
#line 5296 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 772:
#line 5308 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 773:
#line 5312 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 774:
#line 5316 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 775:
#line 5321 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 776:
#line 5326 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 777:
#line 5331 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 778:
#line 5339 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 779:
#line 5343 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 780:
#line 5351 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 781:
#line 5355 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 782:
#line 5362 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 783:
#line 5367 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 784:
#line 5375 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 785:
#line 5380 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 786:
#line 5389 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 787:
#line 5393 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 788:
#line 5397 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 789:
#line 5405 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 790:
#line 5409 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 791:
#line 5417 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 792:
#line 5421 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 793:
#line 5425 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 794:
#line 5429 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 795:
#line 5437 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 796:
#line 5441 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 797:
#line 5445 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 798:
#line 5453 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 799:
#line 5458 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 800:
#line 5468 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 803:
#line 5485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 804:
#line 5493 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 805:
#line 5502 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 806:
#line 5507 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 807:
#line 5516 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 808:
#line 5520 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 809:
#line 5524 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 810:
#line 5531 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 811:
#line 5536 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 812:
#line 5545 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 10552 "../src/parser/XQParser.cpp"
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


#line 5579 "../src/parser/XQParser.y"


}  // namespace XQParser


