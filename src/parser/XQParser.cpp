
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 20 "../src/parser/XQParser.y"


#if defined(WIN32) && !defined(__CYGWIN__)
// turn off the warnings "switch statement contains 'default' but no 'case' labels"
//                       "'yyerrlab1' : unreferenced label"
#pragma warning(disable : 4065 4102)
#endif

#include <cstdio>
#include <iostream>
#include <sstream>

#include <xqilla/utils/UTF8Str.hpp>

#include "../lexer/XQLexer.hpp"

#include <xqilla/simple-api/XQQuery.hpp>
#include <xqilla/ast/XQFunction.hpp>
#include <xqilla/ast/XQDocumentConstructor.hpp>
#include <xqilla/ast/XQElementConstructor.hpp>
#include <xqilla/ast/XQAttributeConstructor.hpp>
#include <xqilla/ast/XQNamespaceConstructor.hpp>
#include <xqilla/ast/XQPIConstructor.hpp>
#include <xqilla/ast/XQCommentConstructor.hpp>
#include <xqilla/ast/XQTextConstructor.hpp>
#include <xqilla/ast/XQQuantified.hpp>
#include <xqilla/ast/XQTypeswitch.hpp>
#include <xqilla/ast/XQValidate.hpp>
#include <xqilla/ast/XQGlobalVariable.hpp>
#include <xqilla/ast/XQTypeAlias.hpp>
#include <xqilla/ast/XQRewriteRule.hpp>
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQExprSubstitution.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
#include <xqilla/ast/XQTupleConstructor.hpp>
#include <xqilla/ast/XQTupleMember.hpp>
#include <xqilla/ast/XQNamespaceBinding.hpp>

#include <xercesc/validators/schema/SchemaSymbols.hpp>
#include <xercesc/dom/DOMXPathNSResolver.hpp>

#include <xqilla/ast/XQSequence.hpp>
#include <xqilla/ast/XQNav.hpp>
#include <xqilla/ast/XQStep.hpp>
#include <xqilla/ast/XQLiteral.hpp>
#include <xqilla/ast/XQVariable.hpp>
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
#include <xqilla/ast/XQPartialApply.hpp>
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
#include <xqilla/ast/CountTuple.hpp>

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

#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/FunctionError.hpp>
#include <xqilla/functions/XQillaFunction.hpp>
#include <xqilla/functions/BuiltInModules.hpp>

#include <xqilla/axis/NodeTest.hpp>

#include <xqilla/schema/SequenceType.hpp>
#include <xqilla/context/DynamicContext.hpp>
#include <xqilla/exceptions/NamespaceLookupException.hpp>
#include <xqilla/exceptions/ContextException.hpp>
#include <xqilla/exceptions/StaticErrorException.hpp>

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
#define MEMMGR   (QP->_lexer->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos)    if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_VERSION11(where,pos) if(!QP->_lexer->isVersion11()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_lexer->getFile(), (pos).first_line, (pos).first_column)

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

#define SET_BUILT_IN_NAMESPACE(prefix, uri) { \
  if(!QP->_namespaceDecls.containsKey((prefix))) \
    CONTEXT->setNamespaceBinding((prefix), (uri)); \
}

#undef yylex
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh sz1_1[] = { chDigit_1, chPeriod, chDigit_1, chNull };
static const XMLCh sz3_0[] = { chDigit_3, chPeriod, chDigit_0, chNull };
static const XMLCh option_projection[] = { 'p', 'r', 'o', 'j', 'e', 'c', 't', 'i', 'o', 'n', 0 };
static const XMLCh option_psvi[] = { 'p', 's', 'v', 'i', 0 };
static const XMLCh option_lint[] = { 'l', 'i', 'n', 't', 0 };
static const XMLCh option_extensions[] = { 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 0 };
static const XMLCh option_rule[] = { 'r', 'u', 'l', 'e', 0 };
static const XMLCh var_name[] = { 'n', 'a', 'm', 'e', 0 };

static const XMLCh XMLChXS[]    = { chLatin_x, chLatin_s, chNull };
static const XMLCh XMLChXSI[]   = { chLatin_x, chLatin_s, chLatin_i, chNull };
static const XMLCh XMLChFN[]    = { chLatin_f, chLatin_n, chNull };
static const XMLCh XMLChLOCAL[] = { chLatin_l, chLatin_o, chLatin_c, chLatin_a, chLatin_l, chNull };
static const XMLCh XMLChERR[]   = { chLatin_e, chLatin_r, chLatin_r, chNull };

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
    pObjToWrap->setLocationInfo(QP->_lexer->getFile(), line, column);
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

