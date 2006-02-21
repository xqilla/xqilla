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

/* Substitute the variable and function names.  */
#define yyparse XPathyyparse
#define yylex   XPathyylex
#define yyerror XPathyyerror
#define yylval  XPathyylval
#define yychar  XPathyychar
#define yydebug XPathyydebug
#define yynerrs XPathyynerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _QUESTION_ = 258,
     _LBRACK_ = 259,
     _RBRACK_ = 260,
     _PLUS_ = 261,
     _MINUS_ = 262,
     _STAR_ = 263,
     _NCNAME_COLON_STAR_ = 264,
     _STAR_COLON_NCNAME_ = 265,
     _DOT_ = 266,
     _DOT_DOT_ = 267,
     _STRING_LITERAL_ = 268,
     _SLASH_ = 269,
     _SLASHSLASH_ = 270,
     _AXIS_CHILD_ = 271,
     _AXIS_DESCENDANT_ = 272,
     _AXIS_PARENT_ = 273,
     _AXIS_ATTRIBUTE_ = 274,
     _AXIS_SELF_ = 275,
     _AXIS_DESCENDANT_OR_SELF_ = 276,
     _AXIS_ANCESTOR_ = 277,
     _AXIS_FOLLOWING_SIBLING_ = 278,
     _AXIS_PRECEDING_SIBLING_ = 279,
     _AXIS_FOLLOWING_ = 280,
     _AXIS_PRECEDING_ = 281,
     _AXIS_NAMESPACE_ = 282,
     _AXIS_ANCESTOR_OR_SELF_ = 283,
     _AT_ = 284,
     _CAST_AS_ = 285,
     _TREAT_AS_ = 286,
     _FOR_ = 287,
     _SOME_ = 288,
     _EVERY_ = 289,
     _COMMA_ = 290,
     _LPAR_ = 291,
     _TEXT_LPAR_ = 292,
     _COMMENT_LPAR_ = 293,
     _NODE_LPAR_ = 294,
     _PROCESSING_INSTRUCTION_LPAR_ = 295,
     _ELEMENT_LPAR_ = 296,
     _ATTRIBUTE_LPAR_ = 297,
     _SCHEMA_ELEMENT_LPAR_ = 298,
     _SCHEMA_ATTRIBUTE_LPAR_ = 299,
     _DOCUMENT_NODE_LPAR_ = 300,
     _IF_LPAR_ = 301,
     _QNAME_LPAR_ = 302,
     _RPAR_ = 303,
     _MULTIPLY_ = 304,
     _DIV_ = 305,
     _INTEGER_DIV_ = 306,
     _MOD_ = 307,
     _AND_ = 308,
     _OR_ = 309,
     _RETURN_ = 310,
     _THEN_ = 311,
     _ELSE_ = 312,
     _TO_ = 313,
     _UNION_ = 314,
     _INTERSECT_ = 315,
     _EXCEPT_ = 316,
     _EQUALS_ = 317,
     _IS_ = 318,
     _NOT_EQUALS_ = 319,
     _LT_EQUALS_ = 320,
     _GT_EQUALS_ = 321,
     _LT_ = 322,
     _GT_ = 323,
     _VERTICAL_BAR_ = 324,
     _LT_LT_ = 325,
     _GT_GT_ = 326,
     _FORTRAN_EQ_ = 327,
     _FORTRAN_NE_ = 328,
     _FORTRAN_GT_ = 329,
     _FORTRAN_GE_ = 330,
     _FORTRAN_LT_ = 331,
     _FORTRAN_LE_ = 332,
     _IN_ = 333,
     _SATISFIES_ = 334,
     _ITEM_ = 335,
     _EMPTY_ = 336,
     _INSTANCE_OF_ = 337,
     _CASTABLE_AS_ = 338,
     _NILLABLE_ = 339,
     _ZERO_OR_ONE_ = 340,
     _ONE_OR_MORE_ = 341,
     _ZERO_OR_MORE_ = 342,
     _VARNAME_ = 343,
     _QNAME_ = 344,
     _NCNAME_ = 345,
     _INTEGER_LITERAL_ = 346,
     _DECIMAL_LITERAL_ = 347,
     _DOUBLE_LITERAL_ = 348
   };
#endif
/* Tokens.  */
#define _QUESTION_ 258
#define _LBRACK_ 259
#define _RBRACK_ 260
#define _PLUS_ 261
#define _MINUS_ 262
#define _STAR_ 263
#define _NCNAME_COLON_STAR_ 264
#define _STAR_COLON_NCNAME_ 265
#define _DOT_ 266
#define _DOT_DOT_ 267
#define _STRING_LITERAL_ 268
#define _SLASH_ 269
#define _SLASHSLASH_ 270
#define _AXIS_CHILD_ 271
#define _AXIS_DESCENDANT_ 272
#define _AXIS_PARENT_ 273
#define _AXIS_ATTRIBUTE_ 274
#define _AXIS_SELF_ 275
#define _AXIS_DESCENDANT_OR_SELF_ 276
#define _AXIS_ANCESTOR_ 277
#define _AXIS_FOLLOWING_SIBLING_ 278
#define _AXIS_PRECEDING_SIBLING_ 279
#define _AXIS_FOLLOWING_ 280
#define _AXIS_PRECEDING_ 281
#define _AXIS_NAMESPACE_ 282
#define _AXIS_ANCESTOR_OR_SELF_ 283
#define _AT_ 284
#define _CAST_AS_ 285
#define _TREAT_AS_ 286
#define _FOR_ 287
#define _SOME_ 288
#define _EVERY_ 289
#define _COMMA_ 290
#define _LPAR_ 291
#define _TEXT_LPAR_ 292
#define _COMMENT_LPAR_ 293
#define _NODE_LPAR_ 294
#define _PROCESSING_INSTRUCTION_LPAR_ 295
#define _ELEMENT_LPAR_ 296
#define _ATTRIBUTE_LPAR_ 297
#define _SCHEMA_ELEMENT_LPAR_ 298
#define _SCHEMA_ATTRIBUTE_LPAR_ 299
#define _DOCUMENT_NODE_LPAR_ 300
#define _IF_LPAR_ 301
#define _QNAME_LPAR_ 302
#define _RPAR_ 303
#define _MULTIPLY_ 304
#define _DIV_ 305
#define _INTEGER_DIV_ 306
#define _MOD_ 307
#define _AND_ 308
#define _OR_ 309
#define _RETURN_ 310
#define _THEN_ 311
#define _ELSE_ 312
#define _TO_ 313
#define _UNION_ 314
#define _INTERSECT_ 315
#define _EXCEPT_ 316
#define _EQUALS_ 317
#define _IS_ 318
#define _NOT_EQUALS_ 319
#define _LT_EQUALS_ 320
#define _GT_EQUALS_ 321
#define _LT_ 322
#define _GT_ 323
#define _VERTICAL_BAR_ 324
#define _LT_LT_ 325
#define _GT_GT_ 326
#define _FORTRAN_EQ_ 327
#define _FORTRAN_NE_ 328
#define _FORTRAN_GT_ 329
#define _FORTRAN_GE_ 330
#define _FORTRAN_LT_ 331
#define _FORTRAN_LE_ 332
#define _IN_ 333
#define _SATISFIES_ 334
#define _ITEM_ 335
#define _EMPTY_ 336
#define _INSTANCE_OF_ 337
#define _CASTABLE_AS_ 338
#define _NILLABLE_ 339
#define _ZERO_OR_ONE_ 340
#define _ONE_OR_MORE_ 341
#define _ZERO_OR_MORE_ 342
#define _VARNAME_ 343
#define _QNAME_ 344
#define _NCNAME_ 345
#define _INTEGER_LITERAL_ 346
#define _DECIMAL_LITERAL_ 347
#define _DOUBLE_LITERAL_ 348




/* Copy the first part of user declarations.  */
#line 14 "../src/parser/XPath2Parser.y"


#include "../config/xqilla_config.h"
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

#include <xqilla/utils/XPath2NSUtils.hpp>

#include "../lexer/XPath2Lexer.hpp"

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

#define YYPARSE_PARAM parm
#define YYLEX_PARAM parm
#define YYERROR_VERBOSE
	
inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr);
void yyerror(const char* s);

#include "XPath2ParserControl.hpp"
#include <xqilla/exceptions/StaticErrorException.hpp>

#define YYDEBUG 1



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
#line 367 "../src/parser/XPath2Parser.cpp"

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
#define YYFINAL  136
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   498

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  69
/* YYNRULES -- Number of rules. */
#define YYNRULES  172
/* YYNRULES -- Number of states. */
#define YYNSTATES  265

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     4,     6,    10,    12,    14,    16,    18,
      20,    24,    27,    32,    37,    43,    47,    55,    57,    61,
      63,    67,    69,    73,    77,    81,    85,    89,    93,    97,
     101,   105,   109,   113,   117,   121,   125,   129,   131,   135,
     137,   141,   145,   147,   151,   155,   159,   163,   165,   169,
     173,   175,   179,   183,   185,   189,   191,   195,   197,   201,
     203,   207,   209,   212,   215,   217,   219,   222,   225,   227,
     229,   233,   237,   239,   241,   244,   247,   250,   252,   254,
     256,   258,   260,   262,   264,   266,   268,   271,   273,   276,
     278,   280,   282,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   307,   308,   313,   315,   317,   319,
     321,   323,   325,   327,   329,   331,   333,   335,   339,   342,
     344,   347,   351,   353,   357,   359,   362,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   404,   407,   411,   415,
     418,   421,   425,   429,   432,   435,   439,   445,   447,   449,
     453,   455,   458,   462,   468,   475,   477,   479,   483,   485,
     487,   489,   491
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      95,     0,    -1,    -1,    96,    -1,    96,    35,    97,    -1,
      97,    -1,    98,    -1,   100,    -1,   102,    -1,   103,    -1,
      99,    55,    97,    -1,    32,   101,    -1,    33,   101,    79,
      97,    -1,    34,   101,    79,    97,    -1,   101,    35,    88,
      78,    97,    -1,    88,    78,    97,    -1,    46,    96,    48,
      56,    97,    57,    97,    -1,   104,    -1,   103,    54,   104,
      -1,   105,    -1,   104,    53,   105,    -1,   106,    -1,   106,
      62,   106,    -1,   106,    64,   106,    -1,   106,    67,   106,
      -1,   106,    65,   106,    -1,   106,    68,   106,    -1,   106,
      66,   106,    -1,   106,    72,   106,    -1,   106,    73,   106,
      -1,   106,    76,   106,    -1,   106,    77,   106,    -1,   106,
      74,   106,    -1,   106,    75,   106,    -1,   106,    63,   106,
      -1,   106,    70,   106,    -1,   106,    71,   106,    -1,   107,
      -1,   107,    58,   107,    -1,   108,    -1,   107,     6,   108,
      -1,   107,     7,   108,    -1,   109,    -1,   108,    49,   109,
      -1,   108,    50,   109,    -1,   108,    51,   109,    -1,   108,
      52,   109,    -1,   110,    -1,   109,    59,   110,    -1,   109,
      69,   110,    -1,   111,    -1,   110,    60,   111,    -1,   110,
      61,   111,    -1,   112,    -1,   112,    82,   141,    -1,   113,
      -1,   113,    31,   141,    -1,   114,    -1,   114,    83,   140,
      -1,   115,    -1,   115,    30,   140,    -1,   116,    -1,     7,
     115,    -1,     6,   115,    -1,   117,    -1,    14,    -1,    14,
     118,    -1,    15,   118,    -1,   118,    -1,   119,    -1,   118,
      14,   119,    -1,   118,    15,   119,    -1,   120,    -1,   130,
      -1,   121,   131,    -1,   124,   131,    -1,   122,   127,    -1,
     123,    -1,    16,    -1,    17,    -1,    19,    -1,    20,    -1,
      21,    -1,    23,    -1,    25,    -1,    27,    -1,    29,   127,
      -1,   127,    -1,   125,   127,    -1,   126,    -1,    18,    -1,
      22,    -1,    24,    -1,    26,    -1,    28,    -1,    12,    -1,
     145,    -1,   128,    -1,   162,    -1,   129,    -1,     8,    -1,
       9,    -1,    10,    -1,   132,   131,    -1,    -1,   131,     4,
      96,     5,    -1,   133,    -1,   135,    -1,   136,    -1,   137,
      -1,   138,    -1,   134,    -1,    13,    -1,    91,    -1,    92,
      -1,    93,    -1,    88,    -1,    36,    96,    48,    -1,    36,
      48,    -1,    11,    -1,    47,    48,    -1,    47,   139,    48,
      -1,    97,    -1,   139,    35,    97,    -1,   144,    -1,   144,
       3,    -1,   143,   142,    -1,   143,    -1,    81,    -1,    87,
      -1,    86,    -1,    85,    -1,   144,    -1,   145,    -1,    80,
      -1,   162,    -1,   147,    -1,   155,    -1,   151,    -1,   157,
      -1,   153,    -1,   150,    -1,   149,    -1,   148,    -1,   146,
      -1,    39,    48,    -1,    45,    48,    -1,    45,   155,    48,
      -1,    45,   157,    48,    -1,    37,    48,    -1,    38,    48,
      -1,    40,    13,    48,    -1,    40,    90,    48,    -1,    40,
      48,    -1,    42,    48,    -1,    42,   152,    48,    -1,    42,
     152,    35,   161,    48,    -1,   159,    -1,     8,    -1,    44,
     154,    48,    -1,   159,    -1,    41,    48,    -1,    41,   156,
      48,    -1,    41,   156,    35,   161,    48,    -1,    41,   156,
      35,   161,    84,    48,    -1,   160,    -1,     8,    -1,    43,
     158,    48,    -1,   160,    -1,   162,    -1,   162,    -1,   162,
      -1,    89,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   283,   283,   287,   298,   309,   320,   323,   326,   329,
     340,   351,   361,   365,   372,   381,   398,   412,   416,   437,
     441,   471,   475,   479,   483,   487,   491,   495,   499,   503,
     507,   511,   515,   519,   523,   527,   531,   543,   547,   560,
     564,   568,   580,   584,   588,   592,   596,   608,   612,   616,
     628,   632,   636,   648,   652,   663,   666,   677,   681,   692,
     695,   706,   710,   716,   732,   744,   750,   767,   788,   802,
     806,   823,   854,   857,   867,   871,   884,   896,   915,   919,
     923,   927,   931,   935,   939,   943,   955,   963,   985,   993,
    1008,  1012,  1016,  1020,  1024,  1035,  1050,  1054,  1065,  1077,
    1089,  1096,  1106,  1123,  1136,  1139,  1152,  1156,  1160,  1164,
    1168,  1181,  1185,  1206,  1219,  1232,  1253,  1266,  1276,  1289,
    1301,  1316,  1342,  1347,  1360,  1367,  1382,  1389,  1396,  1408,
    1411,  1414,  1426,  1429,  1433,  1443,  1462,  1465,  1468,  1471,
    1474,  1477,  1480,  1483,  1486,  1497,  1511,  1516,  1524,  1540,
    1553,  1567,  1573,  1579,  1593,  1598,  1603,  1615,  1618,  1630,
    1642,  1653,  1658,  1663,  1668,  1683,  1686,  1698,  1709,  1719,
    1728,  1737,  1746
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_QUESTION_", "_LBRACK_", "_RBRACK_",
  "_PLUS_", "_MINUS_", "_STAR_", "_NCNAME_COLON_STAR_",
  "_STAR_COLON_NCNAME_", "_DOT_", "_DOT_DOT_", "_STRING_LITERAL_",
  "_SLASH_", "_SLASHSLASH_", "_AXIS_CHILD_", "_AXIS_DESCENDANT_",
  "_AXIS_PARENT_", "_AXIS_ATTRIBUTE_", "_AXIS_SELF_",
  "_AXIS_DESCENDANT_OR_SELF_", "_AXIS_ANCESTOR_",
  "_AXIS_FOLLOWING_SIBLING_", "_AXIS_PRECEDING_SIBLING_",
  "_AXIS_FOLLOWING_", "_AXIS_PRECEDING_", "_AXIS_NAMESPACE_",
  "_AXIS_ANCESTOR_OR_SELF_", "_AT_", "_CAST_AS_", "_TREAT_AS_", "_FOR_",
  "_SOME_", "_EVERY_", "_COMMA_", "_LPAR_", "_TEXT_LPAR_",
  "_COMMENT_LPAR_", "_NODE_LPAR_", "_PROCESSING_INSTRUCTION_LPAR_",
  "_ELEMENT_LPAR_", "_ATTRIBUTE_LPAR_", "_SCHEMA_ELEMENT_LPAR_",
  "_SCHEMA_ATTRIBUTE_LPAR_", "_DOCUMENT_NODE_LPAR_", "_IF_LPAR_",
  "_QNAME_LPAR_", "_RPAR_", "_MULTIPLY_", "_DIV_", "_INTEGER_DIV_",
  "_MOD_", "_AND_", "_OR_", "_RETURN_", "_THEN_", "_ELSE_", "_TO_",
  "_UNION_", "_INTERSECT_", "_EXCEPT_", "_EQUALS_", "_IS_", "_NOT_EQUALS_",
  "_LT_EQUALS_", "_GT_EQUALS_", "_LT_", "_GT_", "_VERTICAL_BAR_",
  "_LT_LT_", "_GT_GT_", "_FORTRAN_EQ_", "_FORTRAN_NE_", "_FORTRAN_GT_",
  "_FORTRAN_GE_", "_FORTRAN_LT_", "_FORTRAN_LE_", "_IN_", "_SATISFIES_",
  "_ITEM_", "_EMPTY_", "_INSTANCE_OF_", "_CASTABLE_AS_", "_NILLABLE_",
  "_ZERO_OR_ONE_", "_ONE_OR_MORE_", "_ZERO_OR_MORE_", "_VARNAME_",
  "_QNAME_", "_NCNAME_", "_INTEGER_LITERAL_", "_DECIMAL_LITERAL_",
  "_DOUBLE_LITERAL_", "$accept", "_XPath", "_Expr", "_ExprSingle",
  "_ForExpr", "_SimpleForClause", "_QuantifiedExpr",
  "_VariableBindingList", "_IfExpr", "_OrExpr", "_AndExpr",
  "_ComparisonExpr", "_RangeExpr", "_AdditiveExpr", "_MultiplicativeExpr",
  "_UnionExpr", "_IntersectExceptExpr", "_InstanceOfExpr", "_TreatExpr",
  "_CastableExpr", "_CastExpr", "_UnaryExpr", "_ValueExpr", "_PathExpr",
  "_RelativePathExpr", "_StepExpr", "_AxisStep", "_ForwardStep",
  "_ForwardAxis", "_AbbrevForwardStep", "_ReverseStep", "_ReverseAxis",
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
     345,   346,   347,   348
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    99,   100,   100,   101,   101,   102,   103,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   106,   106,   107,
     107,   107,   108,   108,   108,   108,   108,   109,   109,   109,
     110,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   116,   117,   117,   117,   117,   118,
     118,   118,   119,   119,   120,   120,   121,   121,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   125,   126,   127,   127,   128,   128,
     129,   129,   129,   130,   131,   131,   132,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   135,   136,   136,   137,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   142,
     142,   142,   143,   143,   143,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   147,   147,   147,   148,
     149,   150,   150,   150,   151,   151,   151,   152,   152,   153,
     154,   155,   155,   155,   155,   156,   156,   157,   158,   159,
     160,   161,   162
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     0,     1,     3,     1,     1,     1,     1,     1,
       3,     2,     4,     4,     5,     3,     7,     1,     3,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     2,     2,     1,     1,     2,     2,     1,     1,
       3,     3,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       2,     3,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       2,     0,     0,   100,   101,   102,   119,    95,   112,    65,
       0,    78,    79,    90,    80,    81,    82,    91,    83,    92,
      84,    93,    85,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   172,   113,   114,   115,     0,     3,     5,     6,     0,
       7,     8,     9,    17,    19,    21,    37,    39,    42,    47,
      50,    53,    55,    57,    59,    61,    64,    68,    69,    72,
     104,     0,    77,   104,     0,    89,    87,    97,    99,    73,
     104,   106,   111,   107,   108,   109,   110,    96,   144,   136,
     143,   142,   141,   138,   140,   137,   139,    98,    63,    62,
      66,    67,    86,     0,    11,     0,     0,   118,     0,   149,
     150,   145,     0,   153,     0,   166,   161,     0,   165,   170,
     158,   154,     0,   157,   169,     0,   168,     0,   160,   146,
       0,     0,     0,   120,   122,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,    76,    75,    88,   103,     0,     0,
       0,     0,   117,   151,   152,     0,   162,     0,   155,   167,
     159,   147,   148,     0,     0,   121,     4,    10,    18,    20,
      22,    34,    23,    25,    27,    24,    26,    35,    36,    28,
      29,    32,    33,    30,    31,    40,    41,    38,    43,    44,
      45,    46,    48,    49,    51,    52,   134,   128,    54,   127,
     132,   133,   135,    56,    58,   124,    60,    70,    71,     0,
      15,     0,    12,    13,     0,   171,     0,     0,   123,   131,
     130,   129,   126,   125,     0,     0,   163,     0,   156,     0,
     105,    14,   164,     0,    16
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,    45,    46,    47,    48,    49,    50,   104,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,   173,    80,    81,
      82,    83,    84,    85,    86,   135,   234,   228,   252,   229,
     230,    87,    88,    89,    90,    91,    92,    93,   122,    94,
     127,    95,   117,    96,   125,   123,   118,   244,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -45
