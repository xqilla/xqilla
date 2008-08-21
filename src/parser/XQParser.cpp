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
     _XSLT_IMPORT_SCHEMA_ = 524,
     _XSLT_VERSION_ = 525,
     _XSLT_MODE_ = 526,
     _XSLT_NAME_ = 527,
     _XSLT_DOCTYPE_PUBLIC_ = 528,
     _XSLT_DOCTYPE_SYSTEM_ = 529,
     _XSLT_ENCODING_ = 530,
     _XSLT_MEDIA_TYPE_ = 531,
     _XSLT_NORMALIZATION_FORM_ = 532,
     _XSLT_STANDALONE_ = 533,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 534,
     _XSLT_NAMESPACE_STR_ = 535,
     _XSLT_SCHEMA_LOCATION_ = 536,
     _XSLT_TUNNEL_ = 537,
     _XSLT_REQUIRED_ = 538,
     _XSLT_OVERRIDE_ = 539,
     _XSLT_COPY_NAMESPACES_ = 540,
     _XSLT_INHERIT_NAMESPACES_ = 541,
     _XSLT_BYTE_ORDER_MARK_ = 542,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 543,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 544,
     _XSLT_INDENT_ = 545,
     _XSLT_OMIT_XML_DECLARATION_ = 546,
     _XSLT_UNDECLARE_PREFIXES_ = 547,
     _XSLT_MATCH_ = 548,
     _XSLT_AS_ = 549,
     _XSLT_SELECT_ = 550,
     _XSLT_PRIORITY_ = 551,
     _XSLT_TEST_ = 552,
     _XSLT_SEPARATOR_ = 553,
     _XSLT_NAMESPACE_A_ = 554,
     _XSLT_REGEX_ = 555,
     _XSLT_FLAGS_ = 556,
     _XSLT_METHOD_ = 557,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 558,
     _XSLT_USE_CHARACTER_MAPS_ = 559,
     _XSLT_ELEMENT_NAME_ = 560,
     _XSLT_XMLNS_ATTR_ = 561,
     _XSLT_ATTR_NAME_ = 562,
     _XSLT_TEXT_NODE_ = 563,
     _XSLT_WS_TEXT_NODE_ = 564,
     _HASH_DEFAULT_ = 565,
     _HASH_ALL_ = 566,
     _HASH_CURRENT_ = 567,
     _XML_ = 568,
     _HTML_ = 569,
     _XHTML_ = 570
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
#define _XSLT_IMPORT_SCHEMA_ 524
#define _XSLT_VERSION_ 525
#define _XSLT_MODE_ 526
#define _XSLT_NAME_ 527
#define _XSLT_DOCTYPE_PUBLIC_ 528
#define _XSLT_DOCTYPE_SYSTEM_ 529
#define _XSLT_ENCODING_ 530
#define _XSLT_MEDIA_TYPE_ 531
#define _XSLT_NORMALIZATION_FORM_ 532
#define _XSLT_STANDALONE_ 533
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 534
#define _XSLT_NAMESPACE_STR_ 535
#define _XSLT_SCHEMA_LOCATION_ 536
#define _XSLT_TUNNEL_ 537
#define _XSLT_REQUIRED_ 538
#define _XSLT_OVERRIDE_ 539
#define _XSLT_COPY_NAMESPACES_ 540
#define _XSLT_INHERIT_NAMESPACES_ 541
#define _XSLT_BYTE_ORDER_MARK_ 542
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 543
#define _XSLT_INCLUDE_CONTENT_TYPE_ 544
#define _XSLT_INDENT_ 545
#define _XSLT_OMIT_XML_DECLARATION_ 546
#define _XSLT_UNDECLARE_PREFIXES_ 547
#define _XSLT_MATCH_ 548
#define _XSLT_AS_ 549
#define _XSLT_SELECT_ 550
#define _XSLT_PRIORITY_ 551
#define _XSLT_TEST_ 552
#define _XSLT_SEPARATOR_ 553
#define _XSLT_NAMESPACE_A_ 554
#define _XSLT_REGEX_ 555
#define _XSLT_FLAGS_ 556
#define _XSLT_METHOD_ 557
#define _XSLT_CDATA_SECTION_ELEMENTS_ 558
#define _XSLT_USE_CHARACTER_MAPS_ 559
#define _XSLT_ELEMENT_NAME_ 560
#define _XSLT_XMLNS_ATTR_ 561
#define _XSLT_ATTR_NAME_ 562
#define _XSLT_TEXT_NODE_ 563
#define _XSLT_WS_TEXT_NODE_ 564
#define _HASH_DEFAULT_ 565
#define _HASH_ALL_ 566
#define _HASH_CURRENT_ 567
#define _XML_ 568
#define _HTML_ 569
#define _XHTML_ 570




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
      if(prefix == 0 || *prefix == 0)
        uri = CONTEXT->getDefaultElementAndTypeNS();
      else uri = CONTEXT->getNSResolver()->lookupNamespaceURI(prefix);
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
#line 1063 "../src/parser/XQParser.cpp"

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
#define YYLAST   8200

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  316
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  325
/* YYNRULES -- Number of rules.  */
#define YYNRULES  986
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1622

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   570

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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      28,    30,    31,    34,    37,    38,    41,    44,    47,    50,
      53,    56,    61,    63,    67,    70,    74,    78,    82,    83,
      86,    89,    92,    94,    96,    98,   103,   105,   108,   112,
     115,   116,   119,   123,   125,   128,   132,   136,   139,   142,
     146,   148,   151,   155,   159,   162,   165,   169,   171,   174,
     178,   182,   185,   187,   190,   194,   197,   201,   204,   207,
     210,   213,   216,   219,   222,   225,   228,   231,   234,   238,
     241,   243,   245,   247,   249,   251,   253,   256,   259,   261,
     264,   267,   271,   275,   280,   281,   285,   288,   289,   292,
     295,   296,   299,   302,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   341,   343,   347,   351,   355,   357,   359,   363,   365,
     369,   373,   375,   377,   379,   380,   383,   387,   389,   392,
     393,   396,   400,   402,   405,   409,   413,   416,   419,   423,
     427,   431,   436,   438,   441,   445,   449,   450,   454,   459,
     461,   465,   469,   473,   474,   478,   479,   483,   488,   490,
     493,   497,   501,   505,   507,   511,   515,   517,   521,   525,
     529,   531,   535,   537,   541,   545,   549,   553,   556,   558,
     562,   565,   569,   571,   574,   577,   581,   583,   587,   591,
     593,   595,   597,   599,   601,   603,   608,   615,   617,   619,
     621,   623,   625,   628,   632,   636,   640,   644,   647,   649,
     653,   657,   660,   661,   666,   669,   672,   674,   676,   679,
     682,   683,   687,   691,   695,   699,   703,   707,   711,   715,
     717,   719,   721,   723,   725,   727,   729,   735,   743,   749,
     757,   759,   761,   764,   767,   769,   771,   774,   777,   778,
     782,   786,   790,   794,   798,   802,   806,   810,   814,   817,
     820,   822,   824,   827,   830,   831,   835,   839,   843,   847,
     851,   855,   859,   863,   866,   869,   871,   873,   878,   885,
     888,   891,   898,   899,   903,   907,   911,   915,   919,   923,
     927,   931,   935,   937,   939,   941,   943,   945,   947,   949,
     951,   953,   955,   957,   963,   967,   971,   977,   983,   988,
     992,   996,  1000,  1006,  1012,  1018,  1020,  1022,  1024,  1026,
    1031,  1035,  1041,  1046,  1047,  1050,  1054,  1058,  1062,  1070,
    1075,  1082,  1085,  1087,  1091,  1095,  1102,  1111,  1118,  1127,
    1130,  1134,  1135,  1137,  1141,  1143,  1147,  1151,  1155,  1157,
    1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,
    1181,  1183,  1185,  1187,  1191,  1195,  1198,  1201,  1203,  1206,
    1209,  1211,  1213,  1216,  1220,  1222,  1230,  1231,  1235,  1236,
    1240,  1243,  1247,  1249,  1256,  1262,  1265,  1269,  1274,  1278,
    1280,  1284,  1290,  1292,  1293,  1295,  1297,  1298,  1301,  1304,
    1309,  1314,  1318,  1320,  1326,  1333,  1336,  1338,  1344,  1348,
    1353,  1361,  1370,  1374,  1376,  1380,  1382,  1386,  1390,  1391,
    1396,  1400,  1404,  1408,  1412,  1416,  1420,  1424,  1428,  1432,
    1436,  1440,  1444,  1446,  1450,  1455,  1457,  1461,  1463,  1467,
    1471,  1473,  1477,  1481,  1485,  1489,  1491,  1495,  1499,  1501,
    1505,  1509,  1511,  1516,  1518,  1523,  1525,  1530,  1532,  1537,
    1539,  1542,  1545,  1547,  1549,  1551,  1553,  1558,  1564,  1570,
    1574,  1579,  1581,  1584,  1589,  1591,  1594,  1596,  1599,  1602,
    1604,  1606,  1610,  1614,  1616,  1618,  1620,  1623,  1626,  1629,
    1631,  1634,  1637,  1640,  1643,  1646,  1649,  1652,  1655,  1658,
    1660,  1663,  1665,  1668,  1671,  1674,  1677,  1680,  1682,  1684,
    1686,  1688,  1690,  1692,  1694,  1696,  1699,  1700,  1705,  1707,
    1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,  1727,
    1729,  1731,  1733,  1735,  1738,  1740,  1744,  1747,  1749,  1754,
    1759,  1763,  1768,  1772,  1774,  1776,  1778,  1780,  1782,  1784,
    1790,  1801,  1803,  1805,  1806,  1814,  1822,  1823,  1825,  1829,
    1833,  1837,  1841,  1842,  1845,  1848,  1849,  1852,  1855,  1856,
    1859,  1862,  1863,  1866,  1869,  1870,  1873,  1876,  1879,  1882,
    1886,  1887,  1889,  1893,  1895,  1898,  1900,  1902,  1904,  1906,
    1908,  1910,  1915,  1919,  1921,  1925,  1928,  1932,  1936,  1941,
    1946,  1950,  1952,  1956,  1959,  1963,  1966,  1967,  1969,  1970,
    1973,  1976,  1980,  1981,  1983,  1985,  1987,  1989,  1993,  1995,
    1997,  1999,  2001,  2003,  2005,  2007,  2009,  2011,  2013,  2015,
    2017,  2019,  2023,  2027,  2032,  2037,  2041,  2045,  2049,  2054,
    2059,  2063,  2068,  2075,  2077,  2079,  2084,  2086,  2090,  2095,
    2102,  2110,  2112,  2114,  2119,  2121,  2123,  2125,  2127,  2129,
    2134,  2137,  2138,  2141,  2144,  2148,  2150,  2154,  2156,  2161,
    2163,  2166,  2168,  2172,  2174,  2177,  2180,  2183,  2186,  2191,
    2193,  2197,  2201,  2205,  2208,  2211,  2214,  2217,  2220,  2222,
    2224,  2226,  2228,  2230,  2232,  2234,  2236,  2238,  2241,  2244,
    2247,  2250,  2253,  2256,  2259,  2262,  2266,  2270,  2277,  2284,
    2287,  2288,  2292,  2295,  2300,  2305,  2312,  2318,  2322,  2328,
    2329,  2332,  2335,  2339,  2341,  2345,  2348,  2351,  2354,  2357,
    2360,  2361,  2363,  2366,  2368,  2371,  2373,  2376,  2380,  2384,
    2389,  2391,  2393,  2395,  2397,  2399,  2403,  2407,  2411,  2415,
    2422,  2429,  2434,  2439,  2444,  2447,  2450,  2453,  2456,  2459,
    2467,  2473,  2479,  2486,  2490,  2492,  2497,  2499,  2501,  2503,
    2505,  2507,  2509,  2515,  2523,  2532,  2543,  2550,  2559,  2560,
    2563,  2566,  2570,  2571,  2574,  2576,  2580,  2582,  2584,  2586,
    2590,  2598,  2602,  2610,  2616,  2626,  2628,  2630,  2632,  2634,
    2638,  2644,  2646,  2648,  2652,  2657,  2661,  2666,  2670,  2676,
    2683,  2685,  2689,  2693,  2695,  2697,  2699,  2701,  2703,  2705,
    2707,  2709,  2711,  2713,  2715,  2717,  2719,  2721,  2723,  2725,
    2727,  2729,  2731,  2733,  2735,  2737,  2739,  2741,  2743,  2745,
    2747,  2749,  2751,  2753,  2755,  2757,  2759,  2761,  2763,  2765,
    2767,  2769,  2771,  2773,  2775,  2777,  2779,  2781,  2783,  2785,
    2787,  2789,  2791,  2793,  2795,  2797,  2799,  2801,  2803,  2805,
    2807,  2809,  2811,  2813,  2815,  2817,  2819,  2821,  2823,  2825,
    2827,  2829,  2831,  2833,  2835,  2837,  2839,  2841,  2843,  2845,
    2847,  2849,  2851,  2853,  2855,  2857,  2859,  2861,  2863,  2865,
    2867,  2869,  2871,  2873,  2875,  2877,  2879,  2881,  2883,  2885,
    2887,  2889,  2891,  2893,  2895,  2897,  2899,  2901,  2903,  2905,
    2907,  2909,  2911,  2913,  2915,  2917,  2919,  2921,  2923,  2925,
    2927,  2929,  2931,  2933,  2935,  2937,  2939,  2941,  2943,  2945,
    2947,  2949,  2951,  2953,  2955,  2957,  2959,  2961,  2963,  2965,
    2967,  2969,  2971,  2973,  2975,  2977,  2979,  2981,  2983,  2985,
    2987,  2989,  2991,  2993,  2995,  2997,  2999,  3001,  3003,  3005,
    3007,  3009,  3011,  3013,  3015,  3017,  3019
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     317,     0,    -1,     3,   447,    -1,     4,   398,    -1,     5,
     405,    -1,     6,   409,    -1,     7,   413,    -1,     8,   318,
      -1,   319,    -1,   243,   320,   321,   242,    -1,   341,    -1,
      -1,   320,   270,    -1,   320,   279,    -1,    -1,   321,   322,
      -1,   321,   326,    -1,   321,   331,    -1,   321,   333,    -1,
     321,   335,    -1,   321,   339,    -1,   323,   328,   344,   242,
      -1,   244,    -1,   323,   293,   388,    -1,   323,   272,    -1,
     323,   296,   325,    -1,   323,   271,   324,    -1,   323,   294,
     555,    -1,    -1,   324,   123,    -1,   324,   310,    -1,   324,
     311,    -1,    56,    -1,    57,    -1,    58,    -1,   327,   328,
     344,   242,    -1,   252,    -1,   327,   272,    -1,   327,   294,
     555,    -1,   327,   284,    -1,    -1,   328,   329,    -1,   330,
     344,   242,    -1,   251,    -1,   330,   272,    -1,   330,   295,
     448,    -1,   330,   294,   555,    -1,   330,   283,    -1,   330,
     282,    -1,   332,   344,   242,    -1,   251,    -1,   332,   272,
      -1,   332,   295,   448,    -1,   332,   294,   555,    -1,   332,
     283,    -1,   332,   282,    -1,   334,   344,   242,    -1,   257,
      -1,   334,   272,    -1,   334,   295,   448,    -1,   334,   294,
     555,    -1,   336,   242,    -1,   268,    -1,   336,   272,    -1,
     336,   302,   337,    -1,   336,   287,    -1,   336,   303,   338,
      -1,   336,   273,    -1,   336,   274,    -1,   336,   275,    -1,
     336,   288,    -1,   336,   289,    -1,   336,   290,    -1,   336,
     276,    -1,   336,   277,    -1,   336,   291,    -1,   336,   278,
      -1,   336,   292,    -1,   336,   304,   338,    -1,   336,   270,
      -1,   313,    -1,   314,    -1,   315,    -1,    66,    -1,   123,
      -1,   123,    -1,   338,   123,    -1,   340,   242,    -1,   269,
      -1,   269,   280,    -1,   269,   281,    -1,   269,   280,   281,
      -1,   269,   281,   280,    -1,   305,   342,   344,   242,    -1,
      -1,   342,   307,   343,    -1,   342,   306,    -1,    -1,   343,
     446,    -1,   343,   116,    -1,    -1,   344,   349,    -1,   344,
     341,    -1,   344,   345,    -1,   346,    -1,   348,    -1,   350,
      -1,   354,    -1,   359,    -1,   363,    -1,   361,    -1,   372,
      -1,   374,    -1,   376,    -1,   378,    -1,   380,    -1,   368,
      -1,   382,    -1,   384,    -1,   386,    -1,   347,   344,   242,
      -1,   245,    -1,   347,   295,   448,    -1,   347,   298,   343,
      -1,   246,   349,   242,    -1,   308,    -1,   309,    -1,   351,
     353,   242,    -1,   247,    -1,   351,   295,   448,    -1,   351,
     271,   352,    -1,   123,    -1,   310,    -1,   312,    -1,    -1,
     353,   357,    -1,   355,   356,   242,    -1,   248,    -1,   355,
     272,    -1,    -1,   356,   357,    -1,   358,   344,   242,    -1,
     249,    -1,   358,   272,    -1,   358,   295,   448,    -1,   358,
     294,   555,    -1,   358,   282,    -1,   360,   242,    -1,   250,
     295,   448,    -1,   362,   344,   242,    -1,   256,   297,   448,
      -1,   253,   364,   367,   242,    -1,   365,    -1,   364,   365,
      -1,   366,   344,   242,    -1,   254,   297,   448,    -1,    -1,
     255,   344,   242,    -1,   369,   370,   371,   242,    -1,   262,
      -1,   369,   295,   448,    -1,   369,   300,   343,    -1,   369,
     301,   343,    -1,    -1,   263,   344,   242,    -1,    -1,   264,
     344,   242,    -1,   373,   344,   242,   344,    -1,   257,    -1,
     373,   272,    -1,   373,   295,   448,    -1,   373,   294,   555,
      -1,   375,   344,   242,    -1,   258,    -1,   375,   295,   448,
      -1,   377,   344,   242,    -1,   259,    -1,   377,   272,   343,
      -1,   377,   295,   448,    -1,   379,   344,   242,    -1,   260,
      -1,   381,   344,   242,    -1,   261,    -1,   381,   272,   343,
      -1,   381,   299,   343,    -1,   381,   295,   448,    -1,   381,
     298,   343,    -1,   383,   242,    -1,   265,    -1,   383,   295,
     448,    -1,   383,   285,    -1,   385,   344,   242,    -1,   266,
      -1,   385,   285,    -1,   385,   286,    -1,   387,   344,   242,
      -1,   267,    -1,   387,   295,   448,    -1,   388,    12,   389,
      -1,   389,    -1,   394,    -1,    38,    -1,   391,    -1,    38,
      -1,    32,    -1,   233,    42,   392,    43,    -1,   234,    42,
     618,    35,   393,    43,    -1,   618,    -1,   516,    -1,   514,
      -1,   516,    -1,   395,    -1,   390,   395,    -1,   391,    38,
     395,    -1,   391,    32,   395,    -1,   394,    38,   395,    -1,
     394,    32,   395,    -1,   396,   397,    -1,   508,    -1,    74,
      19,   508,    -1,    59,    19,   508,    -1,    20,   508,    -1,
      -1,   512,    21,   448,    22,    -1,   414,   399,    -1,   414,
     400,    -1,   399,    -1,   400,    -1,   401,   447,    -1,   417,
     401,    -1,    -1,   401,   402,   421,    -1,   401,   420,   421,
      -1,   401,   422,   421,    -1,   401,   424,   421,    -1,   401,
     438,   421,    -1,   401,   403,   421,    -1,   401,   621,   421,
      -1,   401,   425,   421,    -1,   423,    -1,   432,    -1,   433,
      -1,   440,    -1,   427,    -1,   428,    -1,   429,    -1,   180,
     404,   640,   442,   446,    -1,   180,   404,   640,   442,   152,
     555,   446,    -1,   180,   404,   640,   442,   175,    -1,   180,
     404,   640,   442,   152,   555,   175,    -1,   192,    -1,   193,
      -1,   414,   406,    -1,   414,   407,    -1,   406,    -1,   407,
      -1,   408,   447,    -1,   417,   408,    -1,    -1,   408,   402,
     421,    -1,   408,   420,   421,    -1,   408,   422,   421,    -1,
     408,   424,   421,    -1,   408,   438,   421,    -1,   408,   403,
     421,    -1,   408,   621,   421,    -1,   408,   425,   421,    -1,
     408,   426,   421,    -1,   414,   410,    -1,   414,   411,    -1,
     410,    -1,   411,    -1,   412,   447,    -1,   417,   412,    -1,
      -1,   412,   419,   421,    -1,   412,   420,   421,    -1,   412,
     422,   421,    -1,   412,   424,   421,    -1,   412,   438,   421,
      -1,   412,   441,   421,    -1,   412,   621,   421,    -1,   412,
     425,   421,    -1,   414,   415,    -1,   414,   416,    -1,   415,
      -1,   416,    -1,   186,   187,   126,   421,    -1,   186,   187,
     126,   176,   126,   421,    -1,   418,   447,    -1,   417,   418,
      -1,   190,   173,   619,    39,   576,   421,    -1,    -1,   418,
     419,   421,    -1,   418,   420,   421,    -1,   418,   422,   421,
      -1,   418,   424,   421,    -1,   418,   438,   421,    -1,   418,
     441,   421,    -1,   418,   621,   421,    -1,   418,   425,   421,
      -1,   418,   426,   421,    -1,   423,    -1,   432,    -1,   433,
      -1,   440,    -1,   427,    -1,   428,    -1,   605,    -1,   429,
      -1,   434,    -1,   437,    -1,    53,    -1,   180,   173,   619,
      39,   576,    -1,   180,    68,   171,    -1,   180,    68,   172,
      -1,   180,   183,   191,   173,   576,    -1,   180,   183,   404,
     173,   576,    -1,   180,   185,   639,   126,    -1,   180,    69,
     586,    -1,   180,   182,   121,    -1,   180,   182,   122,    -1,
     180,   183,   138,   142,   143,    -1,   180,   183,   138,   142,
     144,    -1,   180,   184,   430,    35,   431,    -1,   171,    -1,
     177,    -1,   178,    -1,   179,    -1,   180,   183,   145,   576,
      -1,   180,    70,   576,    -1,   188,   189,   436,   576,   435,
      -1,   188,   189,   576,   435,    -1,    -1,   115,   576,    -1,
     435,    35,   576,    -1,   173,   619,    39,    -1,   183,   191,
     173,    -1,   188,   190,   173,   619,    39,   576,   435,    -1,
     188,   190,   576,   435,    -1,   180,   127,     9,   517,   554,
     439,    -1,    10,   449,    -1,   175,    -1,   180,   181,   171,
      -1,   180,   181,   172,    -1,   180,   443,   404,   640,   442,
     446,    -1,   180,   443,   404,   640,   442,   152,   555,   446,
      -1,   180,   443,   404,   640,   442,   175,    -1,   180,   443,
     404,   640,   442,   152,   555,   175,    -1,    42,    43,    -1,
      42,   444,    43,    -1,    -1,   232,    -1,   444,    35,   445,
      -1,   445,    -1,     9,   517,   554,    -1,    50,   448,    52,
      -1,    51,   448,    52,    -1,   448,    -1,   448,    35,   449,
      -1,   449,    -1,   450,    -1,   468,    -1,   471,    -1,   475,
      -1,   606,    -1,   608,    -1,   611,    -1,   610,    -1,   612,
      -1,   476,    -1,   627,    -1,   628,    -1,   451,   132,   449,
      -1,   452,   461,   462,    -1,   452,   461,    -1,   452,   462,
      -1,   452,    -1,   452,   453,    -1,   452,   458,    -1,   453,
      -1,   458,    -1,   133,   454,    -1,   454,    35,   455,    -1,
     455,    -1,     9,   517,   554,   456,   457,   134,   449,    -1,
      -1,   115,     9,   517,    -1,    -1,   194,     9,   517,    -1,
     135,   459,    -1,   459,    35,   460,    -1,   460,    -1,     9,
     517,   554,   457,    10,   449,    -1,   194,     9,   517,    10,
     449,    -1,   136,   449,    -1,   138,   137,   463,    -1,   139,
     138,   137,   463,    -1,   463,    35,   464,    -1,   464,    -1,
     465,   466,   467,    -1,   465,   466,   467,   145,   576,    -1,
     449,    -1,    -1,   140,    -1,   141,    -1,    -1,   142,   143,
      -1,   142,   144,    -1,   146,   469,   148,   449,    -1,   147,
     469,   148,   449,    -1,   469,    35,   470,    -1,   470,    -1,
       9,   517,   554,   134,   449,    -1,   149,    42,   448,    43,
     472,   473,    -1,   472,   474,    -1,   474,    -1,   183,     9,
     517,   132,   449,    -1,   183,   132,   449,    -1,   150,   555,
     132,   449,    -1,   150,     9,   517,   152,   555,   132,   449,
      -1,   153,    42,   448,    43,   154,   449,   155,   449,    -1,
     476,   156,   477,    -1,   477,    -1,   477,   157,   478,    -1,
     478,    -1,   480,    39,   480,    -1,   480,    13,   480,    -1,
      -1,   480,    26,   479,   480,    -1,   480,    14,   480,    -1,
     480,    15,   480,    -1,   480,    16,   480,    -1,   480,   109,
     480,    -1,   480,   110,   480,    -1,   480,   111,   480,    -1,
     480,   112,   480,    -1,   480,   113,   480,    -1,   480,   114,
     480,    -1,   480,   170,   480,    -1,   480,    17,   480,    -1,
     480,    18,   480,    -1,   480,    -1,   481,   195,   577,    -1,
     481,   195,   577,   604,    -1,   481,    -1,   482,   161,   482,
      -1,   482,    -1,   482,    36,   483,    -1,   482,    37,   483,
      -1,   483,    -1,   483,    11,   484,    -1,   483,   162,   484,
      -1,   483,    73,   484,    -1,   483,   163,   484,    -1,   484,
      -1,   484,    12,   485,    -1,   484,   164,   485,    -1,   485,
      -1,   485,   165,   486,    -1,   485,   166,   486,    -1,   486,
      -1,   487,   158,   159,   555,    -1,   487,    -1,   488,   169,
     152,   555,    -1,   488,    -1,   489,   160,   152,   552,    -1,
     489,    -1,   490,   168,   152,   552,    -1,   490,    -1,    37,
     490,    -1,    36,   490,    -1,   491,    -1,   492,    -1,   497,
      -1,   493,    -1,   167,    51,   448,    52,    -1,   167,    71,
      51,   448,    52,    -1,   167,    72,    51,   448,    52,    -1,
     494,    51,    52,    -1,   494,    51,   448,    52,    -1,   495,
      -1,   494,   495,    -1,    34,   529,   639,   496,    -1,   131,
      -1,   106,   131,    -1,   498,    -1,   498,   499,    -1,    32,
     499,    -1,   499,    -1,    38,    -1,   499,    38,   500,    -1,
     499,    32,   500,    -1,   500,    -1,   501,    -1,   511,    -1,
     502,   512,    -1,   505,   512,    -1,   503,   508,    -1,   504,
      -1,    74,    19,    -1,    75,    19,    -1,    59,    19,    -1,
      76,    19,    -1,    77,    19,    -1,    78,    19,    -1,    79,
      19,    -1,   173,    19,    -1,    20,   508,    -1,   508,    -1,
     506,   508,    -1,   507,    -1,    80,    19,    -1,    81,    19,
      -1,    82,    19,    -1,    83,    19,    -1,    84,    19,    -1,
      41,    -1,   559,    -1,   509,    -1,   620,    -1,   510,    -1,
      11,    -1,   128,    -1,   129,    -1,   513,   512,    -1,    -1,
     512,    21,   448,    22,    -1,   514,    -1,   516,    -1,   518,
      -1,   519,    -1,   522,    -1,   524,    -1,   520,    -1,   521,
      -1,   632,    -1,   635,    -1,   515,    -1,   618,    -1,   615,
      -1,   616,    -1,   617,    -1,     9,   517,    -1,   639,    -1,
      42,   448,    43,    -1,    42,    43,    -1,    40,    -1,   121,
      51,   448,    52,    -1,   122,    51,   448,    52,    -1,   640,
      42,    43,    -1,   640,    42,   523,    43,    -1,   523,    35,
     449,    -1,   449,    -1,   525,    -1,   541,    -1,   526,    -1,
     537,    -1,   539,    -1,    26,   527,   528,   529,    44,    -1,
      26,   527,   528,   529,    27,   536,    33,   527,   529,    28,
      -1,   123,    -1,   124,    -1,    -1,   528,   106,   123,   529,
      45,   529,   530,    -1,   528,   106,   124,   529,    45,   529,
     531,    -1,    -1,   106,    -1,    46,   532,    47,    -1,    48,
     534,    49,    -1,    46,   533,    47,    -1,    48,   535,    49,
      -1,    -1,   532,   446,    -1,   532,   116,    -1,    -1,   533,
     446,    -1,   533,   116,    -1,    -1,   534,   446,    -1,   534,
     117,    -1,    -1,   535,   446,    -1,   535,   117,    -1,    -1,
     536,   525,    -1,   536,   446,    -1,   536,   119,    -1,   536,
     118,    -1,    30,   538,    31,    -1,    -1,   108,    -1,    29,
     130,   540,    -1,   107,    -1,   106,   107,    -1,   542,    -1,
     543,    -1,   546,    -1,   547,    -1,   548,    -1,   549,    -1,
      85,    51,   448,    52,    -1,   191,   544,   545,    -1,   125,
      -1,    51,   448,    52,    -1,    51,    52,    -1,    51,   448,
      52,    -1,    59,   544,   545,    -1,    66,    51,   448,    52,
      -1,    60,    51,   448,    52,    -1,    63,   550,   551,    -1,
     125,    -1,    51,   448,    52,    -1,    51,    52,    -1,    51,
     448,    52,    -1,   558,   553,    -1,    -1,    23,    -1,    -1,
     152,   555,    -1,   557,   556,    -1,    67,    42,    43,    -1,
      -1,    11,    -1,    36,    -1,    23,    -1,   558,    -1,   174,
      42,    43,    -1,   559,    -1,   636,    -1,   638,    -1,   620,
      -1,   561,    -1,   569,    -1,   565,    -1,   571,    -1,   567,
      -1,   564,    -1,   563,    -1,   562,    -1,   560,    -1,    62,
      42,    43,    -1,    61,    42,    43,    -1,    61,    42,   569,
      43,    -1,    61,    42,   571,    43,    -1,    66,    42,    43,
      -1,    60,    42,    43,    -1,    63,    42,    43,    -1,    63,
      42,   619,    43,    -1,    63,    42,   126,    43,    -1,    59,
      42,    43,    -1,    59,    42,   566,    43,    -1,    59,    42,
     566,    35,   575,    43,    -1,   573,    -1,    11,    -1,    64,
      42,   568,    43,    -1,   573,    -1,   191,    42,    43,    -1,
     191,    42,   570,    43,    -1,   191,    42,   570,    35,   575,
      43,    -1,   191,    42,   570,    35,   575,    23,    43,    -1,
     574,    -1,    11,    -1,    65,    42,   572,    43,    -1,   574,
      -1,   620,    -1,   620,    -1,   620,    -1,   126,    -1,   579,
     578,   196,   616,    -1,   579,   578,    -1,    -1,   578,   586,
      -1,   578,   585,    -1,   579,    24,   580,    -1,   580,    -1,
     580,    25,   581,    -1,   581,    -1,   581,    86,   134,   582,
      -1,   582,    -1,    54,   583,    -1,   583,    -1,    42,   577,
      43,    -1,   584,    -1,   514,   600,    -1,   516,   600,    -1,
     519,   600,    -1,   522,   600,    -1,    51,   448,    52,   600,
      -1,   121,    -1,   197,   484,   602,    -1,   198,   601,   602,
      -1,   199,   601,   200,    -1,   201,   603,    -1,   202,   603,
      -1,   115,   100,    -1,   115,   101,    -1,    96,    97,    -1,
     587,    -1,   588,    -1,   589,    -1,   590,    -1,   593,    -1,
     598,    -1,   599,    -1,   203,    -1,   204,    -1,   151,    87,
      -1,   151,    88,    -1,   226,    89,    -1,    90,    89,    -1,
      89,    87,    -1,    89,    88,    -1,   226,    92,    -1,    90,
      92,    -1,   226,    93,   592,    -1,   226,    93,   183,    -1,
     226,    93,    42,   592,   591,    43,    -1,   226,    93,    42,
     183,   591,    43,    -1,    90,    93,    -1,    -1,   591,    35,
     592,    -1,   115,   618,    -1,   115,   618,   205,   618,    -1,
     115,   618,   601,   206,    -1,   115,   618,   205,   618,   601,
     206,    -1,   226,    94,   213,   595,   594,    -1,    90,    94,
     213,    -1,   226,   183,    94,   213,   594,    -1,    -1,   594,
     597,    -1,   115,   618,    -1,    42,   596,    43,    -1,   618,
      -1,   596,    35,   618,    -1,   164,   595,    -1,   166,   595,
      -1,   207,   618,    -1,   226,    95,    -1,    90,    95,    -1,
      -1,   208,    -1,   208,    98,    -1,   209,    -1,   209,   213,
      -1,   210,    -1,   211,   484,    -1,   120,   144,   484,    -1,
     120,   102,   484,    -1,   212,   484,   161,   484,    -1,   213,
      -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,    91,
      97,   484,    -1,   180,   224,    72,    -1,   180,   224,    71,
      -1,   180,   224,   103,    -1,   607,   449,   152,   220,   231,
     449,    -1,   607,   449,   152,   229,   231,   449,    -1,   607,
     449,   231,   449,    -1,   607,   449,   223,   449,    -1,   607,
     449,   222,   449,    -1,   221,    62,    -1,   221,   227,    -1,
     609,   449,    -1,   230,    62,    -1,   230,   227,    -1,   218,
     105,   159,    62,   449,   225,   449,    -1,   218,    62,   449,
     225,   449,    -1,   228,    62,   449,   152,   449,    -1,   104,
     613,   219,   449,   132,   449,    -1,   613,    35,   614,    -1,
     614,    -1,     9,   517,    10,   449,    -1,    56,    -1,    57,
      -1,    58,    -1,   126,    -1,   639,    -1,   639,    -1,   180,
     235,   237,   639,   446,    -1,   180,   235,   237,   639,   623,
     622,   446,    -1,   180,   235,   237,   639,   624,   236,   388,
     446,    -1,   180,   235,   237,   639,   624,   236,   388,   623,
     622,   446,    -1,   180,   235,   624,   236,   388,   446,    -1,
     180,   235,   624,   236,   388,   623,   622,   446,    -1,    -1,
     152,   555,    -1,    42,    43,    -1,    42,   444,    43,    -1,
      -1,   241,   625,    -1,   626,    -1,   625,    35,   626,    -1,
     123,    -1,   310,    -1,   311,    -1,   238,   235,   639,    -1,
     238,   235,   639,   225,    42,   630,    43,    -1,   239,   240,
     449,    -1,   239,   240,   449,   225,    42,   630,    43,    -1,
     239,   240,   449,   241,   629,    -1,   239,   240,   449,   241,
     629,   225,    42,   630,    43,    -1,   639,    -1,   310,    -1,
     312,    -1,   631,    -1,   630,    35,   631,    -1,     9,   517,
     554,    10,   449,    -1,   633,    -1,   634,    -1,   640,    55,
      56,    -1,   193,   442,   554,   446,    -1,   511,    42,    43,
      -1,   511,    42,   523,    43,    -1,   193,    42,    43,    -1,
     193,    42,    43,   152,   555,    -1,   193,    42,   637,    43,
     152,   555,    -1,   555,    -1,   637,    35,   555,    -1,    42,
     557,    43,    -1,   640,    -1,    59,    -1,    60,    -1,    61,
      -1,   191,    -1,   174,    -1,   153,    -1,    62,    -1,    63,
      -1,    64,    -1,    65,    -1,    66,    -1,   149,    -1,    67,
      -1,   193,    -1,   123,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    90,
      -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,    96,
      -1,    97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   109,
      -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,
      -1,   115,    -1,   127,    -1,   132,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,   139,
      -1,   140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   148,    -1,   150,
      -1,   152,    -1,   154,    -1,   155,    -1,   156,    -1,   157,
      -1,   158,    -1,   159,    -1,   160,    -1,   161,    -1,   162,
      -1,   163,    -1,   164,    -1,   165,    -1,   166,    -1,   167,
      -1,   168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,
      -1,   173,    -1,   175,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,
      -1,   184,    -1,   185,    -1,   187,    -1,   188,    -1,   189,
      -1,   192,    -1,   194,    -1,   195,    -1,   196,    -1,   197,
      -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,
      -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,   207,
      -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,   212,
      -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,
      -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,
      -1,   223,    -1,   224,    -1,   225,    -1,   227,    -1,   228,
      -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,   121,
      -1,   122,    -1,   233,    -1,   234,    -1,   235,    -1,   236,
      -1,   237,    -1,   238,    -1,   239,    -1,   240,    -1,   241,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   747,   747,   749,   750,   751,   752,   754,   761,   788,
     791,   812,   814,   818,   825,   827,   828,   829,   830,   831,
     832,   836,   855,   859,   864,   871,   876,   881,   890,   893,
     899,   904,   911,   911,   911,   914,   927,   931,   938,   943,
     952,   955,   963,   990,   994,  1001,  1007,  1012,  1017,  1026,
    1050,  1054,  1061,  1066,  1071,  1076,  1087,  1105,  1109,  1116,
    1121,  1129,  1154,  1157,  1160,  1163,  1166,  1169,  1172,  1175,
    1178,  1181,  1184,  1187,  1190,  1193,  1196,  1199,  1202,  1205,
    1211,  1212,  1213,  1214,  1215,  1227,  1230,  1235,  1238,  1243,
    1248,  1256,  1264,  1275,  1286,  1289,  1296,  1306,  1309,  1314,
    1328,  1331,  1336,  1341,  1349,  1350,  1351,  1352,  1353,  1354,
    1355,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1368,  1386,  1390,  1395,  1404,  1410,  1410,  1413,  1433,  1437,
    1442,  1450,  1455,  1459,  1467,  1470,  1478,  1491,  1495,  1506,
    1509,  1517,  1535,  1539,  1546,  1551,  1556,  1564,  1570,  1578,
    1586,  1593,  1607,  1611,  1625,  1634,  1642,  1645,  1652,  1687,
    1691,  1696,  1702,  1712,  1715,  1723,  1726,  1733,  1751,  1755,
    1762,  1767,  1775,  1793,  1797,  1805,  1827,  1831,  1838,  1846,
    1855,  1863,  1900,  1904,  1911,  1918,  1927,  1936,  1948,  1952,
    1957,  1966,  1979,  1983,  1988,  1997,  2011,  2015,  2028,  2033,
    2045,  2049,  2057,  2070,  2078,  2091,  2098,  2112,  2112,  2115,
    2115,  2137,  2141,  2145,  2163,  2181,  2191,  2205,  2213,  2219,
    2225,  2231,  2243,  2246,  2260,  2261,  2262,  2263,  2267,  2270,
    2274,  2276,  2280,  2284,  2288,  2292,  2296,  2302,  2308,  2322,
    2323,  2324,  2325,  2326,  2327,  2328,  2334,  2338,  2342,  2346,
    2352,  2352,  2359,  2360,  2361,  2362,  2366,  2369,  2373,  2375,
    2379,  2383,  2387,  2391,  2395,  2401,  2407,  2411,  2422,  2423,
    2424,  2425,  2429,  2432,  2436,  2438,  2442,  2446,  2450,  2454,
    2458,  2464,  2470,  2481,  2482,  2483,  2484,  2489,  2494,  2516,
    2519,  2523,  2535,  2537,  2541,  2545,  2549,  2553,  2557,  2563,
    2569,  2573,  2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,
    2598,  2598,  2601,  2605,  2613,  2618,  2627,  2632,  2641,  2701,
    2708,  2713,  2722,  2727,  2736,  2746,  2750,  2758,  2762,  2770,
    2786,  2795,  2807,  2816,  2819,  2824,  2833,  2837,  2845,  2855,
    2867,  2874,  2878,  2886,  2891,  2901,  2905,  2909,  2913,  2920,
    2924,  2931,  2934,  2942,  2947,  2957,  2965,  2969,  2977,  2990,
    3005,  3012,  3013,  3014,  3015,  3016,  3017,  3018,  3019,  3020,
    3021,  3022,  3023,  3028,  3039,  3043,  3047,  3051,  3055,  3061,
    3067,  3068,  3074,  3081,  3085,  3089,  3101,  3104,  3115,  3118,
    3128,  3135,  3139,  3143,  3147,  3154,  3162,  3167,  3175,  3179,
    3185,  3192,  3207,  3224,  3227,  3231,  3239,  3247,  3251,  3260,
    3268,  3279,  3283,  3287,  3298,  3305,  3310,  3318,  3322,  3330,
    3334,  3342,  3350,  3359,  3364,  3373,  3383,  3387,  3391,  3391,
    3395,  3399,  3403,  3407,  3411,  3415,  3419,  3423,  3427,  3431,
    3435,  3439,  3443,  3448,  3452,  3456,  3461,  3465,  3470,  3474,
    3478,  3483,  3487,  3491,  3495,  3499,  3504,  3508,  3512,  3517,
    3521,  3525,  3530,  3534,  3539,  3544,  3549,  3553,  3558,  3562,
    3567,  3573,  3579,  3584,  3585,  3586,  3594,  3598,  3602,  3610,
    3617,  3626,  3626,  3630,  3650,  3651,  3659,  3660,  3666,  3687,
    3691,  3705,  3711,  3724,  3728,  3728,  3732,  3736,  3745,  3757,
    3768,  3772,  3776,  3780,  3784,  3788,  3792,  3796,  3804,  3812,
    3829,  3837,  3846,  3850,  3854,  3858,  3862,  3870,  3882,  3887,
    3892,  3899,  3904,  3911,  3918,  3929,  3939,  3942,  3953,  3954,
    3955,  3956,  3957,  3958,  3959,  3960,  3961,  3962,  3966,  3966,
    3969,  3969,  3969,  3973,  3980,  3984,  3988,  3996,  4004,  4014,
    4024,  4028,  4035,  4040,  4049,  4053,  4062,  4062,  4062,  4066,
    4072,  4081,  4081,  4086,  4089,  4098,  4109,  4109,  4114,  4118,
    4125,  4129,  4140,  4143,  4148,  4162,  4165,  4169,  4186,  4189,
    4194,  4208,  4211,  4215,  4236,  4239,  4244,  4249,  4259,  4275,
    4290,  4293,  4298,  4319,  4320,  4333,  4334,  4335,  4336,  4337,
    4338,  4343,  4351,  4359,  4363,  4371,  4375,  4384,  4392,  4400,
    4408,  4415,  4428,  4435,  4439,  4447,  4458,  4461,  4470,  4473,
    4483,  4490,  4500,  4501,  4503,  4505,  4511,  4515,  4519,  4520,
    4521,  4525,  4537,  4538,  4539,  4540,  4541,  4542,  4543,  4544,
    4545,  4550,  4558,  4562,  4567,  4576,  4584,  4592,  4596,  4600,
    4608,  4612,  4616,  4624,  4625,  4633,  4641,  4646,  4650,  4654,
    4658,  4667,  4668,  4676,  4683,  4686,  4689,  4692,  4696,  4708,
    4720,  4736,  4739,  4743,  4753,  4764,  4769,  4780,  4785,  4789,
    4794,  4798,  4803,  4807,  4812,  4816,  4820,  4824,  4828,  4842,
    4846,  4850,  4854,  4859,  4863,  4867,  4871,  4875,  4889,  4890,
    4891,  4892,  4893,  4894,  4895,  4903,  4907,  4911,  4915,  4926,
    4930,  4934,  4938,  4946,  4950,  4960,  4964,  4968,  4972,  4976,
    4984,  4986,  4993,  4997,  5001,  5005,  5015,  5019,  5023,  5031,
    5033,  5041,  5045,  5052,  5056,  5064,  5068,  5076,  5084,  5088,
    5097,  5100,  5104,  5108,  5112,  5116,  5127,  5133,  5139,  5145,
    5155,  5159,  5163,  5171,  5175,  5183,  5191,  5196,  5201,  5213,
    5217,  5221,  5225,  5229,  5235,  5235,  5240,  5246,  5246,  5251,
    5255,  5265,  5273,  5280,  5285,  5293,  5302,  5315,  5328,  5342,
    5354,  5363,  5375,  5379,  5383,  5388,  5393,  5398,  5407,  5410,
    5418,  5422,  5430,  5434,  5442,  5447,  5456,  5460,  5464,  5472,
    5476,  5484,  5488,  5492,  5496,  5504,  5508,  5512,  5520,  5525,
    5535,  5548,  5548,  5552,  5560,  5569,  5574,  5583,  5587,  5591,
    5598,  5603,  5612,  5621,  5621,  5621,  5621,  5621,  5621,  5621,
    5621,  5622,  5622,  5622,  5622,  5622,  5622,  5623,  5627,  5627,
    5627,  5627,  5627,  5627,  5627,  5627,  5627,  5627,  5628,  5628,
    5628,  5628,  5628,  5628,  5628,  5629,  5629,  5629,  5629,  5629,
    5629,  5629,  5629,  5630,  5630,  5630,  5630,  5630,  5630,  5630,
    5630,  5630,  5630,  5630,  5631,  5631,  5631,  5631,  5631,  5631,
    5631,  5631,  5631,  5631,  5631,  5631,  5632,  5632,  5632,  5632,
    5632,  5632,  5632,  5632,  5632,  5632,  5633,  5633,  5633,  5633,
    5633,  5633,  5633,  5633,  5633,  5633,  5633,  5633,  5634,  5634,
    5634,  5634,  5634,  5634,  5634,  5634,  5634,  5634,  5634,  5634,
    5635,  5635,  5635,  5635,  5635,  5635,  5635,  5635,  5635,  5636,
    5636,  5636,  5636,  5636,  5636,  5636,  5636,  5637,  5637,  5637,
    5637,  5637,  5637,  5637,  5637,  5637,  5638,  5638,  5638,  5638,
    5638,  5638,  5638,  5638,  5638,  5639,  5639,  5639,  5639,  5639,
    5639,  5639,  5639,  5639,  5639,  5640,  5640,  5640,  5640,  5640,
    5640,  5640,  5640,  5640,  5640,  5640,  5641,  5641,  5641,  5641,
    5641,  5641,  5641,  5641,  5641,  5641,  5641
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
  "\"<xsl:import-schema...\"", "\"version='...'\"", "\"mode='...'\"",
  "\"name='...'\"", "\"doctype-public='...'\"", "\"doctype-system='...'\"",
  "\"encoding='...'\"", "\"media-type='...'\"",
  "\"normalization-form='...'\"", "\"standalone='...'\"",
  "\"exclude-result-prefixes='...'\"", "\"namespace='...'\"",
  "\"schema-location='...'\"", "\"tunnel='...'\"", "\"required='...'\"",
  "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"byte-order-mark='...'\"",
  "\"escape-uri-attributes='...'\"", "\"include-content-type='...'\"",
  "\"indent='...'\"", "\"omit-xml-declaration='...'\"",
  "\"undeclare-prefixes='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "_XSLT_NAMESPACE_A_", "\"regex='...'\"",
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
  "ImportSchema_XSLT", "ImportSchemaAttrs_XSLT",
  "LiteralResultElement_XSLT", "LiteralResultElementAttrs_XSLT",
  "AttrValueTemplate_XSLT", "SequenceConstructor_XSLT", "Instruction_XSLT",
  "ValueOf_XSLT", "ValueOfAttrs_XSLT", "Text_XSLT", "TextNode_XSLT",
  "ApplyTemplates_XSLT", "ApplyTemplatesAttrs_XSLT",
  "ApplyTemplatesMode_XSLT", "ApplyTemplatesContent_XSLT",
  "CallTemplate_XSLT", "CallTemplateAttrs_XSLT",
  "CallTemplateContent_XSLT", "WithParam_XSLT", "WithParamAttrs_XSLT",
  "Sequence_XSLT", "SequenceAttrs_XSLT", "If_XSLT", "IfAttrs_XSLT",
  "Choose_XSLT", "WhenList_XSLT", "When_XSLT", "WhenAttrs_XSLT",
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
     565,   566,   567,   568,   569,   570
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   316,   317,   317,   317,   317,   317,   317,   318,   319,
     319,   320,   320,   320,   321,   321,   321,   321,   321,   321,
     321,   322,   323,   323,   323,   323,   323,   323,   324,   324,
     324,   324,   325,   325,   325,   326,   327,   327,   327,   327,
     328,   328,   329,   330,   330,   330,   330,   330,   330,   331,
     332,   332,   332,   332,   332,   332,   333,   334,   334,   334,
     334,   335,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     337,   337,   337,   337,   337,   338,   338,   339,   340,   340,
     340,   340,   340,   341,   342,   342,   342,   343,   343,   343,
     344,   344,   344,   344,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     346,   347,   347,   347,   348,   349,   349,   350,   351,   351,
     351,   352,   352,   352,   353,   353,   354,   355,   355,   356,
     356,   357,   358,   358,   358,   358,   358,   359,   360,   361,
     362,   363,   364,   364,   365,   366,   367,   367,   368,   369,
     369,   369,   369,   370,   370,   371,   371,   372,   373,   373,
     373,   373,   374,   375,   375,   376,   377,   377,   377,   378,
     379,   380,   381,   381,   381,   381,   381,   382,   383,   383,
     383,   384,   385,   385,   385,   386,   387,   387,   388,   388,
     389,   389,   389,   390,   390,   391,   391,   392,   392,   393,
     393,   394,   394,   394,   394,   394,   394,   395,   396,   396,
     396,   396,   397,   397,   398,   398,   398,   398,   399,   400,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   402,
     402,   402,   402,   402,   402,   402,   403,   403,   403,   403,
     404,   404,   405,   405,   405,   405,   406,   407,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   409,   409,
     409,   409,   410,   411,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   413,   413,   413,   413,   414,   414,   415,
     416,   417,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   420,   421,   422,   423,   423,   424,   424,   425,   426,
     427,   427,   428,   428,   429,   430,   430,   431,   431,   432,
     433,   434,   434,   435,   435,   435,   436,   436,   437,   437,
     438,   439,   439,   440,   440,   441,   441,   441,   441,   442,
     442,   443,   443,   444,   444,   445,   446,   446,   447,   448,
     448,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   450,   451,   451,   451,   451,   452,   452,
     452,   452,   453,   454,   454,   455,   456,   456,   457,   457,
     458,   459,   459,   460,   460,   461,   462,   462,   463,   463,
     464,   464,   465,   466,   466,   466,   467,   467,   467,   468,
     468,   469,   469,   470,   471,   472,   472,   473,   473,   474,
     474,   475,   476,   476,   477,   477,   478,   478,   479,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   480,   480,   480,   481,   481,   482,   482,
     482,   483,   483,   483,   483,   483,   484,   484,   484,   485,
     485,   485,   486,   486,   487,   487,   488,   488,   489,   489,
     490,   490,   490,   491,   491,   491,   492,   492,   492,   493,
     493,   494,   494,   495,   496,   496,   497,   497,   497,   497,
     498,   499,   499,   499,   500,   500,   501,   501,   502,   502,
     503,   503,   503,   503,   503,   503,   503,   503,   504,   504,
     505,   505,   506,   506,   506,   506,   506,   507,   508,   508,
     509,   509,   510,   510,   510,   511,   512,   512,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   514,   514,
     515,   515,   515,   516,   517,   518,   518,   519,   520,   521,
     522,   522,   523,   523,   524,   524,   525,   525,   525,   526,
     526,   527,   527,   528,   528,   528,   529,   529,   530,   530,
     531,   531,   532,   532,   532,   533,   533,   533,   534,   534,
     534,   535,   535,   535,   536,   536,   536,   536,   536,   537,
     538,   538,   539,   540,   540,   541,   541,   541,   541,   541,
     541,   542,   543,   544,   544,   545,   545,   546,   547,   548,
     549,   550,   550,   551,   551,   552,   553,   553,   554,   554,
     555,   555,   556,   556,   556,   556,   557,   557,   557,   557,
     557,   558,   559,   559,   559,   559,   559,   559,   559,   559,
     559,   560,   561,   561,   561,   562,   563,   564,   564,   564,
     565,   565,   565,   566,   566,   567,   568,   569,   569,   569,
     569,   570,   570,   571,   572,   573,   574,   575,   576,   577,
     577,   578,   578,   578,   579,   579,   580,   580,   581,   581,
     582,   582,   583,   583,   584,   584,   584,   584,   584,   585,
     585,   585,   585,   585,   585,   585,   585,   585,   586,   586,
     586,   586,   586,   586,   586,   587,   587,   587,   587,   588,
     588,   588,   588,   589,   589,   590,   590,   590,   590,   590,
     591,   591,   592,   592,   592,   592,   593,   593,   593,   594,
     594,   595,   595,   596,   596,   597,   597,   598,   599,   599,
     600,   600,   600,   600,   600,   600,   601,   601,   601,   601,
     602,   602,   602,   603,   603,   604,   605,   605,   605,   606,
     606,   606,   606,   606,   607,   607,   608,   609,   609,   610,
     610,   611,   612,   613,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   621,   621,   621,   621,   621,   622,   622,
     623,   623,   624,   624,   625,   625,   626,   626,   626,   627,
     627,   628,   628,   628,   628,   629,   629,   629,   630,   630,
     631,   632,   632,   633,   634,   635,   635,   636,   636,   636,
     637,   637,   638,   639,   639,   639,   639,   639,   639,   639,
     639,   639,   639,   639,   639,   639,   639,   639,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   640,   640
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       2,     4,     1,     3,     2,     3,     3,     3,     0,     2,
       2,     2,     1,     1,     1,     4,     1,     2,     3,     2,
       0,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       1,     2,     3,     3,     2,     2,     3,     1,     2,     3,
       3,     2,     1,     2,     3,     2,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     4,     0,     3,     2,     0,     2,     2,
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     1,     1,     3,     1,     3,
       3,     1,     1,     1,     0,     2,     3,     1,     2,     0,
       2,     3,     1,     2,     3,     3,     2,     2,     3,     3,
       3,     4,     1,     2,     3,     3,     0,     3,     4,     1,
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
       0,     0,   230,   258,   274,   292,     0,     0,     0,   522,
       0,     0,     0,   590,     0,   566,     0,     0,   490,   547,
     517,     0,   776,   777,   778,   824,   825,   826,   830,   831,
     832,   833,   834,   836,   839,   840,   841,   842,   843,   844,
     845,   846,   847,   848,   849,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,   867,   868,   869,   870,   871,   872,   873,   874,
     875,   876,   877,   878,   879,   880,   881,   882,   976,   977,
     838,   779,   883,   523,   524,   884,   885,   886,   887,   888,
     889,   890,   891,   892,   893,   894,   895,   896,   897,   898,
     899,   900,   835,   901,   902,   829,   903,   904,   905,   906,
     907,   908,   909,   910,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,   921,   922,   828,   923,   924,   925,
     926,   927,   928,   929,   930,   931,   932,   933,   934,   935,
     936,   827,   937,   837,   938,   939,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   952,   953,
     954,   955,   956,   957,   958,   959,   960,   961,   962,   963,
     964,   965,   966,   967,   968,   969,   970,   971,   972,   973,
     974,   975,   978,   979,   980,   981,   982,   983,   984,   985,
     986,     2,   358,   360,   361,     0,   377,   380,   381,   362,
     363,   364,   370,   423,   425,   442,   445,   447,   450,   455,
     458,   461,   463,   465,   467,   469,   472,   473,   475,     0,
     481,   474,   486,   489,   493,   494,   526,     0,   499,   526,
       0,   511,   509,   519,   521,   495,   526,   528,   538,   529,
     530,   531,   534,   535,   532,   533,   554,   556,   557,   558,
     555,   595,   596,   597,   598,   599,   600,   518,   640,   632,
     639,   638,   637,   634,   636,   633,   635,   365,     0,   366,
       0,   368,   367,   369,   540,   541,   542,   539,   520,   371,
     372,   536,   811,   812,   537,   781,   823,     0,     0,     3,
     226,   227,     0,   230,   230,     4,   254,   255,     0,   258,
     258,     5,   270,   271,     0,   274,   274,     6,   292,   285,
     286,   292,     0,    11,    94,     7,     8,    10,     1,   824,
     825,   826,   830,   831,   832,   833,   834,   845,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   874,
     976,   977,   885,   887,   898,   899,   835,   829,   916,   922,
     827,   837,   962,   965,   971,   973,   983,   984,   543,   544,
     823,   824,   825,   831,   834,   827,   508,   561,   562,   563,
       0,   591,     0,   488,   567,     0,   471,   470,   546,     0,
     502,     0,     0,   603,     0,     0,     0,     0,     0,     0,
       0,   611,     0,     0,     0,     0,     0,   500,   501,   503,
     504,   505,   506,   512,   513,   514,   515,   516,     0,     0,
       0,   774,     0,     0,     0,   382,   384,     0,     0,   390,
     392,     0,     0,   412,     0,     0,     0,     0,     0,     0,
     507,     0,     0,     0,   618,     0,     0,   764,   765,     0,
     767,   768,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   378,   379,   375,   376,     0,     0,     0,     0,     0,
       0,     0,     0,   428,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   482,
     487,     0,     0,   496,   498,   497,   510,     0,   525,     0,
     766,     0,     0,     0,     0,   928,   935,     0,     0,     0,
       0,   239,     0,     0,   243,   244,   245,   240,   241,   310,
     311,     0,   242,   228,     0,   224,   225,   229,   928,     0,
       0,     0,     0,     0,     0,     0,     0,   256,     0,   252,
     253,   257,   928,     0,     0,     0,   302,     0,     0,   306,
     307,   309,   303,   304,     0,   305,     0,   272,   308,     0,
     268,   269,   273,   283,   284,   290,   928,     0,     0,     0,
       0,     0,     0,     0,     0,   289,     0,    14,   100,   566,
       0,   593,   592,   589,     0,   545,   654,   650,     0,   653,
     665,     0,     0,   607,   646,     0,   642,     0,     0,     0,
       0,   641,   647,     0,     0,   780,     0,     0,   610,     0,
     656,     0,   664,   666,   645,     0,     0,     0,     0,     0,
       0,     0,   618,     0,   618,     0,     0,   618,     0,     0,
       0,     0,     0,     0,     0,     0,   662,   657,     0,   661,
     602,     0,   349,     0,   354,     0,     0,     0,     0,     0,
     799,   801,   359,   373,   395,     0,     0,   374,   422,   424,
     427,   430,   431,   432,   440,   441,     0,   426,   433,   434,
     435,   436,   437,   438,   439,     0,     0,     0,   740,   740,
     740,   740,   443,   671,   675,   677,   679,   681,   683,     0,
     448,   449,   446,   451,   453,   452,   454,   456,   457,   459,
     460,     0,     0,     0,     0,   479,     0,   492,   491,     0,
     815,   553,     0,     0,     0,     0,     0,   550,     0,   813,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   250,   251,   792,     0,     0,     0,   312,   231,   236,
     232,   233,   234,   238,   235,   237,     0,     0,     0,   259,
     264,   260,   261,   262,   266,   267,   263,   265,     0,     0,
     352,     0,   275,   276,   277,   278,   282,   279,   280,   281,
     351,   351,   293,   294,   295,   296,   300,   301,   297,   298,
     299,    12,    13,     0,    96,    97,     0,   567,     0,   594,
       0,   484,   483,     0,   651,   604,   605,     0,   609,   643,
     644,   649,   648,   612,   613,     0,   655,   663,   608,   601,
       0,   773,     0,   548,   549,   386,   383,   388,     0,   391,
       0,   411,   409,   410,     0,     0,   476,     0,     0,     0,
     658,   618,     0,   350,     0,   836,   828,   837,   619,   622,
     626,   628,   631,   629,   630,     0,     0,   814,     0,     0,
       0,     0,     0,     0,   402,   396,   399,   403,     0,   429,
       0,     0,   680,   741,   743,   745,   684,   685,   686,   687,
       0,   444,     0,   670,     0,     0,   462,   464,   466,   616,
     468,   480,     0,     0,   816,     0,     0,   763,   762,   761,
     551,     0,   287,     0,   314,   315,   668,   330,     0,     0,
     343,   344,   320,   321,     0,     0,     0,     0,   325,   326,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   333,
       0,   333,     0,     0,     0,   705,   706,     0,     0,   319,
     698,   699,   700,   701,   702,   703,   704,   757,   756,   758,
       0,     9,    22,    50,    36,    57,    62,    88,    15,    40,
      16,    40,    17,   100,    18,   100,    19,     0,    20,     0,
      95,    93,   121,     0,   128,   137,     0,     0,     0,   168,
     173,   176,   180,   182,   159,   188,   192,   196,   125,   126,
     102,   103,   104,   100,   105,   101,   106,   134,   107,   139,
     108,     0,   110,   100,   109,   116,   163,   111,   100,   112,
     100,   113,   100,   114,   100,   115,   100,   117,     0,   118,
     100,   119,   100,   566,   566,   584,   559,   485,     0,   667,
     606,   614,   775,     0,     0,   388,     0,     0,     0,     0,
       0,     0,   416,     0,   477,   478,     0,   355,   353,     0,
       0,     0,     0,   623,   625,   624,   620,     0,     0,   770,
       0,   771,     0,     0,   806,   807,   803,   805,     0,   404,
     405,   406,   397,   682,   740,   742,   744,     0,   674,     0,
       0,   689,     0,     0,     0,     0,     0,     0,   673,   672,
     676,     0,   617,   615,   527,   552,     0,     0,     0,     0,
     618,     0,     0,   329,     0,     0,     0,   318,   792,   796,
     797,   798,   793,   794,     0,     0,     0,     0,   333,     0,
     332,     0,   339,   711,   712,   710,   714,   719,     0,   739,
     707,   708,   737,   709,   713,     0,     0,   738,     0,     0,
      89,    90,    28,    24,     0,     0,     0,   100,    37,    39,
       0,   100,    51,    55,    54,     0,     0,     0,    58,     0,
       0,     0,    61,    79,    63,    67,    68,    69,    73,    74,
      76,    65,    70,    71,    72,    75,    77,     0,     0,     0,
      87,    99,    98,     0,     0,     0,   156,   152,   100,     0,
       0,    97,     0,     0,     0,     0,   138,     0,   147,     0,
     100,     0,    97,    97,   165,   169,     0,     0,     0,     0,
       0,    97,     0,     0,     0,    97,     0,    97,    97,     0,
     187,   190,     0,   193,   194,     0,     0,     0,     0,     0,
       0,   652,   772,     0,     0,     0,     0,   394,   413,     0,
       0,     0,   414,   415,     0,     0,   659,   822,   621,   627,
     817,   820,     0,   356,   357,     0,     0,     0,   808,     0,
       0,   398,     0,   400,   688,   755,   697,   695,   696,   669,
       0,     0,     0,     0,     0,     0,   753,   754,   693,   694,
     678,   759,   760,   288,   291,     0,   313,   322,   323,   316,
     317,   327,   328,   324,     0,   782,   788,     0,     0,     0,
     204,   203,   824,   845,   978,   979,     0,   199,     0,   202,
     200,   211,   222,   218,     0,   248,   246,   336,   337,   331,
     334,     0,     0,   727,     0,     0,   716,   715,     0,     0,
       0,    91,    92,    26,    23,    27,    32,    33,    34,    25,
      43,    41,   100,     0,    38,     0,    53,    52,    49,    60,
      59,    56,    83,    84,    80,    81,    82,    64,    85,    66,
      78,   124,   148,     0,   100,   153,     0,     0,   150,   122,
     123,   120,   131,   132,   133,   130,   129,   127,   142,   135,
     100,   136,   140,   149,     0,   160,   161,   162,   100,     0,
     171,   170,   100,   174,   172,   177,   178,   175,   179,   183,
     185,   186,   184,   181,   189,   191,   197,   195,   566,   566,
       0,   588,   587,   586,   585,   387,     0,   389,   393,     0,
       0,     0,     0,     0,   660,     0,     0,     0,   769,   618,
       0,   800,   802,     0,   407,   408,     0,   750,   751,   752,
     690,     0,     0,   746,     0,   691,   692,     0,   342,   340,
     790,     0,     0,     0,     0,   795,   221,     0,     0,     0,
       0,     0,   786,   788,   212,     0,     0,     0,     0,   217,
       0,     0,   335,   333,   720,   720,   722,     0,     0,   729,
     729,     0,   347,   345,    29,    30,    31,    44,    48,    47,
       0,     0,     0,    21,    35,    86,   155,     0,   151,   154,
     143,   146,     0,     0,     0,   164,     0,   158,   167,     0,
       0,   566,   385,     0,   419,     0,   418,   421,   818,   821,
       0,     0,   809,     0,   401,   748,   747,     0,   341,   791,
     789,   783,     0,   220,   219,     0,   208,   207,     0,   198,
       0,   214,   213,   216,   215,     0,   249,   247,   338,     0,
       0,     0,     0,     0,   733,   731,   726,   728,     0,    46,
      45,    42,   157,   145,   144,   141,   166,   572,   578,   564,
     575,   581,   565,     0,     0,     0,   819,     0,   804,   749,
     784,   788,   205,     0,   787,     0,     0,   718,   717,   723,
     724,     0,   732,     0,     0,   730,   348,   346,     0,     0,
       0,     0,   560,     0,   417,   810,     0,     0,   209,   210,
     223,   721,     0,   734,   735,   736,   568,   574,   573,   569,
     580,   579,   570,   577,   576,   571,   583,   582,   420,   785,
     206,   725
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   315,   316,   577,   783,   948,   949,  1323,  1329,
     950,   951,  1137,  1331,  1332,   952,   953,   954,   955,   956,
     957,  1347,  1349,   958,   959,   980,   578,   960,   786,   981,
     982,   983,   984,   985,   986,   987,  1365,  1185,   988,   989,
    1187,  1369,  1370,   990,   991,   992,   993,   994,  1176,  1177,
    1178,  1356,   995,   996,  1194,  1379,   997,   998,   999,  1000,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1011,  1012,  1296,  1297,  1298,  1299,  1525,  1597,  1300,  1301,
    1302,  1459,   289,   290,   291,   292,   507,   508,   734,   295,
     296,   297,   298,   301,   302,   303,   304,   307,   293,   309,
     310,   294,   312,   543,   509,   738,   510,   511,   512,   513,
     535,   514,   515,   516,   910,  1283,   517,   518,   519,  1110,
     918,   520,   521,  1439,   522,   556,   434,   761,   643,   644,
    1172,   191,   192,   193,   194,   195,   196,   197,   415,   416,
    1025,  1027,   198,   419,   420,   453,   454,   855,   856,   857,
    1061,  1253,   199,   422,   423,   200,  1031,  1232,  1032,   201,
     202,   203,   204,   666,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     792,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   493,   236,   237,   238,
     239,   358,   240,   241,   242,   243,   244,   712,   245,   246,
     247,   369,   579,   375,  1559,  1562,  1588,  1590,  1589,  1591,
    1220,   248,   372,   249,   582,   250,   251,   252,   384,   593,
     253,   254,   255,   256,   392,   608,   878,  1083,   646,   838,
    1046,   839,   840,   257,   258,   259,   260,   261,   262,   263,
     588,   264,   609,   265,   638,   266,   611,   589,   612,  1018,
     897,   682,   873,   683,   684,   685,   686,   687,   688,  1078,
     929,   930,   931,   932,   933,  1539,  1317,   934,  1546,  1469,
    1543,  1585,   935,   936,   866,  1264,  1430,  1268,   871,   558,
     267,   268,   269,   270,   271,   272,   273,   410,   411,   274,
     275,   276,   277,   604,   278,   524,  1443,  1286,   914,  1102,
    1103,   279,   280,  1056,  1247,  1248,   281,   282,   283,   284,
     843,  1242,   844,   285,   286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1346
