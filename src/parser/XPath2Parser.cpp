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

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 14 ".\\src\\parser\\xpath.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include "../lexer/XPathScanner.hpp"

#include <xercesc/util/XercesDefs.hpp>
#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/util/XMLString.hpp>
#include <xercesc/framework/XMLBuffer.hpp>
#include <xercesc/dom/DOMXPathNamespace.hpp>
#include <xqilla/framework/XQillaExport.hpp>

#include <xqilla/items/AnyAtomicTypeConstructor.hpp>

#include <xqilla/ast/XQVariable.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQParenthesizedExpr.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQIf.hpp>
#include <xqilla/ast/XQCastableAs.hpp>
#include <xqilla/ast/XQCastAs.hpp>
#include <xqilla/ast/XQInstanceOf.hpp>
#include <xqilla/ast/XQTreatAs.hpp>
#include <xqilla/ast/XQContextItem.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQFLWOR.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>

#include <xqilla/utils/XPath2NSUtils.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/operators/And.hpp>
#include <xqilla/operators/Or.hpp>
#include <xqilla/operators/Equals.hpp>
#include <xqilla/operators/NotEquals.hpp>
#include <xqilla/operators/Plus.hpp>
#include <xqilla/operators/Minus.hpp>
#include <xqilla/operators/Multiply.hpp>
#include <xqilla/operators/Divide.hpp>
#include <xqilla/operators/IntegerDivide.hpp>
#include <xqilla/operators/Mod.hpp>
#include <xqilla/operators/LessThan.hpp>
#include <xqilla/operators/GreaterThan.hpp>
#include <xqilla/operators/LessThanEqual.hpp>
#include <xqilla/operators/GreaterThanEqual.hpp>
#include <xqilla/operators/UnaryMinus.hpp>
#include <xqilla/operators/NodeComparison.hpp>
#include <xqilla/operators/OrderComparison.hpp>
#include <xqilla/operators/GeneralComp.hpp>
#include <xqilla/operators/Range.hpp>
#include <xqilla/operators/Intersect.hpp>
#include <xqilla/operators/Except.hpp>
#include <xqilla/operators/Union.hpp>

#include <xqilla/runtime/Sequence.hpp>

#include <xqilla/schema/SequenceType.hpp>

#include <xqilla/parser/QName.hpp>

#include <xqilla/exceptions/StaticErrorException.hpp>

#ifdef HAVE_CONFIG_H
#include "../config/xqilla_config.h"
#endif

#define YYPARSE_PARAM qp
#define YYDEBUG 1
#define YYERROR_VERBOSE

// this removes a memory leak occurring when an error is found in the query (we throw an exception from inside
// yyerror, preventing the bison-generated code from cleaning up the memory); by defining this macro we use 
// stack-based memory instead of the heap
#define YYSTACK_USE_ALLOCA	1
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

#define QP						((XPath2ParserArgs*)qp)
#define MEMMGR					(QP->_memMgr)

#undef yylex
#define yylex QP->_scanner->yylex
#undef yyerror
#define yyerror QP->_scanner->error


static inline XQNav* getNavigation(ASTNode *possibleNav, XPath2MemoryManager * expr)
{
	if(possibleNav->getType()==ASTNode::NAVIGATION)
		return (XQNav*)possibleNav;

	XQNav* nav=new (expr) XQNav(expr);
	nav->addStep(possibleNav);
	return nav;
}

static inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

