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
     _XSLT_ELEMENT_ = 517,
     _XSLT_ANALYZE_STRING_ = 518,
     _XSLT_MATCHING_SUBSTRING_ = 519,
     _XSLT_NON_MATCHING_SUBSTRING_ = 520,
     _XSLT_COPY_OF_ = 521,
     _XSLT_COPY_ = 522,
     _XSLT_FOR_EACH_ = 523,
     _XSLT_OUTPUT_ = 524,
     _XSLT_IMPORT_SCHEMA_ = 525,
     _XSLT_VERSION_ = 526,
     _XSLT_MODE_ = 527,
     _XSLT_NAME_ = 528,
     _XSLT_DOCTYPE_PUBLIC_ = 529,
     _XSLT_DOCTYPE_SYSTEM_ = 530,
     _XSLT_ENCODING_ = 531,
     _XSLT_MEDIA_TYPE_ = 532,
     _XSLT_NORMALIZATION_FORM_ = 533,
     _XSLT_STANDALONE_ = 534,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 535,
     _XSLT_NAMESPACE_STR_ = 536,
     _XSLT_SCHEMA_LOCATION_ = 537,
     _XSLT_TUNNEL_ = 538,
     _XSLT_REQUIRED_ = 539,
     _XSLT_OVERRIDE_ = 540,
     _XSLT_COPY_NAMESPACES_ = 541,
     _XSLT_INHERIT_NAMESPACES_ = 542,
     _XSLT_BYTE_ORDER_MARK_ = 543,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 544,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 545,
     _XSLT_INDENT_ = 546,
     _XSLT_OMIT_XML_DECLARATION_ = 547,
     _XSLT_UNDECLARE_PREFIXES_ = 548,
     _XSLT_MATCH_ = 549,
     _XSLT_AS_ = 550,
     _XSLT_SELECT_ = 551,
     _XSLT_PRIORITY_ = 552,
     _XSLT_TEST_ = 553,
     _XSLT_SEPARATOR_ = 554,
     _XSLT_NAMESPACE_A_ = 555,
     _XSLT_REGEX_ = 556,
     _XSLT_FLAGS_ = 557,
     _XSLT_METHOD_ = 558,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 559,
     _XSLT_USE_CHARACTER_MAPS_ = 560,
     _XSLT_ELEMENT_NAME_ = 561,
     _XSLT_XMLNS_ATTR_ = 562,
     _XSLT_ATTR_NAME_ = 563,
     _XSLT_TEXT_NODE_ = 564,
     _XSLT_WS_TEXT_NODE_ = 565,
     _HASH_DEFAULT_ = 566,
     _HASH_ALL_ = 567,
     _HASH_CURRENT_ = 568,
     _XML_ = 569,
     _HTML_ = 570,
     _XHTML_ = 571
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
#define _XSLT_ELEMENT_ 517
#define _XSLT_ANALYZE_STRING_ 518
#define _XSLT_MATCHING_SUBSTRING_ 519
#define _XSLT_NON_MATCHING_SUBSTRING_ 520
#define _XSLT_COPY_OF_ 521
#define _XSLT_COPY_ 522
#define _XSLT_FOR_EACH_ 523
#define _XSLT_OUTPUT_ 524
#define _XSLT_IMPORT_SCHEMA_ 525
#define _XSLT_VERSION_ 526
#define _XSLT_MODE_ 527
#define _XSLT_NAME_ 528
#define _XSLT_DOCTYPE_PUBLIC_ 529
#define _XSLT_DOCTYPE_SYSTEM_ 530
#define _XSLT_ENCODING_ 531
#define _XSLT_MEDIA_TYPE_ 532
#define _XSLT_NORMALIZATION_FORM_ 533
#define _XSLT_STANDALONE_ 534
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 535
#define _XSLT_NAMESPACE_STR_ 536
#define _XSLT_SCHEMA_LOCATION_ 537
#define _XSLT_TUNNEL_ 538
#define _XSLT_REQUIRED_ 539
#define _XSLT_OVERRIDE_ 540
#define _XSLT_COPY_NAMESPACES_ 541
#define _XSLT_INHERIT_NAMESPACES_ 542
#define _XSLT_BYTE_ORDER_MARK_ 543
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 544
#define _XSLT_INCLUDE_CONTENT_TYPE_ 545
#define _XSLT_INDENT_ 546
#define _XSLT_OMIT_XML_DECLARATION_ 547
#define _XSLT_UNDECLARE_PREFIXES_ 548
#define _XSLT_MATCH_ 549
#define _XSLT_AS_ 550
#define _XSLT_SELECT_ 551
#define _XSLT_PRIORITY_ 552
#define _XSLT_TEST_ 553
#define _XSLT_SEPARATOR_ 554
#define _XSLT_NAMESPACE_A_ 555
#define _XSLT_REGEX_ 556
#define _XSLT_FLAGS_ 557
#define _XSLT_METHOD_ 558
#define _XSLT_CDATA_SECTION_ELEMENTS_ 559
#define _XSLT_USE_CHARACTER_MAPS_ 560
#define _XSLT_ELEMENT_NAME_ 561
#define _XSLT_XMLNS_ATTR_ 562
#define _XSLT_ATTR_NAME_ 563
#define _XSLT_TEXT_NODE_ 564
#define _XSLT_WS_TEXT_NODE_ 565
#define _HASH_DEFAULT_ 566
#define _HASH_ALL_ 567
#define _HASH_CURRENT_ 568
#define _XML_ 569
#define _HTML_ 570
#define _XHTML_ 571




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
#line 1065 "../src/parser/XQParser.cpp"

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
#define YYLAST   8166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  317
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  327
/* YYNRULES -- Number of rules.  */
#define YYNRULES  991
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1631

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   571

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
     315,   316
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
     337,   339,   343,   345,   349,   353,   357,   359,   361,   365,
     367,   371,   375,   377,   379,   381,   382,   385,   389,   391,
     394,   395,   398,   402,   404,   407,   411,   415,   418,   421,
     425,   429,   433,   438,   440,   443,   447,   451,   452,   456,
     461,   463,   467,   471,   475,   476,   480,   481,   485,   490,
     492,   495,   499,   503,   507,   509,   513,   517,   519,   523,
     527,   531,   533,   537,   539,   543,   547,   551,   555,   559,
     561,   565,   569,   572,   574,   578,   581,   585,   587,   590,
     593,   597,   599,   603,   607,   609,   611,   613,   615,   617,
     619,   624,   631,   633,   635,   637,   639,   641,   644,   648,
     652,   656,   660,   663,   665,   669,   673,   676,   677,   682,
     685,   688,   690,   692,   695,   698,   699,   703,   707,   711,
     715,   719,   723,   727,   731,   733,   735,   737,   739,   741,
     743,   745,   751,   759,   765,   773,   775,   777,   780,   783,
     785,   787,   790,   793,   794,   798,   802,   806,   810,   814,
     818,   822,   826,   830,   833,   836,   838,   840,   843,   846,
     847,   851,   855,   859,   863,   867,   871,   875,   879,   882,
     885,   887,   889,   894,   901,   904,   907,   914,   915,   919,
     923,   927,   931,   935,   939,   943,   947,   951,   953,   955,
     957,   959,   961,   963,   965,   967,   969,   971,   973,   979,
     983,   987,   993,   999,  1004,  1008,  1012,  1016,  1022,  1028,
    1034,  1036,  1038,  1040,  1042,  1047,  1051,  1057,  1062,  1063,
    1066,  1070,  1074,  1078,  1086,  1091,  1098,  1101,  1103,  1107,
    1111,  1118,  1127,  1134,  1143,  1146,  1150,  1151,  1153,  1157,
    1159,  1163,  1167,  1171,  1173,  1177,  1179,  1181,  1183,  1185,
    1187,  1189,  1191,  1193,  1195,  1197,  1199,  1201,  1203,  1207,
    1211,  1214,  1217,  1219,  1222,  1225,  1227,  1229,  1232,  1236,
    1238,  1246,  1247,  1251,  1252,  1256,  1259,  1263,  1265,  1272,
    1278,  1281,  1285,  1290,  1294,  1296,  1300,  1306,  1308,  1309,
    1311,  1313,  1314,  1317,  1320,  1325,  1330,  1334,  1336,  1342,
    1349,  1352,  1354,  1360,  1364,  1369,  1377,  1386,  1390,  1392,
    1396,  1398,  1402,  1406,  1407,  1412,  1416,  1420,  1424,  1428,
    1432,  1436,  1440,  1444,  1448,  1452,  1456,  1460,  1462,  1466,
    1471,  1473,  1477,  1479,  1483,  1487,  1489,  1493,  1497,  1501,
    1505,  1507,  1511,  1515,  1517,  1521,  1525,  1527,  1532,  1534,
    1539,  1541,  1546,  1548,  1553,  1555,  1558,  1561,  1563,  1565,
    1567,  1569,  1574,  1580,  1586,  1590,  1595,  1597,  1600,  1605,
    1607,  1610,  1612,  1615,  1618,  1620,  1622,  1626,  1630,  1632,
    1634,  1636,  1639,  1642,  1645,  1647,  1650,  1653,  1656,  1659,
    1662,  1665,  1668,  1671,  1674,  1676,  1679,  1681,  1684,  1687,
    1690,  1693,  1696,  1698,  1700,  1702,  1704,  1706,  1708,  1710,
    1712,  1715,  1716,  1721,  1723,  1725,  1727,  1729,  1731,  1733,
    1735,  1737,  1739,  1741,  1743,  1745,  1747,  1749,  1751,  1754,
    1756,  1760,  1763,  1765,  1770,  1775,  1779,  1784,  1788,  1790,
    1792,  1794,  1796,  1798,  1800,  1806,  1817,  1819,  1821,  1822,
    1830,  1838,  1839,  1841,  1845,  1849,  1853,  1857,  1858,  1861,
    1864,  1865,  1868,  1871,  1872,  1875,  1878,  1879,  1882,  1885,
    1886,  1889,  1892,  1895,  1898,  1902,  1903,  1905,  1909,  1911,
    1914,  1916,  1918,  1920,  1922,  1924,  1926,  1931,  1935,  1937,
    1941,  1944,  1948,  1952,  1957,  1962,  1966,  1968,  1972,  1975,
    1979,  1982,  1983,  1985,  1986,  1989,  1992,  1996,  1997,  1999,
    2001,  2003,  2005,  2009,  2011,  2013,  2015,  2017,  2019,  2021,
    2023,  2025,  2027,  2029,  2031,  2033,  2035,  2039,  2043,  2048,
    2053,  2057,  2061,  2065,  2070,  2075,  2079,  2084,  2091,  2093,
    2095,  2100,  2102,  2106,  2111,  2118,  2126,  2128,  2130,  2135,
    2137,  2139,  2141,  2143,  2145,  2150,  2153,  2154,  2157,  2160,
    2164,  2166,  2170,  2172,  2177,  2179,  2182,  2184,  2188,  2190,
    2193,  2196,  2199,  2202,  2207,  2209,  2213,  2217,  2221,  2224,
    2227,  2230,  2233,  2236,  2238,  2240,  2242,  2244,  2246,  2248,
    2250,  2252,  2254,  2257,  2260,  2263,  2266,  2269,  2272,  2275,
    2278,  2282,  2286,  2293,  2300,  2303,  2304,  2308,  2311,  2316,
    2321,  2328,  2334,  2338,  2344,  2345,  2348,  2351,  2355,  2357,
    2361,  2364,  2367,  2370,  2373,  2376,  2377,  2379,  2382,  2384,
    2387,  2389,  2392,  2396,  2400,  2405,  2407,  2409,  2411,  2413,
    2415,  2419,  2423,  2427,  2431,  2438,  2445,  2450,  2455,  2460,
    2463,  2466,  2469,  2472,  2475,  2483,  2489,  2495,  2502,  2506,
    2508,  2513,  2515,  2517,  2519,  2521,  2523,  2525,  2531,  2539,
    2548,  2559,  2566,  2575,  2576,  2579,  2582,  2586,  2587,  2590,
    2592,  2596,  2598,  2600,  2602,  2606,  2614,  2618,  2626,  2632,
    2642,  2644,  2646,  2648,  2650,  2654,  2660,  2662,  2664,  2668,
    2673,  2677,  2682,  2686,  2692,  2699,  2701,  2705,  2709,  2711,
    2713,  2715,  2717,  2719,  2721,  2723,  2725,  2727,  2729,  2731,
    2733,  2735,  2737,  2739,  2741,  2743,  2745,  2747,  2749,  2751,
    2753,  2755,  2757,  2759,  2761,  2763,  2765,  2767,  2769,  2771,
    2773,  2775,  2777,  2779,  2781,  2783,  2785,  2787,  2789,  2791,
    2793,  2795,  2797,  2799,  2801,  2803,  2805,  2807,  2809,  2811,
    2813,  2815,  2817,  2819,  2821,  2823,  2825,  2827,  2829,  2831,
    2833,  2835,  2837,  2839,  2841,  2843,  2845,  2847,  2849,  2851,
    2853,  2855,  2857,  2859,  2861,  2863,  2865,  2867,  2869,  2871,
    2873,  2875,  2877,  2879,  2881,  2883,  2885,  2887,  2889,  2891,
    2893,  2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,
    2913,  2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,
    2933,  2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,
    2953,  2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,
    2973,  2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,
    2993,  2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,
    3013,  3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,
    3033,  3035
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     318,     0,    -1,     3,   450,    -1,     4,   401,    -1,     5,
     408,    -1,     6,   412,    -1,     7,   416,    -1,     8,   319,
      -1,   320,    -1,   243,   321,   322,   242,    -1,   342,    -1,
      -1,   321,   271,    -1,   321,   280,    -1,    -1,   322,   323,
      -1,   322,   327,    -1,   322,   332,    -1,   322,   334,    -1,
     322,   336,    -1,   322,   340,    -1,   324,   329,   345,   242,
      -1,   244,    -1,   324,   294,   391,    -1,   324,   273,    -1,
     324,   297,   326,    -1,   324,   272,   325,    -1,   324,   295,
     558,    -1,    -1,   325,   123,    -1,   325,   311,    -1,   325,
     312,    -1,    56,    -1,    57,    -1,    58,    -1,   328,   329,
     345,   242,    -1,   252,    -1,   328,   273,    -1,   328,   295,
     558,    -1,   328,   285,    -1,    -1,   329,   330,    -1,   331,
     345,   242,    -1,   251,    -1,   331,   273,    -1,   331,   296,
     451,    -1,   331,   295,   558,    -1,   331,   284,    -1,   331,
     283,    -1,   333,   345,   242,    -1,   251,    -1,   333,   273,
      -1,   333,   296,   451,    -1,   333,   295,   558,    -1,   333,
     284,    -1,   333,   283,    -1,   335,   345,   242,    -1,   257,
      -1,   335,   273,    -1,   335,   296,   451,    -1,   335,   295,
     558,    -1,   337,   242,    -1,   269,    -1,   337,   273,    -1,
     337,   303,   338,    -1,   337,   288,    -1,   337,   304,   339,
      -1,   337,   274,    -1,   337,   275,    -1,   337,   276,    -1,
     337,   289,    -1,   337,   290,    -1,   337,   291,    -1,   337,
     277,    -1,   337,   278,    -1,   337,   292,    -1,   337,   279,
      -1,   337,   293,    -1,   337,   305,   339,    -1,   337,   271,
      -1,   314,    -1,   315,    -1,   316,    -1,    66,    -1,   123,
      -1,   123,    -1,   339,   123,    -1,   341,   242,    -1,   270,
      -1,   270,   281,    -1,   270,   282,    -1,   270,   281,   282,
      -1,   270,   282,   281,    -1,   306,   343,   345,   242,    -1,
      -1,   343,   308,   344,    -1,   343,   307,    -1,    -1,   344,
     449,    -1,   344,   116,    -1,    -1,   345,   350,    -1,   345,
     342,    -1,   345,   346,    -1,   347,    -1,   349,    -1,   351,
      -1,   355,    -1,   360,    -1,   364,    -1,   362,    -1,   373,
      -1,   375,    -1,   377,    -1,   379,    -1,   381,    -1,   383,
      -1,   369,    -1,   385,    -1,   387,    -1,   389,    -1,   348,
     345,   242,    -1,   245,    -1,   348,   296,   451,    -1,   348,
     299,   344,    -1,   246,   350,   242,    -1,   309,    -1,   310,
      -1,   352,   354,   242,    -1,   247,    -1,   352,   296,   451,
      -1,   352,   272,   353,    -1,   123,    -1,   311,    -1,   313,
      -1,    -1,   354,   358,    -1,   356,   357,   242,    -1,   248,
      -1,   356,   273,    -1,    -1,   357,   358,    -1,   359,   345,
     242,    -1,   249,    -1,   359,   273,    -1,   359,   296,   451,
      -1,   359,   295,   558,    -1,   359,   283,    -1,   361,   242,
      -1,   250,   296,   451,    -1,   363,   345,   242,    -1,   256,
     298,   451,    -1,   253,   365,   368,   242,    -1,   366,    -1,
     365,   366,    -1,   367,   345,   242,    -1,   254,   298,   451,
      -1,    -1,   255,   345,   242,    -1,   370,   371,   372,   242,
      -1,   263,    -1,   370,   296,   451,    -1,   370,   301,   344,
      -1,   370,   302,   344,    -1,    -1,   264,   345,   242,    -1,
      -1,   265,   345,   242,    -1,   374,   345,   242,   345,    -1,
     257,    -1,   374,   273,    -1,   374,   296,   451,    -1,   374,
     295,   558,    -1,   376,   345,   242,    -1,   258,    -1,   376,
     296,   451,    -1,   378,   345,   242,    -1,   259,    -1,   378,
     273,   344,    -1,   378,   296,   451,    -1,   380,   345,   242,
      -1,   260,    -1,   382,   345,   242,    -1,   261,    -1,   382,
     273,   344,    -1,   382,   300,   344,    -1,   382,   296,   451,
      -1,   382,   299,   344,    -1,   384,   345,   242,    -1,   262,
      -1,   384,   273,   344,    -1,   384,   300,   344,    -1,   386,
     242,    -1,   266,    -1,   386,   296,   451,    -1,   386,   286,
      -1,   388,   345,   242,    -1,   267,    -1,   388,   286,    -1,
     388,   287,    -1,   390,   345,   242,    -1,   268,    -1,   390,
     296,   451,    -1,   391,    12,   392,    -1,   392,    -1,   397,
      -1,    38,    -1,   394,    -1,    38,    -1,    32,    -1,   233,
      42,   395,    43,    -1,   234,    42,   621,    35,   396,    43,
      -1,   621,    -1,   519,    -1,   517,    -1,   519,    -1,   398,
      -1,   393,   398,    -1,   394,    38,   398,    -1,   394,    32,
     398,    -1,   397,    38,   398,    -1,   397,    32,   398,    -1,
     399,   400,    -1,   511,    -1,    74,    19,   511,    -1,    59,
      19,   511,    -1,    20,   511,    -1,    -1,   515,    21,   451,
      22,    -1,   417,   402,    -1,   417,   403,    -1,   402,    -1,
     403,    -1,   404,   450,    -1,   420,   404,    -1,    -1,   404,
     405,   424,    -1,   404,   423,   424,    -1,   404,   425,   424,
      -1,   404,   427,   424,    -1,   404,   441,   424,    -1,   404,
     406,   424,    -1,   404,   624,   424,    -1,   404,   428,   424,
      -1,   426,    -1,   435,    -1,   436,    -1,   443,    -1,   430,
      -1,   431,    -1,   432,    -1,   180,   407,   643,   445,   449,
      -1,   180,   407,   643,   445,   152,   558,   449,    -1,   180,
     407,   643,   445,   175,    -1,   180,   407,   643,   445,   152,
     558,   175,    -1,   192,    -1,   193,    -1,   417,   409,    -1,
     417,   410,    -1,   409,    -1,   410,    -1,   411,   450,    -1,
     420,   411,    -1,    -1,   411,   405,   424,    -1,   411,   423,
     424,    -1,   411,   425,   424,    -1,   411,   427,   424,    -1,
     411,   441,   424,    -1,   411,   406,   424,    -1,   411,   624,
     424,    -1,   411,   428,   424,    -1,   411,   429,   424,    -1,
     417,   413,    -1,   417,   414,    -1,   413,    -1,   414,    -1,
     415,   450,    -1,   420,   415,    -1,    -1,   415,   422,   424,
      -1,   415,   423,   424,    -1,   415,   425,   424,    -1,   415,
     427,   424,    -1,   415,   441,   424,    -1,   415,   444,   424,
      -1,   415,   624,   424,    -1,   415,   428,   424,    -1,   417,
     418,    -1,   417,   419,    -1,   418,    -1,   419,    -1,   186,
     187,   126,   424,    -1,   186,   187,   126,   176,   126,   424,
      -1,   421,   450,    -1,   420,   421,    -1,   190,   173,   622,
      39,   579,   424,    -1,    -1,   421,   422,   424,    -1,   421,
     423,   424,    -1,   421,   425,   424,    -1,   421,   427,   424,
      -1,   421,   441,   424,    -1,   421,   444,   424,    -1,   421,
     624,   424,    -1,   421,   428,   424,    -1,   421,   429,   424,
      -1,   426,    -1,   435,    -1,   436,    -1,   443,    -1,   430,
      -1,   431,    -1,   608,    -1,   432,    -1,   437,    -1,   440,
      -1,    53,    -1,   180,   173,   622,    39,   579,    -1,   180,
      68,   171,    -1,   180,    68,   172,    -1,   180,   183,   191,
     173,   579,    -1,   180,   183,   407,   173,   579,    -1,   180,
     185,   642,   126,    -1,   180,    69,   589,    -1,   180,   182,
     121,    -1,   180,   182,   122,    -1,   180,   183,   138,   142,
     143,    -1,   180,   183,   138,   142,   144,    -1,   180,   184,
     433,    35,   434,    -1,   171,    -1,   177,    -1,   178,    -1,
     179,    -1,   180,   183,   145,   579,    -1,   180,    70,   579,
      -1,   188,   189,   439,   579,   438,    -1,   188,   189,   579,
     438,    -1,    -1,   115,   579,    -1,   438,    35,   579,    -1,
     173,   622,    39,    -1,   183,   191,   173,    -1,   188,   190,
     173,   622,    39,   579,   438,    -1,   188,   190,   579,   438,
      -1,   180,   127,     9,   520,   557,   442,    -1,    10,   452,
      -1,   175,    -1,   180,   181,   171,    -1,   180,   181,   172,
      -1,   180,   446,   407,   643,   445,   449,    -1,   180,   446,
     407,   643,   445,   152,   558,   449,    -1,   180,   446,   407,
     643,   445,   175,    -1,   180,   446,   407,   643,   445,   152,
     558,   175,    -1,    42,    43,    -1,    42,   447,    43,    -1,
      -1,   232,    -1,   447,    35,   448,    -1,   448,    -1,     9,
     520,   557,    -1,    50,   451,    52,    -1,    51,   451,    52,
      -1,   451,    -1,   451,    35,   452,    -1,   452,    -1,   453,
      -1,   471,    -1,   474,    -1,   478,    -1,   609,    -1,   611,
      -1,   614,    -1,   613,    -1,   615,    -1,   479,    -1,   630,
      -1,   631,    -1,   454,   132,   452,    -1,   455,   464,   465,
      -1,   455,   464,    -1,   455,   465,    -1,   455,    -1,   455,
     456,    -1,   455,   461,    -1,   456,    -1,   461,    -1,   133,
     457,    -1,   457,    35,   458,    -1,   458,    -1,     9,   520,
     557,   459,   460,   134,   452,    -1,    -1,   115,     9,   520,
      -1,    -1,   194,     9,   520,    -1,   135,   462,    -1,   462,
      35,   463,    -1,   463,    -1,     9,   520,   557,   460,    10,
     452,    -1,   194,     9,   520,    10,   452,    -1,   136,   452,
      -1,   138,   137,   466,    -1,   139,   138,   137,   466,    -1,
     466,    35,   467,    -1,   467,    -1,   468,   469,   470,    -1,
     468,   469,   470,   145,   579,    -1,   452,    -1,    -1,   140,
      -1,   141,    -1,    -1,   142,   143,    -1,   142,   144,    -1,
     146,   472,   148,   452,    -1,   147,   472,   148,   452,    -1,
     472,    35,   473,    -1,   473,    -1,     9,   520,   557,   134,
     452,    -1,   149,    42,   451,    43,   475,   476,    -1,   475,
     477,    -1,   477,    -1,   183,     9,   520,   132,   452,    -1,
     183,   132,   452,    -1,   150,   558,   132,   452,    -1,   150,
       9,   520,   152,   558,   132,   452,    -1,   153,    42,   451,
      43,   154,   452,   155,   452,    -1,   479,   156,   480,    -1,
     480,    -1,   480,   157,   481,    -1,   481,    -1,   483,    39,
     483,    -1,   483,    13,   483,    -1,    -1,   483,    26,   482,
     483,    -1,   483,    14,   483,    -1,   483,    15,   483,    -1,
     483,    16,   483,    -1,   483,   109,   483,    -1,   483,   110,
     483,    -1,   483,   111,   483,    -1,   483,   112,   483,    -1,
     483,   113,   483,    -1,   483,   114,   483,    -1,   483,   170,
     483,    -1,   483,    17,   483,    -1,   483,    18,   483,    -1,
     483,    -1,   484,   195,   580,    -1,   484,   195,   580,   607,
      -1,   484,    -1,   485,   161,   485,    -1,   485,    -1,   485,
      36,   486,    -1,   485,    37,   486,    -1,   486,    -1,   486,
      11,   487,    -1,   486,   162,   487,    -1,   486,    73,   487,
      -1,   486,   163,   487,    -1,   487,    -1,   487,    12,   488,
      -1,   487,   164,   488,    -1,   488,    -1,   488,   165,   489,
      -1,   488,   166,   489,    -1,   489,    -1,   490,   158,   159,
     558,    -1,   490,    -1,   491,   169,   152,   558,    -1,   491,
      -1,   492,   160,   152,   555,    -1,   492,    -1,   493,   168,
     152,   555,    -1,   493,    -1,    37,   493,    -1,    36,   493,
      -1,   494,    -1,   495,    -1,   500,    -1,   496,    -1,   167,
      51,   451,    52,    -1,   167,    71,    51,   451,    52,    -1,
     167,    72,    51,   451,    52,    -1,   497,    51,    52,    -1,
     497,    51,   451,    52,    -1,   498,    -1,   497,   498,    -1,
      34,   532,   642,   499,    -1,   131,    -1,   106,   131,    -1,
     501,    -1,   501,   502,    -1,    32,   502,    -1,   502,    -1,
      38,    -1,   502,    38,   503,    -1,   502,    32,   503,    -1,
     503,    -1,   504,    -1,   514,    -1,   505,   515,    -1,   508,
     515,    -1,   506,   511,    -1,   507,    -1,    74,    19,    -1,
      75,    19,    -1,    59,    19,    -1,    76,    19,    -1,    77,
      19,    -1,    78,    19,    -1,    79,    19,    -1,   173,    19,
      -1,    20,   511,    -1,   511,    -1,   509,   511,    -1,   510,
      -1,    80,    19,    -1,    81,    19,    -1,    82,    19,    -1,
      83,    19,    -1,    84,    19,    -1,    41,    -1,   562,    -1,
     512,    -1,   623,    -1,   513,    -1,    11,    -1,   128,    -1,
     129,    -1,   516,   515,    -1,    -1,   515,    21,   451,    22,
      -1,   517,    -1,   519,    -1,   521,    -1,   522,    -1,   525,
      -1,   527,    -1,   523,    -1,   524,    -1,   635,    -1,   638,
      -1,   518,    -1,   621,    -1,   618,    -1,   619,    -1,   620,
      -1,     9,   520,    -1,   642,    -1,    42,   451,    43,    -1,
      42,    43,    -1,    40,    -1,   121,    51,   451,    52,    -1,
     122,    51,   451,    52,    -1,   643,    42,    43,    -1,   643,
      42,   526,    43,    -1,   526,    35,   452,    -1,   452,    -1,
     528,    -1,   544,    -1,   529,    -1,   540,    -1,   542,    -1,
      26,   530,   531,   532,    44,    -1,    26,   530,   531,   532,
      27,   539,    33,   530,   532,    28,    -1,   123,    -1,   124,
      -1,    -1,   531,   106,   123,   532,    45,   532,   533,    -1,
     531,   106,   124,   532,    45,   532,   534,    -1,    -1,   106,
      -1,    46,   535,    47,    -1,    48,   537,    49,    -1,    46,
     536,    47,    -1,    48,   538,    49,    -1,    -1,   535,   449,
      -1,   535,   116,    -1,    -1,   536,   449,    -1,   536,   116,
      -1,    -1,   537,   449,    -1,   537,   117,    -1,    -1,   538,
     449,    -1,   538,   117,    -1,    -1,   539,   528,    -1,   539,
     449,    -1,   539,   119,    -1,   539,   118,    -1,    30,   541,
      31,    -1,    -1,   108,    -1,    29,   130,   543,    -1,   107,
      -1,   106,   107,    -1,   545,    -1,   546,    -1,   549,    -1,
     550,    -1,   551,    -1,   552,    -1,    85,    51,   451,    52,
      -1,   191,   547,   548,    -1,   125,    -1,    51,   451,    52,
      -1,    51,    52,    -1,    51,   451,    52,    -1,    59,   547,
     548,    -1,    66,    51,   451,    52,    -1,    60,    51,   451,
      52,    -1,    63,   553,   554,    -1,   125,    -1,    51,   451,
      52,    -1,    51,    52,    -1,    51,   451,    52,    -1,   561,
     556,    -1,    -1,    23,    -1,    -1,   152,   558,    -1,   560,
     559,    -1,    67,    42,    43,    -1,    -1,    11,    -1,    36,
      -1,    23,    -1,   561,    -1,   174,    42,    43,    -1,   562,
      -1,   639,    -1,   641,    -1,   623,    -1,   564,    -1,   572,
      -1,   568,    -1,   574,    -1,   570,    -1,   567,    -1,   566,
      -1,   565,    -1,   563,    -1,    62,    42,    43,    -1,    61,
      42,    43,    -1,    61,    42,   572,    43,    -1,    61,    42,
     574,    43,    -1,    66,    42,    43,    -1,    60,    42,    43,
      -1,    63,    42,    43,    -1,    63,    42,   622,    43,    -1,
      63,    42,   126,    43,    -1,    59,    42,    43,    -1,    59,
      42,   569,    43,    -1,    59,    42,   569,    35,   578,    43,
      -1,   576,    -1,    11,    -1,    64,    42,   571,    43,    -1,
     576,    -1,   191,    42,    43,    -1,   191,    42,   573,    43,
      -1,   191,    42,   573,    35,   578,    43,    -1,   191,    42,
     573,    35,   578,    23,    43,    -1,   577,    -1,    11,    -1,
      65,    42,   575,    43,    -1,   577,    -1,   623,    -1,   623,
      -1,   623,    -1,   126,    -1,   582,   581,   196,   619,    -1,
     582,   581,    -1,    -1,   581,   589,    -1,   581,   588,    -1,
     582,    24,   583,    -1,   583,    -1,   583,    25,   584,    -1,
     584,    -1,   584,    86,   134,   585,    -1,   585,    -1,    54,
     586,    -1,   586,    -1,    42,   580,    43,    -1,   587,    -1,
     517,   603,    -1,   519,   603,    -1,   522,   603,    -1,   525,
     603,    -1,    51,   451,    52,   603,    -1,   121,    -1,   197,
     487,   605,    -1,   198,   604,   605,    -1,   199,   604,   200,
      -1,   201,   606,    -1,   202,   606,    -1,   115,   100,    -1,
     115,   101,    -1,    96,    97,    -1,   590,    -1,   591,    -1,
     592,    -1,   593,    -1,   596,    -1,   601,    -1,   602,    -1,
     203,    -1,   204,    -1,   151,    87,    -1,   151,    88,    -1,
     226,    89,    -1,    90,    89,    -1,    89,    87,    -1,    89,
      88,    -1,   226,    92,    -1,    90,    92,    -1,   226,    93,
     595,    -1,   226,    93,   183,    -1,   226,    93,    42,   595,
     594,    43,    -1,   226,    93,    42,   183,   594,    43,    -1,
      90,    93,    -1,    -1,   594,    35,   595,    -1,   115,   621,
      -1,   115,   621,   205,   621,    -1,   115,   621,   604,   206,
      -1,   115,   621,   205,   621,   604,   206,    -1,   226,    94,
     213,   598,   597,    -1,    90,    94,   213,    -1,   226,   183,
      94,   213,   597,    -1,    -1,   597,   600,    -1,   115,   621,
      -1,    42,   599,    43,    -1,   621,    -1,   599,    35,   621,
      -1,   164,   598,    -1,   166,   598,    -1,   207,   621,    -1,
     226,    95,    -1,    90,    95,    -1,    -1,   208,    -1,   208,
      98,    -1,   209,    -1,   209,   213,    -1,   210,    -1,   211,
     487,    -1,   120,   144,   487,    -1,   120,   102,   487,    -1,
     212,   487,   161,   487,    -1,   213,    -1,   214,    -1,   215,
      -1,   216,    -1,   217,    -1,    91,    97,   487,    -1,   180,
     224,    72,    -1,   180,   224,    71,    -1,   180,   224,   103,
      -1,   610,   452,   152,   220,   231,   452,    -1,   610,   452,
     152,   229,   231,   452,    -1,   610,   452,   231,   452,    -1,
     610,   452,   223,   452,    -1,   610,   452,   222,   452,    -1,
     221,    62,    -1,   221,   227,    -1,   612,   452,    -1,   230,
      62,    -1,   230,   227,    -1,   218,   105,   159,    62,   452,
     225,   452,    -1,   218,    62,   452,   225,   452,    -1,   228,
      62,   452,   152,   452,    -1,   104,   616,   219,   452,   132,
     452,    -1,   616,    35,   617,    -1,   617,    -1,     9,   520,
      10,   452,    -1,    56,    -1,    57,    -1,    58,    -1,   126,
      -1,   642,    -1,   642,    -1,   180,   235,   237,   642,   449,
      -1,   180,   235,   237,   642,   626,   625,   449,    -1,   180,
     235,   237,   642,   627,   236,   391,   449,    -1,   180,   235,
     237,   642,   627,   236,   391,   626,   625,   449,    -1,   180,
     235,   627,   236,   391,   449,    -1,   180,   235,   627,   236,
     391,   626,   625,   449,    -1,    -1,   152,   558,    -1,    42,
      43,    -1,    42,   447,    43,    -1,    -1,   241,   628,    -1,
     629,    -1,   628,    35,   629,    -1,   123,    -1,   311,    -1,
     312,    -1,   238,   235,   642,    -1,   238,   235,   642,   225,
      42,   633,    43,    -1,   239,   240,   452,    -1,   239,   240,
     452,   225,    42,   633,    43,    -1,   239,   240,   452,   241,
     632,    -1,   239,   240,   452,   241,   632,   225,    42,   633,
      43,    -1,   642,    -1,   311,    -1,   313,    -1,   634,    -1,
     633,    35,   634,    -1,     9,   520,   557,    10,   452,    -1,
     636,    -1,   637,    -1,   643,    55,    56,    -1,   193,   445,
     557,   449,    -1,   514,    42,    43,    -1,   514,    42,   526,
      43,    -1,   193,    42,    43,    -1,   193,    42,    43,   152,
     558,    -1,   193,    42,   640,    43,   152,   558,    -1,   558,
      -1,   640,    35,   558,    -1,    42,   560,    43,    -1,   643,
      -1,    59,    -1,    60,    -1,    61,    -1,   191,    -1,   174,
      -1,   153,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,   149,    -1,    67,    -1,   193,    -1,   123,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    88,    -1,    89,    -1,    90,    -1,    92,    -1,    93,
      -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,    98,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   105,    -1,   109,    -1,   110,    -1,   111,
      -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   127,
      -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,   141,
      -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   150,    -1,   152,    -1,   154,
      -1,   155,    -1,   156,    -1,   157,    -1,   158,    -1,   159,
      -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,   164,
      -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,   169,
      -1,   170,    -1,   171,    -1,   172,    -1,   173,    -1,   175,
      -1,   176,    -1,   177,    -1,   178,    -1,   179,    -1,   180,
      -1,   181,    -1,   182,    -1,   183,    -1,   184,    -1,   185,
      -1,   187,    -1,   188,    -1,   189,    -1,   192,    -1,   194,
      -1,   195,    -1,   196,    -1,   197,    -1,   198,    -1,   199,
      -1,   200,    -1,   201,    -1,   202,    -1,   203,    -1,   204,
      -1,   205,    -1,   206,    -1,   207,    -1,   208,    -1,   209,
      -1,   210,    -1,   211,    -1,   212,    -1,   213,    -1,   214,
      -1,   215,    -1,   216,    -1,   217,    -1,   218,    -1,   219,
      -1,   220,    -1,   221,    -1,   222,    -1,   223,    -1,   224,
      -1,   225,    -1,   227,    -1,   228,    -1,   229,    -1,   230,
      -1,   231,    -1,   232,    -1,   121,    -1,   122,    -1,   233,
      -1,   234,    -1,   235,    -1,   236,    -1,   237,    -1,   238,
      -1,   239,    -1,   240,    -1,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   748,   748,   750,   751,   752,   753,   755,   762,   789,
     792,   813,   815,   819,   826,   828,   829,   830,   831,   832,
     833,   837,   856,   860,   865,   872,   877,   882,   891,   894,
     900,   905,   912,   912,   912,   915,   928,   932,   939,   944,
     953,   956,   964,   991,   995,  1002,  1008,  1013,  1018,  1027,
    1051,  1055,  1062,  1067,  1072,  1077,  1088,  1106,  1110,  1117,
    1122,  1130,  1155,  1158,  1161,  1164,  1167,  1170,  1173,  1176,
    1179,  1182,  1185,  1188,  1191,  1194,  1197,  1200,  1203,  1206,
    1212,  1213,  1214,  1215,  1216,  1228,  1231,  1236,  1239,  1244,
    1249,  1257,  1265,  1276,  1287,  1290,  1297,  1307,  1310,  1315,
    1329,  1332,  1337,  1342,  1350,  1351,  1352,  1353,  1354,  1355,
    1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,
    1366,  1370,  1388,  1392,  1397,  1406,  1412,  1412,  1415,  1435,
    1439,  1444,  1452,  1457,  1461,  1469,  1472,  1480,  1493,  1497,
    1508,  1511,  1519,  1537,  1541,  1548,  1553,  1558,  1566,  1572,
    1580,  1588,  1595,  1609,  1613,  1627,  1636,  1644,  1647,  1654,
    1689,  1693,  1698,  1704,  1714,  1717,  1725,  1728,  1735,  1753,
    1757,  1764,  1769,  1777,  1795,  1799,  1807,  1829,  1833,  1840,
    1848,  1857,  1865,  1902,  1906,  1913,  1920,  1929,  1938,  1964,
    1968,  1975,  1985,  1997,  2001,  2006,  2015,  2028,  2032,  2037,
    2046,  2060,  2064,  2077,  2082,  2094,  2098,  2106,  2119,  2127,
    2140,  2147,  2161,  2161,  2164,  2164,  2186,  2190,  2194,  2212,
    2230,  2240,  2254,  2262,  2268,  2274,  2280,  2292,  2295,  2309,
    2310,  2311,  2312,  2316,  2319,  2323,  2325,  2329,  2333,  2337,
    2341,  2345,  2351,  2357,  2371,  2372,  2373,  2374,  2375,  2376,
    2377,  2383,  2387,  2391,  2395,  2401,  2401,  2408,  2409,  2410,
    2411,  2415,  2418,  2422,  2424,  2428,  2432,  2436,  2440,  2444,
    2450,  2456,  2460,  2471,  2472,  2473,  2474,  2478,  2481,  2485,
    2487,  2491,  2495,  2499,  2503,  2507,  2513,  2519,  2530,  2531,
    2532,  2533,  2538,  2543,  2565,  2568,  2572,  2584,  2586,  2590,
    2594,  2598,  2602,  2606,  2612,  2618,  2622,  2636,  2637,  2638,
    2639,  2640,  2641,  2642,  2643,  2647,  2647,  2650,  2654,  2662,
    2667,  2676,  2681,  2690,  2750,  2757,  2762,  2771,  2776,  2785,
    2795,  2799,  2807,  2811,  2819,  2835,  2844,  2856,  2865,  2868,
    2873,  2882,  2886,  2894,  2904,  2916,  2923,  2927,  2935,  2940,
    2950,  2954,  2958,  2962,  2969,  2973,  2980,  2983,  2991,  2996,
    3006,  3014,  3018,  3026,  3039,  3054,  3061,  3062,  3063,  3064,
    3065,  3066,  3067,  3068,  3069,  3070,  3071,  3072,  3077,  3088,
    3092,  3096,  3100,  3104,  3110,  3116,  3117,  3123,  3130,  3134,
    3138,  3150,  3153,  3164,  3167,  3177,  3184,  3188,  3192,  3196,
    3203,  3211,  3216,  3224,  3228,  3234,  3241,  3256,  3273,  3276,
    3280,  3288,  3296,  3300,  3309,  3317,  3328,  3332,  3336,  3347,
    3354,  3359,  3367,  3371,  3379,  3383,  3391,  3399,  3408,  3413,
    3422,  3432,  3436,  3440,  3440,  3444,  3448,  3452,  3456,  3460,
    3464,  3468,  3472,  3476,  3480,  3484,  3488,  3492,  3497,  3501,
    3505,  3510,  3514,  3519,  3523,  3527,  3532,  3536,  3540,  3544,
    3548,  3553,  3557,  3561,  3566,  3570,  3574,  3579,  3583,  3588,
    3593,  3598,  3602,  3607,  3611,  3616,  3622,  3628,  3633,  3634,
    3635,  3643,  3647,  3651,  3659,  3666,  3675,  3675,  3679,  3699,
    3700,  3708,  3709,  3715,  3736,  3740,  3754,  3760,  3773,  3777,
    3777,  3781,  3785,  3794,  3806,  3817,  3821,  3825,  3829,  3833,
    3837,  3841,  3845,  3853,  3861,  3878,  3886,  3895,  3899,  3903,
    3907,  3911,  3919,  3931,  3936,  3941,  3948,  3953,  3960,  3967,
    3978,  3988,  3991,  4002,  4003,  4004,  4005,  4006,  4007,  4008,
    4009,  4010,  4011,  4015,  4015,  4018,  4018,  4018,  4022,  4029,
    4033,  4037,  4045,  4053,  4063,  4073,  4077,  4084,  4089,  4098,
    4102,  4111,  4111,  4111,  4115,  4121,  4130,  4130,  4135,  4138,
    4147,  4158,  4158,  4163,  4167,  4174,  4178,  4189,  4192,  4197,
    4211,  4214,  4218,  4235,  4238,  4243,  4257,  4260,  4264,  4285,
    4288,  4293,  4298,  4308,  4324,  4339,  4342,  4347,  4368,  4369,
    4382,  4383,  4384,  4385,  4386,  4387,  4392,  4400,  4408,  4412,
    4420,  4424,  4433,  4441,  4449,  4457,  4464,  4477,  4484,  4488,
    4496,  4507,  4510,  4519,  4522,  4532,  4539,  4549,  4550,  4552,
    4554,  4560,  4564,  4568,  4569,  4570,  4574,  4586,  4587,  4588,
    4589,  4590,  4591,  4592,  4593,  4594,  4599,  4607,  4611,  4616,
    4625,  4633,  4641,  4645,  4649,  4657,  4661,  4665,  4673,  4674,
    4682,  4690,  4695,  4699,  4703,  4707,  4716,  4717,  4725,  4732,
    4735,  4738,  4741,  4745,  4757,  4769,  4785,  4788,  4792,  4802,
    4813,  4818,  4829,  4834,  4838,  4843,  4847,  4852,  4856,  4861,
    4865,  4869,  4873,  4877,  4891,  4895,  4899,  4903,  4908,  4912,
    4916,  4920,  4924,  4938,  4939,  4940,  4941,  4942,  4943,  4944,
    4952,  4956,  4960,  4964,  4975,  4979,  4983,  4987,  4995,  4999,
    5009,  5013,  5017,  5021,  5025,  5033,  5035,  5042,  5046,  5050,
    5054,  5064,  5068,  5072,  5080,  5082,  5090,  5094,  5101,  5105,
    5113,  5117,  5125,  5133,  5137,  5146,  5149,  5153,  5157,  5161,
    5165,  5176,  5182,  5188,  5194,  5204,  5208,  5212,  5220,  5224,
    5232,  5240,  5245,  5250,  5262,  5266,  5270,  5274,  5278,  5284,
    5284,  5289,  5295,  5295,  5300,  5304,  5314,  5322,  5329,  5334,
    5342,  5351,  5364,  5377,  5391,  5403,  5412,  5424,  5428,  5432,
    5437,  5442,  5447,  5456,  5459,  5467,  5471,  5479,  5483,  5491,
    5496,  5505,  5509,  5513,  5521,  5525,  5533,  5537,  5541,  5545,
    5553,  5557,  5561,  5569,  5574,  5584,  5597,  5597,  5601,  5609,
    5618,  5623,  5632,  5636,  5640,  5647,  5652,  5661,  5670,  5670,
    5670,  5670,  5670,  5670,  5670,  5670,  5671,  5671,  5671,  5671,
    5671,  5671,  5672,  5676,  5676,  5676,  5676,  5676,  5676,  5676,
    5676,  5676,  5676,  5677,  5677,  5677,  5677,  5677,  5677,  5677,
    5678,  5678,  5678,  5678,  5678,  5678,  5678,  5678,  5679,  5679,
    5679,  5679,  5679,  5679,  5679,  5679,  5679,  5679,  5679,  5680,
    5680,  5680,  5680,  5680,  5680,  5680,  5680,  5680,  5680,  5680,
    5680,  5681,  5681,  5681,  5681,  5681,  5681,  5681,  5681,  5681,
    5681,  5682,  5682,  5682,  5682,  5682,  5682,  5682,  5682,  5682,
    5682,  5682,  5682,  5683,  5683,  5683,  5683,  5683,  5683,  5683,
    5683,  5683,  5683,  5683,  5683,  5684,  5684,  5684,  5684,  5684,
    5684,  5684,  5684,  5684,  5685,  5685,  5685,  5685,  5685,  5685,
    5685,  5685,  5686,  5686,  5686,  5686,  5686,  5686,  5686,  5686,
    5686,  5687,  5687,  5687,  5687,  5687,  5687,  5687,  5687,  5687,
    5688,  5688,  5688,  5688,  5688,  5688,  5688,  5688,  5688,  5688,
    5689,  5689,  5689,  5689,  5689,  5689,  5689,  5689,  5689,  5689,
    5689,  5690,  5690,  5690,  5690,  5690,  5690,  5690,  5690,  5690,
    5690,  5690
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
  "\"<xsl:document...\"", "\"<xsl:attribute...\"", "\"<xsl:element...\"",
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
  "AttributeAttrs_XSLT", "Element_XSLT", "ElementAttrs_XSLT",
  "CopyOf_XSLT", "CopyOfAttrs_XSLT", "Copy_XSLT", "CopyAttrs_XSLT",
  "ForEach_XSLT", "ForEachAttrs_XSLT", "Pattern_XSLT", "PathPattern_XSLT",
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
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   317,   318,   318,   318,   318,   318,   318,   319,   320,
     320,   321,   321,   321,   322,   322,   322,   322,   322,   322,
     322,   323,   324,   324,   324,   324,   324,   324,   325,   325,
     325,   325,   326,   326,   326,   327,   328,   328,   328,   328,
     329,   329,   330,   331,   331,   331,   331,   331,   331,   332,
     333,   333,   333,   333,   333,   333,   334,   335,   335,   335,
     335,   336,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     338,   338,   338,   338,   338,   339,   339,   340,   341,   341,
     341,   341,   341,   342,   343,   343,   343,   344,   344,   344,
     345,   345,   345,   345,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   347,   348,   348,   348,   349,   350,   350,   351,   352,
     352,   352,   353,   353,   353,   354,   354,   355,   356,   356,
     357,   357,   358,   359,   359,   359,   359,   359,   360,   361,
     362,   363,   364,   365,   365,   366,   367,   368,   368,   369,
     370,   370,   370,   370,   371,   371,   372,   372,   373,   374,
     374,   374,   374,   375,   376,   376,   377,   378,   378,   378,
     379,   380,   381,   382,   382,   382,   382,   382,   383,   384,
     384,   384,   385,   386,   386,   386,   387,   388,   388,   388,
     389,   390,   390,   391,   391,   392,   392,   392,   393,   393,
     394,   394,   395,   395,   396,   396,   397,   397,   397,   397,
     397,   397,   398,   399,   399,   399,   399,   400,   400,   401,
     401,   401,   401,   402,   403,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   405,   405,   405,   405,
     405,   406,   406,   406,   406,   407,   407,   408,   408,   408,
     408,   409,   410,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   412,   412,   412,   412,   413,   414,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   416,   416,
     416,   416,   417,   417,   418,   419,   420,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   422,   422,   422,
     422,   422,   422,   422,   422,   423,   423,   424,   425,   426,
     426,   427,   427,   428,   429,   430,   430,   431,   431,   432,
     433,   433,   434,   434,   435,   436,   437,   437,   438,   438,
     438,   439,   439,   440,   440,   441,   442,   442,   443,   443,
     444,   444,   444,   444,   445,   445,   446,   446,   447,   447,
     448,   449,   449,   450,   451,   451,   452,   452,   452,   452,
     452,   452,   452,   452,   452,   452,   452,   452,   453,   454,
     454,   454,   454,   455,   455,   455,   455,   456,   457,   457,
     458,   459,   459,   460,   460,   461,   462,   462,   463,   463,
     464,   465,   465,   466,   466,   467,   467,   468,   469,   469,
     469,   470,   470,   470,   471,   471,   472,   472,   473,   474,
     475,   475,   476,   476,   477,   477,   478,   479,   479,   480,
     480,   481,   481,   482,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   483,   483,
     483,   484,   484,   485,   485,   485,   486,   486,   486,   486,
     486,   487,   487,   487,   488,   488,   488,   489,   489,   490,
     490,   491,   491,   492,   492,   493,   493,   493,   494,   494,
     494,   495,   495,   495,   496,   496,   497,   497,   498,   499,
     499,   500,   500,   500,   500,   501,   502,   502,   502,   503,
     503,   504,   504,   505,   505,   506,   506,   506,   506,   506,
     506,   506,   506,   507,   507,   508,   508,   509,   509,   509,
     509,   509,   510,   511,   511,   512,   512,   513,   513,   513,
     514,   515,   515,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   517,   517,   518,   518,   518,   519,   520,
     521,   521,   522,   523,   524,   525,   525,   526,   526,   527,
     527,   528,   528,   528,   529,   529,   530,   530,   531,   531,
     531,   532,   532,   533,   533,   534,   534,   535,   535,   535,
     536,   536,   536,   537,   537,   537,   538,   538,   538,   539,
     539,   539,   539,   539,   540,   541,   541,   542,   543,   543,
     544,   544,   544,   544,   544,   544,   545,   546,   547,   547,
     548,   548,   549,   550,   551,   552,   553,   553,   554,   554,
     555,   556,   556,   557,   557,   558,   558,   559,   559,   559,
     559,   560,   560,   560,   560,   560,   561,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   563,   564,   564,   564,
     565,   566,   567,   567,   567,   568,   568,   568,   569,   569,
     570,   571,   572,   572,   572,   572,   573,   573,   574,   575,
     576,   577,   578,   579,   580,   580,   581,   581,   581,   582,
     582,   583,   583,   584,   584,   585,   585,   586,   586,   587,
     587,   587,   587,   587,   588,   588,   588,   588,   588,   588,
     588,   588,   588,   589,   589,   589,   589,   589,   589,   589,
     590,   590,   590,   590,   591,   591,   591,   591,   592,   592,
     593,   593,   593,   593,   593,   594,   594,   595,   595,   595,
     595,   596,   596,   596,   597,   597,   598,   598,   599,   599,
     600,   600,   601,   602,   602,   603,   603,   603,   603,   603,
     603,   604,   604,   604,   604,   605,   605,   605,   606,   606,
     607,   608,   608,   608,   609,   609,   609,   609,   609,   610,
     610,   611,   612,   612,   613,   613,   614,   615,   616,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   624,   624,
     624,   624,   624,   625,   625,   626,   626,   627,   627,   628,
     628,   629,   629,   629,   630,   630,   631,   631,   631,   631,
     632,   632,   632,   633,   633,   634,   635,   635,   636,   637,
     638,   638,   639,   639,   639,   640,   640,   641,   642,   642,
     642,   642,   642,   642,   642,   642,   642,   642,   642,   642,
     642,   642,   642,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   643,
     643,   643
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
       1,     3,     1,     3,     3,     3,     1,     1,     3,     1,
       3,     3,     1,     1,     1,     0,     2,     3,     1,     2,
       0,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       3,     3,     4,     1,     2,     3,     3,     0,     3,     4,
       1,     3,     3,     3,     0,     3,     0,     3,     4,     1,
       2,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     2,     1,     3,     2,     3,     1,     2,     2,
       3,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     6,     1,     1,     1,     1,     1,     2,     3,     3,
       3,     3,     2,     1,     3,     3,     2,     0,     4,     2,
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
       4,     1,     1,     1,     1,     1,     1,     5,     7,     8,
      10,     6,     8,     0,     2,     2,     3,     0,     2,     1,
       3,     1,     1,     1,     3,     7,     3,     7,     5,     9,
       1,     1,     1,     1,     3,     5,     1,     1,     3,     4,
       3,     4,     3,     5,     6,     1,     3,     3,     1,     1,
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
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   235,   263,   279,   297,     0,     0,     0,   527,
       0,     0,     0,   595,     0,   571,     0,     0,   495,   552,
     522,     0,   781,   782,   783,   829,   830,   831,   835,   836,
     837,   838,   839,   841,   844,   845,   846,   847,   848,   849,
     850,   851,   852,   853,   854,   855,   856,   857,   858,   859,
     860,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870,   871,   872,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   981,   982,
     843,   784,   888,   528,   529,   889,   890,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   840,   906,   907,   834,   908,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,   919,   920,   921,
     922,   923,   924,   925,   926,   927,   833,   928,   929,   930,
     931,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   832,   942,   842,   943,   944,   945,   946,   947,   948,
     949,   950,   951,   952,   953,   954,   955,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   965,   966,   967,   968,
     969,   970,   971,   972,   973,   974,   975,   976,   977,   978,
     979,   980,   983,   984,   985,   986,   987,   988,   989,   990,
     991,     2,   363,   365,   366,     0,   382,   385,   386,   367,
     368,   369,   375,   428,   430,   447,   450,   452,   455,   460,
     463,   466,   468,   470,   472,   474,   477,   478,   480,     0,
     486,   479,   491,   494,   498,   499,   531,     0,   504,   531,
       0,   516,   514,   524,   526,   500,   531,   533,   543,   534,
     535,   536,   539,   540,   537,   538,   559,   561,   562,   563,
     560,   600,   601,   602,   603,   604,   605,   523,   645,   637,
     644,   643,   642,   639,   641,   638,   640,   370,     0,   371,
       0,   373,   372,   374,   545,   546,   547,   544,   525,   376,
     377,   541,   816,   817,   542,   786,   828,     0,     0,     3,
     231,   232,     0,   235,   235,     4,   259,   260,     0,   263,
     263,     5,   275,   276,     0,   279,   279,     6,   297,   290,
     291,   297,     0,    11,    94,     7,     8,    10,     1,   829,
     830,   831,   835,   836,   837,   838,   839,   850,   851,   852,
     853,   854,   855,   856,   857,   858,   859,   860,   861,   879,
     981,   982,   890,   892,   903,   904,   840,   834,   921,   927,
     832,   842,   967,   970,   976,   978,   988,   989,   548,   549,
     828,   829,   830,   836,   839,   832,   513,   566,   567,   568,
       0,   596,     0,   493,   572,     0,   476,   475,   551,     0,
     507,     0,     0,   608,     0,     0,     0,     0,     0,     0,
       0,   616,     0,     0,     0,     0,     0,   505,   506,   508,
     509,   510,   511,   517,   518,   519,   520,   521,     0,     0,
       0,   779,     0,     0,     0,   387,   389,     0,     0,   395,
     397,     0,     0,   417,     0,     0,     0,     0,     0,     0,
     512,     0,     0,     0,   623,     0,     0,   769,   770,     0,
     772,   773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   384,   380,   381,     0,     0,     0,     0,     0,
       0,     0,     0,   433,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   487,
     492,     0,     0,   501,   503,   502,   515,     0,   530,     0,
     771,     0,     0,     0,     0,   933,   940,     0,     0,     0,
       0,   244,     0,     0,   248,   249,   250,   245,   246,   315,
     316,     0,   247,   233,     0,   229,   230,   234,   933,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,   257,
     258,   262,   933,     0,     0,     0,   307,     0,     0,   311,
     312,   314,   308,   309,     0,   310,     0,   277,   313,     0,
     273,   274,   278,   288,   289,   295,   933,     0,     0,     0,
       0,     0,     0,     0,     0,   294,     0,    14,   100,   571,
       0,   598,   597,   594,     0,   550,   659,   655,     0,   658,
     670,     0,     0,   612,   651,     0,   647,     0,     0,     0,
       0,   646,   652,     0,     0,   785,     0,     0,   615,     0,
     661,     0,   669,   671,   650,     0,     0,     0,     0,     0,
       0,     0,   623,     0,   623,     0,     0,   623,     0,     0,
       0,     0,     0,     0,     0,     0,   667,   662,     0,   666,
     607,     0,   354,     0,   359,     0,     0,     0,     0,     0,
     804,   806,   364,   378,   400,     0,     0,   379,   427,   429,
     432,   435,   436,   437,   445,   446,     0,   431,   438,   439,
     440,   441,   442,   443,   444,     0,     0,     0,   745,   745,
     745,   745,   448,   676,   680,   682,   684,   686,   688,     0,
     453,   454,   451,   456,   458,   457,   459,   461,   462,   464,
     465,     0,     0,     0,     0,   484,     0,   497,   496,     0,
     820,   558,     0,     0,     0,     0,     0,   555,     0,   818,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,   256,   797,     0,     0,     0,   317,   236,   241,
     237,   238,   239,   243,   240,   242,     0,     0,     0,   264,
     269,   265,   266,   267,   271,   272,   268,   270,     0,     0,
     357,     0,   280,   281,   282,   283,   287,   284,   285,   286,
     356,   356,   298,   299,   300,   301,   305,   306,   302,   303,
     304,    12,    13,     0,    96,    97,     0,   572,     0,   599,
       0,   489,   488,     0,   656,   609,   610,     0,   614,   648,
     649,   654,   653,   617,   618,     0,   660,   668,   613,   606,
       0,   778,     0,   553,   554,   391,   388,   393,     0,   396,
       0,   416,   414,   415,     0,     0,   481,     0,     0,     0,
     663,   623,     0,   355,     0,   841,   833,   842,   624,   627,
     631,   633,   636,   634,   635,     0,     0,   819,     0,     0,
       0,     0,     0,     0,   407,   401,   404,   408,     0,   434,
       0,     0,   685,   746,   748,   750,   689,   690,   691,   692,
       0,   449,     0,   675,     0,     0,   467,   469,   471,   621,
     473,   485,     0,     0,   821,     0,     0,   768,   767,   766,
     556,     0,   292,     0,   319,   320,   673,   335,     0,     0,
     348,   349,   325,   326,     0,     0,     0,     0,   330,   331,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
       0,   338,     0,     0,     0,   710,   711,     0,     0,   324,
     703,   704,   705,   706,   707,   708,   709,   762,   761,   763,
       0,     9,    22,    50,    36,    57,    62,    88,    15,    40,
      16,    40,    17,   100,    18,   100,    19,     0,    20,     0,
      95,    93,   122,     0,   129,   138,     0,     0,     0,   169,
     174,   177,   181,   183,   189,   160,   193,   197,   201,   126,
     127,   102,   103,   104,   100,   105,   101,   106,   135,   107,
     140,   108,     0,   110,   100,   109,   117,   164,   111,   100,
     112,   100,   113,   100,   114,   100,   115,   100,   116,   100,
     118,     0,   119,   100,   120,   100,   571,   571,   589,   564,
     490,     0,   672,   611,   619,   780,     0,     0,   393,     0,
       0,     0,     0,     0,     0,   421,     0,   482,   483,     0,
     360,   358,     0,     0,     0,     0,   628,   630,   629,   625,
       0,     0,   775,     0,   776,     0,     0,   811,   812,   808,
     810,     0,   409,   410,   411,   402,   687,   745,   747,   749,
       0,   679,     0,     0,   694,     0,     0,     0,     0,     0,
       0,   678,   677,   681,     0,   622,   620,   532,   557,     0,
       0,     0,     0,   623,     0,     0,   334,     0,     0,     0,
     323,   797,   801,   802,   803,   798,   799,     0,     0,     0,
       0,   338,     0,   337,     0,   344,   716,   717,   715,   719,
     724,     0,   744,   712,   713,   742,   714,   718,     0,     0,
     743,     0,     0,    89,    90,    28,    24,     0,     0,     0,
     100,    37,    39,     0,   100,    51,    55,    54,     0,     0,
       0,    58,     0,     0,     0,    61,    79,    63,    67,    68,
      69,    73,    74,    76,    65,    70,    71,    72,    75,    77,
       0,     0,     0,    87,    99,    98,     0,     0,     0,   157,
     153,   100,     0,     0,    97,     0,     0,     0,     0,   139,
       0,   148,     0,   100,     0,    97,    97,   166,   170,     0,
       0,     0,     0,     0,    97,     0,     0,     0,    97,     0,
      97,    97,     0,    97,    97,     0,   192,   195,     0,   198,
     199,     0,     0,     0,     0,     0,     0,   657,   777,     0,
       0,     0,     0,   399,   418,     0,     0,     0,   419,   420,
       0,     0,   664,   827,   626,   632,   822,   825,     0,   361,
     362,     0,     0,     0,   813,     0,     0,   403,     0,   405,
     693,   760,   702,   700,   701,   674,     0,     0,     0,     0,
       0,     0,   758,   759,   698,   699,   683,   764,   765,   293,
     296,     0,   318,   327,   328,   321,   322,   332,   333,   329,
       0,   787,   793,     0,     0,     0,   209,   208,   829,   850,
     983,   984,     0,   204,     0,   207,   205,   216,   227,   223,
       0,   253,   251,   341,   342,   336,   339,     0,     0,   732,
       0,     0,   721,   720,     0,     0,     0,    91,    92,    26,
      23,    27,    32,    33,    34,    25,    43,    41,   100,     0,
      38,     0,    53,    52,    49,    60,    59,    56,    83,    84,
      80,    81,    82,    64,    85,    66,    78,   125,   149,     0,
     100,   154,     0,     0,   151,   123,   124,   121,   132,   133,
     134,   131,   130,   128,   143,   136,   100,   137,   141,   150,
       0,   161,   162,   163,   100,     0,   172,   171,   100,   175,
     173,   178,   179,   176,   180,   184,   186,   187,   185,   182,
     190,   191,   188,   194,   196,   202,   200,   571,   571,     0,
     593,   592,   591,   590,   392,     0,   394,   398,     0,     0,
       0,     0,     0,   665,     0,     0,     0,   774,   623,     0,
     805,   807,     0,   412,   413,     0,   755,   756,   757,   695,
       0,     0,   751,     0,   696,   697,     0,   347,   345,   795,
       0,     0,     0,     0,   800,   226,     0,     0,     0,     0,
       0,   791,   793,   217,     0,     0,     0,     0,   222,     0,
       0,   340,   338,   725,   725,   727,     0,     0,   734,   734,
       0,   352,   350,    29,    30,    31,    44,    48,    47,     0,
       0,     0,    21,    35,    86,   156,     0,   152,   155,   144,
     147,     0,     0,     0,   165,     0,   159,   168,     0,     0,
     571,   390,     0,   424,     0,   423,   426,   823,   826,     0,
       0,   814,     0,   406,   753,   752,     0,   346,   796,   794,
     788,     0,   225,   224,     0,   213,   212,     0,   203,     0,
     219,   218,   221,   220,     0,   254,   252,   343,     0,     0,
       0,     0,     0,   738,   736,   731,   733,     0,    46,    45,
      42,   158,   146,   145,   142,   167,   577,   583,   569,   580,
     586,   570,     0,     0,     0,   824,     0,   809,   754,   789,
     793,   210,     0,   792,     0,     0,   723,   722,   728,   729,
       0,   737,     0,     0,   735,   353,   351,     0,     0,     0,
       0,   565,     0,   422,   815,     0,     0,   214,   215,   228,
     726,     0,   739,   740,   741,   573,   579,   578,   574,   585,
     584,   575,   582,   581,   576,   588,   587,   425,   790,   211,
     730
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   315,   316,   577,   783,   948,   949,  1329,  1335,
     950,   951,  1140,  1337,  1338,   952,   953,   954,   955,   956,
     957,  1353,  1355,   958,   959,   981,   578,   960,   786,   982,
     983,   984,   985,   986,   987,   988,  1371,  1188,   989,   990,
    1190,  1375,  1376,   991,   992,   993,   994,   995,  1179,  1180,
    1181,  1362,   996,   997,  1197,  1385,   998,   999,  1000,  1001,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1302,  1303,  1304,  1305,  1534,  1606,
    1306,  1307,  1308,  1468,   289,   290,   291,   292,   507,   508,
     734,   295,   296,   297,   298,   301,   302,   303,   304,   307,
     293,   309,   310,   294,   312,   543,   509,   738,   510,   511,
     512,   513,   535,   514,   515,   516,   910,  1289,   517,   518,
     519,  1113,   918,   520,   521,  1448,   522,   556,   434,   761,
     643,   644,  1175,   191,   192,   193,   194,   195,   196,   197,
     415,   416,  1028,  1030,   198,   419,   420,   453,   454,   855,
     856,   857,  1064,  1259,   199,   422,   423,   200,  1034,  1238,
    1035,   201,   202,   203,   204,   666,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   792,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   493,   236,
     237,   238,   239,   358,   240,   241,   242,   243,   244,   712,
     245,   246,   247,   369,   579,   375,  1568,  1571,  1597,  1599,
    1598,  1600,  1226,   248,   372,   249,   582,   250,   251,   252,
     384,   593,   253,   254,   255,   256,   392,   608,   878,  1086,
     646,   838,  1049,   839,   840,   257,   258,   259,   260,   261,
     262,   263,   588,   264,   609,   265,   638,   266,   611,   589,
     612,  1021,   897,   682,   873,   683,   684,   685,   686,   687,
     688,  1081,   929,   930,   931,   932,   933,  1548,  1323,   934,
    1555,  1478,  1552,  1594,   935,   936,   866,  1270,  1439,  1274,
     871,   558,   267,   268,   269,   270,   271,   272,   273,   410,
     411,   274,   275,   276,   277,   604,   278,   524,  1452,  1292,
     914,  1105,  1106,   279,   280,  1059,  1253,  1254,   281,   282,
     283,   284,   843,  1248,   844,   285,   286
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1356
static const yytype_int16 yypact[] =
{
     931,  3124,   369,   369,   369,   369,  -123,   170,  7214, -1356,
    5850,   469,    59,   186,  4522,   157,  3357,  3357, -1356, -1356,
   -1356,  1726, -1356, -1356, -1356,   155,   311,   308,   318,    74,
     332,   371,   389, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
     374,   399,   555,   606,   635,   648,   657,   668,   673,   688,
     726,   715, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   788,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   736,   753,
   -1356, -1356, -1356, -1356, -1356, -1356,   829, -1356,    57, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   844,
     844, -1356,   777, -1356, -1356,   833, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   433,
   -1356, -1356, -1356, -1356, -1356,   867, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356,    89, -1356,   846, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   104, -1356,
   -1356,     9, -1356, -1356, -1356, -1356, -1356,   793, -1356,    18,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356,   645,   671, -1356,
   -1356, -1356,   873, -1356, -1356,   808,   774, -1356, -1356, -1356,
   -1356, -1356,   790,   803, -1356,  1081,   755,    32,    56,    67,
     610, -1356,   832,   779,   811,   828, -1356, -1356, -1356,   351,
   -1356, -1356,  4522,   674, -1356, -1356, -1356,  5850, -1356, -1356,
    5850, -1356, -1356, -1356, -1356,   970, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,  3124, -1356,
    3124, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356,    86,   830,   864, -1356,
   -1356, -1356,  3590,   835, -1356, -1356, -1356, -1356,  3823,   835,
   -1356, -1356, -1356, -1356,  4056,   835, -1356, -1356,   835, -1356,
   -1356, -1356,  4289, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356,   977,   992,   997,  1001,  1004, -1356, -1356, -1356, -1356,
     675, -1356,  1023,   674, -1356,  7214, -1356, -1356, -1356,   134,
   -1356,  6065,  3124, -1356,  1018,  1027,  3124,    78,  1028,  7031,
    3124, -1356,  1026,  7214,  7214,  1035,  3124, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,  3124,  7214,
      23, -1356,  3124,  3124,  7214,  1044, -1356,  7214,  1071,  1050,
   -1356,  7214,    99, -1356,   102,  3124,  3124,  3124,  1036,  1037,
   -1356,  6280,  1018,   313,   934,  3124,   930, -1356, -1356,  3124,
   -1356, -1356,  7214,  3124,  3124,  3124,   829,    57,  3124,   953,
     955, -1356, -1356,   730, -1356,  3357,  3357,  3357,  3357,  3357,
    3357,  3357,  3357, -1356,  3357,  3357,  3357,  3357,  3357,  3357,
    3357,  3357,  4956,  3357,  3357,  3357,  3357,  3357,  3357,  3357,
    3357,  3357,  3357,  3357,   941,   949,   950,   954,  1959, -1356,
     674,  4522,  4522,  1084, -1356,  1084, -1356,  2192,  1084,   251,
   -1356,  2425,  1052,   983,  7214,   760,   682,  1058,  1058,  1058,
    1058, -1356,  1058,  1058, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356,  1058, -1356, -1356,  1058, -1356, -1356,   297,   630,  1058,
    1058,  1058,  1058,  1058,  1058,  1058,  1058, -1356,  1058, -1356,
   -1356,   310,   891,  1058,  1058,  1058, -1356,  1058,  1058, -1356,
   -1356, -1356, -1356, -1356,  1058, -1356,  1058, -1356, -1356,  1058,
   -1356, -1356,   408, -1356, -1356,   517,   566,  1058,  1058,  1058,
    1058,  1058,  1058,  1058,  1058, -1356,  1058,   259,   570,  1006,
    1009, -1356, -1356, -1356,   118, -1356, -1356, -1356,   466, -1356,
   -1356,   496,  2658, -1356, -1356,   554, -1356,   371,  1004,  1070,
    1076, -1356, -1356,  1079,  1082, -1356,   563,  2891, -1356,  1088,
   -1356,  1091, -1356, -1356, -1356,   572,   588,  1114,   788,  3124,
     608,   609,   934,   829,   934,  7214,    57,   934,   844,  3124,
    3124,   699,   725,   611,  3124,  3124, -1356, -1356,   742, -1356,
   -1356,  7214, -1356,   743, -1356,  6664,   840,   902,  1074,   985,
     913,   122, -1356, -1356, -1356,  3124,  1002, -1356,   803, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356,  3357, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356,  4956,  3124,  5173,   689,   689,
     689,   689,  1049,  1117,  1118,  1060, -1356, -1356, -1356,  1105,
      56,    56,   858,    67,    67,    67,    67,   610,   610, -1356,
   -1356,  6664,  6664,  7214,  7214, -1356,   623, -1356, -1356,  3124,
   -1356, -1356,   745,   329,  3124,  3124,  3124, -1356,   759, -1356,
      25,  1109,   794,  1025,  1140,  7214,   798,   855,   349,   569,
    7214, -1356, -1356,   323,  7388,    34,    30, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356,   760,   682,   613, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   630,   435,
   -1356,   765, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
     427,   394, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356,   632, -1356, -1356,  1022,   861,   639, -1356,
    1021, -1356, -1356,  7214, -1356, -1356, -1356,   633, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356,   638, -1356, -1356, -1356, -1356,
    3124, -1356,  1032, -1356, -1356,  1039, -1356,   963,  1148, -1356,
    1033, -1356, -1356, -1356,  1019,  1016, -1356,   643,   661,  7214,
   -1356,   934,  1159, -1356,  6848,  1129,  1130,  1132, -1356,   162,
   -1356, -1356, -1356, -1356, -1356,  3124,  3124, -1356,  3124,  3124,
    3124,  1133,  1134,  1468, -1356,  1142, -1356,   838,  3124, -1356,
    1135,   686, -1356,  1085,   967, -1356, -1356, -1356, -1356, -1356,
    1089, -1356,  4956,  1014,  4956,  1048, -1356, -1356, -1356,  1162,
   -1356, -1356,   376,  3124, -1356,   956,   958, -1356, -1356, -1356,
   -1356,  1072, -1356,  1025, -1356, -1356, -1356, -1356,  7214,  1157,
   -1356, -1356, -1356, -1356,  1057,  1025,  1029,  1030, -1356, -1356,
    1165,  1078,  7214,   -47,   969,   846,  7214,  1017,  1025,  1092,
    7214,  1092,   894,   836,   918, -1356, -1356,  1083,   242, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
    7388, -1356, -1356, -1356, -1356, -1356, -1356,   729, -1356,   290,
   -1356,   173, -1356,   321, -1356,   255, -1356,  5388, -1356,   972,
     268, -1356, -1356,   706, -1356, -1356,   924,   965,   925, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356,   434, -1356, -1356, -1356,   175, -1356,
     952, -1356,   980, -1356, -1356, -1356, -1356,   216, -1356,   326,
   -1356,   928, -1356,   169, -1356, -1356, -1356,   270, -1356,   -79,
   -1356,   230, -1356,   734, -1356,   932,   157,   157, -1356, -1356,
   -1356,  1183, -1356, -1356, -1356, -1356,  3124,  1218,   963,  1220,
    1221,  3124,  3124,  4739,    17, -1356,  3124, -1356, -1356,   136,
   -1356, -1356,  1187,  1189,  1190,  6480, -1356, -1356, -1356, -1356,
     700,   709, -1356,  1020, -1356,  1225,  1225, -1356, -1356,  1024,
   -1356,  3124, -1356, -1356,  1097,  1142, -1356,   689, -1356, -1356,
    3357,  1118,  1146,   923, -1356,  1191,  3357,   168,   168,   810,
     810, -1356, -1356,  1060,  4956, -1356, -1356, -1356, -1356,  3124,
    3124,  1058,  1058,   934,  1025,   885, -1356,  1025,  1025,   852,
   -1356,    55, -1356, -1356, -1356,  1209, -1356,  5404,   145,  1208,
    1087,  1092,  1025,  1219,  1216,  1219, -1356, -1356, -1356, -1356,
   -1356,  1043, -1356, -1356, -1356, -1356, -1356, -1356,   126,  1053,
   -1356,  1163,   846,   979,   981, -1356, -1356,  5404,  6664,   859,
    1012, -1356, -1356,  6664,  1012, -1356, -1356, -1356,  6664,  3124,
    1094, -1356,  6664,  3124,  1128, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
      52,  1150,  1150, -1356, -1356, -1356,  1034,  3124,   973,   778,
   -1356, -1356,  3124,  3124, -1356,  7389,   -59,  3124,   353, -1356,
     423, -1356,  7416, -1356,  3124, -1356, -1356,  1000, -1356,  6664,
    3124,  7444,  3124,  7471, -1356,  3124,  7499,  7526, -1356,  3124,
   -1356, -1356,  7554, -1356, -1356,  7581, -1356, -1356,  3124, -1356,
   -1356,  7609,  3124,  7636,  1229,  1241,   463, -1356, -1356,  7214,
    1153,  7214,  3124, -1356, -1356,  7214,  1160,    72, -1356, -1356,
    1136,  1250, -1356, -1356, -1356, -1356,  1143, -1356,   764, -1356,
   -1356,  3124,  7214,   775, -1356,   786,  1252, -1356,   898,  1151,
   -1356,    67, -1356, -1356, -1356, -1356,    58,    37,  3357,  3357,
     749,  1098, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356,    83, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
     316, -1356,  1145,  1063,   -47,  5850, -1356,   741,   291,  1281,
    1259,  1261,   288, -1356,  5635,   724,   733, -1356,  1283, -1356,
    6664, -1356, -1356, -1356, -1356,  1219, -1356,  1025,  1025, -1356,
       4,  1083, -1356, -1356,   146,  1093,   189, -1356, -1356,   -28,
    1293, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   354,  7664,
   -1356,  7691, -1356,   873, -1356, -1356,   873, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356,  1184,  1184, -1356,   873,  3124,
   -1356, -1356,  1066,  7719,   873,   873,   268, -1356, -1356, -1356,
   -1356, -1356,   873, -1356, -1356, -1356,   261, -1356, -1356, -1356,
    7746,   873,   268,   268, -1356,  1067, -1356,   873, -1356,   873,
   -1356,   268,   873, -1356, -1356,   268,   873,   268,   268, -1356,
     268,   268, -1356,   873, -1356,   873, -1356,   157,   157,   469,
   -1356, -1356, -1356, -1356, -1356,  3124, -1356, -1356,  1158,  3124,
    7214,  3124,  3124, -1356,  6664,  6664,  1161, -1356,   934,  1225,
   -1356, -1356,  1225, -1356, -1356,  1025, -1356, -1356, -1356, -1356,
    3357,  3357,    67,    65, -1356, -1356,  3124, -1356, -1356, -1356,
     791,  6664,   840,  5404, -1356, -1356,  5850,  5850,   133,  1083,
    5404, -1356,  1145, -1356,  5635,  5635,  5635,  5635, -1356,  1291,
     112, -1356,  1092, -1356, -1356,   178,  1083,  1083, -1356, -1356,
    6664, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,  6664,
    3124,  7774, -1356, -1356, -1356,   873,  7801, -1356, -1356, -1356,
   -1356,  6664,  3124,  7829, -1356,  7856, -1356,  1465,   477,   582,
     157, -1356,  6664, -1356,  1182, -1356, -1356, -1356, -1356,  6664,
    1305, -1356,   807, -1356,    67,    67,  3357, -1356, -1356, -1356,
   -1356,   288, -1356, -1356,  1273, -1356, -1356,  1284, -1356,   840,
   -1356, -1356, -1356, -1356,  3124, -1356, -1356,  1219,   809,   813,
    1083,  1112,   823, -1356, -1356,   685,   685,   114, -1356,   873,
   -1356, -1356, -1356,   873, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356,  1292,  1192,  3124, -1356,  3124, -1356,    67, -1356,
    1145, -1356,   315, -1356,   377,  1207, -1356, -1356,   168, -1356,
    1083, -1356,   146,   146, -1356, -1356, -1356,   107,   327,   452,
     403, -1356,  3124, -1356, -1356,   840,  1280, -1356, -1356,  1304,
   -1356,  1120, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356,   378, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356,   161, -1356, -1356,  1321, -1356,  -441,  -823, -1356,
   -1356, -1356, -1356,   372, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356,   144, -1356, -1356, -1356, -1356, -1356, -1356, -1356,   158,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1124,  -117, -1356, -1356, -1356, -1356,
   -1356, -1159, -1356, -1356, -1356,  1055,  1056,  1051,  -274,  -246,
    -556, -1356,  1047,  1059,  1064, -1356,  1054,  1061,  1062, -1356,
     951,  1069,  1075,    41,  1068,  -283,  -251,  -421,  -250,  -284,
    -249,  -239,  -272,  -261,  -210,  -208, -1356, -1356,  -168,   -84,
   -1356,  -920, -1356, -1356,  -214, -1356,   -74,  -262,  -877, -1356,
      73,   533,  -625,   341,   -21,  -169, -1356, -1356, -1356,  1171,
   -1356,   746, -1356,   343,  1176, -1356,   754, -1356,   929,   534,
     336, -1356, -1356, -1356, -1356,  1298,   771, -1356, -1356, -1356,
     359, -1356, -1356,   946,   957, -1356,   258, -1356,   927,   571,
    -473,   568,   573, -1356, -1356, -1356,  1041, -1356, -1356, -1356,
   -1356,  1193, -1356, -1356, -1356,    46,   576, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356,    26, -1356, -1356, -1356,  -227, -1356,
    -464, -1356,  -465,  -398, -1356,  -442, -1356, -1356,  -415,   905,
   -1356,   182, -1356,     0, -1356,  -561, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
    1269,   982, -1356, -1356, -1356, -1356, -1356, -1356,   707, -1356,
    -585,  -616, -1356,   581,   356,  -619, -1356, -1356, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356,  1031, -1356,  1038, -1356,  1042,
     986,   587,  -661,   744, -1356, -1356,   548,   547,   338,   747,
   -1356, -1356,   550, -1356, -1356, -1356, -1356,   -46, -1308, -1356,
     -50,  -531, -1356, -1356, -1356, -1356,  -648, -1053,   160,   360,
   -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356, -1356,
     818, -1356,   364, -1356,  -886,  -477,  -359,   -96, -1355, -1246,
     340, -1356,   148, -1356, -1356, -1356, -1046,    14, -1356, -1356,
   -1356, -1356, -1356, -1356, -1356,     6,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -533
static const yytype_int16 yytable[] =
{
     379,  1115,   495,   693,   694,   695,   696,   679,   678,   498,
    1255,   617,  1474,  1330,   359,   360,   622,   360,   788,   624,
     546,   847,   590,   627,   529,  1271,   841,   721,   546,   567,
     680,   867,   868,   869,   590,   613,   366,   815,  1108,   817,
     572,  1125,   820,   549,   300,   306,   311,   531,   532,   533,
     574,   549,   530,   544,   545,   547,  1462,   681,   618,   534,
     373,   568,   569,   570,  1368,   548,   417,   476,   473,   474,
     480,   437,   613,   571,   919,   921,  1102,   480,   737,   480,
     440,  1420,   841,   841,   536,   876,   877,   739,   740,   741,
     554,   742,   743,  1446,   550,  1483,   551,  1290,   573,   499,
     744,   500,   550,   745,   551,   845,   846,  1539,   749,   750,
     751,   752,   753,   754,   755,   756,   389,   757,  1348,  1321,
     313,   596,   762,   763,   764,   390,   765,   766,   501,   477,
    1150,   431,  1154,   767,   628,   768,   552,   628,   769,  1440,
     382,   502,     8,   597,   552,  1463,   772,   773,   774,   775,
     776,   777,   778,   779,  1615,   780,   896,   845,   846,  1241,
     896,  1185,   845,   846,   845,   846,   435,  1033,  1320,   444,
     318,  1192,   907,  1046,   380,  1349,  1201,   585,  1203,  1242,
    1206,  1441,  1207,   314,  1212,  1047,  1215,  1473,  1476,   370,
    1221,  1315,  1223,   475,  1213,   845,   846,   381,  1048,   391,
    1237,   891,   538,   920,  1421,   940,   382,   916,   559,   436,
     679,   678,   679,   678,   383,   841,   576,   917,   478,   479,
     553,  1214,   481,  1616,   790,  1605,  1526,   818,   553,   481,
     555,   481,  1092,   680,   360,   680,   438,   360,   555,   845,
     846,  1321,   619,   831,  1096,   441,  1040,   629,   899,   791,
     630,   418,  1369,   494,  1370,  1326,   496,  1111,  1447,    81,
     681,  1477,   681,   374,  1103,  1104,   647,   529,   490,   598,
     649,  1436,  1437,  1438,   651,   652,   653,  1610,   546,   654,
     383,   546,   567,  1484,  1485,  1580,   842,  1545,  1267,  1595,
     531,   532,   533,   572,   371,   530,   913,  1310,  1267,   892,
    1460,   549,   534,   574,   549,  1540,  1541,  1542,  1543,  1322,
    1456,   544,   545,   547,   568,   569,   570,  1339,   845,   846,
    1311,  1341,   641,   548,     8,   641,   571,   536,   711,  1531,
    1290,  1126,   711,   381,  1127,  1128,  1129,  1130,   845,   846,
     300,  1480,   842,   842,   842,   842,   306,   852,   554,   311,
     387,   573,   550,   385,   551,   550,   642,   551,  1363,  1449,
     388,   591,   386,   853,  1481,   595,  1350,  1351,  1352,   606,
    1380,    22,    23,    24,   393,   615,  1618,   845,   846,  1268,
    1269,   584,   360,  1550,  1174,    15,  1522,   616,   360,  1268,
    1269,   620,   621,   397,   552,   605,   360,   552,  1087,  1609,
     360,   360,   488,   713,   631,   632,   633,   679,   678,   679,
     678,   444,   444,   394,   841,   359,   360,  1236,   398,  1260,
     359,   360,  1551,   359,   360,  1131,   841,   359,   360,  1247,
     680,   395,   680,  1282,  1022,  1475,  1285,  1286,   360,  1109,
     396,    81,  1204,  1114,  1619,   538,  1141,  1186,   650,   360,
     812,  1316,  1624,   845,   846,  1224,  1225,   681,  1142,   681,
     822,   823,   722,   748,   723,  1205,   559,   706,  1143,   576,
    1022,  1187,  1216,   714,   715,   842,  1291,   746,   553,   689,
    1193,   553,   716,  1312,   427,   747,   854,   904,   555,    11,
     758,   555,    12,    13,   905,   722,  1409,   723,   747,  1621,
    1093,   793,   845,   846,   428,   429,   937,   938,  1281,   794,
     605,   360,  1194,   845,   846,  1491,  1217,  1195,  1196,   841,
    1625,   724,  1331,  1566,   841,  1567,  1218,  1340,  1151,   841,
     781,   444,  1342,   841,  1499,  1611,  1345,  1496,   939,   782,
     906,   731,   732,  1208,  1500,   887,   888,   889,   795,   885,
    1152,  1153,  1547,  1503,   724,   287,  1501,  1502,   886,   288,
     912,  1505,  1135,  1136,   913,  1507,  1209,   725,  1622,  1210,
    1211,   797,  1536,  1537,   399,   726,   727,   728,   729,   730,
     841,  1410,  1411,  1386,  1137,  1138,   805,  1139,   770,   444,
    1553,  1554,   367,   368,  1145,  1373,   747,  1261,   444,  1198,
     725,  1412,  1374,  1266,  1146,  1147,   798,   444,   726,   727,
     728,   729,   730,   827,   828,   803,  1148,  1149,   759,   679,
     678,  1199,  1200,   444,   808,   400,   760,  1486,  1569,   733,
    1570,   359,   360,   523,   722,   748,   723,  1487,  1488,   537,
     809,  1025,   680,   444,   444,   557,   444,   359,   360,  1489,
    1490,   759,   360,   575,   401,   861,  1471,  1472,   444,   760,
     813,   814,   733,   826,  1588,  1377,  1018,   402,   444,   681,
    1279,  1280,  1374,   444,   842,   881,   403,  1461,   444,  1052,
    1053,  1054,   689,  1019,   689,  1023,   842,   404,   882,   854,
    1024,   841,   405,   724,  1470,  1037,   444,   771,   722,   748,
     723,  1482,   922,   923,  1612,   747,   491,   406,   360,   360,
     360,   360,   492,  1038,  1088,   660,   661,   662,   663,   664,
     665,   444,   667,   668,   669,   670,   671,   672,   673,   674,
    1183,   605,   360,  1184,   444,   444,   911,   360,  1067,   725,
     908,   915,   824,  1366,   444,   407,   909,   726,   727,   728,
     729,   730,  1249,  -206,  1382,  1383,  1464,   724,  -356,  -356,
     444,  1250,  1465,  1391,   924,  1466,   408,  1395,   825,  1397,
    1398,  1467,  1400,  1401,  1523,   482,   483,   829,   832,   842,
     883,   580,   581,  -206,   842,   830,   833,   412,   884,   842,
     759,  -206,  -206,   842,   883,  1442,  1443,   409,   760,  1425,
     360,   733,   890,   725,   413,   841,   841,  1426,  1517,  1518,
    1429,   726,   727,   728,   729,   730,   925,   926,  1430,   425,
     927,  1429,   731,   732,  1050,  1051,   832,  1530,   722,  1431,
     723,  1414,   841,  1416,  1528,  1529,   360,  1418,   414,   928,
     842,   360,  1429,  1520,  1585,  1546,  1508,  1509,  1585,  1592,
    1577,  1593,  1586,   421,  1428,   439,  1587,  1228,  1590,  1060,
     360,   841,  1233,  1234,  1557,   733,  1591,  1240,   449,   450,
     841,   735,   736,  1558,   941,   426,   942,   784,   785,   689,
     442,   689,   841,   943,   944,  1562,   430,   724,   433,   945,
     845,   846,   854,   841,   473,   474,  1573,   863,   864,   865,
     841,   946,   947,  1575,   359,   360,  1579,   446,   444,   447,
     448,   443,   449,   450,  1583,  1332,  1333,  1334,  1101,   360,
    1277,  1278,   605,   360,   859,  1118,   605,   360,  1119,  1120,
    1121,  1122,  1596,   725,     1,     2,     3,     4,     5,     6,
     445,   726,   727,   728,   729,   730,   455,  1132,   485,  1572,
     472,   842,   731,   732,   299,   305,   308,   731,   732,   722,
     456,   723,  1436,  1437,  1438,   894,   895,  1524,  1525,   900,
     901,   486,  1617,  1620,  1623,  1626,   902,   903,  1062,  1063,
    1628,  1116,  1117,  -206,  1016,  1017,  -206,  -206,  -206,  -206,
     484,  -206,  -206,  1535,  -206,   733,   487,  -206,  -206,  -206,
    -206,  -206,  -206,  -206,  -206,  1123,  1124,  -206,  -206,  -206,
    1133,  1134,   497,  -206,  -206,   979,   980,   503,   724,   381,
    1219,  1220,  1514,  1263,  1264,   288,  1272,  1273,  1283,  1284,
    1287,  1288,  1178,  1360,   385,  -206,  -206,   504,  -206,   389,
     360,  1433,  1434,   395,   690,   691,   431,  -206,   697,   698,
    -206,  -206,   360,  1578,   583,   699,   700,   376,   377,   879,
     879,  1613,  1614,  1417,   725,   842,   842,   707,   708,   592,
     594,   601,   726,   727,   728,   729,   730,   607,   614,   623,
     625,  1469,  1427,  -356,  -356,   626,   645,   634,   635,   648,
     655,   689,   842,   656,   457,   458,   459,   460,   461,   462,
     701,   702,   703,   922,   923,   709,   704,   463,   719,   720,
    1072,   737,   787,   799,   360,   759,   789,  1608,  1607,   800,
     464,   842,   801,   760,   810,   802,   733,   848,  1343,  1073,
     842,   806,  1346,  1309,   807,  1074,   849,   850,   851,   858,
     870,   872,   842,   874,   360,   360,   875,   501,   893,   898,
     360,   896,  1020,   842,  1027,   360,  1358,  1029,  1031,   360,
     842,  1364,  1365,  1309,  1026,   924,  1372,  1032,   641,  1033,
    1036,  1043,  1044,  1381,  1045,  1055,  1056,  1061,  1066,  1387,
    1069,  1389,  1084,  1068,  1392,  1085,  1070,  1089,  1396,  1090,
     465,   466,   467,   468,   469,   470,  1094,  1403,  1091,  1095,
    1099,  1405,  1097,  1098,  1100,  1107,   360,  1112,  1110,    81,
    1075,  1076,  1077,  1078,  1173,  1079,  1080,   925,   926,  1178,
    1177,   927,  1191,  1182,  1202,  1189,  1227,  1229,  1222,  1231,
    1243,  1232,  1244,  1245,  1252,   359,   360,   359,   360,  1258,
     928,   359,   360,  1262,  1294,  1251,  1511,  1313,    23,  1256,
    1513,   471,  1515,  1516,  1317,  1318,  1319,  1325,   359,   360,
    1314,  1327,  1328,  1336,   961,  1384,  1324,   962,   963,   964,
     965,  1359,   966,  1354,  1407,   967,  1357,  1527,   968,   969,
     970,   971,   972,   973,   974,   975,  1408,  1415,   976,   977,
     978,  1422,  1419,  1423,  1432,  1424,  1435,  1451,  1445,  1453,
    1457,  1458,   360,  1459,  -531,  1460,  1479,  1494,  1497,  1506,
    1512,   360,  1544,  1519,  1574,  1576,  1581,   360,  1589,  1582,
    1601,  1455,  1321,  1629,  1602,  -532,  1630,   317,   314,  1144,
    1309,   979,   980,  1356,  1378,  1176,  1344,  1361,  1495,   962,
     963,   964,   965,  1538,   966,   527,   539,   967,   525,   526,
     968,   969,   970,   971,   972,   973,   974,   975,   540,   560,
     976,   977,   978,  1450,   541,  1041,   561,   451,   562,   816,
    1347,  1230,   452,   962,   963,   964,   965,   563,   966,   565,
     819,   967,   657,   564,   968,   969,   970,   971,   972,   973,
     974,   975,  1065,  1239,   976,   977,   978,  1257,   424,   821,
     314,   658,   692,   979,   980,  1603,   718,  1604,  1413,  1510,
     432,   880,   489,   659,   640,  1042,  1039,   639,   599,   860,
    1071,  1083,  1276,  1082,   862,   600,   359,   360,  1549,  1556,
    1444,   360,   360,  1627,   314,   610,   811,   979,   980,  1265,
    1275,  1293,  1454,  1521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,     0,
     360,     0,     0,   360,   360,     0,     0,   360,     0,  1559,
       0,   360,   360,   360,   360,     0,     0,     0,     0,  1309,
       0,  1563,  1532,  1533,     0,     0,  1309,   360,     0,     0,
    1309,  1309,  1309,  1309,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   360,
       0,     0,     0,  1584,     0,     0,   360,   319,   320,   321,
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
     962,   963,   964,   965,     0,   966,     0,     0,   967,     0,
       0,   968,   969,   970,   971,   972,   973,   974,   975,     0,
       0,   976,   977,   978,     0,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,   378,
       0,   314,     0,     0,   979,   980,     0,     0,     0,  1057,
       0,  1058,    22,    23,    24,    25,    26,    27,    28,    29,
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
     352,   169,   170,   353,   172,   173,   174,   175,  1235,   176,
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
       0,     0,     0,     0,  1295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1296,     0,     0,     0,
       0,     0,  1297,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1298,   362,    27,    28,   363,    30,    31,
     364,    33,    34,    35,    36,    37,    38,    39,  1299,   328,
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
    1155,   176,   354,   178,   355,   180,   181,  1300,  1301,   184,
     185,   186,   356,   357,   189,   190,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1295,     0,     0,     0,  1156,
       0,  1157,  1158,  1159,  1160,  1161,  1162,  1163,     0,     0,
       0,     0,     0,     0,     0,     0,  1164,  1165,  1166,  1167,
    1168,  1169,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1170,  1171,  1172,  1298,   362,    27,    28,   363,    30,
      31,   364,    33,    34,    35,    36,    37,    38,    39,  1299,
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
     189,   190,   834,  1246,     0,     0,     0,     0,     0,     0,
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
       0,  1367,     0,     0,   962,   963,   964,   965,     0,   966,
       0,     0,   967,     0,     0,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1379,     0,
       0,   962,   963,   964,   965,     0,   966,     0,     0,   967,
       0,     0,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,  1388,     0,     0,   962,
     963,   964,   965,     0,   966,   314,     0,   967,   979,   980,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,  1390,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   979,   980,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,  1393,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   979,   980,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1394,     0,
       0,   962,   963,   964,   965,     0,   966,   314,     0,   967,
     979,   980,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,  1399,     0,     0,   962,
     963,   964,   965,     0,   966,   314,     0,   967,   979,   980,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,  1402,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   979,   980,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,  1404,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   979,   980,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1406,     0,
       0,   962,   963,   964,   965,     0,   966,   314,     0,   967,
     979,   980,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,  1492,     0,     0,   962,
     963,   964,   965,     0,   966,   314,     0,   967,   979,   980,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,  1493,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   979,   980,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,  1498,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   979,   980,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1504,     0,
       0,   962,   963,   964,   965,     0,   966,   314,     0,   967,
     979,   980,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,  1560,     0,     0,   962,
     963,   964,   965,     0,   966,   314,     0,   967,   979,   980,
     968,   969,   970,   971,   972,   973,   974,   975,     0,     0,
     976,   977,   978,  1561,     0,     0,   962,   963,   964,   965,
       0,   966,   314,     0,   967,   979,   980,   968,   969,   970,
     971,   972,   973,   974,   975,     0,     0,   976,   977,   978,
       0,  1564,     0,     0,   962,   963,   964,   965,     0,   966,
     314,     0,   967,   979,   980,   968,   969,   970,   971,   972,
     973,   974,   975,     0,     0,   976,   977,   978,  1565,     0,
       0,   962,   963,   964,   965,     0,   966,   314,     0,   967,
     979,   980,   968,   969,   970,   971,   972,   973,   974,   975,
       0,     0,   976,   977,   978,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,     0,     0,   979,   980,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   314,     0,     0,   979,   980
};

static const yytype_int16 yycheck[] =
{
      21,   921,   229,   476,   477,   478,   479,   472,   472,   236,
    1056,   409,  1320,  1137,     8,     8,   414,    10,   579,   417,
     304,   646,   381,   421,   298,  1078,   645,   504,   312,   312,
     472,   679,   680,   681,   393,   394,    10,   622,   915,   624,
     312,   927,   627,   304,     3,     4,     5,   298,   298,   298,
     312,   312,   298,   304,   304,   304,  1302,   472,    35,   298,
      14,   312,   312,   312,   123,   304,     9,    11,    36,    37,
      12,    62,   431,   312,   735,   736,   123,    12,    53,    12,
      62,     9,   701,   702,   298,   701,   702,   508,   509,   510,
     304,   512,   513,    10,   304,   123,   304,    42,   312,   268,
     521,   270,   312,   524,   312,    50,    51,  1462,   529,   530,
     531,   532,   533,   534,   535,   536,    42,   538,    66,   115,
     243,    43,   543,   544,   545,    51,   547,   548,    42,    73,
     953,    42,   955,   554,    35,   556,   304,    35,   559,   102,
      51,    55,     9,    65,   312,  1304,   567,   568,   569,   570,
     571,   572,   573,   574,    47,   576,   126,    50,    51,    23,
     126,   984,    50,    51,    50,    51,    62,   150,    42,    35,
       0,   994,   728,    11,    19,   123,   999,    43,  1001,    43,
    1003,   144,  1005,   306,  1007,    23,  1009,   183,    42,   130,
    1013,  1111,  1015,   161,   273,    50,    51,    42,    36,   125,
     183,   176,   298,   173,   132,   761,    51,   173,   304,   105,
     675,   675,   677,   677,   125,   834,   312,   183,   162,   163,
     304,   300,   164,   116,   106,  1580,   161,   625,   312,   164,
     304,   164,   893,   675,   227,   677,   227,   230,   312,    50,
      51,   115,   219,   641,   905,   227,   831,   148,   725,   131,
     148,   194,   311,   227,   313,  1132,   230,   918,   175,   126,
     675,   115,   677,   106,   311,   312,   435,   541,   222,   191,
     439,   213,   214,   215,   443,   444,   445,  1585,   562,   448,
     125,   565,   565,   311,   312,  1531,   645,   175,   120,   175,
     541,   541,   541,   565,   108,   541,   241,   152,   120,   720,
      12,   562,   541,   565,   565,  1464,  1465,  1466,  1467,   183,
      19,   562,   562,   562,   565,   565,   565,  1140,    50,    51,
     175,  1144,     9,   562,     9,     9,   565,   541,   497,  1453,
      42,    89,   501,    42,    92,    93,    94,    95,    50,    51,
     299,   152,   701,   702,   703,   704,   305,   225,   562,   308,
      42,   565,   562,    42,   562,   565,    43,   565,  1181,    43,
      42,   382,    51,   241,   175,   386,   314,   315,   316,   390,
    1193,    56,    57,    58,    42,   396,    49,    50,    51,   211,
     212,   375,   375,   205,   116,    34,  1432,   408,   381,   211,
     212,   412,   413,    19,   562,   389,   389,   565,    22,    22,
     393,   394,    51,   152,   425,   426,   427,   872,   872,   874,
     874,    35,    35,    42,  1033,   409,   409,  1033,    19,  1067,
     414,   414,  1475,   417,   417,   183,  1045,   421,   421,  1045,
     872,    42,   874,  1094,   793,  1321,  1097,  1098,   431,   916,
      51,   126,   273,   920,   117,   541,   273,   272,   442,   442,
     619,  1112,    49,    50,    51,  1016,  1017,   872,   285,   874,
     629,   630,    68,    69,    70,   296,   562,   488,   295,   565,
     829,   296,   242,   222,   223,   834,  1101,   180,   562,   472,
     264,   565,   231,  1108,    51,   188,   655,   138,   562,    26,
     180,   565,    29,    30,   145,    68,    33,    70,   188,    47,
     898,    35,    50,    51,    71,    72,    71,    72,  1093,    43,
     504,   504,   296,    50,    51,  1338,   286,   301,   302,  1138,
     117,   127,  1138,    46,  1143,    48,   296,  1143,   273,  1148,
     271,    35,  1148,  1152,   273,  1588,  1152,  1360,   103,   280,
     191,   192,   193,   273,   283,   714,   715,   716,    52,   220,
     295,   296,  1472,  1376,   127,   186,   295,   296,   229,   190,
     237,  1384,   272,   273,   241,  1388,   296,   173,   116,   299,
     300,   592,  1458,  1459,    19,   181,   182,   183,   184,   185,
    1199,   118,   119,  1199,   294,   295,   607,   297,   180,    35,
    1476,  1477,   123,   124,   273,   242,   188,  1070,    35,   273,
     173,  1226,   249,  1076,   283,   284,    52,    35,   181,   182,
     183,   184,   185,   634,   635,    52,   295,   296,   224,  1084,
    1084,   295,   296,    35,    52,    19,   232,   273,    46,   235,
      48,   625,   625,   292,    68,    69,    70,   283,   284,   298,
      52,   810,  1084,    35,    35,   304,    35,   641,   641,   295,
     296,   224,   645,   312,    19,   676,  1317,  1318,    35,   232,
      52,    52,   235,    52,  1550,   242,    27,    19,    35,  1084,
    1091,  1092,   249,    35,  1033,    52,    19,  1302,    35,   848,
     849,   850,   675,    44,   677,    52,  1045,    19,   709,   858,
      52,  1310,    19,   127,  1310,    52,    35,   180,    68,    69,
      70,  1326,    89,    90,  1590,   188,    32,    19,   701,   702,
     703,   704,    38,    52,   883,   457,   458,   459,   460,   461,
     462,    35,   464,   465,   466,   467,   468,   469,   470,   471,
     296,   725,   725,   299,    35,    35,   730,   730,    52,   173,
     171,   734,    43,  1184,    35,    19,   177,   181,   182,   183,
     184,   185,    52,    12,  1195,  1196,    32,   127,   192,   193,
      35,    52,    38,  1204,   151,    32,    51,  1208,    43,  1210,
    1211,    38,  1213,  1214,  1435,   165,   166,    35,    35,  1138,
      35,   106,   107,    42,  1143,    43,    43,    51,    43,  1148,
     224,    50,    51,  1152,    35,  1268,  1269,     9,   232,    35,
     793,   235,    43,   173,    51,  1424,  1425,    43,  1424,  1425,
      35,   181,   182,   183,   184,   185,   203,   204,    43,    42,
     207,    35,   192,   193,   845,   846,    35,  1452,    68,    43,
      70,  1229,  1451,  1231,    43,  1451,   829,  1235,     9,   226,
    1199,   834,    35,  1428,    35,  1470,  1407,  1408,    35,   164,
      43,   166,    43,     9,  1252,    62,    43,  1026,    35,   853,
     853,  1480,  1031,  1032,  1480,   235,    43,  1036,   138,   139,
    1489,   189,   190,  1489,   242,    42,   244,   307,   308,   872,
     235,   874,  1501,   251,   252,  1501,    19,   127,    42,   257,
      50,    51,  1061,  1512,    36,    37,  1512,   208,   209,   210,
    1519,   269,   270,  1519,   898,   898,  1531,   133,    35,   135,
     136,   240,   138,   139,  1539,    56,    57,    58,   912,   912,
    1089,  1090,   916,   916,   666,    89,   920,   920,    92,    93,
      94,    95,  1557,   173,     3,     4,     5,     6,     7,     8,
     132,   181,   182,   183,   184,   185,   156,   940,   169,  1510,
     195,  1310,   192,   193,     3,     4,     5,   192,   193,    68,
     157,    70,   213,   214,   215,   171,   172,  1440,  1441,   171,
     172,   160,  1597,  1598,  1599,  1600,   121,   122,   140,   141,
    1605,    87,    88,   242,   123,   124,   245,   246,   247,   248,
     158,   250,   251,  1458,   253,   235,   168,   256,   257,   258,
     259,   260,   261,   262,   263,    87,    88,   266,   267,   268,
     281,   282,    42,   272,   273,   309,   310,   187,   127,    42,
     286,   287,  1420,   100,   101,   190,   216,   217,   143,   144,
     178,   179,   254,   255,    42,   294,   295,   173,   297,    42,
    1033,   143,   144,    42,   473,   474,    42,   306,   480,   481,
     309,   310,  1045,  1526,    31,   482,   483,    16,    17,   703,
     704,  1592,  1593,  1232,   173,  1424,  1425,   491,   492,    51,
      43,    43,   181,   182,   183,   184,   185,    51,    43,    35,
       9,  1308,  1251,   192,   193,    35,   152,    51,    51,   159,
     137,  1084,  1451,   138,    13,    14,    15,    16,    17,    18,
     159,   152,   152,    89,    90,    21,   152,    26,    56,   126,
      96,    53,   106,    43,  1107,   224,   107,  1582,  1582,    43,
      39,  1480,    43,   232,    10,    43,   235,   225,  1149,   115,
    1489,    43,  1153,  1107,    43,   121,    62,   152,   225,   137,
      91,    24,  1501,    25,  1137,  1138,    86,    42,    39,     9,
    1143,   126,   131,  1512,   115,  1148,  1177,   194,    10,  1152,
    1519,  1182,  1183,  1137,   132,   151,  1187,   134,     9,   150,
     154,    42,    42,  1194,    42,    42,    42,    35,    43,  1200,
     213,  1202,   134,    98,  1205,    23,    97,   231,  1209,   231,
     109,   110,   111,   112,   113,   114,    39,  1218,   126,   142,
      35,  1222,   173,   173,   126,   236,  1199,   115,   191,   126,
     196,   197,   198,   199,   242,   201,   202,   203,   204,   254,
     296,   207,   242,   298,   296,   273,    43,     9,   296,     9,
      43,    10,    43,    43,     9,  1229,  1229,  1231,  1231,   142,
     226,  1235,  1235,    97,    35,   225,  1415,    39,    57,   225,
    1419,   170,  1421,  1422,    35,    39,   213,    94,  1252,  1252,
     173,   282,   281,   251,   242,   265,   213,   245,   246,   247,
     248,   298,   250,   123,    45,   253,   242,  1446,   256,   257,
     258,   259,   260,   261,   262,   263,    45,   134,   266,   267,
     268,   155,   132,    43,    42,   152,   145,   152,   200,   236,
      19,    42,  1295,    42,    21,    12,   213,   123,   242,   242,
     152,  1304,    21,   152,   132,    10,    43,  1310,   206,    35,
      28,  1295,   115,    43,   132,    21,   206,     6,   306,   951,
    1304,   309,   310,  1172,  1190,   963,   242,  1179,  1359,   245,
     246,   247,   248,  1460,   250,   294,   299,   253,   293,   293,
     256,   257,   258,   259,   260,   261,   262,   263,   299,   305,
     266,   267,   268,  1290,   300,   832,   305,   196,   306,   623,
     242,  1028,   196,   245,   246,   247,   248,   308,   250,   311,
     626,   253,   453,   308,   256,   257,   258,   259,   260,   261,
     262,   263,   858,  1034,   266,   267,   268,  1061,   100,   628,
     306,   455,   475,   309,   310,  1574,   501,  1576,  1226,  1409,
     141,   704,   219,   456,   432,   834,   829,   431,   387,   675,
     872,   874,  1084,   873,   677,   387,  1420,  1420,  1474,  1479,
    1270,  1424,  1425,  1602,   306,   393,   618,   309,   310,  1075,
    1080,  1101,  1294,  1429,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1451,    -1,
    1453,    -1,    -1,  1456,  1457,    -1,    -1,  1460,    -1,  1490,
      -1,  1464,  1465,  1466,  1467,    -1,    -1,    -1,    -1,  1453,
      -1,  1502,  1456,  1457,    -1,    -1,  1460,  1480,    -1,    -1,
    1464,  1465,  1466,  1467,    -1,    -1,  1489,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1501,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1512,
      -1,    -1,    -1,  1544,    -1,    -1,  1519,    59,    60,    61,
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
     245,   246,   247,   248,    -1,   250,    -1,    -1,   253,    -1,
      -1,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,   266,   267,   268,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    43,
      -1,   306,    -1,    -1,   309,   310,    -1,    -1,    -1,   311,
      -1,   313,    56,    57,    58,    59,    60,    61,    62,    63,
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
     242,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,   271,
      -1,   273,   274,   275,   276,   277,   278,   279,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   288,   289,   290,   291,
     292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,    59,    60,    61,    62,    63,    64,
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
     261,   262,   263,    -1,    -1,   266,   267,   268,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,    -1,    -1,   253,
      -1,    -1,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   306,    -1,   253,   309,   310,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   306,    -1,   253,   309,   310,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     306,    -1,   253,   309,   310,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   306,    -1,   253,
     309,   310,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   306,    -1,   253,   309,   310,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   306,    -1,   253,   309,   310,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     306,    -1,   253,   309,   310,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   306,    -1,   253,
     309,   310,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   306,    -1,   253,   309,   310,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   306,    -1,   253,   309,   310,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     306,    -1,   253,   309,   310,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   306,    -1,   253,
     309,   310,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,    -1,   242,    -1,    -1,   245,
     246,   247,   248,    -1,   250,   306,    -1,   253,   309,   310,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
     266,   267,   268,   242,    -1,    -1,   245,   246,   247,   248,
      -1,   250,   306,    -1,   253,   309,   310,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,   266,   267,   268,
      -1,   242,    -1,    -1,   245,   246,   247,   248,    -1,   250,
     306,    -1,   253,   309,   310,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,   266,   267,   268,   242,    -1,
      -1,   245,   246,   247,   248,    -1,   250,   306,    -1,   253,
     309,   310,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,   266,   267,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,   309,   310,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   306,    -1,    -1,   309,   310
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   318,     9,    11,
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
     241,   450,   451,   452,   453,   454,   455,   456,   461,   471,
     474,   478,   479,   480,   481,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   516,   517,   518,   519,
     521,   522,   523,   524,   525,   527,   528,   529,   540,   542,
     544,   545,   546,   549,   550,   551,   552,   562,   563,   564,
     565,   566,   567,   568,   570,   572,   574,   609,   610,   611,
     612,   613,   614,   615,   618,   619,   620,   621,   623,   630,
     631,   635,   636,   637,   638,   642,   643,   186,   190,   401,
     402,   403,   404,   417,   420,   408,   409,   410,   411,   417,
     420,   412,   413,   414,   415,   417,   420,   416,   417,   418,
     419,   420,   421,   243,   306,   319,   320,   342,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   104,
     121,   122,   133,   135,   146,   147,   149,   153,   167,   173,
     191,   193,   218,   221,   228,   230,   238,   239,   520,   642,
     643,    59,    60,    63,    66,   191,   511,   123,   124,   530,
     130,   108,   541,   502,   106,   532,   493,   493,    43,   451,
      19,    42,    51,   125,   547,    42,    51,    42,    42,    42,
      51,   125,   553,    42,    42,    42,    51,    19,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    51,     9,
     616,   617,    51,    51,     9,   457,   458,     9,   194,   462,
     463,     9,   472,   473,   472,    42,    42,    51,    71,    72,
      19,    42,   547,    42,   445,    62,   105,    62,   227,    62,
      62,   227,   235,   240,    35,   132,   133,   135,   136,   138,
     139,   456,   461,   464,   465,   156,   157,    13,    14,    15,
      16,    17,    18,    26,    39,   109,   110,   111,   112,   113,
     114,   170,   195,    36,    37,   161,    11,    73,   162,   163,
      12,   164,   165,   166,   158,   169,   160,   168,    51,   498,
     502,    32,    38,   515,   511,   515,   511,    42,   515,   452,
     452,    42,    55,   187,   173,   180,   188,   405,   406,   423,
     425,   426,   427,   428,   430,   431,   432,   435,   436,   437,
     440,   441,   443,   450,   624,   402,   403,   404,   180,   405,
     406,   423,   425,   427,   428,   429,   441,   450,   624,   409,
     410,   411,   180,   422,   423,   425,   426,   427,   428,   430,
     431,   432,   435,   436,   441,   443,   444,   450,   608,   624,
     413,   414,   415,   418,   419,   421,   180,   422,   423,   425,
     427,   428,   429,   441,   444,   450,   624,   321,   343,   531,
     106,   107,   543,    31,   642,    43,    11,    43,   569,   576,
     623,   451,    51,   548,    43,   451,    43,    65,   191,   572,
     574,    43,    43,   126,   622,   642,   451,    51,   554,   571,
     576,   575,   577,   623,    43,   451,   451,   520,    35,   219,
     451,   451,   520,    35,   520,     9,    35,   520,    35,   148,
     148,   451,   451,   451,    51,    51,    11,    43,   573,   577,
     548,     9,    43,   447,   448,   152,   557,   452,   159,   452,
     642,   452,   452,   452,   452,   137,   138,   465,   480,   481,
     483,   483,   483,   483,   483,   483,   482,   483,   483,   483,
     483,   483,   483,   483,   483,    42,    51,    54,   517,   519,
     522,   525,   580,   582,   583,   584,   585,   586,   587,   643,
     486,   486,   485,   487,   487,   487,   487,   488,   488,   489,
     489,   159,   152,   152,   152,    52,   451,   503,   503,    21,
      43,   452,   526,   152,   222,   223,   231,    43,   526,    56,
     126,   622,    68,    70,   127,   173,   181,   182,   183,   184,
     185,   192,   193,   235,   407,   189,   190,    53,   424,   424,
     424,   424,   424,   424,   424,   424,   180,   188,    69,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   180,   224,
     232,   446,   424,   424,   424,   424,   424,   424,   424,   424,
     180,   180,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   271,   280,   322,   307,   308,   345,   106,   532,   107,
     106,   131,   499,    35,    43,    52,    52,   451,    52,    43,
      43,    43,    43,    52,    52,   451,    43,    43,    52,    52,
      10,   617,   452,    52,    52,   557,   458,   557,   520,   463,
     557,   473,   452,   452,    43,    43,    52,   451,   451,    35,
      43,   520,    35,    43,    42,    67,   174,   193,   558,   560,
     561,   562,   623,   639,   641,    50,    51,   449,   225,    62,
     152,   225,   225,   241,   452,   466,   467,   468,   137,   483,
     580,   451,   586,   208,   209,   210,   603,   603,   603,   603,
      91,   607,    24,   581,    25,    86,   558,   558,   555,   561,
     555,    52,   451,    35,    43,   220,   229,   452,   452,   452,
      43,   176,   424,    39,   171,   172,   126,   579,     9,   622,
     171,   172,   121,   122,   138,   145,   191,   407,   171,   177,
     433,   642,   237,   241,   627,   643,   173,   183,   439,   579,
     173,   579,    89,    90,   151,   203,   204,   207,   226,   589,
     590,   591,   592,   593,   596,   601,   602,    71,    72,   103,
     407,   242,   244,   251,   252,   257,   269,   270,   323,   324,
     327,   328,   332,   333,   334,   335,   336,   337,   340,   341,
     344,   242,   245,   246,   247,   248,   250,   253,   256,   257,
     258,   259,   260,   261,   262,   263,   266,   267,   268,   309,
     310,   342,   346,   347,   348,   349,   350,   351,   352,   355,
     356,   360,   361,   362,   363,   364,   369,   370,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   123,   124,    27,    44,
     131,   578,   623,    52,    52,   452,   132,   115,   459,   194,
     460,    10,   134,   150,   475,   477,   154,    52,    52,   578,
     557,   448,   560,    42,    42,    42,    11,    23,    36,   559,
     451,   451,   452,   452,   452,    42,    42,   311,   313,   632,
     642,    35,   140,   141,   469,   466,    43,    52,    98,   213,
      97,   583,    96,   115,   121,   196,   197,   198,   199,   201,
     202,   588,   589,   584,   134,    23,   556,    22,   452,   231,
     231,   126,   579,   520,    39,   142,   579,   173,   173,    35,
     126,   642,   123,   311,   312,   628,   629,   236,   445,   622,
     191,   579,   115,   438,   622,   438,    87,    88,    89,    92,
      93,    94,    95,    87,    88,   621,    89,    92,    93,    94,
      95,   183,   643,   281,   282,   272,   273,   294,   295,   297,
     329,   273,   285,   295,   329,   273,   283,   284,   295,   296,
     345,   273,   295,   296,   345,   242,   271,   273,   274,   275,
     276,   277,   278,   279,   288,   289,   290,   291,   292,   293,
     303,   304,   305,   242,   116,   449,   350,   296,   254,   365,
     366,   367,   298,   296,   299,   345,   272,   296,   354,   273,
     357,   242,   345,   264,   296,   301,   302,   371,   273,   295,
     296,   345,   296,   345,   273,   296,   345,   345,   273,   296,
     299,   300,   345,   273,   300,   345,   242,   286,   296,   286,
     287,   345,   296,   345,   532,   532,   539,    43,   452,     9,
     460,     9,    10,   452,   452,     9,   558,   183,   476,   477,
     452,    23,    43,    43,    43,    43,    43,   558,   640,    52,
      52,   225,     9,   633,   634,   633,   225,   467,   142,   470,
     603,   487,    97,   100,   101,   619,   487,   120,   211,   212,
     604,   604,   216,   217,   606,   606,   585,   452,   452,   424,
     424,   557,   579,   143,   144,   579,   579,   178,   179,   434,
      42,   449,   626,   627,    35,    20,    32,    38,    59,    74,
     233,   234,   391,   392,   393,   394,   397,   398,   399,   511,
     152,   175,   449,    39,   173,   438,   579,    35,    39,   213,
      42,   115,   183,   595,   213,    94,   445,   282,   281,   325,
     391,   558,    56,    57,    58,   326,   251,   330,   331,   345,
     558,   345,   558,   451,   242,   558,   451,   242,    66,   123,
     314,   315,   316,   338,   123,   339,   339,   242,   451,   298,
     255,   366,   368,   345,   451,   451,   344,   242,   123,   311,
     313,   353,   451,   242,   249,   358,   359,   242,   358,   242,
     345,   451,   344,   344,   265,   372,   558,   451,   242,   451,
     242,   344,   451,   242,   242,   344,   451,   344,   344,   242,
     344,   344,   242,   451,   242,   451,   242,    45,    45,    33,
     118,   119,   449,   528,   520,   134,   520,   452,   520,   132,
       9,   132,   155,    43,   152,    35,    43,   452,   520,    35,
      43,    43,    42,   143,   144,   145,   213,   214,   215,   605,
     102,   144,   487,   487,   605,   200,    10,   175,   442,    43,
     447,   152,   625,   236,   629,   511,    19,    19,    42,    42,
      12,   449,   626,   398,    32,    38,    32,    38,   400,   515,
     558,   579,   579,   183,   595,   621,    42,   115,   598,   213,
     152,   175,   449,   123,   311,   312,   273,   283,   284,   295,
     296,   345,   242,   242,   123,   451,   345,   242,   242,   273,
     283,   295,   296,   345,   242,   345,   242,   345,   532,   532,
     530,   452,   152,   452,   520,   452,   452,   558,   558,   152,
     557,   634,   633,   579,   487,   487,   161,   452,    43,   558,
     449,   391,   511,   511,   395,   519,   621,   621,   392,   625,
     398,   398,   398,   398,    21,   175,   449,   438,   594,   594,
     205,   604,   599,   621,   621,   597,   597,   558,   558,   451,
     242,   242,   558,   451,   242,   242,    46,    48,   533,    46,
      48,   534,   532,   558,   132,   558,    10,    43,   487,   449,
     626,    43,    35,   449,   451,    35,    43,    43,   621,   206,
      35,    43,   164,   166,   600,   175,   449,   535,   537,   536,
     538,    28,   132,   452,   452,   625,   396,   517,   519,    22,
     595,   604,   621,   598,   598,    47,   116,   449,    49,   117,
     449,    47,   116,   449,    49,   117,   449,   452,   449,    43,
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
#line 763 "../src/parser/XQParser.y"
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
#line 790 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:
#line 793 "../src/parser/XQParser.y"
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
#line 816 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:
#line 820 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:
#line 838 "../src/parser/XQParser.y"
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
#line 857 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:
#line 861 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:
#line 866 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:
#line 873 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:
#line 878 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:
#line 891 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:
#line 895 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:
#line 901 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:
#line 906 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:
#line 916 "../src/parser/XQParser.y"
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
#line 929 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, false, true, MEMMGR));
  }
    break;

  case 37:
#line 933 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:
#line 940 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:
#line 945 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:
#line 953 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:
#line 957 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:
#line 965 "../src/parser/XQParser.y"
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
#line 992 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:
#line 996 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:
#line 1003 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:
#line 1009 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:
#line 1014 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:
#line 1028 "../src/parser/XQParser.y"
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
#line 1052 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:
#line 1056 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:
#line 1063 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:
#line 1068 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:
#line 1073 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:
#line 1078 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:
#line 1089 "../src/parser/XQParser.y"
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
#line 1107 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:
#line 1111 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:
#line 1118 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:
#line 1123 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:
#line 1131 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:
#line 1156 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:
#line 1159 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:
#line 1162 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:
#line 1165 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:
#line 1168 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:
#line 1171 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:
#line 1174 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:
#line 1177 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:
#line 1180 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:
#line 1183 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:
#line 1186 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:
#line 1189 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:
#line 1192 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:
#line 1195 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:
#line 1198 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:
#line 1201 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:
#line 1204 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:
#line 1207 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:
#line 1217 "../src/parser/XQParser.y"
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
#line 1229 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:
#line 1232 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:
#line 1240 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:
#line 1245 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:
#line 1250 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:
#line 1258 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:
#line 1266 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:
#line 1277 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:
#line 1287 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:
#line 1291 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:
#line 1298 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:
#line 1307 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:
#line 1311 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:
#line 1316 "../src/parser/XQParser.y"
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
#line 1329 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
  }
    break;

  case 101:
