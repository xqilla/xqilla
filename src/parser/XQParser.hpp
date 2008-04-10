/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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