namespace XPath2 {



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 424 "src/parser/XPath2Parser.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  137
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   484

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  69
/* YYNRULES -- Number of rules. */
#define YYNRULES  172
/* YYNRULES -- Number of states. */
#define YYNSTATES  273

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   352

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      95,    96,    97
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     6,    10,    12,    14,    16,    18,
      20,    24,    27,    32,    37,    44,    49,    58,    60,    64,
      66,    70,    72,    76,    80,    84,    88,    92,    96,   100,
     104,   108,   112,   116,   120,   124,   128,   132,   134,   138,
     140,   144,   148,   150,   154,   158,   162,   166,   168,   172,
     176,   178,   182,   186,   188,   192,   194,   198,   200,   204,
     206,   210,   212,   215,   218,   220,   222,   225,   228,   230,
     232,   236,   240,   242,   244,   247,   250,   253,   255,   257,
     259,   261,   263,   265,   267,   269,   271,   274,   276,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   299,
     301,   303,   305,   307,   310,   311,   316,   318,   320,   322,
     324,   326,   328,   330,   332,   334,   336,   339,   343,   346,
     348,   351,   355,   357,   361,   363,   366,   369,   371,   375,
     377,   379,   381,   383,   385,   389,   391,   393,   395,   397,
     399,   401,   403,   405,   407,   409,   412,   415,   419,   423,
     426,   429,   433,   437,   440,   443,   447,   453,   455,   457,
     461,   463,   466,   470,   476,   483,   485,   487,   491,   493,
     495,   497,   499
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      99,     0,    -1,    -1,   100,    -1,   100,    16,   101,    -1,
     101,    -1,   102,    -1,   104,    -1,   106,    -1,   107,    -1,
     103,    17,   101,    -1,    18,   105,    -1,    21,   105,    23,
     101,    -1,    22,   105,    23,   101,    -1,   105,    16,    20,
       6,    19,   101,    -1,    20,     6,    19,   101,    -1,    24,
      77,   100,    78,    25,   101,    26,   101,    -1,   108,    -1,
     107,    27,   108,    -1,   109,    -1,   108,    28,   109,    -1,
     110,    -1,   110,    48,   110,    -1,   110,    49,   110,    -1,
     110,    50,   110,    -1,   110,    51,   110,    -1,   110,    52,
     110,    -1,   110,    53,   110,    -1,   110,    54,   110,    -1,
     110,    55,   110,    -1,   110,    56,   110,    -1,   110,    57,
     110,    -1,   110,    58,   110,    -1,   110,    59,   110,    -1,
     110,    60,   110,    -1,   110,    61,   110,    -1,   110,    62,
     110,    -1,   111,    -1,   111,    31,   111,    -1,   112,    -1,
     111,    32,   112,    -1,   111,    33,   112,    -1,   113,    -1,
     112,    34,   113,    -1,   112,    35,   113,    -1,   112,    36,
     113,    -1,   112,    37,   113,    -1,   114,    -1,   113,    38,
     114,    -1,   113,    39,   114,    -1,   115,    -1,   114,    40,
     115,    -1,   114,    41,   115,    -1,   116,    -1,   116,    29,
     145,    -1,   117,    -1,   117,    47,   145,    -1,   118,    -1,
     118,    30,   144,    -1,   119,    -1,   119,    46,   144,    -1,
     120,    -1,    33,   119,    -1,    32,   119,    -1,   121,    -1,
      42,    -1,    42,   122,    -1,    43,   122,    -1,   122,    -1,
     123,    -1,   122,    42,   123,    -1,   122,    43,   123,    -1,
     124,    -1,   134,    -1,   125,   135,    -1,   128,   135,    -1,
     126,   131,    -1,   127,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    87,    -1,    88,    -1,    96,
      -1,    64,   131,    -1,   131,    -1,   129,   131,    -1,   130,
      -1,    71,    -1,    86,    -1,    89,    -1,    90,    -1,    85,
      -1,    65,    -1,   149,    -1,   132,    -1,   166,    -1,   133,
      -1,    72,    -1,     7,    -1,     8,    -1,   136,   135,    -1,
      -1,   135,    44,   100,    45,    -1,   137,    -1,   139,    -1,
     140,    -1,   141,    -1,   142,    -1,   138,    -1,     5,    -1,
      10,    -1,    11,    -1,    12,    -1,    20,     6,    -1,    77,
     100,    78,    -1,    77,    78,    -1,    63,    -1,     4,    78,
      -1,     4,   143,    78,    -1,   101,    -1,   143,    16,   101,
      -1,   148,    -1,   148,    93,    -1,   147,   146,    -1,   147,
      -1,    79,    77,    78,    -1,    95,    -1,    94,    -1,    93,
      -1,   148,    -1,   149,    -1,    80,    77,    78,    -1,   166,
      -1,   151,    -1,   159,    -1,   155,    -1,   161,    -1,   157,
      -1,   154,    -1,   153,    -1,   152,    -1,   150,    -1,    76,
      78,    -1,    82,    78,    -1,    82,   159,    78,    -1,    82,
     161,    78,    -1,    75,    78,    -1,    74,    78,    -1,    73,
       5,    78,    -1,    73,     9,    78,    -1,    73,    78,    -1,
      83,    78,    -1,    83,   156,    78,    -1,    83,   156,    16,
     165,    78,    -1,   163,    -1,    72,    -1,    92,   158,    78,
      -1,   163,    -1,    84,    78,    -1,    84,   160,    78,    -1,
      84,   160,    16,   165,    78,    -1,    84,   160,    16,   165,
      81,    78,    -1,   164,    -1,    72,    -1,    91,   162,    78,
      -1,   164,    -1,   166,    -1,   166,    -1,   166,    -1,     3,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   330,   330,   334,   345,   356,   367,   370,   373,   376,
     387,   398,   408,   412,   419,   427,   443,   457,   461,   482,
     486,   516,   520,   524,   528,   532,   536,   540,   544,   548,
     552,   556,   560,   564,   568,   572,   576,   588,   592,   605,
     609,   613,   625,   629,   633,   637,   641,   653,   657,   661,
     673,   677,   681,   693,   697,   708,   711,   724,   728,   739,
     742,   753,   757,   763,   779,   791,   797,   803,   817,   829,
     833,   839,   862,   865,   875,   879,   892,   904,   923,   927,
     931,   935,   939,   943,   947,   951,   963,   971,   993,  1001,
    1016,  1020,  1024,  1028,  1032,  1043,  1058,  1062,  1073,  1079,
    1091,  1098,  1105,  1120,  1133,  1136,  1149,  1153,  1157,  1161,
    1165,  1178,  1182,  1202,  1214,  1226,  1246,  1258,  1268,  1281,
    1293,  1299,  1316,  1321,  1334,  1341,  1356,  1363,  1370,  1382,
    1385,  1388,  1400,  1403,  1407,  1417,  1436,  1439,  1442,  1445,
    1448,  1451,  1454,  1457,  1460,  1471,  1485,  1490,  1498,  1514,
    1527,  1541,  1546,  1551,  1565,  1570,  1575,  1587,  1590,  1602,
    1614,  1625,  1630,  1635,  1640,  1655,  1658,  1670,  1681,  1691,
    1700,  1709,  1718
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<qualified name>\"",
  "\"<function>(\"", "\"'...'\"", "\"<variable name>\"", "\"<ns>:*\"",
  "\"*:<local name>\"", "\"<local name>\"", "\"<integer number>\"",
  "\"<decimal number>\"", "\"<double number>\"", "\"(: comment :)\"",
  "_XQUERY_WHITESPACE_", "_XQUERY_ERROR_", "\",\"", "\"return\"",
  "\"for\"", "\"in\"", "\"$\"", "\"some\"", "\"every\"", "\"satisfies\"",
  "\"if\"", "\"then\"", "\"else\"", "\"or\"", "\"and\"", "\"instance of\"",
  "\"castable as\"", "\"to\"", "\"+ (arithmetic operator)\"",
  "\"- (arithmetic operator)\"", "\"* (arithmetic operator)\"", "\"div\"",
  "\"idiv\"", "\"mod\"", "\"union\"", "\"|\"", "\"intersect\"",
  "\"except\"", "\"/\"", "\"//\"", "\"[\"", "\"]\"", "\"cast as\"",
  "\"treat as\"", "\"= (comparison operator)\"", "\"!=\"",
  "\"< (comparison operator)\"", "\"<=\"", "\"> (comparison operator)\"",
  "\">=\"", "\"eq\"", "\"ne\"", "\"lt\"", "\"le\"", "\"gt\"", "\"ge\"",
  "\"is\"", "\"<<\"", "\">>\"", "\".\"", "\"@\"", "\"..\"", "\"child::\"",
  "\"descendant::\"", "\"attribute::\"", "\"self::\"",
  "\"descendant-or-self::\"", "\"parent::\"", "\"* (wildcard)\"",
  "\"processing-instruction(\"", "\"comment(\"", "\"text(\"", "\"node(\"",
  "\"(\"", "\")\"", "\"empty-sequence\"", "\"item\"", "\"?\"",
  "\"document-node(\"", "\"attribute(\"", "\"element(\"",
  "\"ancestor-or-self::\"", "\"ancestor::\"", "\"following-sibling::\"",
  "\"following::\"", "\"preceding-sibling::\"", "\"preceding::\"",
  "\"schema-element(\"", "\"schema-attribute(\"", "\"? (occurrence)\"",
  "\"+ (occurrence)\"", "\"* (occurrence)\"", "\"namespace::\"", "_EOF_",
  "$accept", "_XPath", "_Expr", "_ExprSingle", "_ForExpr",
  "_SimpleForClause", "_QuantifiedExpr", "_VariableBindingList", "_IfExpr",
  "_OrExpr", "_AndExpr", "_ComparisonExpr", "_RangeExpr", "_AdditiveExpr",
  "_MultiplicativeExpr", "_UnionExpr", "_IntersectExceptExpr",
  "_InstanceOfExpr", "_TreatExpr", "_CastableExpr", "_CastExpr",
  "_UnaryExpr", "_ValueExpr", "_PathExpr", "_RelativePathExpr",
  "_StepExpr", "_AxisStep", "_ForwardStep", "_ForwardAxis",
  "_AbbrevForwardStep", "_ReverseStep", "_ReverseAxis",
  "_AbbrevReverseStep", "_NodeTest", "_NameTest", "_Wildcard",
  "_FilterExpr", "_PredicateList", "_PrimaryExpr", "_Literal",
  "_NumericLiteral", "_VarRef", "_ParenthesizedExpr", "_ContextItemExpr",
  "_FunctionCall", "_ArgumentList", "_SingleType", "_SequenceType",
  "_OccurrenceIndicator", "_ItemType", "_AtomicType", "_KindTest",
  "_AnyKindTest", "_DocumentTest", "_TextTest", "_CommentTest", "_PITest",
  "_AttributeTest", "_AttribNameOrWildcard", "_SchemaAttributeTest",
  "_AttributeDeclaration", "_ElementTest", "_ElementNameOrWildcard",
  "_SchemaElementTest", "_ElementDeclaration", "_AttributeName",
  "_ElementName", "_TypeName", "_QName", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
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
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    98,    99,    99,   100,   100,   101,   101,   101,   101,
     102,   103,   104,   104,   105,   105,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   114,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   119,   119,   120,   121,   121,   121,   121,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     129,   129,   129,   129,   129,   130,   131,   131,   132,   132,
     133,   133,   133,   134,   135,   135,   136,   136,   136,   136,
     136,   137,   137,   138,   138,   138,   139,   140,   140,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   145,   146,
     146,   146,   147,   147,   147,   148,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   150,   151,   151,   151,   152,
     153,   154,   154,   154,   155,   155,   155,   156,   156,   157,
     158,   159,   159,   159,   159,   160,   160,   161,   162,   163,
     164,   165,   166
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     3,     1,     1,     1,     1,     1,
       3,     2,     4,     4,     6,     4,     8,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     2,     1,     1,     2,     2,     1,     1,
       3,     3,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     1,
       2,     3,     1,     3,     1,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     3,     2,
       2,     3,     3,     2,     2,     3,     5,     1,     1,     3,
       1,     2,     3,     5,     6,     1,     1,     3,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       2,   172,     0,   112,   101,   102,   113,   114,   115,     0,
       0,     0,     0,     0,     0,     0,    65,     0,   119,     0,
      95,    78,    79,    80,    81,    82,    90,   100,     0,     0,
       0,     0,     0,     0,     0,     0,    94,    91,    83,    84,
      92,    93,     0,     0,    85,     0,     3,     5,     6,     0,
       7,     8,     9,    17,    19,    21,    37,    39,    42,    47,
      50,    53,    55,    57,    59,    61,    64,    68,    69,    72,
     104,     0,    77,   104,     0,    89,    87,    97,    99,    73,
     104,   106,   111,   107,   108,   109,   110,    96,   144,   136,
     143,   142,   141,   138,   140,   137,   139,    98,   120,   122,
       0,     0,    11,   116,     0,     0,     0,    63,    62,    66,
      67,    86,     0,     0,   153,   150,   149,   145,   118,     0,
     146,     0,     0,   158,   154,     0,   157,   169,   166,   161,
       0,   165,   170,     0,   168,     0,   160,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,    76,    75,    88,   103,     0,
     121,     0,     0,     0,     0,     0,   151,   152,   117,   147,
     148,     0,   155,     0,   162,   167,   159,     4,    10,    18,
      20,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    38,    40,    41,    43,
      44,    45,    46,    48,    49,    51,    52,     0,     0,    54,
     127,   132,   133,   135,    56,    58,   124,    60,    70,    71,
       0,   123,     0,     0,    12,    13,     0,     0,   171,     0,
       0,     0,   131,   130,   129,   126,   125,     0,    15,     0,
       0,   156,   163,     0,   128,   134,   105,     0,     0,   164,
      14,     0,    16
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    45,    46,    47,    48,    49,    50,   102,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   174,    80,    81,
      82,    83,    84,    85,    86,   100,   235,   229,   255,   230,
     231,    87,    88,    89,    90,    91,    92,    93,   125,    94,
     135,    95,   130,    96,   133,   126,   131,   247,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const short int yypact[] =
{
     242,   -68,    13,   -68,   -68,   -68,   -68,   -68,   -68,    10,
       4,    10,    10,   -28,   332,   332,   373,   373,   -68,    40,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,    48,   -26,
     -24,    32,   147,   -52,    39,    47,   -68,   -68,   -68,   -68,
     -68,   -68,   103,   103,   -68,   118,   133,   -68,   -68,   136,
     -68,   -68,   108,   128,   -68,   422,    61,    24,   -11,    22,
     -68,   135,   113,   132,   120,   -68,   -68,    30,   -68,   -68,
     -68,    40,   -68,   -68,    40,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -14,   164,   156,   -68,    -1,    28,   242,   -68,   -68,    30,
      30,   -68,   100,   107,   -68,   -68,   -68,   -68,   -68,   -13,
     -68,   109,   110,   -68,   -68,   -10,   -68,   -68,   -68,   -68,
      -9,   -68,   -68,   114,   -68,   115,   -68,   -68,   242,   242,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   197,   197,
     103,   103,   373,   373,   142,   -68,   142,   -68,   142,   242,
     -68,   172,   174,   242,   242,    -8,   -68,   -68,   -68,   -68,
     -68,   103,   -68,   103,   -68,   -68,   -68,   -68,   -68,   128,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,     8,    24,    24,   -11,
     -11,   -11,   -11,    22,    22,   -68,   -68,   121,   122,   -68,
      49,   -68,   -68,   -68,   -68,   -68,   102,   -68,   -68,   -68,
     242,   -68,   242,   190,   -68,   -68,   176,   124,   -68,   -67,
     125,   126,   -68,   -68,   -68,   -68,   -68,    -7,   -68,   178,
     242,   -68,   -68,   127,   -68,   -68,   -68,   242,   180,   -68,
     -68,   242,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
     -68,   -68,   -31,    -2,   -68,   -68,   -68,    55,   -68,   -68,
      67,    85,   148,    51,   -51,   -33,   -19,   -46,   -68,   -68,
     -68,   119,   -68,   -68,   131,     1,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -68,   -68,   -44,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,    56,    59,   -68,   -68,
       5,    15,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   208,   -68,   209,   -68,   201,   206,    58,   -30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
      99,   119,   179,   138,   127,   132,   191,   193,   138,   138,
     103,   262,   132,   127,   263,   182,     1,     2,     3,   111,
       4,     5,   183,     6,     7,     8,   120,   164,   165,   176,
     101,     9,    35,    10,    11,    12,   178,    13,   266,    42,
     158,   159,     1,     1,   182,    14,    15,     4,     5,   106,
       1,   184,   115,   112,   116,    16,    17,   113,   160,   161,
     162,   163,   166,   167,   180,   188,   104,   105,   192,   194,
     246,   175,   172,   173,   177,   185,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    98,   157,   158,   159,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     1,   217,   218,    44,
     117,   123,    27,    28,    29,    30,    31,   124,   137,   128,
     225,   226,    33,    34,    35,   129,   114,   219,   220,   221,
     222,    42,    43,   107,   108,   140,   197,   198,   233,   233,
     233,   233,   252,   253,   254,   223,   224,   109,   110,   138,
       1,     2,     3,   139,     4,     5,   141,     6,     7,     8,
     169,   248,   170,   248,   168,     9,   171,    10,    11,    12,
     181,    13,   182,   238,   239,   236,   236,   241,   186,    14,
      15,   244,   245,   232,   232,   187,   240,   189,   190,    16,
      17,   242,   195,   196,   243,   256,   259,   267,   250,   251,
       1,   260,   261,   264,   265,   269,   271,   199,   216,   257,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,   118,   200,   237,   234,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     258,   121,   122,    44,   136,     1,     2,     3,   134,     4,
       5,   249,     6,     7,     8,     0,     0,     0,   268,     0,
       9,     0,    10,    11,    12,   270,    13,     0,     0,   272,
      28,    29,    30,    31,    14,    15,   227,   228,     0,    33,
      34,    35,     0,     0,    16,    17,     0,     0,    42,    43,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     1,     2,     3,    44,     4,
       5,     0,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,    16,    17,     1,     2,     3,     0,
       4,     5,     0,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,    10,     0,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
       0,     0,     0,     0,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     0,     0,     0,    44,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,     0,     0,     0,    44,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156
};

static const short int yycheck[] =
{
       2,    32,    16,    16,    34,    35,    16,    16,    16,    16,
       6,    78,    42,    43,    81,    16,     3,     4,     5,    19,
       7,     8,    23,    10,    11,    12,    78,    38,    39,    73,
      20,    18,    84,    20,    21,    22,    80,    24,    45,    91,
      32,    33,     3,     3,    16,    32,    33,     7,     8,    77,
       3,    23,    78,     5,    78,    42,    43,     9,    34,    35,
      36,    37,    40,    41,    78,    78,    11,    12,    78,    78,
      78,    71,    42,    43,    74,   106,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    31,    32,    33,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     3,   158,   159,    96,
      78,    72,    72,    73,    74,    75,    76,    78,     0,    72,
     166,   167,    82,    83,    84,    78,    78,   160,   161,   162,
     163,    91,    92,    14,    15,    27,   138,   139,   168,   169,
     170,   171,    93,    94,    95,   164,   165,    16,    17,    16,
       3,     4,     5,    17,     7,     8,    28,    10,    11,    12,
      47,   191,    30,   193,    29,    18,    46,    20,    21,    22,
       6,    24,    16,   172,   173,   170,   171,   179,    78,    32,
      33,   183,   184,   168,   169,    78,    44,    78,    78,    42,
      43,    19,    78,    78,    20,    93,     6,    19,    77,    77,
       3,    25,    78,    78,    78,    78,    26,   140,   157,   240,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,   141,   171,   169,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     242,    33,    33,    96,    43,     3,     4,     5,    42,     7,
       8,   193,    10,    11,    12,    -1,    -1,    -1,   260,    -1,
      18,    -1,    20,    21,    22,   267,    24,    -1,    -1,   271,
      73,    74,    75,    76,    32,    33,    79,    80,    -1,    82,
      83,    84,    -1,    -1,    42,    43,    -1,    -1,    91,    92,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,     3,     4,     5,    96,     7,
       8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,     3,     4,     5,    -1,
       7,     8,    -1,    10,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    96,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     7,     8,    10,    11,    12,    18,
      20,    21,    22,    24,    32,    33,    42,    43,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    96,    99,   100,   101,   102,   103,
     104,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     136,   137,   138,   139,   140,   141,   142,   149,   150,   151,
     152,   153,   154,   155,   157,   159,   161,   166,    78,   101,
     143,    20,   105,     6,   105,   105,    77,   119,   119,   122,
     122,   131,     5,     9,    78,    78,    78,    78,    78,   100,
      78,   159,   161,    72,    78,   156,   163,   166,    72,    78,
     160,   164,   166,   162,   164,   158,   163,     0,    16,    17,
      27,    28,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    29,    47,
      30,    46,    42,    43,   135,   131,   135,   131,   135,    16,
      78,     6,    16,    23,    23,   100,    78,    78,    78,    78,
      78,    16,    78,    16,    78,    78,    78,   101,   101,   108,
     109,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   112,   112,   113,
     113,   113,   113,   114,   114,   115,   115,    79,    80,   145,
     147,   148,   149,   166,   145,   144,   148,   144,   123,   123,
      44,   101,    19,    20,   101,   101,    78,   165,   166,   165,
      77,    77,    93,    94,    95,   146,    93,   100,   101,     6,
      25,    78,    78,    81,    78,    78,    45,    19,   101,    78,
     101,    26,   101
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 330 ".\\src\\parser\\xpath.y"
    {
      QP->_query->setQueryBody(new (MEMMGR) XQSequence(MEMMGR));
	;}
    break;

  case 3:
#line 334 ".\\src\\parser\\xpath.y"
    {
      QP->_query->setQueryBody((yyvsp[0].astNodeImpl));
	;}
    break;

  case 4:
#line 345 ".\\src\\parser\\xpath.y"
    {
		if((yyvsp[-2].astNodeImpl)->getType()==ASTNode::PARENTHESIZED)
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		else
		{
			XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
			dis->addItem((yyvsp[-2].astNodeImpl));
			(yyval.astNodeImpl) = dis;
		}
		((XQParenthesizedExpr *)(yyval.astNodeImpl))->addItem((yyvsp[0].astNodeImpl));
	;}
    break;

  case 5:
#line 356 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 6:
#line 367 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 7:
#line 370 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 8:
#line 373 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 9:
#line 376 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 10:
#line 387 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQFLWOR((yyvsp[-2].variableBinding), NULL, NULL, (yyvsp[0].astNodeImpl), MEMMGR);
	;}
    break;