static const yytype_int16 yypact[] =
{
     979,  3114,   353,   353,   353,   353,   -95,   111,  7204, -1346,
    5840,   659,    17,    60,  4512,   142,  3347,  3347, -1346, -1346,
   -1346,  1716, -1346, -1346, -1346,   153,   201,   241,   251,   166,
     263,   277,   389, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
     336,   374,   449,   459,   474,   553,   577,   593,   605,   625,
     630,   286, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   518,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   524,   534,
   -1346, -1346, -1346, -1346, -1346, -1346,   650, -1346,    57, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   682,
     682, -1346,   628, -1346, -1346,   656, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   538,
   -1346, -1346, -1346, -1346, -1346,   694, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346,   273, -1346,   687, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   101, -1346,
   -1346,     5, -1346, -1346, -1346, -1346, -1346,   662, -1346,    31,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346,   512,   494, -1346,
   -1346, -1346,   734, -1346, -1346,   646,   716, -1346, -1346, -1346,
   -1346, -1346,   631,   644, -1346,  1225,   626,   129,   117,    72,
     651, -1346,   672,   684,   701,   697, -1346, -1346, -1346,   296,
   -1346, -1346,  4512,   663, -1346, -1346, -1346,  5840, -1346, -1346,
    5840, -1346, -1346, -1346, -1346,   835, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,  3114, -1346,
    3114, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346,   285,   724,   747, -1346,
   -1346, -1346,  3580,   741, -1346, -1346, -1346, -1346,  3813,   741,
   -1346, -1346, -1346, -1346,  4046,   741, -1346, -1346,   741, -1346,
   -1346, -1346,  4279, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346,   896,   900,   902,   904,   906, -1346, -1346, -1346, -1346,
     736, -1346,   920,   663, -1346,  7204, -1346, -1346, -1346,   354,
   -1346,  6055,  3114, -1346,   908,   925,  3114,   118,   934,  7021,
    3114, -1346,   929,  7204,  7204,   945,  3114, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,  3114,  7204,
      43, -1346,  3114,  3114,  7204,   973, -1346,  7204,  1001,   983,
   -1346,  7204,   136, -1346,   154,  3114,  3114,  3114,   963,   993,
   -1346,  6270,   908,   184,   872,  3114,   875, -1346, -1346,  3114,
   -1346, -1346,  7204,  3114,  3114,  3114,   650,    57,  3114,   909,
     907, -1346, -1346,   718, -1346,  3347,  3347,  3347,  3347,  3347,
    3347,  3347,  3347, -1346,  3347,  3347,  3347,  3347,  3347,  3347,
    3347,  3347,  4946,  3347,  3347,  3347,  3347,  3347,  3347,  3347,
    3347,  3347,  3347,  3347,   888,   901,   910,   916,  1949, -1346,
     663,  4512,  4512,  1029, -1346,  1029, -1346,  2182,  1029,   222,
   -1346,  2415,   996,   928,  7204,   838,   693,  1005,  1005,  1005,
    1005, -1346,  1005,  1005, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346,  1005, -1346, -1346,  1005, -1346, -1346,   324,   484,  1005,
    1005,  1005,  1005,  1005,  1005,  1005,  1005, -1346,  1005, -1346,
   -1346,   385,   572,  1005,  1005,  1005, -1346,  1005,  1005, -1346,
   -1346, -1346, -1346, -1346,  1005, -1346,  1005, -1346, -1346,  1005,
   -1346, -1346,   540, -1346, -1346,   555,   567,  1005,  1005,  1005,
    1005,  1005,  1005,  1005,  1005, -1346,  1005,   181,   582,   953,
     962, -1346, -1346, -1346,    68, -1346, -1346, -1346,   723, -1346,
   -1346,   314,  2648, -1346, -1346,   316, -1346,   277,   906,  1017,
    1018, -1346, -1346,  1027,  1028, -1346,   499,  2881, -1346,  1032,
   -1346,  1033, -1346, -1346, -1346,   525,   527,  1062,   518,  3114,
     556,   563,   872,   650,   872,  7204,    57,   872,   682,  3114,
    3114,   728,   732,   566,  3114,  3114, -1346, -1346,   737, -1346,
   -1346,  7204, -1346,   749, -1346,  6654,   847,   852,  1016,   927,
     855,   192, -1346, -1346, -1346,  3114,   944, -1346,   644, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346,  3347, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346,  4946,  3114,  5163,   660,   660,
     660,   660,   991,  1060,  1061,   999, -1346, -1346, -1346,  1045,
     117,   117,   877,    72,    72,    72,    72,   651,   651, -1346,
   -1346,  6654,  6654,  7204,  7204, -1346,   591, -1346, -1346,  3114,
   -1346, -1346,   762,   278,  3114,  3114,  3114, -1346,   763, -1346,
      20,  1050,   745,   964,  1082,  7204,   753,   808,   339,   608,
    7204, -1346, -1346,   417,  7378,    19,   -16, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346,   838,   693,   318, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   484,   347,
   -1346,   743, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
     882,   816, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346,   470, -1346, -1346,  7379,   817,   607, -1346,
     961, -1346, -1346,  7204, -1346, -1346, -1346,   610, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346,   621, -1346, -1346, -1346, -1346,
    3114, -1346,   965, -1346, -1346,   978, -1346,   905,  1084, -1346,
     966, -1346, -1346, -1346,   946,   941, -1346,   637,   655,  7204,
   -1346,   872,  1089, -1346,  6838,  1059,  1063,  1065, -1346,   367,
   -1346, -1346, -1346, -1346, -1346,  3114,  3114, -1346,  3114,  3114,
    3114,  1066,  1067,  1459, -1346,  1068, -1346,   813,  3114, -1346,
    1070,   665, -1346,  1004,   891, -1346, -1346, -1346, -1346, -1346,
    1013, -1346,  4946,  1165,  4946,   981, -1346, -1346, -1346,  1093,
   -1346, -1346,   219,  3114, -1346,   887,   889, -1346, -1346, -1346,
   -1346,   997, -1346,   964, -1346, -1346, -1346, -1346,  7204,  1080,
   -1346, -1346, -1346, -1346,   980,   964,   951,   955, -1346, -1346,
    1091,  1006,  7204,   -41,   899,   687,  7204,   936,   964,  1019,
    7204,  1019,   868,   798,   874, -1346, -1346,  1010,   424, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
    7378, -1346, -1346, -1346, -1346, -1346, -1346,   683, -1346,   323,
   -1346,   261, -1346,   392, -1346,   309, -1346,  1109, -1346,   895,
     320, -1346, -1346,   661, -1346, -1346,   844,   886,   846, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346,   210, -1346, -1346, -1346,   -83, -1346,   873,
   -1346,   912, -1346, -1346, -1346, -1346,   240, -1346,   328, -1346,
     851, -1346,    -7, -1346, -1346, -1346,   289, -1346,  -135, -1346,
     686, -1346,   853,   142,   142, -1346, -1346, -1346,  1106, -1346,
   -1346, -1346, -1346,  3114,  1141,   905,  1146,  1147,  3114,  3114,
    4729,   189, -1346,  3114, -1346, -1346,   207, -1346, -1346,  1118,
    1119,  1121,  6470, -1346, -1346, -1346, -1346,   671,   690, -1346,
     940, -1346,  1157,  1157, -1346, -1346,   942, -1346,  3114, -1346,
   -1346,  1026,  1068, -1346,   660, -1346, -1346,  3347,  1061,  1072,
     878, -1346,  1114,  3347,   -11,   -11,   774,   774, -1346, -1346,
     999,  4946, -1346, -1346, -1346, -1346,  3114,  3114,  1005,  1005,
     872,   964,   849, -1346,   964,   964,   824, -1346,    84, -1346,
   -1346, -1346,  1137, -1346,  5394,   119,  1134,  1002,  1019,   964,
    1139,  1138,  1139, -1346, -1346, -1346, -1346, -1346,   967, -1346,
   -1346, -1346, -1346, -1346, -1346,    39,   969, -1346,  1085,   687,
     903,   914, -1346, -1346,  5394,  6654,   818,   932, -1346, -1346,
    6654,   932, -1346, -1346, -1346,  6654,  3114,  7405, -1346,  6654,
    3114,  7433, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346,   -47,  1064,  1064,
   -1346, -1346, -1346,   947,  3114,   911,   740, -1346, -1346,  3114,
    3114, -1346,  7459,   -94,  3114,   321, -1346,   443, -1346,  7487,
   -1346,  3114, -1346, -1346,   924, -1346,  6654,  3114,  7513,  3114,
    7541, -1346,  3114,  7567,  7595, -1346,  3114, -1346, -1346,  7621,
   -1346, -1346,  3114, -1346, -1346,  7649,  3114,  7675,  1152,  1153,
     744, -1346, -1346,  7204,  1075,  7204,  3114, -1346, -1346,  7204,
    1074,    71, -1346, -1346,  1069,  1175, -1346, -1346, -1346, -1346,
    1071, -1346,   775, -1346, -1346,  3114,  7204,   776, -1346,   777,
    1185, -1346,   869,  1077, -1346,    72, -1346, -1346, -1346, -1346,
     199,    47,  3347,  3347,   681,  1034, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346,   114, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346,   196, -1346,  1076,  1008,   -41,  5840,
   -1346,   954,   315,  1214,  1195,  1203,   508, -1346,  5625,   730,
     826, -1346,  1228, -1346,  6654, -1346, -1346, -1346, -1346,  1139,
   -1346,   964,   964, -1346,   -10,  1010, -1346, -1346,    94,  1043,
     334, -1346, -1346,   -37,  1234, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346,   421,  7703, -1346,  7729, -1346,   734, -1346, -1346,
     734, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,  1135,
    1135, -1346,   734,  3114, -1346, -1346,  1015,  7757,   734,   734,
     320, -1346, -1346, -1346, -1346, -1346,   734, -1346, -1346, -1346,
     242, -1346, -1346, -1346,  7783,   734,   320,   320, -1346,  1023,
   -1346,   734, -1346,   734, -1346,   320,   734, -1346, -1346,   320,
     734,   320,   320, -1346,   734, -1346,   734, -1346,   142,   142,
     659, -1346, -1346, -1346, -1346, -1346,  3114, -1346, -1346,  1108,
    3114,  7204,  3114,  3114, -1346,  6654,  6654,  1115, -1346,   872,
    1157, -1346, -1346,  1157, -1346, -1346,   964, -1346, -1346, -1346,
   -1346,  3347,  3347,    72,   100, -1346, -1346,  3114, -1346, -1346,
   -1346,   779,  6654,   847,  5394, -1346, -1346,  5840,  5840,    95,
    1010,  5394, -1346,  1076, -1346,  5625,  5625,  5625,  5625, -1346,
    1245,   135, -1346,  1019, -1346, -1346,     2,  1010,  1010, -1346,
   -1346,  6654, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
    6654,  3114,  7811, -1346, -1346, -1346,   734,  7837, -1346, -1346,
   -1346, -1346,  6654,  3114,  7865, -1346,  7891, -1346,  1180,   698,
     832,   142, -1346,  6654, -1346,  1136, -1346, -1346, -1346, -1346,
    6654,  1259, -1346,   780, -1346,    72,    72,  3347, -1346, -1346,
   -1346, -1346,   508, -1346, -1346,  1227, -1346, -1346,  1236, -1346,
     847, -1346, -1346, -1346, -1346,  3114, -1346, -1346,  1139,   791,
     804,  1010,  1073,   805, -1346, -1346,   746,   746,   147, -1346,
     734, -1346, -1346, -1346,   734, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346,  1244,  1142,  3114, -1346,  3114, -1346,    72,
   -1346,  1076, -1346,   416, -1346,   407,  1158, -1346, -1346,   -11,
   -1346,  1010, -1346,    94,    94, -1346, -1346, -1346,   441,   406,
     450,   431, -1346,  3114, -1346, -1346,   847,  1232, -1346, -1346,
    1255, -1346,  1078, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346,   326, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346,   109, -1346, -1346,  1275, -1346,  -625,  -652, -1346,
   -1346, -1346, -1346,   319, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346,    96, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   112,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1118,  -166, -1346, -1346, -1346, -1346, -1346,  -992,
   -1346, -1346, -1346,   994,   998,   995,  -266,  -254,  -541, -1346,
    1000,  1003,   990, -1346,   987,   988,   989, -1346,   898,   986,
     992,    54,  1007,  -270,  -265,  -392,  -249,  -258,  -242,  -233,
    -267,  -251,  -244,  -227, -1346, -1346,  -198,  -189, -1346,  -914,
   -1346, -1346,  -229, -1346,  -179,  -248,  -891, -1346,    13,   466,
    -615,   329,   -21,  -220, -1346, -1346, -1346,  1105, -1346,   680,
   -1346,   279,  1110, -1346,   688, -1346,   854,   451,   250, -1346,
   -1346, -1346, -1346,  1210,   685, -1346, -1346, -1346,   281, -1346,
   -1346,   862,   863, -1346,  -370, -1346,   845,   543,  -474,   546,
     550, -1346, -1346, -1346,  1012, -1346, -1346, -1346, -1346,  1102,
   -1346, -1346, -1346,    37,   544, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346,    26, -1346, -1346, -1346,  -228, -1346,  -435, -1346,
    -442,  -396, -1346,  -431, -1346, -1346,  -420,   821, -1346,   103,
   -1346,   -75, -1346,  -567, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,  1186,   894,
   -1346, -1346, -1346, -1346, -1346, -1346,   624, -1346,  -584,  -543,
   -1346,   495,   335,  -571, -1346, -1346, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346,   943, -1346,   956, -1346,   938,   913,   504,
    -633,   666, -1346, -1346,   468,   472,   267,   673, -1346, -1346,
     469, -1346, -1346, -1346, -1346,  -116, -1294, -1346,  -118,  -542,
   -1346, -1346, -1346, -1346,  -653, -1064,    89,   280, -1346, -1346,
   -1346, -1346, -1346, -1346, -1346, -1346, -1346, -1346,   738, -1346,
     282, -1346,  -921,  -494,  -359,  -185, -1345, -1273,   257, -1346,
      70, -1346, -1346, -1346, -1044,   -61, -1346, -1346, -1346, -1346,
   -1346, -1346, -1346,     6,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -528
static const yytype_int16 yytable[] =
{
     379,   495,   693,   694,   695,   696,  1122,  1112,   498,  1249,
     721,  1265,   788,   617,   359,   360,  1324,   360,   622,  1342,
    1465,   624,   590,  1453,  1105,   627,   867,   868,   869,  1362,
     679,   847,   529,   531,   590,   613,   366,   678,   815,   544,
     817,   680,   567,   820,   530,   572,   546,   568,   499,   532,
     500,   373,   681,   549,   546,   545,   533,   300,   306,   311,
     550,   549,   547,   569,   574,   534,   417,   437,   550,   536,
     570,   548,   613,   737,   841,   554,  1343,   551,   618,   571,
    1411,  1314,  1099,   573,   480,   551,  1474,   660,   661,   662,
     663,   664,   665,   440,   667,   668,   669,   670,   671,   672,
     673,   674,   919,   921,     8,  1315,   552,  1210,  1530,  1261,
     896,   318,   480,   538,   552,   553,   739,   740,   741,   559,
     742,   743,  1261,   553,  1437,   555,  1284,   576,   476,   744,
     841,   841,   745,   555,   845,   846,  1467,   749,   750,   751,
     752,   753,   754,   755,   756,   896,   757,   370,   313,  1431,
    1211,   762,   763,   764,  1315,   765,   766,   920,   876,   877,
    1212,   596,   767,   435,   768,   473,   474,   769,   371,   845,
     846,   628,   380,  1464,   790,   772,   773,   774,   775,   776,
     777,   778,   779,   597,   780,   845,   846,   907,  1183,   628,
     477,  1432,   916,   641,  1309,   381,   891,   845,   846,   791,
    1262,  1263,   917,  1412,   382,   641,   436,  1541,   389,  1468,
     314,   480,  1184,  1262,  1263,   647,  1363,   390,  1364,   649,
     940,    81,  1316,   651,   652,   653,  1596,   642,   654,   818,
    1235,   899,   438,   679,   360,   679,   481,   360,  1320,  1440,
     678,  1084,   678,   385,   680,   831,   680,  1037,   374,  1571,
    1236,   418,   386,   494,   444,   681,   496,   681,   441,   490,
    1089,  1517,   619,   841,   481,  1201,  1344,  1345,  1346,  1100,
    1101,  1304,  1093,  1475,  1476,   529,   531,   711,   383,   478,
     479,   711,  1601,   387,   629,  1108,   842,   530,  1202,  1438,
     475,   391,   532,   388,  1305,   567,   859,   544,   572,   533,
     568,  1147,   630,  1151,   546,   393,  1454,   546,   534,   598,
    1536,   549,   536,   545,   549,   431,   569,   574,   550,   394,
     547,   550,  1586,   570,   382,   913,  1522,   501,   892,   548,
      15,  1182,   571,   554,  1447,   551,   573,   408,   551,  1030,
     502,  1189,   842,   842,   842,   842,  1198,   488,  1200,   444,
    1203,   444,  1204,   300,  1209,   397,   538,   381,  1215,   306,
    1217,   591,   311,   481,   552,   595,   795,   552,   798,   606,
     845,   846,  1231,   553,   713,   615,   553,   559,  1043,  1513,
     576,   584,   360,   555,   845,   846,   555,   616,   360,   444,
    1044,   620,   621,   398,  1466,   605,   360,   585,   383,   812,
     360,   360,  1542,  1045,   631,   632,   633,   922,   923,   822,
     823,  1254,  1427,  1428,  1429,   359,   360,   852,   937,   938,
     359,   360,  1106,   359,   360,     8,  1111,   359,   360,  1600,
     679,   395,   679,   853,  1019,   854,  1171,   678,   360,   678,
     396,   680,   444,   680,   714,   715,  1218,  1219,   650,   360,
     939,   781,   681,   716,   681,  1609,   845,   846,  1276,   841,
     782,  1279,  1280,  1531,  1532,  1533,  1534,   706,   399,   924,
    1019,   841,    22,    23,    24,   842,  1310,   904,   400,   689,
    1615,   845,   846,  1285,   905,  1333,  1471,  1230,  1606,  1335,
    1306,   845,   846,   401,   887,   888,   889,  1612,   885,  1241,
     845,   846,  1090,  1190,   746,  1180,  1275,   886,  1181,  1472,
     605,   360,   747,  1123,  1490,  1602,  1124,  1125,  1126,  1127,
    1451,   925,   926,  1610,  1491,   927,  1357,   409,  1527,  1528,
     906,   731,   732,  1138,   444,  1191,  1492,  1493,  1374,   287,
    1192,  1193,    81,   288,   928,  1139,  1544,  1545,  1616,  1538,
    1284,   803,   722,   748,   723,  1140,  1360,  1607,   845,   846,
     444,  1205,   444,  1367,   841,   758,  1613,  1376,  1377,   841,
    1368,   797,   402,   747,   841,   412,  1385,   808,   841,   809,
    1389,  1148,  1391,  1392,  1206,   413,   805,  1207,  1208,   427,
    1022,   444,  1325,  1255,  1132,  1133,   403,  1334,   444,  1260,
    1195,   444,  1336,  1149,  1150,  1403,  1339,  1128,   813,   428,
     429,   724,   404,   827,   828,   814,  1134,  1135,   826,  1136,
    1579,   523,  1196,  1197,   405,   841,   444,   537,  1049,  1050,
    1051,   359,   360,   557,  1015,   722,   748,   723,   854,   679,
     722,   575,   723,   881,   406,   444,   678,   359,   360,   407,
     680,  1016,   360,  1380,   912,   861,   444,   725,   913,   414,
    1603,   681,  1020,  1085,  1142,   726,   727,   728,   729,   730,
     425,   842,   444,  1021,  1143,  1144,   731,   732,  1462,  1463,
    1482,  1452,   689,   842,   689,  1371,  1145,  1146,   882,  1034,
     444,   421,  1368,  1477,   724,   491,  1273,  1274,   426,   724,
     444,   492,  1487,  1478,  1479,  1473,   444,  1035,   360,   360,
     360,   360,   941,   430,   942,  1480,  1481,  1064,  1494,   733,
     770,   943,   944,  1243,   439,   444,  1496,   945,   747,   433,
    1498,   605,   360,   841,   443,   771,   911,   360,   946,   947,
     725,   915,  1244,   747,  1557,   725,  1558,   442,   726,   727,
     728,   729,   730,   726,   727,   728,   729,   730,   793,  -351,
    -351,  1461,  1455,   444,  -351,  -351,   794,   444,  1456,   444,
      11,   824,   829,    12,    13,   825,   842,  1400,   445,   908,
     830,   842,   367,   368,   832,   909,   842,   455,  1433,  1434,
     842,   759,   833,  1514,   845,   846,   759,   883,   883,   760,
     360,   456,   733,  1222,   760,   884,   890,   733,  1227,  1228,
    1416,  1420,  1420,  1234,   832,  1420,   482,   483,  1417,  1421,
    1422,   472,  1519,  1568,  1047,  1048,  1576,  1405,  1521,  1407,
     484,  1499,  1500,  1409,  1577,  1511,   360,   842,   854,  1576,
    1581,   360,   580,   581,   841,   841,  1537,  1578,  1582,   446,
    1419,   447,   448,   485,   449,   450,   449,   450,  1457,  1057,
     360,   486,  1401,  1402,  1458,   487,  1271,  1272,   863,   864,
     865,   841,  1508,  1509,  1326,  1327,  1328,   497,  1560,   689,
    1561,   689,   735,   736,   722,   748,   723,  1115,   784,   785,
    1116,  1117,  1118,  1119,  1427,  1428,  1429,   845,   846,  1520,
     841,   299,   305,   308,   359,   360,   722,  1570,   723,   841,
    1583,   503,  1584,   473,   474,  1574,   894,   895,  1098,   360,
     504,   841,   605,   360,   900,   901,   605,   360,  1548,   902,
     903,   288,   841,  1587,  1563,   731,   732,  1549,   381,   841,
    1013,  1014,   385,   724,   389,   842,   395,  1129,   431,  1553,
     722,   583,   723,  1059,  1060,  1113,  1114,  1515,  1516,   592,
    1564,  1120,  1121,  1130,  1131,   724,  -201,  1566,   594,   978,
     979,  1213,  1214,  1608,  1611,  1614,  1617,   601,  1257,  1258,
     607,  1619,     1,     2,     3,     4,     5,     6,   614,   725,
    1266,  1267,  1277,  1278,  1175,  1354,  -201,   726,   727,   728,
     729,   730,  1281,  1282,  -201,  -201,  1408,  1526,   623,   724,
     625,   725,  1424,  1425,   634,  1505,   690,   691,   626,   726,
     727,   728,   729,   730,   645,  1418,   697,   698,   376,   377,
     731,   732,   699,   700,   648,   707,   708,   360,   879,   879,
     759,  1604,  1605,  1569,   635,   656,   655,   701,   760,   360,
     709,   733,   719,   702,   720,   725,   842,   842,   737,   787,
     799,   800,   703,   726,   727,   728,   729,   730,   704,   789,
     801,   802,   810,   733,  1460,   806,   807,   848,   849,   850,
     851,   858,   870,   842,   872,   875,   874,   501,   689,   893,
     896,   898,  1017,  1024,  1028,  1033,  1030,  1023,   641,  1026,
    1029,  1040,  1065,  1058,  1066,  1041,   759,  1042,  1052,  1053,
    1067,   360,   842,  1063,   760,  1081,  1082,   733,  1086,  1091,
    1087,   842,  1092,  1088,  1094,  1337,  1096,  1107,  1095,  1340,
    1303,  1599,  1097,   842,  1109,  1104,    81,  1170,  1598,  1174,
    1175,   360,   360,  1179,   842,  1186,  1199,   360,  1216,  1221,
    1223,   842,   360,  1352,  1188,  1225,   360,  1226,  1358,  1359,
    1303,  1237,  1238,  1366,  1239,  1245,  1246,  1250,  1252,  1256,
    1375,    23,  1288,  1307,  1311,  1308,  1381,  1312,  1383,  1319,
    1313,  1386,  1318,  1330,  1321,  1390,  1502,  1348,  1378,  1351,
    1504,  1394,  1506,  1507,  1322,  1396,  -201,  1398,  1399,  -201,
    -201,  -201,  -201,   360,  -201,  -201,  1410,  -201,  1353,  1406,
    -201,  -201,  -201,  -201,  -201,  -201,  -201,  1518,  1414,  -201,
    -201,  -201,  1426,  1415,  1413,  -201,  -201,  1423,  1442,   359,
     360,   359,   360,  1448,  1436,   359,   360,  1449,   457,   458,
     459,   460,   461,   462,  1444,  1450,  1451,  -201,  -201,  -526,
    -201,   463,   359,   360,   922,   923,  1470,  1488,  1485,  -201,
    1503,  1069,  -201,  -201,   464,  1497,  1535,  1510,  1565,  1567,
    1572,  1573,  1592,  1315,  1593,  1620,  -527,  1141,  1350,  1580,
    1070,   317,  1173,  1372,  1621,  1529,  1071,   525,  1355,   527,
     541,   526,   560,   561,   563,   562,   360,  1441,  1038,   539,
     564,   451,   540,   816,  1224,   360,   452,   657,  1251,  1062,
     424,   360,  1233,   821,   819,  1446,   924,   658,   565,   659,
     692,   489,   718,  1404,  1303,  1501,   640,   432,   880,  1039,
     599,   610,  1486,  1036,   465,   466,   467,   468,   469,   470,
    1068,   860,  1079,   600,   639,  1594,  1080,  1595,  1270,  1540,
     862,  1152,  1547,  1435,  1259,  1287,   811,  1269,  1445,  1512,
       0,  1072,  1073,  1074,  1075,     0,  1076,  1077,   925,   926,
       0,     0,   927,  1618,     0,     0,     0,     0,     0,  1153,
       0,  1154,  1155,  1156,  1157,  1158,  1159,  1160,     0,     0,
       0,   928,     0,     0,     0,   471,  1161,  1162,  1163,  1164,
    1165,  1166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1167,  1168,  1169,     0,     0,     0,   359,   360,     0,
       0,     0,   360,   360,     0,   962,   963,   964,   965,     0,
     966,     0,     0,   967,     0,     0,   968,   969,   970,   971,
     972,   973,   974,     0,     0,   975,   976,   977,     0,   360,
       0,   360,     0,     0,   360,   360,     0,     0,   360,     0,
    1550,     0,   360,   360,   360,   360,     0,     0,     0,     0,
    1303,     0,  1554,  1523,  1524,     0,     0,  1303,   360,     0,
       0,  1303,  1303,  1303,  1303,   314,     0,   360,   978,   979,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,     0,     0,     0,  1575,     0,     0,   360,   319,   320,
     321,   322,   323,   324,   325,   326,    33,    34,    35,    36,
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
     123,   124,   349,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     350,   142,   351,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   352,   169,   170,
     353,   172,   173,   174,   175,     0,   176,   354,   178,   355,
     180,   181,   182,   183,   184,   185,   186,   356,   357,   189,
     190,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1054,
       0,  1055,    22,    23,    24,    25,    26,    27,    28,    29,
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
     352,   169,   170,   353,   172,   173,   174,   175,  1229,   176,
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
       0,     0,     0,     0,  1289,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1290,     0,     0,     0,
       0,     0,  1291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1292,   362,    27,    28,   363,    30,    31,
     364,    33,    34,    35,    36,    37,    38,    39,  1293,   328,
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
       0,   176,   354,   178,   355,   180,   181,  1294,  1295,   184,
     185,   186,   356,   357,   189,   190,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1289,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1292,   362,    27,    28,   363,    30,
      31,   364,    33,    34,    35,    36,    37,    38,    39,  1293,
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
     189,   190,   834,  1240,     0,     0,     0,     0,     0,     0,
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
       0,   961,     0,     0,   962,   963,   964,   965,     0,   966,
       0,     0,   967,     0,     0,   968,   969,   970,   971,   972,
     973,   974,     0,     0,   975,   976,   977,  1338,     0,     0,
     962,   963,   964,   965,     0,   966,     0,     0,   967,     0,
       0,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     975,   976,   977,     0,     0,  1341,     0,     0,   962,   963,
     964,   965,     0,   966,   314,     0,   967,   978,   979,   968,
     969,   970,   971,   972,   973,   974,     0,     0,   975,   976,
     977,  1361,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   978,   979,   968,   969,   970,   971,   972,
     973,   974,     0,     0,   975,   976,   977,     0,     0,  1373,
       0,     0,   962,   963,   964,   965,     0,   966,   314,     0,
     967,   978,   979,   968,   969,   970,   971,   972,   973,   974,
       0,     0,   975,   976,   977,  1382,     0,     0,   962,   963,
     964,   965,     0,   966,   314,     0,   967,   978,   979,   968,
     969,   970,   971,   972,   973,   974,     0,     0,   975,   976,
     977,     0,     0,  1384,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   978,   979,   968,   969,   970,
     971,   972,   973,   974,     0,     0,   975,   976,   977,  1387,
       0,     0,   962,   963,   964,   965,     0,   966,   314,     0,
     967,   978,   979,   968,   969,   970,   971,   972,   973,   974,
       0,     0,   975,   976,   977,     0,     0,  1388,     0,     0,
     962,   963,   964,   965,     0,   966,   314,     0,   967,   978,
     979,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     975,   976,   977,  1393,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   978,   979,   968,   969,   970,
     971,   972,   973,   974,     0,     0,   975,   976,   977,     0,
       0,  1395,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   978,   979,   968,   969,   970,   971,   972,
     973,   974,     0,     0,   975,   976,   977,  1397,     0,     0,
     962,   963,   964,   965,     0,   966,   314,     0,   967,   978,
     979,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     975,   976,   977,     0,     0,  1483,     0,     0,   962,   963,
     964,   965,     0,   966,   314,     0,   967,   978,   979,   968,
     969,   970,   971,   972,   973,   974,     0,     0,   975,   976,
     977,  1484,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   978,   979,   968,   969,   970,   971,   972,
     973,   974,     0,     0,   975,   976,   977,     0,     0,  1489,
       0,     0,   962,   963,   964,   965,     0,   966,   314,     0,
     967,   978,   979,   968,   969,   970,   971,   972,   973,   974,
       0,     0,   975,   976,   977,  1495,     0,     0,   962,   963,
     964,   965,     0,   966,   314,     0,   967,   978,   979,   968,
     969,   970,   971,   972,   973,   974,     0,     0,   975,   976,
     977,     0,     0,  1551,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   978,   979,   968,   969,   970,
     971,   972,   973,   974,     0,     0,   975,   976,   977,  1552,
       0,     0,   962,   963,   964,   965,     0,   966,   314,     0,
     967,   978,   979,   968,   969,   970,   971,   972,   973,   974,
       0,     0,   975,   976,   977,     0,     0,  1555,     0,     0,
     962,   963,   964,   965,     0,   966,   314,     0,   967,   978,
     979,   968,   969,   970,   971,   972,   973,   974,     0,     0,
     975,   976,   977,  1556,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   978,   979,   968,   969,   970,
     971,   972,   973,   974,     0,     0,   975,   976,   977,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,   978,   979,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   314,     0,     0,   978,
     979
};

static const yytype_int16 yycheck[] =
{
      21,   229,   476,   477,   478,   479,   927,   921,   236,  1053,
     504,  1075,   579,   409,     8,     8,  1134,    10,   414,    66,
    1314,   417,   381,  1296,   915,   421,   679,   680,   681,   123,
     472,   646,   298,   298,   393,   394,    10,   472,   622,   304,
     624,   472,   312,   627,   298,   312,   304,   312,   268,   298,
     270,    14,   472,   304,   312,   304,   298,     3,     4,     5,
     304,   312,   304,   312,   312,   298,     9,    62,   312,   298,
     312,   304,   431,    53,   645,   304,   123,   304,    35,   312,
       9,    42,   123,   312,    12,   312,   123,   457,   458,   459,
     460,   461,   462,    62,   464,   465,   466,   467,   468,   469,
     470,   471,   735,   736,     9,   115,   304,   242,  1453,   120,
     126,     0,    12,   298,   312,   304,   508,   509,   510,   304,
     512,   513,   120,   312,    10,   304,    42,   312,    11,   521,
     701,   702,   524,   312,    50,    51,    42,   529,   530,   531,
     532,   533,   534,   535,   536,   126,   538,   130,   243,   102,
     285,   543,   544,   545,   115,   547,   548,   173,   701,   702,
     295,    43,   554,    62,   556,    36,    37,   559,   108,    50,
      51,    35,    19,   183,   106,   567,   568,   569,   570,   571,
     572,   573,   574,    65,   576,    50,    51,   728,   271,    35,
      73,   144,   173,     9,  1108,    42,   176,    50,    51,   131,
     211,   212,   183,   132,    51,     9,   105,   205,    42,   115,
     305,    12,   295,   211,   212,   435,   310,    51,   312,   439,
     761,   126,   183,   443,   444,   445,  1571,    43,   448,   625,
      23,   725,   227,   675,   227,   677,   164,   230,  1129,    43,
     675,    22,   677,    42,   675,   641,   677,   831,   106,  1522,
      43,   194,    51,   227,    35,   675,   230,   677,   227,   222,
     893,   161,   219,   834,   164,   272,   313,   314,   315,   310,
     311,   152,   905,   310,   311,   541,   541,   497,   125,   162,
     163,   501,  1576,    42,   148,   918,   645,   541,   295,   175,
     161,   125,   541,    42,   175,   565,   666,   562,   565,   541,
     565,   953,   148,   955,   562,    42,  1298,   565,   541,   191,
     175,   562,   541,   562,   565,    42,   565,   565,   562,    42,
     562,   565,   175,   565,    51,   241,  1444,    42,   720,   562,
      34,   983,   565,   562,    19,   562,   565,    51,   565,   150,
      55,   993,   701,   702,   703,   704,   998,    51,  1000,    35,
    1002,    35,  1004,   299,  1006,    19,   541,    42,  1010,   305,
    1012,   382,   308,   164,   562,   386,    52,   565,    52,   390,
      50,    51,   183,   562,   152,   396,   565,   562,    11,  1423,
     565,   375,   375,   562,    50,    51,   565,   408,   381,    35,
      23,   412,   413,    19,  1315,   389,   389,    43,   125,   619,
     393,   394,  1466,    36,   425,   426,   427,    89,    90,   629,
     630,  1064,   213,   214,   215,   409,   409,   225,    71,    72,
     414,   414,   916,   417,   417,     9,   920,   421,   421,    22,
     872,    42,   874,   241,   793,   655,   116,   872,   431,   874,
      51,   872,    35,   874,   222,   223,  1013,  1014,   442,   442,
     103,   270,   872,   231,   874,    49,    50,    51,  1091,  1030,
     279,  1094,  1095,  1455,  1456,  1457,  1458,   488,    19,   151,
     829,  1042,    56,    57,    58,   834,  1109,   138,    19,   472,
      49,    50,    51,  1098,   145,  1137,   152,  1030,    47,  1141,
    1105,    50,    51,    19,   714,   715,   716,    47,   220,  1042,
      50,    51,   898,   263,   180,   295,  1090,   229,   298,   175,
     504,   504,   188,    89,   272,  1579,    92,    93,    94,    95,
      12,   203,   204,   117,   282,   207,  1178,     9,  1449,  1450,
     191,   192,   193,   272,    35,   295,   294,   295,  1190,   186,
     300,   301,   126,   190,   226,   284,  1467,  1468,   117,  1463,
      42,    52,    68,    69,    70,   294,  1181,   116,    50,    51,
      35,   272,    35,   242,  1135,   180,   116,  1192,  1193,  1140,
     249,   592,    19,   188,  1145,    51,  1201,    52,  1149,    52,
    1205,   272,  1207,  1208,   295,    51,   607,   298,   299,    51,
     810,    35,  1135,  1067,   271,   272,    19,  1140,    35,  1073,
     272,    35,  1145,   294,   295,  1220,  1149,   183,    52,    71,
      72,   127,    19,   634,   635,    52,   293,   294,    52,   296,
    1541,   292,   294,   295,    19,  1196,    35,   298,   848,   849,
     850,   625,   625,   304,    27,    68,    69,    70,   858,  1081,
      68,   312,    70,    52,    19,    35,  1081,   641,   641,    19,
    1081,    44,   645,  1196,   237,   676,    35,   173,   241,     9,
    1581,  1081,    52,   883,   272,   181,   182,   183,   184,   185,
      42,  1030,    35,    52,   282,   283,   192,   193,  1311,  1312,
    1332,  1296,   675,  1042,   677,   242,   294,   295,   709,    52,
      35,     9,   249,   272,   127,    32,  1088,  1089,    42,   127,
      35,    38,  1354,   282,   283,  1320,    35,    52,   701,   702,
     703,   704,   242,    19,   244,   294,   295,    52,  1370,   235,
     180,   251,   252,    52,    62,    35,  1378,   257,   188,    42,
    1382,   725,   725,  1304,   240,   180,   730,   730,   268,   269,
     173,   734,    52,   188,    46,   173,    48,   235,   181,   182,
     183,   184,   185,   181,   182,   183,   184,   185,    35,   192,
     193,  1304,    32,    35,   192,   193,    43,    35,    38,    35,
      26,    43,    35,    29,    30,    43,  1135,    33,   132,   171,
      43,  1140,   123,   124,    35,   177,  1145,   156,  1262,  1263,
    1149,   224,    43,  1426,    50,    51,   224,    35,    35,   232,
     793,   157,   235,  1023,   232,    43,    43,   235,  1028,  1029,
      35,    35,    35,  1033,    35,    35,   165,   166,    43,    43,
      43,   195,    43,    43,   845,   846,    35,  1223,  1443,  1225,
     158,  1398,  1399,  1229,    43,  1419,   829,  1196,  1058,    35,
      35,   834,   106,   107,  1415,  1416,  1461,    43,    43,   133,
    1246,   135,   136,   169,   138,   139,   138,   139,    32,   853,
     853,   160,   118,   119,    38,   168,  1086,  1087,   208,   209,
     210,  1442,  1415,  1416,    56,    57,    58,    42,    46,   872,
      48,   874,   189,   190,    68,    69,    70,    89,   306,   307,
      92,    93,    94,    95,   213,   214,   215,    50,    51,  1442,
    1471,     3,     4,     5,   898,   898,    68,  1522,    70,  1480,
     164,   187,   166,    36,    37,  1530,   171,   172,   912,   912,
     173,  1492,   916,   916,   171,   172,   920,   920,  1471,   121,
     122,   190,  1503,  1548,  1501,   192,   193,  1480,    42,  1510,
     123,   124,    42,   127,    42,  1304,    42,   940,    42,  1492,
      68,    31,    70,   140,   141,    87,    88,  1431,  1432,    51,
    1503,    87,    88,   280,   281,   127,    12,  1510,    43,   308,
     309,   285,   286,  1588,  1589,  1590,  1591,    43,   100,   101,
      51,  1596,     3,     4,     5,     6,     7,     8,    43,   173,
     216,   217,   143,   144,   254,   255,    42,   181,   182,   183,
     184,   185,   178,   179,    50,    51,  1226,  1449,    35,   127,
       9,   173,   143,   144,    51,  1411,   473,   474,    35,   181,
     182,   183,   184,   185,   152,  1245,   480,   481,    16,    17,
     192,   193,   482,   483,   159,   491,   492,  1030,   703,   704,
     224,  1583,  1584,  1517,    51,   138,   137,   159,   232,  1042,
      21,   235,    56,   152,   126,   173,  1415,  1416,    53,   106,
      43,    43,   152,   181,   182,   183,   184,   185,   152,   107,
      43,    43,    10,   235,  1302,    43,    43,   225,    62,   152,
     225,   137,    91,  1442,    24,    86,    25,    42,  1081,    39,
     126,     9,   131,   115,    10,   154,   150,   132,     9,   194,
     134,    42,    98,    35,   213,    42,   224,    42,    42,    42,
      97,  1104,  1471,    43,   232,   134,    23,   235,   231,    39,
     231,  1480,   142,   126,   173,  1146,    35,   191,   173,  1150,
    1104,  1573,   126,  1492,   115,   236,   126,   242,  1573,   295,
     254,  1134,  1135,   297,  1503,   272,   295,  1140,   295,    43,
       9,  1510,  1145,  1174,   242,     9,  1149,    10,  1179,  1180,
    1134,    43,    43,  1184,    43,   225,     9,   225,   142,    97,
    1191,    57,    35,    39,    35,   173,  1197,    39,  1199,    94,
     213,  1202,   213,   251,   281,  1206,  1406,   123,   264,   242,
    1410,  1212,  1412,  1413,   280,  1216,   242,    45,    45,   245,
     246,   247,   248,  1196,   250,   251,   132,   253,   297,   134,
     256,   257,   258,   259,   260,   261,   262,  1437,    43,   265,
     266,   267,   145,   152,   155,   271,   272,    42,   152,  1223,
    1223,  1225,  1225,    19,   200,  1229,  1229,    42,    13,    14,
      15,    16,    17,    18,   236,    42,    12,   293,   294,    21,
     296,    26,  1246,  1246,    89,    90,   213,   242,   123,   305,
     152,    96,   308,   309,    39,   242,    21,   152,   132,    10,
      43,    35,    28,   115,   132,    43,    21,   951,  1169,   206,
     115,     6,   963,  1187,   206,  1451,   121,   293,  1176,   294,
     300,   293,   305,   305,   308,   306,  1289,  1284,   832,   299,
     308,   196,   299,   623,  1025,  1298,   196,   453,  1058,   858,
     100,  1304,  1031,   628,   626,  1289,   151,   455,   311,   456,
     475,   219,   501,  1220,  1298,  1400,   432,   141,   704,   834,
     387,   393,  1353,   829,   109,   110,   111,   112,   113,   114,
     872,   675,   873,   387,   431,  1565,   874,  1567,  1081,  1465,
     677,   242,  1470,  1264,  1072,  1098,   618,  1077,  1288,  1420,
      -1,   196,   197,   198,   199,    -1,   201,   202,   203,   204,
      -1,    -1,   207,  1593,    -1,    -1,    -1,    -1,    -1,   270,
      -1,   272,   273,   274,   275,   276,   277,   278,    -1,    -1,
      -1,   226,    -1,    -1,    -1,   170,   287,   288,   289,   290,
     291,   292,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   302,   303,   304,    -1,    -1,    -1,  1411,  1411,    -1,
      -1,    -1,  1415,  1416,    -1,   245,   246,   247,   248,    -1,
     250,    -1,    -1,   253,    -1,    -1,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,   267,    -1,  1442,
      -1,  1444,    -1,    -1,  1447,  1448,    -1,    -1,  1451,    -1,
    1481,    -1,  1455,  1456,  1457,  1458,    -1,    -1,    -1,    -1,
    1444,    -1,  1493,  1447,  1448,    -1,    -1,  1451,  1471,    -1,
      -1,  1455,  1456,  1457,  1458,   305,    -1,  1480,   308,   309,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1492,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1503,    -1,    -1,    -1,  1535,    -1,    -1,  1510,    59,    60,
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
     221,   222,   223,   224,   225,    -1,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
      -1,   312,    56,    57,    58,    59,    60,    61,    62,    63,
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
     265,   266,   267,    -1,    -1,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   305,    -1,   253,   308,   309,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     305,    -1,   253,   308,   309,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,   267,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   305,    -1,
     253,   308,   309,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   305,    -1,   253,   308,   309,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   305,    -1,   253,   308,   309,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   305,    -1,
     253,   308,   309,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,    -1,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   305,    -1,   253,   308,
     309,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   267,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   305,    -1,   253,   308,   309,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,    -1,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     305,    -1,   253,   308,   309,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,   267,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   305,    -1,   253,   308,
     309,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   267,    -1,    -1,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   305,    -1,   253,   308,   309,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     305,    -1,   253,   308,   309,   256,   257,   258,   259,   260,
     261,   262,    -1,    -1,   265,   266,   267,    -1,    -1,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   305,    -1,
     253,   308,   309,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,   242,    -1,    -1,   245,   246,
     247,   248,    -1,   250,   305,    -1,   253,   308,   309,   256,
     257,   258,   259,   260,   261,   262,    -1,    -1,   265,   266,
     267,    -1,    -1,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   305,    -1,   253,   308,   309,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,   242,
      -1,    -1,   245,   246,   247,   248,    -1,   250,   305,    -1,
     253,   308,   309,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,   267,    -1,    -1,   242,    -1,    -1,
     245,   246,   247,   248,    -1,   250,   305,    -1,   253,   308,
     309,   256,   257,   258,   259,   260,   261,   262,    -1,    -1,
     265,   266,   267,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   305,    -1,   253,   308,   309,   256,   257,   258,
     259,   260,   261,   262,    -1,    -1,   265,   266,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,    -1,    -1,   308,   309,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,   308,
     309
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   317,     9,    11,
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
     241,   447,   448,   449,   450,   451,   452,   453,   458,   468,
     471,   475,   476,   477,   478,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   513,   514,   515,   516,
     518,   519,   520,   521,   522,   524,   525,   526,   537,   539,
     541,   542,   543,   546,   547,   548,   549,   559,   560,   561,
     562,   563,   564,   565,   567,   569,   571,   606,   607,   608,
     609,   610,   611,   612,   615,   616,   617,   618,   620,   627,
     628,   632,   633,   634,   635,   639,   640,   186,   190,   398,
     399,   400,   401,   414,   417,   405,   406,   407,   408,   414,
     417,   409,   410,   411,   412,   414,   417,   413,   414,   415,
     416,   417,   418,   243,   305,   318,   319,   341,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   104,
     121,   122,   133,   135,   146,   147,   149,   153,   167,   173,
     191,   193,   218,   221,   228,   230,   238,   239,   517,   639,
     640,    59,    60,    63,    66,   191,   508,   123,   124,   527,
     130,   108,   538,   499,   106,   529,   490,   490,    43,   448,
      19,    42,    51,   125,   544,    42,    51,    42,    42,    42,
      51,   125,   550,    42,    42,    42,    51,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    51,     9,
     613,   614,    51,    51,     9,   454,   455,     9,   194,   459,
     460,     9,   469,   470,   469,    42,    42,    51,    71,    72,
      19,    42,   544,    42,   442,    62,   105,    62,   227,    62,
      62,   227,   235,   240,    35,   132,   133,   135,   136,   138,
     139,   453,   458,   461,   462,   156,   157,    13,    14,    15,
      16,    17,    18,    26,    39,   109,   110,   111,   112,   113,
     114,   170,   195,    36,    37,   161,    11,    73,   162,   163,
      12,   164,   165,   166,   158,   169,   160,   168,    51,   495,
     499,    32,    38,   512,   508,   512,   508,    42,   512,   449,
     449,    42,    55,   187,   173,   180,   188,   402,   403,   420,
     422,   423,   424,   425,   427,   428,   429,   432,   433,   434,
     437,   438,   440,   447,   621,   399,   400,   401,   180,   402,
     403,   420,   422,   424,   425,   426,   438,   447,   621,   406,
     407,   408,   180,   419,   420,   422,   423,   424,   425,   427,
     428,   429,   432,   433,   438,   440,   441,   447,   605,   621,
     410,   411,   412,   415,   416,   418,   180,   419,   420,   422,
     424,   425,   426,   438,   441,   447,   621,   320,   342,   528,
     106,   107,   540,    31,   639,    43,    11,    43,   566,   573,
     620,   448,    51,   545,    43,   448,    43,    65,   191,   569,
     571,    43,    43,   126,   619,   639,   448,    51,   551,   568,
     573,   572,   574,   620,    43,   448,   448,   517,    35,   219,
     448,   448,   517,    35,   517,     9,    35,   517,    35,   148,
     148,   448,   448,   448,    51,    51,    11,    43,   570,   574,
     545,     9,    43,   444,   445,   152,   554,   449,   159,   449,
     639,   449,   449,   449,   449,   137,   138,   462,   477,   478,
     480,   480,   480,   480,   480,   480,   479,   480,   480,   480,
     480,   480,   480,   480,   480,    42,    51,    54,   514,   516,
     519,   522,   577,   579,   580,   581,   582,   583,   584,   640,
     483,   483,   482,   484,   484,   484,   484,   485,   485,   486,
     486,   159,   152,   152,   152,    52,   448,   500,   500,    21,
      43,   449,   523,   152,   222,   223,   231,    43,   523,    56,
     126,   619,    68,    70,   127,   173,   181,   182,   183,   184,
     185,   192,   193,   235,   404,   189,   190,    53,   421,   421,
     421,   421,   421,   421,   421,   421,   180,   188,    69,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   180,   224,
     232,   443,   421,   421,   421,   421,   421,   421,   421,   421,
     180,   180,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   270,   279,   321,   306,   307,   344,   106,   529,   107,
     106,   131,   496,    35,    43,    52,    52,   448,    52,    43,
      43,    43,    43,    52,    52,   448,    43,    43,    52,    52,
      10,   614,   449,    52,    52,   554,   455,   554,   517,   460,
     554,   470,   449,   449,    43,    43,    52,   448,   448,    35,
      43,   517,    35,    43,    42,    67,   174,   193,   555,   557,
     558,   559,   620,   636,   638,    50,    51,   446,   225,    62,
     152,   225,   225,   241,   449,   463,   464,   465,   137,   480,
     577,   448,   583,   208,   209,   210,   600,   600,   600,   600,
      91,   604,    24,   578,    25,    86,   555,   555,   552,   558,
     552,    52,   448,    35,    43,   220,   229,   449,   449,   449,
      43,   176,   421,    39,   171,   172,   126,   576,     9,   619,
     171,   172,   121,   122,   138,   145,   191,   404,   171,   177,
     430,   639,   237,   241,   624,   640,   173,   183,   436,   576,
     173,   576,    89,    90,   151,   203,   204,   207,   226,   586,
     587,   588,   589,   590,   593,   598,   599,    71,    72,   103,
     404,   242,   244,   251,   252,   257,   268,   269,   322,   323,
     326,   327,   331,   332,   333,   334,   335,   336,   339,   340,
     343,   242,   245,   246,   247,   248,   250,   253,   256,   257,
     258,   259,   260,   261,   262,   265,   266,   267,   308,   309,
     341,   345,   346,   347,   348,   349,   350,   351,   354,   355,
     359,   360,   361,   362,   363,   368,   369,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   123,   124,    27,    44,   131,   575,   620,
      52,    52,   449,   132,   115,   456,   194,   457,    10,   134,
     150,   472,   474,   154,    52,    52,   575,   554,   445,   557,
      42,    42,    42,    11,    23,    36,   556,   448,   448,   449,
     449,   449,    42,    42,   310,   312,   629,   639,    35,   140,
     141,   466,   463,    43,    52,    98,   213,    97,   580,    96,
     115,   121,   196,   197,   198,   199,   201,   202,   585,   586,
     581,   134,    23,   553,    22,   449,   231,   231,   126,   576,
     517,    39,   142,   576,   173,   173,    35,   126,   639,   123,
     310,   311,   625,   626,   236,   442,   619,   191,   576,   115,
     435,   619,   435,    87,    88,    89,    92,    93,    94,    95,
      87,    88,   618,    89,    92,    93,    94,    95,   183,   640,
     280,   281,   271,   272,   293,   294,   296,   328,   272,   284,
     294,   328,   272,   282,   283,   294,   295,   344,   272,   294,
     295,   344,   242,   270,   272,   273,   274,   275,   276,   277,
     278,   287,   288,   289,   290,   291,   292,   302,   303,   304,
     242,   116,   446,   349,   295,   254,   364,   365,   366,   297,
     295,   298,   344,   271,   295,   353,   272,   356,   242,   344,
     263,   295,   300,   301,   370,   272,   294,   295,   344,   295,
     344,   272,   295,   344,   344,   272,   295,   298,   299,   344,
     242,   285,   295,   285,   286,   344,   295,   344,   529,   529,
     536,    43,   449,     9,   457,     9,    10,   449,   449,     9,
     555,   183,   473,   474,   449,    23,    43,    43,    43,    43,
      43,   555,   637,    52,    52,   225,     9,   630,   631,   630,
     225,   464,   142,   467,   600,   484,    97,   100,   101,   616,
     484,   120,   211,   212,   601,   601,   216,   217,   603,   603,
     582,   449,   449,   421,   421,   554,   576,   143,   144,   576,
     576,   178,   179,   431,    42,   446,   623,   624,    35,    20,
      32,    38,    59,    74,   233,   234,   388,   389,   390,   391,
     394,   395,   396,   508,   152,   175,   446,    39,   173,   435,
     576,    35,    39,   213,    42,   115,   183,   592,   213,    94,
     442,   281,   280,   324,   388,   555,    56,    57,    58,   325,
     251,   329,   330,   344,   555,   344,   555,   448,   242,   555,
     448,   242,    66,   123,   313,   314,   315,   337,   123,   338,
     338,   242,   448,   297,   255,   365,   367,   344,   448,   448,
     343,   242,   123,   310,   312,   352,   448,   242,   249,   357,
     358,   242,   357,   242,   344,   448,   343,   343,   264,   371,
     555,   448,   242,   448,   242,   343,   448,   242,   242,   343,
     448,   343,   343,   242,   448,   242,   448,   242,    45,    45,
      33,   118,   119,   446,   525,   517,   134,   517,   449,   517,
     132,     9,   132,   155,    43,   152,    35,    43,   449,   517,
      35,    43,    43,    42,   143,   144,   145,   213,   214,   215,
     602,   102,   144,   484,   484,   602,   200,    10,   175,   439,
      43,   444,   152,   622,   236,   626,   508,    19,    19,    42,
      42,    12,   446,   623,   395,    32,    38,    32,    38,   397,
     512,   555,   576,   576,   183,   592,   618,    42,   115,   595,
     213,   152,   175,   446,   123,   310,   311,   272,   282,   283,
     294,   295,   344,   242,   242,   123,   448,   344,   242,   242,
     272,   282,   294,   295,   344,   242,   344,   242,   344,   529,
     529,   527,   449,   152,   449,   517,   449,   449,   555,   555,
     152,   554,   631,   630,   576,   484,   484,   161,   449,    43,
     555,   446,   388,   508,   508,   392,   516,   618,   618,   389,
     622,   395,   395,   395,   395,    21,   175,   446,   435,   591,
     591,   205,   601,   596,   618,   618,   594,   594,   555,   555,
     448,   242,   242,   555,   448,   242,   242,    46,    48,   530,
      46,    48,   531,   529,   555,   132,   555,    10,    43,   484,
     446,   623,    43,    35,   446,   448,    35,    43,    43,   618,
     206,    35,    43,   164,   166,   597,   175,   446,   532,   534,
     533,   535,    28,   132,   449,   449,   622,   393,   514,   516,
      22,   592,   601,   618,   595,   595,    47,   116,   446,    49,
     117,   446,    47,   116,   446,    49,   117,   446,   449,   446,
      43,   206
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
#line 762 "../src/parser/XQParser.y"
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
#line 789 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:
#line 792 "../src/parser/XQParser.y"
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
#line 815 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:
#line 819 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:
#line 837 "../src/parser/XQParser.y"
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

  case 22:
#line 856 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:
#line 860 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:
#line 865 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:
#line 872 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:
#line 877 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:
#line 882 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:
#line 890 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:
#line 894 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:
#line 900 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:
#line 905 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:
#line 915 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 36:
#line 928 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:
#line 932 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:
#line 939 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:
#line 944 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:
#line 952 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:
#line 956 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:
#line 964 "../src/parser/XQParser.y"
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

  case 43:
#line 991 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:
#line 995 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:
#line 1002 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:
#line 1008 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:
#line 1013 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:
#line 1018 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:
#line 1027 "../src/parser/XQParser.y"
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

  case 50:
#line 1051 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:
#line 1055 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:
#line 1062 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:
#line 1067 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:
#line 1072 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:
#line 1077 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:
#line 1088 "../src/parser/XQParser.y"
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

  case 57:
#line 1106 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:
#line 1110 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:
#line 1117 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:
#line 1122 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:
#line 1130 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:
#line 1155 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:
#line 1158 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:
#line 1161 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:
#line 1164 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:
#line 1167 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:
#line 1170 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:
#line 1173 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:
#line 1176 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:
#line 1179 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:
#line 1182 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:
#line 1185 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:
#line 1188 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:
#line 1191 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:
#line 1194 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:
#line 1197 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:
#line 1200 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:
#line 1203 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:
#line 1206 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:
#line 1216 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 85:
#line 1228 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:
#line 1231 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:
#line 1239 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:
#line 1244 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:
#line 1249 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:
#line 1257 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:
#line 1265 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:
#line 1276 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:
#line 1286 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:
#line 1290 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:
#line 1297 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:
#line 1306 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:
#line 1310 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:
#line 1315 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 100:
#line 1328 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 101:
#line 1332 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:
#line 1337 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:
#line 1342 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 120:
#line 1369 "../src/parser/XQParser.y"
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

  case 121:
#line 1387 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 122:
#line 1391 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 123:
#line 1396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 124:
#line 1405 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 127:
#line 1414 "../src/parser/XQParser.y"
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

  case 128:
#line 1434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 129:
#line 1438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 130:
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 131:
#line 1451 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 132:
#line 1456 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 133:
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 134:
#line 1467 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 135:
#line 1471 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 136:
#line 1479 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 137:
#line 1492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 138:
#line 1496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 139:
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 140:
#line 1510 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 141:
#line 1518 "../src/parser/XQParser.y"
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

  case 142:
#line 1536 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 143:
#line 1540 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 144:
#line 1547 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 145:
#line 1552 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 146:
#line 1557 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 147:
#line 1565 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 148:
#line 1571 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 149:
#line 1579 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 150:
#line 1587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:
#line 1594 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 152:
#line 1608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 153:
#line 1612 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 154:
#line 1626 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 155:
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 156:
#line 1642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 157:
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 158:
#line 1653 "../src/parser/XQParser.y"
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

  case 159:
#line 1688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 160:
#line 1692 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 161:
#line 1697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 162:
#line 1703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 163:
#line 1712 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 164:
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 165:
#line 1723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:
#line 1727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:
#line 1734 "../src/parser/XQParser.y"
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

  case 168:
#line 1752 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 169:
#line 1756 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 170:
#line 1763 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 171:
#line 1768 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 172:
#line 1776 "../src/parser/XQParser.y"
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

  case 173:
#line 1794 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 174:
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 175:
#line 1806 "../src/parser/XQParser.y"
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

  case 176:
#line 1828 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 177:
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 178:
#line 1839 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 179:
#line 1847 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 180:
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 181:
#line 1864 "../src/parser/XQParser.y"
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

  case 182:
#line 1901 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 183:
#line 1905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 184:
#line 1912 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 185:
#line 1919 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 186:
#line 1928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 187:
#line 1937 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 188:
#line 1949 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 189:
#line 1953 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 190:
#line 1958 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 191:
#line 1967 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 192:
#line 1980 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 193:
#line 1984 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 194:
#line 1989 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 195:
#line 1998 "../src/parser/XQParser.y"
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

  case 196:
#line 2012 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 197:
#line 2016 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 198:
#line 2029 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 199:
#line 2034 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 200:
#line 2046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 201:
#line 2050 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 202:
#line 2058 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 203:
#line 2071 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 204:
#line 2079 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 205:
#line 2092 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 206:
#line 2099 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 211:
#line 2138 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 212:
#line 2142 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 213:
#line 2146 "../src/parser/XQParser.y"
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

  case 214:
#line 2164 "../src/parser/XQParser.y"
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

  case 215:
#line 2182 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 216:
#line 2192 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 217:
#line 2206 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 218:
#line 2214 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 219:
#line 2220 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 220:
#line 2226 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 221:
#line 2232 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 222:
#line 2243 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 223:
#line 2247 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 231:
#line 2277 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 232:
#line 2281 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 233:
#line 2285 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 234:
#line 2289 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 235:
#line 2293 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 236:
#line 2297 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 237:
#line 2303 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 238:
#line 2309 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:
#line 2335 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 247:
#line 2339 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 248:
#line 2343 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 249:
#line 2347 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 259:
#line 2376 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 260:
#line 2380 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 261:
#line 2384 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 262:
#line 2388 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 263:
#line 2392 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 264:
#line 2396 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 265:
#line 2402 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 266:
#line 2408 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 267:
#line 2412 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 275:
#line 2439 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 276:
#line 2443 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 277:
#line 2447 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 278:
#line 2451 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 279:
#line 2455 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 280:
#line 2459 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 281:
#line 2465 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 282:
#line 2471 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 287:
#line 2490 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 288:
#line 2495 "../src/parser/XQParser.y"
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

  case 291:
#line 2524 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 293:
#line 2538 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 294:
#line 2542 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 295:
#line 2546 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 296:
#line 2550 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 297:
#line 2554 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 298:
#line 2558 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 299:
#line 2564 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 300:
#line 2570 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 301:
#line 2574 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 313:
#line 2606 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 314:
#line 2614 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 315:
#line 2619 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 316:
#line 2628 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 317:
#line 2633 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 318:
#line 2642 "../src/parser/XQParser.y"
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

  case 319:
#line 2702 "../src/parser/XQParser.y"
    {
  }
    break;

  case 320:
#line 2709 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 321:
#line 2714 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 322:
#line 2723 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 323:
#line 2728 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 324:
#line 2737 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 325:
#line 2747 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 326:
#line 2751 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 327:
#line 2759 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 328:
#line 2763 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 329:
#line 2771 "../src/parser/XQParser.y"
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

  case 330:
#line 2787 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 331:
#line 2796 "../src/parser/XQParser.y"
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

  case 332:
#line 2808 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 333:
#line 2816 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 334:
#line 2820 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 335:
#line 2825 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 336:
#line 2834 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 337:
#line 2838 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 338:
#line 2846 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 339:
#line 2856 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 340:
#line 2868 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 341:
#line 2875 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 342:
#line 2879 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 343:
#line 2887 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 344:
#line 2892 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 345:
#line 2902 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 346:
#line 2906 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 347:
#line 2910 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 348:
#line 2914 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 349:
#line 2921 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 350:
#line 2925 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 351:
#line 2931 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 352:
#line 2935 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 353:
#line 2943 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 354:
#line 2948 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 355:
#line 2958 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 356:
#line 2966 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 357:
#line 2970 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 358:
#line 2978 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 359:
#line 2991 "../src/parser/XQParser.y"
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

  case 373:
#line 3029 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 374:
#line 3040 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 375:
#line 3044 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 376:
#line 3048 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 378:
#line 3056 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 379:
#line 3062 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 382:
#line 3075 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 383:
#line 3082 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 385:
#line 3090 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 386:
#line 3101 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 387:
#line 3105 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 388:
#line 3115 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 389:
#line 3119 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 390:
#line 3129 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 391:
#line 3136 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 393:
#line 3144 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 394:
#line 3148 "../src/parser/XQParser.y"
    {
  }
    break;

  case 395:
#line 3155 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 396:
#line 3163 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 397:
#line 3168 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 398:
#line 3176 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 400:
#line 3186 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 401:
#line 3193 "../src/parser/XQParser.y"
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

  case 402:
#line 3208 "../src/parser/XQParser.y"
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

  case 403:
#line 3224 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 404:
#line 3228 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 405:
#line 3232 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 406:
#line 3239 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 407:
#line 3248 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 408:
#line 3252 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 409:
#line 3261 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 410:
#line 3269 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 411:
#line 3280 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 413:
#line 3288 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 414:
#line 3299 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 415:
#line 3306 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 416:
#line 3311 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 417:
#line 3319 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 418:
#line 3323 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 419:
#line 3331 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 420:
#line 3335 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 421:
#line 3343 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 422:
#line 3351 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 424:
#line 3365 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 426:
#line 3384 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 427:
#line 3388 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 428:
#line 3391 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 429:
#line 3392 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 430:
#line 3396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 431:
#line 3400 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 432:
#line 3404 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:
#line 3408 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 434:
#line 3412 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:
#line 3416 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:
#line 3420 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:
#line 3424 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:
#line 3428 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:
#line 3432 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 440:
#line 3436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 441:
#line 3440 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 443:
#line 3449 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 444:
#line 3453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 446:
#line 3462 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:
#line 3471 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 449:
#line 3475 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 451:
#line 3484 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 452:
#line 3488 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 453:
#line 3492 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 454:
#line 3496 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 456:
#line 3505 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 457:
#line 3509 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 459:
#line 3518 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 460:
#line 3522 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 462:
#line 3531 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 464:
#line 3540 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 466:
#line 3550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 468:
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 470:
#line 3568 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 471:
#line 3574 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 476:
#line 3595 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 477:
#line 3599 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 478:
#line 3603 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 479:
#line 3611 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 480:
#line 3618 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 483:
#line 3631 "../src/parser/XQParser.y"
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

  case 485:
#line 3652 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 487:
#line 3661 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 488:
#line 3667 "../src/parser/XQParser.y"
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

  case 490:
#line 3692 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 491:
#line 3706 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 492:
#line 3712 "../src/parser/XQParser.y"
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

  case 496:
#line 3733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 497:
#line 3737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 498:
#line 3746 "../src/parser/XQParser.y"
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

  case 500:
#line 3769 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 501:
#line 3773 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 502:
#line 3777 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 503:
#line 3781 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 504:
#line 3785 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 505:
#line 3789 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 506:
#line 3793 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 507:
#line 3797 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 508:
#line 3805 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 509:
#line 3813 "../src/parser/XQParser.y"
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

  case 510:
#line 3830 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 512:
#line 3847 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 513:
#line 3851 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 514:
#line 3855 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 515:
#line 3859 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 516:
#line 3863 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 517:
#line 3871 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 518:
#line 3883 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 520:
#line 3893 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 522:
#line 3905 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 523:
#line 3912 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 524:
#line 3919 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 525:
#line 3930 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 526:
#line 3939 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 527:
#line 3943 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 543:
#line 3974 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 545:
#line 3985 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 546:
#line 3989 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 547:
#line 3997 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 548:
#line 4005 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 549:
#line 4015 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 550:
#line 4025 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 551:
#line 4029 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 552:
#line 4036 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 553:
#line 4041 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 554:
#line 4050 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 555:
#line 4054 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 559:
#line 4067 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 560:
#line 4073 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 563:
#line 4086 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 564:
#line 4090 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 565:
#line 4099 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 568:
#line 4115 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 569:
#line 4119 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 570:
#line 4126 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 571:
#line 4130 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 572:
#line 4140 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 573:
#line 4144 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 574:
#line 4149 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 575:
#line 4162 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 576:
#line 4166 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 577:
#line 4170 "../src/parser/XQParser.y"
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
#line 4186 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 579:
#line 4190 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 580:
#line 4195 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 581:
#line 4208 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 582:
#line 4212 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 583:
#line 4216 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 584:
#line 4236 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 585:
#line 4240 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 586:
#line 4245 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 587:
#line 4250 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 588:
#line 4260 "../src/parser/XQParser.y"
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

  case 589:
#line 4276 "../src/parser/XQParser.y"
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

  case 590:
#line 4290 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 592:
#line 4299 "../src/parser/XQParser.y"
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

  case 594:
#line 4321 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 601:
#line 4344 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 602:
#line 4352 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 603:
#line 4360 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 604:
#line 4364 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 605:
#line 4372 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 606:
#line 4376 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 607:
#line 4385 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 608:
#line 4393 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 609:
#line 4401 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 610:
#line 4409 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 611:
#line 4416 "../src/parser/XQParser.y"
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

  case 612:
#line 4429 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 613:
#line 4436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 614:
#line 4440 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 615:
#line 4448 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 616:
#line 4458 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 617:
#line 4462 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 618:
#line 4470 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 619:
#line 4474 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 620:
#line 4484 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 621:
#line 4491 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 622:
#line 4500 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 623:
#line 4502 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 624:
#line 4504 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 625:
#line 4506 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 626:
#line 4512 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 627:
#line 4516 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 641:
#line 4551 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 642:
#line 4559 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 643:
#line 4563 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 644:
#line 4568 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 645:
#line 4577 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 646:
#line 4585 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 647:
#line 4593 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 648:
#line 4597 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 649:
#line 4601 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 650:
#line 4609 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 651:
#line 4613 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 652:
#line 4617 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 654:
#line 4626 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 655:
#line 4634 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 657:
#line 4647 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 658:
#line 4651 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 659:
#line 4655 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 660:
#line 4659 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 662:
#line 4669 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 663:
#line 4677 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 668:
#line 4697 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 669:
#line 4709 "../src/parser/XQParser.y"
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

  case 670:
#line 4721 "../src/parser/XQParser.y"
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

  case 671:
#line 4736 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 672:
#line 4740 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 673:
#line 4744 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 674:
#line 4754 "../src/parser/XQParser.y"
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

  case 676:
#line 4770 "../src/parser/XQParser.y"
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

  case 678:
#line 4786 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 680:
#line 4795 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 682:
#line 4804 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 684:
#line 4813 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 685:
#line 4817 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 686:
#line 4821 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 687:
#line 4825 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 688:
#line 4829 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 689:
#line 4843 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 690:
#line 4847 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 691:
#line 4851 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 692:
#line 4855 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 693:
#line 4860 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 694:
#line 4864 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 695:
#line 4868 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 696:
#line 4872 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 697:
#line 4876 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 705:
#line 4904 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 706:
#line 4908 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 707:
#line 4912 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 708:
#line 4916 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 709:
#line 4927 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 710:
#line 4931 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 711:
#line 4935 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 712:
#line 4939 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 713:
#line 4947 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 714:
#line 4951 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 715:
#line 4961 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 716:
#line 4965 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 717:
#line 4969 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 718:
#line 4973 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 719:
#line 4977 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 720:
#line 4984 "../src/parser/XQParser.y"
    {
  }
    break;

  case 721:
#line 4987 "../src/parser/XQParser.y"
    {
  }
    break;

  case 722:
#line 4994 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 723:
#line 4998 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 724:
#line 5002 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 725:
#line 5006 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 726:
#line 5016 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 727:
#line 5020 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 728:
#line 5024 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 729:
#line 5031 "../src/parser/XQParser.y"
    {
  }
    break;

  case 730:
#line 5034 "../src/parser/XQParser.y"
    {
  }
    break;

  case 731:
#line 5042 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 732:
#line 5046 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 733:
#line 5053 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 734:
#line 5057 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 735:
#line 5065 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 736:
#line 5069 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 737:
#line 5077 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 738:
#line 5085 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 739:
#line 5089 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 740:
#line 5097 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 741:
#line 5101 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 742:
#line 5105 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 743:
#line 5109 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 744:
#line 5113 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 745:
#line 5117 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 746:
#line 5128 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 747:
#line 5134 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 748:
#line 5140 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 749:
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 750:
#line 5156 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 751:
#line 5160 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 752:
#line 5164 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 753:
#line 5172 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 754:
#line 5176 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 755:
#line 5184 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 756:
#line 5192 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 757:
#line 5197 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 758:
#line 5202 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 759:
#line 5214 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 760:
#line 5218 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 761:
#line 5222 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 762:
#line 5226 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 763:
#line 5230 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 766:
#line 5241 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 769:
#line 5252 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 770:
#line 5256 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 771:
#line 5266 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 772:
#line 5274 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 773:
#line 5281 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 774:
#line 5286 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 775:
#line 5294 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 776:
#line 5303 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 777:
#line 5316 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 778:
#line 5329 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 779:
#line 5343 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 780:
#line 5355 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 781:
#line 5364 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 782:
#line 5376 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 783:
#line 5380 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 784:
#line 5384 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 785:
#line 5389 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 786:
#line 5394 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 787:
#line 5399 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 788:
#line 5407 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 789:
#line 5411 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 790:
#line 5419 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 791:
#line 5423 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 792:
#line 5430 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 793:
#line 5435 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 794:
#line 5443 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 795:
#line 5448 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 796:
#line 5457 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 797:
#line 5461 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 798:
#line 5465 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 799:
#line 5473 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 800:
#line 5477 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 801:
#line 5485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 802:
#line 5489 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 803:
#line 5493 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 804:
#line 5497 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 805:
#line 5505 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 806:
#line 5509 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 807:
#line 5513 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 808:
#line 5521 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 809:
#line 5526 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 810:
#line 5536 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 813:
#line 5553 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 814:
#line 5561 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 815:
#line 5570 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 816:
#line 5575 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 817:
#line 5584 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 818:
#line 5588 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 819:
#line 5592 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 820:
#line 5599 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 821:
#line 5604 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 822:
#line 5613 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 10618 "../src/parser/XQParser.cpp"
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


#line 5647 "../src/parser/XQParser.y"


}  // namespace XQParser


