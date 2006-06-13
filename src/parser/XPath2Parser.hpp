/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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
     _STRING_LITERAL_ = 260,
     _VARIABLE_ = 261,
     _NCNAME_COLON_STAR_ = 262,
     _STAR_COLON_NCNAME_ = 263,
     _NCNAME_ = 264,
     _INTEGER_NUMBER_ = 265,
     _DECIMAL_NUMBER_ = 266,
     _DOUBLE_NUMBER_ = 267,
     _XQUERY_COMMENT_ = 268,
     _XQUERY_WHITESPACE_ = 269,
     _XQUERY_ERROR_ = 270,
     _COMMA_ = 271,
     _RETURN_ = 272,
     _FOR_ = 273,
     _IN_ = 274,
     _DOLLAR_SIGN_ = 275,
     _SOME_ = 276,
     _EVERY_ = 277,
     _SATISFIES_ = 278,
     _IF_ = 279,
     _THEN_ = 280,
     _ELSE_ = 281,
     _OR_ = 282,
     _AND_ = 283,
     _INSTANCE_OF_ = 284,
     _CASTABLE_AS_ = 285,
     _TO_ = 286,
     _PLUS_ = 287,
     _MINUS_ = 288,
     _MULTIPLY_ = 289,
     _DIV_ = 290,
     _INTEGER_DIV_ = 291,
     _MOD_ = 292,
     _UNION_ = 293,
     _VERTICAL_BAR_ = 294,
     _INTERSECT_ = 295,
     _EXCEPT_ = 296,
     _SLASH_ = 297,
     _SLASHSLASH_ = 298,
     _LBRACK_ = 299,
     _RBRACK_ = 300,
     _CAST_AS_ = 301,
     _TREAT_AS_ = 302,
     _EQUALS_ = 303,
     _NOT_EQUALS_ = 304,
     _LT_ = 305,
     _LT_EQUALS_ = 306,
     _GT_ = 307,
     _GT_EQUALS_ = 308,
     _FORTRAN_EQ_ = 309,
     _FORTRAN_NE_ = 310,
     _FORTRAN_LT_ = 311,
     _FORTRAN_LE_ = 312,
     _FORTRAN_GT_ = 313,
     _FORTRAN_GE_ = 314,
     _IS_ = 315,
     _LT_LT_ = 316,
     _GT_GT_ = 317,
     _DOT_ = 318,
     _AT_ = 319,
     _DOT_DOT_ = 320,
     _AXIS_CHILD_ = 321,
     _AXIS_DESCENDANT_ = 322,
     _AXIS_ATTRIBUTE_ = 323,
     _AXIS_SELF_ = 324,
     _AXIS_DESCENDANT_OR_SELF_ = 325,
     _AXIS_PARENT_ = 326,
     _STAR_ = 327,
     _PROCESSING_INSTRUCTION_LPAR_ = 328,
     _COMMENT_LPAR_ = 329,
     _TEXT_LPAR_ = 330,
     _NODE_LPAR_ = 331,
     _LPAR_ = 332,
     _RPAR_ = 333,
     _EMPTY_ = 334,
     _ITEM_ = 335,
     _NILLABLE_ = 336,
     _DOCUMENT_NODE_LPAR_ = 337,
     _ATTRIBUTE_LPAR_ = 338,
     _ELEMENT_LPAR_ = 339,
     _AXIS_ANCESTOR_OR_SELF_ = 340,
     _AXIS_ANCESTOR_ = 341,
     _AXIS_FOLLOWING_SIBLING_ = 342,
     _AXIS_FOLLOWING_ = 343,
     _AXIS_PRECEDING_SIBLING_ = 344,
     _AXIS_PRECEDING_ = 345,
     _SCHEMA_ELEMENT_LPAR_ = 346,
     _SCHEMA_ATTRIBUTE_LPAR_ = 347,
     _ZERO_OR_ONE_ = 348,
     _ONE_OR_MORE_ = 349,
     _ZERO_OR_MORE_ = 350,
     _AXIS_NAMESPACE_ = 351,
     _EOF_ = 352
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _QNAME_ 258
#define _FUNCTION_CALL_ 259
#define _STRING_LITERAL_ 260
#define _VARIABLE_ 261
#define _NCNAME_COLON_STAR_ 262
#define _STAR_COLON_NCNAME_ 263
#define _NCNAME_ 264
#define _INTEGER_NUMBER_ 265
#define _DECIMAL_NUMBER_ 266
#define _DOUBLE_NUMBER_ 267
#define _XQUERY_COMMENT_ 268
#define _XQUERY_WHITESPACE_ 269
#define _XQUERY_ERROR_ 270
#define _COMMA_ 271
#define _RETURN_ 272
#define _FOR_ 273
#define _IN_ 274
#define _DOLLAR_SIGN_ 275
#define _SOME_ 276
#define _EVERY_ 277
#define _SATISFIES_ 278
#define _IF_ 279
#define _THEN_ 280
#define _ELSE_ 281
#define _OR_ 282
#define _AND_ 283
#define _INSTANCE_OF_ 284
#define _CASTABLE_AS_ 285
#define _TO_ 286
#define _PLUS_ 287
#define _MINUS_ 288
#define _MULTIPLY_ 289
#define _DIV_ 290
#define _INTEGER_DIV_ 291
#define _MOD_ 292
#define _UNION_ 293
#define _VERTICAL_BAR_ 294
#define _INTERSECT_ 295
#define _EXCEPT_ 296
#define _SLASH_ 297
#define _SLASHSLASH_ 298
#define _LBRACK_ 299
#define _RBRACK_ 300
#define _CAST_AS_ 301
#define _TREAT_AS_ 302
#define _EQUALS_ 303
#define _NOT_EQUALS_ 304
#define _LT_ 305
#define _LT_EQUALS_ 306
#define _GT_ 307
#define _GT_EQUALS_ 308
#define _FORTRAN_EQ_ 309
#define _FORTRAN_NE_ 310
#define _FORTRAN_LT_ 311
#define _FORTRAN_LE_ 312
#define _FORTRAN_GT_ 313
#define _FORTRAN_GE_ 314
#define _IS_ 315
#define _LT_LT_ 316
#define _GT_GT_ 317
#define _DOT_ 318
#define _AT_ 319
#define _DOT_DOT_ 320
#define _AXIS_CHILD_ 321
#define _AXIS_DESCENDANT_ 322
#define _AXIS_ATTRIBUTE_ 323
#define _AXIS_SELF_ 324
#define _AXIS_DESCENDANT_OR_SELF_ 325
#define _AXIS_PARENT_ 326
#define _STAR_ 327
#define _PROCESSING_INSTRUCTION_LPAR_ 328
#define _COMMENT_LPAR_ 329
#define _TEXT_LPAR_ 330
#define _NODE_LPAR_ 331
#define _LPAR_ 332
#define _RPAR_ 333
#define _EMPTY_ 334
#define _ITEM_ 335
#define _NILLABLE_ 336
#define _DOCUMENT_NODE_LPAR_ 337
#define _ATTRIBUTE_LPAR_ 338
#define _ELEMENT_LPAR_ 339
#define _AXIS_ANCESTOR_OR_SELF_ 340
#define _AXIS_ANCESTOR_ 341
#define _AXIS_FOLLOWING_SIBLING_ 342
#define _AXIS_FOLLOWING_ 343
#define _AXIS_PRECEDING_SIBLING_ 344
#define _AXIS_PRECEDING_ 345
#define _SCHEMA_ELEMENT_LPAR_ 346
#define _SCHEMA_ATTRIBUTE_LPAR_ 347
#define _ZERO_OR_ONE_ 348
#define _ONE_OR_MORE_ 349
#define _ZERO_OR_MORE_ 350
#define _AXIS_NAMESPACE_ 351
#define _EOF_ 352




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif





