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




/* Copy the first part of user declarations.  */
#line 14 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <iostream>
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

#include <xercesc/validators/schema/SchemaSymbols.hpp>

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
#include <xqilla/ast/XQAtomize.hpp>
#include <xqilla/ast/ConvertFunctionArg.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQPredicate.hpp>

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

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>

#include <xqilla/utils/XPath2Utils.hpp>
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

#define REJECT_NOT_XQUERY(where,pos)   if(!QP->_lexer->isXQuery())   { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

#define GET_NAVIGATION(pos, object) (((object)->getType() == ASTNode::NAVIGATION) ? (XQNav*)(object) : WRAP(pos, new (MEMMGR) XQNav((object), MEMMGR)))

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

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
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
#line 808 "../src/parser/XQParser.cpp"

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
#define YYFINAL  298
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  231
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  226
/* YYNRULES -- Number of rules.  */
#define YYNRULES  707
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   485

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
     225,   226,   227,   228,   229,   230
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    24,
      27,    29,    31,    34,    37,    38,    42,    46,    50,    54,
      58,    62,    66,    68,    70,    72,    74,    76,    78,    80,
      86,    94,   100,   108,   111,   114,   116,   118,   121,   124,
     125,   129,   133,   137,   141,   145,   149,   153,   157,   160,
     163,   165,   167,   170,   173,   174,   178,   182,   186,   190,
     194,   198,   202,   205,   208,   210,   212,   217,   224,   227,
     230,   237,   238,   242,   246,   250,   254,   258,   262,   266,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     290,   292,   298,   302,   306,   312,   318,   323,   327,   331,
     335,   341,   347,   353,   355,   357,   359,   361,   366,   370,
     376,   381,   382,   385,   389,   393,   397,   405,   410,   417,
     420,   422,   426,   430,   437,   446,   453,   462,   465,   469,
     470,   472,   476,   478,   482,   486,   490,   492,   496,   498,
     500,   502,   504,   506,   508,   510,   512,   514,   516,   518,
     522,   526,   529,   532,   534,   537,   540,   542,   544,   547,
     551,   553,   561,   562,   566,   567,   571,   574,   578,   580,
     587,   593,   596,   600,   605,   609,   611,   615,   621,   623,
     624,   626,   628,   629,   632,   635,   640,   645,   649,   651,
     657,   664,   667,   669,   675,   679,   684,   692,   701,   705,
     707,   711,   713,   717,   721,   722,   727,   731,   735,   739,
     743,   747,   751,   755,   759,   763,   767,   771,   775,   777,
     781,   786,   788,   792,   794,   798,   802,   804,   808,   812,
     816,   820,   822,   826,   830,   832,   836,   840,   842,   847,
     849,   854,   856,   861,   863,   868,   870,   873,   876,   878,
     880,   882,   884,   889,   895,   901,   905,   910,   912,   915,
     920,   922,   925,   927,   930,   933,   935,   937,   941,   945,
     947,   949,   951,   954,   957,   960,   962,   965,   968,   971,
     974,   977,   980,   983,   986,   989,   991,   994,   996,   999,
    1002,  1005,  1008,  1011,  1013,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1030,  1031,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1065,  1067,
    1071,  1074,  1076,  1081,  1086,  1090,  1095,  1099,  1101,  1103,
    1105,  1107,  1109,  1111,  1117,  1128,  1130,  1132,  1133,  1141,
    1149,  1150,  1152,  1156,  1160,  1164,  1168,  1169,  1172,  1175,
    1176,  1179,  1182,  1183,  1186,  1189,  1190,  1193,  1196,  1197,
    1200,  1203,  1206,  1209,  1213,  1214,  1216,  1220,  1222,  1225,
    1227,  1229,  1231,  1233,  1235,  1237,  1242,  1246,  1248,  1252,
    1255,  1259,  1263,  1268,  1273,  1277,  1279,  1283,  1286,  1290,
    1293,  1294,  1296,  1297,  1300,  1303,  1307,  1308,  1310,  1312,
    1314,  1316,  1318,  1322,  1324,  1326,  1328,  1330,  1332,  1334,
    1336,  1338,  1340,  1342,  1346,  1350,  1355,  1360,  1364,  1368,
    1372,  1377,  1382,  1386,  1391,  1398,  1400,  1402,  1407,  1409,
    1413,  1418,  1425,  1433,  1435,  1437,  1442,  1444,  1446,  1448,
    1450,  1452,  1457,  1460,  1461,  1464,  1467,  1471,  1473,  1477,
    1479,  1484,  1486,  1489,  1491,  1495,  1497,  1500,  1503,  1506,
    1509,  1514,  1516,  1520,  1524,  1528,  1531,  1534,  1537,  1540,
    1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,  1559,  1561,
    1564,  1567,  1570,  1573,  1576,  1579,  1582,  1585,  1589,  1593,
    1600,  1607,  1610,  1611,  1615,  1618,  1623,  1628,  1635,  1641,
    1645,  1651,  1652,  1655,  1658,  1662,  1664,  1668,  1671,  1674,
    1677,  1680,  1683,  1684,  1686,  1689,  1691,  1694,  1696,  1699,
    1703,  1707,  1712,  1714,  1716,  1718,  1720,  1722,  1726,  1730,
    1734,  1738,  1745,  1752,  1757,  1762,  1767,  1770,  1773,  1776,
    1779,  1782,  1790,  1796,  1802,  1809,  1813,  1815,  1820,  1822,
    1824,  1826,  1828,  1830,  1832,  1834,  1836,  1838,  1840,  1842,
    1844,  1846,  1848,  1850,  1852,  1854,  1856,  1858,  1860,  1862,
    1864,  1866,  1868,  1870,  1872,  1874,  1876,  1878,  1880,  1882,
    1884,  1886,  1888,  1890,  1892,  1894,  1896,  1898,  1900,  1902,
    1904,  1906,  1908,  1910,  1912,  1914,  1916,  1918,  1920,  1922,
    1924,  1926,  1928,  1930,  1932,  1934,  1936,  1938,  1940,  1942,
    1944,  1946,  1948,  1950,  1952,  1954,  1956,  1958,  1960,  1962,
    1964,  1966,  1968,  1970,  1972,  1974,  1976,  1978,  1980,  1982,
    1984,  1986,  1988,  1990,  1992,  1994,  1996,  1998,  2000,  2002,
    2004,  2006,  2008,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2040,  2042,
    2044,  2046,  2048,  2050,  2052,  2054,  2056,  2058,  2060,  2062,
    2064,  2066,  2068,  2070,  2072,  2074,  2076,  2078,  2080,  2082,
    2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,  2102,
    2104,  2106,  2108,  2110,  2112,  2114,  2116,  2118,  2120,  2122,
    2124,  2126,  2128,  2130,  2132,  2134,  2136,  2138
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     232,     0,    -1,     3,   281,    -1,     4,   233,    -1,     5,
     281,    -1,     6,   239,    -1,     7,   243,    -1,     8,   247,
      -1,   248,   234,    -1,   248,   235,    -1,   234,    -1,   235,
      -1,   236,   281,    -1,   251,   236,    -1,    -1,   236,   237,
     255,    -1,   236,   254,   255,    -1,   236,   256,   255,    -1,
     236,   258,   255,    -1,   236,   272,   255,    -1,   236,   238,
     255,    -1,   236,   259,   255,    -1,   257,    -1,   266,    -1,
     267,    -1,   274,    -1,   261,    -1,   262,    -1,   263,    -1,
     179,   191,   456,   276,   280,    -1,   179,   191,   456,   276,
     151,   389,   280,    -1,   179,   191,   456,   276,   174,    -1,
     179,   191,   456,   276,   151,   389,   174,    -1,   248,   240,
      -1,   248,   241,    -1,   240,    -1,   241,    -1,   242,   281,
      -1,   251,   242,    -1,    -1,   242,   237,   255,    -1,   242,
     254,   255,    -1,   242,   256,   255,    -1,   242,   258,   255,
      -1,   242,   272,   255,    -1,   242,   238,   255,    -1,   242,
     259,   255,    -1,   242,   260,   255,    -1,   248,   244,    -1,
     248,   245,    -1,   244,    -1,   245,    -1,   246,   281,    -1,
     251,   246,    -1,    -1,   246,   253,   255,    -1,   246,   254,
     255,    -1,   246,   256,   255,    -1,   246,   258,   255,    -1,
     246,   272,   255,    -1,   246,   275,   255,    -1,   246,   259,
     255,    -1,   248,   249,    -1,   248,   250,    -1,   249,    -1,
     250,    -1,   185,   186,   125,   255,    -1,   185,   186,   125,
     175,   125,   255,    -1,   252,   281,    -1,   251,   252,    -1,
     189,   172,   453,    39,   410,   255,    -1,    -1,   252,   253,
     255,    -1,   252,   254,   255,    -1,   252,   256,   255,    -1,
     252,   258,   255,    -1,   252,   272,   255,    -1,   252,   275,
     255,    -1,   252,   259,   255,    -1,   252,   260,   255,    -1,
     257,    -1,   266,    -1,   267,    -1,   274,    -1,   261,    -1,
     262,    -1,   439,    -1,   263,    -1,   268,    -1,   271,    -1,
      53,    -1,   179,   172,   453,    39,   410,    -1,   179,    67,
     170,    -1,   179,    67,   171,    -1,   179,   182,   190,   172,
     410,    -1,   179,   182,   191,   172,   410,    -1,   179,   184,
     455,   125,    -1,   179,    68,   420,    -1,   179,   181,   120,
      -1,   179,   181,   121,    -1,   179,   182,   137,   141,   142,
      -1,   179,   182,   137,   141,   143,    -1,   179,   183,   264,
      35,   265,    -1,   170,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,   182,   144,   410,    -1,   179,    69,   410,    -1,
     187,   188,   270,   410,   269,    -1,   187,   188,   410,   269,
      -1,    -1,   114,   410,    -1,   269,    35,   410,    -1,   172,
     453,    39,    -1,   182,   190,   172,    -1,   187,   189,   172,
     453,    39,   410,   269,    -1,   187,   189,   410,   269,    -1,
     179,   126,     9,   351,   388,   273,    -1,    10,   283,    -1,
     174,    -1,   179,   180,   170,    -1,   179,   180,   171,    -1,
     179,   277,   191,   456,   276,   280,    -1,   179,   277,   191,
     456,   276,   151,   389,   280,    -1,   179,   277,   191,   456,
     276,   174,    -1,   179,   277,   191,   456,   276,   151,   389,
     174,    -1,    42,    43,    -1,    42,   278,    43,    -1,    -1,
     230,    -1,   278,    35,   279,    -1,   279,    -1,     9,   351,
     388,    -1,    50,   282,    52,    -1,    51,   282,    52,    -1,
     282,    -1,   282,    35,   283,    -1,   283,    -1,   284,    -1,
     302,    -1,   305,    -1,   309,    -1,   440,    -1,   442,    -1,
     445,    -1,   444,    -1,   446,    -1,   310,    -1,   285,   131,
     283,    -1,   286,   295,   296,    -1,   286,   295,    -1,   286,
     296,    -1,   286,    -1,   286,   287,    -1,   286,   292,    -1,
     287,    -1,   292,    -1,   132,   288,    -1,   288,    35,   289,
      -1,   289,    -1,     9,   351,   388,   290,   291,   133,   283,
      -1,    -1,   114,     9,   351,    -1,    -1,   192,     9,   351,
      -1,   134,   293,    -1,   293,    35,   294,    -1,   294,    -1,
       9,   351,   388,   291,    10,   283,    -1,   192,     9,   351,
      10,   283,    -1,   135,   283,    -1,   137,   136,   297,    -1,
     138,   137,   136,   297,    -1,   297,    35,   298,    -1,   298,
      -1,   299,   300,   301,    -1,   299,   300,   301,   144,   410,
      -1,   283,    -1,    -1,   139,    -1,   140,    -1,    -1,   141,
     142,    -1,   141,   143,    -1,   145,   303,   147,   283,    -1,
     146,   303,   147,   283,    -1,   303,    35,   304,    -1,   304,
      -1,     9,   351,   388,   133,   283,    -1,   148,    42,   282,
      43,   306,   307,    -1,   306,   308,    -1,   308,    -1,   182,
       9,   351,   131,   283,    -1,   182,   131,   283,    -1,   149,
     389,   131,   283,    -1,   149,     9,   351,   151,   389,   131,
     283,    -1,   152,    42,   282,    43,   153,   283,   154,   283,
      -1,   310,   155,   311,    -1,   311,    -1,   311,   156,   312,
      -1,   312,    -1,   314,    39,   314,    -1,   314,    13,   314,
      -1,    -1,   314,    26,   313,   314,    -1,   314,    14,   314,
      -1,   314,    15,   314,    -1,   314,    16,   314,    -1,   314,
     108,   314,    -1,   314,   109,   314,    -1,   314,   110,   314,
      -1,   314,   111,   314,    -1,   314,   112,   314,    -1,   314,
     113,   314,    -1,   314,   169,   314,    -1,   314,    17,   314,
      -1,   314,    18,   314,    -1,   314,    -1,   315,   193,   411,
      -1,   315,   193,   411,   438,    -1,   315,    -1,   316,   160,
     316,    -1,   316,    -1,   316,    36,   317,    -1,   316,    37,
     317,    -1,   317,    -1,   317,    11,   318,    -1,   317,   161,
     318,    -1,   317,    72,   318,    -1,   317,   162,   318,    -1,
     318,    -1,   318,    12,   319,    -1,   318,   163,   319,    -1,
     319,    -1,   319,   164,   320,    -1,   319,   165,   320,    -1,
     320,    -1,   321,   157,   158,   389,    -1,   321,    -1,   322,
     168,   151,   389,    -1,   322,    -1,   323,   159,   151,   386,
      -1,   323,    -1,   324,   167,   151,   386,    -1,   324,    -1,
      37,   324,    -1,    36,   324,    -1,   325,    -1,   326,    -1,
     331,    -1,   327,    -1,   166,    51,   282,    52,    -1,   166,
      70,    51,   282,    52,    -1,   166,    71,    51,   282,    52,
      -1,   328,    51,    52,    -1,   328,    51,   282,    52,    -1,
     329,    -1,   328,   329,    -1,    34,   363,   455,   330,    -1,
     130,    -1,   105,   130,    -1,   332,    -1,   332,   333,    -1,
      32,   333,    -1,   333,    -1,    38,    -1,   333,    38,   334,
      -1,   333,    32,   334,    -1,   334,    -1,   335,    -1,   345,
      -1,   336,   346,    -1,   339,   346,    -1,   337,   342,    -1,
     338,    -1,    73,    19,    -1,    74,    19,    -1,    58,    19,
      -1,    75,    19,    -1,    76,    19,    -1,    77,    19,    -1,
      78,    19,    -1,   172,    19,    -1,    20,   342,    -1,   342,
      -1,   340,   342,    -1,   341,    -1,    79,    19,    -1,    80,
      19,    -1,    81,    19,    -1,    82,    19,    -1,    83,    19,
      -1,    41,    -1,   393,    -1,   343,    -1,   454,    -1,   344,
      -1,    11,    -1,   127,    -1,   128,    -1,   347,   346,    -1,
      -1,   346,    21,   282,    22,    -1,   348,    -1,   350,    -1,
     352,    -1,   353,    -1,   356,    -1,   358,    -1,   354,    -1,
     355,    -1,   349,    -1,   452,    -1,   449,    -1,   450,    -1,
     451,    -1,     9,   351,    -1,   455,    -1,    42,   282,    43,
      -1,    42,    43,    -1,    40,    -1,   120,    51,   282,    52,
      -1,   121,    51,   282,    52,    -1,   456,    42,    43,    -1,
     456,    42,   357,    43,    -1,   357,    35,   283,    -1,   283,
      -1,   359,    -1,   375,    -1,   360,    -1,   371,    -1,   373,
      -1,    26,   361,   362,   363,    44,    -1,    26,   361,   362,
     363,    27,   370,    33,   361,   363,    28,    -1,   122,    -1,
     123,    -1,    -1,   362,   105,   122,   363,    45,   363,   364,
      -1,   362,   105,   123,   363,    45,   363,   365,    -1,    -1,
     105,    -1,    46,   366,    47,    -1,    48,   368,    49,    -1,
      46,   367,    47,    -1,    48,   369,    49,    -1,    -1,   366,
     280,    -1,   366,   115,    -1,    -1,   367,   280,    -1,   367,
     115,    -1,    -1,   368,   280,    -1,   368,   116,    -1,    -1,
     369,   280,    -1,   369,   116,    -1,    -1,   370,   359,    -1,
     370,   280,    -1,   370,   118,    -1,   370,   117,    -1,    30,
     372,    31,    -1,    -1,   107,    -1,    29,   129,   374,    -1,
     106,    -1,   105,   106,    -1,   376,    -1,   377,    -1,   380,
      -1,   381,    -1,   382,    -1,   383,    -1,    84,    51,   282,
      52,    -1,   190,   378,   379,    -1,   124,    -1,    51,   282,
      52,    -1,    51,    52,    -1,    51,   282,    52,    -1,    58,
     378,   379,    -1,    65,    51,   282,    52,    -1,    59,    51,
     282,    52,    -1,    62,   384,   385,    -1,   124,    -1,    51,
     282,    52,    -1,    51,    52,    -1,    51,   282,    52,    -1,
     392,   387,    -1,    -1,    23,    -1,    -1,   151,   389,    -1,
     391,   390,    -1,    66,    42,    43,    -1,    -1,    11,    -1,
      36,    -1,    23,    -1,   392,    -1,   393,    -1,   173,    42,
      43,    -1,   454,    -1,   395,    -1,   403,    -1,   399,    -1,
     405,    -1,   401,    -1,   398,    -1,   397,    -1,   396,    -1,
     394,    -1,    61,    42,    43,    -1,    60,    42,    43,    -1,
      60,    42,   403,    43,    -1,    60,    42,   405,    43,    -1,
      65,    42,    43,    -1,    59,    42,    43,    -1,    62,    42,
      43,    -1,    62,    42,   453,    43,    -1,    62,    42,   125,
      43,    -1,    58,    42,    43,    -1,    58,    42,   400,    43,
      -1,    58,    42,   400,    35,   409,    43,    -1,   407,    -1,
      11,    -1,    63,    42,   402,    43,    -1,   407,    -1,   190,
      42,    43,    -1,   190,    42,   404,    43,    -1,   190,    42,
     404,    35,   409,    43,    -1,   190,    42,   404,    35,   409,
      23,    43,    -1,   408,    -1,    11,    -1,    64,    42,   406,
      43,    -1,   408,    -1,   454,    -1,   454,    -1,   454,    -1,
     125,    -1,   413,   412,   194,   450,    -1,   413,   412,    -1,
      -1,   412,   420,    -1,   412,   419,    -1,   413,    24,   414,
      -1,   414,    -1,   414,    25,   415,    -1,   415,    -1,   415,
      85,   133,   416,    -1,   416,    -1,    54,   417,    -1,   417,
      -1,    42,   411,    43,    -1,   418,    -1,   348,   434,    -1,
     350,   434,    -1,   353,   434,    -1,   356,   434,    -1,    51,
     282,    52,   434,    -1,   120,    -1,   195,   318,   436,    -1,
     196,   435,   436,    -1,   197,   435,   198,    -1,   199,   437,
      -1,   200,   437,    -1,   114,    99,    -1,   114,   100,    -1,
      95,    96,    -1,   421,    -1,   422,    -1,   423,    -1,   424,
      -1,   427,    -1,   432,    -1,   433,    -1,   201,    -1,   202,
      -1,   150,    86,    -1,   150,    87,    -1,   224,    88,    -1,
      89,    88,    -1,    88,    86,    -1,    88,    87,    -1,   224,
      91,    -1,    89,    91,    -1,   224,    92,   426,    -1,   224,
      92,   182,    -1,   224,    92,    42,   426,   425,    43,    -1,
     224,    92,    42,   182,   425,    43,    -1,    89,    92,    -1,
      -1,   425,    35,   426,    -1,   114,   452,    -1,   114,   452,
     203,   452,    -1,   114,   452,   435,   204,    -1,   114,   452,
     203,   452,   435,   204,    -1,   224,    93,   211,   429,   428,
      -1,    89,    93,   211,    -1,   224,   182,    93,   211,   428,
      -1,    -1,   428,   431,    -1,   114,   452,    -1,    42,   430,
      43,    -1,   452,    -1,   430,    35,   452,    -1,   163,   429,
      -1,   165,   429,    -1,   205,   452,    -1,   224,    94,    -1,
      89,    94,    -1,    -1,   206,    -1,   206,    97,    -1,   207,
      -1,   207,   211,    -1,   208,    -1,   209,   318,    -1,   119,
     143,   318,    -1,   119,   101,   318,    -1,   210,   318,   160,
     318,    -1,   211,    -1,   212,    -1,   213,    -1,   214,    -1,
     215,    -1,    90,    96,   318,    -1,   179,   222,    71,    -1,
     179,   222,    70,    -1,   179,   222,   102,    -1,   441,   283,
     151,   218,   229,   283,    -1,   441,   283,   151,   227,   229,
     283,    -1,   441,   283,   229,   283,    -1,   441,   283,   221,
     283,    -1,   441,   283,   220,   283,    -1,   219,    61,    -1,
     219,   225,    -1,   443,   283,    -1,   228,    61,    -1,   228,
     225,    -1,   216,   104,   158,    61,   283,   223,   283,    -1,
     216,    61,   283,   223,   283,    -1,   226,    61,   283,   151,
     283,    -1,   103,   447,   217,   283,   131,   283,    -1,   447,
      35,   448,    -1,   448,    -1,     9,   351,    10,   283,    -1,
      55,    -1,    56,    -1,    57,    -1,   125,    -1,   455,    -1,
     455,    -1,   456,    -1,    58,    -1,    59,    -1,    60,    -1,
     190,    -1,   173,    -1,   152,    -1,    61,    -1,    62,    -1,
      63,    -1,    64,    -1,    65,    -1,   148,    -1,    66,    -1,
     122,    -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,
      81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,
      86,    -1,    87,    -1,    88,    -1,    89,    -1,    91,    -1,
      92,    -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   108,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     126,    -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,
     140,    -1,   141,    -1,   142,    -1,   143,    -1,   144,    -1,
     145,    -1,   146,    -1,   147,    -1,   149,    -1,   151,    -1,
     153,    -1,   154,    -1,   155,    -1,   156,    -1,   157,    -1,
     158,    -1,   159,    -1,   160,    -1,   161,    -1,   162,    -1,
     163,    -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,
     168,    -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,
     174,    -1,   175,    -1,   176,    -1,   177,    -1,   178,    -1,
     179,    -1,   180,    -1,   181,    -1,   182,    -1,   183,    -1,
     184,    -1,   186,    -1,   187,    -1,   188,    -1,   191,    -1,
     192,    -1,   193,    -1,   194,    -1,   195,    -1,   196,    -1,
     197,    -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,
     202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,
     207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,
     222,    -1,   223,    -1,   225,    -1,   226,    -1,   227,    -1,
     228,    -1,   229,    -1,   230,    -1,   120,    -1,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   533,   533,   534,   535,   536,   537,   538,   546,   547,
     548,   549,   553,   556,   560,   562,   566,   570,   574,   578,
     582,   588,   602,   603,   604,   605,   606,   607,   608,   614,
     618,   622,   626,   637,   638,   639,   640,   644,   647,   651,
     653,   657,   661,   665,   669,   673,   679,   683,   694,   695,
     696,   697,   701,   704,   708,   710,   714,   718,   722,   726,
     730,   736,   747,   748,   749,   750,   755,   760,   782,   785,
     789,   801,   803,   807,   811,   815,   819,   823,   829,   833,
     847,   848,   849,   850,   851,   852,   853,   854,   858,   858,
     861,   865,   873,   878,   887,   892,   901,   921,   928,   933,
     942,   947,   956,   966,   970,   978,   982,   990,  1006,  1015,
    1027,  1036,  1039,  1044,  1053,  1057,  1065,  1075,  1087,  1094,
    1098,  1106,  1111,  1121,  1125,  1129,  1133,  1140,  1144,  1151,
    1154,  1162,  1167,  1177,  1185,  1189,  1197,  1210,  1226,  1232,
    1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,  1241,  1246,
    1257,  1261,  1265,  1269,  1273,  1279,  1285,  1286,  1292,  1299,
    1303,  1307,  1319,  1322,  1333,  1336,  1346,  1353,  1357,  1361,
    1365,  1372,  1380,  1385,  1393,  1397,  1403,  1410,  1425,  1442,
    1445,  1449,  1457,  1465,  1469,  1478,  1486,  1497,  1501,  1505,
    1516,  1523,  1528,  1536,  1540,  1548,  1552,  1560,  1568,  1577,
    1582,  1591,  1601,  1605,  1609,  1609,  1613,  1617,  1621,  1625,
    1629,  1633,  1637,  1641,  1645,  1649,  1653,  1657,  1661,  1666,
    1670,  1674,  1679,  1683,  1688,  1692,  1696,  1701,  1705,  1709,
    1713,  1717,  1722,  1726,  1730,  1735,  1739,  1743,  1748,  1752,
    1757,  1762,  1767,  1771,  1776,  1780,  1785,  1791,  1797,  1802,
    1803,  1804,  1812,  1816,  1820,  1828,  1835,  1844,  1844,  1848,
    1868,  1869,  1877,  1878,  1884,  1905,  1909,  1923,  1929,  1942,
    1946,  1946,  1950,  1954,  1963,  1975,  1986,  1990,  1994,  1998,
    2002,  2006,  2010,  2014,  2022,  2030,  2047,  2055,  2064,  2068,
    2072,  2076,  2080,  2088,  2100,  2105,  2110,  2117,  2122,  2129,
    2136,  2147,  2157,  2160,  2170,  2171,  2172,  2173,  2174,  2175,
    2176,  2177,  2181,  2181,  2184,  2184,  2184,  2188,  2195,  2199,
    2203,  2211,  2219,  2229,  2239,  2243,  2250,  2255,  2264,  2268,
    2277,  2277,  2277,  2281,  2287,  2296,  2296,  2301,  2304,  2313,
    2324,  2324,  2329,  2333,  2340,  2344,  2355,  2358,  2363,  2377,
    2380,  2384,  2401,  2404,  2409,  2423,  2426,  2430,  2451,  2454,
    2459,  2464,  2474,  2490,  2505,  2508,  2513,  2534,  2535,  2548,
    2549,  2550,  2551,  2552,  2553,  2558,  2566,  2574,  2578,  2586,
    2590,  2599,  2607,  2615,  2623,  2630,  2643,  2650,  2654,  2662,
    2673,  2676,  2685,  2688,  2698,  2705,  2715,  2716,  2718,  2720,
    2726,  2730,  2731,  2738,  2750,  2751,  2752,  2753,  2754,  2755,
    2756,  2757,  2758,  2763,  2771,  2775,  2780,  2789,  2797,  2805,
    2809,  2813,  2821,  2825,  2829,  2837,  2838,  2846,  2854,  2859,
    2863,  2867,  2871,  2880,  2881,  2889,  2896,  2899,  2902,  2905,
    2909,  2921,  2933,  2949,  2952,  2956,  2966,  2977,  2982,  2993,
    2998,  3002,  3007,  3011,  3016,  3020,  3025,  3029,  3033,  3037,
    3041,  3055,  3059,  3063,  3067,  3072,  3076,  3080,  3084,  3088,
    3102,  3103,  3104,  3105,  3106,  3107,  3108,  3116,  3120,  3124,
    3128,  3139,  3143,  3147,  3151,  3159,  3163,  3173,  3177,  3181,
    3185,  3189,  3197,  3199,  3206,  3210,  3214,  3218,  3228,  3232,
    3236,  3244,  3246,  3254,  3258,  3265,  3269,  3277,  3281,  3289,
    3297,  3301,  3310,  3313,  3317,  3321,  3325,  3329,  3340,  3346,
    3352,  3358,  3368,  3372,  3376,  3384,  3388,  3396,  3404,  3409,
    3414,  3426,  3430,  3434,  3438,  3442,  3448,  3448,  3453,  3459,
    3459,  3464,  3468,  3478,  3486,  3493,  3498,  3506,  3515,  3528,
    3541,  3555,  3567,  3576,  3583,  3583,  3583,  3583,  3583,  3583,
    3583,  3583,  3584,  3584,  3584,  3584,  3584,  3584,  3588,  3588,
    3588,  3588,  3588,  3588,  3588,  3588,  3588,  3588,  3589,  3589,
    3589,  3589,  3589,  3589,  3589,  3590,  3590,  3590,  3590,  3590,
    3590,  3590,  3590,  3591,  3591,  3591,  3591,  3591,  3591,  3591,
    3591,  3591,  3591,  3591,  3592,  3592,  3592,  3592,  3592,  3592,
    3592,  3592,  3592,  3592,  3592,  3592,  3593,  3593,  3593,  3593,
    3593,  3593,  3593,  3593,  3593,  3593,  3594,  3594,  3594,  3594,
    3594,  3594,  3594,  3594,  3594,  3594,  3594,  3594,  3595,  3595,
    3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,  3595,
    3596,  3596,  3596,  3596,  3596,  3596,  3596,  3596,  3596,  3597,
    3597,  3597,  3597,  3597,  3597,  3597,  3597,  3598,  3598,  3598,
    3598,  3598,  3598,  3598,  3598,  3598,  3599,  3599,  3599,  3599,
    3599,  3599,  3599,  3599,  3599,  3600,  3600,  3600,  3600,  3600,
    3600,  3600,  3600,  3600,  3600,  3601,  3601,  3601,  3601,  3601,
    3601,  3601,  3601,  3601,  3601,  3601,  3602,  3602
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "_LANG_XPATH2_",
  "_LANG_XQUERY_", "_LANG_XPATH2_FULLTEXT_", "_LANG_XQUERY_FULLTEXT_",
  "_LANG_XQUERY_UPDATE_", "_LANG_XQUERY_FULLTEXT_UPDATE_", "\"$\"",
  "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"||\"", "\"&&\"", "\"<\"",
  "\"> (start tag close)\"", "\"> (end tag close)\"", "\"<?\"", "\"<!--\"",
  "\"-->\"", "\"//\"", "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"",
  "\"/\"", "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"",
  "\")\"", "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"",
  "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"{ (expression enclosure)\"",
  "\"}\"", "\";\"", "\"!\"", "\"<integer literal>\"",
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
  "\"function\"", "\"score\"", "\"ftcontains\"", "\"weight\"",
  "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"", "\"same\"",
  "\"different\"", "\"lowercase\"", "\"uppercase\"", "\"relationship\"",
  "\"levels\"", "\"language\"", "\"any\"", "\"all\"", "\"phrase\"",
  "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"with (ft option)\"", "\"nodes\"",
  "\"rename\"", "\"last\"", "\"delete\"", "\"into\"", "\"updating\"",
  "$accept", "SelectLanguage", "Module_XQ", "MainModule_XQ",
  "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ", "FunctionDecl_XQ",
  "Module_XQF", "MainModule_XQF", "LibraryModule_XQF", "Prolog_XQF",
  "Module_XQU", "MainModule_XQU", "LibraryModule_XQU", "Prolog_XQU",
  "Module", "VersionDecl", "MainModule", "LibraryModule", "ModuleDecl",
  "Prolog", "Setter", "Import", "Separator", "NamespaceDecl",
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
  "NCName", "QName", "QNameValue", "FunctionName", 0
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
     485
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   231,   232,   232,   232,   232,   232,   232,   233,   233,
     233,   233,   234,   235,   236,   236,   236,   236,   236,   236,
     236,   236,   237,   237,   237,   237,   237,   237,   237,   238,
     238,   238,   238,   239,   239,   239,   239,   240,   241,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     243,   243,   244,   245,   246,   246,   246,   246,   246,   246,
     246,   246,   247,   247,   247,   247,   248,   248,   249,   250,
     251,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     253,   253,   253,   253,   253,   253,   253,   253,   254,   254,
     255,   256,   257,   257,   258,   258,   259,   260,   261,   261,
     262,   262,   263,   264,   264,   265,   265,   266,   267,   268,
     268,   269,   269,   269,   270,   270,   271,   271,   272,   273,
     273,   274,   274,   275,   275,   275,   275,   276,   276,   277,
     277,   278,   278,   279,   280,   280,   281,   282,   282,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   284,
     285,   285,   285,   285,   286,   286,   286,   286,   287,   288,
     288,   289,   290,   290,   291,   291,   292,   293,   293,   294,
     294,   295,   296,   296,   297,   297,   298,   298,   299,   300,
     300,   300,   301,   301,   301,   302,   302,   303,   303,   304,
     305,   306,   306,   307,   307,   308,   308,   309,   310,   310,
     311,   311,   312,   312,   313,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   314,
     314,   314,   315,   315,   316,   316,   316,   317,   317,   317,
     317,   317,   318,   318,   318,   319,   319,   319,   320,   320,
     321,   321,   322,   322,   323,   323,   324,   324,   324,   325,
     325,   325,   326,   326,   326,   327,   327,   328,   328,   329,
     330,   330,   331,   331,   331,   331,   332,   333,   333,   333,
     334,   334,   335,   335,   336,   336,   337,   337,   337,   337,
     337,   337,   337,   337,   338,   338,   339,   339,   340,   340,
     340,   340,   340,   341,   342,   342,   343,   343,   344,   344,
     344,   345,   346,   346,   347,   347,   347,   347,   347,   347,
     347,   347,   348,   348,   349,   349,   349,   350,   351,   352,
     352,   353,   354,   355,   356,   356,   357,   357,   358,   358,
     359,   359,   359,   360,   360,   361,   361,   362,   362,   362,
     363,   363,   364,   364,   365,   365,   366,   366,   366,   367,
     367,   367,   368,   368,   368,   369,   369,   369,   370,   370,
     370,   370,   370,   371,   372,   372,   373,   374,   374,   375,
     375,   375,   375,   375,   375,   376,   377,   378,   378,   379,
     379,   380,   381,   382,   383,   384,   384,   385,   385,   386,
     387,   387,   388,   388,   389,   389,   390,   390,   390,   390,
     391,   391,   391,   392,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   394,   395,   395,   395,   396,   397,   398,
     398,   398,   399,   399,   399,   400,   400,   401,   402,   403,
     403,   403,   403,   404,   404,   405,   406,   407,   408,   409,
     410,   411,   411,   412,   412,   412,   413,   413,   414,   414,
     415,   415,   416,   416,   417,   417,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     420,   420,   420,   420,   420,   420,   420,   421,   421,   421,
     421,   422,   422,   422,   422,   423,   423,   424,   424,   424,
     424,   424,   425,   425,   426,   426,   426,   426,   427,   427,
     427,   428,   428,   429,   429,   430,   430,   431,   431,   432,
     433,   433,   434,   434,   434,   434,   434,   434,   435,   435,
     435,   435,   436,   436,   436,   437,   437,   438,   439,   439,
     439,   440,   440,   440,   440,   440,   441,   441,   442,   443,
     443,   444,   444,   445,   446,   447,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     5,
       7,     5,     7,     2,     2,     1,     1,     2,     2,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     4,     6,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     5,     3,     3,     5,     5,     4,     3,     3,     3,
       5,     5,     5,     1,     1,     1,     1,     4,     3,     5,
       4,     0,     2,     3,     3,     3,     7,     4,     6,     2,
       1,     3,     3,     6,     8,     6,     8,     2,     3,     0,
       1,     3,     1,     3,     3,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     2,     1,     2,     2,     1,     1,     2,     3,
       1,     7,     0,     3,     0,     3,     2,     3,     1,     6,
       5,     2,     3,     4,     3,     1,     3,     5,     1,     0,
       1,     1,     0,     2,     2,     4,     4,     3,     1,     5,
       6,     2,     1,     5,     3,     4,     7,     8,     3,     1,
       3,     1,     3,     3,     0,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       4,     1,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     4,     1,     4,     1,     2,     2,     1,     1,
       1,     1,     4,     5,     5,     3,     4,     1,     2,     4,
       1,     2,     1,     2,     2,     1,     1,     3,     3,     1,
       1,     1,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       2,     1,     4,     4,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     5,    10,     1,     1,     0,     7,     7,
       0,     1,     3,     3,     3,     3,     0,     2,     2,     0,
       2,     2,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     2,     2,     3,     0,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     4,     3,     1,     3,     2,
       3,     3,     4,     4,     3,     1,     3,     2,     3,     2,
       0,     1,     0,     2,     2,     3,     0,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     4,     3,     3,     3,
       4,     4,     3,     4,     6,     1,     1,     4,     1,     3,
       4,     6,     7,     1,     1,     4,     1,     1,     1,     1,
       1,     4,     2,     0,     2,     2,     3,     1,     3,     1,
       4,     1,     2,     1,     3,     1,     2,     2,     2,     2,
       4,     1,     3,     3,     3,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     6,
       6,     2,     0,     3,     2,     4,     4,     6,     5,     3,
       5,     0,     2,     2,     3,     1,     3,     2,     2,     2,
       2,     2,     0,     1,     2,     1,     2,     1,     2,     3,
       3,     4,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     6,     6,     4,     4,     4,     2,     2,     2,     2,
       2,     7,     5,     5,     6,     3,     1,     4,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    14,     0,    39,    54,    71,     0,     0,   298,
       0,     0,     0,   364,     0,   340,     0,     0,   266,   321,
     293,     0,   548,   549,   550,   555,   556,   557,   561,   562,
     563,   564,   565,   567,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   706,   707,
     568,   551,   613,   299,   300,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   566,   631,   632,   560,   633,   634,   635,   636,
     637,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     647,   648,   649,   650,   651,   652,   559,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   558,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   689,   690,   691,   692,   693,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   703,   704,
     705,     2,   136,   138,   139,     0,   153,   156,   157,   140,
     141,   142,   148,   199,   201,   218,   221,   223,   226,   231,
     234,   237,   239,   241,   243,   245,   248,   249,   251,     0,
     257,   250,   262,   265,   269,   270,   302,     0,   275,   302,
       0,   287,   285,   295,   297,   271,   302,   304,   312,   305,
     306,   307,   310,   311,   308,   309,   328,   330,   331,   332,
     329,   369,   370,   371,   372,   373,   374,   294,   412,   404,
     411,   410,   409,   406,   408,   405,   407,   143,     0,   144,
       0,   146,   145,   147,   314,   315,   316,   313,   296,   553,
     554,     0,     0,     3,    10,    11,     0,    14,    14,     4,
       5,    35,    36,     0,    39,    39,     6,    50,    51,     0,
      54,    54,     7,    71,    64,    65,    71,     0,     1,   555,
     556,   557,   561,   562,   563,   564,   565,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   604,
     706,   707,   615,   617,   628,   629,   566,   560,   646,   652,
     558,   692,   695,   701,   703,   317,   318,   554,   555,   556,
     562,   565,   558,   284,   335,   336,   337,     0,   365,     0,
     264,   341,     0,   247,   246,   320,     0,   278,     0,     0,
     377,     0,     0,     0,     0,     0,     0,     0,   385,     0,
       0,     0,     0,     0,   276,   277,   279,   280,   281,   282,
     288,   289,   290,   291,   292,     0,     0,     0,   546,     0,
       0,     0,   158,   160,     0,     0,   166,   168,     0,     0,
     188,     0,     0,     0,     0,     0,     0,   283,     0,     0,
       0,     0,   536,   537,     0,   539,   540,     0,     0,     0,
       0,     0,     0,     0,   154,   155,   151,   152,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,   263,     0,     0,   272,   274,   273,   286,
     301,     0,   538,     0,     0,     0,   658,   665,     0,     0,
       0,     0,    22,     0,     0,    26,    27,    28,    23,    24,
      88,    89,     0,    25,    12,     8,     9,    13,   658,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    33,    34,
      38,   658,     0,     0,     0,    80,     0,     0,    84,    85,
      87,    81,    82,     0,    83,     0,    52,    86,    48,    49,
      53,    62,    63,    69,   658,     0,     0,     0,     0,     0,
       0,     0,     0,    68,   340,     0,   367,   366,   363,     0,
     319,   426,   422,     0,   425,   437,     0,     0,   381,   418,
       0,   414,     0,     0,     0,     0,   413,   419,     0,     0,
     552,     0,     0,   384,     0,   428,     0,   436,   438,   417,
       0,     0,     0,     0,     0,     0,     0,   392,     0,   392,
       0,     0,   392,     0,     0,     0,     0,     0,     0,     0,
       0,   434,   429,     0,   433,   376,     0,     0,     0,   137,
     149,   171,     0,     0,   150,   198,   200,   203,   206,   207,
     208,   216,   217,     0,   202,   209,   210,   211,   212,   213,
     214,   215,     0,     0,     0,   512,   512,   512,   512,   219,
     443,   447,   449,   451,   453,   455,     0,   224,   225,   222,
     227,   229,   228,   230,   232,   233,   235,   236,     0,     0,
       0,     0,   255,     0,   268,   267,     0,     0,     0,     0,
       0,   324,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    15,
      20,    16,    17,    18,    21,    19,     0,     0,     0,    40,
      45,    41,    42,    43,    46,    47,    44,     0,     0,   130,
       0,    55,    56,    57,    58,    61,    59,    60,   129,   129,
      72,    73,    74,    75,    78,    79,    76,    77,   341,     0,
     368,     0,   260,   259,     0,   423,   378,   379,     0,   383,
     415,   416,   421,   420,   386,   387,     0,   427,   435,   382,
     375,     0,   545,     0,   322,   323,     0,   162,   159,   164,
       0,   167,     0,   187,   185,   186,     0,     0,   252,     0,
       0,     0,   430,     0,     0,     0,   178,   172,   175,   179,
       0,   205,     0,     0,   452,   513,   515,   517,   456,   457,
     458,   459,     0,   220,     0,   442,     0,     0,   567,   559,
     238,   396,   400,   401,   403,   240,   242,   390,   244,   256,
       0,     0,     0,   535,   534,   533,     0,   325,     0,    66,
       0,    92,    93,   440,   108,     0,     0,   121,   122,    98,
      99,     0,     0,     0,     0,   103,   104,     0,     0,     0,
       0,     0,     0,   111,     0,   111,     0,     0,     0,   477,
     478,     0,     0,    97,   470,   471,   472,   473,   474,   475,
     476,   529,   528,   530,     0,   340,   340,   358,   333,   261,
       0,   439,   380,   388,   547,     0,   393,     0,   164,     0,
       0,     0,     0,     0,     0,   192,     0,   253,   254,     0,
     542,     0,   543,     0,   180,   181,   182,   173,   454,   512,
     514,   516,     0,   446,     0,     0,   461,     0,     0,     0,
       0,     0,     0,   445,   444,   448,     0,     0,     0,   397,
     399,   398,   394,   391,   389,   303,     0,     0,   326,     0,
       0,   392,     0,     0,   107,     0,     0,     0,    96,     0,
       0,     0,     0,   111,     0,   110,     0,   117,   483,   484,
     482,   486,   491,     0,   511,   479,   480,   509,   481,   485,
       0,     0,   510,     0,     0,     0,     0,     0,   424,   544,
       0,     0,     0,     0,   170,   189,     0,     0,     0,   190,
     191,     0,     0,   431,     0,   174,     0,   176,   460,   527,
     469,   467,   468,   441,     0,     0,     0,     0,     0,     0,
     525,   526,   465,   466,   450,   395,   402,   531,   532,    67,
      70,     0,    91,   100,   101,    94,    95,   105,   106,   102,
       0,   127,     0,   132,     0,     0,     0,    31,    29,   114,
     115,   109,   112,     0,     0,   499,     0,     0,   488,   487,
       0,     0,     0,   340,   340,     0,   362,   361,   360,   359,
     163,     0,   165,   169,     0,     0,     0,     0,     0,   432,
     541,   183,   184,     0,   522,   523,   524,   462,     0,     0,
     518,     0,   463,   464,     0,   120,   118,   392,     0,   128,
       0,     0,     0,   113,   111,   492,   492,   494,     0,     0,
     501,   501,     0,   125,   123,     0,     0,   340,   161,     0,
     195,     0,   194,   197,   177,   520,   519,     0,   119,   133,
     131,   134,   135,    32,    30,   116,     0,     0,     0,     0,
       0,   505,   503,   498,   500,     0,   346,   352,   338,   349,
     355,   339,     0,     0,     0,   521,     0,   490,   489,   495,
     496,     0,   504,     0,     0,   502,   126,   124,     0,     0,
       0,     0,   334,     0,   193,   493,     0,   506,   507,   508,
     342,   348,   347,   343,   354,   353,   344,   351,   350,   345,
     357,   356,   196,   497
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   273,   274,   275,   276,   478,   479,   280,   281,
     282,   283,   286,   287,   288,   289,   292,   277,   294,   295,
     278,   297,   512,   480,   689,   481,   482,   483,   484,   505,
     485,   486,   487,   837,  1019,   488,   489,   490,   945,   842,
     491,   492,  1076,   493,   525,   940,   710,  1022,  1023,  1028,
     181,   182,   183,   184,   185,   186,   187,   392,   393,   878,
     880,   188,   396,   397,   426,   427,   777,   778,   779,   896,
     987,   189,   399,   400,   190,   884,   979,   885,   191,   192,
     193,   194,   623,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   733,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   466,   226,   227,   228,   229,
     335,   230,   231,   232,   233,   234,   673,   235,   236,   237,
     346,   544,   352,  1128,  1131,  1148,  1150,  1149,  1151,   967,
     238,   349,   239,   547,   240,   241,   242,   361,   558,   243,
     244,   245,   246,   369,   573,   806,   924,   757,   800,   922,
     801,   802,   247,   248,   249,   250,   251,   252,   253,   553,
     254,   574,   255,   603,   256,   576,   554,   577,   870,   824,
     639,   795,   640,   641,   642,   643,   644,   645,   913,   853,
     854,   855,   856,   857,  1116,  1039,   858,  1123,  1090,  1120,
    1145,   859,   860,   788,   998,  1067,  1002,   793,   527,   257,
     258,   259,   260,   261,   262,   263,   387,   388,   264,   265,
     266,   267,   569,   268,   269,   270
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -924
static const yytype_int16 yypact[] =
{
     746,  2148,   239,  2148,   239,   239,   239,   125,  5040,  -924,
    4260,   337,    60,    91,  3480,   155,  2370,  2370,  -924,  -924,
    -924,  1038,  -924,  -924,  -924,   164,   135,   249,   259,   115,
     282,   294,   142,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
     328,   351,   377,   387,   406,   456,   471,   483,   497,   582,
     604,   389,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   541,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   563,   576,
    -924,  -924,  -924,  -924,  -924,  -924,   622,  -924,    50,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   626,
     626,  -924,   619,  -924,  -924,   630,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   150,
    -924,  -924,  -924,  -924,  -924,   645,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,   284,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   106,  -924,  -924,
      11,  -924,  -924,  -924,  -924,  -924,   618,  -924,    24,  -924,
    -924,  -924,   665,  -924,  -924,   572,   567,  -924,  -924,  -924,
    -924,  -924,   554,   565,  -924,   602,   542,    72,    84,    85,
     364,  -924,   610,   601,   611,   606,  -924,  -924,  -924,   140,
    -924,  -924,  3480,   423,  -924,  -924,  -924,  4260,  -924,  -924,
    4260,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  2148,  -924,
    2148,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
     732,   589,   609,  -924,  -924,  -924,  2592,   593,  -924,  -924,
    -924,  -924,  -924,  2814,   593,  -924,  -924,  -924,  -924,  3036,
     593,  -924,  -924,   593,  -924,  -924,  -924,  3258,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   742,   743,
     747,   748,   749,  -924,  -924,  -924,  -924,   434,  -924,   752,
     423,  -924,  5040,  -924,  -924,  -924,   120,  -924,  4473,  2148,
    -924,   744,   750,  2148,    94,   751,  4867,  2148,  -924,   745,
    5040,  5040,   754,  2148,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  2148,  5040,    38,  -924,  2148,
    2148,  5040,   757,  -924,  5040,   789,   764,  -924,  5040,    75,
    -924,   124,  2148,  2148,  2148,   753,   755,  -924,  4686,   744,
    2148,   642,  -924,  -924,  2148,  -924,  -924,  2148,  2148,   622,
      50,  2148,   667,   664,  -924,  -924,   441,  -924,  2370,  2370,
    2370,  2370,  2370,  2370,  2370,  2370,  -924,  2370,  2370,  2370,
    2370,  2370,  2370,  2370,  2370,  3871,  2370,  2370,  2370,  2370,
    2370,  2370,  2370,  2370,  2370,  2370,  2370,   647,   656,   657,
     658,  1260,  -924,   423,  3480,  3480,   790,  -924,   790,  -924,
     790,   -13,  -924,  1482,   685,  5040,   596,   397,   760,   760,
     760,   760,  -924,   760,   760,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   760,  -924,  -924,  -924,  -924,   123,   536,   760,
     760,   760,   760,   760,   760,   760,   760,  -924,  -924,  -924,
     134,   380,   760,   760,   760,  -924,   760,   760,  -924,  -924,
    -924,  -924,  -924,   760,  -924,   760,  -924,  -924,  -924,  -924,
     197,  -924,  -924,   201,   365,   760,   760,   760,   760,   760,
     760,   760,   760,  -924,   709,   714,  -924,  -924,  -924,    55,
    -924,  -924,  -924,   392,  -924,  -924,   230,  1704,  -924,  -924,
     264,  -924,   294,   749,   772,   778,  -924,  -924,   779,   780,
    -924,   268,  1926,  -924,   781,  -924,   782,  -924,  -924,  -924,
     325,   384,   817,   541,  2148,   391,   429,   677,   622,   677,
    5040,    50,   677,   626,  2148,  2148,   411,   460,   437,  2148,
    2148,  -924,  -924,   516,  -924,  -924,   607,   768,   680,  -924,
    -924,  -924,  2148,   697,  -924,   565,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  2370,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  3871,  2148,  4086,   386,   386,   386,   386,   765,
     810,   812,   758,  -924,  -924,  -924,   732,    84,    84,   553,
      85,    85,    85,    85,   364,   364,  -924,  -924,  5213,  5213,
    5040,  5040,  -924,   445,  -924,  -924,  2148,   -31,  2148,  2148,
    2148,  -924,  -924,   530,    30,   799,   478,   715,   830,  5040,
     485,   546,    28,   368,  5040,  5377,    -2,   -11,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   596,   397,   420,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   536,   340,  -924,
     651,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   514,   416,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,   547,   455,
    -924,   720,  -924,  -924,  5040,  -924,  -924,  -924,   452,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,   453,  -924,  -924,  -924,
    -924,  2148,  -924,   713,  -924,  -924,  5213,   756,  -924,   666,
     849,  -924,   727,  -924,  -924,  -924,   712,   710,  -924,   463,
     472,  5040,  -924,  2148,  2148,  2148,  -924,   827,  -924,   535,
    2148,  -924,   821,   475,  -924,   769,   660,  -924,  -924,  -924,
    -924,  -924,   771,  -924,  3871,   652,  3871,   735,   823,   831,
    -924,   158,  -924,  -924,  -924,  -924,  -924,   846,  -924,  -924,
     339,   643,   648,  -924,  -924,  -924,  2148,  -924,   759,  -924,
     715,  -924,  -924,  -924,  -924,  5040,   835,  -924,  -924,  -924,
    -924,   737,   715,   707,   708,  -924,  -924,   847,   761,   839,
    5040,   693,   715,   773,  5040,   773,   595,   637,   597,  -924,
    -924,   763,   329,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  5377,   155,   155,  -924,  -924,  -924,
     842,  -924,  -924,  -924,  -924,  2148,  -924,   880,   666,   881,
     882,  2148,  2148,  3656,    62,  -924,  2148,  -924,  -924,   235,
    -924,   668,  -924,  2148,  -924,  -924,   762,   827,  -924,   386,
    -924,  -924,  2370,   812,   797,   590,  -924,   838,  2370,    14,
      14,   477,   477,  -924,  -924,   758,  3871,   853,   854,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  2148,  2148,  -924,   760,
     760,   677,   715,   564,  -924,   715,   715,   555,  -924,   130,
      66,   859,   728,   773,   715,   864,   862,   864,  -924,  -924,
    -924,  -924,  -924,   691,  -924,  -924,  -924,  -924,  -924,  -924,
      32,   694,  -924,   811,   839,   861,   865,   415,  -924,  -924,
    5040,   774,  5040,  2148,  -924,  -924,  5040,   784,   110,  -924,
    -924,   766,   866,  -924,  2148,  -924,   581,   767,  -924,    85,
    -924,  -924,  -924,  -924,    63,    21,  2370,  2370,   421,   718,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,    83,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    5040,  -924,   531,  -924,  2148,  2148,  5213,  -924,  -924,  -924,
    -924,   864,  -924,   715,   715,  -924,     6,   763,  -924,  -924,
      89,   701,    79,   155,   155,   337,  -924,  -924,  -924,  -924,
    -924,  2148,  -924,  -924,   770,  2148,  5040,  2148,  2148,  -924,
    -924,  -924,  -924,   715,  -924,  -924,  -924,  -924,  2370,  2370,
      85,   109,  -924,  -924,  2148,  -924,  -924,   677,   904,  -924,
     479,   491,    61,  -924,   773,  -924,  -924,    80,   763,   763,
    -924,  -924,  5213,  -924,  -924,   507,   560,   155,  -924,  5213,
    -924,   786,  -924,  -924,  -924,    85,    85,  2370,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,   864,   532,   533,   763,   719,
     537,  -924,  -924,   474,   474,    76,  -924,  -924,  -924,  -924,
    -924,  -924,   890,   788,  2148,    85,   808,  -924,  -924,    14,
    -924,   763,  -924,    89,    89,  -924,  -924,  -924,   267,   401,
     292,   407,  -924,  2148,  -924,  -924,   721,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -924,  -924,  -924,   649,   650,   646,  -256,  -233,  -924,   644,
     653,   655,  -924,   639,   640,   641,  -924,   654,   638,   659,
      35,   661,  -265,  -267,  -436,  -237,  -236,  -201,  -199,  -263,
    -235,  -218,  -203,  -924,  -924,  -182,  -165,  -924,  -825,  -924,
    -924,  -121,  -924,  -161,  -248,   -30,  -924,  -924,  -145,  -629,
       3,    12,  -239,  -924,  -924,  -924,   775,  -924,   347,  -924,
      58,   777,  -924,   348,  -924,   512,   161,    49,  -924,  -924,
    -924,  -924,   843,   352,  -924,  -924,  -924,    64,  -924,  -924,
     518,   515,  -924,  -290,  -924,   499,   291,  -439,   289,   300,
    -924,  -924,  -924,   741,  -924,  -924,  -924,  -924,   740,  -924,
    -924,  -924,    44,   295,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,    47,  -924,  -924,  -924,   299,  -924,  -442,  -924,  -437,
    -363,  -924,  -430,  -924,  -924,  -403,  -924,  -924,   -17,  -924,
     -94,  -924,  -543,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   813,   544,  -924,
    -924,  -924,  -924,  -924,  -924,   297,  -924,  -585,  -621,  -924,
    -924,   101,  -622,  -924,  -924,  -924,  -924,  -924,  -924,  -924,
    -924,  -924,   591,  -924,   592,  -924,   599,   551,   189,  -595,
     333,  -924,  -924,   172,   171,    54,   338,  -924,  -924,   179,
    -924,  -924,  -924,  -924,  -111,  -923,  -924,  -115,  -379,  -924,
    -924,  -924,  -924,  -612,  -859,   -20,    67,  -924,  -924,  -924,
    -924,  -924,  -924,  -924,  -924,  -924,  -924,   398,  -924,    73,
    -924,  -837,  -446,  -353,     1,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -130
static const yytype_int16 yytable[] =
{
     337,   729,   337,   635,   759,   555,   279,   762,   636,   336,
     650,   651,   652,   653,   957,   637,   501,   555,   578,   471,
     947,   472,   513,   582,   789,   790,   791,   499,   587,   675,
     536,   589,   535,   356,   540,   592,   803,   803,   805,   285,
     291,   296,   638,   690,   691,   692,   502,   693,   694,   542,
     500,   999,   514,   515,   518,   578,   695,   343,   350,   394,
     537,   515,   518,   699,   700,   701,   702,   703,   704,   705,
     706,   519,   412,   583,  1036,   453,   711,   712,   713,   519,
     714,   715,   503,   688,   504,   415,   520,   716,   516,   717,
     517,   843,   845,  1074,   520,   449,   538,   453,   539,   720,
     721,   722,   723,   724,   725,   726,   727,   521,   446,   447,
     593,  1024,  1025,  1086,   823,   521,  1024,  1025,  1031,  1056,
    1037,   453,  1068,   823,   522,   298,  1024,  1025,   524,  1024,
    1025,  1088,   522,   995,   803,   876,   524,   561,   667,  1020,
     617,   618,   619,   620,   621,   622,  1037,   624,   625,   626,
     627,   628,   629,   630,   631,   417,   450,   366,   562,   593,
     731,   844,   506,   550,  1069,   831,   367,   410,   523,   919,
     840,   606,   832,  1021,    15,   608,   541,   362,   609,   610,
     841,   920,   611,   357,   372,   732,   363,   811,  1085,   347,
     635,   461,   635,   373,   921,   636,   812,   636,   348,   995,
    1087,   404,   637,  1089,   637,   818,   358,   668,   669,   337,
     411,   883,   337,  1155,  1038,   359,   670,  1026,   833,   834,
     405,   406,   594,   996,   997,   930,   454,   760,  1119,   638,
    1092,   638,   448,   826,   672,  1113,   413,   934,   819,   368,
    1027,  1057,   395,   501,   978,   451,   452,   943,   454,   416,
    1146,  1121,  1122,  1093,   499,   584,   463,  1075,   982,  1115,
     351,   803,   977,   513,   467,   417,   536,   469,   535,  1107,
     540,   595,   454,   502,  1064,  1065,  1066,   500,   983,   494,
    1156,  1139,   736,  1118,   563,   542,   507,   988,   360,   996,
     997,   364,   526,   514,   515,   518,   537,   515,   518,   417,
     543,   365,   696,   417,  1157,   804,   804,   804,   804,   503,
     697,   504,   519,   707,  1160,   519,   739,  1024,  1025,   285,
     744,   697,   965,   966,   370,   291,   408,   520,   296,   516,
     520,   517,   538,   781,   539,   359,   371,  1012,  1048,  1166,
    1015,  1016,  1024,  1025,   337,   753,  1011,   374,   521,  1032,
     337,   521,   635,   549,   635,   764,   765,   636,   337,   636,
     417,   925,   337,   337,   637,   522,   637,   570,   522,   524,
     375,   556,   524,   776,   417,   560,   718,   749,   337,   571,
     719,   871,  1161,   337,   697,   580,   337,   336,   697,   506,
     337,   638,   336,   638,   941,   336,   376,   581,   946,   336,
     337,   585,   586,   804,   803,  1082,   377,  1167,   360,   523,
     861,   862,   541,  1094,   596,   597,   598,   958,   871,   417,
     959,   960,   961,   962,   271,   378,   417,   734,   272,   813,
     814,   815,   676,   698,   677,   735,   750,   646,  1083,  1084,
     385,    11,   863,   754,    12,    13,   417,   676,  1045,   677,
    1163,  1024,  1025,  1114,   766,   464,  1169,  1024,  1025,   344,
     345,   465,   931,   989,   417,  1024,  1025,   337,  1104,   994,
     803,  1125,   417,   663,   635,   379,   570,   803,  1133,   636,
     417,   755,   867,   676,   698,   677,   637,   417,   417,   768,
     380,   678,  1109,  1009,  1010,   417,  1147,   809,   417,   868,
    1095,  1096,   381,   767,   872,   873,   678,   417,   846,   847,
     417,   963,   874,   638,   417,   887,   382,  1164,   468,  1162,
    1165,  1168,  1171,  1170,   888,   470,   417,   899,   455,   456,
     804,  1111,  1046,  1047,   890,   891,   892,   679,   835,   545,
     546,   776,   678,  1112,   836,   680,   681,   682,   683,   684,
     386,   771,   679,  1126,  1132,  1127,  -129,  1070,  1071,   772,
     680,   681,   682,   683,   684,   816,  1078,  1136,  1136,   738,
     848,  -129,  1141,   817,  1079,  1137,  1138,   928,   422,   423,
    1142,   676,   337,   677,   746,   686,   687,   708,   679,   446,
     447,   336,   785,   786,   787,   709,   680,   681,   682,   683,
     684,   383,   708,   676,   698,   677,  1129,  1050,  1130,  1052,
     709,   769,   770,  1054,   389,   430,   431,   432,   433,   434,
     435,   849,   850,   384,   646,   851,   646,   390,   436,  1105,
    1106,   391,  1064,  1065,  1066,   398,   969,  1143,   708,  1144,
     678,   437,   974,   975,   852,   783,   709,   981,   821,   822,
     337,   337,   337,   337,   776,   827,   828,  1077,   284,   290,
     293,   402,   678,   676,   407,   677,   829,   830,  1135,   865,
     866,   337,   403,   804,   894,   895,   337,   839,   810,   414,
     570,   948,   949,   955,   956,   838,   679,  1007,  1008,   991,
     992,  1000,  1001,  1101,   680,   681,   682,   683,   684,   419,
     417,   420,   421,   418,   422,   423,  1013,  1014,   679,   428,
     438,   439,   440,   441,   442,   443,   680,   681,   682,   683,
     684,   429,   678,  1061,  1062,   950,   337,   685,   951,   952,
     953,   954,  1017,  1018,  1053,   445,   708,   647,   648,   804,
     846,   847,   654,   655,   709,  1060,   804,   904,   337,     1,
       2,     3,     4,     5,     6,   656,   657,   353,   354,   664,
     665,   807,   807,   337,  1158,  1159,   905,   457,   679,   458,
     459,   444,   906,   460,   473,   474,   680,   681,   682,   683,
     684,   475,   272,   548,   358,   362,   646,   685,   646,   366,
     372,   408,   588,   559,   566,   557,   572,   579,   590,   591,
     607,   613,   848,   612,   599,   658,   600,   659,   660,   661,
     674,   666,  1098,   688,   728,   740,  1100,   337,  1102,  1103,
     730,   741,   742,   743,   747,   748,   336,   751,   756,   774,
     773,   775,   337,   780,   794,  1108,   337,   796,   820,   825,
     823,   570,   864,   797,   875,   570,   907,   908,   909,   910,
     869,   911,   912,   849,   850,   792,   964,   851,   879,   881,
     882,   883,   893,   886,   898,   917,   900,   902,   916,   923,
     877,   901,   926,   918,   932,   337,   852,   927,   933,   935,
     936,   939,   937,   942,   929,   968,   938,   944,    81,   970,
     972,   984,   973,   990,    23,  1154,  1005,  1006,  1029,  1033,
    1030,  1034,  1035,   986,  1041,  1040,  1043,  1051,   646,  1059,
    1044,  1063,  1091,  1020,  1172,  1055,  1073,  1134,  1152,  1153,
    1058,  1099,  1037,  1140,   497,  1173,   495,   496,   508,   528,
     529,   531,   530,  1110,  1042,   758,   971,   509,   614,   761,
     510,   897,   985,   401,   616,   763,   615,   649,   980,   462,
    1049,  1097,   532,   605,   409,   564,   565,   533,   808,   604,
     889,   424,   337,   425,   337,   782,   903,   915,   337,   575,
    1004,   336,   784,   336,   914,  1117,  1124,   336,  1072,  1003,
     993,   752,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   337,     0,     0,     0,     0,     0,   337,     0,
       0,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1080,  1081,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,   337,     9,
       0,     0,     0,     0,     0,     0,     0,   336,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,   355,     0,     0,   337,     0,     0,     0,     0,     0,
       0,   337,     0,    22,    23,    24,    25,    26,    27,    28,
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
     173,   174,     0,   175,   176,   177,   178,   179,   180,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   662,     0,     0,    22,    23,    24,    25,    26,
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
     171,   172,   173,   174,     0,   175,   176,   177,   178,   179,
     180,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,   671,     0,     0,     0,     0,
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
     169,   170,   171,   172,   173,   174,     0,   175,   176,   177,
     178,   179,   180,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   737,     0,     0,    22,
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
     129,   130,   131,   132,   133,   134,   135,   136,   137,     0,
     138,   139,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,     0,   175,
     176,   177,   178,   179,   180,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   745,     0,
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
       0,   175,   176,   177,   178,   179,   180,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     173,   174,     0,   175,   176,   177,   178,   179,   180,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,    14,     0,    15,     0,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   319,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,   322,    87,   323,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   324,   325,   101,   326,   103,
       0,   104,   327,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   331,   168,   169,   332,
     171,   172,   173,   174,     0,   175,   333,   177,   334,   179,
     180,     8,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,    13,     0,    14,     0,    15,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,     0,
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
     131,   476,   133,   134,   135,   136,   137,     0,   138,   477,
     140,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,     0,   175,   176,   177,
     178,   179,   180,     8,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,     0,     0,    12,    13,     0,    14,     0,    15,     0,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
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
     129,   130,   131,   498,   133,   134,   135,   136,   137,     0,
     138,   477,   140,     0,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,     0,   175,
     176,   177,   178,   179,   180,     8,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,     0,     0,    12,    13,     0,    14,     0,
      15,     0,    16,    17,    18,     0,    19,    20,    21,     0,
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
     127,   128,   129,   130,   131,   511,   133,   134,   135,   136,
     137,     0,   138,   477,   140,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
       0,   175,   176,   177,   178,   179,   180,     8,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,     0,     0,    12,    13,     0,
      14,     0,    15,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     125,   126,   127,   128,   129,   130,   131,   534,   133,   134,
     135,   136,   137,     0,   138,   477,   140,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,     0,   175,   176,   177,   178,   179,   180,     8,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,     0,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   319,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
      78,    79,    80,     0,     0,    81,    82,    83,    84,     0,
       0,    85,   322,    87,   323,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   324,   325,   101,   326,   103,
       0,   104,   327,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   328,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   976,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   331,   168,   169,   332,
     171,   172,   173,   174,     0,   175,   333,   177,   334,   179,
     180,     0,     0,     0,   338,   339,    27,    28,   340,    30,
      31,   341,   798,    34,    35,    36,    37,    38,    39,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   319,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   320,   321,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   322,    87,
     323,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   324,   325,   101,   326,   103,     0,   104,   327,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   328,   120,   121,   122,   123,   124,   329,   799,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   342,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   331,   168,   169,   332,   171,   172,   173,   174,
       8,   175,   333,   177,   334,   179,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,   632,     0,     0,     0,     0,     0,     0,
       0,     0,   633,     0,     0,   634,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    52,    53,    54,    55,
      56,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   319,    70,     0,     0,     0,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,   320,   321,    80,     0,     0,    81,    82,     0,     0,
       0,     0,    85,   322,    87,   323,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   324,   325,   101,     0,
     103,     0,   104,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   328,   120,   121,
     122,   123,   124,   329,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     0,   138,   139,   140,
       0,     0,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   331,   168,   169,
     332,   171,   172,   173,   174,     8,   175,   333,   177,   334,
     179,   180,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,   632,     0,
       0,     0,     0,     0,     0,     0,     0,   633,     0,     0,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    35,    36,    37,    38,    39,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   319,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   320,   321,    80,     0,
       0,    81,    82,     0,     0,     0,     0,    85,   322,    87,
     323,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   324,   325,   101,     0,   103,     0,   104,     0,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   328,   120,   121,   122,   123,   124,   329,     0,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     9,   138,   139,   140,     0,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   331,   168,   169,   332,   171,   172,   173,   174,
       0,   175,   333,   177,   334,   179,   180,     0,   338,   339,
      27,    28,   340,    30,    31,   341,    33,    34,    35,    36,
      37,    38,    39,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   319,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
     320,   321,    80,     0,     0,     0,    82,    83,    84,     0,
       0,    85,   322,    87,   323,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   324,   325,   101,   326,   103,
       0,   104,   327,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   328,   120,   121,   122,
     123,   124,   329,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     342,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   331,   168,   169,   332,
     171,   172,   173,   174,   551,   175,   333,   177,   334,   179,
     180,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   552,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,   300,   301,   302,   303,   304,   305,   306,    33,
      34,    35,    36,    37,    38,    39,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   319,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   320,   321,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   322,    87,   323,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   324,   325,
     101,   326,   103,     0,   104,   327,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   328,
     120,   121,   122,   123,   124,   329,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   330,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   331,
     168,   169,   332,   171,   172,   173,   174,   601,   175,   333,
     177,   334,   179,   180,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   602,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   299,   300,   301,   302,   303,   304,
     305,   306,    33,    34,    35,    36,    37,    38,    39,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,    52,    53,    54,    55,    56,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,   319,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,   320,   321,    80,     0,
       0,     0,    82,     0,     0,     0,     0,    85,   322,    87,
     323,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   324,   325,   101,   326,   103,     0,   104,   327,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   328,   120,   121,   122,   123,   124,   329,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,     0,   138,   139,   140,     0,   330,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   331,   168,   169,   332,   171,   172,   173,   174,
     567,   175,   333,   177,   334,   179,   180,     0,     0,     0,
       0,     0,     0,     0,     0,   299,   300,   301,   302,   303,
     304,   305,   306,    33,    34,    35,    36,    37,    38,    39,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     319,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   320,   321,    80,
       0,     0,   568,    82,     0,     0,     0,     0,    85,   322,
      87,   323,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   324,   325,   101,   326,   103,     0,   104,   327,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   328,   120,   121,   122,   123,   124,   329,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,   330,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   331,   168,   169,   332,   171,   172,   173,
     174,     0,   175,   333,   177,   334,   179,   180,   299,   300,
     301,   302,   303,   304,   305,   306,    33,    34,    35,    36,
      37,    38,    39,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,    52,    53,    54,    55,    56,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,   319,    70,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
     320,   321,    80,     0,     0,     0,    82,     0,     0,     0,
       0,    85,   322,    87,   323,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   324,   325,   101,   326,   103,
       0,   104,   327,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   328,   120,   121,   122,
     123,   124,   329,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,     0,   138,   139,   140,     0,
     330,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   331,   168,   169,   332,
     171,   172,   173,   174,     0,   175,   333,   177,   334,   179,
     180,   338,   339,    27,    28,   340,    30,    31,   341,   798,
      34,    35,    36,    37,    38,    39,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    52,    53,
      54,    55,    56,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,   319,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,   320,   321,    80,     0,     0,     0,    82,
       0,     0,     0,     0,    85,   322,    87,   323,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   324,   325,
     101,   326,   103,     0,   104,   327,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   328,
     120,   121,   122,   123,   124,   329,   799,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     0,   138,
     139,   140,     0,   342,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   331,
     168,   169,   332,   171,   172,   173,   174,     0,   175,   333,
     177,   334,   179,   180,    34,    35,    36,    37,    38,    39,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
     319,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,   320,   321,    80,
       0,     0,     0,    82,     0,     0,     0,     0,    85,   322,
      87,   323,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   324,   325,   101,     0,   103,     0,   104,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   328,   120,   121,   122,   123,   124,   329,
       0,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     0,   138,   139,   140,     0,     0,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   331,   168,   169,   332,   171,   172,   173,
     174,     0,   175,   333,   177,   334,   179,   180
};

static const yytype_int16 yycheck[] =
{
       8,   544,    10,   445,   589,   358,     3,   592,   445,     8,
     449,   450,   451,   452,   851,   445,   283,   370,   371,   258,
     845,   260,   289,   386,   636,   637,   638,   283,   391,   475,
     297,   394,   297,    21,   297,   398,   658,   659,   659,     4,
       5,     6,   445,   479,   480,   481,   283,   483,   484,   297,
     283,   910,   289,   289,   289,   408,   492,    10,    14,     9,
     297,   297,   297,   499,   500,   501,   502,   503,   504,   505,
     506,   289,    61,    35,    42,    12,   512,   513,   514,   297,
     516,   517,   283,    53,   283,    61,   289,   523,   289,   525,
     289,   686,   687,    10,   297,    11,   297,    12,   297,   535,
     536,   537,   538,   539,   540,   541,   542,   289,    36,    37,
      35,    50,    51,  1036,   125,   297,    50,    51,   943,     9,
     114,    12,   101,   125,   289,     0,    50,    51,   289,    50,
      51,    42,   297,   119,   756,   756,   297,    43,   151,     9,
     430,   431,   432,   433,   434,   435,   114,   437,   438,   439,
     440,   441,   442,   443,   444,    35,    72,    42,    64,    35,
     105,   172,   283,    43,   143,   137,    51,    61,   289,    11,
     172,   410,   144,    43,    34,   414,   297,    42,   417,   418,
     182,    23,   421,    19,    42,   130,    51,   218,   182,   129,
     632,    51,   634,    51,    36,   632,   227,   634,   107,   119,
    1037,    51,   632,   114,   634,   175,    42,   220,   221,   217,
     104,   149,   220,  1136,   182,    51,   229,   151,   190,   191,
      70,    71,   147,   209,   210,   820,   163,   590,  1087,   632,
     151,   634,   160,   679,   473,   174,   225,   832,   674,   124,
     174,   131,   192,   510,   182,   161,   162,   842,   163,   225,
     174,  1088,  1089,   174,   510,   217,   212,   174,    23,  1084,
     105,   883,   883,   530,   217,    35,   533,   220,   533,   160,
     533,   147,   163,   510,   211,   212,   213,   510,    43,   276,
    1139,  1118,    52,   203,   190,   533,   283,   899,   124,   209,
     210,    42,   289,   530,   530,   530,   533,   533,   533,    35,
     297,    42,   179,    35,  1141,   658,   659,   660,   661,   510,
     187,   510,   530,   179,    47,   533,    52,    50,    51,   284,
      52,   187,   865,   866,    42,   290,    42,   530,   293,   530,
     533,   530,   533,   623,   533,    51,    42,   932,   967,    47,
     935,   936,    50,    51,   352,   584,   931,    19,   530,   944,
     358,   533,   794,   352,   796,   594,   595,   794,   366,   796,
      35,    22,   370,   371,   794,   530,   796,   366,   533,   530,
      19,   359,   533,   612,    35,   363,   179,    52,   386,   367,
     179,   734,   115,   391,   187,   373,   394,   386,   187,   510,
     398,   794,   391,   796,   840,   394,    19,   385,   844,   398,
     408,   389,   390,   756,  1026,  1026,    19,   115,   124,   530,
      70,    71,   533,  1042,   402,   403,   404,    88,   771,    35,
      91,    92,    93,    94,   185,    19,    35,    35,   189,   668,
     669,   670,    67,    68,    69,    43,    52,   445,  1033,  1034,
      51,    26,   102,    52,    29,    30,    35,    67,    33,    69,
      49,    50,    51,  1082,    43,    32,    49,    50,    51,   122,
     123,    38,   825,   902,    35,    50,    51,   475,  1063,   908,
    1092,  1092,    35,   461,   916,    19,   475,  1099,  1099,   916,
      35,    52,    27,    67,    68,    69,   916,    35,    35,    52,
      19,   126,  1077,   929,   930,    35,  1125,    52,    35,    44,
    1043,  1044,    19,    43,    52,    52,   126,    35,    88,    89,
      35,   182,   751,   916,    35,    52,    19,   116,   219,  1148,
    1149,  1150,  1151,   116,    52,   226,    35,    52,   164,   165,
     883,    52,   117,   118,   773,   774,   775,   172,   170,   105,
     106,   780,   126,    52,   176,   180,   181,   182,   183,   184,
       9,    35,   172,    46,  1097,    48,   191,   996,   997,    43,
     180,   181,   182,   183,   184,    35,    35,    35,    35,   557,
     150,   191,    35,    43,    43,    43,    43,   816,   137,   138,
      43,    67,   590,    69,   572,   188,   189,   222,   172,    36,
      37,   590,   206,   207,   208,   230,   180,   181,   182,   183,
     184,    19,   222,    67,    68,    69,    46,   970,    48,   972,
     230,   599,   600,   976,    51,    13,    14,    15,    16,    17,
      18,   201,   202,    19,   632,   205,   634,    51,    26,  1068,
    1069,     9,   211,   212,   213,     9,   875,   163,   222,   165,
     126,    39,   881,   882,   224,   633,   230,   886,   170,   171,
     658,   659,   660,   661,   893,   170,   171,  1020,     4,     5,
       6,    42,   126,    67,    19,    69,   120,   121,  1107,   122,
     123,   679,    42,  1026,   139,   140,   684,   685,   666,    61,
     679,    86,    87,    86,    87,   684,   172,   926,   927,    99,
     100,   214,   215,  1056,   180,   181,   182,   183,   184,   132,
      35,   134,   135,   131,   137,   138,   142,   143,   172,   155,
     108,   109,   110,   111,   112,   113,   180,   181,   182,   183,
     184,   156,   126,   142,   143,    88,   734,   191,    91,    92,
      93,    94,   177,   178,   973,   193,   222,   446,   447,  1092,
      88,    89,   453,   454,   230,   984,  1099,    95,   756,     3,
       4,     5,     6,     7,     8,   455,   456,    16,    17,   464,
     465,   660,   661,   771,  1143,  1144,   114,   157,   172,   168,
     159,   169,   120,   167,    42,   186,   180,   181,   182,   183,
     184,   172,   189,    31,    42,    42,   794,   191,   796,    42,
      42,    42,    35,    43,    43,    51,    51,    43,     9,    35,
     158,   137,   150,   136,    51,   158,    51,   151,   151,   151,
     125,    21,  1051,    53,   105,    43,  1055,   825,  1057,  1058,
     106,    43,    43,    43,    43,    43,   825,    10,   151,    61,
     223,   151,   840,   136,    24,  1074,   844,    25,    39,     9,
     125,   840,   191,    85,   131,   844,   194,   195,   196,   197,
     130,   199,   200,   201,   202,    90,   864,   205,   192,    10,
     133,   149,    35,   153,    43,    42,    97,    96,   133,    23,
     114,   211,   229,    42,    39,   883,   224,   229,   141,   172,
     172,    42,    35,   190,   125,    43,   125,   114,   125,     9,
       9,   223,    10,    96,    56,  1134,    43,    43,    39,    35,
     172,    39,   211,   141,    93,   211,    45,   133,   916,    43,
      45,   144,   211,     9,  1153,   131,   198,   131,    28,   131,
     154,   151,   114,   204,   278,   204,   277,   277,   284,   290,
     290,   293,   291,  1078,   964,   588,   878,   284,   426,   591,
     285,   780,   893,   100,   429,   593,   428,   448,   884,   209,
     967,  1045,   293,   409,   141,   364,   364,   296,   661,   408,
     771,   186,   970,   186,   972,   632,   794,   796,   976,   370,
     916,   970,   634,   972,   795,  1086,  1091,   976,   998,   912,
     907,   583,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1020,    -1,    -1,    -1,    -1,    -1,  1026,    -1,
      -1,  1020,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1024,  1025,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,  1056,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1056,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    43,    -1,    -1,  1092,    -1,    -1,    -1,    -1,    -1,
      -1,  1099,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,   125,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    -1,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,    -1,    -1,   125,   126,   127,
     128,    -1,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,   186,   187,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,   125,
     126,   127,   128,    -1,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,   125,   126,   127,   128,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,   125,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    -1,    36,    37,
      38,    -1,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,    -1,    -1,    -1,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,    -1,
      -1,    -1,   120,   121,   122,    -1,    -1,   125,   126,   127,
     128,    -1,    -1,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,   186,   187,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,    -1,   225,   226,   227,
     228,   229,   230,     9,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    -1,
      36,    37,    38,    -1,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,    -1,   108,   109,   110,   111,   112,   113,   114,    -1,
      -1,    -1,    -1,    -1,   120,   121,   122,    -1,    -1,   125,
     126,   127,   128,    -1,    -1,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
     186,   187,   188,    -1,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,    -1,   225,
     226,   227,   228,   229,   230,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    -1,    36,    37,    38,    -1,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,   125,   126,   127,   128,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    -1,    36,    37,    38,    -1,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,    -1,   108,   109,   110,   111,
     112,   113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,
     122,    -1,    -1,   125,   126,   127,   128,    -1,    -1,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,    -1,   186,   187,   188,    -1,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,    -1,   225,   226,   227,   228,   229,   230,     9,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,   125,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,     9,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
       9,   225,   226,   227,   228,   229,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    54,    55,    56,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    -1,    -1,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,
      -1,   120,   121,   122,    -1,    -1,   125,   126,    -1,    -1,
      -1,    -1,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,    -1,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
      -1,    -1,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,     9,   225,   226,   227,   228,
     229,   230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,   125,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    -1,   149,    -1,   151,    -1,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,    -1,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    11,   186,   187,   188,    -1,    -1,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      -1,   225,   226,   227,   228,   229,   230,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,   127,   128,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    11,   225,   226,   227,   228,   229,
     230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    11,   225,   226,
     227,   228,   229,   230,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,    -1,    -1,    -1,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,    -1,
      -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,    -1,   186,   187,   188,    -1,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
      43,   225,   226,   227,   228,   229,   230,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,   125,   126,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,   225,   226,   227,   228,   229,   230,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    -1,    -1,    -1,   108,   109,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,    -1,
     120,   121,   122,    -1,    -1,    -1,   126,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,    -1,   225,   226,   227,   228,   229,
     230,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,    -1,    -1,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,    -1,
      -1,    -1,    -1,   120,   121,   122,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,    -1,   225,   226,
     227,   228,   229,   230,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,    -1,    -1,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,    -1,   120,   121,   122,
      -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
      -1,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,    -1,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,    -1,   225,   226,   227,   228,   229,   230
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   232,     9,    11,
      20,    26,    29,    30,    32,    34,    36,    37,    38,    40,
      41,    42,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   108,   109,   110,   111,   112,   113,   114,   120,   121,
     122,   125,   126,   127,   128,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   186,   187,
     188,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   225,   226,   227,   228,   229,
     230,   281,   282,   283,   284,   285,   286,   287,   292,   302,
     305,   309,   310,   311,   312,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   347,   348,   349,   350,
     352,   353,   354,   355,   356,   358,   359,   360,   371,   373,
     375,   376,   377,   380,   381,   382,   383,   393,   394,   395,
     396,   397,   398,   399,   401,   403,   405,   440,   441,   442,
     443,   444,   445,   446,   449,   450,   451,   452,   454,   455,
     456,   185,   189,   233,   234,   235,   236,   248,   251,   281,
     239,   240,   241,   242,   248,   251,   243,   244,   245,   246,
     248,   251,   247,   248,   249,   250,   251,   252,     0,    58,
      59,    60,    61,    62,    63,    64,    65,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   103,
     120,   121,   132,   134,   145,   146,   148,   152,   166,   172,
     190,   216,   219,   226,   228,   351,   455,   456,    58,    59,
      62,    65,   190,   342,   122,   123,   361,   129,   107,   372,
     333,   105,   363,   324,   324,    43,   282,    19,    42,    51,
     124,   378,    42,    51,    42,    42,    42,    51,   124,   384,
      42,    42,    42,    51,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    51,     9,   447,   448,    51,
      51,     9,   288,   289,     9,   192,   293,   294,     9,   303,
     304,   303,    42,    42,    51,    70,    71,    19,    42,   378,
      61,   104,    61,   225,    61,    61,   225,    35,   131,   132,
     134,   135,   137,   138,   287,   292,   295,   296,   155,   156,
      13,    14,    15,    16,    17,    18,    26,    39,   108,   109,
     110,   111,   112,   113,   169,   193,    36,    37,   160,    11,
      72,   161,   162,    12,   163,   164,   165,   157,   168,   159,
     167,    51,   329,   333,    32,    38,   346,   342,   346,   342,
     346,   283,   283,    42,   186,   172,   179,   187,   237,   238,
     254,   256,   257,   258,   259,   261,   262,   263,   266,   267,
     268,   271,   272,   274,   281,   234,   235,   236,   179,   237,
     238,   254,   256,   258,   259,   260,   272,   281,   240,   241,
     242,   179,   253,   254,   256,   257,   258,   259,   261,   262,
     263,   266,   267,   272,   274,   275,   281,   439,   244,   245,
     246,   249,   250,   252,   179,   253,   254,   256,   258,   259,
     260,   272,   275,   281,   362,   105,   106,   374,    31,   455,
      43,    11,    43,   400,   407,   454,   282,    51,   379,    43,
     282,    43,    64,   190,   403,   405,    43,    43,   125,   453,
     455,   282,    51,   385,   402,   407,   406,   408,   454,    43,
     282,   282,   351,    35,   217,   282,   282,   351,    35,   351,
       9,    35,   351,    35,   147,   147,   282,   282,   282,    51,
      51,    11,    43,   404,   408,   379,   283,   158,   283,   283,
     283,   283,   136,   137,   296,   311,   312,   314,   314,   314,
     314,   314,   314,   313,   314,   314,   314,   314,   314,   314,
     314,   314,    42,    51,    54,   348,   350,   353,   356,   411,
     413,   414,   415,   416,   417,   418,   456,   317,   317,   316,
     318,   318,   318,   318,   319,   319,   320,   320,   158,   151,
     151,   151,    52,   282,   334,   334,    21,   151,   220,   221,
     229,    43,   283,   357,   125,   453,    67,    69,   126,   172,
     180,   181,   182,   183,   184,   191,   188,   189,    53,   255,
     255,   255,   255,   255,   255,   255,   179,   187,    68,   255,
     255,   255,   255,   255,   255,   255,   255,   179,   222,   230,
     277,   255,   255,   255,   255,   255,   255,   255,   179,   179,
     255,   255,   255,   255,   255,   255,   255,   255,   105,   363,
     106,   105,   130,   330,    35,    43,    52,    52,   282,    52,
      43,    43,    43,    43,    52,    52,   282,    43,    43,    52,
      52,    10,   448,   283,    52,    52,   151,   388,   289,   388,
     351,   294,   388,   304,   283,   283,    43,    43,    52,   282,
     282,    35,    43,   223,    61,   151,   283,   297,   298,   299,
     136,   314,   411,   282,   417,   206,   207,   208,   434,   434,
     434,   434,    90,   438,    24,   412,    25,    85,    66,   173,
     389,   391,   392,   393,   454,   389,   386,   392,   386,    52,
     282,   218,   227,   283,   283,   283,    35,    43,   175,   255,
      39,   170,   171,   125,   410,     9,   453,   170,   171,   120,
     121,   137,   144,   190,   191,   170,   176,   264,   455,   456,
     172,   182,   270,   410,   172,   410,    88,    89,   150,   201,
     202,   205,   224,   420,   421,   422,   423,   424,   427,   432,
     433,    70,    71,   102,   191,   122,   123,    27,    44,   130,
     409,   454,    52,    52,   283,   131,   389,   114,   290,   192,
     291,    10,   133,   149,   306,   308,   153,    52,    52,   409,
     283,   283,   283,    35,   139,   140,   300,   297,    43,    52,
      97,   211,    96,   414,    95,   114,   120,   194,   195,   196,
     197,   199,   200,   419,   420,   415,   133,    42,    42,    11,
      23,    36,   390,    23,   387,    22,   229,   229,   283,   125,
     410,   351,    39,   141,   410,   172,   172,    35,   125,    42,
     276,   453,   190,   410,   114,   269,   453,   269,    86,    87,
      88,    91,    92,    93,    94,    86,    87,   452,    88,    91,
      92,    93,    94,   182,   456,   363,   363,   370,    43,   283,
       9,   291,     9,    10,   283,   283,     9,   389,   182,   307,
     308,   283,    23,    43,   223,   298,   141,   301,   434,   318,
      96,    99,   100,   450,   318,   119,   209,   210,   435,   435,
     214,   215,   437,   437,   416,    43,    43,   283,   283,   255,
     255,   388,   410,   142,   143,   410,   410,   177,   178,   265,
       9,    43,   278,   279,    50,    51,   151,   174,   280,    39,
     172,   269,   410,    35,    39,   211,    42,   114,   182,   426,
     211,    93,   276,    45,    45,    33,   117,   118,   280,   359,
     351,   133,   351,   283,   351,   131,     9,   131,   154,    43,
     283,   142,   143,   144,   211,   212,   213,   436,   101,   143,
     318,   318,   436,   198,    10,   174,   273,   351,    35,    43,
     282,   282,   389,   410,   410,   182,   426,   452,    42,   114,
     429,   211,   151,   174,   280,   363,   363,   361,   283,   151,
     283,   351,   283,   283,   410,   318,   318,   160,   283,   388,
     279,    52,    52,   174,   280,   269,   425,   425,   203,   435,
     430,   452,   452,   428,   428,   389,    46,    48,   364,    46,
      48,   365,   363,   389,   131,   318,    35,    43,    43,   452,
     204,    35,    43,   163,   165,   431,   174,   280,   366,   368,
     367,   369,    28,   131,   283,   426,   435,   452,   429,   429,
      47,   115,   280,    49,   116,   280,    47,   115,   280,    49,
     116,   280,   283,   204
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
        case 15:
#line 563 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 16:
#line 567 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 17:
#line 571 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 18:
#line 575 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 19:
#line 579 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 20:
#line 583 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 21:
#line 589 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 29:
#line 615 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), (yyvsp[(5) - (5)].astNode), NULL, false, MEMMGR));
  }
    break;

  case 30:
#line 619 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), false, MEMMGR));
  }
    break;

  case 31:
#line 623 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (5)].str), (yyvsp[(4) - (5)].argSpecs), NULL, NULL, false, MEMMGR));
  }
    break;

  case 32:
#line 627 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(3) - (7)].str), (yyvsp[(4) - (7)].argSpecs), NULL, (yyvsp[(6) - (7)].sequenceType), false, MEMMGR));
  }
    break;

  case 40:
#line 654 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 41:
#line 658 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 42:
#line 662 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 43:
#line 666 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 44:
#line 670 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 45:
#line 674 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 46:
#line 680 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 47:
#line 684 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 55:
#line 711 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 56:
#line 715 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 57:
#line 719 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 58:
#line 723 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 59:
#line 727 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 60:
#line 731 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 61:
#line 737 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 66:
#line 756 "../src/parser/XQParser.y"
    {
    if(!XPath2Utils::equals((yyvsp[(3) - (4)].str),sz1_0))
      yyerror((yylsp[(2) - (4)]), "This XQuery processor only supports version 1.0 of the specs [err:XQST0031]");
  }
    break;

  case 67:
#line 761 "../src/parser/XQParser.y"
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

  case 70:
#line 790 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 72:
#line 804 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 73:
#line 808 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 74:
#line 812 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 75:
#line 816 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 76:
#line 820 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 77:
#line 824 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 78:
#line 830 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 79:
#line 834 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 91:
#line 866 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 92:
#line 874 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 93:
#line 879 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 94:
#line 888 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 95:
#line 893 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 96:
#line 902 "../src/parser/XQParser.y"
    {
    // validate the QName
    QualifiedName qName((yyvsp[(3) - (4)].str));
    const XMLCh* prefix = qName.getPrefix();
    if(prefix==NULL || *prefix==0)
      yyerror((yylsp[(3) - (4)]), "The option name must have a prefix [err:XPST0081]");

    try {
      LOCATION((yylsp[(3) - (4)]), loc);
      CONTEXT->getUriBoundToPrefix(prefix, &loc);
    }
    catch(NamespaceLookupException&) {
      yyerror((yylsp[(3) - (4)]), "The option name is using an undefined namespace prefix [err:XPST0081]");
    }
  }
    break;

  case 97:
#line 922 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:
#line 929 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 99:
#line 934 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 100:
#line 943 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 101:
#line 948 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 102:
#line 957 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 103:
#line 967 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 104:
#line 971 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 105:
#line 979 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 106:
#line 983 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 107:
#line 991 "../src/parser/XQParser.y"
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

  case 108:
#line 1007 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 109:
#line 1016 "../src/parser/XQParser.y"
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

  case 110:
#line 1028 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 111:
#line 1036 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 112:
#line 1040 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 113:
#line 1045 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 114:
#line 1054 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 115:
#line 1058 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 116:
#line 1066 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 117:
#line 1076 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 118:
#line 1088 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 119:
#line 1095 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 120:
#line 1099 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 121:
#line 1107 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 122:
#line 1112 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 123:
#line 1122 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].boolean), MEMMGR));
    }
    break;

  case 124:
#line 1126 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), MEMMGR));
    }
    break;

  case 125:
#line 1130 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].boolean), MEMMGR));
    }
    break;

  case 126:
#line 1134 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].boolean), MEMMGR));
    }
    break;

  case 127:
#line 1141 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 128:
#line 1145 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 129:
#line 1151 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 130:
#line 1155 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 131:
#line 1163 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 132:
#line 1168 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 133:
#line 1178 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 134:
#line 1186 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 135:
#line 1190 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 136:
#line 1198 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 137:
#line 1211 "../src/parser/XQParser.y"
    {
      ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
      if(prevExpr->getType()==ASTNode::PARENTHESIZED)
      {
        ((XQParenthesizedExpr *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
      }
      else
      {
        XQParenthesizedExpr *dis = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQParenthesizedExpr(MEMMGR));
        dis->addItem((yyvsp[(1) - (3)].astNode));
        dis->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = dis;
      }
    }
    break;

  case 149:
#line 1247 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tmp = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple()));

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tmp, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 150:
#line 1258 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), setLastAncestor((yyvsp[(2) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode)));
    }
    break;

  case 151:
#line 1262 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 152:
#line 1266 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 154:
#line 1274 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 155:
#line 1280 "../src/parser/XQParser.y"
    {
      REJECT_NOT_XQUERY(FlworExprForLetList, (yylsp[(2) - (2)]));

      (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
    }
    break;

  case 158:
#line 1293 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 159:
#line 1300 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 161:
#line 1308 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 162:
#line 1319 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 163:
#line 1323 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 164:
#line 1333 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 165:
#line 1337 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 166:
#line 1347 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 167:
#line 1354 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 169:
#line 1362 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (6)].str), WRAP((yylsp[(3) - (6)]), new (MEMMGR) XQTreatAs((yyvsp[(6) - (6)].astNode), (yyvsp[(3) - (6)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 170:
#line 1366 "../src/parser/XQParser.y"
    {
  }
    break;

  case 171:
#line 1373 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 172:
#line 1381 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 173:
#line 1386 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 174:
#line 1394 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 176:
#line 1404 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 177:
#line 1411 "../src/parser/XQParser.y"
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

  case 178:
#line 1426 "../src/parser/XQParser.y"
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

  case 179:
#line 1442 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 180:
#line 1446 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 181:
#line 1450 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 182:
#line 1457 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 183:
#line 1466 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 184:
#line 1470 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 185:
#line 1479 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 186:
#line 1487 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple()));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 187:
#line 1498 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 189:
#line 1506 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 190:
#line 1517 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 191:
#line 1524 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 192:
#line 1529 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 193:
#line 1537 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 194:
#line 1541 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 195:
#line 1549 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 196:
#line 1553 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 197:
#line 1561 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 198:
#line 1569 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 200:
#line 1583 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 202:
#line 1602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 203:
#line 1606 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 204:
#line 1609 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 205:
#line 1610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 206:
#line 1614 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 207:
#line 1618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 208:
#line 1622 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 209:
#line 1626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 210:
#line 1630 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 211:
#line 1634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 212:
#line 1638 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 213:
#line 1642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 214:
#line 1646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 215:
#line 1650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 216:
#line 1654 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 217:
#line 1658 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 219:
#line 1667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) FTContains((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].ftselection), NULL, MEMMGR));
  }
    break;

  case 220:
#line 1671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].ftselection), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 222:
#line 1680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 224:
#line 1689 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 225:
#line 1693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 227:
#line 1702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 228:
#line 1706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 229:
#line 1710 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 230:
#line 1714 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 232:
#line 1723 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 233:
#line 1727 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 235:
#line 1736 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 236:
#line 1740 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 238:
#line 1749 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 240:
#line 1758 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 242:
#line 1768 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 244:
#line 1777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 246:
#line 1786 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 247:
#line 1792 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 252:
#line 1813 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 253:
#line 1817 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 254:
#line 1821 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 255:
#line 1829 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 256:
#line 1836 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 259:
#line 1849 "../src/parser/XQParser.y"
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

  case 261:
#line 1870 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 263:
#line 1879 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 264:
#line 1885 "../src/parser/XQParser.y"
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

  case 266:
#line 1910 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 267:
#line 1924 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 268:
#line 1930 "../src/parser/XQParser.y"
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

  case 272:
#line 1951 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 273:
#line 1955 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addReversePredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQDocumentOrder((yyval.astNode), MEMMGR));
  }
    break;

  case 274:
#line 1964 "../src/parser/XQParser.y"
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

  case 276:
#line 1987 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 277:
#line 1991 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 278:
#line 1995 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 279:
#line 1999 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 280:
#line 2003 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 281:
#line 2007 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 282:
#line 2011 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 283:
#line 2015 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 284:
#line 2023 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 285:
#line 2031 "../src/parser/XQParser.y"
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

  case 286:
#line 2048 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 288:
#line 2065 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 289:
#line 2069 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 290:
#line 2073 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 291:
#line 2077 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 292:
#line 2081 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 293:
#line 2089 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 294:
#line 2101 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 296:
#line 2111 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 298:
#line 2123 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 299:
#line 2130 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 300:
#line 2137 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 301:
#line 2148 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 302:
#line 2157 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 303:
#line 2161 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 317:
#line 2189 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 319:
#line 2200 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 320:
#line 2204 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 321:
#line 2212 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 322:
#line 2220 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 323:
#line 2230 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 324:
#line 2240 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 325:
#line 2244 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
  }
    break;

  case 326:
#line 2251 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 327:
#line 2256 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 328:
#line 2265 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 329:
#line 2269 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 333:
#line 2282 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 334:
#line 2288 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*isAttr*/false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 337:
#line 2301 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 338:
#line 2305 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 339:
#line 2314 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*isAttr*/true, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 342:
#line 2330 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 343:
#line 2334 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 344:
#line 2341 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 345:
#line 2345 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 346:
#line 2355 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 347:
#line 2359 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 348:
#line 2364 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 349:
#line 2377 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 350:
#line 2381 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 351:
#line 2385 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 352:
#line 2401 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 353:
#line 2405 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 354:
#line 2410 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 355:
#line 2423 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 356:
#line 2427 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 357:
#line 2431 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);

    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 358:
#line 2451 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 359:
#line 2455 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 360:
#line 2460 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 361:
#line 2465 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING);

    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(ic, MEMMGR)));
  }
    break;

  case 362:
#line 2475 "../src/parser/XQParser.y"
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

  case 363:
#line 2491 "../src/parser/XQParser.y"
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

  case 364:
#line 2505 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 366:
#line 2514 "../src/parser/XQParser.y"
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

  case 368:
#line 2536 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 375:
#line 2559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 376:
#line 2567 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 377:
#line 2575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*isAttr*/false, MEMMGR));
  }
    break;

  case 378:
#line 2579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 379:
#line 2587 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 380:
#line 2591 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 381:
#line 2600 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 382:
#line 2608 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 383:
#line 2616 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 384:
#line 2624 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 385:
#line 2631 "../src/parser/XQParser.y"
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

  case 386:
#line 2644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 387:
#line 2651 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 388:
#line 2655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 389:
#line 2663 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 390:
#line 2673 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 391:
#line 2677 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 392:
#line 2685 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 393:
#line 2689 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 394:
#line 2699 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 395:
#line 2706 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 396:
#line 2715 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 397:
#line 2717 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 398:
#line 2719 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 399:
#line 2721 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 400:
#line 2727 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 402:
#line 2732 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 413:
#line 2764 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 414:
#line 2772 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 415:
#line 2776 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 416:
#line 2781 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 417:
#line 2790 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 418:
#line 2798 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 419:
#line 2806 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 420:
#line 2810 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 421:
#line 2814 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 422:
#line 2822 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 423:
#line 2826 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 424:
#line 2830 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 426:
#line 2839 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 427:
#line 2847 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 429:
#line 2860 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 430:
#line 2864 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 431:
#line 2868 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 432:
#line 2872 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 434:
#line 2882 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 435:
#line 2890 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 440:
#line 2910 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 441:
#line 2922 "../src/parser/XQParser.y"
    {
    // TBD FTSelectionOptions and weight
    (yyval.ftselection) = (yyvsp[(1) - (4)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (4)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (4)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete (yyvsp[(2) - (4)].ftoptionlist);
  }
    break;

  case 442:
#line 2934 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);

    VectorOfFTOptions *options = (yyvsp[(2) - (2)].ftoptionlist);
    for(VectorOfFTOptions::iterator i = options->begin();
        i != options->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
    delete options;
  }
    break;

  case 443:
#line 2949 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
  }
    break;

  case 444:
#line 2953 "../src/parser/XQParser.y"
    {
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 445:
#line 2957 "../src/parser/XQParser.y"
    {
    if((yyvsp[(2) - (2)].ftoption) != NULL)
      (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
    (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
  }
    break;

  case 446:
#line 2967 "../src/parser/XQParser.y"
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

  case 448:
#line 2983 "../src/parser/XQParser.y"
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

  case 450:
#line 2999 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 452:
#line 3008 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 454:
#line 3017 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
  }
    break;

  case 456:
#line 3026 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 457:
#line 3030 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 458:
#line 3034 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 459:
#line 3038 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 460:
#line 3042 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 461:
#line 3056 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 462:
#line 3060 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 463:
#line 3064 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 464:
#line 3068 "../src/parser/XQParser.y"
    {
    std::cerr << "occurs" << std::endl;
    (yyval.ftoption) = NULL;
  }
    break;

  case 465:
#line 3073 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 466:
#line 3077 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 467:
#line 3081 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 468:
#line 3085 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 469:
#line 3089 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 477:
#line 3117 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 478:
#line 3121 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 479:
#line 3125 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 480:
#line 3129 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 481:
#line 3140 "../src/parser/XQParser.y"
    {
    std::cerr << "with diacritics" << std::endl;
  }
    break;

  case 482:
#line 3144 "../src/parser/XQParser.y"
    {
    std::cerr << "without diacritics" << std::endl;
  }
    break;

  case 483:
#line 3148 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 484:
#line 3152 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 485:
#line 3160 "../src/parser/XQParser.y"
    {
    std::cerr << "with stemming" << std::endl;
  }
    break;

  case 486:
#line 3164 "../src/parser/XQParser.y"
    {
    std::cerr << "without stemming" << std::endl;
  }
    break;

  case 487:
#line 3174 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus" << std::endl;
  }
    break;

  case 488:
#line 3178 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus default" << std::endl;
  }
    break;

  case 489:
#line 3182 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus ()" << std::endl;
  }
    break;

  case 490:
#line 3186 "../src/parser/XQParser.y"
    {
    std::cerr << "with thesaurus (default)" << std::endl;
  }
    break;

  case 491:
#line 3190 "../src/parser/XQParser.y"
    {
    std::cerr << "without thesaurus" << std::endl;
  }
    break;

  case 492:
#line 3197 "../src/parser/XQParser.y"
    {
  }
    break;

  case 493:
#line 3200 "../src/parser/XQParser.y"
    {
  }
    break;

  case 494:
#line 3207 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 495:
#line 3211 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 496:
#line 3215 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 497:
#line 3219 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 498:
#line 3229 "../src/parser/XQParser.y"
    {
    std::cerr << "with stop words" << std::endl;
  }
    break;

  case 499:
#line 3233 "../src/parser/XQParser.y"
    {
    std::cerr << "without stop words" << std::endl;
  }
    break;

  case 500:
#line 3237 "../src/parser/XQParser.y"
    {
    std::cerr << "with default stop words" << std::endl;
  }
    break;

  case 501:
#line 3244 "../src/parser/XQParser.y"
    {
  }
    break;

  case 502:
#line 3247 "../src/parser/XQParser.y"
    {
  }
    break;

  case 503:
#line 3255 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 504:
#line 3259 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 505:
#line 3266 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 506:
#line 3270 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 507:
#line 3278 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 508:
#line 3282 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 509:
#line 3290 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 510:
#line 3298 "../src/parser/XQParser.y"
    {
    std::cerr << "with wildcards" << std::endl;
  }
    break;

  case 511:
#line 3302 "../src/parser/XQParser.y"
    {
    std::cerr << "without wildcards" << std::endl;
  }
    break;

  case 512:
#line 3310 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 513:
#line 3314 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 514:
#line 3318 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 515:
#line 3322 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 516:
#line 3326 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 517:
#line 3330 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 518:
#line 3341 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 519:
#line 3347 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 520:
#line 3353 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 521:
#line 3359 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 522:
#line 3369 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 523:
#line 3373 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 524:
#line 3377 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 525:
#line 3385 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 526:
#line 3389 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 527:
#line 3397 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 528:
#line 3405 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 529:
#line 3410 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 530:
#line 3415 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 531:
#line 3427 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 532:
#line 3431 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 533:
#line 3435 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 534:
#line 3439 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 535:
#line 3443 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 538:
#line 3454 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 541:
#line 3465 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 542:
#line 3469 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 543:
#line 3479 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 544:
#line 3487 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 545:
#line 3494 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 546:
#line 3499 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 547:
#line 3507 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 548:
#line 3516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR);
  }
    break;

  case 549:
#line 3529 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL),
                  MEMMGR);
  }
    break;

  case 550:
#line 3542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE),
                  MEMMGR);
  }
    break;

  case 551:
#line 3556 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQLiteral(
                  new (MEMMGR) AnyAtomicTypeConstructor(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING),
                  MEMMGR);
  }
    break;

  case 552:
#line 3568 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 553:
#line 3577 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;


/* Line 1267 of yacc.c.  */
#line 7337 "../src/parser/XQParser.cpp"
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


#line 3608 "../src/parser/XQParser.y"


}  // namespace XQParser