  case 11:
#line 398 ".\\src\\parser\\xpath.y"
    {
        (yyval.variableBinding) = (yyvsp[0].variableBinding);
    ;}
    break;

  case 12:
#line 408 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQQuantified(XQQuantified::some, (yyvsp[-2].variableBinding), (yyvsp[0].astNodeImpl), MEMMGR);
	;}
    break;

  case 13:
#line 412 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQQuantified(XQQuantified::every, (yyvsp[-2].variableBinding), (yyvsp[0].astNodeImpl), MEMMGR);
	;}
    break;

  case 14:
#line 419 ".\\src\\parser\\xpath.y"
    {
		XQVariableBinding* bind=new (MEMMGR) XQVariableBinding(MEMMGR,
                                                               XQVariableBinding::forBinding,
                                                               MEMMGR->getPooledString((yyvsp[-2].str)), (yyvsp[0].astNodeImpl));
		(yyvsp[-5].variableBinding)->push_back(bind);
		(yyval.variableBinding) = (yyvsp[-5].variableBinding);
	;}
    break;

  case 15:
#line 427 ".\\src\\parser\\xpath.y"
    {
		(yyval.variableBinding) = new (MEMMGR) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>((MEMMGR)));
		XQVariableBinding* bind=new (MEMMGR) XQVariableBinding(MEMMGR,
                                                               XQVariableBinding::forBinding,
                                                               MEMMGR->getPooledString((yyvsp[-2].str)), (yyvsp[0].astNodeImpl));
		(yyval.variableBinding)->push_back(bind);
	;}
    break;

  case 16:
#line 443 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQIf((yyvsp[-5].astNodeImpl), (yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), MEMMGR);
	;}
    break;

  case 17:
#line 457 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 18:
#line 461 ".\\src\\parser\\xpath.y"
    {
    if((yyvsp[-2].astNodeImpl)->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>((yyvsp[-2].astNodeImpl)))->getOperatorName() == Or::name) {
			Or* pOr = static_cast<Or*>((yyvsp[-2].astNodeImpl));
			pOr->addArgument((yyvsp[0].astNodeImpl));
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		}
		else
		{
			ASTNodeImpl *dii = new (MEMMGR) Or(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), MEMMGR), MEMMGR);
			(yyval.astNodeImpl) = dii;
		}
	;}
    break;

  case 19:
#line 482 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 20:
#line 486 ".\\src\\parser\\xpath.y"
    {
    if((yyvsp[-2].astNodeImpl)->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>((yyvsp[-2].astNodeImpl)))->getOperatorName() == And::name) {
			And* pAnd = static_cast<And*>((yyvsp[-2].astNodeImpl));
			pAnd->addArgument((yyvsp[0].astNodeImpl));
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		}
		else
		{
			ASTNodeImpl *dii = new (MEMMGR) And(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), MEMMGR), MEMMGR);
			(yyval.astNodeImpl) = dii;
		}
	;}
    break;

  case 21:
#line 516 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 22:
#line 520 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 23:
#line 524 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 24:
#line 528 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 25:
#line 532 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 26:
#line 536 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 27:
#line 540 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),MEMMGR),MEMMGR);
	;}
    break;

  case 28:
#line 544 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Equals(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 29:
#line 548 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) NotEquals(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 30:
#line 552 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) LessThan(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 31:
#line 556 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) LessThanEqual(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 32:
#line 560 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GreaterThan(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 33:
#line 564 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 34:
#line 568 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) NodeComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 35:
#line 572 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), true, MEMMGR);
	;}
    break;

  case 36:
#line 576 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) OrderComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), false, MEMMGR);
	;}
    break;

  case 37:
#line 588 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 38:
#line 592 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Range(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 39:
#line 605 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 40:
#line 609 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Plus(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 41:
#line 613 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Minus(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 42:
#line 625 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 43:
#line 629 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Multiply(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 44:
#line 633 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Divide(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 45:
#line 637 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) IntegerDivide(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 46:
#line 641 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Mod(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 47:
#line 653 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 48:
#line 657 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Union(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 49:
#line 661 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Union(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 50:
#line 673 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 51:
#line 677 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Intersect(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 52:
#line 681 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) Except(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),MEMMGR), MEMMGR);
	;}
    break;

  case 53:
#line 693 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 54:
#line 697 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQInstanceOf((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType), MEMMGR);
	;}
    break;

  case 55:
#line 708 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 56:
#line 711 ".\\src\\parser\\xpath.y"
    {
        XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[-2].astNodeImpl),(yyvsp[0].sequenceType),MEMMGR);
        treatAs->setIsTreatAsStatement(true);
		(yyval.astNodeImpl) = treatAs;
	;}
    break;

  case 57:
#line 724 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 58:
#line 728 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = new (MEMMGR) XQCastableAs((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType),MEMMGR);
	;}
    break;

  case 59:
#line 739 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 60:
#line 742 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQCastAs((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType),MEMMGR);
	;}
    break;

  case 61:
#line 753 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 62:
#line 757 ".\\src\\parser\\xpath.y"
    {
	  VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
	  args.push_back((yyvsp[0].astNodeImpl));
	  (yyval.astNodeImpl) = new (MEMMGR) UnaryMinus(args, MEMMGR);
	;}
    break;

  case 63:
#line 763 ".\\src\\parser\\xpath.y"
    {
		//no need to do anything with unary plus
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 64:
#line 779 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 65:
#line 791 ".\\src\\parser\\xpath.y"
    {
        XQNav *nav = new (MEMMGR) XQNav(MEMMGR);
        nav->addInitialRootStep(MEMMGR);
        (yyval.astNodeImpl) = nav;
    ;}
    break;

  case 66:
#line 797 ".\\src\\parser\\xpath.y"
    {
        XQNav* nav=getNavigation((yyvsp[0].astNodeImpl),MEMMGR);
        nav->addInitialRootStep(MEMMGR);
	    (yyval.astNodeImpl) = nav;
    ;}
    break;

  case 67:
#line 803 ".\\src\\parser\\xpath.y"
    {
        XQNav *nav = getNavigation((yyvsp[0].astNodeImpl),MEMMGR);

        NodeTest *step = new (MEMMGR) NodeTest();
        step->setTypeWildcard();
        step->setNameWildcard();
        step->setNamespaceWildcard();
        nav->addStepFront(new (MEMMGR) XQStep(XQStep::DESCENDANT_OR_SELF, step, MEMMGR));

        nav->addInitialRootStep(MEMMGR);

        (yyval.astNodeImpl) = nav;
	;}
    break;

  case 69:
#line 829 ".\\src\\parser\\xpath.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 70:
#line 833 ".\\src\\parser\\xpath.y"
    {
		XQNav *nav = getNavigation((yyvsp[-2].astNodeImpl),MEMMGR);
	    nav->addStep((yyvsp[0].astNodeImpl));
		(yyval.astNodeImpl) = nav;
	;}
    break;

  case 71:
#line 839 ".\\src\\parser\\xpath.y"
    {
        XQNav *nav = getNavigation((yyvsp[-2].astNodeImpl),MEMMGR);

        NodeTest *step = new (MEMMGR) NodeTest();
        step->setTypeWildcard();
        step->setNameWildcard();
        step->setNamespaceWildcard();
        nav->addStep(XQStep::DESCENDANT_OR_SELF, step);

        nav->addStep((yyvsp[0].astNodeImpl));

        (yyval.astNodeImpl) = nav;
	;}
    break;

  case 72:
#line 862 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 73:
#line 865 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    ;}
    break;

  case 74:
#line 875 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
    ;}
    break;

  case 75:
#line 879 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
        (yyval.astNodeImpl) = new (MEMMGR) XQDocumentOrder((yyval.astNodeImpl), MEMMGR);
    ;}
    break;

  case 76:
#line 892 ".\\src\\parser\\xpath.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        switch((yyvsp[-1].axis)) {
        case XQStep::NAMESPACE: (yyvsp[0].nodeTest)->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string); break;
        default: (yyvsp[0].nodeTest)->setNodeType(Node::element_string); break;
        }
      }

      (yyval.astNodeImpl) = new (MEMMGR) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), MEMMGR);
	;}
    break;

  case 77:
#line 904 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 78:
#line 923 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::CHILD;
	;}
    break;

  case 79:
#line 927 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
	;}
    break;

  case 80:
#line 931 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
	;}
    break;

  case 81:
#line 935 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::SELF;
	;}
    break;

  case 82:
#line 939 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
	;}
    break;

  case 83:
#line 943 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
	;}
    break;

  case 84:
#line 947 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
	;}
    break;

  case 85:
#line 951 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
	;}
    break;

  case 86:
#line 963 ".\\src\\parser\\xpath.y"
    {
    if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
      (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNodeImpl) = new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[0].nodeTest), MEMMGR);
	;}
    break;

  case 87:
#line 971 ".\\src\\parser\\xpath.y"
    {
    XQStep::Axis axis = XQStep::CHILD;
    SequenceType::ItemType *itemtype = (yyvsp[0].nodeTest)->getItemType();
    if(itemtype != 0 &&
       itemtype->getItemTestType() == SequenceType::ItemType::TEST_ATTRIBUTE) {
      axis = XQStep::ATTRIBUTE;
    }
    else if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
      (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNodeImpl) = new (MEMMGR) XQStep(axis, (yyvsp[0].nodeTest), MEMMGR);
	;}
    break;

  case 88:
#line 993 ".\\src\\parser\\xpath.y"
    {
    if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
      (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNodeImpl) = new (MEMMGR) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), MEMMGR);
	;}
    break;

  case 89:
#line 1001 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 90:
#line 1016 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::PARENT;
	;}
    break;

  case 91:
#line 1020 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
	;}
    break;

  case 92:
#line 1024 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
	;}
    break;

  case 93:
#line 1028 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
	;}
    break;

  case 94:
#line 1032 ".\\src\\parser\\xpath.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
	;}
    break;

  case 95:
#line 1043 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest;
		step->setNameWildcard();
		step->setNamespaceWildcard();
		step->setTypeWildcard();
    (yyval.astNodeImpl) = new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR);
	;}
    break;

  case 96:
#line 1058 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 97:
#line 1062 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 98:
#line 1073 ".\\src\\parser\\xpath.y"
    {
        NodeTest *step = new (MEMMGR) NodeTest();
		step->setNodePrefix((yyvsp[0].qName)->getPrefix());
        step->setNodeName((yyvsp[0].qName)->getName());
        (yyval.nodeTest) = step;
    ;}
    break;

  case 99:
#line 1079 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 100:
#line 1091 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setNameWildcard();
		step->setNamespaceWildcard();
		(yyval.nodeTest) = step;
	;}
    break;

  case 101:
#line 1098 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
		step->setNodePrefix(MEMMGR->getPooledString((yyvsp[0].str)));
		step->setNameWildcard();
		(yyval.nodeTest) = step;
	;}
    break;

  case 102:
#line 1105 ".\\src\\parser\\xpath.y"
    {
        NodeTest *step = new (MEMMGR) NodeTest();
        step->setNodeName(MEMMGR->getPooledString((yyvsp[0].str)));
        step->setNamespaceWildcard();
        (yyval.nodeTest) = step;
	;}
    break;

  case 103:
#line 1120 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
    ;}
    break;

  case 104:
#line 1133 ".\\src\\parser\\xpath.y"
    {
        (yyval.predicates) = new VectorOfPredicates(MEMMGR);
    ;}
    break;

  case 105:
#line 1136 ".\\src\\parser\\xpath.y"
    {
        XQPredicate *pred = new (MEMMGR) XQPredicate((yyvsp[-1].astNodeImpl), MEMMGR);
        (yyvsp[-3].predicates)->push_back(pred);
        (yyval.predicates) = (yyvsp[-3].predicates);
	;}
    break;

  case 106:
#line 1149 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 107:
#line 1153 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 108:
#line 1157 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 109:
#line 1161 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 110:
#line 1165 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 111:
#line 1178 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	;}
    break;

  case 112:
#line 1182 ".\\src\\parser\\xpath.y"
    {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				MEMMGR->getPooledString((yyvsp[0].str)),
        AnyAtomicType::STRING);
		XQLiteral *str_val  = new (MEMMGR)
        XQLiteral(ic, MEMMGR);
		(yyval.astNodeImpl) = str_val;
	;}
    break;

  case 113:
#line 1202 ".\\src\\parser\\xpath.y"
    {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
				MEMMGR->getPooledString((yyvsp[0].str)),
      AnyAtomicType::DECIMAL);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      (yyval.astNodeImpl) = did;
  ;}
    break;

  case 114:
#line 1214 ".\\src\\parser\\xpath.y"
    {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
				MEMMGR->getPooledString((yyvsp[0].str)),
      AnyAtomicType::DECIMAL);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      (yyval.astNodeImpl) = did;
  ;}
    break;

  case 115:
#line 1226 ".\\src\\parser\\xpath.y"
    {
      AnyAtomicTypeConstructor *ic = new (MEMMGR)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
				MEMMGR->getPooledString((yyvsp[0].str)),
      AnyAtomicType::DOUBLE);
      XQLiteral *did  = new (MEMMGR)
      XQLiteral(ic, MEMMGR);
      (yyval.astNodeImpl) = did;
  ;}
    break;

  case 116:
#line 1246 ".\\src\\parser\\xpath.y"
    {
		XQVariable *var = new (MEMMGR) XQVariable((yyvsp[0].str), MEMMGR);
		(yyval.astNodeImpl) = var;
  ;}
    break;

  case 117:
#line 1258 ".\\src\\parser\\xpath.y"
    {
        if((yyvsp[-1].astNodeImpl)->getType()!=ASTNode::PARENTHESIZED)
        {
          XQParenthesizedExpr *dis = new (MEMMGR) XQParenthesizedExpr(MEMMGR);
          dis->addItem((yyvsp[-1].astNodeImpl));
          (yyval.astNodeImpl) = dis;
        }
        else
          (yyval.astNodeImpl) = (yyvsp[-1].astNodeImpl);
	;}
    break;

  case 118:
#line 1268 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQSequence(MEMMGR);
	;}
    break;

  case 119:
#line 1281 ".\\src\\parser\\xpath.y"
    {
		(yyval.astNodeImpl) = new (MEMMGR) XQContextItem(MEMMGR);
	;}
    break;

  case 120:
#line 1293 ".\\src\\parser\\xpath.y"
    {
        QualifiedName *qname = new (MEMMGR) QualifiedName((yyvsp[-1].str), MEMMGR);
        VectorOfASTNodes tmp(XQillaAllocator<ASTNode*>(MEMMGR));
		(yyval.astNodeImpl) = new (MEMMGR) XQFunctionCall(qname, tmp, MEMMGR);
	;}
    break;

  case 121:
#line 1299 ".\\src\\parser\\xpath.y"
    {
        QualifiedName *qname = new (MEMMGR) QualifiedName((yyvsp[-2].str), MEMMGR);
		(yyval.astNodeImpl) = new (MEMMGR) XQFunctionCall(qname, *(yyvsp[-1].astNodeStore), MEMMGR);
        delete (yyvsp[-1].astNodeStore);
	;}
    break;

  case 122:
#line 1316 ".\\src\\parser\\xpath.y"
    {
        (yyval.astNodeStore) = new VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
        (yyval.astNodeStore)->push_back((yyvsp[0].astNodeImpl));
	  ;}
    break;

  case 123:
#line 1321 ".\\src\\parser\\xpath.y"
    {
        (yyvsp[-2].astNodeStore)->push_back((yyvsp[0].astNodeImpl));
		(yyval.astNodeStore) = (yyvsp[-2].astNodeStore);
	;}
    break;

  case 124:
#line 1334 ".\\src\\parser\\xpath.y"
    {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName)));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		(yyval.sequenceType) = seq;
	;}
    break;

  case 125:
#line 1341 ".\\src\\parser\\xpath.y"
    {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[-1].qName)));
		seq->setOccurrence(SequenceType::QUESTION_MARK);
		(yyval.sequenceType) = seq;
	;}
    break;

  case 126:
#line 1356 ".\\src\\parser\\xpath.y"
    {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType((yyvsp[-1].itemType));
		seq->setOccurrence((yyvsp[0].occurrence));
		(yyval.sequenceType) = seq;
	;}
    break;

  case 127:
#line 1363 ".\\src\\parser\\xpath.y"
    {
		SequenceType* seq=new (MEMMGR) SequenceType();
		seq->setItemType((yyvsp[0].itemType));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		(yyval.sequenceType) = seq;
	;}
    break;

  case 128:
#line 1370 ".\\src\\parser\\xpath.y"
    {
		(yyval.sequenceType) = new (MEMMGR) SequenceType();
	;}
    break;

  case 129:
#line 1382 ".\\src\\parser\\xpath.y"
    {
		(yyval.occurrence) = SequenceType::STAR;
	;}
    break;

  case 130:
#line 1385 ".\\src\\parser\\xpath.y"
    {
		(yyval.occurrence) = SequenceType::PLUS;
	;}
    break;

  case 131:
#line 1388 ".\\src\\parser\\xpath.y"
    {
		(yyval.occurrence) = SequenceType::QUESTION_MARK;
	;}
    break;

  case 132:
#line 1400 ".\\src\\parser\\xpath.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName));
    ;}
    break;

  case 133:
#line 1403 ".\\src\\parser\\xpath.y"
    {
        (yyval.itemType) = (yyvsp[0].nodeTest)->getItemType();
        (yyvsp[0].nodeTest)->setItemType(NULL);
    ;}
    break;

  case 134:
#line 1407 ".\\src\\parser\\xpath.y"
    {
        (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
    ;}
    break;

  case 135:
#line 1417 ".\\src\\parser\\xpath.y"
    {
		(yyval.qName) = (yyvsp[0].qName);
	;}
    break;

  case 136:
#line 1436 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 137:
#line 1439 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 138:
#line 1442 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 139:
#line 1445 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 140:
#line 1448 ".\\src\\parser\\xpath.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    ;}
    break;

  case 141:
#line 1451 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 142:
#line 1454 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 143:
#line 1457 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 144:
#line 1460 ".\\src\\parser\\xpath.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	;}
    break;

  case 145:
#line 1471 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 146:
#line 1485 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 147:
#line 1490 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	;}
    break;

  case 148:
#line 1498 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	;}
    break;

  case 149:
#line 1514 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 150:
#line 1527 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 151:
#line 1541 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 152:
#line 1546 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[-1].str))));
		(yyval.nodeTest) = step;
	;}
    break;

  case 153:
#line 1551 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	;}
    break;

  case 154:
#line 1565 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	;}
    break;

  case 155:
#line 1570 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 156:
#line 1575 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, (yyvsp[-3].qName), (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 157:
#line 1587 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  ;}
    break;

  case 158:
#line 1590 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName)=NULL;
  ;}
    break;

  case 159:
#line 1602 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 160:
#line 1614 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  ;}
    break;

  case 161:
#line 1625 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	;}
    break;

  case 162:
#line 1630 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 163:
#line 1635 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-3].qName), (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 164:
#line 1640 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        SequenceType::ItemType* pType=new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-4].qName), (yyvsp[-2].qName));
        pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	;}
    break;

  case 165:
#line 1655 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  ;}
    break;

  case 166:
#line 1658 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName)=NULL;
  ;}
    break;

  case 167:
#line 1670 ".\\src\\parser\\xpath.y"
    {
		NodeTest *step = new (MEMMGR) NodeTest();
        step->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	;}
    break;

  case 168:
#line 1681 ".\\src\\parser\\xpath.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  ;}
    break;

  case 169:
#line 1691 ".\\src\\parser\\xpath.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   ;}
    break;

  case 170:
#line 1700 ".\\src\\parser\\xpath.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   ;}
    break;

  case 171:
#line 1709 ".\\src\\parser\\xpath.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   ;}
    break;

  case 172:
#line 1718 ".\\src\\parser\\xpath.y"
    {
      QualifiedName *qn = new (MEMMGR) QualifiedName((yyvsp[0].str), MEMMGR);
	  (yyval.qName) = qn;
	;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3172 "src/parser/XPath2Parser.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
    }



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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
		 yytoken, &yylval);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1725 ".\\src\\parser\\xpath.y"


}	// namespace XPath2