static ASTNode *variableValueXSLT(const yyltype &pos, XQParserArgs *qp, ASTNode *select, XQSequence *seqConstruct, SequenceType *seqType)
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
    return WRAP(pos, new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING,
        XMLUni::fgZeroLenString, MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

namespace XQParser {



/* Line 189 of yacc.c  */
#line 403 "../src/parser/XQParser.cpp"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MYEOF = 0,
     _LANG_XPATH2_ = 258,
     _LANG_XQUERY_ = 259,
     _LANG_XSLT2_ = 260,
     _LANG_FUNCDECL_ = 261,
     _LANG_DELAYEDMODULE_ = 262,
     _LANG_FUNCTION_SIGNATURE_ = 263,
     _LANG_REWRITE_RULE_ = 264,
     _LANG_REWRITE_PATTERN_ = 265,
     _LANG_SEQUENCE_TYPE_ = 266,
     _DOLLAR_ = 267,
     _COLON_EQUALS_ = 268,
     _ASTERISK_ = 269,
     _BAR_ = 270,
     _BANG_EQUALS_ = 271,
     _LESS_THAN_EQUALS_ = 272,
     _GREATER_THAN_ = 273,
     _GREATER_THAN_EQUALS_ = 274,
     _LESS_THAN_LESS_THAN_ = 275,
     _GREATER_THAN_GREATER_THAN_ = 276,
     _COLON_COLON_ = 277,
     _AT_SIGN_ = 278,
     _LSQUARE_ = 279,
     _RSQUARE_ = 280,
     _QUESTION_MARK_ = 281,
     _LESS_THAN_OP_OR_TAG_ = 282,
     _START_TAG_CLOSE_ = 283,
     _END_TAG_CLOSE_ = 284,
     _PI_START_ = 285,
     _XML_COMMENT_START_ = 286,
     _XML_COMMENT_END_ = 287,
     _SLASH_SLASH_ = 288,
     _END_TAG_OPEN_ = 289,
     _PRAGMA_OPEN_ = 290,
     _COMMA_ = 291,
     _PLUS_ = 292,
     _MINUS_ = 293,
     _SLASH_ = 294,
     _EQUALS_ = 295,
     _DOT_ = 296,
     _DOT_DOT_ = 297,
     _LPAR_ = 298,
     _RPAR_ = 299,
     _EMPTY_TAG_CLOSE_ = 300,
     _VALUE_INDICATOR_ = 301,
     _OPEN_QUOT_ = 302,
     _CLOSE_QUOT_ = 303,
     _OPEN_APOS_ = 304,
     _CLOSE_APOS_ = 305,
     _LBRACE_ = 306,
     _RBRACE_ = 307,
     _SEMICOLON_ = 308,
     _HASH_ = 309,
     _PERCENT_ = 310,
     _COLON_ = 311,
     _TILDE_ = 312,
     _MINUS_GREATER_THAN_ = 313,
     _INTEGER_LITERAL_ = 314,
     _DECIMAL_LITERAL_ = 315,
     _DOUBLE_LITERAL_ = 316,
     _ATTRIBUTE_ = 317,
     _COMMENT_ = 318,
     _DOCUMENT_NODE_ = 319,
     _NAMESPACE_NODE_ = 320,
     _NODE_ = 321,
     _PROCESSING_INSTRUCTION_ = 322,
     _SCHEMA_ATTRIBUTE_ = 323,
     _SCHEMA_ELEMENT_ = 324,
     _TEXT_ = 325,
     _EMPTY_SEQUENCE_ = 326,
     _BOUNDARY_SPACE_ = 327,
     _FT_OPTION_ = 328,
     _BASE_URI_ = 329,
     _LAX_ = 330,
     _STRICT_ = 331,
     _IDIV_ = 332,
     _CHILD_ = 333,
     _DESCENDANT_ = 334,
     _SELF_ = 335,
     _DESCENDANT_OR_SELF_ = 336,
     _FOLLOWING_SIBLING_ = 337,
     _FOLLOWING_ = 338,
     _PARENT_ = 339,
     _ANCESTOR_ = 340,
     _PRECEDING_SIBLING_ = 341,
     _PRECEDING_ = 342,
     _ANCESTOR_OR_SELF_ = 343,
     _DOCUMENT_ = 344,
     _NOT_ = 345,
     _USING_ = 346,
     _NO_ = 347,
     _SENSITIVE_ = 348,
     _INSENSITIVE_ = 349,
     _DIACRITICS_ = 350,
     _WITHOUT_ = 351,
     _WITHOUT_C_ = 352,
     _STEMMING_ = 353,
     _THESAURUS_ = 354,
     _STOP_ = 355,
     _WILDCARDS_ = 356,
     _ENTIRE_ = 357,
     _CONTENT_ = 358,
     _WORD_ = 359,
     _TYPE_ = 360,
     _START_ = 361,
     _END_ = 362,
     _MOST_ = 363,
     _SKIP_ = 364,
     _COPY_ = 365,
     _VALUE_ = 366,
     _WHITESPACE_ = 367,
     _PI_CONTENT_ = 368,
     _XML_COMMENT_CONTENT_ = 369,
     _EQ_ = 370,
     _NE_ = 371,
     _LT_ = 372,
     _LE_ = 373,
     _GT_ = 374,
     _GE_ = 375,
     _AT_ = 376,
     _QUOT_ATTR_CONTENT_ = 377,
     _APOS_ATTR_CONTENT_ = 378,
     _WHITESPACE_ELEMENT_CONTENT_ = 379,
     _ELEMENT_CONTENT_ = 380,
     _AT_LM_ = 381,
     _ORDERED_ = 382,
     _UNORDERED_ = 383,
     _QNAME_ = 384,
     _XMLNS_QNAME_ = 385,
     _CONSTR_QNAME_ = 386,
     _STRING_LITERAL_ = 387,
     _VARIABLE_ = 388,
     _NCNAME_COLON_STAR_ = 389,
     _STAR_COLON_NCNAME_ = 390,
     _PI_TARGET_ = 391,
     _PRAGMA_CONTENT_ = 392,
     _RETURN_ = 393,
     _FOR_ = 394,
     _IN_ = 395,
     _LET_ = 396,
     _WHERE_ = 397,
     _COUNT_ = 398,
     _BY_ = 399,
     _ORDER_ = 400,
     _STABLE_ = 401,
     _ASCENDING_ = 402,
     _DESCENDING_ = 403,
     _EMPTY_ = 404,
     _GREATEST_ = 405,
     _LEAST_ = 406,
     _COLLATION_ = 407,
     _SOME_ = 408,
     _EVERY_ = 409,
     _SATISFIES_ = 410,
     _TYPESWITCH_ = 411,
     _CASE_ = 412,
     _CASE_S_ = 413,
     _AS_ = 414,
     _IF_ = 415,
     _THEN_ = 416,
     _ELSE_ = 417,
     _OR_ = 418,
     _AND_ = 419,
     _INSTANCE_ = 420,
     _OF_ = 421,
     _CASTABLE_ = 422,
     _TO_ = 423,
     _DIV_ = 424,
     _MOD_ = 425,
     _UNION_ = 426,
     _INTERSECT_ = 427,
     _EXCEPT_ = 428,
     _VALIDATE_ = 429,
     _CAST_ = 430,
     _TREAT_ = 431,
     _IS_ = 432,
     _PRESERVE_ = 433,
     _STRIP_ = 434,
     _NAMESPACE_ = 435,
     _ITEM_ = 436,
     _EXTERNAL_ = 437,
     _ENCODING_ = 438,
     _NO_PRESERVE_ = 439,
     _INHERIT_ = 440,
     _NO_INHERIT_ = 441,
     _DECLARE_ = 442,
     _CONSTRUCTION_ = 443,
     _ORDERING_ = 444,
     _DEFAULT_ = 445,
     _COPY_NAMESPACES_ = 446,
     _OPTION_ = 447,
     _XQUERY_ = 448,
     _VERSION_ = 449,
     _IMPORT_ = 450,
     _SCHEMA_ = 451,
     _MODULE_ = 452,
     _ELEMENT_ = 453,
     _FUNCTION_ = 454,
     _FUNCTION_EXT_ = 455,
     _SCORE_ = 456,
     _CONTAINS_ = 457,
     _WEIGHT_ = 458,
     _WINDOW_ = 459,
     _DISTANCE_ = 460,
     _OCCURS_ = 461,
     _TIMES_ = 462,
     _SAME_ = 463,
     _DIFFERENT_ = 464,
     _LOWERCASE_ = 465,
     _UPPERCASE_ = 466,
     _RELATIONSHIP_ = 467,
     _LEVELS_ = 468,
     _LANGUAGE_ = 469,
     _ANY_ = 470,
     _ALL_ = 471,
     _PHRASE_ = 472,
     _EXACTLY_ = 473,
     _FROM_ = 474,
     _WORDS_ = 475,
     _SENTENCES_ = 476,
     _PARAGRAPHS_ = 477,
     _SENTENCE_ = 478,
     _PARAGRAPH_ = 479,
     _REPLACE_ = 480,
     _MODIFY_ = 481,
     _FIRST_ = 482,
     _INSERT_ = 483,
     _BEFORE_ = 484,
     _AFTER_ = 485,
     _REVALIDATION_ = 486,
     _WITH_ = 487,
     _NODES_ = 488,
     _RENAME_ = 489,
     _LAST_ = 490,
     _DELETE_ = 491,
     _INTO_ = 492,
     _UPDATING_ = 493,
     _ID_ = 494,
     _KEY_ = 495,
     _TEMPLATE_ = 496,
     _MATCHES_ = 497,
     _TUPLE_ = 498,
     _MAP_ = 499,
     _NAME_ = 500,
     _CALL_ = 501,
     _APPLY_ = 502,
     _TEMPLATES_ = 503,
     _MODE_ = 504,
     _FTOR_ = 505,
     _FTAND_ = 506,
     _FTNOT_ = 507,
     _TYPE_ALIAS_ = 508,
     _XSLT_END_ELEMENT_ = 509,
     _XSLT_STYLESHEET_ = 510,
     _XSLT_TEMPLATE_ = 511,
     _XSLT_VALUE_OF_ = 512,
     _XSLT_TEXT_ = 513,
     _XSLT_APPLY_TEMPLATES_ = 514,
     _XSLT_CALL_TEMPLATE_ = 515,
     _XSLT_WITH_PARAM_ = 516,
     _XSLT_SEQUENCE_ = 517,
     _XSLT_PARAM_ = 518,
     _XSLT_FUNCTION_ = 519,
     _XSLT_CHOOSE_ = 520,
     _XSLT_WHEN_ = 521,
     _XSLT_OTHERWISE_ = 522,
     _XSLT_IF_ = 523,
     _XSLT_VARIABLE_ = 524,
     _XSLT_COMMENT_ = 525,
     _XSLT_PI_ = 526,
     _XSLT_DOCUMENT_ = 527,
     _XSLT_ATTRIBUTE_ = 528,
     _XSLT_NAMESPACE_ = 529,
     _XSLT_ELEMENT_ = 530,
     _XSLT_ANALYZE_STRING_ = 531,
     _XSLT_MATCHING_SUBSTRING_ = 532,
     _XSLT_NON_MATCHING_SUBSTRING_ = 533,
     _XSLT_COPY_OF_ = 534,
     _XSLT_COPY_ = 535,
     _XSLT_FOR_EACH_ = 536,
     _XSLT_OUTPUT_ = 537,
     _XSLT_IMPORT_SCHEMA_ = 538,
     _XSLT_TYPE_ALIAS_ = 539,
     _XSLT_VERSION_ = 540,
     _XSLT_MODE_ = 541,
     _XSLT_NAME_ = 542,
     _XSLT_DOCTYPE_PUBLIC_ = 543,
     _XSLT_DOCTYPE_SYSTEM_ = 544,
     _XSLT_ENCODING_ = 545,
     _XSLT_MEDIA_TYPE_ = 546,
     _XSLT_NORMALIZATION_FORM_ = 547,
     _XSLT_STANDALONE_ = 548,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 549,
     _XSLT_NAMESPACE_STR_ = 550,
     _XSLT_SCHEMA_LOCATION_ = 551,
     _XSLT_TUNNEL_ = 552,
     _XSLT_REQUIRED_ = 553,
     _XSLT_OVERRIDE_ = 554,
     _XSLT_COPY_NAMESPACES_ = 555,
     _XSLT_INHERIT_NAMESPACES_ = 556,
     _XSLT_BYTE_ORDER_MARK_ = 557,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 558,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 559,
     _XSLT_INDENT_ = 560,
     _XSLT_OMIT_XML_DECLARATION_ = 561,
     _XSLT_UNDECLARE_PREFIXES_ = 562,
     _XSLT_MATCH_ = 563,
     _XSLT_AS_ = 564,
     _XSLT_SELECT_ = 565,
     _XSLT_PRIORITY_ = 566,
     _XSLT_TEST_ = 567,
     _XSLT_SEPARATOR_ = 568,
     _XSLT_NAMESPACE_A_ = 569,
     _XSLT_REGEX_ = 570,
     _XSLT_FLAGS_ = 571,
     _XSLT_METHOD_ = 572,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 573,
     _XSLT_USE_CHARACTER_MAPS_ = 574,
     _XSLT_ELEMENT_NAME_ = 575,
     _XSLT_XMLNS_ATTR_ = 576,
     _XSLT_ATTR_NAME_ = 577,
     _XSLT_TEXT_NODE_ = 578,
     _XSLT_WS_TEXT_NODE_ = 579,
     _HASH_DEFAULT_ = 580,
     _HASH_ALL_ = 581,
     _HASH_CURRENT_ = 582,
     _XML_ = 583,
     _HTML_ = 584,
     _XHTML_ = 585
   };
#endif
/* Tokens.  */
#define MYEOF 0
#define _LANG_XPATH2_ 258
#define _LANG_XQUERY_ 259
#define _LANG_XSLT2_ 260
#define _LANG_FUNCDECL_ 261
#define _LANG_DELAYEDMODULE_ 262
#define _LANG_FUNCTION_SIGNATURE_ 263
#define _LANG_REWRITE_RULE_ 264
#define _LANG_REWRITE_PATTERN_ 265
#define _LANG_SEQUENCE_TYPE_ 266
#define _DOLLAR_ 267
#define _COLON_EQUALS_ 268
#define _ASTERISK_ 269
#define _BAR_ 270
#define _BANG_EQUALS_ 271
#define _LESS_THAN_EQUALS_ 272
#define _GREATER_THAN_ 273
#define _GREATER_THAN_EQUALS_ 274
#define _LESS_THAN_LESS_THAN_ 275
#define _GREATER_THAN_GREATER_THAN_ 276
#define _COLON_COLON_ 277
#define _AT_SIGN_ 278
#define _LSQUARE_ 279
#define _RSQUARE_ 280
#define _QUESTION_MARK_ 281
#define _LESS_THAN_OP_OR_TAG_ 282
#define _START_TAG_CLOSE_ 283
#define _END_TAG_CLOSE_ 284
#define _PI_START_ 285
#define _XML_COMMENT_START_ 286
#define _XML_COMMENT_END_ 287
#define _SLASH_SLASH_ 288
#define _END_TAG_OPEN_ 289
#define _PRAGMA_OPEN_ 290
#define _COMMA_ 291
#define _PLUS_ 292
#define _MINUS_ 293
#define _SLASH_ 294
#define _EQUALS_ 295
#define _DOT_ 296
#define _DOT_DOT_ 297
#define _LPAR_ 298
#define _RPAR_ 299
#define _EMPTY_TAG_CLOSE_ 300
#define _VALUE_INDICATOR_ 301
#define _OPEN_QUOT_ 302
#define _CLOSE_QUOT_ 303
#define _OPEN_APOS_ 304
#define _CLOSE_APOS_ 305
#define _LBRACE_ 306
#define _RBRACE_ 307
#define _SEMICOLON_ 308
#define _HASH_ 309
#define _PERCENT_ 310
#define _COLON_ 311
#define _TILDE_ 312
#define _MINUS_GREATER_THAN_ 313
#define _INTEGER_LITERAL_ 314
#define _DECIMAL_LITERAL_ 315
#define _DOUBLE_LITERAL_ 316
#define _ATTRIBUTE_ 317
#define _COMMENT_ 318
#define _DOCUMENT_NODE_ 319
#define _NAMESPACE_NODE_ 320
#define _NODE_ 321
#define _PROCESSING_INSTRUCTION_ 322
#define _SCHEMA_ATTRIBUTE_ 323
#define _SCHEMA_ELEMENT_ 324
#define _TEXT_ 325
#define _EMPTY_SEQUENCE_ 326
#define _BOUNDARY_SPACE_ 327
#define _FT_OPTION_ 328
#define _BASE_URI_ 329
#define _LAX_ 330
#define _STRICT_ 331
#define _IDIV_ 332
#define _CHILD_ 333
#define _DESCENDANT_ 334
#define _SELF_ 335
#define _DESCENDANT_OR_SELF_ 336
#define _FOLLOWING_SIBLING_ 337
#define _FOLLOWING_ 338
#define _PARENT_ 339
#define _ANCESTOR_ 340
#define _PRECEDING_SIBLING_ 341
#define _PRECEDING_ 342
#define _ANCESTOR_OR_SELF_ 343
#define _DOCUMENT_ 344
#define _NOT_ 345
#define _USING_ 346
#define _NO_ 347
#define _SENSITIVE_ 348
#define _INSENSITIVE_ 349
#define _DIACRITICS_ 350
#define _WITHOUT_ 351
#define _WITHOUT_C_ 352
#define _STEMMING_ 353
#define _THESAURUS_ 354
#define _STOP_ 355
#define _WILDCARDS_ 356
#define _ENTIRE_ 357
#define _CONTENT_ 358
#define _WORD_ 359
#define _TYPE_ 360
#define _START_ 361
#define _END_ 362
#define _MOST_ 363
#define _SKIP_ 364
#define _COPY_ 365
#define _VALUE_ 366
#define _WHITESPACE_ 367
#define _PI_CONTENT_ 368
#define _XML_COMMENT_CONTENT_ 369
#define _EQ_ 370
#define _NE_ 371
#define _LT_ 372
#define _LE_ 373
#define _GT_ 374
#define _GE_ 375
#define _AT_ 376
#define _QUOT_ATTR_CONTENT_ 377
#define _APOS_ATTR_CONTENT_ 378
#define _WHITESPACE_ELEMENT_CONTENT_ 379
#define _ELEMENT_CONTENT_ 380
#define _AT_LM_ 381
#define _ORDERED_ 382
#define _UNORDERED_ 383
#define _QNAME_ 384
#define _XMLNS_QNAME_ 385
#define _CONSTR_QNAME_ 386
#define _STRING_LITERAL_ 387
#define _VARIABLE_ 388
#define _NCNAME_COLON_STAR_ 389
#define _STAR_COLON_NCNAME_ 390
#define _PI_TARGET_ 391
#define _PRAGMA_CONTENT_ 392
#define _RETURN_ 393
#define _FOR_ 394
#define _IN_ 395
#define _LET_ 396
#define _WHERE_ 397
#define _COUNT_ 398
#define _BY_ 399
#define _ORDER_ 400
#define _STABLE_ 401
#define _ASCENDING_ 402
#define _DESCENDING_ 403
#define _EMPTY_ 404
#define _GREATEST_ 405
#define _LEAST_ 406
#define _COLLATION_ 407
#define _SOME_ 408
#define _EVERY_ 409
#define _SATISFIES_ 410
#define _TYPESWITCH_ 411
#define _CASE_ 412
#define _CASE_S_ 413
#define _AS_ 414
#define _IF_ 415
#define _THEN_ 416
#define _ELSE_ 417
#define _OR_ 418
#define _AND_ 419
#define _INSTANCE_ 420
#define _OF_ 421
#define _CASTABLE_ 422
#define _TO_ 423
#define _DIV_ 424
#define _MOD_ 425
#define _UNION_ 426
#define _INTERSECT_ 427
#define _EXCEPT_ 428
#define _VALIDATE_ 429
#define _CAST_ 430
#define _TREAT_ 431
#define _IS_ 432
#define _PRESERVE_ 433
#define _STRIP_ 434
#define _NAMESPACE_ 435
#define _ITEM_ 436
#define _EXTERNAL_ 437
#define _ENCODING_ 438
#define _NO_PRESERVE_ 439
#define _INHERIT_ 440
#define _NO_INHERIT_ 441
#define _DECLARE_ 442
#define _CONSTRUCTION_ 443
#define _ORDERING_ 444
#define _DEFAULT_ 445
#define _COPY_NAMESPACES_ 446
#define _OPTION_ 447
#define _XQUERY_ 448
#define _VERSION_ 449
#define _IMPORT_ 450
#define _SCHEMA_ 451
#define _MODULE_ 452
#define _ELEMENT_ 453
#define _FUNCTION_ 454
#define _FUNCTION_EXT_ 455
#define _SCORE_ 456
#define _CONTAINS_ 457
#define _WEIGHT_ 458
#define _WINDOW_ 459
#define _DISTANCE_ 460
#define _OCCURS_ 461
#define _TIMES_ 462
#define _SAME_ 463
#define _DIFFERENT_ 464
#define _LOWERCASE_ 465
#define _UPPERCASE_ 466
#define _RELATIONSHIP_ 467
#define _LEVELS_ 468
#define _LANGUAGE_ 469
#define _ANY_ 470
#define _ALL_ 471
#define _PHRASE_ 472
#define _EXACTLY_ 473
#define _FROM_ 474
#define _WORDS_ 475
#define _SENTENCES_ 476
#define _PARAGRAPHS_ 477
#define _SENTENCE_ 478
#define _PARAGRAPH_ 479
#define _REPLACE_ 480
#define _MODIFY_ 481
#define _FIRST_ 482
#define _INSERT_ 483
#define _BEFORE_ 484
#define _AFTER_ 485
#define _REVALIDATION_ 486
#define _WITH_ 487
#define _NODES_ 488
#define _RENAME_ 489
#define _LAST_ 490
#define _DELETE_ 491
#define _INTO_ 492
#define _UPDATING_ 493
#define _ID_ 494
#define _KEY_ 495
#define _TEMPLATE_ 496
#define _MATCHES_ 497
#define _TUPLE_ 498
#define _MAP_ 499
#define _NAME_ 500
#define _CALL_ 501
#define _APPLY_ 502
#define _TEMPLATES_ 503
#define _MODE_ 504
#define _FTOR_ 505
#define _FTAND_ 506
#define _FTNOT_ 507
#define _TYPE_ALIAS_ 508
#define _XSLT_END_ELEMENT_ 509
#define _XSLT_STYLESHEET_ 510
#define _XSLT_TEMPLATE_ 511
#define _XSLT_VALUE_OF_ 512
#define _XSLT_TEXT_ 513
#define _XSLT_APPLY_TEMPLATES_ 514
#define _XSLT_CALL_TEMPLATE_ 515
#define _XSLT_WITH_PARAM_ 516
#define _XSLT_SEQUENCE_ 517
#define _XSLT_PARAM_ 518
#define _XSLT_FUNCTION_ 519
#define _XSLT_CHOOSE_ 520
#define _XSLT_WHEN_ 521
#define _XSLT_OTHERWISE_ 522
#define _XSLT_IF_ 523
#define _XSLT_VARIABLE_ 524
#define _XSLT_COMMENT_ 525
#define _XSLT_PI_ 526
#define _XSLT_DOCUMENT_ 527
#define _XSLT_ATTRIBUTE_ 528
#define _XSLT_NAMESPACE_ 529
#define _XSLT_ELEMENT_ 530
#define _XSLT_ANALYZE_STRING_ 531
#define _XSLT_MATCHING_SUBSTRING_ 532
#define _XSLT_NON_MATCHING_SUBSTRING_ 533
#define _XSLT_COPY_OF_ 534
#define _XSLT_COPY_ 535
#define _XSLT_FOR_EACH_ 536
#define _XSLT_OUTPUT_ 537
#define _XSLT_IMPORT_SCHEMA_ 538
#define _XSLT_TYPE_ALIAS_ 539
#define _XSLT_VERSION_ 540
#define _XSLT_MODE_ 541
#define _XSLT_NAME_ 542
#define _XSLT_DOCTYPE_PUBLIC_ 543
#define _XSLT_DOCTYPE_SYSTEM_ 544
#define _XSLT_ENCODING_ 545
#define _XSLT_MEDIA_TYPE_ 546
#define _XSLT_NORMALIZATION_FORM_ 547
#define _XSLT_STANDALONE_ 548
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 549
#define _XSLT_NAMESPACE_STR_ 550
#define _XSLT_SCHEMA_LOCATION_ 551
#define _XSLT_TUNNEL_ 552
#define _XSLT_REQUIRED_ 553
#define _XSLT_OVERRIDE_ 554
#define _XSLT_COPY_NAMESPACES_ 555
#define _XSLT_INHERIT_NAMESPACES_ 556
#define _XSLT_BYTE_ORDER_MARK_ 557
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 558
#define _XSLT_INCLUDE_CONTENT_TYPE_ 559
#define _XSLT_INDENT_ 560
#define _XSLT_OMIT_XML_DECLARATION_ 561
#define _XSLT_UNDECLARE_PREFIXES_ 562
#define _XSLT_MATCH_ 563
#define _XSLT_AS_ 564
#define _XSLT_SELECT_ 565
#define _XSLT_PRIORITY_ 566
#define _XSLT_TEST_ 567
#define _XSLT_SEPARATOR_ 568
#define _XSLT_NAMESPACE_A_ 569
#define _XSLT_REGEX_ 570
#define _XSLT_FLAGS_ 571
#define _XSLT_METHOD_ 572
#define _XSLT_CDATA_SECTION_ELEMENTS_ 573
#define _XSLT_USE_CHARACTER_MAPS_ 574
#define _XSLT_ELEMENT_NAME_ 575
#define _XSLT_XMLNS_ATTR_ 576
#define _XSLT_ATTR_NAME_ 577
#define _XSLT_TEXT_NODE_ 578
#define _XSLT_WS_TEXT_NODE_ 579
#define _HASH_DEFAULT_ 580
#define _HASH_ALL_ 581
#define _HASH_CURRENT_ 582
#define _XML_ 583
#define _HTML_ 584
#define _XHTML_ 585




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
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


/* Line 264 of yacc.c  */
#line 1119 "../src/parser/XQParser.cpp"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  257
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8677

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  331
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  377
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1062
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1759

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   585

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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    15,    18,    21,    24,    27,
      30,    33,    34,    35,    44,    45,    47,    51,    54,    61,
      62,    65,    74,    76,    81,    83,    84,    87,    90,    91,
      94,    97,   100,   103,   106,   109,   112,   117,   119,   123,
     126,   130,   134,   138,   139,   142,   145,   148,   150,   152,
     154,   159,   161,   164,   168,   171,   172,   175,   179,   181,
     184,   188,   192,   195,   198,   202,   204,   207,   211,   215,
     218,   221,   225,   227,   230,   234,   238,   241,   243,   246,
     250,   253,   257,   260,   263,   266,   269,   272,   275,   278,
     281,   284,   287,   290,   294,   297,   299,   301,   303,   305,
     307,   309,   312,   315,   317,   320,   324,   327,   329,   332,
     335,   339,   343,   348,   349,   353,   356,   357,   360,   363,
     364,   367,   370,   373,   375,   377,   379,   381,   383,   385,
     387,   389,   391,   393,   395,   397,   399,   401,   403,   405,
     407,   409,   413,   415,   419,   423,   427,   429,   431,   435,
     437,   441,   445,   447,   449,   451,   452,   455,   459,   461,
     464,   465,   468,   472,   474,   477,   481,   485,   488,   491,
     495,   499,   503,   508,   510,   513,   517,   521,   522,   526,
     531,   533,   537,   541,   545,   546,   550,   551,   555,   560,
     562,   565,   569,   573,   577,   579,   583,   587,   589,   593,
     597,   601,   603,   607,   609,   613,   617,   621,   625,   629,
     631,   635,   639,   643,   645,   649,   653,   656,   658,   662,
     665,   669,   671,   674,   677,   681,   683,   687,   691,   693,
     695,   697,   699,   701,   703,   708,   715,   717,   719,   721,
     723,   725,   728,   732,   736,   740,   744,   747,   749,   753,
     757,   760,   761,   766,   769,   772,   773,   777,   782,   786,
     789,   792,   795,   798,   805,   806,   810,   814,   818,   822,
     826,   830,   834,   838,   842,   846,   848,   850,   852,   854,
     856,   858,   860,   862,   864,   866,   868,   874,   878,   882,
     888,   894,   899,   903,   907,   911,   917,   923,   929,   931,
     933,   935,   937,   942,   946,   952,   957,   958,   961,   965,
     969,   973,   981,   986,   990,   994,   995,   998,  1000,  1002,
    1004,  1012,  1015,  1017,  1025,  1028,  1032,  1033,  1036,  1038,
    1040,  1043,  1049,  1051,  1055,  1059,  1061,  1065,  1069,  1071,
    1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,  1091,  1093,
    1095,  1097,  1099,  1101,  1105,  1107,  1110,  1113,  1115,  1117,
    1119,  1121,  1123,  1126,  1130,  1132,  1140,  1141,  1145,  1146,
    1150,  1153,  1157,  1159,  1165,  1171,  1174,  1178,  1182,  1187,
    1191,  1193,  1197,  1203,  1205,  1206,  1208,  1210,  1211,  1214,
    1217,  1222,  1227,  1231,  1233,  1239,  1246,  1249,  1251,  1257,
    1261,  1265,  1269,  1273,  1274,  1278,  1287,  1291,  1293,  1297,
    1299,  1303,  1307,  1308,  1313,  1317,  1321,  1325,  1329,  1333,
    1337,  1341,  1345,  1349,  1353,  1357,  1361,  1363,  1368,  1374,
    1376,  1380,  1382,  1386,  1390,  1392,  1396,  1400,  1404,  1408,
    1410,  1414,  1418,  1420,  1424,  1428,  1430,  1435,  1437,  1442,
    1444,  1449,  1451,  1456,  1458,  1461,  1464,  1466,  1468,  1470,
    1472,  1477,  1483,  1489,  1493,  1498,  1500,  1503,  1508,  1510,
    1513,  1515,  1518,  1521,  1523,  1525,  1529,  1533,  1535,  1537,
    1539,  1541,  1543,  1545,  1550,  1552,  1557,  1560,  1562,  1565,
    1568,  1571,  1574,  1577,  1580,  1583,  1586,  1589,  1591,  1594,
    1596,  1599,  1602,  1605,  1608,  1611,  1613,  1615,  1617,  1619,
    1621,  1623,  1625,  1627,  1629,  1634,  1636,  1638,  1640,  1642,
    1644,  1646,  1648,  1650,  1652,  1654,  1656,  1658,  1660,  1662,
    1664,  1667,  1669,  1673,  1676,  1678,  1683,  1688,  1692,  1697,
    1701,  1703,  1705,  1707,  1709,  1711,  1713,  1715,  1717,  1723,
    1734,  1736,  1738,  1739,  1747,  1755,  1756,  1758,  1762,  1766,
    1770,  1774,  1775,  1778,  1781,  1782,  1785,  1788,  1789,  1792,
    1795,  1796,  1799,  1802,  1803,  1806,  1809,  1812,  1815,  1819,
    1820,  1822,  1826,  1828,  1831,  1833,  1835,  1837,  1839,  1841,
    1843,  1845,  1850,  1854,  1856,  1860,  1863,  1867,  1871,  1873,
    1877,  1881,  1886,  1891,  1895,  1897,  1901,  1904,  1908,  1911,
    1912,  1914,  1915,  1918,  1921,  1925,  1926,  1928,  1930,  1932,
    1936,  1938,  1940,  1942,  1944,  1946,  1948,  1950,  1952,  1954,
    1956,  1958,  1960,  1962,  1964,  1966,  1970,  1974,  1979,  1984,
    1988,  1992,  1996,  2000,  2005,  2010,  2014,  2019,  2026,  2028,
    2030,  2035,  2037,  2041,  2046,  2053,  2061,  2063,  2065,  2070,
    2072,  2074,  2076,  2078,  2080,  2084,  2085,  2088,  2089,  2092,
    2096,  2098,  2102,  2104,  2109,  2111,  2114,  2116,  2118,  2121,
    2124,  2128,  2130,  2133,  2138,  2142,  2147,  2148,  2150,  2153,
    2155,  2158,  2160,  2161,  2165,  2168,  2172,  2176,  2181,  2183,
    2187,  2191,  2194,  2197,  2200,  2203,  2206,  2208,  2210,  2212,
    2214,  2216,  2219,  2223,  2225,  2227,  2229,  2231,  2233,  2235,
    2237,  2239,  2242,  2245,  2247,  2249,  2252,  2255,  2257,  2260,
    2263,  2266,  2272,  2278,  2281,  2282,  2286,  2289,  2294,  2299,
    2306,  2311,  2315,  2320,  2321,  2324,  2327,  2331,  2333,  2337,
    2340,  2343,  2346,  2348,  2351,  2355,  2359,  2363,  2367,  2371,
    2378,  2385,  2390,  2395,  2400,  2403,  2406,  2409,  2412,  2415,
    2423,  2429,  2435,  2442,  2446,  2448,  2453,  2455,  2457,  2459,
    2461,  2463,  2465,  2471,  2479,  2488,  2499,  2506,  2515,  2516,
    2519,  2522,  2526,  2527,  2530,  2532,  2536,  2538,  2540,  2542,
    2546,  2554,  2558,  2566,  2572,  2582,  2584,  2586,  2588,  2590,
    2594,  2600,  2602,  2604,  2608,  2613,  2617,  2622,  2624,  2626,
    2632,  2633,  2636,  2643,  2651,  2653,  2657,  2661,  2663,  2665,
    2670,  2674,  2676,  2680,  2683,  2690,  2694,  2696,  2701,  2705,
    2707,  2711,  2716,  2718,  2722,  2728,  2730,  2732,  2738,  2741,
    2742,  2745,  2749,  2758,  2760,  2764,  2766,  2770,  2772,  2776,
    2780,  2784,  2788,  2792,  2796,  2798,  2802,  2806,  2808,  2812,
    2816,  2820,  2824,  2826,  2829,  2832,  2834,  2839,  2841,  2846,
    2850,  2853,  2855,  2857,  2859,  2861,  2862,  2864,  2866,  2870,
    2872,  2875,  2877,  2879,  2881,  2883,  2885,  2887,  2889,  2891,
    2893,  2895,  2897,  2899,  2901,  2903,  2905,  2907,  2909,  2911,
    2913,  2915,  2917,  2919,  2921,  2923,  2925,  2927,  2929,  2931,
    2933,  2935,  2937,  2939,  2941,  2943,  2945,  2947,  2949,  2951,
    2953,  2955,  2957,  2959,  2961,  2963,  2965,  2967,  2969,  2971,
    2973,  2975,  2977,  2979,  2981,  2983,  2985,  2987,  2989,  2991,
    2993,  2995,  2997,  2999,  3001,  3003,  3005,  3007,  3009,  3011,
    3013,  3015,  3017,  3019,  3021,  3023,  3025,  3027,  3029,  3031,
    3033,  3035,  3037,  3039,  3041,  3043,  3045,  3047,  3049,  3051,
    3053,  3055,  3057,  3059,  3061,  3063,  3065,  3067,  3069,  3071,
    3073,  3075,  3077,  3079,  3081,  3083,  3085,  3087,  3089,  3091,
    3093,  3095,  3097,  3099,  3101,  3103,  3105,  3107,  3109,  3111,
    3113,  3115,  3117,  3119,  3121,  3123,  3125,  3127,  3129,  3131,
    3133,  3135,  3137,  3139,  3141,  3143,  3145,  3147,  3149,  3151,
    3153,  3155,  3157,  3159,  3161,  3163,  3165,  3167,  3169,  3171,
    3173,  3175,  3177,  3179,  3181,  3183,  3185,  3187,  3189,  3191,
    3193,  3195,  3197,  3199,  3201,  3203,  3205,  3207,  3209,  3211,
    3213,  3215,  3217
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     332,     0,    -1,     3,   333,   470,    -1,     4,   334,   428,
      -1,     6,   334,   335,    -1,     5,   342,    -1,     7,   338,
      -1,     8,   337,    -1,     9,   689,    -1,    10,   690,    -1,
      11,   586,    -1,    -1,    -1,   187,   456,   199,   707,   462,
     463,   469,   336,    -1,    -1,   438,    -1,   456,   462,   463,
      -1,   339,   340,    -1,   197,   180,   657,    40,   608,   438,
      -1,    -1,   340,   341,    -1,   187,   456,   199,   707,   462,
     463,   469,   438,    -1,   343,    -1,   255,   344,   345,   254,
      -1,   367,    -1,    -1,   344,   285,    -1,   344,   294,    -1,
      -1,   345,   346,    -1,   345,   350,    -1,   345,   355,    -1,
     345,   357,    -1,   345,   359,    -1,   345,   365,    -1,   345,
     363,    -1,   347,   352,   370,   254,    -1,   256,    -1,   347,
     308,   418,    -1,   347,   287,    -1,   347,   311,   349,    -1,
     347,   286,   348,    -1,   347,   309,   586,    -1,    -1,   348,
     129,    -1,   348,   325,    -1,   348,   326,    -1,    59,    -1,
      60,    -1,    61,    -1,   351,   352,   370,   254,    -1,   264,
      -1,   351,   287,    -1,   351,   309,   586,    -1,   351,   299,
      -1,    -1,   352,   353,    -1,   354,   370,   254,    -1,   263,
      -1,   354,   287,    -1,   354,   310,   471,    -1,   354,   309,
     586,    -1,   354,   298,    -1,   354,   297,    -1,   356,   370,
     254,    -1,   263,    -1,   356,   287,    -1,   356,   310,   471,
      -1,   356,   309,   586,    -1,   356,   298,    -1,   356,   297,
      -1,   358,   370,   254,    -1,   269,    -1,   358,   287,    -1,
     358,   310,   471,    -1,   358,   309,   586,    -1,   360,   254,
      -1,   282,    -1,   360,   287,    -1,   360,   317,   361,    -1,
     360,   302,    -1,   360,   318,   362,    -1,   360,   288,    -1,
     360,   289,    -1,   360,   290,    -1,   360,   303,    -1,   360,
     304,    -1,   360,   305,    -1,   360,   291,    -1,   360,   292,
      -1,   360,   306,    -1,   360,   293,    -1,   360,   307,    -1,
     360,   319,   362,    -1,   360,   285,    -1,   328,    -1,   329,
      -1,   330,    -1,    70,    -1,   129,    -1,   129,    -1,   362,
     129,    -1,   364,   254,    -1,   284,    -1,   364,   287,    -1,
     364,   309,   588,    -1,   366,   254,    -1,   283,    -1,   283,
     295,    -1,   283,   296,    -1,   283,   295,   296,    -1,   283,
     296,   295,    -1,   320,   368,   370,   254,    -1,    -1,   368,
     322,   369,    -1,   368,   321,    -1,    -1,   369,   469,    -1,
     369,   122,    -1,    -1,   370,   375,    -1,   370,   367,    -1,
     370,   371,    -1,   372,    -1,   374,    -1,   376,    -1,   380,
      -1,   385,    -1,   389,    -1,   387,    -1,   398,    -1,   400,
      -1,   402,    -1,   404,    -1,   406,    -1,   408,    -1,   410,
      -1,   394,    -1,   412,    -1,   414,    -1,   416,    -1,   373,
     370,   254,    -1,   257,    -1,   373,   310,   471,    -1,   373,
     313,   369,    -1,   258,   375,   254,    -1,   323,    -1,   324,
      -1,   377,   379,   254,    -1,   259,    -1,   377,   310,   471,
      -1,   377,   286,   378,    -1,   129,    -1,   325,    -1,   327,
      -1,    -1,   379,   383,    -1,   381,   382,   254,    -1,   260,
      -1,   381,   287,    -1,    -1,   382,   383,    -1,   384,   370,
     254,    -1,   261,    -1,   384,   287,    -1,   384,   310,   471,
      -1,   384,   309,   586,    -1,   384,   297,    -1,   386,   254,
      -1,   262,   310,   471,    -1,   388,   370,   254,    -1,   268,
     312,   471,    -1,   265,   390,   393,   254,    -1,   391,    -1,
     390,   391,    -1,   392,   370,   254,    -1,   266,   312,   471,
      -1,    -1,   267,   370,   254,    -1,   395,   396,   397,   254,
      -1,   276,    -1,   395,   310,   471,    -1,   395,   315,   369,
      -1,   395,   316,   369,    -1,    -1,   277,   370,   254,    -1,
      -1,   278,   370,   254,    -1,   399,   370,   254,   370,    -1,
     269,    -1,   399,   287,    -1,   399,   310,   471,    -1,   399,
     309,   586,    -1,   401,   370,   254,    -1,   270,    -1,   401,
     310,   471,    -1,   403,   370,   254,    -1,   271,    -1,   403,
     287,   369,    -1,   403,   310,   471,    -1,   405,   370,   254,
      -1,   272,    -1,   407,   370,   254,    -1,   273,    -1,   407,
     287,   369,    -1,   407,   314,   369,    -1,   407,   310,   471,
      -1,   407,   313,   369,    -1,   409,   370,   254,    -1,   274,
      -1,   409,   287,   369,    -1,   409,   310,   471,    -1,   411,
     370,   254,    -1,   275,    -1,   411,   287,   369,    -1,   411,
     314,   369,    -1,   413,   254,    -1,   279,    -1,   413,   310,
     471,    -1,   413,   300,    -1,   415,   370,   254,    -1,   280,
      -1,   415,   300,    -1,   415,   301,    -1,   417,   370,   254,
      -1,   281,    -1,   417,   310,   471,    -1,   418,    15,   419,
      -1,   419,    -1,   424,    -1,    39,    -1,   421,    -1,    39,
      -1,    33,    -1,   239,    43,   422,    44,    -1,   240,    43,
     656,    36,   423,    44,    -1,   656,    -1,   544,    -1,   542,
      -1,   544,    -1,   425,    -1,   420,   425,    -1,   421,    39,
     425,    -1,   421,    33,   425,    -1,   424,    39,   425,    -1,
     424,    33,   425,    -1,   426,   427,    -1,   537,    -1,    78,
      22,   537,    -1,    62,    22,   537,    -1,    23,   537,    -1,
      -1,   427,    24,   471,    25,    -1,   429,   432,    -1,   429,
     433,    -1,    -1,   193,   430,   438,    -1,   193,   430,   431,
     438,    -1,   193,   431,   438,    -1,   194,   132,    -1,   183,
     132,    -1,   435,   470,    -1,   434,   435,    -1,   197,   180,
     657,    40,   608,   438,    -1,    -1,   435,   436,   438,    -1,
     435,   437,   438,    -1,   435,   439,   438,    -1,   435,   441,
     438,    -1,   435,   459,   438,    -1,   435,   461,   438,    -1,
     435,   659,   438,    -1,   435,   442,   438,    -1,   435,   443,
     438,    -1,   435,   688,   438,    -1,   440,    -1,   449,    -1,
     450,    -1,   455,    -1,   444,    -1,   445,    -1,   643,    -1,
     446,    -1,   451,    -1,   454,    -1,    53,    -1,   187,   180,
     657,    40,   608,    -1,   187,    72,   178,    -1,   187,    72,
     179,    -1,   187,   190,   198,   180,   608,    -1,   187,   190,
     199,   180,   608,    -1,   187,   192,   706,   132,    -1,   187,
      73,   626,    -1,   187,   189,   127,    -1,   187,   189,   128,
      -1,   187,   190,   145,   149,   150,    -1,   187,   190,   145,
     149,   151,    -1,   187,   191,   447,    36,   448,    -1,   178,
      -1,   184,    -1,   185,    -1,   186,    -1,   187,   190,   152,
     608,    -1,   187,    74,   608,    -1,   195,   196,   453,   608,
     452,    -1,   195,   196,   608,   452,    -1,    -1,   121,   608,
      -1,   452,    36,   608,    -1,   180,   657,    40,    -1,   190,
     198,   180,    -1,   195,   197,   180,   657,    40,   608,   452,
      -1,   195,   197,   608,   452,    -1,   187,   188,   178,    -1,
     187,   188,   179,    -1,    -1,   456,   457,    -1,   458,    -1,
     465,    -1,   238,    -1,   187,   456,   133,    12,   545,   585,
     460,    -1,    13,   472,    -1,   182,    -1,   187,   456,   199,
     707,   462,   463,   464,    -1,    43,    44,    -1,    43,   467,
      44,    -1,    -1,   159,   586,    -1,   469,    -1,   182,    -1,
      55,   706,    -1,    55,   706,    43,   466,    44,    -1,   542,
      -1,   466,    36,   542,    -1,   467,    36,   468,    -1,   468,
      -1,    12,   545,   585,    -1,    51,   471,    52,    -1,   471,
      -1,   471,    36,   472,    -1,   472,    -1,   473,    -1,   493,
      -1,   496,    -1,   502,    -1,   644,    -1,   646,    -1,   649,
      -1,   648,    -1,   650,    -1,   503,    -1,   665,    -1,   666,
      -1,   474,   138,   472,    -1,   475,    -1,   474,   487,    -1,
     474,   476,    -1,   477,    -1,   482,    -1,   475,    -1,   485,
      -1,   486,    -1,   139,   478,    -1,   478,    36,   479,    -1,
     479,    -1,    12,   545,   585,   480,   481,   140,   472,    -1,
      -1,   121,    12,   545,    -1,    -1,   201,    12,   545,    -1,
     141,   483,    -1,   483,    36,   484,    -1,   484,    -1,    12,
     545,   585,    13,   472,    -1,   201,    12,   545,    13,   472,
      -1,   142,   472,    -1,   143,    12,   545,    -1,   145,   144,
     488,    -1,   146,   145,   144,   488,    -1,   488,    36,   489,
      -1,   489,    -1,   490,   491,   492,    -1,   490,   491,   492,
     152,   608,    -1,   472,    -1,    -1,   147,    -1,   148,    -1,
      -1,   149,   150,    -1,   149,   151,    -1,   153,   494,   155,
     472,    -1,   154,   494,   155,   472,    -1,   494,    36,   495,
      -1,   495,    -1,    12,   545,   585,   140,   472,    -1,   156,
      43,   471,    44,   497,   498,    -1,   497,   499,    -1,   499,
      -1,   190,    12,   545,   138,   472,    -1,   190,   138,   472,
      -1,   500,   138,   472,    -1,   157,   501,   586,    -1,   500,
      15,   586,    -1,    -1,    12,   545,   159,    -1,   160,    43,
     471,    44,   161,   472,   162,   472,    -1,   503,   163,   504,
      -1,   504,    -1,   504,   164,   505,    -1,   505,    -1,   507,
      40,   507,    -1,   507,    16,   507,    -1,    -1,   507,    27,
     506,   507,    -1,   507,    17,   507,    -1,   507,    18,   507,
      -1,   507,    19,   507,    -1,   507,   115,   507,    -1,   507,
     116,   507,    -1,   507,   117,   507,    -1,   507,   118,   507,
      -1,   507,   119,   507,    -1,   507,   120,   507,    -1,   507,
     177,   507,    -1,   507,    20,   507,    -1,   507,    21,   507,
      -1,   507,    -1,   508,   202,    70,   609,    -1,   508,   202,
      70,   609,   642,    -1,   508,    -1,   509,   168,   509,    -1,
     509,    -1,   509,    37,   510,    -1,   509,    38,   510,    -1,
     510,    -1,   510,    14,   511,    -1,   510,   169,   511,    -1,
     510,    77,   511,    -1,   510,   170,   511,    -1,   511,    -1,
     511,    15,   512,    -1,   511,   171,   512,    -1,   512,    -1,
     512,   172,   513,    -1,   512,   173,   513,    -1,   513,    -1,
     514,   165,   166,   586,    -1,   514,    -1,   515,   176,   159,
     586,    -1,   515,    -1,   516,   167,   159,   583,    -1,   516,
      -1,   517,   175,   159,   583,    -1,   517,    -1,    38,   517,
      -1,    37,   517,    -1,   518,    -1,   519,    -1,   524,    -1,
     520,    -1,   174,    51,   471,    52,    -1,   174,    75,    51,
     471,    52,    -1,   174,    76,    51,   471,    52,    -1,   521,
      51,    52,    -1,   521,    51,   471,    52,    -1,   522,    -1,
     521,   522,    -1,    35,   558,   706,   523,    -1,   137,    -1,
     112,   137,    -1,   525,    -1,   525,   526,    -1,    33,   526,
      -1,   526,    -1,    39,    -1,   526,    39,   527,    -1,   526,
      33,   527,    -1,   527,    -1,   528,    -1,   540,    -1,   529,
      -1,   530,    -1,   531,    -1,   529,    24,   471,    25,    -1,
     534,    -1,   530,    24,   471,    25,    -1,   532,   537,    -1,
     533,    -1,    78,    22,    -1,    79,    22,    -1,    62,    22,
      -1,    80,    22,    -1,    81,    22,    -1,    82,    22,    -1,
      83,    22,    -1,   180,    22,    -1,    23,   537,    -1,   537,
      -1,   535,   537,    -1,   536,    -1,    84,    22,    -1,    85,
      22,    -1,    86,    22,    -1,    87,    22,    -1,    88,    22,
      -1,    42,    -1,   590,    -1,   538,    -1,   658,    -1,   539,
      -1,    14,    -1,   134,    -1,   135,    -1,   541,    -1,   540,
      24,   471,    25,    -1,   673,    -1,   542,    -1,   544,    -1,
     546,    -1,   547,    -1,   550,    -1,   553,    -1,   548,    -1,
     549,    -1,   670,    -1,   543,    -1,   656,    -1,   653,    -1,
     654,    -1,   655,    -1,    12,   545,    -1,   706,    -1,    43,
     471,    44,    -1,    43,    44,    -1,    41,    -1,   127,    51,
     471,    52,    -1,   128,    51,   471,    52,    -1,   707,    43,
      44,    -1,   707,    43,   551,    44,    -1,   551,    36,   552,
      -1,   552,    -1,   472,    -1,    26,    -1,   554,    -1,   570,
      -1,   555,    -1,   566,    -1,   568,    -1,    27,   556,   557,
     558,    45,    -1,    27,   556,   557,   558,    28,   565,    34,
     556,   558,    29,    -1,   129,    -1,   130,    -1,    -1,   557,
     112,   129,   558,    46,   558,   559,    -1,   557,   112,   130,
     558,    46,   558,   560,    -1,    -1,   112,    -1,    47,   561,
      48,    -1,    49,   563,    50,    -1,    47,   562,    48,    -1,
      49,   564,    50,    -1,    -1,   561,   469,    -1,   561,   122,
      -1,    -1,   562,   469,    -1,   562,   122,    -1,    -1,   563,
     469,    -1,   563,   123,    -1,    -1,   564,   469,    -1,   564,
     123,    -1,    -1,   565,   554,    -1,   565,   469,    -1,   565,
     125,    -1,   565,   124,    -1,    31,   567,    32,    -1,    -1,
     114,    -1,    30,   136,   569,    -1,   113,    -1,   112,   113,
      -1,   571,    -1,   572,    -1,   575,    -1,   577,    -1,   578,
      -1,   579,    -1,   580,    -1,    89,    51,   471,    52,    -1,
     198,   573,   574,    -1,   131,    -1,    51,   471,    52,    -1,
      51,    52,    -1,    51,   471,    52,    -1,    62,   576,   574,
      -1,   131,    -1,    51,   471,    52,    -1,   180,   581,   574,
      -1,    70,    51,   471,    52,    -1,    63,    51,   471,    52,
      -1,    67,   581,   582,    -1,   131,    -1,    51,   471,    52,
      -1,    51,    52,    -1,    51,   471,    52,    -1,   589,   584,
      -1,    -1,    26,    -1,    -1,   159,   586,    -1,   588,   587,
      -1,    71,    43,    44,    -1,    -1,    14,    -1,    37,    -1,
      26,    -1,   181,    43,    44,    -1,   589,    -1,   590,    -1,
     674,    -1,   679,    -1,   658,    -1,   592,    -1,   601,    -1,
     597,    -1,   603,    -1,   599,    -1,   596,    -1,   594,    -1,
     593,    -1,   595,    -1,   591,    -1,    66,    43,    44,    -1,
      64,    43,    44,    -1,    64,    43,   601,    44,    -1,    64,
      43,   603,    44,    -1,    70,    43,    44,    -1,    63,    43,
      44,    -1,    65,    43,    44,    -1,    67,    43,    44,    -1,
      67,    43,   657,    44,    -1,    67,    43,   132,    44,    -1,
      62,    43,    44,    -1,    62,    43,   598,    44,    -1,    62,
      43,   598,    36,   607,    44,    -1,   605,    -1,    14,    -1,
      68,    43,   600,    44,    -1,   605,    -1,   198,    43,    44,
      -1,   198,    43,   602,    44,    -1,   198,    43,   602,    36,
     607,    44,    -1,   198,    43,   602,    36,   607,    26,    44,
      -1,   606,    -1,    14,    -1,    69,    43,   604,    44,    -1,
     606,    -1,   658,    -1,   658,    -1,   658,    -1,   132,    -1,
     612,   611,   610,    -1,    -1,   203,   508,    -1,    -1,   611,
     623,    -1,   612,   250,   613,    -1,   613,    -1,   613,   251,
     614,    -1,   614,    -1,   614,    90,   140,   615,    -1,   615,
      -1,   252,   616,    -1,   616,    -1,   617,    -1,   617,   626,
      -1,   618,   621,    -1,    43,   609,    44,    -1,   619,    -1,
     542,   620,    -1,    51,   471,    52,   620,    -1,   521,    51,
      52,    -1,   521,    51,   609,    52,    -1,    -1,   215,    -1,
     215,   104,    -1,   216,    -1,   216,   220,    -1,   217,    -1,
      -1,   206,   622,   207,    -1,   218,   509,    -1,   126,   151,
     509,    -1,   126,   108,   509,    -1,   219,   509,   168,   509,
      -1,   127,    -1,   204,   509,   624,    -1,   205,   622,   624,
      -1,   208,   625,    -1,   209,   625,    -1,   121,   106,    -1,
     121,   107,    -1,   102,   103,    -1,   220,    -1,   221,    -1,
     222,    -1,   223,    -1,   224,    -1,    91,   627,    -1,   626,
      91,   627,    -1,   639,    -1,   640,    -1,   631,    -1,   630,
      -1,   628,    -1,   629,    -1,   634,    -1,   641,    -1,   158,
      94,    -1,   158,    93,    -1,   210,    -1,   211,    -1,    95,
      94,    -1,    95,    93,    -1,    98,    -1,    92,    98,    -1,
      99,   633,    -1,    99,   190,    -1,    99,    43,   633,   632,
      44,    -1,    99,    43,   190,   632,    44,    -1,    92,    99,
      -1,    -1,   632,    36,   633,    -1,   121,   608,    -1,   121,
     608,   212,   656,    -1,   121,   608,   622,   213,    -1,   121,
     608,   212,   656,   622,   213,    -1,   100,   220,   636,   635,
      -1,    92,   100,   220,    -1,   100,   220,   190,   635,    -1,
      -1,   635,   638,    -1,   121,   608,    -1,    43,   637,    44,
      -1,   656,    -1,   637,    36,   656,    -1,   171,   636,    -1,
     173,   636,    -1,   214,   656,    -1,   101,    -1,    92,   101,
      -1,   192,   706,   132,    -1,    97,   103,   511,    -1,   187,
     231,    76,    -1,   187,   231,    75,    -1,   187,   231,   109,
      -1,   645,   472,   159,   227,   237,   472,    -1,   645,   472,
     159,   235,   237,   472,    -1,   645,   472,   237,   472,    -1,
     645,   472,   230,   472,    -1,   645,   472,   229,   472,    -1,
     228,    66,    -1,   228,   233,    -1,   647,   472,    -1,   236,
      66,    -1,   236,   233,    -1,   225,   111,   166,    66,   472,
     232,   472,    -1,   225,    66,   472,   232,   472,    -1,   234,
      66,   472,   159,   472,    -1,   110,   651,   226,   472,   138,
     472,    -1,   651,    36,   652,    -1,   652,    -1,    12,   545,
      13,   472,    -1,    59,    -1,    60,    -1,    61,    -1,   132,
      -1,   706,    -1,   706,    -1,   187,   241,   245,   706,   469,
      -1,   187,   241,   245,   706,   661,   660,   469,    -1,   187,
     241,   245,   706,   662,   242,   418,   469,    -1,   187,   241,
     245,   706,   662,   242,   418,   661,   660,   469,    -1,   187,
     241,   662,   242,   418,   469,    -1,   187,   241,   662,   242,
     418,   661,   660,   469,    -1,    -1,   159,   586,    -1,    43,
      44,    -1,    43,   467,    44,    -1,    -1,   249,   663,    -1,
     664,    -1,   663,    36,   664,    -1,   129,    -1,   325,    -1,
     326,    -1,   246,   241,   706,    -1,   246,   241,   706,   232,
      43,   668,    44,    -1,   247,   248,   472,    -1,   247,   248,
     472,   232,    43,   668,    44,    -1,   247,   248,   472,   249,
     667,    -1,   247,   248,   472,   249,   667,   232,    43,   668,
      44,    -1,   706,    -1,   325,    -1,   327,    -1,   669,    -1,
     668,    36,   669,    -1,    12,   545,   585,    13,   472,    -1,
     671,    -1,   672,    -1,   707,    54,    59,    -1,   200,   462,
     585,   469,    -1,   540,    43,    44,    -1,   540,    43,   551,
      44,    -1,   675,    -1,   677,    -1,   676,   200,    43,    14,
      44,    -1,    -1,   676,   465,    -1,   676,   200,    43,    44,
     159,   586,    -1,   676,   200,    43,   678,    44,   159,   586,
      -1,   586,    -1,   678,    36,   586,    -1,    43,   588,    44,
      -1,   680,    -1,   683,    -1,   243,    43,   681,    44,    -1,
     243,    43,    44,    -1,   682,    -1,   681,    36,   682,    -1,
     706,   585,    -1,   244,    43,   589,    36,   586,    44,    -1,
     244,    43,    44,    -1,   684,    -1,   243,    51,   685,    52,
      -1,   243,    51,    52,    -1,   686,    -1,   685,    36,   686,
      -1,   706,   585,    13,   472,    -1,   687,    -1,   540,    23,
     706,    -1,   187,   253,   706,   159,   588,    -1,   691,    -1,
     694,    -1,   706,    56,   694,   692,   693,    -1,   691,   693,
      -1,    -1,   142,   472,    -1,    58,   705,   692,    -1,   160,
      43,   694,    44,   161,   694,   162,   694,    -1,   695,    -1,
     695,   163,   696,    -1,   696,    -1,   696,   164,   697,    -1,
     697,    -1,   698,   115,   698,    -1,   698,   116,   698,    -1,
     698,   119,   698,    -1,   698,   120,   698,    -1,   698,   117,
     698,    -1,   698,   118,   698,    -1,   698,    -1,   698,    37,
     699,    -1,   698,    38,   699,    -1,   699,    -1,   699,    14,
     700,    -1,   699,   169,   700,    -1,   699,    77,   700,    -1,
     699,   170,   700,    -1,   700,    -1,    37,   700,    -1,    38,
     700,    -1,   701,    -1,   701,    24,   694,    25,    -1,   702,
      -1,   707,    43,   703,    44,    -1,    43,   703,    44,    -1,
      57,   706,    -1,    59,    -1,    60,    -1,    61,    -1,   132,
      -1,    -1,   704,    -1,   694,    -1,   704,    36,   694,    -1,
     472,    -1,    57,   706,    -1,   707,    -1,    62,    -1,    63,
      -1,    64,    -1,   198,    -1,   181,    -1,   160,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,   156,
      -1,    71,    -1,    65,    -1,   129,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    98,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,   111,
      -1,   115,    -1,   116,    -1,   117,    -1,   118,    -1,   119,
      -1,   120,    -1,   121,    -1,   133,    -1,   138,    -1,   139,
      -1,   140,    -1,   141,    -1,   142,    -1,   144,    -1,   145,
      -1,   146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,
      -1,   151,    -1,   152,    -1,   153,    -1,   154,    -1,   155,
      -1,   157,    -1,   159,    -1,   161,    -1,   162,    -1,   163,
      -1,   164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,
      -1,   169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,
      -1,   174,    -1,   175,    -1,   176,    -1,   177,    -1,   178,
      -1,   179,    -1,   180,    -1,   182,    -1,   183,    -1,   184,
      -1,   185,    -1,   186,    -1,   187,    -1,   188,    -1,   189,
      -1,   190,    -1,   191,    -1,   192,    -1,   194,    -1,   195,
      -1,   196,    -1,   199,    -1,   201,    -1,    91,    -1,    92,
      -1,   202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,
      -1,   207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,
      -1,   212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,
      -1,   217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,
      -1,   222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,
      -1,   227,    -1,   228,    -1,   229,    -1,   230,    -1,   231,
      -1,   232,    -1,   233,    -1,   234,    -1,   235,    -1,   236,
      -1,   237,    -1,   238,    -1,   127,    -1,   128,    -1,   239,
      -1,   240,    -1,   241,    -1,   242,    -1,   245,    -1,   246,
      -1,   247,    -1,   248,    -1,   249,    -1,   250,    -1,   251,
      -1,   252,    -1,   243,    -1,   253,    -1,   244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   782,   782,   784,   785,   787,   789,   790,   792,   793,
     795,   803,   809,   819,   827,   827,   830,   839,   850,   888,
     891,   897,   936,   965,   968,   990,   992,   996,  1003,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1015,  1034,  1039,  1044,
    1051,  1056,  1061,  1070,  1073,  1079,  1084,  1091,  1091,  1091,
    1094,  1107,  1112,  1119,  1124,  1133,  1136,  1144,  1171,  1175,
    1182,  1188,  1193,  1198,  1207,  1231,  1235,  1242,  1247,  1252,
    1257,  1268,  1286,  1290,  1297,  1302,  1310,  1335,  1338,  1341,
    1344,  1347,  1350,  1353,  1356,  1359,  1362,  1365,  1368,  1371,
    1374,  1377,  1380,  1383,  1386,  1392,  1393,  1394,  1395,  1396,
    1408,  1411,  1417,  1431,  1435,  1442,  1449,  1452,  1457,  1462,
    1470,  1478,  1489,  1500,  1503,  1510,  1520,  1523,  1528,  1537,
    1540,  1545,  1550,  1558,  1559,  1560,  1561,  1562,  1563,  1564,
    1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,  1573,  1574,
    1575,  1579,  1597,  1601,  1606,  1615,  1621,  1621,  1624,  1644,
    1648,  1653,  1661,  1666,  1670,  1678,  1681,  1689,  1702,  1706,
    1717,  1720,  1728,  1746,  1750,  1757,  1762,  1767,  1775,  1781,
    1789,  1797,  1804,  1818,  1822,  1836,  1845,  1853,  1856,  1863,
    1898,  1902,  1907,  1913,  1923,  1926,  1934,  1937,  1944,  1962,
    1966,  1973,  1978,  1986,  2004,  2008,  2016,  2038,  2042,  2049,
    2057,  2066,  2074,  2112,  2116,  2123,  2130,  2139,  2148,  2175,
    2179,  2186,  2198,  2225,  2229,  2236,  2246,  2258,  2262,  2267,
    2276,  2289,  2293,  2298,  2307,  2321,  2325,  2338,  2343,  2355,
    2359,  2367,  2380,  2388,  2401,  2408,  2422,  2422,  2425,  2425,
    2447,  2451,  2455,  2473,  2491,  2501,  2515,  2523,  2529,  2535,
    2541,  2553,  2556,  2570,  2571,  2576,  2578,  2579,  2580,  2584,
    2604,  2621,  2624,  2628,  2640,  2642,  2646,  2650,  2654,  2658,
    2662,  2668,  2674,  2678,  2682,  2696,  2697,  2698,  2699,  2700,
    2701,  2702,  2703,  2707,  2707,  2710,  2714,  2722,  2727,  2736,
    2741,  2750,  2833,  2841,  2846,  2855,  2860,  2869,  2879,  2883,
    2891,  2895,  2903,  2919,  2928,  2940,  2949,  2952,  2957,  2966,
    2970,  2978,  2988,  3000,  3005,  3015,  3018,  3025,  3025,  3029,
    3041,  3048,  3052,  3060,  3069,  3073,  3081,  3084,  3092,  3093,
    3101,  3108,  3115,  3120,  3129,  3134,  3144,  3152,  3160,  3173,
    3188,  3195,  3196,  3197,  3198,  3199,  3200,  3201,  3202,  3203,
    3204,  3205,  3206,  3211,  3255,  3256,  3269,  3276,  3276,  3279,
    3279,  3279,  3284,  3291,  3295,  3299,  3311,  3314,  3325,  3328,
    3338,  3345,  3349,  3353,  3357,  3366,  3374,  3382,  3387,  3395,
    3399,  3405,  3412,  3427,  3442,  3445,  3449,  3457,  3465,  3469,
    3478,  3486,  3497,  3501,  3505,  3516,  3523,  3532,  3536,  3540,
    3548,  3566,  3571,  3581,  3584,  3592,  3600,  3609,  3614,  3623,
    3633,  3637,  3641,  3641,  3645,  3649,  3653,  3657,  3661,  3665,
    3669,  3673,  3677,  3681,  3685,  3689,  3693,  3698,  3702,  3706,
    3711,  3718,  3723,  3727,  3731,  3736,  3740,  3744,  3748,  3752,
    3757,  3761,  3765,  3770,  3774,  3778,  3783,  3800,  3805,  3810,
    3815,  3819,  3824,  3828,  3833,  3839,  3845,  3850,  3851,  3852,
    3860,  3864,  3868,  3876,  3883,  3892,  3892,  3896,  3916,  3917,
    3925,  3926,  3932,  3953,  3957,  3971,  3977,  3990,  3994,  3994,
    3998,  3999,  4008,  4009,  4015,  4016,  4025,  4037,  4048,  4052,
    4056,  4060,  4064,  4068,  4072,  4076,  4084,  4092,  4109,  4117,
    4126,  4130,  4134,  4138,  4142,  4150,  4162,  4167,  4172,  4179,
    4184,  4191,  4198,  4210,  4211,  4215,  4221,  4222,  4223,  4224,
    4225,  4226,  4227,  4228,  4229,  4233,  4233,  4236,  4236,  4236,
    4240,  4247,  4251,  4255,  4263,  4271,  4281,  4291,  4295,  4318,
    4323,  4333,  4334,  4343,  4347,  4356,  4356,  4356,  4360,  4366,
    4375,  4375,  4380,  4383,  4392,  4403,  4403,  4408,  4412,  4419,
    4423,  4434,  4437,  4442,  4451,  4454,  4458,  4470,  4473,  4478,
    4487,  4490,  4494,  4510,  4513,  4518,  4523,  4528,  4539,  4549,
    4552,  4557,  4567,  4568,  4582,  4583,  4584,  4585,  4586,  4587,
    4588,  4593,  4601,  4609,  4613,  4621,  4625,  4634,  4641,  4645,
    4655,  4663,  4671,  4679,  4686,  4694,  4701,  4705,  4713,  4721,
    4724,  4733,  4736,  4746,  4750,  4760,  4761,  4763,  4765,  4771,
    4775,  4776,  4777,  4778,  4783,  4799,  4800,  4801,  4802,  4803,
    4804,  4805,  4806,  4807,  4808,  4813,  4821,  4825,  4832,  4843,
    4851,  4859,  4868,  4872,  4876,  4884,  4888,  4892,  4900,  4901,
    4909,  4917,  4922,  4926,  4930,  4934,  4943,  4944,  4952,  4959,
    4962,  4965,  4968,  4972,  4984,  5000,  5002,  5009,  5012,  5021,
    5033,  5038,  5050,  5055,  5059,  5064,  5069,  5074,  5075,  5084,
    5089,  5093,  5099,  5103,  5111,  5116,  5126,  5129,  5133,  5137,
    5141,  5145,  5153,  5155,  5166,  5172,  5178,  5184,  5199,  5203,
    5207,  5211,  5215,  5219,  5223,  5227,  5235,  5239,  5243,  5251,
    5255,  5263,  5264,  5276,  5277,  5278,  5279,  5280,  5281,  5282,
    5283,  5291,  5295,  5299,  5303,  5312,  5316,  5324,  5328,  5338,
    5342,  5346,  5350,  5354,  5362,  5364,  5371,  5375,  5379,  5383,
    5393,  5397,  5401,  5409,  5411,  5419,  5423,  5430,  5434,  5442,
    5446,  5454,  5462,  5466,  5474,  5481,  5489,  5494,  5499,  5511,
    5515,  5519,  5523,  5527,  5533,  5533,  5538,  5544,  5544,  5549,
    5553,  5563,  5571,  5578,  5583,  5591,  5600,  5608,  5616,  5625,
    5632,  5641,  5653,  5658,  5663,  5669,  5675,  5681,  5691,  5694,
    5702,  5706,  5714,  5718,  5726,  5731,  5740,  5744,  5748,  5756,
    5760,  5768,  5772,  5776,  5780,  5788,  5792,  5796,  5804,  5809,
    5819,  5832,  5832,  5836,  5844,  5855,  5860,  5884,  5884,  5888,
    5894,  5896,  5900,  5904,  5911,  5916,  5925,  5934,  5934,  5938,
    5942,  5949,  5955,  5965,  5973,  5978,  5984,  5988,  5996,  6003,
    6004,  6012,  6019,  6022,  6030,  6040,  6047,  6054,  6059,  6068,
    6071,  6078,  6085,  6089,  6093,  6103,  6107,  6117,  6121,  6125,
    6129,  6133,  6137,  6141,  6145,  6149,  6153,  6157,  6161,  6165,
    6169,  6173,  6177,  6181,  6185,  6189,  6193,  6197,  6201,  6209,
    6215,  6219,  6223,  6227,  6231,  6239,  6242,  6246,  6250,  6258,
    6262,  6273,  6273,  6273,  6273,  6273,  6273,  6273,  6273,  6274,
    6274,  6274,  6274,  6274,  6274,  6275,  6279,  6279,  6279,  6279,
    6279,  6279,  6279,  6279,  6279,  6279,  6280,  6280,  6280,  6280,
    6280,  6280,  6280,  6281,  6281,  6281,  6281,  6281,  6281,  6281,
    6281,  6282,  6282,  6282,  6282,  6282,  6282,  6282,  6282,  6282,
    6282,  6282,  6283,  6283,  6283,  6283,  6283,  6283,  6283,  6283,
    6283,  6283,  6283,  6283,  6284,  6284,  6284,  6284,  6284,  6284,
    6284,  6284,  6284,  6284,  6285,  6285,  6285,  6285,  6285,  6285,
    6285,  6285,  6285,  6285,  6285,  6285,  6286,  6286,  6286,  6286,
    6286,  6286,  6286,  6286,  6286,  6286,  6286,  6286,  6287,  6287,
    6287,  6287,  6287,  6287,  6287,  6287,  6287,  6288,  6288,  6288,
    6288,  6288,  6288,  6288,  6288,  6289,  6289,  6289,  6289,  6289,
    6289,  6289,  6289,  6289,  6289,  6289,  6290,  6290,  6290,  6290,
    6290,  6290,  6290,  6290,  6290,  6291,  6291,  6291,  6291,  6291,
    6291,  6291,  6291,  6291,  6291,  6292,  6292,  6292,  6292,  6292,
    6292,  6292,  6292,  6292,  6292,  6292,  6293,  6293,  6293,  6293,
    6293,  6293,  6293,  6293,  6293,  6293,  6293,  6294,  6294,  6294,
    6294,  6294,  6294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"<end of file>\"", "error", "$undefined", "\"<Language: XPath2>\"",
  "\"<Language: XQuery>\"", "\"<Language: XSLT 2.0>\"",
  "\"<Language: Function Declaration>\"", "\"<Language: Delayed Module>\"",
  "\"<Language: Function Signature>\"", "\"<Language: Rewrite Rule>\"",
  "\"<Language: Rewrite Pattern>\"", "\"<Language: SequenceType>\"",
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"", "\"> (start tag close)\"",
  "\"> (end tag close)\"", "\"<?\"", "\"<!--\"", "\"-->\"", "\"//\"",
  "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"", "\"/\"",
  "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"", "\")\"",
  "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"",
  "\"' (close)\"", "\"{\"", "\"}\"", "\";\"", "\"#\"", "\"%\"", "\":\"",
  "\"~\"", "\"->\"", "\"<integer literal>\"", "\"<decimal literal>\"",
  "\"<double literal>\"", "\"attribute\"", "\"comment\"",
  "\"document-node\"", "\"namespace-node\"", "\"node\"",
  "\"processing-instruction\"", "\"schema-attribute\"",
  "\"schema-element\"", "\"text\"", "\"empty-sequence\"",
  "\"boundary-space\"", "\"ft-option\"", "\"base-uri\"", "\"lax\"",
  "\"strict\"", "\"idiv\"", "\"child\"", "\"descendant\"", "\"self\"",
  "\"descendant-or-self\"", "\"following-sibling\"", "\"following\"",
  "\"parent\"", "\"ancestor\"", "\"preceding-sibling\"", "\"preceding\"",
  "\"ancestor-of-self\"", "\"document\"", "\"not\"", "\"using\"", "\"no\"",
  "\"sensitive\"", "\"insensitive\"", "\"diacritics\"", "\"without\"",
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
  "\"<computed constructor qualified name>\"", "\"<string literal>\"",
  "\"variable\"", "\"<NCName>:*\"", "\"*:<NCName>\"",
  "\"<processing instruction target>\"", "\"<pragma content>\"",
  "\"return\"", "\"for\"", "\"in\"", "\"let\"", "\"where\"", "\"count\"",
  "\"by\"", "\"order\"", "\"stable\"", "\"ascending\"", "\"descending\"",
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
  "\"function\"", "\"function (XQuery 1.1)\"", "\"score\"", "\"contains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"nodes\"", "\"rename\"", "\"last\"",
  "\"delete\"", "\"into\"", "\"updating\"", "\"id\"", "\"key\"",
  "\"template\"", "\"matches\"", "\"tuple\"", "\"map\"", "\"name\"",
  "\"call\"", "\"apply\"", "\"templates\"", "\"mode\"", "\"ftor\"",
  "\"ftand\"", "\"ftnot\"", "\"type-alias\"", "\"<XSLT end element>\"",
  "\"<xsl:stylesheet...\"", "\"<xsl:template...\"", "\"<xsl:value-of...\"",
  "\"<xsl:text...\"", "\"<xsl:apply-templates...\"",
  "\"<xsl:call-template...\"", "\"<xsl:with-param...\"",
  "\"<xsl:sequence...\"", "\"<xsl:param...\"", "\"<xsl:function...\"",
  "\"<xsl:choose...\"", "\"<xsl:when...\"", "\"<xsl:otherwise...\"",
  "\"<xsl:if...\"", "\"<xsl:variable...\"", "\"<xsl:comment...\"",
  "\"<xsl:processing-instruction...\"", "\"<xsl:document...\"",
  "\"<xsl:attribute...\"", "\"<xsl:namespace...\"", "\"<xsl:element...\"",
  "\"<xsl:analyze-string...\"", "\"<xsl:matching-substring...\"",
  "\"<xsl:non-matching-substring...\"", "\"<xsl:copy-of...\"",
  "\"<xsl:copy...\"", "\"<xsl:for-each...\"", "\"<xsl:output...\"",
  "\"<xsl:import-schema...\"", "\"<xsl:type-alias...\"",
  "\"version='...'\"", "\"mode='...'\"", "\"name='...'\"",
  "\"doctype-public='...'\"", "\"doctype-system='...'\"",
  "\"encoding='...'\"", "\"media-type='...'\"",
  "\"normalization-form='...'\"", "\"standalone='...'\"",
  "\"exclude-result-prefixes='...'\"", "\"namespace='...' (string)\"",
  "\"schema-location='...'\"", "\"tunnel='...'\"", "\"required='...'\"",
  "\"override='...'\"", "\"copy-namespaces='...'\"",
  "\"inherit-namespaces='...'\"", "\"byte-order-mark='...'\"",
  "\"escape-uri-attributes='...'\"", "\"include-content-type='...'\"",
  "\"indent='...'\"", "\"omit-xml-declaration='...'\"",
  "\"undeclare-prefixes='...'\"", "\"match='...'\"", "\"as='...'\"",
  "\"select='...'\"", "\"priority='...'\"", "\"test='...'\"",
  "\"separator='...'\"", "\"namespace='...' (attribute value template)\"",
  "\"regex='...'\"", "\"flags='...'\"", "\"method='...'\"",
  "\"cdata-section-elements='...'\"", "\"use-character-maps='...'\"",
  "\"<XSLT element name>\"", "\"<XSLT XMLNS attr>\"",
  "\"<XSLT attr name>\"", "\"<XSLT text node>\"",
  "\"<XSLT whitespace text node>\"", "\"#default\"", "\"#all\"",
  "\"#current\"", "\"xml\"", "\"html\"", "\"xhtml\"", "$accept",
  "SelectLanguage", "XPath2Namespaces", "XQueryNamespaces",
  "Start_FunctionDecl", "FunctionDecl_MaybeSemicolon",
  "Start_FunctionSignature", "Start_DelayedModule", "DM_ModuleDecl",
  "DM_Prolog", "DM_FunctionDecl", "Start_XSLT", "Stylesheet_XSLT",
  "StylesheetAttrs_XSLT", "StylesheetContent_XSLT", "Template_XSLT",
  "TemplateAttrs_XSLT", "TemplateModes_XSLT", "Number_XSLT",
  "Function_XSLT", "FunctionAttrs_XSLT", "ParamList_XSLT", "Param_XSLT",
  "ParamAttrs_XSLT", "GlobalParam_XSLT", "GlobalParamAttrs_XSLT",
  "GlobalVariable_XSLT", "GlobalVariableAttrs_XSLT", "Output_XSLT",
  "OutputAttrs_XSLT", "OutputMethod_XSLT", "QNames_XSLT", "TypeAlias_XSLT",
  "TypeAliasAttrs_XSLT", "ImportSchema_XSLT", "ImportSchemaAttrs_XSLT",
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
  "AttributeAttrs_XSLT", "Namespace_XSLT", "NamespaceAttrs_XSLT",
  "Element_XSLT", "ElementAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT",
  "Copy_XSLT", "CopyAttrs_XSLT", "ForEach_XSLT", "ForEachAttrs_XSLT",
  "Pattern_XSLT", "PathPattern_XSLT", "PathPatternStart_XSLT",
  "IdKeyPattern_XSLT", "IdValue_XSLT", "KeyValue_XSLT",
  "RelativePathPattern_XSLT", "PatternStep_XSLT", "PatternAxis_XSLT",
  "PatternStepPredicateList_XSLT", "Module", "VersionDecl", "Version",
  "Encoding", "MainModule", "LibraryModule", "ModuleDecl", "Prolog",
  "Setter", "Import", "Separator", "NamespaceDecl", "BoundarySpaceDecl",
  "DefaultNamespaceDecl", "OptionDecl", "FTOptionDecl", "OrderingModeDecl",
  "EmptyOrderDecl", "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "ConstructionDecl",
  "AnnotatedDeclAnnotations", "AnnotatedDeclAnnotation",
  "CompatibilityAnnotation", "VarDecl", "VarDeclValue", "FunctionDecl",
  "FunctionParamList", "FunctionDeclReturnType", "FunctionBody",
  "Annotation", "AnnotationArgs", "ParamList", "Param", "EnclosedExpr",
  "QueryBody", "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples",
  "InitialClause", "IntermediateClause", "ForClause", "ForBindingList",
  "ForBinding", "PositionalVar", "FTScoreVar", "LetClause",
  "LetBindingList", "LetBinding", "WhereClause", "CountClause",
  "OrderByClause", "OrderSpecList", "OrderSpec", "OrderExpr",
  "OrderDirection", "EmptyHandling", "QuantifiedExpr",
  "QuantifyBindingList", "QuantifyBinding", "TypeswitchExpr",
  "CaseClauseList", "DefaultCase", "CaseClause", "CaseSequenceTypeUnion",
  "CaseClauseVariable", "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr",
  "$@1", "FTContainsExpr", "RangeExpr", "AdditiveExpr",
  "MultiplicativeExpr", "UnionExpr", "IntersectExceptExpr",
  "InstanceofExpr", "TreatExpr", "CastableExpr", "CastExpr", "UnaryExpr",
  "ValueExpr", "ValidateExpr", "ExtensionExpr", "PragmaList", "Pragma",
  "PragmaContents", "PathExpr", "LeadingSlash", "RelativePathExpr",
  "StepExpr", "AxisStep", "ForwardStepPredicateList",
  "ReverseStepPredicateList", "ForwardStep", "ForwardAxis",
  "AbbrevForwardStep", "ReverseStep", "ReverseAxis", "AbbrevReverseStep",
  "NodeTest", "NameTest", "Wildcard", "PostfixExpr", "PrimaryExpr",
  "Literal", "NumericLiteral", "VarRef", "VarName", "ParenthesizedExpr",
  "ContextItemExpr", "OrderedExpr", "UnorderedExpr", "FunctionCall",
  "FunctionCallArgumentList", "Argument", "Constructor",
  "DirectConstructor", "DirElemConstructor", "DirElemConstructorQName",
  "DirAttributeList", "OptionalWhitespace", "DirAttributeValue",
  "LiteralDirAttributeValue", "QuotAttrValueContent",
  "LiteralQuotAttrValueContent", "AposAttrValueContent",
  "LiteralAposAttrValueContent", "DirElementContent",
  "DirCommentConstructor", "DirCommentContents", "DirPIConstructor",
  "DirPIContents", "ComputedConstructor", "CompDocConstructor",
  "CompElemConstructor", "CompElementName", "ContentExpr",
  "CompAttrConstructor", "CompAttrName", "CompNamespaceConstructor",
  "CompTextConstructor", "CompCommentConstructor", "CompPIConstructor",
  "CompPINCName", "CompPIConstructorContent", "SingleType",
  "SingleTypeOccurrence", "TypeDeclaration", "SequenceType",
  "OccurrenceIndicator", "ItemType", "AtomicType", "KindTest",
  "AnyKindTest", "DocumentTest", "TextTest", "CommentTest",
  "NamespaceNodeTest", "PITest", "AttributeTest", "AttribNameOrWildcard",
  "SchemaAttributeTest", "AttributeDeclaration", "ElementTest",
  "ElementNameOrWildcard", "SchemaElementTest", "ElementDeclaration",
  "AttributeName", "ElementName", "TypeName", "URILiteral", "FTSelection",
  "FTSelectionWeight", "FTPosFilters", "FTOr", "FTAnd", "FTMildnot",
  "FTUnaryNot", "FTPrimaryWithOptions", "FTPrimary", "FTWords",
  "FTExtensionSelection", "FTAnyallOption", "FTTimes", "FTRange",
  "FTPosFilter", "FTUnit", "FTBigUnit", "FTMatchOptions", "FTMatchOption",
  "FTCaseOption", "FTDiacriticsOption", "FTStemOption",
  "FTThesaurusOption", "FTThesaurusIDList", "FTThesaurusID",
  "FTStopWordOption", "FTStopWordsInclExclList", "FTStopWords",
  "FTStopWordsStringList", "FTStopWordsInclExcl", "FTLanguageOption",
  "FTWildCardOption", "FTExtensionOption", "FTIgnoreOption",
  "RevalidationDecl", "InsertExpr", "InsertExprBegin", "DeleteExpr",
  "DeleteExprBegin", "ReplaceExpr", "RenameExpr", "TransformExpr",
  "TransformBindingList", "TransformBinding", "IntegerLiteral",
  "DecimalLiteral", "DoubleLiteral", "StringLiteral", "NCName", "QName",
  "TemplateDecl", "TemplateSequenceType", "TemplateParamList",
  "TemplateDeclModesSection", "TemplateDeclModes", "TemplateDeclMode",
  "CallTemplateExpr", "ApplyTemplatesExpr", "ApplyTemplatesMode",
  "TemplateArgumentList", "TemplateArgument", "FunctionItemExpr",
  "LiteralFunctionItem", "InlineFunction", "DynamicFunctionInvocation",
  "FunctionTest", "AnyFunctionTest", "Annotations", "TypedFunctionTest",
  "FunctionTypeArguments", "ParenthesizedItemType", "TupleTest",
  "TupleTestEntryList", "TupleTestEntry", "MapTest", "TupleConstructor",
  "TupleEntryList", "TupleEntry", "TupleMemberExpr", "TypeAlias",
  "RewriteRule", "RewritePattern", "RW_Rule", "RW_WhereCondition",
  "RW_Case", "RW_Pattern", "RW_OrExpr", "RW_AndExpr", "RW_ComparisonExpr",
  "RW_AdditiveExpr", "RW_MultiplicativeExpr", "RW_UnaryExpr",
  "RW_PostfixExpr", "RW_PrimaryExpr", "RW_OptionalCommaList",
  "RW_CommaList", "RW_Result", "QNameValue", "FunctionName", 0
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
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   331,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   333,   334,   335,   336,   336,   337,   338,   339,   340,
     340,   341,   342,   343,   343,   344,   344,   344,   345,   345,
     345,   345,   345,   345,   345,   345,   346,   347,   347,   347,
     347,   347,   347,   348,   348,   348,   348,   349,   349,   349,
     350,   351,   351,   351,   351,   352,   352,   353,   354,   354,
     354,   354,   354,   354,   355,   356,   356,   356,   356,   356,
     356,   357,   358,   358,   358,   358,   359,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   361,   361,   361,   361,   361,
     362,   362,   363,   364,   364,   364,   365,   366,   366,   366,
     366,   366,   367,   368,   368,   368,   369,   369,   369,   370,
     370,   370,   370,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   372,   373,   373,   373,   374,   375,   375,   376,   377,
     377,   377,   378,   378,   378,   379,   379,   380,   381,   381,
     382,   382,   383,   384,   384,   384,   384,   384,   385,   386,
     387,   388,   389,   390,   390,   391,   392,   393,   393,   394,
     395,   395,   395,   395,   396,   396,   397,   397,   398,   399,
     399,   399,   399,   400,   401,   401,   402,   403,   403,   403,
     404,   405,   406,   407,   407,   407,   407,   407,   408,   409,
     409,   409,   410,   411,   411,   411,   412,   413,   413,   413,
     414,   415,   415,   415,   416,   417,   417,   418,   418,   419,
     419,   419,   420,   420,   421,   421,   422,   422,   423,   423,
     424,   424,   424,   424,   424,   424,   425,   426,   426,   426,
     426,   427,   427,   428,   428,   429,   429,   429,   429,   430,
     431,   432,   433,   434,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   436,   436,   436,   436,   436,
     436,   436,   436,   437,   437,   438,   439,   440,   440,   441,
     441,   442,   443,   444,   444,   445,   445,   446,   447,   447,
     448,   448,   449,   450,   451,   451,   452,   452,   452,   453,
     453,   454,   454,   455,   455,   456,   456,   457,   457,   458,
     459,   460,   460,   461,   462,   462,   463,   463,   464,   464,
     465,   465,   466,   466,   467,   467,   468,   469,   470,   471,
     471,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     472,   472,   472,   473,   474,   474,   474,   475,   475,   476,
     476,   476,   477,   478,   478,   479,   480,   480,   481,   481,
     482,   483,   483,   484,   484,   485,   486,   487,   487,   488,
     488,   489,   489,   490,   491,   491,   491,   492,   492,   492,
     493,   493,   494,   494,   495,   496,   497,   497,   498,   498,
     499,   500,   500,   501,   501,   502,   503,   503,   504,   504,
     505,   505,   506,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   507,   507,   507,
     508,   508,   509,   509,   509,   510,   510,   510,   510,   510,
     511,   511,   511,   512,   512,   512,   513,   513,   514,   514,
     515,   515,   516,   516,   517,   517,   517,   518,   518,   518,
     519,   519,   519,   520,   520,   521,   521,   522,   523,   523,
     524,   524,   524,   524,   525,   526,   526,   526,   527,   527,
     528,   528,   529,   529,   530,   530,   531,   531,   532,   532,
     532,   532,   532,   532,   532,   532,   533,   533,   534,   534,
     535,   535,   535,   535,   535,   536,   537,   537,   538,   538,
     539,   539,   539,   540,   540,   540,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   542,   542,   543,   543,   543,
     544,   545,   546,   546,   547,   548,   549,   550,   550,   551,
     551,   552,   552,   553,   553,   554,   554,   554,   555,   555,
     556,   556,   557,   557,   557,   558,   558,   559,   559,   560,
     560,   561,   561,   561,   562,   562,   562,   563,   563,   563,
     564,   564,   564,   565,   565,   565,   565,   565,   566,   567,
     567,   568,   569,   569,   570,   570,   570,   570,   570,   570,
     570,   571,   572,   573,   573,   574,   574,   575,   576,   576,
     577,   578,   579,   580,   581,   581,   582,   582,   583,   584,
     584,   585,   585,   586,   586,   587,   587,   587,   587,   588,
     588,   588,   588,   588,   589,   590,   590,   590,   590,   590,
     590,   590,   590,   590,   590,   591,   592,   592,   592,   593,
     594,   595,   596,   596,   596,   597,   597,   597,   598,   598,
     599,   600,   601,   601,   601,   601,   602,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   610,   611,   611,   612,
     612,   613,   613,   614,   614,   615,   615,   616,   616,   617,
     617,   617,   618,   618,   619,   619,   620,   620,   620,   620,
     620,   620,   621,   621,   622,   622,   622,   622,   623,   623,
     623,   623,   623,   623,   623,   623,   624,   624,   624,   625,
     625,   626,   626,   627,   627,   627,   627,   627,   627,   627,
     627,   628,   628,   628,   628,   629,   629,   630,   630,   631,
     631,   631,   631,   631,   632,   632,   633,   633,   633,   633,
     634,   634,   634,   635,   635,   636,   636,   637,   637,   638,
     638,   639,   640,   640,   641,   642,   643,   643,   643,   644,
     644,   644,   644,   644,   645,   645,   646,   647,   647,   648,
     648,   649,   650,   651,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   659,   659,   659,   659,   659,   660,   660,
     661,   661,   662,   662,   663,   663,   664,   664,   664,   665,
     665,   666,   666,   666,   666,   667,   667,   667,   668,   668,
     669,   670,   670,   671,   672,   673,   673,   674,   674,   675,
     676,   676,   677,   677,   678,   678,   679,   588,   588,   680,
     680,   681,   681,   682,   683,   683,   541,   684,   684,   685,
     685,   686,   540,   687,   688,   689,   690,   691,   691,   692,
     692,   693,   694,   694,   695,   695,   696,   696,   697,   697,
     697,   697,   697,   697,   697,   698,   698,   698,   699,   699,
     699,   699,   699,   700,   700,   700,   701,   701,   702,   702,
     702,   702,   702,   702,   702,   703,   703,   704,   704,   705,
     541,   706,   706,   706,   706,   706,   706,   706,   706,   706,
     706,   706,   706,   706,   706,   706,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707,   707,   707,   707,   707,   707,   707,   707,
     707,   707,   707
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     0,     0,     8,     0,     1,     3,     2,     6,     0,
       2,     8,     1,     4,     1,     0,     2,     2,     0,     2,
       2,     2,     2,     2,     2,     2,     4,     1,     3,     2,
       3,     3,     3,     0,     2,     2,     2,     1,     1,     1,
       4,     1,     2,     3,     2,     0,     2,     3,     1,     2,
       3,     3,     2,     2,     3,     1,     2,     3,     3,     2,
       2,     3,     1,     2,     3,     3,     2,     1,     2,     3,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     3,     2,     1,     2,     2,
       3,     3,     4,     0,     3,     2,     0,     2,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     3,     3,     1,     1,     3,     1,
       3,     3,     1,     1,     1,     0,     2,     3,     1,     2,
       0,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       3,     3,     4,     1,     2,     3,     3,     0,     3,     4,
       1,     3,     3,     3,     0,     3,     0,     3,     4,     1,
       2,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     2,     1,     3,     2,
       3,     1,     2,     2,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     4,     6,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     3,     2,     1,     3,     3,
       2,     0,     4,     2,     2,     0,     3,     4,     3,     2,
       2,     2,     2,     6,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     3,     3,     5,
       5,     4,     3,     3,     3,     5,     5,     5,     1,     1,
       1,     1,     4,     3,     5,     4,     0,     2,     3,     3,
       3,     7,     4,     3,     3,     0,     2,     1,     1,     1,
       7,     2,     1,     7,     2,     3,     0,     2,     1,     1,
       2,     5,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     1,     1,
       1,     1,     2,     3,     1,     7,     0,     3,     0,     3,
       2,     3,     1,     5,     5,     2,     3,     3,     4,     3,
       1,     3,     5,     1,     0,     1,     1,     0,     2,     2,
       4,     4,     3,     1,     5,     6,     2,     1,     5,     3,
       3,     3,     3,     0,     3,     8,     3,     1,     3,     1,
       3,     3,     0,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     4,     5,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     4,     1,     4,     1,
       4,     1,     4,     1,     2,     2,     1,     1,     1,     1,
       4,     5,     5,     3,     4,     1,     2,     4,     1,     2,
       1,     2,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     4,     1,     4,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     3,     2,     1,     4,     4,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     5,    10,
       1,     1,     0,     7,     7,     0,     1,     3,     3,     3,
       3,     0,     2,     2,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     2,     3,     0,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     2,     3,     3,     1,     3,
       3,     4,     4,     3,     1,     3,     2,     3,     2,     0,
       1,     0,     2,     2,     3,     0,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     4,     3,
       3,     3,     3,     4,     4,     3,     4,     6,     1,     1,
       4,     1,     3,     4,     6,     7,     1,     1,     4,     1,
       1,     1,     1,     1,     3,     0,     2,     0,     2,     3,
       1,     3,     1,     4,     1,     2,     1,     1,     2,     2,
       3,     1,     2,     4,     3,     4,     0,     1,     2,     1,
       2,     1,     0,     3,     2,     3,     3,     4,     1,     3,
       3,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     1,     2,     2,     1,     2,     2,
       2,     5,     5,     2,     0,     3,     2,     4,     4,     6,
       4,     3,     4,     0,     2,     2,     3,     1,     3,     2,
       2,     2,     1,     2,     3,     3,     3,     3,     3,     6,
       6,     4,     4,     4,     2,     2,     2,     2,     2,     7,
       5,     5,     6,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     5,     7,     8,    10,     6,     8,     0,     2,
       2,     3,     0,     2,     1,     3,     1,     1,     1,     3,
       7,     3,     7,     5,     9,     1,     1,     1,     1,     3,
       5,     1,     1,     3,     4,     3,     4,     1,     1,     5,
       0,     2,     6,     7,     1,     3,     3,     1,     1,     4,
       3,     1,     3,     2,     6,     3,     1,     4,     3,     1,
       3,     4,     1,     3,     5,     1,     1,     5,     2,     0,
       2,     3,     8,     1,     3,     1,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     2,     2,     1,     4,     1,     4,     3,
       2,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    11,    12,     0,    12,     0,   315,     0,     0,   820,
       0,     0,   255,    25,   113,     5,    22,    24,     0,     0,
       6,    19,     7,     0,   892,   893,   894,   905,   898,   899,
     900,   901,   902,   904,   907,   908,   909,   910,   911,   912,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,  1007,  1008,   926,   927,   928,   929,   930,
     931,   932,   933,   934,   935,   936,   937,   938,   939,   940,
     941,   942,   943,   944,   945,   946,   947,   948,   949,   950,
    1046,  1047,   906,   951,   952,   953,   954,   955,   956,   957,
     958,   959,   960,   961,   962,   963,   964,   965,   966,   967,
     968,   903,   969,   970,   897,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     986,   987,   988,   989,   990,   896,   991,   992,   993,   994,
     995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,
     895,  1005,  1006,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,
    1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,
    1048,  1049,  1050,  1051,  1060,  1062,  1052,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1061,     8,   845,     0,   891,     0,
       0,   885,     0,   881,   882,   883,   884,     0,     9,   846,
     853,   855,   857,   864,   867,   872,   875,   877,     0,   820,
     892,   893,   894,   905,   898,   899,   900,   901,   902,   904,
     896,   895,  1060,  1062,    10,   615,   620,   621,   634,   625,
     632,   631,   633,   630,   627,   629,   626,   628,   624,   622,
     817,     0,   818,   623,   827,   828,   781,     1,     0,   510,
       0,     0,     0,   579,     0,   555,     0,     0,   474,   534,
     505,     0,     0,   776,   777,   778,   892,   893,   899,   902,
     913,   914,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   942,  1046,  1047,   779,   511,   512,   953,   955,
     966,   967,   903,   897,   984,   990,   895,     0,  1032,  1035,
    1041,  1043,  1060,  1053,  1054,     2,   338,   340,   341,     0,
     354,   357,   358,   342,   343,   344,   350,   407,   409,   426,
     429,   431,   434,   439,   442,   445,   447,   449,   451,   453,
     456,   457,   459,     0,   465,   458,   470,   473,   477,   478,
     480,   481,   482,     0,   487,   484,     0,   499,   497,   507,
     509,   479,   513,   516,   525,   517,   518,   519,   522,   523,
     520,   521,   543,   545,   546,   547,   544,   584,   585,   586,
     587,   588,   589,   590,   506,   345,     0,   346,     0,   348,
     347,   349,   527,   528,   529,   526,   508,   351,   352,   524,
     811,   812,   515,   836,   842,   891,     0,     3,   264,    28,
     119,   315,     4,     0,    17,     0,     0,   319,   316,   317,
     326,   318,     0,   848,     0,   873,   874,   887,     0,   886,
     880,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   885,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   616,   618,   617,   613,     0,   821,   530,
     531,   496,   550,   551,   552,     0,   580,     0,   472,   556,
       0,   455,   454,   533,     0,   890,   490,     0,   598,     0,
       0,     0,   604,     0,     0,   488,   489,   491,   492,   493,
     494,   500,   501,   502,   503,   504,     0,     0,     0,   774,
       0,     0,     0,   362,   364,     0,     0,   370,   372,     0,
       0,   393,     0,     0,     0,     0,     0,     0,   495,     0,
       0,   593,     0,   611,     0,     0,   764,   765,     0,   767,
     768,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   359,   356,   360,   361,   355,     0,     0,     0,
       0,     0,     0,     0,     0,   412,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   466,   471,     0,     0,     0,     0,   486,   498,     0,
       0,     0,     0,   766,     0,     0,     0,     0,     0,     0,
       0,   253,   254,   264,     0,    26,    27,     0,   115,   116,
       0,     0,     0,   780,   315,    20,     0,   324,     0,   335,
     330,   820,    16,   889,   849,   849,   879,     0,     0,   854,
     856,   865,   866,   858,   859,   862,   863,   860,   861,   868,
     870,   869,   871,     0,     0,   826,   649,   645,     0,   648,
     660,   640,   636,     0,     0,     0,     0,   641,   635,   642,
       0,     0,     0,   651,     0,   659,   661,   639,   614,   619,
     657,   652,     0,   656,   830,     0,   831,   611,   835,     0,
     820,   555,     0,   582,   581,   578,     0,   532,     0,     0,
     597,     0,     0,     0,   603,     0,     0,     0,     0,     0,
       0,     0,   611,     0,   611,     0,     0,   611,     0,     0,
       0,     0,     0,     0,     0,     0,   600,     0,   592,   820,
       0,     0,     0,     0,   838,     0,   839,   611,   799,   801,
     339,   353,   375,     0,     0,     0,   406,   408,   411,   414,
     415,   416,   424,   425,     0,   410,   417,   418,   419,   420,
     421,   422,   423,     0,   432,   433,   430,   435,   437,   436,
     438,   440,   441,   443,   444,   820,   820,     0,     0,   463,
       0,   476,   475,     0,     0,   843,     0,   542,   815,   541,
       0,   540,     0,     0,     0,     0,   537,     0,   813,   260,
     259,   285,     0,   256,   258,     0,   262,   996,  1003,     0,
       0,     0,   275,     0,     0,     0,   279,   280,   282,   276,
     277,   283,   284,   278,     0,     0,   261,   281,     0,     0,
      23,    37,    65,    51,    72,    77,   107,   103,    29,    55,
      30,    55,    31,   119,    32,   119,    33,     0,    35,     0,
      34,     0,   114,   112,   142,     0,   149,   158,     0,     0,
       0,   189,   194,   197,   201,   203,   209,   213,   180,   217,
     221,   225,   146,   147,   121,   122,   123,   119,   124,   120,
     125,   155,   126,   160,   127,     0,   129,   119,   128,   137,
     184,   130,   119,   131,   119,   132,   119,   133,   119,   134,
     119,   135,   119,   136,   119,   138,     0,   139,   119,   140,
     119,     0,     0,     0,   611,     0,   325,     0,   327,     0,
     851,     0,   888,     0,   876,   878,     0,   646,   637,   638,
     644,   643,   650,   658,     0,   653,     0,   829,   833,   820,
       0,     0,   824,     0,   556,     0,   583,     0,   468,   467,
     599,   595,     0,   602,   605,   606,     0,   601,   591,     0,
     773,     0,   535,   536,   366,   363,     0,     0,   371,     0,
     392,   390,   391,     0,     0,   460,     0,     0,   594,   612,
       0,   814,     0,     0,     0,     0,   837,     0,     0,     0,
       0,   376,   383,   377,   380,   384,     0,   413,     0,     0,
       0,     0,   686,   427,   667,   670,   672,   674,   676,   677,
     692,   681,   446,   448,   450,   609,   452,   464,   483,   485,
     514,     0,   816,     0,     0,   763,   762,   761,   538,   257,
       0,   315,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   792,     0,     0,     0,     0,   265,   266,
     267,   268,   272,   273,   269,   270,   271,   274,   108,   109,
      43,    39,     0,   820,     0,   119,    52,    54,   820,   119,
      66,    70,    69,   820,     0,     0,    73,   820,     0,     0,
      76,    94,    78,    82,    83,    84,    88,    89,    91,    80,
      85,    86,    87,    90,    92,     0,     0,     0,   102,   104,
     820,   106,   118,   117,     0,     0,     0,   177,   173,   119,
       0,     0,   116,     0,     0,     0,     0,   159,     0,   168,
       0,   119,     0,   116,   116,   186,   190,   820,     0,     0,
       0,     0,   116,     0,     0,     0,   116,     0,   116,   116,
       0,   116,     0,     0,   116,   116,     0,   216,   219,     0,
     222,   223,     0,     0,     0,     0,   663,     0,     0,   336,
     334,     0,   332,   850,   847,     0,     0,   662,     0,   832,
       0,   819,   820,   820,     0,   555,   555,   573,   548,   469,
     596,   607,   775,     0,     0,   368,     0,     0,     0,   403,
       0,   397,     0,     0,   461,   462,     0,   770,     0,   771,
     840,     0,     0,     0,   806,   807,   803,   805,     0,   385,
     386,   387,   378,     0,     0,   675,     0,   687,   689,   691,
     682,     0,   428,     0,   665,     0,     0,     0,   678,     0,
     679,   610,   608,   539,     0,     0,     0,   287,   288,   292,
     303,     0,   313,   314,   293,   294,     0,     0,     0,     0,
     298,   299,     0,     0,   757,   756,   758,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,     0,   306,   110,
     111,    41,     0,   233,   232,   892,   913,  1048,  1049,    38,
     228,     0,   231,   229,   240,   251,   247,    42,    47,    48,
      49,    40,    58,    56,   119,     0,    53,     0,    68,    67,
      64,    75,    74,    71,    98,    99,    95,    96,    97,    79,
     100,    81,    93,   105,   145,   169,     0,   119,   174,     0,
       0,   171,   143,   144,   141,   152,   153,   154,   151,   150,
     148,   163,   156,   119,   157,   161,   170,     0,   181,   182,
     183,   119,     0,   192,   191,   119,   195,   193,   198,   199,
     196,   200,   204,   206,   207,   205,   202,   210,   211,   208,
     214,   215,   212,   218,   220,   226,   224,   326,    18,     0,
       0,   331,     0,   647,     0,   654,   834,   822,   825,   820,
       0,     0,     0,   772,     0,     0,     0,   373,   374,   394,
       0,   820,     0,   395,   396,   820,     0,     0,   337,     0,
     841,     0,     0,   808,     0,     0,   379,     0,   381,   680,
     686,   684,     0,   688,   690,     0,   669,     0,     0,   698,
       0,     0,     0,     0,     0,   664,   668,   671,     0,     0,
       0,   727,     0,     0,   752,     0,     0,   723,   724,     0,
     711,   717,   718,   716,   715,   719,   713,   714,   720,     0,
       0,     0,     0,     0,   759,   760,     0,     0,     0,   302,
       0,     0,     0,   291,   792,   796,   797,   798,   793,   794,
       0,   820,     0,     0,     0,     0,   306,     0,   305,     0,
     312,    44,    45,    46,   250,     0,     0,     0,     0,     0,
     241,     0,     0,     0,     0,   246,    59,    63,    62,   820,
       0,     0,    36,    50,   101,   176,     0,   172,   175,   164,
     167,   820,     0,     0,   185,     0,   179,   188,     0,   326,
     333,     0,   655,   823,   555,   555,     0,   577,   576,   575,
     574,   367,     0,     0,     0,   401,     0,     0,   402,   400,
       0,   769,   611,     0,   800,   802,     0,   388,   389,     0,
     683,   685,   755,   705,   703,   704,   666,     0,     0,   709,
     710,   701,   702,   673,   728,   733,     0,   753,   726,   725,
       0,     0,   730,   729,     0,   722,   721,     0,   751,   712,
       0,     0,   694,     0,   693,   263,   286,   295,   296,   289,
     290,   300,   301,   297,     0,   782,   788,     0,     0,     0,
     844,   611,   326,   309,   310,   304,   307,     0,     0,   249,
     248,     0,   237,   236,     0,   227,   243,   242,   245,   244,
       0,    61,    60,    57,   178,   166,   165,   162,   187,    14,
       0,   852,     0,     0,   555,   369,   365,   404,     0,   399,
     405,     0,   809,     0,   382,   706,   707,   708,   699,   700,
     741,   734,   734,   736,     0,     0,   743,   743,   754,   696,
     695,     0,   790,     0,   820,     0,     0,   795,   786,   788,
       0,     0,   308,   306,   234,     0,     0,    13,    15,     0,
     561,   567,   553,   564,   570,   554,     0,     0,     0,   804,
       0,     0,     0,     0,     0,   747,   745,   742,   740,   697,
     791,   789,   783,     0,     0,     0,   322,   320,   329,   323,
     328,   311,     0,   238,   239,   252,    21,     0,     0,     0,
       0,   549,   398,   810,     0,   732,   731,   737,   738,     0,
     746,     0,     0,   744,   784,   788,   787,   321,   235,   557,
     563,   562,   558,   569,   568,   559,   566,   565,   560,   572,
     571,   735,     0,   748,   749,   750,     0,   739,   785
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,   412,  1677,    22,    20,    21,   414,
     625,    15,    16,   409,   617,   838,   839,  1271,  1291,   840,
     841,  1065,  1293,  1294,   842,   843,   844,   845,   846,   847,
    1309,  1311,   848,   849,   850,   851,   874,   410,   852,   620,
     875,   876,   877,   878,   879,   880,   881,  1328,  1116,   882,
     883,  1118,  1332,  1333,   884,   885,   886,   887,   888,  1107,
    1108,  1109,  1319,   889,   890,  1125,  1342,   891,   892,   893,
     894,   895,   896,   897,   898,   899,   900,   901,   902,   903,
     904,   905,   906,   907,   908,   909,   910,  1279,  1280,  1281,
    1282,  1611,  1712,  1283,  1284,  1285,  1495,   407,   408,   608,
     609,   611,   612,   613,   614,   809,   810,   803,   811,   812,
     813,   814,   815,   816,   817,   818,  1252,  1593,   819,   820,
     821,  1478,  1265,   822,   823,  1045,   418,   419,   824,  1707,
     825,   420,   632,  1709,   421,  1161,   628,   629,  1103,   315,
     316,   317,   318,   319,   320,   553,   321,   513,   514,  1185,
    1386,   322,   517,   518,   554,   555,   556,   993,   994,   995,
    1211,  1408,   323,   520,   521,   324,  1190,  1393,  1191,  1192,
    1391,   325,   326,   327,   328,   754,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   949,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   469,   366,   367,   368,   369,   370,
     790,   791,   371,   372,   373,   474,   691,   480,  1682,  1685,
    1717,  1719,  1718,  1720,  1382,   374,   477,   375,   694,   376,
     377,   378,   532,   700,   379,   489,   380,   381,   382,   383,
     493,   704,  1014,  1232,   730,   234,   466,   235,   236,   384,
     238,   239,   240,   241,   242,   243,   244,   658,   245,   672,
     246,   682,   247,   674,   659,   675,  1166,  1157,  1003,  1425,
    1224,  1004,  1005,  1006,  1007,  1008,  1009,  1010,  1011,  1220,
    1230,  1453,  1426,  1648,  1561,  1228,  1440,  1441,  1442,  1443,
    1444,  1690,  1573,  1445,  1697,  1657,  1694,  1733,  1446,  1447,
    1448,  1222,   827,   385,   386,   387,   388,   389,   390,   391,
     508,   509,   392,   393,   394,   395,   622,   396,   828,  1665,
    1596,  1259,  1468,  1469,   397,   398,  1206,  1402,  1403,   399,
     400,   401,   402,   249,   250,   251,   252,   943,   253,   254,
     685,   686,   255,   403,   735,   736,   404,   829,   195,   208,
     196,   920,   423,   427,   210,   211,   212,   213,   214,   215,
     216,   217,   428,   429,   634,   256,   405
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1566
static const yytype_int16 yypact[] =
{
     824, -1566, -1566,  -134, -1566,   -87, -1566,  7629,  5966,  6394,
     169,  3583,    -9, -1566, -1566, -1566, -1566, -1566,    67,   142,
   -1566, -1566, -1566,    14, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,   215,   278, -1566,  6183,
    6183,  5966,  7629, -1566, -1566, -1566, -1566,   321, -1566, -1566,
     222,   259, -1566,   479,    47, -1566,   440, -1566,   375,  6605,
     407,   425,   564,   663,   764,   793,   809,   818,   822,   834,
     853,   856,   860,   862, -1566,   510, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,    -2, -1566, -1566, -1566, -1566, -1566, -1566,  7629, -1566,
    5029,   503,   351,   439,  4309,   611,  3825,  3825, -1566, -1566,
   -1566,  2373,  7629, -1566, -1566, -1566,    52,   341,    57,   370,
     755,   894,   896,   902,   906,   909,   911,   913,   929,   933,
     945,   644,   977,   939,   940, -1566, -1566, -1566,   981,    24,
     982,   982,   952,   953,   325,    83,   277,   955,    89,   -34,
     934,   -29,   948,   760,   756, -1566,   966, -1566, -1566,   677,
   -1566, -1566, -1566, -1566, -1566, -1566,   842,   839, -1566,   693,
     804,    53,   112,    69,   591, -1566,   844,   837,   843,   841,
   -1566, -1566, -1566,   472, -1566, -1566,  4309,   629, -1566, -1566,
     990,   993, -1566,  5029, -1566, -1566,  5029, -1566, -1566, -1566,
   -1566,   528, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,  3583, -1566,  3583, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566,   447,   367, -1566,   821,   344,
     426, -1566, -1566,  7629,   832,   117,  7629, -1566, -1566, -1566,
     861, -1566,  3583, -1566,  5966, -1566, -1566, -1566,   978,   985,
   -1566,  5966,  6183,  6183,  6183,  6183,  6183,  6183,  6183,  6183,
    6183,  6183,  6183,  6183,  6183,  6183,  5966,  5966,   979,  5509,
     986,     4,   987,   988,  6815,  7629,  7629,   989,   991,   992,
    5749,  7025,  7235, -1566, -1566, -1566, -1566,   995, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566,   712, -1566,  1008,   629, -1566,
    7629, -1566, -1566, -1566,   489, -1566, -1566,  3583, -1566,   994,
    3583,  3583, -1566,   996,  3583, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,  3583,  7629,    -6, -1566,
    3583,  3583,  7629,  1005, -1566,  7629,  1031,  1013, -1566,  7629,
      23, -1566,    26,  3583,  3583,  3583,   999,  1002, -1566,   994,
    3583, -1566,   994,   885,  3583,   888, -1566, -1566,  3583, -1566,
   -1566,  7437,  7629,  3583,  3583,  3583,   981,    24,  3583,  1045,
     914,   915, -1566, -1566, -1566, -1566, -1566,  3825,  3825,  3825,
    3825,  3825,  3825,  3825,  3825, -1566,  3825,  3825,  3825,  3825,
    3825,  3825,  3825,  3825,  1001,  3825,  3825,  3825,  3825,  3825,
    3825,  3825,  3825,  3825,  3825,  3825,   897,   910,   917,   918,
    2615, -1566,   629,  4309,  4309,  3583,  3583, -1566, -1566,  7629,
    3583,  1889,   -62, -1566,  2131,  1006,   942,   947,   100,  1019,
     901, -1566, -1566, -1566,  4067, -1566, -1566,   496, -1566, -1566,
    1278,    78,  1042, -1566, -1566, -1566,  7629, -1566,   502, -1566,
    1041,  6394, -1566, -1566,   944,   944, -1566,  5966,  1047,   259,
   -1566,    47,    47,   825,   825,   825,   825,   825,   825, -1566,
   -1566, -1566, -1566,  1064,  1051, -1566, -1566, -1566,   625, -1566,
   -1566, -1566, -1566,   818,   856,  1052,  1054, -1566, -1566, -1566,
    1055,  1056,  1057, -1566,  1059, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566,   627, -1566, -1566,   650, -1566,   885, -1566,  1068,
    5269,   997,   998, -1566, -1566, -1566,   307, -1566,   485,  2857,
   -1566,   523,   531,  3099, -1566,   536,   548,  1093,   977,  3583,
     553,   557,   885,   981,   885,  7629,    24,   885,   982,  3583,
    3583,   652,   655,   565,  3583,  3583, -1566,   568, -1566,  6394,
    1061,   875,  1048,   949, -1566,   575, -1566,   885,   881,   165,
   -1566, -1566, -1566,  7629,  3583,   971,   839, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566,  3825, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566,    71,   112,   112,   830,    69,    69,    69,
      69,   591,   591, -1566, -1566,  6394,  6394,  7629,  7629, -1566,
     576, -1566, -1566,   589,   639, -1566,   640, -1566, -1566, -1566,
     680, -1566,   491,  3583,  3583,  3583, -1566,   681, -1566, -1566,
   -1566, -1566,  1019, -1566, -1566,  7629,   532,   490,   691,  1019,
    1019,  1019, -1566,  1019,  1019,  1019, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566,  1019,  1019, -1566, -1566,  1019,  1019,
   -1566, -1566, -1566, -1566, -1566, -1566,   578, -1566, -1566,   202,
   -1566,   270, -1566,   233, -1566,   217, -1566,  1318, -1566,  -136,
   -1566,   864,    36, -1566, -1566,   571, -1566, -1566,   813,   850,
     807, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566,   422, -1566, -1566,
   -1566,  -130, -1566,   835, -1566,   871, -1566, -1566, -1566, -1566,
     166, -1566,   219, -1566,   816, -1566,    94, -1566, -1566, -1566,
      43, -1566,   102, -1566,    84, -1566,    93, -1566,   601, -1566,
     823,  7811,  1000,    99,   885,  1122, -1566,   319, -1566,  3583,
   -1566,   215, -1566,   974, -1566, -1566,  7629, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566,  7629, -1566,  7629, -1566, -1566,  6394,
    1092,   980, -1566,   694,   779,   371, -1566,  1003, -1566, -1566,
   -1566, -1566,   579, -1566, -1566, -1566,   585, -1566, -1566,  3583,
   -1566,  1004, -1566, -1566,  1017, -1566,  1128,  1130, -1566,  1007,
   -1566, -1566, -1566,  1010,  1009, -1566,   600,   603, -1566, -1566,
    3583, -1566,  3583,  3583,  3583,  7629, -1566,  1133,  1105,  1106,
    1620, -1566, -1566,  1114, -1566,   763,  3583, -1566,    71,  3583,
     583,   605,   622,  1058,   903,   905,  1062, -1566, -1566,  1063,
     951, -1566, -1566, -1566, -1566,  1134, -1566, -1566, -1566, -1566,
   -1566,  3341, -1566,   922,   924, -1566, -1566, -1566, -1566, -1566,
    1123,   513,   691,   734,  1063,  1000,  7629,   736,   795,   196,
     573,  7629,   279,   361,  7629,    80,   -16,    25, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,   866,   869,
   -1566, -1566,  4549,  6394,   798,   908, -1566, -1566,  6394,   908,
   -1566, -1566, -1566,  6394,  3583,  1306, -1566,  6394,  3583,  7812,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566,   -54,  1039,  1039, -1566, -1566,
    6605, -1566, -1566, -1566,   919,  3583,   857,   673, -1566, -1566,
    3583,  3583, -1566,  7840,   -95,  3583,   320, -1566,   431, -1566,
    7869, -1566,  3583, -1566, -1566,   898, -1566,  6394,  3583,  7897,
    3583,  7926, -1566,  3583,  7954,  7983, -1566,  3583, -1566, -1566,
    8011, -1566,  3583,  8040, -1566, -1566,  8068, -1566, -1566,  3583,
   -1566, -1566,  8097,  3583,  8125,   955, -1566,  1019,  7811, -1566,
   -1566,   698, -1566, -1566, -1566,  5966,  1131, -1566,   146, -1566,
    1135, -1566,  6394,  6394,  1015,   611,   611, -1566, -1566, -1566,
   -1566, -1566, -1566,  3583,  1165,   983,  3583,  3583,  3583,  1166,
     175, -1566,   105,  3583, -1566, -1566,   615, -1566,   956, -1566,
   -1566,  3583,  1168,  1168, -1566, -1566,   959, -1566,  3583, -1566,
   -1566,  1032,  1114,  1141,   621, -1566,    20,  1088,   973, -1566,
   -1566,  1091, -1566,    71,   275,    71,  1065,  1029,  1104,   143,
   -1566, -1566, -1566, -1566,  3583,  3583,  1000, -1566, -1566,  1104,
   -1566,  1157, -1566, -1566, -1566, -1566,  1049,  1000,  1021,  1022,
   -1566, -1566,  1163,  1072, -1566, -1566, -1566,  7629,   -64,   964,
    1050,  1195,  7811,  7629,  1012,  1000,  1087,  7629,  1087, -1566,
   -1566,   -35,  5029, -1566,  1024,   330,  1189,  1169,  1171,  1200,
   -1566,  4789,   751,   767, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566,   268,  8154, -1566,  8182, -1566,   966,
   -1566, -1566,   966, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,  1089,  1089, -1566, -1566,   966,  3583, -1566, -1566,   962,
    8211,   966,   966,    36, -1566, -1566, -1566, -1566, -1566,   966,
   -1566, -1566, -1566,   188, -1566, -1566, -1566,  8239,   966,    36,
      36, -1566,   963, -1566,   966, -1566,   966, -1566,    36,   966,
   -1566, -1566,    36,   966,    36,    36, -1566,    36,   966, -1566,
      36,    36, -1566,   966, -1566,   966, -1566,   861, -1566,   955,
     319, -1566,  1060, -1566,  1175, -1566, -1566, -1566, -1566,  6394,
    1174,  1177,   336, -1566,  7629,  1212,  1085, -1566, -1566, -1566,
    7629,  6394,    44, -1566, -1566,  6394,  3583,  1069, -1566,  3583,
   -1566,  7629,   701, -1566,   731,  1183, -1566,   791,  1075, -1566,
     622, -1566,  1178, -1566, -1566,  3825,   905,  1138,   840, -1566,
    3825,  3825,   143,   730,   730, -1566, -1566,  1062,    71,   744,
     865, -1566,    55,  1018, -1566,   867,  7629, -1566, -1566,  1101,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,  1029,
     209,  3825,  3825,  1035, -1566, -1566,  1019,  1000,   812, -1566,
    1000,  1000,   780, -1566,     1, -1566, -1566, -1566,  1208, -1566,
    4549,  6605,  7629,   955,  1205,  1066,  1087,  1000,  1211,  1209,
    1211, -1566, -1566, -1566, -1566,  5029,  5029,    64,  1101,  4549,
   -1566,  4789,  4789,  4789,  4789,  1224, -1566, -1566, -1566,  6394,
    3583,  8268, -1566, -1566, -1566,   966,  8296, -1566, -1566, -1566,
   -1566,  6394,  3583,  8325, -1566,  8353, -1566,  1617,  1061,   861,
   -1566,  5966, -1566, -1566,   611,   611,   503, -1566, -1566, -1566,
   -1566, -1566,  7629,  3583,  1094, -1566,  7629,  3583, -1566, -1566,
    3583, -1566,   885,  1168, -1566, -1566,  1168, -1566, -1566,  1000,
   -1566, -1566,    69, -1566, -1566, -1566, -1566,    90,   670, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,  1034, -1566, -1566, -1566,
     -28,  1000, -1566, -1566,    58, -1566, -1566,  1119, -1566, -1566,
    3825,  3825,   830,   128, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566,   147, -1566,  1099,  1020,   -64,   284,
   -1566,   885,   861, -1566, -1566,  1211, -1566,  1000,  1000, -1566,
   -1566,  1215, -1566, -1566,  1216, -1566, -1566, -1566, -1566, -1566,
    3583, -1566,   966, -1566, -1566, -1566,   966, -1566, -1566,  1019,
    1061, -1566,   754,   806,   611, -1566, -1566, -1566,  1125, -1566,
   -1566,  1248, -1566,   737, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566,   132,  1101,  1000, -1566, -1566, -1566,   830,
     830,  3825, -1566,   738,  6394,  1061,  4549, -1566, -1566,  1099,
      27,     3, -1566,  1087, -1566,   254,   641, -1566, -1566,  1019,
   -1566, -1566, -1566, -1566, -1566, -1566,  1235,  3583,  3583, -1566,
     747,   753,  1101,  1053,   758, -1566, -1566,   323,   323,   830,
   -1566, -1566, -1566,   284,  1061,  3583, -1566, -1566, -1566, -1566,
   -1566,  1211,  1223, -1566, -1566, -1566, -1566,   252,   318,   253,
     340, -1566, -1566, -1566,  1147, -1566, -1566,   143, -1566,  1101,
   -1566,   176,   176, -1566, -1566,  1099, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566,  1067, -1566, -1566, -1566,  1061, -1566, -1566
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1566, -1566, -1566,  1265, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,   429, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,   174, -1566, -1566, -1566, -1566,  1269, -1566,  -383,  -785,
   -1566, -1566, -1566, -1566,   418, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566,   157, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
     170, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1431,  -213, -1566,
   -1566, -1566, -1566, -1566, -1199, -1566, -1566, -1566, -1566, -1566,
     671, -1566, -1566, -1566,   672, -1566, -1566,  -587, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1227, -1566, -1566, -1566,    11, -1566, -1566, -1566, -1566,
   -1566,  -301, -1342, -1566,  1037, -1566,  -304,   376,  -692,   687,
    -185,  -337, -1566, -1566,  1011, -1566, -1566, -1566,   593, -1566,
   -1566, -1566, -1566,   586, -1566, -1566, -1566,   311,   101, -1566,
   -1566, -1566, -1566,  1016,   590, -1566, -1566, -1566,   122, -1566,
   -1566, -1566, -1566,   757,   761, -1566,  -423,  -107,  -573,   394,
    -568,   389,   390, -1566, -1566, -1566,   710, -1566, -1566, -1566,
    -730,  -329, -1566, -1566, -1566,  -186,   388, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566,  -257, -1566, -1566, -1566,
   -1566,  -754, -1566, -1441,  -484, -1566, -1566, -1566, -1566, -1566,
     716,   295, -1566,   -61, -1566,  -204, -1566,  -684, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566,   267, -1566, -1566, -1566, -1566, -1566, -1566,
    1026, -1566,   545, -1566,  -667,  -519, -1566,  -214,  -435,    17,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
     874, -1566,   878, -1566,   879,   876,   392,  -958,  -977, -1566,
   -1566, -1566,   114,   113,   -89,   342, -1566, -1566, -1566,   -70,
   -1566, -1398, -1566,  -217,   -81,   312,  -104, -1566, -1566, -1566,
   -1566,  -303, -1506, -1566,  -305,  -747, -1566, -1566, -1566, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,   645, -1566, -1566, -1566, -1421,  -446,    10, -1566, -1565,
   -1516,  -110, -1566,  -243, -1566, -1566, -1566, -1188,  -187, -1566,
   -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566, -1566,
   -1566,   421, -1566, -1566, -1566,   373, -1566, -1566, -1566, -1566,
   -1566,   724,   441,    21, -1566,   928,   930,   444,   552,  -157,
   -1566, -1566,   920, -1566, -1566,    61,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -316
static const yytype_int16 yytable[] =
{
     198,   218,   198,   471,   766,   448,   533,   945,   671,  1002,
     767,   768,   769,   770,   591,  1404,  1304,    23,  1578,   248,
     938,  1213,   804,   707,  1558,  1518,   237,   689,   712,   209,
     708,   714,   536,  1001,  1325,   717,   515,   539,   981,  1599,
    1705,  1480,   425,   426,  1594,   964,  1612,   966,   662,   602,
     969,   603,   980,   416,   980,   265,  1536,   415,  1075,   718,
    1079,   442,   718,   998,  1652,  1465,  1613,  1614,   197,   416,
     987,   999,  1411,   663,   486,  1305,   258,  1240,   478,   273,
     274,   275,  1490,  1669,   582,   633,   484,   980,  1266,  1268,
     575,   576,  1113,  1571,  1481,   449,   597,   792,  1570,   598,
     454,  1654,  1120,   487,  1704,   528,   265,  1129,   491,  1131,
      19,  1134,   918,  1135,   998,  1140,  1156,  1143,  1098,  1146,
    1395,    13,   999,  1152,   443,  1154,   578,   575,   576,   626,
     273,   274,   275,   416,   491,   416,   748,   749,   750,   751,
     752,   753,   914,   755,   756,   757,   758,   759,   760,   761,
     762,  1099,   295,   801,   416,   534,  1114,  1156,  1102,   626,
     592,   627,  1651,  1162,  1263,   575,   576,   793,   794,   257,
    1756,   942,  1374,  1100,  1264,   795,  1571,  1630,   719,  1655,
    1115,   720,  1537,   488,   406,  1708,    14,  1735,   492,   579,
    1375,  1662,   218,   218,   218,   198,   295,   731,   467,   537,
     535,   733,   664,   295,   540,  1267,   739,   740,   741,  1706,
     979,   742,   198,  1261,   492,  1029,   444,   445,  1751,  1654,
     709,   577,  1048,  1049,  1050,   516,  1051,  1052,  1053,   248,
    1326,   967,  1327,  1695,  1714,  1703,   237,  1054,  1055,  1412,
     583,  1056,  1057,  1396,  1002,  1572,  1002,  1159,  1656,  1605,
    1258,   198,   417,   198,   411,  1693,  1012,  1013,  1450,   991,
    1671,  1466,  1467,   430,   789,   198,   258,   789,  1001,  1450,
    1001,  1727,  1000,   422,  1306,  1307,  1308,   911,  1456,  1262,
    1295,   580,   581,   606,  1297,   649,   650,   651,   652,  1459,
    1482,  1483,  1616,  1617,  1618,  1619,  1661,  1655,  1158,  1489,
    1739,  1745,   698,   980,   980,   701,   702,  1476,  1753,   705,
    1645,  1646,  1647,   273,   274,   275,   417,  1580,   417,   470,
     460,   706,   413,  1000,  1320,   710,   711,  1594,   530,  1752,
    1136,   997,  1189,   485,   424,   980,  1337,   417,   721,   722,
     723,  1246,  1015,  1015,  1692,   727,   198,  1147,  1247,   198,
    1451,  1452,  1485,  1137,  1254,  1255,  1138,  1139,  1643,  1030,
    1581,  1451,  1452,   261,   431,  1392,   262,   263,  1742,   980,
    1526,  1144,   961,   449,  1740,  1746,   525,  1417,   273,   274,
     275,  1132,   971,   972,   450,   432,   295,   980,  1256,  1141,
    1748,   980,   490,  1148,  1248,  1249,  1418,   989,  1145,  1177,
     526,   527,  1419,  1149,  1133,   780,   198,   992,   531,   198,
     783,   784,  1142,   457,   990,   786,  1178,   218,   447,   947,
    1170,   494,   621,   433,   218,   218,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   218,
     218,  1743,   198,  1121,   948,   635,  1711,   198,   198,   198,
     449,   295,   638,   198,   198,   198,  1025,  1026,  1027,   660,
    1527,  1528,  1002,  1749,   446,   660,   676,   653,   450,  1002,
     676,  1002,   248,   198,   623,  1509,  1122,   630,  1420,  1421,
    1422,  1123,  1124,  1423,  1424,  1510,  1001,   475,  1060,  1061,
     604,  1380,  1381,  1001,  1731,  1001,  1732,  1511,  1512,  1586,
     198,   605,  1589,  1590,  1076,   198,  1126,   265,   198,  1501,
    1062,  1063,   198,  1064,   952,   623,   434,   435,   956,  1606,
    1070,   544,   687,   590,   463,   544,  1077,  1078,  1127,  1128,
    1071,  1072,  1506,   697,   198,   198,   464,   950,   915,   976,
     977,   696,  1073,  1074,  1287,  -315,   916,   465,  1513,  1296,
     606,   599,   600,   476,  1298,  1496,  1515,  1066,  1301,   544,
    1517,   607,  1033,  1034,  1035,  1497,  1498,   544,   470,  1067,
    1368,   601,   544,   470,  1330,   953,   470,  1499,  1500,  1068,
     470,  1331,  1163,   954,   544,  1033,  1034,  1035,   957,   544,
    1241,  1644,   198,   544,   436,   437,   438,   439,   440,   441,
     958,   544,   737,   738,   544,   962,  1257,   451,  1343,   963,
    1258,   985,   544,  1653,  1018,   544,  1520,   975,   265,   198,
     978,   544,  1182,  -315,   198,   544,   998,   986,  1017,   615,
     218,  1180,   472,   473,   999,   913,   544,  1181,   616,   544,
     265,   248,   273,   274,   275,  1197,  1198,  1199,   237,  1672,
    1673,   544,  1194,  1377,  1378,  1195,  1216,   544,   922,   992,
     785,   926,   593,   934,  1019,  1020,  1715,  1398,   594,   927,
    1036,   935,   591,  1410,  1002,   544,   544,   544,  1037,  1038,
    1039,  1040,  1041,   198,   789,  1334,   936,   470,   544,  -315,
    1529,   544,  1331,  1036,   937,   506,   973,  1696,  1001,   974,
     248,  1037,  1038,  1039,  1040,  1041,   452,   237,   198,   559,
     560,   561,   562,   563,   564,   295,  1021,  1021,  1023,  1031,
     565,  1042,   198,   479,  1022,  1028,  1024,  1032,  -315,  1323,
    1173,  1043,  1111,   566,  1370,  1112,   198,  1543,  1174,   248,
    1339,  1340,  1371,  1044,  1042,  1544,   237,   618,   619,  1348,
     830,  1250,   831,  1352,  1043,  1354,  1355,  1251,  1357,   832,
     833,  1360,  1361,   584,   585,   834,  1044,  1543,   198,   198,
     198,   198,  1595,  1543,   915,  1545,   470,   495,   835,   836,
     837,  1689,  1700,  1724,  1491,   248,   248,   248,   248,  1724,
    1492,  1725,   237,   237,  1729,  1196,   726,  1726,   198,   728,
    1493,  1680,  1730,  1681,   470,  1286,  1494,   453,   567,   568,
     569,   570,   571,   572,  1214,   545,   546,  1474,   547,   548,
     549,  1479,   550,   551,   692,   693,  1629,     1,     2,     3,
       4,     5,     6,     7,     8,     9,   454,  1217,  1218,  1219,
    1632,  1633,  1564,  1565,  1566,  1567,  1383,  1552,  1557,  1387,
    1388,  1389,   455,  1683,  1367,  1684,  1397,  1288,  1289,  1290,
    1523,   456,   434,   435,  1400,   457,   623,   575,   576,  1585,
     573,   992,  1535,  1058,  1059,  1641,  1538,   458,  1582,  1583,
     643,   644,   645,   646,   647,   648,  1313,  1046,  1047,  1299,
    1645,  1646,  1647,  1302,   872,   873,   459,  1454,  1455,   460,
    1531,  1150,  1151,   461,  1155,   462,  1534,  1668,  1175,  1176,
    1209,  1210,  1237,  1238,  1242,  1243,   496,  1542,   497,   198,
    1315,  1713,  1244,  1245,   498,  1321,  1322,   198,   499,   198,
    1329,   500,   198,   501,  1670,   502,  1167,  1338,  1679,  1106,
    1317,  1547,  1548,  1344,  1167,  1346,  1554,  1555,  1349,   248,
    1686,   503,  1353,  1559,  1560,   504,   237,  1358,  1568,  1569,
    1575,  1576,  1587,  1588,  1363,  1591,  1592,   505,  1365,   764,
     765,   771,   772,  1702,   773,   774,   481,   482,   198,  1710,
    1621,   781,   782,   198,  1754,  1755,   641,   642,  1601,   507,
     510,   511,  1625,   512,   519,   523,   524,   687,   415,   541,
     538,   542,   544,   558,   543,   557,   574,  1659,  1660,   586,
     588,  1734,  1736,   587,   595,  1484,   589,   596,   610,   624,
     631,   637,   636,   655,  1286,  1741,  1744,  1747,  1750,   198,
     661,   667,   668,   677,   198,   678,   679,   198,   690,  -230,
     695,   713,  1678,   715,   729,   699,   737,   703,  1635,   716,
     724,  1207,  1638,   725,   732,   198,   198,   743,   744,  1539,
     745,   198,  1541,   775,  1758,   798,   198,  -230,  1519,   776,
     198,   763,   801,   248,   799,  -230,   777,   778,   248,   800,
     237,   805,   912,   248,   917,   237,   919,   248,  1699,   924,
     237,   923,  1716,   198,   237,   925,   928,   623,   929,   930,
     931,   932,  1253,   933,   939,  1260,   959,   982,   984,   944,
     248,   946,   980,   988,   983,   996,  1106,   237,  1101,  1110,
     198,  1429,  1117,  1105,  1430,  1119,  1130,  1431,  1432,  1433,
    1434,  1505,  1156,  1153,   626,  1165,  1171,   248,  1184,  1172,
    1179,  1186,  1183,  1187,   237,  1701,  1201,  1188,  1202,  1203,
    1208,  1369,  1226,  1223,  1227,  1221,  1225,  1229,   218,  1234,
    1231,  1235,  1269,  1236,  1270,   198,   198,  1189,  1310,  1316,
    1193,  1292,  1602,  1314,  1379,  1373,  1341,  1384,  1390,  1376,
    1401,  1407,   248,   248,  1385,  1409,  1372,  1435,  1399,   237,
     237,  1405,  1413,  1414,  1415,  1449,  1636,  1457,  1458,  1462,
    1639,  1460,  1461,  1640,  1463,  1428,  1470,  1472,  1477,  1471,
    1475,  1486,  1487,  1286,  1488,  1489,  1507,  1516,  1504,  1522,
    1524,  1436,  1521,  1525,  1532,  1533,  1546,  1549,  1609,  1610,
    1551,  1540,  1286,   295,  1286,  1286,  1286,  1286,  1574,  1437,
    1438,  1553,  1584,  1439,  1598,  1603,  1604,  1607,  1620,  1608,
     198,  1658,  1675,  1637,  1650,  1473,   198,  1600,  1664,  1674,
     198,  1688,  1666,  1687,  1721,   198,  1728,  1738,  1571,    18,
    1069,  1312,    17,  1104,   198,  1335,  1615,  1318,  -230,   802,
    1757,  -230,  -230,  -230,  -230,   806,  -230,  -230,   468,  -230,
    1663,  1160,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,   826,   968,  -230,  -230,  -230,   965,  1212,   970,  1406,
    -230,  -230,  1394,  1556,   746,  1622,  1233,   522,  1464,   747,
     797,  1530,  1634,  1016,   623,   665,  1168,  1626,   623,   666,
     552,   529,  -230,  -230,   673,  -230,   683,  1416,  1427,  1563,
    1550,  1649,  1215,  1562,  -230,  1579,  1239,  -230,  -230,  1691,
    1722,  1723,  1698,   960,  1597,  1667,  1642,  1169,  1200,   921,
     639,     0,  1164,   640,     0,     0,     0,   654,  1737,     0,
       0,     0,   198,     0,     0,     0,     0,   198,     0,     0,
       0,     0,     0,   198,   198,     0,     0,     0,   198,   248,
       0,     0,     0,     0,   198,     0,   237,     0,     0,     0,
       0,   248,     0,     0,     0,   248,     0,     0,   237,  1286,
       0,     0,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   198,
       0,     0,     0,     0,     0,  1676,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,     0,     0,     0,     0,
       0,   470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   198,   198,   198,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   198,   198,
       0,   248,   198,     0,   198,   198,   198,   198,   237,     0,
       0,     0,   198,     0,     0,     0,     0,  1577,     0,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,   248,
       0,     0,     0,     0,   218,     0,   237,     0,     0,     0,
       0,   248,     0,     0,     0,   198,     0,     0,   237,   198,
       0,     0,   853,   470,     0,   854,   855,   856,   857,     0,
     858,     0,  1631,   859,     0,     0,   860,   861,   862,   863,
     864,   865,   866,   867,   868,     0,     0,   869,   870,   871,
    1300,     0,     0,   854,   855,   856,   857,     0,   858,     0,
       0,   859,  1080,     0,   860,   861,   862,   863,   864,   865,
     866,   867,   868,     0,     0,   869,   870,   871,     0,     0,
       0,     0,     0,   470,     0,     0,     0,   470,    14,     0,
       0,   872,   873,  1081,     0,  1082,  1083,  1084,  1085,  1086,
    1087,  1088,     0,     0,     0,     0,     0,     0,     0,     0,
    1089,  1090,  1091,  1092,  1093,  1094,    14,     0,     0,   872,
     873,     0,     0,     0,     0,  1095,  1096,  1097,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   198,     0,   198,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   248,     0,     0,     0,     0,     0,
       0,   237,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,     0,     0,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,    80,    81,    82,
       0,     0,     0,    83,     0,     0,     0,     0,    84,    85,
      86,    87,    88,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,     0,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,     0,   137,   138,   139,     0,   140,   141,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   854,   855,   856,   857,     0,   858,
       0,     0,   859,     0,     0,   860,   861,   862,   863,   864,
     865,   866,   867,   868,     0,     0,   869,   870,   871,     0,
       0,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,   787,   261,     0,     0,   262,
     263,     0,   264,     0,   265,     0,   266,   267,   268,     0,
     269,   270,   271,   788,     0,     0,     0,    14,     0,     0,
     872,   873,     0,     0,     0,  1204,   272,  1205,   273,   274,
     275,   276,   277,   222,   223,   224,   278,   226,   227,   279,
      33,    34,    35,    36,    37,    38,    39,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   292,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   293,   294,    82,     0,
       0,   295,    83,   296,   297,     0,     0,    84,   298,    86,
     299,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   300,   301,   100,   302,   102,     0,   103,   303,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   304,   119,   120,   121,   122,   123,   305,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   306,   141,   307,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   308,   167,   168,   309,   170,   171,
     172,   173,   174,   310,   176,   311,   178,   179,   180,   181,
     182,   183,   312,   185,   186,   313,   314,   189,   190,   191,
     192,   193,   194,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   260,     0,     0,   787,   261,     0,
       0,   262,   263,     0,   264,     0,   265,     0,   266,   267,
     268,     0,   269,   270,   271,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,     0,
     273,   274,   275,   276,   277,   222,   223,   224,   278,   226,
     227,   279,    33,    34,    35,    36,    37,    38,    39,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   292,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   293,   294,
      82,     0,     0,   295,    83,   296,   297,     0,     0,    84,
     298,    86,   299,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   300,   301,   100,   302,   102,     0,
     103,   303,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   304,   119,   120,   121,   122,
     123,   305,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,   137,   138,   139,     0,   306,
     141,   307,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   308,   167,   168,   309,
     170,   171,   172,   173,   174,   310,   176,   311,   178,   179,
     180,   181,   182,   183,   312,   185,   186,   313,   314,   189,
     190,   191,   192,   193,   194,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
     261,     0,     0,   262,   263,     0,   264,     0,   265,     0,
     266,   267,   268,     0,   269,   270,   271,   483,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     272,     0,   273,   274,   275,   276,   277,   222,   223,   224,
     278,   226,   227,   279,    33,    34,    35,    36,    37,    38,
      39,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   292,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     293,   294,    82,     0,     0,   295,    83,   296,   297,     0,
       0,    84,   298,    86,   299,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   300,   301,   100,   302,
     102,     0,   103,   303,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   304,   119,   120,
     121,   122,   123,   305,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
       0,   306,   141,   307,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   308,   167,
     168,   309,   170,   171,   172,   173,   174,   310,   176,   311,
     178,   179,   180,   181,   182,   183,   312,   185,   186,   313,
     314,   189,   190,   191,   192,   193,   194,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,   261,     0,     0,   262,   263,     0,   264,     0,
     265,     0,   266,   267,   268,     0,   269,   270,   271,     0,
       0,     0,     0,     0,     0,     0,     0,   779,     0,     0,
       0,     0,   272,     0,   273,   274,   275,   276,   277,   222,
     223,   224,   278,   226,   227,   279,    33,    34,    35,    36,
      37,    38,    39,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   292,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,   293,   294,    82,     0,     0,   295,    83,   296,
     297,     0,     0,    84,   298,    86,   299,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   300,   301,
     100,   302,   102,     0,   103,   303,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   304,
     119,   120,   121,   122,   123,   305,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   306,   141,   307,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     308,   167,   168,   309,   170,   171,   172,   173,   174,   310,
     176,   311,   178,   179,   180,   181,   182,   183,   312,   185,
     186,   313,   314,   189,   190,   191,   192,   193,   194,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,   261,     0,     0,   262,   263,     0,
     264,     0,   265,     0,   266,   267,   268,     0,   269,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,   951,
       0,     0,     0,     0,   272,     0,   273,   274,   275,   276,
     277,   222,   223,   224,   278,   226,   227,   279,    33,    34,
      35,    36,    37,    38,    39,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   292,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   293,   294,    82,     0,     0,   295,
      83,   296,   297,     0,     0,    84,   298,    86,   299,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     300,   301,   100,   302,   102,     0,   103,   303,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   304,   119,   120,   121,   122,   123,   305,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,     0,   306,   141,   307,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   308,   167,   168,   309,   170,   171,   172,   173,
     174,   310,   176,   311,   178,   179,   180,   181,   182,   183,
     312,   185,   186,   313,   314,   189,   190,   191,   192,   193,
     194,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,   261,     0,     0,   262,
     263,     0,   264,     0,   265,     0,   266,   267,   268,     0,
     269,   270,   271,     0,     0,     0,     0,     0,     0,     0,
       0,   955,     0,     0,     0,     0,   272,     0,   273,   274,
     275,   276,   277,   222,   223,   224,   278,   226,   227,   279,
      33,    34,    35,    36,    37,    38,    39,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   292,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   293,   294,    82,     0,
       0,   295,    83,   296,   297,     0,     0,    84,   298,    86,
     299,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   300,   301,   100,   302,   102,     0,   103,   303,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   304,   119,   120,   121,   122,   123,   305,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   306,   141,   307,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   308,   167,   168,   309,   170,   171,
     172,   173,   174,   310,   176,   311,   178,   179,   180,   181,
     182,   183,   312,   185,   186,   313,   314,   189,   190,   191,
     192,   193,   194,   258,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   260,     0,     0,   787,   261,     0,
       0,   262,   263,     0,   264,     0,   265,     0,   266,   267,
     268,     0,   269,   270,   271,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   272,     0,
     273,   274,   275,   276,   277,   222,   223,   224,   278,   226,
     227,   279,    33,    34,    35,    36,    37,    38,    39,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   292,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   293,   294,
      82,     0,     0,   295,    83,   296,   297,     0,     0,    84,
     298,    86,   299,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   300,   301,   100,   302,   102,     0,
     103,   303,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   304,   119,   120,   121,   122,
     123,   305,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,   137,   138,   139,     0,   306,
     141,   307,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   308,   167,   168,   309,
     170,   171,   172,   173,   174,   310,   176,   311,   178,   179,
     180,   181,   182,   183,   312,   185,   186,   313,   314,   189,
     190,   191,   192,   193,   194,   258,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,   260,     0,     0,     0,
     261,     0,     0,   262,   263,     0,   264,     0,   265,     0,
     266,   267,   268,     0,   269,   270,   271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     272,     0,   273,   274,   275,   276,   277,   222,   223,   224,
     278,   226,   227,   279,    33,    34,    35,    36,    37,    38,
      39,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   292,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     293,   294,    82,     0,     0,   295,    83,   296,   297,     0,
       0,    84,   298,    86,   299,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,   300,   301,   100,   302,
     102,     0,   103,   303,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   304,   119,   120,
     121,   122,   123,   305,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
       0,   306,   141,   307,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   308,   167,
     168,   309,   170,   171,   172,   173,   174,   310,   176,   311,
     178,   179,   180,   181,   182,   183,   312,   185,   186,   313,
     314,   189,   190,   191,   192,   193,   194,   258,     0,   259,
       0,     0,     0,     0,     0,     0,     0,     0,   260,     0,
       0,     0,   261,     0,     0,   262,   263,     0,   264,     0,
     265,     0,   266,   267,   268,     0,   269,   270,   271,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   272,     0,   273,   274,   275,   276,   277,   222,
     223,   224,   278,   226,   227,   279,    33,    34,    35,    36,
      37,    38,    39,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,   293,   294,    82,     0,     0,   295,    83,   296,
     297,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   304,
     119,   120,   121,   122,   123,   305,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   306,   141,   307,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   312,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   258,
       0,   259,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,     0,     0,   261,     0,     0,   262,   263,     0,
     264,     0,   265,     0,   266,   267,   268,     0,   269,   270,
     271,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   272,     0,   273,   274,   275,   276,
     277,   222,   223,   224,   278,   226,   227,   279,    33,    34,
      35,    36,    37,    38,    39,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   292,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   293,   294,    82,     0,     0,   295,
      83,   296,   297,     0,     0,    84,   298,    86,   299,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
     300,   301,   100,   302,   102,     0,   103,   303,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   304,   119,   120,   121,   122,   123,   305,   125,   126,
     127,   128,   129,   130,   807,   132,   133,   134,   135,   136,
       0,   137,   808,   139,     0,   306,   141,   307,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   308,   167,   168,   309,   170,   171,   172,   173,
     174,   310,   176,   311,   178,   179,   180,   181,   182,   183,
     312,   185,   186,   313,   314,   189,   190,   191,   192,   193,
     194,   258,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,   260,     0,     0,     0,   261,     0,     0,   262,
     263,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     269,   270,   271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,     0,   273,   274,
     275,   276,   277,   222,   223,   224,   278,   226,   227,   279,
      33,    34,    35,    36,    37,    38,    39,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   293,   294,    82,     0,
       0,   295,    83,   296,   297,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   305,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   306,   141,   307,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   312,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   259,     0,     0,     0,     0,     0,     0,
       0,     0,  1272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1273,     0,     0,     0,     0,     0,  1274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1275,   221,   222,   223,   224,   225,   226,   227,   228,
      33,    34,    35,    36,    37,    38,    39,  1276,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,   296,   297,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   231,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,  1277,  1278,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   259,     0,     0,     0,     0,     0,     0,
       0,     0,  1272,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1275,   221,   222,   223,   224,   225,   226,   227,   228,
      33,    34,    35,    36,    37,    38,    39,  1276,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,   296,   297,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   231,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,   296,   297,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   231,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   940,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   219,   941,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     230,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   231,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   232,   233,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   656,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   657,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   140,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   680,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   681,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   140,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   199,   200,     0,     0,     0,     0,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   202,     0,   203,   204,   205,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,     0,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,    80,    81,    82,     0,     0,   206,    83,
       0,     0,     0,     0,    84,    85,    86,    87,    88,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   102,     0,   103,   207,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,     0,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     0,
     137,   138,   139,     0,     0,   141,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     199,   200,     0,     0,     0,     0,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     202,     0,   203,   204,   205,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,   206,    83,     0,     0,     0,
       0,    84,    85,    86,    87,    88,     0,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     0,
     102,     0,   103,     0,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,   137,   138,   139,
       0,     0,   141,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   219,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,    80,    81,    82,     0,     0,     0,    83,     0,     0,
       0,     0,    84,    85,    86,    87,    88,     0,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,     0,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   230,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,     0,   137,   138,
     139,     0,   231,   141,     0,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   232,   233,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   219,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   230,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   231,   141,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   232,   233,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   669,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,   670,    83,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   140,   141,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   684,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   140,   141,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   688,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,     0,    83,     0,
       0,     0,     0,    84,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,     0,   137,
     138,   139,     0,   140,   141,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   734,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    80,    81,    82,     0,     0,     0,
      83,     0,     0,     0,     0,    84,    85,    86,    87,    88,
       0,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,     0,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
       0,   137,   138,   139,     0,   140,   141,     0,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,     0,    83,     0,     0,     0,     0,    84,    85,    86,
      87,    88,     0,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,     0,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     0,   137,   138,   139,     0,   140,   141,     0,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,    80,    81,
      82,     0,     0,     0,    83,     0,     0,     0,     0,    84,
      85,    86,    87,    88,     0,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,   102,     0,
     103,     0,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,     0,   137,   138,   139,     0,     0,
     141,     0,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,     0,  1303,     0,     0,   854,
     855,   856,   857,     0,   858,     0,     0,   859,     0,     0,
     860,   861,   862,   863,   864,   865,   866,   867,   868,     0,
       0,   869,   870,   871,  1324,     0,     0,   854,   855,   856,
     857,     0,   858,     0,     0,   859,     0,     0,   860,   861,
     862,   863,   864,   865,   866,   867,   868,     0,     0,   869,
     870,   871,     0,  1336,     0,     0,   854,   855,   856,   857,
       0,   858,    14,     0,   859,   872,   873,   860,   861,   862,
     863,   864,   865,   866,   867,   868,     0,     0,   869,   870,
     871,  1345,     0,     0,   854,   855,   856,   857,     0,   858,
      14,     0,   859,   872,   873,   860,   861,   862,   863,   864,
     865,   866,   867,   868,     0,     0,   869,   870,   871,     0,
    1347,     0,     0,   854,   855,   856,   857,     0,   858,    14,
       0,   859,   872,   873,   860,   861,   862,   863,   864,   865,
     866,   867,   868,     0,     0,   869,   870,   871,  1350,     0,
       0,   854,   855,   856,   857,     0,   858,    14,     0,   859,
     872,   873,   860,   861,   862,   863,   864,   865,   866,   867,
     868,     0,     0,   869,   870,   871,     0,  1351,     0,     0,
     854,   855,   856,   857,     0,   858,    14,     0,   859,   872,
     873,   860,   861,   862,   863,   864,   865,   866,   867,   868,
       0,     0,   869,   870,   871,  1356,     0,     0,   854,   855,
     856,   857,     0,   858,    14,     0,   859,   872,   873,   860,
     861,   862,   863,   864,   865,   866,   867,   868,     0,     0,
     869,   870,   871,     0,  1359,     0,     0,   854,   855,   856,
     857,     0,   858,    14,     0,   859,   872,   873,   860,   861,
     862,   863,   864,   865,   866,   867,   868,     0,     0,   869,
     870,   871,  1362,     0,     0,   854,   855,   856,   857,     0,
     858,    14,     0,   859,   872,   873,   860,   861,   862,   863,
     864,   865,   866,   867,   868,     0,     0,   869,   870,   871,
       0,  1364,     0,     0,   854,   855,   856,   857,     0,   858,
      14,     0,   859,   872,   873,   860,   861,   862,   863,   864,
     865,   866,   867,   868,     0,     0,   869,   870,   871,  1366,
       0,     0,   854,   855,   856,   857,     0,   858,    14,     0,
     859,   872,   873,   860,   861,   862,   863,   864,   865,   866,
     867,   868,     0,     0,   869,   870,   871,     0,  1502,     0,
       0,   854,   855,   856,   857,     0,   858,    14,     0,   859,
     872,   873,   860,   861,   862,   863,   864,   865,   866,   867,
     868,     0,     0,   869,   870,   871,  1503,     0,     0,   854,
     855,   856,   857,     0,   858,    14,     0,   859,   872,   873,
     860,   861,   862,   863,   864,   865,   866,   867,   868,     0,
       0,   869,   870,   871,     0,  1508,     0,     0,   854,   855,
     856,   857,     0,   858,    14,     0,   859,   872,   873,   860,
     861,   862,   863,   864,   865,   866,   867,   868,     0,     0,
     869,   870,   871,  1514,     0,     0,   854,   855,   856,   857,
       0,   858,    14,     0,   859,   872,   873,   860,   861,   862,
     863,   864,   865,   866,   867,   868,     0,     0,   869,   870,
     871,     0,  1623,     0,     0,   854,   855,   856,   857,     0,
     858,    14,     0,   859,   872,   873,   860,   861,   862,   863,
     864,   865,   866,   867,   868,     0,     0,   869,   870,   871,
    1624,     0,     0,   854,   855,   856,   857,     0,   858,    14,
       0,   859,   872,   873,   860,   861,   862,   863,   864,   865,
     866,   867,   868,     0,     0,   869,   870,   871,     0,  1627,
       0,     0,   854,   855,   856,   857,     0,   858,    14,     0,
     859,   872,   873,   860,   861,   862,   863,   864,   865,   866,
     867,   868,     0,     0,   869,   870,   871,  1628,     0,     0,
     854,   855,   856,   857,     0,   858,    14,     0,   859,   872,
     873,   860,   861,   862,   863,   864,   865,   866,   867,   868,
       0,     0,   869,   870,   871,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,     0,   872,   873,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,   872,   873
};

static const yytype_int16 yycheck[] =
{
       7,     8,     9,   260,   577,   219,   307,   691,   454,   763,
     578,   579,   580,   581,   343,  1203,    70,     6,  1439,     9,
     687,   998,   609,   507,  1422,  1367,     9,   462,   512,     8,
      36,   515,    66,   763,   129,   519,    12,    66,   730,  1470,
      13,  1268,   199,   200,    43,   712,  1487,   714,    44,   386,
     717,   388,    51,    55,    51,    35,    12,    43,   843,    36,
     845,    14,    36,    43,  1570,   129,  1487,  1488,     7,    55,
     737,    51,    52,    69,    22,   129,    12,  1035,   264,    59,
      60,    61,  1281,  1599,    15,   422,   271,    51,  1046,  1047,
      37,    38,   877,   121,   129,    43,   353,   159,    43,   356,
      43,    43,   887,    51,  1669,    22,    35,   892,    51,   894,
     197,   896,   631,   898,    43,   900,   132,   902,   254,   904,
      15,   255,    51,   908,    77,   910,    14,    37,    38,    12,
      59,    60,    61,    55,    51,    55,   559,   560,   561,   562,
     563,   564,   626,   566,   567,   568,   569,   570,   571,   572,
     573,   287,   132,    53,    55,    66,   286,   132,   122,    12,
     346,    44,   190,   917,   180,    37,    38,   229,   230,     0,
    1735,   690,    26,   309,   190,   237,   121,  1519,   155,   121,
     310,   155,   138,   131,   193,   182,   320,  1703,   131,    77,
      44,    44,   199,   200,   201,   202,   132,   534,   200,   233,
     111,   538,   198,   132,   233,   180,   543,   544,   545,   182,
     729,   548,   219,   133,   131,   802,   169,   170,  1724,    43,
     226,   168,   809,   810,   811,   201,   813,   814,   815,   219,
     325,   715,   327,  1654,  1675,  1666,   219,   824,   825,  1216,
     171,   828,   829,   138,   998,   190,  1000,   914,   190,  1476,
     249,   258,   238,   260,   187,  1653,   775,   776,   126,   743,
    1602,   325,   326,   202,   601,   272,    12,   604,   998,   126,
    1000,  1692,   252,    58,   328,   329,   330,   199,  1236,   199,
    1065,   169,   170,   183,  1069,   442,   443,   444,   445,  1247,
     325,   326,  1491,  1492,  1493,  1494,   168,   121,   199,    15,
      48,    48,   487,    51,    51,   490,   491,  1265,  1729,   494,
     220,   221,   222,    59,    60,    61,   238,   108,   238,   258,
      43,   506,   180,   252,  1109,   510,   511,    43,    51,  1727,
     287,   754,   157,   272,    56,    51,  1121,   238,   523,   524,
     525,   145,   777,   778,   212,   530,   353,   254,   152,   356,
     218,   219,    22,   310,    75,    76,   313,   314,  1546,   805,
     151,   218,   219,    27,    43,   190,    30,    31,    50,    51,
      34,   287,   709,    43,   122,   122,    51,   102,    59,    60,
      61,   287,   719,   720,    43,   163,   132,    51,   109,   287,
      50,    51,    51,   300,   198,   199,   121,   232,   314,    28,
      75,    76,   127,   310,   310,   590,   413,   744,   131,   416,
     595,   596,   310,    43,   249,   600,    45,   424,    43,   112,
     939,    51,   411,   164,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   123,   449,   277,   137,   424,  1673,   454,   455,   456,
      43,   132,   431,   460,   461,   462,   793,   794,   795,   449,
     124,   125,  1216,   123,    24,   455,   456,   446,    43,  1223,
     460,  1225,   462,   480,   413,   287,   310,   416,   203,   204,
     205,   315,   316,   208,   209,   297,  1216,   136,   286,   287,
      43,  1175,  1176,  1223,   171,  1225,   173,   309,   310,  1457,
     507,    54,  1460,  1461,   287,   512,   287,    35,   515,  1294,
     308,   309,   519,   311,   699,   454,    37,    38,   703,  1477,
     287,    36,   461,    51,    14,    36,   309,   310,   309,   310,
     297,   298,  1317,    44,   541,   542,    26,    52,    36,   724,
     725,   480,   309,   310,  1063,    55,    44,    37,  1333,  1068,
     183,    23,    24,   114,  1073,   287,  1341,   287,  1077,    36,
    1345,   194,    72,    73,    74,   297,   298,    36,   507,   299,
    1157,    43,    36,   512,   254,    52,   515,   309,   310,   309,
     519,   261,   919,    52,    36,    72,    73,    74,    52,    36,
    1036,  1549,   599,    36,   115,   116,   117,   118,   119,   120,
      52,    36,   541,   542,    36,    52,   245,    43,  1127,    52,
     249,    36,    36,  1571,    25,    36,  1370,    52,    35,   626,
      52,    36,   959,   133,   631,    36,    43,    52,    52,   285,
     637,    52,   129,   130,    51,   624,    36,    52,   294,    36,
      35,   631,    59,    60,    61,   982,   983,   984,   631,  1607,
    1608,    36,    52,  1172,  1173,    52,    51,    36,   637,   996,
     599,    36,    33,    36,    25,    25,    25,    52,    39,    44,
     180,    44,  1001,    52,  1428,    36,    36,    36,   188,   189,
     190,   191,   192,   690,  1021,   254,    36,   626,    36,   199,
    1382,    36,   261,   180,    44,    51,    44,  1655,  1428,    44,
     690,   188,   189,   190,   191,   192,    43,   690,   715,    16,
      17,    18,    19,    20,    21,   132,    36,    36,   227,   187,
      27,   231,   729,   112,    44,    44,   235,   195,   238,  1112,
      36,   241,   310,    40,    36,   313,   743,    36,    44,   729,
    1123,  1124,    44,   253,   231,    44,   729,   321,   322,  1132,
     254,   178,   256,  1136,   241,  1138,  1139,   184,  1141,   263,
     264,  1144,  1145,   172,   173,   269,   253,    36,   775,   776,
     777,   778,  1464,    36,    36,    44,   715,    22,   282,   283,
     284,    44,    44,    36,    33,   775,   776,   777,   778,    36,
      39,    44,   775,   776,    36,   980,   529,    44,   805,   532,
      33,    47,    44,    49,   743,  1062,    39,    43,   115,   116,
     117,   118,   119,   120,   999,   138,   139,  1263,   141,   142,
     143,  1267,   145,   146,   112,   113,  1518,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    43,   215,   216,   217,
    1524,  1525,    98,    99,   100,   101,  1183,  1415,  1421,  1186,
    1187,  1188,    43,    47,  1155,    49,  1193,    59,    60,    61,
    1379,    43,    37,    38,  1201,    43,   805,    37,    38,  1456,
     177,  1208,  1391,   295,   296,  1542,  1395,    43,  1451,  1452,
     436,   437,   438,   439,   440,   441,  1100,   196,   197,  1074,
     220,   221,   222,  1078,   323,   324,    43,  1234,  1235,    43,
    1384,   300,   301,    43,   911,    43,  1390,  1599,   129,   130,
     147,   148,   178,   179,   178,   179,    22,  1401,    22,   926,
    1105,  1675,   127,   128,    22,  1110,  1111,   934,    22,   936,
    1115,    22,   939,    22,  1601,    22,   926,  1122,  1630,   266,
     267,   150,   151,  1128,   934,  1130,   106,   107,  1133,   939,
    1634,    22,  1137,   223,   224,    22,   939,  1142,    93,    94,
      93,    94,   150,   151,  1149,   185,   186,    22,  1153,   575,
     576,   582,   583,  1665,   584,   585,   266,   267,   985,  1671,
    1499,   593,   594,   990,  1731,  1732,   434,   435,  1472,    12,
      51,    51,  1511,    12,    12,    43,    43,   936,    43,    51,
      66,   241,    36,   164,   248,   163,   202,  1580,  1581,   165,
     167,  1703,  1704,   176,    24,  1272,   175,    24,   197,   187,
     159,    36,    44,    44,  1281,  1717,  1718,  1719,  1720,  1036,
      44,    44,    44,    44,  1041,    44,    44,  1044,    43,    15,
      32,    36,  1629,    12,   159,    51,   985,    51,  1532,    36,
      51,   990,  1536,    51,   166,  1062,  1063,    12,   144,  1396,
     145,  1068,  1399,   166,  1756,    59,  1073,    43,  1369,   159,
    1077,    70,    53,  1063,   132,    51,   159,   159,  1068,   132,
    1063,   180,    40,  1073,    43,  1068,   142,  1077,  1661,    25,
    1073,    44,  1679,  1100,  1077,    44,    44,  1036,    44,    44,
      44,    44,  1041,    44,    36,  1044,    13,   232,   159,   112,
    1100,   113,    51,   232,    66,   144,   266,  1100,   254,   312,
    1127,    92,   287,   310,    95,   254,   310,    98,    99,   100,
     101,  1316,   132,   310,    12,   161,    44,  1127,   121,   159,
     137,    13,   138,    13,  1127,  1664,    13,   140,    43,    43,
      36,  1158,    90,   250,    91,    97,   251,   206,  1165,   237,
      26,   237,   296,    40,   295,  1172,  1173,   157,   129,   312,
     161,   263,  1473,   254,   159,    44,   278,    12,    12,    44,
      12,   149,  1172,  1173,   201,    44,  1165,   158,   232,  1172,
    1173,   232,   104,   220,   103,    91,  1533,    40,   149,    36,
    1537,   180,   180,  1540,   132,   140,   242,    12,   121,   159,
     198,    22,    43,  1470,    43,    15,   254,   254,   129,    44,
      46,   192,   162,    46,    12,   140,    43,   152,  1485,  1486,
      52,   162,  1489,   132,  1491,  1492,  1493,  1494,   220,   210,
     211,   103,   207,   214,    36,    40,   180,    36,    24,    40,
    1257,   132,    36,   159,   220,  1262,  1263,  1471,   159,    44,
    1267,    13,   242,   138,    29,  1272,   213,    44,   121,     4,
     841,  1097,     3,   855,  1281,  1118,  1489,  1107,   254,   608,
     213,   257,   258,   259,   260,   613,   262,   263,   251,   265,
    1594,   915,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   614,   716,   279,   280,   281,   713,   996,   718,  1208,
     286,   287,  1190,  1420,   557,  1500,  1021,   301,  1257,   558,
     604,  1382,  1526,   778,  1263,   451,   934,  1512,  1267,   451,
     319,   305,   308,   309,   455,   311,   460,  1223,  1225,  1428,
    1410,  1558,  1000,  1424,   320,  1449,  1034,   323,   324,  1652,
    1687,  1688,  1657,   708,  1464,  1598,  1543,   936,   985,   635,
     432,    -1,   921,   433,    -1,    -1,    -1,   447,  1705,    -1,
      -1,    -1,  1379,    -1,    -1,    -1,    -1,  1384,    -1,    -1,
      -1,    -1,    -1,  1390,  1391,    -1,    -1,    -1,  1395,  1379,
      -1,    -1,    -1,    -1,  1401,    -1,  1379,    -1,    -1,    -1,
      -1,  1391,    -1,    -1,    -1,  1395,    -1,    -1,  1391,  1666,
      -1,    -1,  1395,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1436,
      -1,    -1,    -1,    -1,    -1,  1620,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1384,    -1,    -1,    -1,    -1,
      -1,  1390,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1401,  1470,  1471,  1472,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1485,  1486,
      -1,  1471,  1489,    -1,  1491,  1492,  1493,  1494,  1471,    -1,
      -1,    -1,  1499,    -1,    -1,    -1,    -1,  1436,    -1,    -1,
      -1,    -1,    -1,    -1,  1511,    -1,    -1,    -1,    -1,  1499,
      -1,    -1,    -1,    -1,  1521,    -1,  1499,    -1,    -1,    -1,
      -1,  1511,    -1,    -1,    -1,  1532,    -1,    -1,  1511,  1536,
      -1,    -1,   254,  1472,    -1,   257,   258,   259,   260,    -1,
     262,    -1,  1521,   265,    -1,    -1,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,    -1,   279,   280,   281,
     254,    -1,    -1,   257,   258,   259,   260,    -1,   262,    -1,
      -1,   265,   254,    -1,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,    -1,    -1,
      -1,    -1,    -1,  1532,    -1,    -1,    -1,  1536,   320,    -1,
      -1,   323,   324,   285,    -1,   287,   288,   289,   290,   291,
     292,   293,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,   303,   304,   305,   306,   307,   320,    -1,    -1,   323,
     324,    -1,    -1,    -1,    -1,   317,   318,   319,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1664,    -1,  1666,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1664,    -1,    -1,    -1,    -1,    -1,
      -1,  1664,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    -1,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
      -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,    -1,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    -1,   194,   195,   196,    -1,   198,   199,
      -1,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   257,   258,   259,   260,    -1,   262,
      -1,    -1,   265,    -1,    -1,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,    -1,   279,   280,   281,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    44,    -1,    -1,    -1,   320,    -1,    -1,
     323,   324,    -1,    -1,    -1,   325,    57,   327,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,   132,   133,   134,   135,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,    -1,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,   134,   135,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    -1,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,
     133,   134,   135,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,   132,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,   134,   135,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    -1,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,
      -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,    -1,   157,    -1,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,    -1,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,    -1,
     194,   195,   196,    -1,    -1,   199,    -1,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,    -1,
     127,   128,   129,    -1,    -1,   132,   133,    -1,    -1,    -1,
      -1,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,    -1,
     157,    -1,   159,    -1,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,    -1,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,    -1,   194,   195,   196,
      -1,    -1,   199,    -1,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,    -1,    -1,    -1,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,    -1,
      -1,    -1,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,    -1,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,    -1,   194,   195,
     196,    -1,   198,   199,    -1,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,   132,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,    -1,    -1,    -1,
      -1,    -1,   127,   128,   129,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,    -1,   194,
     195,   196,    -1,   198,   199,    -1,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,    -1,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
      -1,   194,   195,   196,    -1,   198,   199,    -1,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,    -1,
      -1,    -1,   133,    -1,    -1,    -1,    -1,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    -1,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,    -1,   194,   195,   196,    -1,   198,   199,    -1,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,    -1,   127,   128,
     129,    -1,    -1,    -1,   133,    -1,    -1,    -1,    -1,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,    -1,   157,    -1,
     159,    -1,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,    -1,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,    -1,   194,   195,   196,    -1,    -1,
     199,    -1,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,    -1,   254,    -1,    -1,   257,
     258,   259,   260,    -1,   262,    -1,    -1,   265,    -1,    -1,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
      -1,   279,   280,   281,   254,    -1,    -1,   257,   258,   259,
     260,    -1,   262,    -1,    -1,   265,    -1,    -1,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,    -1,   279,
     280,   281,    -1,   254,    -1,    -1,   257,   258,   259,   260,
      -1,   262,   320,    -1,   265,   323,   324,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,   280,
     281,   254,    -1,    -1,   257,   258,   259,   260,    -1,   262,
     320,    -1,   265,   323,   324,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,    -1,   279,   280,   281,    -1,
     254,    -1,    -1,   257,   258,   259,   260,    -1,   262,   320,
      -1,   265,   323,   324,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,   254,    -1,
      -1,   257,   258,   259,   260,    -1,   262,   320,    -1,   265,
     323,   324,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,    -1,   279,   280,   281,    -1,   254,    -1,    -1,
     257,   258,   259,   260,    -1,   262,   320,    -1,   265,   323,
     324,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,    -1,   279,   280,   281,   254,    -1,    -1,   257,   258,
     259,   260,    -1,   262,   320,    -1,   265,   323,   324,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,    -1,
     279,   280,   281,    -1,   254,    -1,    -1,   257,   258,   259,
     260,    -1,   262,   320,    -1,   265,   323,   324,   268,   269,
     270,   271,   272,   273,   274,   275,   276,    -1,    -1,   279,
     280,   281,   254,    -1,    -1,   257,   258,   259,   260,    -1,
     262,   320,    -1,   265,   323,   324,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,    -1,   279,   280,   281,
      -1,   254,    -1,    -1,   257,   258,   259,   260,    -1,   262,
     320,    -1,   265,   323,   324,   268,   269,   270,   271,   272,
     273,   274,   275,   276,    -1,    -1,   279,   280,   281,   254,
      -1,    -1,   257,   258,   259,   260,    -1,   262,   320,    -1,
     265,   323,   324,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,   279,   280,   281,    -1,   254,    -1,
      -1,   257,   258,   259,   260,    -1,   262,   320,    -1,   265,
     323,   324,   268,   269,   270,   271,   272,   273,   274,   275,
     276,    -1,    -1,   279,   280,   281,   254,    -1,    -1,   257,
     258,   259,   260,    -1,   262,   320,    -1,   265,   323,   324,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
      -1,   279,   280,   281,    -1,   254,    -1,    -1,   257,   258,
     259,   260,    -1,   262,   320,    -1,   265,   323,   324,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,    -1,
     279,   280,   281,   254,    -1,    -1,   257,   258,   259,   260,
      -1,   262,   320,    -1,   265,   323,   324,   268,   269,   270,
     271,   272,   273,   274,   275,   276,    -1,    -1,   279,   280,
     281,    -1,   254,    -1,    -1,   257,   258,   259,   260,    -1,
     262,   320,    -1,   265,   323,   324,   268,   269,   270,   271,
     272,   273,   274,   275,   276,    -1,    -1,   279,   280,   281,
     254,    -1,    -1,   257,   258,   259,   260,    -1,   262,   320,
      -1,   265,   323,   324,   268,   269,   270,   271,   272,   273,
     274,   275,   276,    -1,    -1,   279,   280,   281,    -1,   254,
      -1,    -1,   257,   258,   259,   260,    -1,   262,   320,    -1,
     265,   323,   324,   268,   269,   270,   271,   272,   273,   274,
     275,   276,    -1,    -1,   279,   280,   281,   254,    -1,    -1,
     257,   258,   259,   260,    -1,   262,   320,    -1,   265,   323,
     324,   268,   269,   270,   271,   272,   273,   274,   275,   276,
      -1,    -1,   279,   280,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   320,    -1,    -1,   323,   324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   320,    -1,    -1,   323,   324
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     332,   333,   334,   255,   320,   342,   343,   367,   334,   197,
     338,   339,   337,   456,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   115,   116,   117,   118,   119,   120,   121,
     127,   128,   129,   133,   138,   139,   140,   141,   142,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   194,   195,   196,
     198,   199,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   689,   691,   706,   707,    37,
      38,    43,    57,    59,    60,    61,   132,   160,   690,   694,
     695,   696,   697,   698,   699,   700,   701,   702,   707,    43,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
     181,   198,   243,   244,   586,   588,   589,   590,   591,   592,
     593,   594,   595,   596,   597,   599,   601,   603,   658,   674,
     675,   676,   677,   679,   680,   683,   706,     0,    12,    14,
      23,    27,    30,    31,    33,    35,    37,    38,    39,    41,
      42,    43,    57,    59,    60,    61,    62,    63,    67,    70,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,   110,   127,   128,   132,   134,   135,   139,   141,
     153,   154,   156,   160,   174,   180,   198,   200,   225,   228,
     234,   236,   243,   246,   247,   470,   471,   472,   473,   474,
     475,   477,   482,   493,   496,   502,   503,   504,   505,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   524,   525,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538,
     539,   540,   541,   542,   543,   544,   546,   547,   548,   549,
     550,   553,   554,   555,   566,   568,   570,   571,   572,   575,
     577,   578,   579,   580,   590,   644,   645,   646,   647,   648,
     649,   650,   653,   654,   655,   656,   658,   665,   666,   670,
     671,   672,   673,   684,   687,   707,   193,   428,   429,   344,
     368,   187,   335,   180,   340,    43,    55,   238,   457,   458,
     462,   465,    58,   693,    56,   700,   700,   694,   703,   704,
     706,    43,   163,   164,    37,    38,   115,   116,   117,   118,
     119,   120,    14,    77,   169,   170,    24,    43,   588,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    14,    26,    37,   587,   200,   465,   545,
     706,   537,   129,   130,   556,   136,   114,   567,   526,   112,
     558,   517,   517,    44,   471,   706,    22,    51,   131,   576,
      51,    51,   131,   581,    51,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    51,    12,   651,   652,
      51,    51,    12,   478,   479,    12,   201,   483,   484,    12,
     494,   495,   494,    43,    43,    51,    75,    76,    22,   581,
      51,   131,   573,   462,    66,   111,    66,   233,    66,    66,
     233,    51,   241,   248,    36,   138,   139,   141,   142,   143,
     145,   146,   475,   476,   485,   486,   487,   163,   164,    16,
      17,    18,    19,    20,    21,    27,    40,   115,   116,   117,
     118,   119,   120,   177,   202,    37,    38,   168,    14,    77,
     169,   170,    15,   171,   172,   173,   165,   176,   167,   175,
      51,   522,   526,    33,    39,    24,    24,   537,   537,    23,
      24,    43,   472,   472,    43,    54,   183,   194,   430,   431,
     197,   432,   433,   434,   435,   285,   294,   345,   321,   322,
     370,   456,   657,   706,   187,   341,    12,    44,   467,   468,
     706,   159,   463,   472,   705,   694,    44,    36,   694,   696,
     697,   699,   699,   698,   698,   698,   698,   698,   698,   700,
     700,   700,   700,   694,   703,    44,    14,    44,   598,   605,
     658,    44,    44,    69,   198,   601,   603,    44,    44,    44,
     132,   657,   600,   605,   604,   606,   658,    44,    44,    44,
      14,    44,   602,   606,    44,   681,   682,   706,    44,   589,
      43,   557,   112,   113,   569,    32,   706,    44,   471,    51,
     574,   471,   471,    51,   582,   471,   471,   545,    36,   226,
     471,   471,   545,    36,   545,    12,    36,   545,    36,   155,
     155,   471,   471,   471,    51,    51,   574,   471,   574,   159,
     585,   472,   166,   472,    52,   685,   686,   706,   706,   472,
     472,   472,   472,    12,   144,   145,   504,   505,   507,   507,
     507,   507,   507,   507,   506,   507,   507,   507,   507,   507,
     507,   507,   507,    70,   510,   510,   509,   511,   511,   511,
     511,   512,   512,   513,   513,   166,   159,   159,   159,    52,
     471,   527,   527,   471,   471,   706,   471,    26,    44,   472,
     551,   552,   159,   229,   230,   237,    44,   551,    59,   132,
     132,    53,   431,   438,   438,   180,   435,   187,   195,   436,
     437,   439,   440,   441,   442,   443,   444,   445,   446,   449,
     450,   451,   454,   455,   459,   461,   470,   643,   659,   688,
     254,   256,   263,   264,   269,   282,   283,   284,   346,   347,
     350,   351,   355,   356,   357,   358,   359,   360,   363,   364,
     365,   366,   369,   254,   257,   258,   259,   260,   262,   265,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   279,
     280,   281,   323,   324,   367,   371,   372,   373,   374,   375,
     376,   377,   380,   381,   385,   386,   387,   388,   389,   394,
     395,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   199,    40,   456,   545,    36,    44,    43,   586,   142,
     692,   692,   694,    44,    25,    44,    36,    44,    44,    44,
      44,    44,    44,    44,    36,    44,    36,    44,   585,    36,
      14,    44,   586,   678,   112,   558,   113,   112,   137,   523,
      52,    52,   471,    52,    52,    52,   471,    52,    52,    13,
     652,   472,    52,    52,   585,   479,   585,   545,   484,   585,
     495,   472,   472,    44,    44,    52,   471,   471,    52,   586,
      51,   469,   232,    66,   159,    36,    52,   585,   232,   232,
     249,   545,   472,   488,   489,   490,   144,   507,    43,    51,
     252,   521,   542,   609,   612,   613,   614,   615,   616,   617,
     618,   619,   586,   586,   583,   589,   583,    52,    25,    25,
      25,    36,    44,   227,   235,   472,   472,   472,    44,   438,
     657,   187,   195,    72,    73,    74,   180,   188,   189,   190,
     191,   192,   231,   241,   253,   456,   196,   197,   438,   438,
     438,   438,   438,   438,   438,   438,   438,   438,   295,   296,
     286,   287,   308,   309,   311,   352,   287,   299,   309,   352,
     287,   297,   298,   309,   310,   370,   287,   309,   310,   370,
     254,   285,   287,   288,   289,   290,   291,   292,   293,   302,
     303,   304,   305,   306,   307,   317,   318,   319,   254,   287,
     309,   254,   122,   469,   375,   310,   266,   390,   391,   392,
     312,   310,   313,   370,   286,   310,   379,   287,   382,   254,
     370,   277,   310,   315,   316,   396,   287,   309,   310,   370,
     310,   370,   287,   310,   370,   370,   287,   310,   313,   314,
     370,   287,   310,   370,   287,   314,   370,   254,   300,   310,
     300,   301,   370,   310,   370,   707,   132,   608,   199,   585,
     468,   466,   542,   472,   693,   161,   607,   658,   607,   682,
     586,    44,   159,    36,    44,   129,   130,    28,    45,   137,
      52,    52,   472,   138,   121,   480,    13,    13,   140,   157,
     497,   499,   500,   161,    52,    52,   471,   472,   472,   472,
     686,    13,    43,    43,   325,   327,   667,   706,    36,   147,
     148,   491,   488,   609,   471,   616,    51,   215,   216,   217,
     620,    97,   642,   250,   611,   251,    90,    91,   626,   206,
     621,    26,   584,   552,   237,   237,    40,   178,   179,   626,
     608,   657,   178,   179,   127,   128,   145,   152,   198,   199,
     178,   184,   447,   706,    75,    76,   109,   245,   249,   662,
     706,   133,   199,   180,   190,   453,   608,   180,   608,   296,
     295,   348,    23,    33,    39,    62,    78,   239,   240,   418,
     419,   420,   421,   424,   425,   426,   537,   586,    59,    60,
      61,   349,   263,   353,   354,   370,   586,   370,   586,   471,
     254,   586,   471,   254,    70,   129,   328,   329,   330,   361,
     129,   362,   362,   588,   254,   471,   312,   267,   391,   393,
     370,   471,   471,   369,   254,   129,   325,   327,   378,   471,
     254,   261,   383,   384,   254,   383,   254,   370,   471,   369,
     369,   278,   397,   586,   471,   254,   471,   254,   369,   471,
     254,   254,   369,   471,   369,   369,   254,   369,   471,   254,
     369,   369,   254,   471,   254,   471,   254,   462,   438,   707,
      36,    44,   694,    44,    26,    44,    44,   586,   586,   159,
     558,   558,   565,   472,    12,   201,   481,   472,   472,   472,
      12,   501,   190,   498,   499,    15,   138,   472,    52,   232,
     472,    12,   668,   669,   668,   232,   489,   149,   492,    44,
      52,    52,   609,   104,   220,   103,   613,   102,   121,   127,
     203,   204,   205,   208,   209,   610,   623,   614,   140,    92,
      95,    98,    99,   100,   101,   158,   192,   210,   211,   214,
     627,   628,   629,   630,   631,   634,   639,   640,   641,    91,
     126,   218,   219,   622,   472,   472,   608,    40,   149,   608,
     180,   180,    36,   132,   706,   129,   325,   326,   663,   664,
     242,   159,    12,   707,   657,   198,   608,   121,   452,   657,
     452,   129,   325,   326,   537,    22,    22,    43,    43,    15,
     425,    33,    39,    33,    39,   427,   287,   297,   298,   309,
     310,   370,   254,   254,   129,   471,   370,   254,   254,   287,
     297,   309,   310,   370,   254,   370,   254,   370,   463,   462,
     542,   162,    44,   586,    46,    46,    34,   124,   125,   469,
     554,   545,    12,   140,   545,   586,    12,   138,   586,   472,
     162,   472,   545,    36,    44,    44,    43,   150,   151,   152,
     620,    52,   511,   103,   106,   107,   508,   509,   622,   223,
     224,   625,   625,   615,    98,    99,   100,   101,    93,    94,
      43,   121,   190,   633,   220,    93,    94,   706,   656,   627,
     108,   151,   509,   509,   207,   438,   608,   150,   151,   608,
     608,   185,   186,   448,    43,   469,   661,   662,    36,   418,
     588,   545,   462,    40,   180,   452,   608,    36,    40,   537,
     537,   422,   544,   656,   656,   419,   425,   425,   425,   425,
      24,   586,   471,   254,   254,   586,   471,   254,   254,   469,
     463,   694,   558,   558,   556,   545,   472,   159,   545,   472,
     472,   585,   669,   668,   608,   220,   221,   222,   624,   624,
     220,   190,   633,   608,    43,   121,   190,   636,   132,   509,
     509,   168,    44,   467,   159,   660,   242,   664,   469,   661,
     585,   463,   608,   608,    44,    36,   471,   336,   438,   469,
      47,    49,   559,    47,    49,   560,   558,   138,    13,    44,
     632,   632,   212,   622,   637,   656,   608,   635,   635,   509,
      44,   586,   469,   418,   660,    13,   182,   460,   182,   464,
     469,   452,   423,   542,   544,    25,   438,   561,   563,   562,
     564,    29,   472,   472,    36,    44,    44,   656,   213,    36,
      44,   171,   173,   638,   469,   661,   469,   472,    44,    48,
     122,   469,    50,   123,   469,    48,   122,   469,    50,   123,
     469,   633,   622,   656,   636,   636,   660,   213,   469
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
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





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  yylloc.first_column = yylloc.last_column = 1;
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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 10:

/* Line 1455 of yacc.c  */
#line 796 "../src/parser/XQParser.y"
    {
    QP->_seqType = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 803 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 809 "../src/parser/XQParser.y"
    {
    SET_BUILT_IN_NAMESPACE(XMLChXS, SchemaSymbols::fgURI_SCHEMAFORSCHEMA);
    SET_BUILT_IN_NAMESPACE(XMLChXSI, SchemaSymbols::fgURI_XSI);
    SET_BUILT_IN_NAMESPACE(XMLChFN, XQFunction::XMLChFunctionURI);
    SET_BUILT_IN_NAMESPACE(XMLChLOCAL, XQUserFunction::XMLChXQueryLocalFunctionsURI);
    SET_BUILT_IN_NAMESPACE(XMLChERR, FunctionError::XMLChXQueryErrorURI);
    SET_BUILT_IN_NAMESPACE(XQillaFunction::XQillaPrefix, XQillaFunction::XMLChFunctionURI);
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 820 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 831 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 840 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 851 "../src/parser/XQParser.y"
    {
    QP->_moduleName = (yyvsp[(3) - (6)].str);

    UTF8Str module(QP->_moduleName);
    UTF8Str file(QP->_lexer->getFile());

    printf("// Auto-generated by compile-delayed-module from %s\n", file.str());
    printf("// DO NOT EDIT\n\n");

    printf("// %s\n", file.str());
    printf("static const XMLCh %s_file[] = { ", module.str());
    const XMLCh *ptr = QP->_lexer->getFile();
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");

    printf("// %s\n", UTF8((yyvsp[(3) - (6)].str)));
    printf("static const XMLCh %s_prefix[] = { ", module.str());
    ptr = (yyvsp[(3) - (6)].str);
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");

    printf("// %s\n", UTF8((yyvsp[(5) - (6)].str)));
    printf("static const XMLCh %s_uri[] = { ", module.str());
    ptr = (yyvsp[(5) - (6)].str);
    for(; *ptr != 0; ++ptr) {
      printf("%d, ", *ptr);
    }
    printf("0 };\n\n");
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 888 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 892 "../src/parser/XQParser.y"
    {
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 898 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    // Call staticResolution on the function signature, to resolve the annotation names
    (yyvsp[(2) - (8)].signature)->staticResolution(CONTEXT);

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));

    printf("  {\n    \"%s\", %d, %s, %d, %d,\n", UTF8(localname), (int)((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
      (yyvsp[(2) - (8)].signature)->isPrivate() ? "true" : "false", (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column);
    printf("    \"");
    const XMLCh *ptr = ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(1) - (8)]).first_offset;
    const XMLCh *start = ptr;
    const XMLCh *end = ((XQLexer*)QP->_lexer)->getQueryString() + (yylsp[(8) - (8)]).last_offset;
    for(;ptr < end; ++ptr) {
      if(*ptr == '"') {
        if((ptr - start) == 0) buf.reset();
        else buf.set(start, ptr - start);
        printf("%s\\\"", UTF8(buf.getRawBuffer()));
        start = ptr + 1;
      }
      else if(*ptr == '\n') {
        if((ptr - start) == 0) buf.reset();
        else buf.set(start, ptr - start);
        printf("%s\\n\"\n    \"", UTF8(buf.getRawBuffer()));
        start = ptr + 1;
      }
    }
    buf.set(start, ptr - start);
    printf("%s\\n\"\n", UTF8(buf.getRawBuffer()));
    printf("  },\n");
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 937 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType((ItemType*)&ItemType::ANY_ATOMIC_TYPE, SequenceType::QUESTION_MARK));

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

    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    ASTNode *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                                           MEMMGR->getPooledString("exists"), args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 966 "../src/parser/XQParser.y"
    {
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 969 "../src/parser/XQParser.y"
    {
    // TBD Check for xsl:version attr - jpcs
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();

    VectorOfASTNodes *pattern = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    pattern->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR)));

    XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    modelist->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));

    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, signature, (yyvsp[(1) - (1)].astNode), MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 993 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 997 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1016 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    if((yyvsp[(1) - (4)].functDecl)->getPattern() != 0 && (yyvsp[(1) - (4)].functDecl)->getModeList() == 0) {
      XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
      modelist->push_back(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
      (yyvsp[(1) - (4)].functDecl)->setModeList(modelist);
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1035 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1040 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1045 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1052 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1057 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1062 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1070 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1074 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1080 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1085 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1095 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1108 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1113 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1120 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1125 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1133 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1137 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1145 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);

    if((yyval.argSpec)->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:param instruction does not have a {}name attribute");
    }

    if((yyval.argSpec)->getType() == 0) {
      (yyval.argSpec)->setType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR)));
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

  case 58:

/* Line 1455 of yacc.c  */
#line 1172 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1176 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1183 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1189 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1194 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1199 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
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

  case 65:

/* Line 1455 of yacc.c  */
#line 1232 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1236 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1243 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1248 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1253 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1258 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1269 "../src/parser/XQParser.y"
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

  case 72:

/* Line 1455 of yacc.c  */
#line 1287 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1298 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1303 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1311 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1339 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1342 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1345 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1348 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1351 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1354 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1357 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1360 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1363 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1366 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1369 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1372 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1375 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1378 "../src/parser/XQParser.y"
    {
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1381 "../src/parser/XQParser.y"
    {
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1384 "../src/parser/XQParser.y"
    {
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1387 "../src/parser/XQParser.y"
    {
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1397 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1409 "../src/parser/XQParser.y"
    {
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1412 "../src/parser/XQParser.y"
    {
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1418 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].alias)->getName() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have a {}name attribute");
    }
    if((yyvsp[(1) - (2)].alias)->getType() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:type-alias declaration does not have an {}as attribute");
    }

    QP->_query->addTypeAlias((yyvsp[(1) - (2)].alias));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1432 "../src/parser/XQParser.y"
    {
    (yyval.alias) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTypeAlias(0, 0, MEMMGR));
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1436 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].alias)->setURI(uri);
    (yyvsp[(1) - (2)].alias)->setName(name);
    (yyval.alias) = (yyvsp[(1) - (2)].alias);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1443 "../src/parser/XQParser.y"
    {
    (yyval.alias) = (yyvsp[(1) - (3)].alias);
    (yyval.alias)->setType((yyvsp[(3) - (3)].itemType));
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1453 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1458 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1463 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1471 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1479 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1490 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1500 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1504 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1511 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1520 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1524 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1529 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1537 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1541 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1546 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1551 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1580 "../src/parser/XQParser.y"
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

  case 142:

/* Line 1455 of yacc.c  */
#line 1598 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1616 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1625 "../src/parser/XQParser.y"
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

      apply->setExpression(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::CHILD, nt, MEMMGR)));
    }
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1645 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1649 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1654 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1662 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1667 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1671 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1678 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1682 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1690 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1717 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1721 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1729 "../src/parser/XQParser.y"
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

  case 163:

