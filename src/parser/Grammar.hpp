/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

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
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

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
     _ORDER_BY_ = 298,
     _STABLE_ORDER_BY_ = 299,
     _ASCENDING_ = 300,
     _DESCENDING_ = 301,
     _EMPTY_GREATEST_ = 302,
     _EMPTY_LEAST_ = 303,
     _COLLATION_ = 304,
     _SOME_ = 305,
     _EVERY_ = 306,
     _SATISFIES_ = 307,
     _TYPESWITCH_ = 308,
     _DEFAULT_ = 309,
     _CASE_ = 310,
     _AS_ = 311,
     _IF_ = 312,
     _THEN_ = 313,
     _ELSE_ = 314,
     _OR_ = 315,
     _AND_ = 316,
     _INSTANCE_OF_ = 317,
     _CASTABLE_AS_ = 318,
     _TO_ = 319,
     _PLUS_ = 320,
     _MINUS_ = 321,
     _MULTIPLY_ = 322,
     _DIV_ = 323,
     _INTEGER_DIV_ = 324,
     _MOD_ = 325,
     _UNION_ = 326,
     _VERTICAL_BAR_ = 327,
     _INTERSECT_ = 328,
     _EXCEPT_ = 329,
     _SLASH_ = 330,
     _SLASHSLASH_ = 331,
     _LBRACK_ = 332,
     _RBRACK_ = 333,
     _VALIDATE_CONTENT_ = 334,
     _VALIDATE_MODE_LAX_ = 335,
     _VALIDATE_MODE_STRICT_ = 336,
     _CAST_AS_ = 337,
     _TREAT_AS_ = 338,
     _EQUALS_ = 339,
     _NOT_EQUALS_ = 340,
     _LT_ = 341,
     _LT_EQUALS_ = 342,
     _GT_ = 343,
     _GT_EQUALS_ = 344,
     _FORTRAN_EQ_ = 345,
     _FORTRAN_NE_ = 346,
     _FORTRAN_LT_ = 347,
     _FORTRAN_LE_ = 348,
     _FORTRAN_GT_ = 349,
     _FORTRAN_GE_ = 350,
     _IS_ = 351,
     _LT_LT_ = 352,
     _GT_GT_ = 353,
     _DOT_ = 354,
     _AT_ = 355,
     _DOT_DOT_ = 356,
     _AXIS_CHILD_ = 357,
     _AXIS_DESCENDANT_ = 358,
     _AXIS_ATTRIBUTE_ = 359,
     _AXIS_SELF_ = 360,
     _AXIS_DESCENDANT_OR_SELF_ = 361,
     _AXIS_PARENT_ = 362,
     _STAR_ = 363,
     _PROCESSING_INSTRUCTION_LPAR_ = 364,
     _COMMENT_LPAR_ = 365,
     _TEXT_LPAR_ = 366,
     _NODE_LPAR_ = 367,
     _LPAR_ = 368,
     _RPAR_ = 369,
     _START_TAG_OPEN_ = 370,
     _EMPTY_TAG_CLOSE_ = 371,
     _VALUE_INDICATOR_ = 372,
     _END_TAG_OPEN_ = 373,
     _TAG_CLOSE_ = 374,
     _DOCUMENT_CONSTR_ = 375,
     _ELEMENT_CONSTR_ = 376,
     _ATTRIBUTE_CONSTR_ = 377,
     _TEXT_CONSTR_ = 378,
     _PROCESSING_INSTRUCTION_START_ = 379,
     _LCURLY_BRACE_ESCAPE_ = 380,
     _RCURLY_BRACE_ESCAPE_ = 381,
     _OPEN_QUOT_ = 382,
     _CLOSE_QUOT_ = 383,
     _OPEN_APOS_ = 384,
     _CLOSE_APOS_ = 385,
     _LBRACE_ = 386,
     _RBRACE_ = 387,
     _PRESERVE_ = 388,
     _STRIP_ = 389,
     _NAMESPACE_ = 390,
     _EXPR_AS_ = 391,
     _EMPTY_ = 392,
     _ITEM_ = 393,
     _NILLABLE_ = 394,
     _IMPORT_SCHEMA_ = 395,
     _IMPORT_MODULE_ = 396,
     _DOCUMENT_NODE_LPAR_ = 397,
     _ATTRIBUTE_LPAR_ = 398,
     _ELEMENT_LPAR_ = 399,
     _EXTERNAL_ = 400,
     _MODULE_NAMESPACE_ = 401,
     _PROCESSING_INSTRUCTION_CONSTR_ = 402,
     _COMMENT_CONSTR_ = 403,
     _AXIS_ANCESTOR_OR_SELF_ = 404,
     _AXIS_ANCESTOR_ = 405,
     _AXIS_FOLLOWING_SIBLING_ = 406,
     _AXIS_FOLLOWING_ = 407,
     _AXIS_PRECEDING_SIBLING_ = 408,
     _AXIS_PRECEDING_ = 409,
     _SEMICOLON_ = 410,
     _DEFAULT_ELEMENT_ = 411,
     _SCHEMA_ELEMENT_LPAR_ = 412,
     _SCHEMA_ATTRIBUTE_LPAR_ = 413,
     _ORDERED_ = 414,
     _UNORDERED_ = 415,
     _ORDERING_UNORDERED_ = 416,
     _ORDERING_ORDERED_ = 417,
     _ZERO_OR_ONE_ = 418,
     _ONE_OR_MORE_ = 419,
     _ZERO_OR_MORE_ = 420,
     _ENCODING_ = 421,
     _NO_PRESERVE_ = 422,
     _INHERIT_ = 423,
     _NO_INHERIT_ = 424,
     _DECLARE_ = 425,
     _BOUNDARYSPACE_ = 426,
     _DEFAULT_COLLATION_ = 427,
     _DEFAULT_FUNCTION_ = 428,
     _BASEURI_ = 429,
     _CONSTRUCTION_ = 430,
     _ORDERING_ = 431,
     _DEFAULT_ORDER_ = 432,
     _COPY_NAMESPACES_ = 433,
     _DECLARE_FUNCTION_ = 434,
     _DECLARE_VARIABLE_ = 435,
     _DECLARE_OPTION_ = 436,
     _XQUERY_ = 437,
     _VERSION_ = 438,
     _EOF_ = 439
   };