static const short int yypact[] =
{
     307,   365,   365,   -45,   -45,   -45,   -45,   -45,   -45,   405,
     405,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,    69,   -23,   -23,   -23,    12,    20,
      22,    75,    34,    -6,    -5,     7,     7,    54,   307,   219,
     -45,   -45,   -45,   -45,   -45,   138,   110,   -45,   -45,    85,
     -45,   -45,    98,   112,   -45,   105,     3,   -44,    61,    13,
     -45,    81,   143,   121,   177,   -45,   -45,   107,   -45,   -45,
     -45,    69,   -45,   -45,    69,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     107,   107,   -45,   131,   175,    36,    37,   -45,   -31,   -45,
     -45,   -45,   163,   -45,   165,   -45,   -45,    27,   -45,   -45,
     -45,   -45,    32,   -45,   -45,   166,   -45,   167,   -45,   -45,
     169,   170,    83,   -45,   -45,    84,   -45,   307,   307,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,    48,    48,     7,
       7,   405,   405,   215,   -45,   215,   -45,   215,   307,   132,
     307,   307,   -45,   -45,   -45,     7,   -45,     7,   -45,   -45,
     -45,   -45,   -45,   193,   307,   -45,   -45,   -45,   112,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -44,   -44,   137,    61,    61,
      61,    61,    13,    13,   -45,   -45,   -45,   -45,   -45,    40,
     -45,   -45,   -45,   -45,   -45,   218,   -45,   -45,   -45,   307,
     -45,   144,   -45,   -45,    33,   -45,   202,   307,   -45,   -45,
     -45,   -45,   -45,   -45,    59,   307,   -45,   206,   -45,   211,
     -45,   -45,   -45,   307,   -45
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
     -45,   -45,   -27,   -39,   -45,   -45,   -45,   124,   -45,   -45,
     130,   133,    42,    65,    -3,   -26,    -7,    35,   -45,   -45,
     -45,   158,   -45,   -45,   152,    31,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,    -8,   -45,   -45,   -45,    -4,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   100,   103,   -45,   -45,
      29,    38,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   235,   -45,   237,   -45,   239,   241,    90,   -21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const unsigned short int yytable[] =
{
     134,   108,   115,   120,   137,   159,   160,   161,   162,   156,
     157,   132,   119,   124,   119,   124,   102,   182,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   116,   121,    25,    26,    27,   112,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
     107,   158,   185,   174,   260,   103,   176,   187,   109,   175,
     110,   179,   179,   165,   166,   186,   177,     3,     4,     5,
     188,   256,   113,    41,    41,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   137,    33,    41,    35,   196,   197,
      40,    41,   129,    42,    43,    44,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   180,   181,   257,   137,   194,
     163,   171,   172,   111,   114,   249,   250,   251,   226,   227,
     164,   193,   195,   218,   219,   220,   221,    41,   136,   240,
     138,   242,   243,   156,   157,   137,   232,   232,   232,   232,
     105,   106,   139,   215,   216,   248,   222,   223,    41,    98,
      99,   100,   101,   167,   245,   140,   245,   141,   142,   143,
     144,   145,   146,   147,   168,   148,   149,   150,   151,   152,
     153,   154,   155,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   235,   235,
     224,   225,   237,   238,   169,   231,   231,   170,   259,   178,
     179,   183,   254,   184,   189,   190,   261,   191,   192,   239,
     241,   253,   255,   217,   264,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   247,
     258,    25,    26,    27,   262,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   133,   263,   198,
     236,   233,   130,   199,   131,   128,   126,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
      42,    43,    44,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,     0,    25,
      26,    27,     0,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    40,    41,     0,    42,    43,
      44,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    39,     3,     4,     5,     6,     7,     8,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,     0,     0,     0,     0,
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    39,    40,    41,     0,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,     0,    42,    43,    44
};

static const short int yycheck[] =
{
      39,    28,     8,     8,    35,    49,    50,    51,    52,     6,
       7,    38,    33,    34,    35,    36,    24,    48,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    48,    48,    32,    33,    34,    13,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    58,    35,    71,     5,    88,    74,    35,    48,    73,
      48,    35,    35,    60,    61,    48,    80,     8,     9,    10,
      48,    48,    48,    89,    89,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    35,    41,    89,    43,   137,   138,
      88,    89,    48,    91,    92,    93,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    79,    79,    84,    35,    35,
      59,    14,    15,    48,    90,    85,    86,    87,    80,    81,
      69,    48,    48,   159,   160,   161,   162,    89,     0,   178,
      55,   180,   181,     6,     7,    35,   167,   168,   169,   170,
      26,    27,    54,   156,   157,   194,   163,   164,    89,     1,
       2,     9,    10,    82,   185,    53,   187,    62,    63,    64,
      65,    66,    67,    68,    31,    70,    71,    72,    73,    74,
      75,    76,    77,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   169,   170,
     165,   166,   171,   172,    83,   167,   168,    30,   247,    78,
      35,    48,   239,    48,    48,    48,   255,    48,    48,     4,
      88,     3,    78,   158,   263,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    56,
      48,    32,    33,    34,    48,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    57,   139,
     170,   168,    37,   140,    37,    36,    35,   187,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,
      91,    92,    93,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    88,    89,    -1,    91,    92,
      93,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,     8,     9,    10,    11,    12,    13,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    88,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    89,    -1,    91,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    32,    33,    34,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      88,    89,    91,    92,    93,    95,    96,    97,    98,    99,
     100,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     132,   133,   134,   135,   136,   137,   138,   145,   146,   147,
     148,   149,   150,   151,   153,   155,   157,   162,   115,   115,
     118,   118,   127,    88,   101,   101,   101,    48,    96,    48,
      48,    48,    13,    48,    90,     8,    48,   156,   160,   162,
       8,    48,   152,   159,   162,   158,   160,   154,   159,    48,
     155,   157,    96,    48,    97,   139,     0,    35,    55,    54,
      53,    62,    63,    64,    65,    66,    67,    68,    70,    71,
      72,    73,    74,    75,    76,    77,     6,     7,    58,    49,
      50,    51,    52,    59,    69,    60,    61,    82,    31,    83,
      30,    14,    15,   131,   127,   131,   127,   131,    78,    35,
      79,    79,    48,    48,    48,    35,    48,    35,    48,    48,
      48,    48,    48,    48,    35,    48,    97,    97,   104,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   108,   108,   107,   109,   109,
     109,   109,   110,   110,   111,   111,    80,    81,   141,   143,
     144,   145,   162,   141,   140,   144,   140,   119,   119,     4,
      97,    88,    97,    97,   161,   162,   161,    56,    97,    85,
      86,    87,   142,     3,    96,    78,    48,    84,    48,    97,
       5,    97,    48,    57,    97
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
int XQILLA_API yydebug;
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
#line 283 "../src/parser/XPath2Parser.y"
    {
      ((XPathParserControl *)parm)->result = new (((XPathParserControl *)parm)->memMgr) XQSequence(((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 3:
#line 287 "../src/parser/XPath2Parser.y"
    {
      ((XPathParserControl *)parm)->result = (yyvsp[0].astNodeImpl);
	}
    break;

  case 4:
#line 298 "../src/parser/XPath2Parser.y"
    {
		if((yyvsp[-2].astNodeImpl)->getType()==ASTNode::PARENTHESIZED)
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		else
		{
			XQParenthesizedExpr *dis = new (((XPathParserControl *)parm)->memMgr) XQParenthesizedExpr(((XPathParserControl *)parm)->memMgr);
			dis->addItem((yyvsp[-2].astNodeImpl));
			(yyval.astNodeImpl) = dis;
		}
		((XQParenthesizedExpr *)(yyval.astNodeImpl))->addItem((yyvsp[0].astNodeImpl));
	}
    break;

  case 5:
#line 309 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 6:
#line 320 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 7:
#line 323 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 8:
#line 326 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 9:
#line 329 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 10:
#line 340 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQFLWOR((yyvsp[-2].variableBinding), NULL, NULL, (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 11:
#line 351 "../src/parser/XPath2Parser.y"
    {
        (yyval.variableBinding) = (yyvsp[0].variableBinding);
    }
    break;

  case 12:
#line 361 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQQuantified(XQQuantified::some, (yyvsp[-2].variableBinding), (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 13:
#line 365 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQQuantified(XQQuantified::every, (yyvsp[-2].variableBinding), (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 14:
#line 372 "../src/parser/XPath2Parser.y"
    {
		XQVariableBinding* bind=new (((XPathParserControl *)parm)->memMgr) XQVariableBinding(((XPathParserControl *)parm)->memMgr,
                                                                                         XQVariableBinding::forBinding,
                                                                                         ((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[-2].wString)), (yyvsp[0].astNodeImpl));
		(yyvsp[-4].variableBinding)->push_back(bind);
		(yyval.variableBinding) = (yyvsp[-4].variableBinding);
		delete [] (yyvsp[-2].wString);
	}
    break;

  case 15:
#line 381 "../src/parser/XPath2Parser.y"
    {
		(yyval.variableBinding) = new (((XPathParserControl *)parm)->memMgr) VectorOfVariableBinding(XQillaAllocator<XQVariableBinding*>((((XPathParserControl *)parm)->memMgr)));
		XQVariableBinding* bind=new (((XPathParserControl *)parm)->memMgr) XQVariableBinding(((XPathParserControl *)parm)->memMgr,
                                                                                         XQVariableBinding::forBinding,
                                                                                         ((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[-2].wString)), (yyvsp[0].astNodeImpl));
		(yyval.variableBinding)->push_back(bind);
		delete [] (yyvsp[-2].wString);
	}
    break;

  case 16:
#line 398 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQIf((yyvsp[-5].astNodeImpl), (yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 17:
#line 412 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 18:
#line 416 "../src/parser/XPath2Parser.y"
    {
    if((yyvsp[-2].astNodeImpl)->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>((yyvsp[-2].astNodeImpl)))->getOperatorName() == Or::name) {
			Or* pOr = static_cast<Or*>((yyvsp[-2].astNodeImpl));
			pOr->addArgument((yyvsp[0].astNodeImpl));
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		}
		else
		{
			ASTNodeImpl *dii = new (((XPathParserControl *)parm)->memMgr) Or(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
			(yyval.astNodeImpl) = dii;
		}
	}
    break;

  case 19:
#line 437 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 20:
#line 441 "../src/parser/XPath2Parser.y"
    {
    if((yyvsp[-2].astNodeImpl)->getType() == ASTNode::OPERATOR
       && (static_cast<XQOperator *>((yyvsp[-2].astNodeImpl)))->getOperatorName() == And::name) {
			And* pAnd = static_cast<And*>((yyvsp[-2].astNodeImpl));
			pAnd->addArgument((yyvsp[0].astNodeImpl));
			(yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
		}
		else
		{
			ASTNodeImpl *dii = new (((XPathParserControl *)parm)->memMgr) And(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl), ((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
			(yyval.astNodeImpl) = dii;
		}
	}
    break;

  case 21:
#line 471 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 22:
#line 475 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 23:
#line 479 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 24:
#line 483 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 25:
#line 487 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 26:
#line 491 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 27:
#line 495 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[-2].astNodeImpl),(yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 28:
#line 499 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Equals(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 29:
#line 503 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) NotEquals(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 30:
#line 507 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) LessThan(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 31:
#line 511 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) LessThanEqual(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 32:
#line 515 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GreaterThan(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 33:
#line 519 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) GreaterThanEqual(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 34:
#line 523 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) NodeComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 35:
#line 527 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) OrderComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), true, ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 36:
#line 531 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) OrderComparison(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), false, ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 37:
#line 543 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 38:
#line 547 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Range(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 39:
#line 560 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 40:
#line 564 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Plus(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 41:
#line 568 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Minus(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 42:
#line 580 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 43:
#line 584 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Multiply(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 44:
#line 588 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Divide(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 45:
#line 592 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) IntegerDivide(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 46:
#line 596 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Mod(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 47:
#line 608 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 48:
#line 612 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Union(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 49:
#line 616 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Union(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 50:
#line 628 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 51:
#line 632 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Intersect(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 52:
#line 636 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) Except(packageArgs((yyvsp[-2].astNodeImpl), (yyvsp[0].astNodeImpl),((XPathParserControl *)parm)->memMgr), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 53:
#line 648 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 54:
#line 652 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQInstanceOf((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 55:
#line 663 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 56:
#line 666 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQTreatAs((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 57:
#line 677 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 58:
#line 681 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQCastableAs((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 59:
#line 692 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 60:
#line 695 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQCastAs((yyvsp[-2].astNodeImpl), (yyvsp[0].sequenceType),((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 61:
#line 706 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 62:
#line 710 "../src/parser/XPath2Parser.y"
    {
	  VectorOfASTNodes args(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
	  args.push_back((yyvsp[0].astNodeImpl));
	  (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) UnaryMinus(args, ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 63:
#line 716 "../src/parser/XPath2Parser.y"
    {
		//no need to do anything with unary plus
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 64:
#line 732 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 65:
#line 744 "../src/parser/XPath2Parser.y"
    {
		XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
    nav->addInitialRootStep(((XPathParserControl *)parm)->memMgr);
		(yyval.astNodeImpl) = nav;
  }
    break;

  case 66:
#line 750 "../src/parser/XPath2Parser.y"
    {

        // Optimization: if the _RelativePathExpr is already a XQNav, simply set the "go to root" flag
        if((yyvsp[0].astNodeImpl)->getType()==ASTNode::NAVIGATION)
        {
            ((XQNav*)(yyvsp[0].astNodeImpl))->addInitialRootStep(((XPathParserControl *)parm)->memMgr);
            (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
        }
        else
        {
	        XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
          nav->addInitialRootStep(((XPathParserControl *)parm)->memMgr);
  		    nav->addStep((yyvsp[0].astNodeImpl));
	  	    (yyval.astNodeImpl) = nav;
        }
  }
    break;

  case 67:
#line 767 "../src/parser/XPath2Parser.y"
    {
    XQNav *nav = 0;
    if((yyvsp[0].astNodeImpl)->getType()==ASTNode::NAVIGATION) {
      nav = (XQNav*)(yyvsp[0].astNodeImpl);
    }
    else {
      nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
      nav->addStep((yyvsp[0].astNodeImpl));
    }

    NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStepFront(new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::DESCENDANT_OR_SELF, step, ((XPathParserControl *)parm)->memMgr));

    nav->addInitialRootStep(((XPathParserControl *)parm)->memMgr);

    (yyval.astNodeImpl) = nav;
	}
    break;

  case 68:
#line 788 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
  }
    break;

  case 69:
#line 802 "../src/parser/XPath2Parser.y"
    {
	  (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 70:
#line 806 "../src/parser/XPath2Parser.y"
    {

        // Optimization: if the _RelativePathExpr is already a XQNav, simply add the new step
        if((yyvsp[-2].astNodeImpl)->getType()==ASTNode::NAVIGATION)
        {
            ((XQNav*)(yyvsp[-2].astNodeImpl))->addStep((yyvsp[0].astNodeImpl));
            (yyval.astNodeImpl) = (yyvsp[-2].astNodeImpl);
        }
        else
        {
		    XQNav *nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
		    nav->addStep((yyvsp[-2].astNodeImpl));
		    nav->addStep((yyvsp[0].astNodeImpl));
		    (yyval.astNodeImpl) = nav;
        }
	}
    break;

  case 71:
#line 823 "../src/parser/XPath2Parser.y"
    {

    XQNav *nav = 0;
    if((yyvsp[-2].astNodeImpl)->getType()==ASTNode::NAVIGATION) {
      nav = (XQNav*)(yyvsp[-2].astNodeImpl);
    }
    else {
      nav = new (((XPathParserControl *)parm)->memMgr) XQNav(((XPathParserControl *)parm)->memMgr);
      nav->addStep((yyvsp[-2].astNodeImpl));
    }

    NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(XQStep::DESCENDANT_OR_SELF, step);

    nav->addStep((yyvsp[0].astNodeImpl));

    (yyval.astNodeImpl) = nav;
	}
    break;

  case 72:
#line 854 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 73:
#line 857 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
    }
    break;

  case 74:
#line 867 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
    }
    break;

  case 75:
#line 871 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
        (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQDocumentOrder((yyval.astNodeImpl), ((XPathParserControl *)parm)->memMgr);
    }
    break;

  case 76:
#line 884 "../src/parser/XPath2Parser.y"
    {
      if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
        switch((yyvsp[-1].axis)) {
        case XQStep::NAMESPACE: (yyvsp[0].nodeTest)->setNodeType(Node::namespace_string); break;
        case XQStep::ATTRIBUTE: (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string); break;
        default: (yyvsp[0].nodeTest)->setNodeType(Node::element_string); break;
        }
      }

      (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 77:
#line 896 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 78:
#line 915 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::CHILD;
	}
    break;

  case 79:
#line 919 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
	}
    break;

  case 80:
#line 923 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
	}
    break;

  case 81:
#line 927 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::SELF;
	}
    break;

  case 82:
#line 931 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
	}
    break;

  case 83:
#line 935 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
	}
    break;

  case 84:
#line 939 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
	}
    break;

  case 85:
#line 943 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
	}
    break;

  case 86:
#line 955 "../src/parser/XPath2Parser.y"
    {
    if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
      (yyvsp[0].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::ATTRIBUTE, (yyvsp[0].nodeTest), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 87:
#line 963 "../src/parser/XPath2Parser.y"
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

    (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQStep(axis, (yyvsp[0].nodeTest), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 88:
#line 985 "../src/parser/XPath2Parser.y"
    {
    if(!(yyvsp[0].nodeTest)->isNodeTypeSet()) {
      (yyvsp[0].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQStep((yyvsp[-1].axis), (yyvsp[0].nodeTest), ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 89:
#line 993 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 90:
#line 1008 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::PARENT;
	}
    break;

  case 91:
#line 1012 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
	}
    break;

  case 92:
#line 1016 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
	}
    break;

  case 93:
#line 1020 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
	}
    break;

  case 94:
#line 1024 "../src/parser/XPath2Parser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
	}
    break;

  case 95:
#line 1035 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest;
		step->setNameWildcard();
		step->setNamespaceWildcard();
		step->setTypeWildcard();
    (yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQStep(XQStep::PARENT, step, ((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 96:
#line 1050 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 97:
#line 1054 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 98:
#line 1065 "../src/parser/XPath2Parser.y"
    {
        NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();

        if((yyvsp[0].qName)->getPrefix() == NULL)
            step->setNodeName((yyvsp[0].qName)->getName());
        else {
            step->setNodeName((yyvsp[0].qName)->getName());
            const XMLCh *uri = ((XPathParserControl *)parm)->context->getUriBoundToPrefix((yyvsp[0].qName)->getPrefix());
            step->setNodeUri(uri);
        }
        (yyval.nodeTest) = step;
    }
    break;

  case 99:
#line 1077 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 100:
#line 1089 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
		step->setNameWildcard();
		step->setNamespaceWildcard();
		(yyval.nodeTest) = step;
	}
    break;

  case 101:
#line 1096 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
		step->setNameWildcard();
		const XMLCh* uri = ((XPathParserControl *)parm)->context->getUriBoundToPrefix((yyvsp[0].wString));
		step->setNodeUri(uri);

		(yyval.nodeTest) = step;
    delete (yyvsp[0].wString);
	}
    break;

  case 102:
#line 1106 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
    
		step->setNodeName(((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[0].wString)));
		step->setNamespaceWildcard();
		(yyval.nodeTest) = step;
    delete (yyvsp[0].wString);
	}
    break;

  case 103:
#line 1123 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeImpl) = XQPredicate::addPredicates((yyvsp[-1].astNodeImpl), (yyvsp[0].predicates));
        delete (yyvsp[0].predicates);
    }
    break;

  case 104:
#line 1136 "../src/parser/XPath2Parser.y"
    {
        (yyval.predicates) = new VectorOfPredicates(((XPathParserControl *)parm)->memMgr);
    }
    break;

  case 105:
#line 1139 "../src/parser/XPath2Parser.y"
    {
        XQPredicate *pred = new (((XPathParserControl *)parm)->memMgr) XQPredicate((yyvsp[-1].astNodeImpl), ((XPathParserControl *)parm)->memMgr);
        (yyvsp[-3].predicates)->push_back(pred);
        (yyval.predicates) = (yyvsp[-3].predicates);
	}
    break;

  case 106:
#line 1152 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 107:
#line 1156 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 108:
#line 1160 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 109:
#line 1164 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 110:
#line 1168 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 111:
#line 1181 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = (yyvsp[0].astNodeImpl);
	}
    break;

  case 112:
#line 1185 "../src/parser/XPath2Parser.y"
    {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
				XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_STRING,
				((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[0].wString)),
        AnyAtomicType::STRING);
		XQLiteral *str_val  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
		(yyval.astNodeImpl) = str_val;
        delete [] (yyvsp[0].wString);
	}
    break;

  case 113:
#line 1206 "../src/parser/XPath2Parser.y"
    {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_INTEGER,
				((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[0].wString)),
      AnyAtomicType::DECIMAL);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete [] (yyvsp[0].wString);
    (yyval.astNodeImpl) = did;
  }
    break;

  case 114:
#line 1219 "../src/parser/XPath2Parser.y"
    {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DECIMAL,
				((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[0].wString)),
      AnyAtomicType::DECIMAL);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete (yyvsp[0].wString);
    (yyval.astNodeImpl) = did;
  }
    break;

  case 115:
#line 1232 "../src/parser/XPath2Parser.y"
    {
    AnyAtomicTypeConstructor *ic = new (((XPathParserControl *)parm)->memMgr)
      AnyAtomicTypeConstructor(
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
			XERCES_CPP_NAMESPACE_QUALIFIER SchemaSymbols::fgDT_DOUBLE,
				((XPathParserControl *)parm)->memMgr->getPooledString((yyvsp[0].wString)),
      AnyAtomicType::DOUBLE);
    XQLiteral *did  = new (((XPathParserControl *)parm)->memMgr)
      XQLiteral(ic, ((XPathParserControl *)parm)->memMgr);
    delete (yyvsp[0].wString);
    (yyval.astNodeImpl) = did;
  }
    break;

  case 116:
#line 1253 "../src/parser/XPath2Parser.y"
    {
		XQVariable *var = new (((XPathParserControl *)parm)->memMgr) XQVariable((yyvsp[0].wString), ((XPathParserControl *)parm)->memMgr);
		delete [] (yyvsp[0].wString);
		(yyval.astNodeImpl) = var;
  }
    break;

  case 117:
#line 1266 "../src/parser/XPath2Parser.y"
    {
        if((yyvsp[-1].astNodeImpl)->getType()!=ASTNode::PARENTHESIZED)
        {
          XQParenthesizedExpr *dis = new (((XPathParserControl *)parm)->memMgr) XQParenthesizedExpr(((XPathParserControl *)parm)->memMgr);
          dis->addItem((yyvsp[-1].astNodeImpl));
          (yyval.astNodeImpl) = dis;
        }
        else
          (yyval.astNodeImpl) = (yyvsp[-1].astNodeImpl);
	}
    break;

  case 118:
#line 1276 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQSequence(((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 119:
#line 1289 "../src/parser/XPath2Parser.y"
    {
		(yyval.astNodeImpl) = new (((XPathParserControl *)parm)->memMgr) XQContextItem(((XPathParserControl *)parm)->memMgr);
	}
    break;

  case 120:
#line 1301 "../src/parser/XPath2Parser.y"
    {
        QualifiedName *qname = new (((XPathParserControl *)parm)->memMgr) QualifiedName((yyvsp[-1].wString), ((XPathParserControl *)parm)->memMgr);
        delete (yyvsp[-1].wString);
        VectorOfASTNodes tmp(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
        ASTNode* functionImpl = ((XPathParserControl*)parm)->context->lookUpFunction(qname->getPrefix(), qname->getName(), tmp);
        if( functionImpl == NULL) {
          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, ((XPathParserControl *)parm)->memMgr);
          buf.set(X("Function '"));
          buf.append(qname->getFullName(((XPathParserControl *)parm)->memMgr));
          buf.append(X("' is undefined [err:XPST0017]"));
          XQThrow(StaticErrorException, X("XPath2Parser.y"), buf.getRawBuffer());
        }
        (yyval.astNodeImpl) = functionImpl;
	}
    break;

  case 121:
#line 1316 "../src/parser/XPath2Parser.y"
    {
        QualifiedName *qname = new (((XPathParserControl *)parm)->memMgr) QualifiedName((yyvsp[-2].wString), ((XPathParserControl *)parm)->memMgr);
        delete [] (yyvsp[-2].wString);
        ASTNode* functionImpl = ((XPathParserControl*)parm)->context->lookUpFunction(qname->getPrefix(), qname->getName(), *(yyvsp[-1].astNodeStore));
        if( functionImpl == NULL) {
          XERCES_CPP_NAMESPACE_QUALIFIER XMLBuffer buf(1023, ((XPathParserControl *)parm)->memMgr);
          buf.set(X("Function '"));
          buf.append(qname->getFullName(((XPathParserControl *)parm)->memMgr));
          buf.append(X("' is undefined [err:XPST0017]"));
          XQThrow(StaticErrorException, X("XPath2Parser.y"), buf.getRawBuffer());
        }
        (yyval.astNodeImpl) = functionImpl;
        delete (yyvsp[-1].astNodeStore);
	}
    break;

  case 122:
#line 1342 "../src/parser/XPath2Parser.y"
    {
        (yyval.astNodeStore) = new VectorOfASTNodes(XQillaAllocator<ASTNode*>(((XPathParserControl *)parm)->memMgr));
        (yyval.astNodeStore)->push_back((yyvsp[0].astNodeImpl));
	  }
    break;

  case 123:
#line 1347 "../src/parser/XPath2Parser.y"
    {
        (yyvsp[-2].astNodeStore)->push_back((yyvsp[0].astNodeImpl));
		(yyval.astNodeStore) = (yyvsp[-2].astNodeStore);
	}
    break;

  case 124:
#line 1360 "../src/parser/XPath2Parser.y"
    {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName)));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		(yyval.sequenceType) = seq;
	}
    break;

  case 125:
#line 1367 "../src/parser/XPath2Parser.y"
    {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[-1].qName)));
		seq->setOccurrence(SequenceType::QUESTION_MARK);
		(yyval.sequenceType) = seq;
	}
    break;

  case 126:
#line 1382 "../src/parser/XPath2Parser.y"
    {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType((yyvsp[-1].itemType));
		seq->setOccurrence((yyvsp[0].occurrence));
		(yyval.sequenceType) = seq;
	}
    break;

  case 127:
#line 1389 "../src/parser/XPath2Parser.y"
    {
		SequenceType* seq=new (((XPathParserControl *)parm)->memMgr) SequenceType();
		seq->setItemType((yyvsp[0].itemType));
		seq->setOccurrence(SequenceType::EXACTLY_ONE);
		(yyval.sequenceType) = seq;
	}
    break;

  case 128:
#line 1396 "../src/parser/XPath2Parser.y"
    {
		(yyval.sequenceType) = new (((XPathParserControl *)parm)->memMgr) SequenceType();
	}
    break;

  case 129:
#line 1408 "../src/parser/XPath2Parser.y"
    {
		(yyval.occurrence) = SequenceType::STAR;
	}
    break;

  case 130:
#line 1411 "../src/parser/XPath2Parser.y"
    {
		(yyval.occurrence) = SequenceType::PLUS;
	}
    break;

  case 131:
#line 1414 "../src/parser/XPath2Parser.y"
    {
		(yyval.occurrence) = SequenceType::QUESTION_MARK;
	}
    break;

  case 132:
#line 1426 "../src/parser/XPath2Parser.y"
    {
        (yyval.itemType) = new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[0].qName));
    }
    break;

  case 133:
#line 1429 "../src/parser/XPath2Parser.y"
    {
        (yyval.itemType) = (yyvsp[0].nodeTest)->getItemType();
        (yyvsp[0].nodeTest)->setItemType(NULL);
    }
    break;

  case 134:
#line 1433 "../src/parser/XPath2Parser.y"
    {
        (yyval.itemType) = new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
    }
    break;

  case 135:
#line 1443 "../src/parser/XPath2Parser.y"
    {
		(yyval.qName) = (yyvsp[0].qName);
	}
    break;

  case 136:
#line 1462 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 137:
#line 1465 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 138:
#line 1468 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 139:
#line 1471 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 140:
#line 1474 "../src/parser/XPath2Parser.y"
    {
        (yyval.nodeTest) = (yyvsp[0].nodeTest);
    }
    break;

  case 141:
#line 1477 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 142:
#line 1480 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 143:
#line 1483 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 144:
#line 1486 "../src/parser/XPath2Parser.y"
    {
		(yyval.nodeTest) = (yyvsp[0].nodeTest);
	}
    break;

  case 145:
#line 1497 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE));
		(yyval.nodeTest) = step;
	}
    break;

  case 146:
#line 1511 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 147:
#line 1516 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 148:
#line 1524 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* elemTest=(yyvsp[-1].nodeTest)->getItemType();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT,elemTest->getName(),elemTest->getType()));
        elemTest->setName(NULL);
        elemTest->setType(NULL);
		(yyval.nodeTest) = step;
	}
    break;

  case 149:
#line 1540 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT));
		(yyval.nodeTest) = step;
	}
    break;

  case 150:
#line 1553 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 151:
#line 1567 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (((XPathParserControl *)parm)->memMgr) QualifiedName((yyvsp[-1].wString))));
		(yyval.nodeTest) = step;
		delete (yyvsp[-1].wString);
	}
    break;

  case 152:
#line 1573 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (((XPathParserControl *)parm)->memMgr) QualifiedName((yyvsp[-1].wString))));
		(yyval.nodeTest) = step;
		delete (yyvsp[-1].wString);
	}
    break;

  case 153:
#line 1579 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_PI));
		(yyval.nodeTest) = step;
	}
    break;

  case 154:
#line 1593 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE));
		(yyval.nodeTest) = step;
	}
    break;

  case 155:
#line 1598 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 156:
#line 1603 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE, (yyvsp[-3].qName), (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 157:
#line 1615 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  }
    break;

  case 158:
#line 1618 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName)=NULL;
  }
    break;

  case 159:
#line 1630 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 160:
#line 1642 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  }
    break;

  case 161:
#line 1653 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT));
		(yyval.nodeTest) = step;
	}
    break;

  case 162:
#line 1658 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 163:
#line 1663 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-3].qName), (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 164:
#line 1668 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        SequenceType::ItemType* pType=new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT, (yyvsp[-4].qName), (yyvsp[-2].qName));
        pType->setAllowNilled(true);
        step->setItemType(pType);
		(yyval.nodeTest) = step;
	}
    break;

  case 165:
#line 1683 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  }
    break;

  case 166:
#line 1686 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName)=NULL;
  }
    break;

  case 167:
#line 1698 "../src/parser/XPath2Parser.y"
    {
		NodeTest *step = new (((XPathParserControl *)parm)->memMgr) NodeTest();
        step->setItemType(new (((XPathParserControl *)parm)->memMgr) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT, (yyvsp[-1].qName)));
		(yyval.nodeTest) = step;
	}
    break;

  case 168:
#line 1709 "../src/parser/XPath2Parser.y"
    {
    (yyval.qName) = (yyvsp[0].qName);
  }
    break;

  case 169:
#line 1719 "../src/parser/XPath2Parser.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   }
    break;

  case 170:
#line 1728 "../src/parser/XPath2Parser.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   }
    break;

  case 171:
#line 1737 "../src/parser/XPath2Parser.y"
    {
       (yyval.qName) = (yyvsp[0].qName);
   }
    break;

  case 172:
#line 1746 "../src/parser/XPath2Parser.y"
    {
		QualifiedName *qn = new (((XPathParserControl *)parm)->memMgr) QualifiedName((yyvsp[0].wString), ((XPathParserControl *)parm)->memMgr);
		delete [] (yyvsp[0].wString);
	  (yyval.qName) = qn;
	}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3191 "../src/parser/XPath2Parser.cpp"

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


#line 1754 "../src/parser/XPath2Parser.y"


void yyerror(const char *s)
{
  XQThrow(StaticErrorException, X("XPath2Parser.y"), X(s));
}

inline VectorOfASTNodes packageArgs(ASTNode *arg1Impl, ASTNode *arg2Impl, XPath2MemoryManager* memMgr)
{
	VectorOfASTNodes args=VectorOfASTNodes(2,(ASTNode*)NULL,XQillaAllocator<ASTNode*>(memMgr));
	args[0]=arg1Impl;
	args[1]=arg2Impl;

	return args;
}