#line 1333 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:
#line 1338 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:
#line 1343 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 121:
#line 1371 "../src/parser/XQParser.y"
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

  case 122:
#line 1389 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 123:
#line 1393 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 124:
#line 1398 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 125:
#line 1407 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 128:
#line 1416 "../src/parser/XQParser.y"
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

  case 129:
#line 1436 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 130:
#line 1440 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 131:
#line 1445 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 132:
#line 1453 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 133:
#line 1458 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 134:
#line 1462 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 135:
#line 1469 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 136:
#line 1473 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 137:
#line 1481 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 138:
#line 1494 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 139:
#line 1498 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 140:
#line 1508 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 141:
#line 1512 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 142:
#line 1520 "../src/parser/XQParser.y"
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

  case 143:
#line 1538 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 144:
#line 1542 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 145:
#line 1549 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 146:
#line 1554 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 147:
#line 1559 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 148:
#line 1567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 149:
#line 1573 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 150:
#line 1581 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 151:
#line 1589 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 152:
#line 1596 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 153:
#line 1610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 154:
#line 1614 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 155:
#line 1628 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 156:
#line 1637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 157:
#line 1644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 158:
#line 1648 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 159:
#line 1655 "../src/parser/XQParser.y"
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

  case 160:
#line 1690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 161:
#line 1694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 162:
#line 1699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 163:
#line 1705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 165:
#line 1718 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 166:
#line 1725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 167:
#line 1729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 168:
#line 1736 "../src/parser/XQParser.y"
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

  case 169:
#line 1754 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 170:
#line 1758 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 171:
#line 1765 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 172:
#line 1770 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:
#line 1778 "../src/parser/XQParser.y"
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

  case 174:
#line 1796 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 175:
#line 1800 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 176:
#line 1808 "../src/parser/XQParser.y"
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

  case 177:
#line 1830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 178:
#line 1834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 179:
#line 1841 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 180:
#line 1849 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 181:
#line 1858 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 182:
#line 1866 "../src/parser/XQParser.y"
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

  case 183:
#line 1903 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 184:
#line 1907 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 185:
#line 1914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 186:
#line 1921 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 187:
#line 1930 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 188:
#line 1939 "../src/parser/XQParser.y"
    {
    XQElementConstructor *elem = (XQElementConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = elem;

    if(elem->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:element instruction does not have a {}name attribute");
    }

    if(elem->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back(elem->namespaceExpr);
      args.push_back(const_cast<ASTNode*>(elem->getName()));
      FunctionQName *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FunctionQName(args, MEMMGR));
      elem->setName(name);
      elem->namespaceExpr = 0;
    }

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
    elem->setChildren(children);
  }
    break;

  case 189:
#line 1965 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 190:
#line 1969 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 191:
#line 1976 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 192:
#line 1986 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 193:
#line 1998 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 194:
#line 2002 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 195:
#line 2007 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 196:
#line 2016 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 197:
#line 2029 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 198:
#line 2033 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 199:
#line 2038 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 200:
#line 2047 "../src/parser/XQParser.y"
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

  case 201:
#line 2061 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 202:
#line 2065 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 203:
#line 2078 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 204:
#line 2083 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 205:
#line 2095 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 206:
#line 2099 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 207:
#line 2107 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 208:
#line 2120 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 209:
#line 2128 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 210:
#line 2141 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 211:
#line 2148 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 216:
#line 2187 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 217:
#line 2191 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 218:
#line 2195 "../src/parser/XQParser.y"
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

  case 219:
#line 2213 "../src/parser/XQParser.y"
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

  case 220:
#line 2231 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 221:
#line 2241 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 222:
#line 2255 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 223:
#line 2263 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 224:
#line 2269 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 225:
#line 2275 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 226:
#line 2281 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 227:
#line 2292 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 228:
#line 2296 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 236:
#line 2326 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 237:
#line 2330 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 238:
#line 2334 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 239:
#line 2338 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 240:
#line 2342 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 241:
#line 2346 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 242:
#line 2352 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 243:
#line 2358 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 251:
#line 2384 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, true, MEMMGR));
  }
    break;

  case 252:
#line 2388 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 253:
#line 2392 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, true, MEMMGR));
  }
    break;

  case 254:
#line 2396 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, true, MEMMGR));
  }
    break;

  case 264:
#line 2425 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 265:
#line 2429 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 266:
#line 2433 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 267:
#line 2437 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 268:
#line 2441 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 269:
#line 2445 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 270:
#line 2451 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 271:
#line 2457 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 272:
#line 2461 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 280:
#line 2488 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 281:
#line 2492 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 282:
#line 2496 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 283:
#line 2500 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 284:
#line 2504 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 285:
#line 2508 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 286:
#line 2514 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 287:
#line 2520 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 292:
#line 2539 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 293:
#line 2544 "../src/parser/XQParser.y"
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

  case 296:
#line 2573 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 298:
#line 2587 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 299:
#line 2591 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 300:
#line 2595 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 301:
#line 2599 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 302:
#line 2603 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 303:
#line 2607 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 304:
#line 2613 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 305:
#line 2619 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 306:
#line 2623 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 318:
#line 2655 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 319:
#line 2663 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 320:
#line 2668 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 321:
#line 2677 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 322:
#line 2682 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 323:
#line 2691 "../src/parser/XQParser.y"
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

  case 324:
#line 2751 "../src/parser/XQParser.y"
    {
  }
    break;

  case 325:
#line 2758 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 326:
#line 2763 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 327:
#line 2772 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 328:
#line 2777 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 329:
#line 2786 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 330:
#line 2796 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 331:
#line 2800 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 332:
#line 2808 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 333:
#line 2812 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 334:
#line 2820 "../src/parser/XQParser.y"
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

  case 335:
#line 2836 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 336:
#line 2845 "../src/parser/XQParser.y"
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

  case 337:
#line 2857 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 338:
#line 2865 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 339:
#line 2869 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 340:
#line 2874 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 341:
#line 2883 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 342:
#line 2887 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 343:
#line 2895 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 344:
#line 2905 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 345:
#line 2917 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 346:
#line 2924 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 347:
#line 2928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 348:
#line 2936 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 349:
#line 2941 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 350:
#line 2951 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 351:
#line 2955 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 352:
#line 2959 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), true, MEMMGR));
    }
    break;

  case 353:
#line 2963 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), true, MEMMGR));
    }
    break;

  case 354:
#line 2970 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 355:
#line 2974 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 356:
#line 2980 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 357:
#line 2984 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 358:
#line 2992 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 359:
#line 2997 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 360:
#line 3007 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 361:
#line 3015 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 362:
#line 3019 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 363:
#line 3027 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 364:
#line 3040 "../src/parser/XQParser.y"
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

  case 378:
#line 3078 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 379:
#line 3089 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 380:
#line 3093 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 381:
#line 3097 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 383:
#line 3105 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 384:
#line 3111 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 387:
#line 3124 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 388:
#line 3131 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 390:
#line 3139 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 391:
#line 3150 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 392:
#line 3154 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 393:
#line 3164 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 394:
#line 3168 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 395:
#line 3178 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 396:
#line 3185 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 398:
#line 3193 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 399:
#line 3197 "../src/parser/XQParser.y"
    {
  }
    break;

  case 400:
#line 3204 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 401:
#line 3212 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 402:
#line 3217 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 403:
#line 3225 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 405:
#line 3235 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 406:
#line 3242 "../src/parser/XQParser.y"
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

  case 407:
#line 3257 "../src/parser/XQParser.y"
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

  case 408:
#line 3273 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 409:
#line 3277 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 410:
#line 3281 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 411:
#line 3288 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 412:
#line 3297 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 413:
#line 3301 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 414:
#line 3310 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 415:
#line 3318 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 416:
#line 3329 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 418:
#line 3337 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 419:
#line 3348 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 420:
#line 3355 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 421:
#line 3360 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 422:
#line 3368 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 423:
#line 3372 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 424:
#line 3380 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 425:
#line 3384 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 426:
#line 3392 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 427:
#line 3400 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 429:
#line 3414 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 431:
#line 3433 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 432:
#line 3437 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:
#line 3440 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 434:
#line 3441 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:
#line 3445 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:
#line 3449 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:
#line 3453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:
#line 3457 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 439:
#line 3461 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:
#line 3465 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 441:
#line 3469 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:
#line 3473 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:
#line 3477 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 444:
#line 3481 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 445:
#line 3485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 446:
#line 3489 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 448:
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 449:
#line 3502 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 451:
#line 3511 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 453:
#line 3520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 454:
#line 3524 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 456:
#line 3533 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 457:
#line 3537 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:
#line 3541 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:
#line 3545 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:
#line 3554 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 462:
#line 3558 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 464:
#line 3567 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 465:
#line 3571 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 467:
#line 3580 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 469:
#line 3589 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 471:
#line 3599 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 473:
#line 3608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 475:
#line 3617 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 476:
#line 3623 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 481:
#line 3644 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 482:
#line 3648 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 483:
#line 3652 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 484:
#line 3660 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 485:
#line 3667 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 488:
#line 3680 "../src/parser/XQParser.y"
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

  case 490:
#line 3701 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 492:
#line 3710 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 493:
#line 3716 "../src/parser/XQParser.y"
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

  case 495:
#line 3741 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 496:
#line 3755 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 497:
#line 3761 "../src/parser/XQParser.y"
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

  case 501:
#line 3782 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 502:
#line 3786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 503:
#line 3795 "../src/parser/XQParser.y"
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

  case 505:
#line 3818 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 506:
#line 3822 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 507:
#line 3826 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 508:
#line 3830 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 509:
#line 3834 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 510:
#line 3838 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 511:
#line 3842 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 512:
#line 3846 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 513:
#line 3854 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 514:
#line 3862 "../src/parser/XQParser.y"
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

  case 515:
#line 3879 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 517:
#line 3896 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 518:
#line 3900 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 519:
#line 3904 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 520:
#line 3908 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 521:
#line 3912 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 522:
#line 3920 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 523:
#line 3932 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 525:
#line 3942 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 527:
#line 3954 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 528:
#line 3961 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 529:
#line 3968 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 530:
#line 3979 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 531:
#line 3988 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 532:
#line 3992 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 548:
#line 4023 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 550:
#line 4034 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 551:
#line 4038 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 552:
#line 4046 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 553:
#line 4054 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 554:
#line 4064 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 555:
#line 4074 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 556:
#line 4078 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 557:
#line 4085 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 558:
#line 4090 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 559:
#line 4099 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 560:
#line 4103 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 564:
#line 4116 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 565:
#line 4122 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 568:
#line 4135 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 569:
#line 4139 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 570:
#line 4148 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 573:
#line 4164 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 574:
#line 4168 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 575:
#line 4175 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 576:
#line 4179 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 577:
#line 4189 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 578:
#line 4193 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 579:
#line 4198 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 580:
#line 4211 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 581:
#line 4215 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 582:
#line 4219 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 583:
#line 4235 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 584:
#line 4239 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 585:
#line 4244 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 586:
#line 4257 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 587:
#line 4261 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 588:
#line 4265 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 589:
#line 4285 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 590:
#line 4289 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 591:
#line 4294 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 592:
#line 4299 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 593:
#line 4309 "../src/parser/XQParser.y"
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

  case 594:
#line 4325 "../src/parser/XQParser.y"
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

  case 595:
#line 4339 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 597:
#line 4348 "../src/parser/XQParser.y"
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

  case 599:
#line 4370 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 606:
#line 4393 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 607:
#line 4401 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 608:
#line 4409 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 609:
#line 4413 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 610:
#line 4421 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 611:
#line 4425 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 612:
#line 4434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 613:
#line 4442 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 614:
#line 4450 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 615:
#line 4458 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 616:
#line 4465 "../src/parser/XQParser.y"
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

  case 617:
#line 4478 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 618:
#line 4485 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 619:
#line 4489 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 620:
#line 4497 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 621:
#line 4507 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 622:
#line 4511 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 623:
#line 4519 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 624:
#line 4523 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 625:
#line 4533 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 626:
#line 4540 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 627:
#line 4549 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 628:
#line 4551 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 629:
#line 4553 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 630:
#line 4555 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 631:
#line 4561 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 632:
#line 4565 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 646:
#line 4600 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 647:
#line 4608 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 648:
#line 4612 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 649:
#line 4617 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 650:
#line 4626 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 651:
#line 4634 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 652:
#line 4642 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 653:
#line 4646 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 654:
#line 4650 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 655:
#line 4658 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 656:
#line 4662 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 657:
#line 4666 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 659:
#line 4675 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 660:
#line 4683 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 662:
#line 4696 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 663:
#line 4700 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 664:
#line 4704 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 665:
#line 4708 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 667:
#line 4718 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 668:
#line 4726 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 673:
#line 4746 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 674:
#line 4758 "../src/parser/XQParser.y"
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

  case 675:
#line 4770 "../src/parser/XQParser.y"
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

  case 676:
#line 4785 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 677:
#line 4789 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 678:
#line 4793 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 679:
#line 4803 "../src/parser/XQParser.y"
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

  case 681:
#line 4819 "../src/parser/XQParser.y"
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

  case 683:
#line 4835 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 685:
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 687:
#line 4853 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 689:
#line 4862 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 690:
#line 4866 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 691:
#line 4870 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 692:
#line 4874 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 693:
#line 4878 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 694:
#line 4892 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 695:
#line 4896 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 696:
#line 4900 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 697:
#line 4904 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 698:
#line 4909 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 699:
#line 4913 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 700:
#line 4917 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 701:
#line 4921 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 702:
#line 4925 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 710:
#line 4953 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 711:
#line 4957 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 712:
#line 4961 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 713:
#line 4965 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 714:
#line 4976 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 715:
#line 4980 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 716:
#line 4984 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 717:
#line 4988 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 718:
#line 4996 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 719:
#line 5000 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 720:
#line 5010 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 721:
#line 5014 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 722:
#line 5018 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 723:
#line 5022 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 724:
#line 5026 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 725:
#line 5033 "../src/parser/XQParser.y"
    {
  }
    break;

  case 726:
#line 5036 "../src/parser/XQParser.y"
    {
  }
    break;

  case 727:
#line 5043 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 728:
#line 5047 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 729:
#line 5051 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 730:
#line 5055 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 731:
#line 5065 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 732:
#line 5069 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 733:
#line 5073 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 734:
#line 5080 "../src/parser/XQParser.y"
    {
  }
    break;

  case 735:
#line 5083 "../src/parser/XQParser.y"
    {
  }
    break;

  case 736:
#line 5091 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 737:
#line 5095 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 738:
#line 5102 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 739:
#line 5106 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 740:
#line 5114 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 741:
#line 5118 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 742:
#line 5126 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 743:
#line 5134 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 744:
#line 5138 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 745:
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 746:
#line 5150 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 747:
#line 5154 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 748:
#line 5158 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 749:
#line 5162 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 750:
#line 5166 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 751:
#line 5177 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 752:
#line 5183 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 753:
#line 5189 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 754:
#line 5195 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 755:
#line 5205 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 756:
#line 5209 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 757:
#line 5213 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 758:
#line 5221 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 759:
#line 5225 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 760:
#line 5233 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 761:
#line 5241 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 762:
#line 5246 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 763:
#line 5251 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 764:
#line 5263 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 765:
#line 5267 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 766:
#line 5271 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 767:
#line 5275 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 768:
#line 5279 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 771:
#line 5290 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 774:
#line 5301 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 775:
#line 5305 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 776:
#line 5315 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 777:
#line 5323 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 778:
#line 5330 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 779:
#line 5335 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 780:
#line 5343 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 781:
#line 5352 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 782:
#line 5365 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR));
  }
    break;

  case 783:
#line 5378 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR));
  }
    break;

  case 784:
#line 5392 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR));
  }
    break;

  case 785:
#line 5404 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 786:
#line 5413 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 787:
#line 5425 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 788:
#line 5429 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 789:
#line 5433 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 790:
#line 5438 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 791:
#line 5443 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 792:
#line 5448 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 793:
#line 5456 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 794:
#line 5460 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 795:
#line 5468 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 796:
#line 5472 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 797:
#line 5479 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 798:
#line 5484 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 799:
#line 5492 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 800:
#line 5497 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 801:
#line 5506 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 802:
#line 5510 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 803:
#line 5514 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 804:
#line 5522 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 805:
#line 5526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 806:
#line 5534 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 807:
#line 5538 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 808:
#line 5542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 809:
#line 5546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 810:
#line 5554 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 811:
#line 5558 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 812:
#line 5562 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 813:
#line 5570 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 814:
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 815:
#line 5585 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 818:
#line 5602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 819:
#line 5610 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), false, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 820:
#line 5619 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 821:
#line 5624 "../src/parser/XQParser.y"
    {
    REJECT_NOT_EXTENSION(DereferencedFunctionCall, (yylsp[(1) - (4)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 822:
#line 5633 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 823:
#line 5637 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 824:
#line 5641 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 825:
#line 5648 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 826:
#line 5653 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 827:
#line 5662 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 10674 "../src/parser/XQParser.cpp"
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


#line 5696 "../src/parser/XQParser.y"


}  // namespace XQParser