/* Line 1455 of yacc.c  */
#line 1747 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1751 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1758 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1763 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1768 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1776 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1782 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1790 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1805 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1819 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1823 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1837 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1846 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1853 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1864 "../src/parser/XQParser.y"
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

  case 180:

/* Line 1455 of yacc.c  */
#line 1899 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1903 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1908 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1923 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1927 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1934 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1938 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1945 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (4)].letTuple)->setExpression(XSLT_VARIABLE_VALUE((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].letTuple)->getExpression(), (yyvsp[(2) - (4)].parenExpr), (yyvsp[(1) - (4)].letTuple)->getVar()->getType()));
    const_cast<ArgumentSpec*>((yyvsp[(1) - (4)].letTuple)->getVar())->setType(0);

    if((yyvsp[(1) - (4)].letTuple)->getExpression() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction has both a select attribute and a sequence constructor [err:XTSE0620]");
    }

    if((yyvsp[(1) - (4)].letTuple)->getVarName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:variable instruction does not have a {}name attribute");
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQReturn((yyvsp[(1) - (4)].letTuple), (yyvsp[(4) - (4)].parenExpr), MEMMGR));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1963 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), (XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1967 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1974 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1979 "../src/parser/XQParser.y"
    {
    const_cast<ArgumentSpec*>((yyvsp[(1) - (3)].letTuple)->getVar())->setType((yyvsp[(3) - (3)].sequenceType));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1987 "../src/parser/XQParser.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 2005 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2009 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2017 "../src/parser/XQParser.y"
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

  case 197:

/* Line 1455 of yacc.c  */
#line 2039 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2043 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2050 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2058 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2067 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2075 "../src/parser/XQParser.y"
    {
    XQAttributeConstructor *attr = (XQAttributeConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = attr;

    if(attr->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:attribute instruction does not have a {}name attribute");
    }

    if(attr->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(attr->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(attr->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
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

  case 203:

/* Line 1455 of yacc.c  */
#line 2113 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2117 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2124 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 2131 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2140 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2149 "../src/parser/XQParser.y"
    {
    XQNamespaceConstructor *ns = (XQNamespaceConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = ns;

    if(ns->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction does not have a {}name attribute");
    }

    if(!(yyvsp[(2) - (3)].parenExpr)->getChildren().empty()) {
      if(ns->getChildren() != 0 && !ns->getChildren()->empty()) {
        yyerror((yylsp[(1) - (3)]), "The xsl:namespace instruction has both a select attribute and a sequence constructor [err:XTSE0840]");
      }

      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
      ns->setChildren(children);
    }
    else if(ns->getChildren() == 0) {
      VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      children->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR)));
      ns->setChildren(children);
    }
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2176 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2180 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2187 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2199 "../src/parser/XQParser.y"
    {
    XQElementConstructor *elem = (XQElementConstructor*)(yyvsp[(1) - (3)].astNode);
    (yyval.astNode) = elem;

    if(elem->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:element instruction does not have a {}name attribute");
    }

    if(elem->namespaceExpr != 0) {
      // Use fn:QName() to assign the correct URI
      VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
      args->push_back(elem->namespaceExpr);
      args->push_back(const_cast<ASTNode*>(elem->getName()));
      ASTNode *name = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
          MEMMGR->getPooledString("QName"), args, MEMMGR));
      elem->setName(name);
      elem->namespaceExpr = 0;
    }

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(2) - (3)].parenExpr)->getChildren();
    elem->setChildren(children);
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2226 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2230 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2237 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2247 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2259 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2263 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2268 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2277 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2290 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2294 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2299 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2308 "../src/parser/XQParser.y"
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

  case 225:

/* Line 1455 of yacc.c  */
#line 2322 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2326 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2339 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2344 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2356 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2360 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::SELF, nt, MEMMGR));
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2368 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2381 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2389 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2402 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2409 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2448 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2452 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2456 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[parent::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::PARENT, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2474 "../src/parser/XQParser.y"
    {
    // id("a")/foo -> self::foo[ancestor::node() intersect id("a")]

    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setTypeWildcard();
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    XQStep *step = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQStep(Node::ANCESTOR, nt, MEMMGR));

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(step);
    oargs.push_back((yyvsp[(1) - (3)].astNode));

    Intersect *intersect = WRAP((yylsp[(1) - (3)]), new (MEMMGR) Intersect(oargs, MEMMGR));

    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), intersect, MEMMGR));
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2492 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2502 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(Node::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2524 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2530 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2536 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2542 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2553 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 2557 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2585 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0)) {
      QP->_lexer->setVersion11(false);
      QP->_query->setVersion11(false);
    }
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_1) || XPath2Utils::equals((yyvsp[(2) - (2)].str),sz3_0)) {
      if(!QP->_lexer->isVersion11()) {
        yyerror((yylsp[(1) - (2)]), "This XQuery processor is not configured to support XQuery 1.1 [err:XQST0031]");
      }
      QP->_lexer->setVersion11(true);
      QP->_query->setVersion11(true);
    }
    else
      yyerror((yylsp[(1) - (2)]), "This XQuery processor only supports version 1.0 and 1.1 [err:XQST0031]");
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2605 "../src/parser/XQParser.y"
    {
    XMLCh *encName = (yyvsp[(2) - (2)].str);
    if((*encName < chLatin_A || *encName > chLatin_Z) && (*encName < chLatin_a || *encName > chLatin_z))
      yyerror((yylsp[(1) - (2)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");

    for(++encName; *encName; ++encName) {
      if((*encName < chLatin_A || *encName > chLatin_Z) &&
         (*encName < chLatin_a || *encName > chLatin_z) &&
         (*encName < chDigit_0 || *encName > chDigit_9) &&
         *encName != chPeriod && *encName != chDash)
        yyerror((yylsp[(1) - (2)]), "The specified encoding does not conform to the definition of EncName [err:XQST0087]");
    }
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2629 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2647 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2651 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2655 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2663 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2669 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2675 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2679 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2683 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2715 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2723 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2728 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2737 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2742 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2751 "../src/parser/XQParser.y"
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
      else if(XPath2Utils::equals(qName.getName(), option_extensions)) {
        if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_TRUE)) {
          QP->_lexer->setEnableExtensions(true);
        }
        else if(XPath2Utils::equals((yyvsp[(4) - (4)].str), SchemaSymbols::fgATTVAL_FALSE)) {
          QP->_lexer->setEnableExtensions(false);
        }
        else {
          yyerror((yylsp[(4) - (4)]), "Unknown value for option xqilla:extensions. Should be 'true' or 'false' [err:XQILLA]");
        }
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla namespace [err:XQILLA]");
      }
    }
    else if(XPath2Utils::equals(uri, XQRewriteRule::URI)) {
      if(XPath2Utils::equals(qName.getName(), option_rule)) {
        XQLexer rwlexer(MEMMGR, _LANG_REWRITE_RULE_, QP->_lexer->getFile(),
          (yylsp[(4) - (4)]).first_line, (yylsp[(4) - (4)]).first_column + 1, (yyvsp[(4) - (4)].str));
        XQParserArgs args(&rwlexer, QP->_query);
        args._rewriteRule = true;
        XQParser::yyparse(&args);
      }
      else {
        yyerror((yylsp[(3) - (4)]), "Unknown option name in the xqilla rewrite namespace [err:XQILLA]");
      }
    }
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2834 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2842 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2847 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2856 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2861 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2870 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2880 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2884 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2892 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2896 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2904 "../src/parser/XQParser.y"
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

  case 303:

/* Line 1455 of yacc.c  */
#line 2920 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2929 "../src/parser/XQParser.y"
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

  case 305:

/* Line 1455 of yacc.c  */
#line 2941 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2949 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2953 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2958 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2967 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2971 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2979 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2989 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 3006 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 3015 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 3019 "../src/parser/XQParser.y"
    {
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
    (yyval.signature)->annotations.push_back((yyvsp[(2) - (2)].annotation));
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 3030 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Annotation(0, XQFunction::XMLChFunctionURI, (yyvsp[(1) - (1)].str), trueExpr, MEMMGR));
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 3042 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQGlobalVariable((yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode), MEMMGR)));
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 3049 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 3053 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 3061 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 3070 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 3074 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 3081 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 3085 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 3094 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 3102 "../src/parser/XQParser.y"
    {
    ASTNode *trueExpr =
      WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    (yyval.annotation) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) Annotation((yyvsp[(2) - (2)].str), trueExpr));
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 3109 "../src/parser/XQParser.y"
    {
    (yyval.annotation) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) Annotation((yyvsp[(2) - (5)].str), (yyvsp[(4) - (5)].parenExpr)));
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 3116 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.parenExpr)->addItem((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 3121 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (3)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(3) - (3)].astNode));
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 3130 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 3135 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 3145 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 3153 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 3161 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 3174 "../src/parser/XQParser.y"
    {
      ASTNode* prevExpr=(yyvsp[(1) - (3)].astNode);
      if(prevExpr->getType()==ASTNode::SEQUENCE)
      {
        ((XQSequence *)prevExpr)->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
      }
      else {
        XQSequence *dis = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
        dis->addItem((yyvsp[(1) - (3)].astNode));
        dis->addItem((yyvsp[(3) - (3)].astNode));
        (yyval.astNode) = dis;
      }
    }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3212 "../src/parser/XQParser.y"
    {
      // Add a ContextTuple at the start
      TupleNode *tuples = setLastAncestor((yyvsp[(1) - (3)].tupleNode), WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)));

      // Check the correct clause order for XQuery 1.0
      // FLWORExpr ::= (ForClause |  LetClause)+ WhereClause? OrderByClause? "return" ExprSingle
      if(!QP->_lexer->isVersion11()) {
        const TupleNode *where = 0;
        const TupleNode *forlet = 0;
        const TupleNode *node = tuples;
        while(node) {
          switch(node->getType()) {
          case TupleNode::ORDER_BY:
            if(where)
              XQThrow3(StaticErrorException, X("XQParser"), X("Where clause after order by clause [err:XPST0003]"), where);
            else if(forlet)
              XQThrow3(StaticErrorException, X("XQParser"), X("For or let clause after order by clause [err:XPST0003]"), forlet);
            break;
          case TupleNode::WHERE:
            if(where)
              XQThrow3(StaticErrorException, X("XQParser"), X("Duplicate where clause [err:XPST0003]"), where);
            else if(forlet)
              XQThrow3(StaticErrorException, X("XQParser"), X("For or let clause after where clause [err:XPST0003]"), forlet);
            where = node;
            break;
          case TupleNode::FOR:
          case TupleNode::LET:
            forlet = node;
            break;
          default:
            break;
          }

          node = node->getParent();
        }
      }

      // Add the return expression
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQReturn(tuples, (yyvsp[(3) - (3)].astNode), MEMMGR));
    }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3257 "../src/parser/XQParser.y"
    {
    // Order by has a special check here, because a single OrderByClause can result
    // in multiple OrderByTuple objects.
    const TupleNode *node = (yyvsp[(1) - (2)].tupleNode);
    while(node) {
      if(node->getType() == TupleNode::ORDER_BY)
        XQThrow3(StaticErrorException, X("XQParser"), X("Duplicate order by clause [err:XPST0003]"), (yyvsp[(2) - (2)].tupleNode));
      node = node->getParent();
    }

    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3270 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3285 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3292 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3300 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3311 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3315 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3325 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3329 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3339 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3346 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3354 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3358 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, X("0"), MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3367 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3375 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3383 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3388 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3396 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3406 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3413 "../src/parser/XQParser.y"
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

  case 383:

/* Line 1455 of yacc.c  */
#line 3428 "../src/parser/XQParser.y"
    {
    SequenceType *zero_or_one = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType((ItemType*)&ItemType::ITEM, SequenceType::QUESTION_MARK));

    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAtomize((yyval.astNode), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPromoteUntyped((yyval.astNode), (ItemType*)&ItemType::STRING, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs((yyval.astNode), zero_or_one, MEMMGR));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3442 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3446 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3450 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 3457 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 3466 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 3470 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 3479 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 3487 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 3506 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 3517 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3524 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 3537 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3541 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3549 "../src/parser/XQParser.y"
    {
    // TBD Don't copy the expression when unions of SequenceTypes are implemented - jpcs
    XQTypeswitch::Cases::iterator it = (yyvsp[(1) - (3)].caseClauses)->begin();
    if(it != (yyvsp[(1) - (3)].caseClauses)->end()) {
      (*it)->setExpression((yyvsp[(3) - (3)].astNode));

      for(++it; it != (yyvsp[(1) - (3)].caseClauses)->end(); ++it) {
        (*it)->setExpression((yyvsp[(3) - (3)].astNode)->copy(CONTEXT));
      }
    }

    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3572 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3581 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3585 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3593 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 3601 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OR) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::AND) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3634 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3638 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3641 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3654 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3658 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3662 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3666 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3670 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3674 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3678 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3682 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3686 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3690 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 3699 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3703 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3712 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3724 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3741 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3745 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3749 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 3758 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3762 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3771 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3775 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3784 "../src/parser/XQParser.y"
    {
    ASTNode *falseExpr =
      WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("false"), 0, MEMMGR));
    XQTypeswitch::Case *defcase =
      WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, falseExpr));

    ASTNode *trueExpr =
      WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                           MEMMGR->getPooledString("true"), 0, MEMMGR));
    XQTypeswitch::Cases *cases = new (MEMMGR)
      XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    cases->push_back(WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(4) - (4)].sequenceType), trueExpr)));

    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTypeswitch((yyvsp[(1) - (4)].astNode), cases, defcase, MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3806 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3816 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3825 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3834 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3840 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3861 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3865 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3869 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3877 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3884 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3897 "../src/parser/XQParser.y"
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

  case 469:

/* Line 1455 of yacc.c  */
#line 3918 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3927 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3933 "../src/parser/XQParser.y"
    {
    XQNav *nav = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQNav(MEMMGR));

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (2)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (2)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR)));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));

    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3958 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT))));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3972 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 3978 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));

    NodeTest *step = new (MEMMGR) NodeTest();
    step->setTypeWildcard();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    nav->addStep(WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQStep(Node::DESCENDANT_OR_SELF, step, MEMMGR)));
    nav->addStep((yyvsp[(3) - (3)].astNode));

    (yyval.astNode) = nav;
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 4000 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 4010 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 4017 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 4026 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      switch((yyvsp[(1) - (2)].axis)) {
      case Node::NAMESPACE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::namespace_string); break;
      case Node::ATTRIBUTE: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string); break;
      default: (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string); break;
      }
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis),(yyvsp[(2) - (2)].nodeTest),MEMMGR));
  }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 4049 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::CHILD;
  }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 4053 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT;
  }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 4057 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ATTRIBUTE;
  }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 4061 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::SELF;
  }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 4065 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::DESCENDANT_OR_SELF;
  }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 4069 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING_SIBLING;
  }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 4073 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::FOLLOWING;
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 4077 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::NAMESPACE;
  }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 4085 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(Node::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 4093 "../src/parser/XQParser.y"
    {
    Node::Axis axis = Node::CHILD;
    ItemType *itemtype = (yyvsp[(1) - (1)].nodeTest)->getItemType();
    if(itemtype != 0 && itemtype->getItemTestType() == ItemType::TEST_ATTRIBUTE) {
      axis = Node::ATTRIBUTE;
    }
    else if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(axis, (yyvsp[(1) - (1)].nodeTest), MEMMGR));
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 4110 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 4127 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PARENT;
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 4131 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR;
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 4135 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING_SIBLING;
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 4139 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::PRECEDING;
  }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 4143 "../src/parser/XQParser.y"
    {
    (yyval.axis) = Node::ANCESTOR_OR_SELF;
  }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 4151 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(Node::PARENT, step, MEMMGR));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 4163 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 4185 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 4192 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 4199 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 4212 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4241 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4252 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4256 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4264 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4272 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4282 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4292 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4296 "../src/parser/XQParser.y"
    {
    bool partial = false;
    VectorOfASTNodes::iterator i;
    for(i = (yyvsp[(3) - (4)].itemList)->begin(); i != (yyvsp[(3) - (4)].itemList)->end(); ++i) {
      if(*i == 0) {
        partial = true;
        break;
      }
    }

    if(partial) {
      // This is a partial function application
      XQFunctionRef *ref = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList)->size(), MEMMGR));
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPartialApply(ref, (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
    else {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4319 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4324 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4335 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4344 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4348 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4361 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4367 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4380 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4384 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 4393 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4409 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4413 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4420 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 560:

/* Line 1455 of yacc.c  */
#line 4424 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4434 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 562:

/* Line 1455 of yacc.c  */
#line 4438 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4443 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4451 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4455 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4459 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4470 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4474 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4479 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 4487 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4491 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 4495 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4510 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4514 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4519 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 4524 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4529 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (2)].str), MEMMGR)));
    }
  }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 4540 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4549 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4558 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(WRAP((yylsp[(2) - (3)]), new (MEMMGR)
          XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(2) - (3)].str), MEMMGR)), value, MEMMGR));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4569 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4594 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4602 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4610 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4614 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4622 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4626 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4635 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4642 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4672 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4687 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4695 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4714 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(WRAP((yyloc), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING)), SequenceType::STAR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4747 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType((yyvsp[(1) - (2)].itemType), (yyvsp[(2) - (2)].occurrence)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4751 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4760 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4762 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4764 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4766 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4772 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ANYTHING));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4784 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ItemType(ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName)));
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4814 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NODE));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4822 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_DOCUMENT));
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4826 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4833 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(ItemType::TEST_SCHEMA_DOCUMENT);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.itemType)->setLocationInfo(&loc);
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TEXT));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4852 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_COMMENT));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4860 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_NAMESPACE));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4869 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_PI));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4873 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4877 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR)));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4889 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4893 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4902 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4910 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4923 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT));
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4927 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4931 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName)));
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4935 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName)));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4945 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4953 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType(ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName)));
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4973 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4985 "../src/parser/XQParser.y"
    {
    // TBD weight
    (yyval.ftselection) = (yyvsp[(1) - (3)].ftselection);

    for(VectorOfFTOptions::iterator i = (yyvsp[(2) - (3)].ftoptionlist)->begin();
        i != (yyvsp[(2) - (3)].ftoptionlist)->end(); ++i) {
      (*i)->setArgument((yyval.ftselection));
      (yyval.ftselection) = *i;
    }
/*     delete $2; */
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 5000 "../src/parser/XQParser.y"
    {
}
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 5003 "../src/parser/XQParser.y"
    {
}
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 5009 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 5013 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 5023 "../src/parser/XQParser.y"
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

  case 671:

/* Line 1455 of yacc.c  */
#line 5040 "../src/parser/XQParser.y"
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

  case 673:

/* Line 1455 of yacc.c  */
#line 5056 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 675:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 678:

/* Line 1455 of yacc.c  */
#line 5076 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 5085 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 5090 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 5100 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 5104 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 5112 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 5117 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 5126 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 5130 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 5134 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 5138 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 5142 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 5146 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5167 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5173 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5179 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5185 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5200 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5204 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5208 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5212 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5216 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 703:

/* Line 1455 of yacc.c  */
#line 5220 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5224 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5228 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5236 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5240 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 708:

/* Line 1455 of yacc.c  */
#line 5244 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5252 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5256 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5292 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_INSENSITIVE);
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5296 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::CASE_SENSITIVE);
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5300 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::LOWERCASE);
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5304 "../src/parser/XQParser.y"
    {
    CONTEXT->setFTCase(StaticContext::UPPERCASE);
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5313 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5325 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5329 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5339 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5343 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5347 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5351 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5355 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5362 "../src/parser/XQParser.y"
    {
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5365 "../src/parser/XQParser.y"
    {
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5372 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5376 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5380 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5384 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5394 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5398 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5402 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5409 "../src/parser/XQParser.y"
    {
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5420 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5424 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5431 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5435 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5443 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5447 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5463 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5467 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5475 "../src/parser/XQParser.y"
    {
}
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5482 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5490 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5495 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5500 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5512 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5524 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5539 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5550 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5554 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5564 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5572 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5579 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5584 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5592 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5601 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::INTEGER, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5609 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5617 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral((ItemType*)&ItemType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5633 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5642 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5654 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5659 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5664 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5670 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5676 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5682 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5691 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5695 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5703 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5707 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5714 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5719 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5727 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5732 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5741 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5745 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5749 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5757 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5761 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5769 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5773 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5777 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5781 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5789 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5793 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5797 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5805 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5810 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5820 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5845 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5856 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5861 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (4)]));

    bool partial = false;
    VectorOfASTNodes::iterator i;
    for(i = (yyvsp[(3) - (4)].itemList)->begin(); i != (yyvsp[(3) - (4)].itemList)->end(); ++i) {
      if(*i == 0) {
        partial = true;
        break;
      }
    }

    if(partial) {
      // This is a partial function application
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPartialApply((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
    else {
      (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].itemList), MEMMGR));
    }
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5889 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ItemType(ItemType::TEST_FUNCTION));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5901 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature(0, (yyvsp[(6) - (6)].sequenceType), MEMMGR), 0));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5905 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ItemType(new (MEMMGR) FunctionSignature((yyvsp[(4) - (7)].argSpecs), (yyvsp[(7) - (7)].sequenceType), MEMMGR), 0));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5912 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(1) - (1)].sequenceType), MEMMGR)));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5917 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
    (yyval.argSpecs)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec(0, (yyvsp[(3) - (3)].sequenceType), MEMMGR)));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5926 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5939 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) ItemType((yyvsp[(3) - (4)].tupleMembers), 0));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5943 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_TUPLE));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5950 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = new (MEMMGR) TupleMembers(true, MEMMGR);
    (yyvsp[(1) - (1)].argSpec)->setIndex(0);
    (yyval.tupleMembers)->add(0, (yyvsp[(1) - (1)].argSpec));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5956 "../src/parser/XQParser.y"
    {
    (yyval.tupleMembers) = (yyvsp[(1) - (3)].tupleMembers);
    (yyvsp[(3) - (3)].argSpec)->setIndex((yyval.tupleMembers)->size());
    (yyval.tupleMembers)->add(0, (yyvsp[(3) - (3)].argSpec));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5966 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) ArgumentSpec((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].sequenceType), MEMMGR));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5974 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) ItemType(WRAP((yylsp[(3) - (6)]), new (MEMMGR)
          SequenceType((yyvsp[(3) - (6)].itemType), SequenceType::EXACTLY_ONE)), (yyvsp[(5) - (6)].sequenceType), 0));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5979 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ItemType(ItemType::TEST_MAP));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5989 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tuples = setLastAncestor((yyvsp[(3) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the tuple constructor expression
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTupleConstructor(tuples, MEMMGR));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5997 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleConstructor(WRAP((yylsp[(1) - (3)]), new (MEMMGR) ContextTuple(MEMMGR)), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 6005 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 6013 "../src/parser/XQParser.y"
    {
    // TBD LetTuple doesn't give us the correct in-scope vars for the initializer - jpcs
    (yyval.tupleNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) LetTuple(0, (yyvsp[(1) - (4)].str), WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQTreatAs((yyvsp[(4) - (4)].astNode), (yyvsp[(2) - (4)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 6023 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTupleMember((yyvsp[(3) - (3)].str), MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQMap((yyvsp[(1) - (3)].astNode), (yyval.astNode), MEMMGR));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 6031 "../src/parser/XQParser.y"
    {
    QP->_query->addTypeAlias(WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeAlias((yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].itemType), MEMMGR)));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 6041 "../src/parser/XQParser.y"
    {
    QP->_query->addRewriteRule((yyvsp[(1) - (1)].rwrule));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 6048 "../src/parser/XQParser.y"
    {
    QP->_rwpattern = (yyvsp[(1) - (1)].rwpattern);
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 6055 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQRewriteRule((yyvsp[(1) - (5)].str), (yyvsp[(3) - (5)].rwpattern), (yyvsp[(4) - (5)].astNode), MEMMGR));
    (yyval.rwrule)->addCase((yyvsp[(5) - (5)].rwcase));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 6060 "../src/parser/XQParser.y"
    {
    (yyval.rwrule) = (yyvsp[(1) - (2)].rwrule);
    (yyval.rwrule)->addCase((yyvsp[(2) - (2)].rwcase));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 6068 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 6072 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 6079 "../src/parser/XQParser.y"
    {
    (yyval.rwcase) = new (MEMMGR) RewriteCase((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 6086 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) RewritePattern(ASTNode::IF, (yyvsp[(3) - (8)].rwpattern), (yyvsp[(6) - (8)].rwpattern), (yyvsp[(8) - (8)].rwpattern), MEMMGR));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 6094 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::OR) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::OR, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 6108 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].rwpattern)->type == ASTNode::AND) {
      (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
      (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
    }
    else {
      (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::AND, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
    }
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 6122 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 6126 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::NOT_EQUALS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 6130 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 6134 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::GREATER_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 6138 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6142 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::LESS_THAN_EQUAL, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 6150 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::PLUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 6154 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MINUS, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6162 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MULTIPLY, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 6166 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6170 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::INTEGER_DIVIDE, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6174 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) RewritePattern(ASTNode::MOD, (yyvsp[(1) - (3)].rwpattern), (yyvsp[(3) - (3)].rwpattern), MEMMGR));
  }
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 6182 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (2)].rwpattern);
  }
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 6186 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::UNARY_MINUS, (yyvsp[(2) - (2)].rwpattern), MEMMGR));
  }
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 6194 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) RewritePattern(ASTNode::PREDICATE, (yyvsp[(1) - (4)].rwpattern), (yyvsp[(3) - (4)].rwpattern), MEMMGR));
  }
    break;

  case 878:

/* Line 1455 of yacc.c  */
#line 6202 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(3) - (4)].rwpattern);
    (yyval.rwpattern)->type = ASTNode::FUNCTION;
    (yyval.rwpattern)->value = (yyvsp[(1) - (4)].str);
    LOCATION((yylsp[(1) - (4)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 879:

/* Line 1455 of yacc.c  */
#line 6210 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(2) - (3)].rwpattern);
    LOCATION((yylsp[(1) - (3)]), loc);
    (yyval.rwpattern)->setLocationInfo(&loc);
  }
    break;

  case 880:

/* Line 1455 of yacc.c  */
#line 6216 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) RewritePattern(ASTNode::EXPR_SUBSTITUTION, (yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 881:

/* Line 1455 of yacc.c  */
#line 6220 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 882:

/* Line 1455 of yacc.c  */
#line 6224 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DECIMAL, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 883:

/* Line 1455 of yacc.c  */
#line 6228 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::DOUBLE, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 884:

/* Line 1455 of yacc.c  */
#line 6232 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(AnyAtomicType::STRING, (yyvsp[(1) - (1)].str), MEMMGR));
  }
    break;

  case 885:

/* Line 1455 of yacc.c  */
#line 6239 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yyloc), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, MEMMGR));
  }
    break;

  case 887:

/* Line 1455 of yacc.c  */
#line 6247 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) RewritePattern(ASTNode::SEQUENCE, (yyvsp[(1) - (1)].rwpattern), MEMMGR));
  }
    break;

  case 888:

/* Line 1455 of yacc.c  */
#line 6251 "../src/parser/XQParser.y"
    {
    (yyval.rwpattern) = (yyvsp[(1) - (3)].rwpattern);
    (yyval.rwpattern)->children.push_back((yyvsp[(3) - (3)].rwpattern));
  }
    break;

  case 890:

/* Line 1455 of yacc.c  */
#line 6263 "../src/parser/XQParser.y"
    {
    if(!QP->_rewriteRule)
      yyerror((yylsp[(1) - (2)]), "Expression substitutions are only allowed in rewrite rules");
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQExprSubstitution((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;



/* Line 1455 of yacc.c  */
#line 12808 "../src/parser/XQParser.cpp"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 6300 "../src/parser/XQParser.y"


}  // namespace XQParser