#endif
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
#define _ORDER_BY_ 298
#define _STABLE_ORDER_BY_ 299
#define _ASCENDING_ 300
#define _DESCENDING_ 301
#define _EMPTY_GREATEST_ 302
#define _EMPTY_LEAST_ 303
#define _COLLATION_ 304
#define _SOME_ 305
#define _EVERY_ 306
#define _SATISFIES_ 307
#define _TYPESWITCH_ 308
#define _DEFAULT_ 309
#define _CASE_ 310
#define _AS_ 311
#define _IF_ 312
#define _THEN_ 313
#define _ELSE_ 314
#define _OR_ 315
#define _AND_ 316
#define _INSTANCE_OF_ 317
#define _CASTABLE_AS_ 318
#define _TO_ 319
#define _PLUS_ 320
#define _MINUS_ 321
#define _MULTIPLY_ 322
#define _DIV_ 323
#define _INTEGER_DIV_ 324
#define _MOD_ 325
#define _UNION_ 326
#define _VERTICAL_BAR_ 327
#define _INTERSECT_ 328
#define _EXCEPT_ 329
#define _SLASH_ 330
#define _SLASHSLASH_ 331
#define _LBRACK_ 332
#define _RBRACK_ 333
#define _VALIDATE_CONTENT_ 334
#define _VALIDATE_MODE_LAX_ 335
#define _VALIDATE_MODE_STRICT_ 336
#define _CAST_AS_ 337
#define _TREAT_AS_ 338
#define _EQUALS_ 339
#define _NOT_EQUALS_ 340
#define _LT_ 341
#define _LT_EQUALS_ 342
#define _GT_ 343
#define _GT_EQUALS_ 344
#define _FORTRAN_EQ_ 345
#define _FORTRAN_NE_ 346
#define _FORTRAN_LT_ 347
#define _FORTRAN_LE_ 348
#define _FORTRAN_GT_ 349
#define _FORTRAN_GE_ 350
#define _IS_ 351
#define _LT_LT_ 352
#define _GT_GT_ 353
#define _DOT_ 354
#define _AT_ 355
#define _DOT_DOT_ 356
#define _AXIS_CHILD_ 357
#define _AXIS_DESCENDANT_ 358
#define _AXIS_ATTRIBUTE_ 359
#define _AXIS_SELF_ 360
#define _AXIS_DESCENDANT_OR_SELF_ 361
#define _AXIS_PARENT_ 362
#define _STAR_ 363
#define _PROCESSING_INSTRUCTION_LPAR_ 364
#define _COMMENT_LPAR_ 365
#define _TEXT_LPAR_ 366
#define _NODE_LPAR_ 367
#define _LPAR_ 368
#define _RPAR_ 369
#define _START_TAG_OPEN_ 370
#define _EMPTY_TAG_CLOSE_ 371
#define _VALUE_INDICATOR_ 372
#define _END_TAG_OPEN_ 373
#define _TAG_CLOSE_ 374
#define _DOCUMENT_CONSTR_ 375
#define _ELEMENT_CONSTR_ 376
#define _ATTRIBUTE_CONSTR_ 377
#define _TEXT_CONSTR_ 378
#define _PROCESSING_INSTRUCTION_START_ 379
#define _LCURLY_BRACE_ESCAPE_ 380
#define _RCURLY_BRACE_ESCAPE_ 381
#define _OPEN_QUOT_ 382
#define _CLOSE_QUOT_ 383
#define _OPEN_APOS_ 384
#define _CLOSE_APOS_ 385
#define _LBRACE_ 386
#define _RBRACE_ 387
#define _PRESERVE_ 388
#define _STRIP_ 389
#define _NAMESPACE_ 390
#define _EXPR_AS_ 391
#define _EMPTY_ 392
#define _ITEM_ 393
#define _NILLABLE_ 394
#define _IMPORT_SCHEMA_ 395
#define _IMPORT_MODULE_ 396
#define _DOCUMENT_NODE_LPAR_ 397
#define _ATTRIBUTE_LPAR_ 398
#define _ELEMENT_LPAR_ 399
#define _EXTERNAL_ 400
#define _MODULE_NAMESPACE_ 401
#define _PROCESSING_INSTRUCTION_CONSTR_ 402
#define _COMMENT_CONSTR_ 403
#define _AXIS_ANCESTOR_OR_SELF_ 404
#define _AXIS_ANCESTOR_ 405
#define _AXIS_FOLLOWING_SIBLING_ 406
#define _AXIS_FOLLOWING_ 407
#define _AXIS_PRECEDING_SIBLING_ 408
#define _AXIS_PRECEDING_ 409
#define _SEMICOLON_ 410
#define _DEFAULT_ELEMENT_ 411
#define _SCHEMA_ELEMENT_LPAR_ 412
#define _SCHEMA_ATTRIBUTE_LPAR_ 413
#define _ORDERED_ 414
#define _UNORDERED_ 415
#define _ORDERING_UNORDERED_ 416
#define _ORDERING_ORDERED_ 417
#define _ZERO_OR_ONE_ 418
#define _ONE_OR_MORE_ 419
#define _ZERO_OR_MORE_ 420
#define _ENCODING_ 421
#define _NO_PRESERVE_ 422
#define _INHERIT_ 423
#define _NO_INHERIT_ 424
#define _DECLARE_ 425
#define _BOUNDARYSPACE_ 426
#define _DEFAULT_COLLATION_ 427
#define _DEFAULT_FUNCTION_ 428
#define _BASEURI_ 429
#define _CONSTRUCTION_ 430
#define _ORDERING_ 431
#define _DEFAULT_ORDER_ 432
#define _COPY_NAMESPACES_ 433
#define _DECLARE_FUNCTION_ 434
#define _DECLARE_VARIABLE_ 435
#define _DECLARE_OPTION_ 436
#define _XQUERY_ 437
#define _VERSION_ 438
#define _EOF_ 439




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




