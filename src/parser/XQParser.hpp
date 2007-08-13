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
     _LANG_XPATH2_FULLTEXT_ = 260,
     _LANG_XQUERY_FULLTEXT_ = 261,
     _LANG_XQUERY_UPDATE_ = 262,
     _LANG_XQUERY_FULLTEXT_UPDATE_ = 263,
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
     _INTEGER_LITERAL_ = 310,
     _DECIMAL_LITERAL_ = 311,
     _DOUBLE_LITERAL_ = 312,
     _ATTRIBUTE_ = 313,
     _COMMENT_ = 314,
     _DOCUMENT_NODE_ = 315,
     _NODE_ = 316,
     _PROCESSING_INSTRUCTION_ = 317,
     _SCHEMA_ATTRIBUTE_ = 318,
     _SCHEMA_ELEMENT_ = 319,
     _TEXT_ = 320,
     _EMPTY_SEQUENCE_ = 321,
     _BOUNDARY_SPACE_ = 322,
     _FT_OPTION_ = 323,
     _BASE_URI_ = 324,
     _LAX_ = 325,
     _STRICT_ = 326,
     _IDIV_ = 327,
     _CHILD_ = 328,
     _DESCENDANT_ = 329,
     _SELF_ = 330,
     _DESCENDANT_OR_SELF_ = 331,
     _FOLLOWING_SIBLING_ = 332,
     _FOLLOWING_ = 333,
     _PARENT_ = 334,
     _ANCESTOR_ = 335,
     _PRECEDING_SIBLING_ = 336,
     _PRECEDING_ = 337,
     _ANCESTOR_OR_SELF_ = 338,
     _DOCUMENT_ = 339,
     _NOT_ = 340,
     _SENSITIVE_ = 341,
     _INSENSITIVE_ = 342,
     _DIACRITICS_ = 343,
     _WITHOUT_ = 344,
     _WITHOUT_C_ = 345,
     _STEMMING_ = 346,
     _THESAURUS_ = 347,
     _STOP_ = 348,
     _WILDCARDS_ = 349,
     _ENTIRE_ = 350,
     _CONTENT_ = 351,
     _WORD_ = 352,
     _TYPE_ = 353,
     _START_ = 354,
     _END_ = 355,
     _MOST_ = 356,
     _SKIP_ = 357,
     _COPY_ = 358,
     _VALUE_ = 359,
     _WHITESPACE_ = 360,
     _PI_CONTENT_ = 361,
     _XML_COMMENT_CONTENT_ = 362,
     _EQ_ = 363,
     _NE_ = 364,
     _LT_ = 365,
     _LE_ = 366,
     _GT_ = 367,
     _GE_ = 368,
     _AT_ = 369,
     _QUOT_ATTR_CONTENT_ = 370,
     _APOS_ATTR_CONTENT_ = 371,
     _WHITESPACE_ELEMENT_CONTENT_ = 372,
     _ELEMENT_CONTENT_ = 373,
     _AT_LM_ = 374,
     _ORDERED_ = 375,
     _UNORDERED_ = 376,
     _QNAME_ = 377,
     _XMLNS_QNAME_ = 378,
     _CONSTR_QNAME_ = 379,
     _STRING_LITERAL_ = 380,
     _VARIABLE_ = 381,
     _NCNAME_COLON_STAR_ = 382,
     _STAR_COLON_NCNAME_ = 383,
     _PI_TARGET_ = 384,
     _PRAGMA_CONTENT_ = 385,
     _RETURN_ = 386,
     _FOR_ = 387,
     _IN_ = 388,
     _LET_ = 389,
     _WHERE_ = 390,
     _BY_ = 391,
     _ORDER_ = 392,
     _STABLE_ = 393,
     _ASCENDING_ = 394,
     _DESCENDING_ = 395,
     _EMPTY_ = 396,
     _GREATEST_ = 397,
     _LEAST_ = 398,
     _COLLATION_ = 399,
     _SOME_ = 400,
     _EVERY_ = 401,
     _SATISFIES_ = 402,
     _TYPESWITCH_ = 403,
     _CASE_ = 404,
     _CASE_S_ = 405,
     _AS_ = 406,
     _IF_ = 407,
     _THEN_ = 408,
     _ELSE_ = 409,
     _OR_ = 410,
     _AND_ = 411,
     _INSTANCE_ = 412,
     _OF_ = 413,
     _CASTABLE_ = 414,
     _TO_ = 415,
     _DIV_ = 416,
     _MOD_ = 417,
     _UNION_ = 418,
     _INTERSECT_ = 419,
     _EXCEPT_ = 420,
     _VALIDATE_ = 421,
     _CAST_ = 422,
     _TREAT_ = 423,
     _IS_ = 424,
     _PRESERVE_ = 425,
     _STRIP_ = 426,
     _NAMESPACE_ = 427,
     _ITEM_ = 428,
     _EXTERNAL_ = 429,
     _ENCODING_ = 430,
     _NO_PRESERVE_ = 431,
     _INHERIT_ = 432,
     _NO_INHERIT_ = 433,
     _DECLARE_ = 434,
     _CONSTRUCTION_ = 435,
     _ORDERING_ = 436,
     _DEFAULT_ = 437,
     _COPY_NAMESPACES_ = 438,
     _OPTION_ = 439,
     _XQUERY_ = 440,
     _VERSION_ = 441,
     _IMPORT_ = 442,
     _SCHEMA_ = 443,
     _MODULE_ = 444,
     _ELEMENT_ = 445,
     _FUNCTION_ = 446,
     _SCORE_ = 447,
     _FTCONTAINS_ = 448,
     _WEIGHT_ = 449,
     _WINDOW_ = 450,
     _DISTANCE_ = 451,
     _OCCURS_ = 452,
     _TIMES_ = 453,
     _SAME_ = 454,
     _DIFFERENT_ = 455,
     _LOWERCASE_ = 456,
     _UPPERCASE_ = 457,
     _RELATIONSHIP_ = 458,
     _LEVELS_ = 459,
     _LANGUAGE_ = 460,
     _ANY_ = 461,
     _ALL_ = 462,
     _PHRASE_ = 463,
     _EXACTLY_ = 464,
     _FROM_ = 465,
     _WORDS_ = 466,
     _SENTENCES_ = 467,
     _PARAGRAPHS_ = 468,
     _SENTENCE_ = 469,
     _PARAGRAPH_ = 470,
     _REPLACE_ = 471,
     _MODIFY_ = 472,
     _FIRST_ = 473,
     _INSERT_ = 474,
     _BEFORE_ = 475,
     _AFTER_ = 476,
     _REVALIDATION_ = 477,
     _WITH_ = 478,
     _WITH_FT_ = 479,
     _NODES_ = 480,
     _RENAME_ = 481,
     _LAST_ = 482,
     _DELETE_ = 483,
     _INTO_ = 484,
     _UPDATING_ = 485
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _LANG_XPATH2_ 258
#define _LANG_XQUERY_ 259
#define _LANG_XPATH2_FULLTEXT_ 260
#define _LANG_XQUERY_FULLTEXT_ 261
#define _LANG_XQUERY_UPDATE_ 262
#define _LANG_XQUERY_FULLTEXT_UPDATE_ 263
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
#define _INTEGER_LITERAL_ 310
#define _DECIMAL_LITERAL_ 311
#define _DOUBLE_LITERAL_ 312
#define _ATTRIBUTE_ 313
#define _COMMENT_ 314
#define _DOCUMENT_NODE_ 315
#define _NODE_ 316
#define _PROCESSING_INSTRUCTION_ 317
#define _SCHEMA_ATTRIBUTE_ 318
#define _SCHEMA_ELEMENT_ 319
#define _TEXT_ 320
#define _EMPTY_SEQUENCE_ 321
#define _BOUNDARY_SPACE_ 322
#define _FT_OPTION_ 323
#define _BASE_URI_ 324
#define _LAX_ 325
#define _STRICT_ 326
#define _IDIV_ 327
#define _CHILD_ 328
#define _DESCENDANT_ 329
#define _SELF_ 330
#define _DESCENDANT_OR_SELF_ 331
#define _FOLLOWING_SIBLING_ 332
#define _FOLLOWING_ 333
#define _PARENT_ 334
#define _ANCESTOR_ 335
#define _PRECEDING_SIBLING_ 336
#define _PRECEDING_ 337
#define _ANCESTOR_OR_SELF_ 338
#define _DOCUMENT_ 339
#define _NOT_ 340
#define _SENSITIVE_ 341
#define _INSENSITIVE_ 342
#define _DIACRITICS_ 343
#define _WITHOUT_ 344
#define _WITHOUT_C_ 345
#define _STEMMING_ 346
#define _THESAURUS_ 347
#define _STOP_ 348
#define _WILDCARDS_ 349
#define _ENTIRE_ 350
#define _CONTENT_ 351
#define _WORD_ 352
#define _TYPE_ 353
#define _START_ 354
#define _END_ 355
#define _MOST_ 356
#define _SKIP_ 357
#define _COPY_ 358
#define _VALUE_ 359
#define _WHITESPACE_ 360
#define _PI_CONTENT_ 361
#define _XML_COMMENT_CONTENT_ 362
#define _EQ_ 363
#define _NE_ 364
#define _LT_ 365
#define _LE_ 366
#define _GT_ 367
#define _GE_ 368
#define _AT_ 369
#define _QUOT_ATTR_CONTENT_ 370
#define _APOS_ATTR_CONTENT_ 371
#define _WHITESPACE_ELEMENT_CONTENT_ 372
#define _ELEMENT_CONTENT_ 373
#define _AT_LM_ 374
#define _ORDERED_ 375
#define _UNORDERED_ 376
#define _QNAME_ 377
#define _XMLNS_QNAME_ 378
#define _CONSTR_QNAME_ 379
#define _STRING_LITERAL_ 380
#define _VARIABLE_ 381
#define _NCNAME_COLON_STAR_ 382
#define _STAR_COLON_NCNAME_ 383
#define _PI_TARGET_ 384
#define _PRAGMA_CONTENT_ 385
#define _RETURN_ 386
#define _FOR_ 387
#define _IN_ 388
#define _LET_ 389
#define _WHERE_ 390
#define _BY_ 391
#define _ORDER_ 392
#define _STABLE_ 393
#define _ASCENDING_ 394
#define _DESCENDING_ 395
#define _EMPTY_ 396
#define _GREATEST_ 397
#define _LEAST_ 398
#define _COLLATION_ 399
#define _SOME_ 400
#define _EVERY_ 401
#define _SATISFIES_ 402
#define _TYPESWITCH_ 403
#define _CASE_ 404
#define _CASE_S_ 405
#define _AS_ 406
#define _IF_ 407
#define _THEN_ 408
#define _ELSE_ 409
#define _OR_ 410
#define _AND_ 411
#define _INSTANCE_ 412
#define _OF_ 413
#define _CASTABLE_ 414
#define _TO_ 415
#define _DIV_ 416
#define _MOD_ 417
#define _UNION_ 418
#define _INTERSECT_ 419
#define _EXCEPT_ 420
#define _VALIDATE_ 421
#define _CAST_ 422
#define _TREAT_ 423
#define _IS_ 424
#define _PRESERVE_ 425
#define _STRIP_ 426
#define _NAMESPACE_ 427
#define _ITEM_ 428
#define _EXTERNAL_ 429
#define _ENCODING_ 430
#define _NO_PRESERVE_ 431
#define _INHERIT_ 432
#define _NO_INHERIT_ 433
#define _DECLARE_ 434
#define _CONSTRUCTION_ 435
#define _ORDERING_ 436
#define _DEFAULT_ 437
#define _COPY_NAMESPACES_ 438
#define _OPTION_ 439
#define _XQUERY_ 440
#define _VERSION_ 441
#define _IMPORT_ 442
#define _SCHEMA_ 443
#define _MODULE_ 444
#define _ELEMENT_ 445
#define _FUNCTION_ 446
#define _SCORE_ 447
#define _FTCONTAINS_ 448
#define _WEIGHT_ 449
#define _WINDOW_ 450
#define _DISTANCE_ 451
#define _OCCURS_ 452
#define _TIMES_ 453
#define _SAME_ 454
#define _DIFFERENT_ 455
#define _LOWERCASE_ 456
#define _UPPERCASE_ 457
#define _RELATIONSHIP_ 458
#define _LEVELS_ 459
#define _LANGUAGE_ 460
#define _ANY_ 461
#define _ALL_ 462
#define _PHRASE_ 463
#define _EXACTLY_ 464
#define _FROM_ 465
#define _WORDS_ 466
#define _SENTENCES_ 467
#define _PARAGRAPHS_ 468
#define _SENTENCE_ 469
#define _PARAGRAPH_ 470
#define _REPLACE_ 471
#define _MODIFY_ 472
#define _FIRST_ 473
#define _INSERT_ 474
#define _BEFORE_ 475
#define _AFTER_ 476
#define _REVALIDATION_ 477
#define _WITH_ 478
#define _WITH_FT_ 479
#define _NODES_ 480
#define _RENAME_ 481
#define _LAST_ 482
#define _DELETE_ 483
#define _INTO_ 484
#define _UPDATING_ 485




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


