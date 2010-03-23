
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
#include <xqilla/ast/XQFunctionCall.hpp>
#include <xqilla/ast/XQOrderingChange.hpp>
#include <xqilla/ast/XQDocumentOrder.hpp>
#include <xqilla/ast/XQReturn.hpp>
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
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/functions/FunctionId.hpp>
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

#define REJECT_NOT_XQUERY(where,pos)      if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_VERSION11(where,pos)   if(!QP->_lexer->isVersion11()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

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

#undef yylex
#define yylex QP->_lexer->yylex
#undef yyerror
#define yyerror QP->_lexer->error

XERCES_CPP_NAMESPACE_USE;
using namespace std;

static const XMLCh sz1_0[] = { chDigit_1, chPeriod, chDigit_0, chNull };
static const XMLCh sz1_1[] = { chDigit_1, chPeriod, chDigit_1, chNull };
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
    return WRAP(pos, new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  XMLUni::fgZeroLenString, AnyAtomicType::STRING,
                  MEMMGR));
  }

  return WRAP(pos, new (MEMMGR) XQFunctionConversion(WRAP(pos, new (MEMMGR) XQSequence(MEMMGR)), seqType, MEMMGR));
}

namespace XQParser {



/* Line 189 of yacc.c  */
#line 387 "../src/parser/XQParser.cpp"

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
     _LANG_XQUERY_FULLTEXT_ = 260,
     _LANG_XQUERY_UPDATE_ = 261,
     _LANG_XQUERY_FULLTEXT_UPDATE_ = 262,
     _LANG_XSLT2_ = 263,
     _LANG_FUNCDECL_ = 264,
     _LANG_DELAYEDMODULE_ = 265,
     _LANG_FUNCTION_SIGNATURE_ = 266,
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
     _INTEGER_LITERAL_ = 310,
     _DECIMAL_LITERAL_ = 311,
     _DOUBLE_LITERAL_ = 312,
     _ATTRIBUTE_ = 313,
     _COMMENT_ = 314,
     _DOCUMENT_NODE_ = 315,
     _NAMESPACE_NODE_ = 316,
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
     _USING_ = 342,
     _NO_ = 343,
     _SENSITIVE_ = 344,
     _INSENSITIVE_ = 345,
     _DIACRITICS_ = 346,
     _WITHOUT_ = 347,
     _WITHOUT_C_ = 348,
     _STEMMING_ = 349,
     _THESAURUS_ = 350,
     _STOP_ = 351,
     _WILDCARDS_ = 352,
     _ENTIRE_ = 353,
     _CONTENT_ = 354,
     _WORD_ = 355,
     _TYPE_ = 356,
     _START_ = 357,
     _END_ = 358,
     _MOST_ = 359,
     _SKIP_ = 360,
     _COPY_ = 361,
     _VALUE_ = 362,
     _WHITESPACE_ = 363,
     _PI_CONTENT_ = 364,
     _XML_COMMENT_CONTENT_ = 365,
     _EQ_ = 366,
     _NE_ = 367,
     _LT_ = 368,
     _LE_ = 369,
     _GT_ = 370,
     _GE_ = 371,
     _AT_ = 372,
     _QUOT_ATTR_CONTENT_ = 373,
     _APOS_ATTR_CONTENT_ = 374,
     _WHITESPACE_ELEMENT_CONTENT_ = 375,
     _ELEMENT_CONTENT_ = 376,
     _AT_LM_ = 377,
     _ORDERED_ = 378,
     _UNORDERED_ = 379,
     _QNAME_ = 380,
     _XMLNS_QNAME_ = 381,
     _CONSTR_QNAME_ = 382,
     _STRING_LITERAL_ = 383,
     _VARIABLE_ = 384,
     _NCNAME_COLON_STAR_ = 385,
     _STAR_COLON_NCNAME_ = 386,
     _PI_TARGET_ = 387,
     _PRAGMA_CONTENT_ = 388,
     _RETURN_ = 389,
     _FOR_ = 390,
     _IN_ = 391,
     _LET_ = 392,
     _WHERE_ = 393,
     _COUNT_ = 394,
     _BY_ = 395,
     _ORDER_ = 396,
     _STABLE_ = 397,
     _ASCENDING_ = 398,
     _DESCENDING_ = 399,
     _EMPTY_ = 400,
     _GREATEST_ = 401,
     _LEAST_ = 402,
     _COLLATION_ = 403,
     _SOME_ = 404,
     _EVERY_ = 405,
     _SATISFIES_ = 406,
     _TYPESWITCH_ = 407,
     _CASE_ = 408,
     _CASE_S_ = 409,
     _AS_ = 410,
     _IF_ = 411,
     _THEN_ = 412,
     _ELSE_ = 413,
     _OR_ = 414,
     _AND_ = 415,
     _INSTANCE_ = 416,
     _OF_ = 417,
     _CASTABLE_ = 418,
     _TO_ = 419,
     _DIV_ = 420,
     _MOD_ = 421,
     _UNION_ = 422,
     _INTERSECT_ = 423,
     _EXCEPT_ = 424,
     _VALIDATE_ = 425,
     _CAST_ = 426,
     _TREAT_ = 427,
     _IS_ = 428,
     _PRESERVE_ = 429,
     _STRIP_ = 430,
     _NAMESPACE_ = 431,
     _ITEM_ = 432,
     _EXTERNAL_ = 433,
     _ENCODING_ = 434,
     _NO_PRESERVE_ = 435,
     _INHERIT_ = 436,
     _NO_INHERIT_ = 437,
     _DECLARE_ = 438,
     _CONSTRUCTION_ = 439,
     _ORDERING_ = 440,
     _DEFAULT_ = 441,
     _COPY_NAMESPACES_ = 442,
     _OPTION_ = 443,
     _XQUERY_ = 444,
     _VERSION_ = 445,
     _IMPORT_ = 446,
     _SCHEMA_ = 447,
     _MODULE_ = 448,
     _ELEMENT_ = 449,
     _FUNCTION_ = 450,
     _FUNCTION_EXT_ = 451,
     _SCORE_ = 452,
     _CONTAINS_ = 453,
     _WEIGHT_ = 454,
     _WINDOW_ = 455,
     _DISTANCE_ = 456,
     _OCCURS_ = 457,
     _TIMES_ = 458,
     _SAME_ = 459,
     _DIFFERENT_ = 460,
     _LOWERCASE_ = 461,
     _UPPERCASE_ = 462,
     _RELATIONSHIP_ = 463,
     _LEVELS_ = 464,
     _LANGUAGE_ = 465,
     _ANY_ = 466,
     _ALL_ = 467,
     _PHRASE_ = 468,
     _EXACTLY_ = 469,
     _FROM_ = 470,
     _WORDS_ = 471,
     _SENTENCES_ = 472,
     _PARAGRAPHS_ = 473,
     _SENTENCE_ = 474,
     _PARAGRAPH_ = 475,
     _REPLACE_ = 476,
     _MODIFY_ = 477,
     _FIRST_ = 478,
     _INSERT_ = 479,
     _BEFORE_ = 480,
     _AFTER_ = 481,
     _REVALIDATION_ = 482,
     _WITH_ = 483,
     _NODES_ = 484,
     _RENAME_ = 485,
     _LAST_ = 486,
     _DELETE_ = 487,
     _INTO_ = 488,
     _UPDATING_ = 489,
     _ID_ = 490,
     _KEY_ = 491,
     _TEMPLATE_ = 492,
     _MATCHES_ = 493,
     _NAME_ = 494,
     _CALL_ = 495,
     _APPLY_ = 496,
     _TEMPLATES_ = 497,
     _MODE_ = 498,
     _FTOR_ = 499,
     _FTAND_ = 500,
     _FTNOT_ = 501,
     _PRIVATE_ = 502,
     _PUBLIC_ = 503,
     _DETERMINISTIC_ = 504,
     _NONDETERMINISTIC_ = 505,
     _XSLT_END_ELEMENT_ = 506,
     _XSLT_STYLESHEET_ = 507,
     _XSLT_TEMPLATE_ = 508,
     _XSLT_VALUE_OF_ = 509,
     _XSLT_TEXT_ = 510,
     _XSLT_APPLY_TEMPLATES_ = 511,
     _XSLT_CALL_TEMPLATE_ = 512,
     _XSLT_WITH_PARAM_ = 513,
     _XSLT_SEQUENCE_ = 514,
     _XSLT_PARAM_ = 515,
     _XSLT_FUNCTION_ = 516,
     _XSLT_CHOOSE_ = 517,
     _XSLT_WHEN_ = 518,
     _XSLT_OTHERWISE_ = 519,
     _XSLT_IF_ = 520,
     _XSLT_VARIABLE_ = 521,
     _XSLT_COMMENT_ = 522,
     _XSLT_PI_ = 523,
     _XSLT_DOCUMENT_ = 524,
     _XSLT_ATTRIBUTE_ = 525,
     _XSLT_NAMESPACE_ = 526,
     _XSLT_ELEMENT_ = 527,
     _XSLT_ANALYZE_STRING_ = 528,
     _XSLT_MATCHING_SUBSTRING_ = 529,
     _XSLT_NON_MATCHING_SUBSTRING_ = 530,
     _XSLT_COPY_OF_ = 531,
     _XSLT_COPY_ = 532,
     _XSLT_FOR_EACH_ = 533,
     _XSLT_OUTPUT_ = 534,
     _XSLT_IMPORT_SCHEMA_ = 535,
     _XSLT_VERSION_ = 536,
     _XSLT_MODE_ = 537,
     _XSLT_NAME_ = 538,
     _XSLT_DOCTYPE_PUBLIC_ = 539,
     _XSLT_DOCTYPE_SYSTEM_ = 540,
     _XSLT_ENCODING_ = 541,
     _XSLT_MEDIA_TYPE_ = 542,
     _XSLT_NORMALIZATION_FORM_ = 543,
     _XSLT_STANDALONE_ = 544,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 545,
     _XSLT_NAMESPACE_STR_ = 546,
     _XSLT_SCHEMA_LOCATION_ = 547,
     _XSLT_TUNNEL_ = 548,
     _XSLT_REQUIRED_ = 549,
     _XSLT_OVERRIDE_ = 550,
     _XSLT_COPY_NAMESPACES_ = 551,
     _XSLT_INHERIT_NAMESPACES_ = 552,
     _XSLT_BYTE_ORDER_MARK_ = 553,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 554,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 555,
     _XSLT_INDENT_ = 556,
     _XSLT_OMIT_XML_DECLARATION_ = 557,
     _XSLT_UNDECLARE_PREFIXES_ = 558,
     _XSLT_MATCH_ = 559,
     _XSLT_AS_ = 560,
     _XSLT_SELECT_ = 561,
     _XSLT_PRIORITY_ = 562,
     _XSLT_TEST_ = 563,
     _XSLT_SEPARATOR_ = 564,
     _XSLT_NAMESPACE_A_ = 565,
     _XSLT_REGEX_ = 566,
     _XSLT_FLAGS_ = 567,
     _XSLT_METHOD_ = 568,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 569,
     _XSLT_USE_CHARACTER_MAPS_ = 570,
     _XSLT_ELEMENT_NAME_ = 571,
     _XSLT_XMLNS_ATTR_ = 572,
     _XSLT_ATTR_NAME_ = 573,
     _XSLT_TEXT_NODE_ = 574,
     _XSLT_WS_TEXT_NODE_ = 575,
     _HASH_DEFAULT_ = 576,
     _HASH_ALL_ = 577,
     _HASH_CURRENT_ = 578,
     _XML_ = 579,
     _HTML_ = 580,
     _XHTML_ = 581
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
#define _LANG_FUNCDECL_ 264
#define _LANG_DELAYEDMODULE_ 265
#define _LANG_FUNCTION_SIGNATURE_ 266
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
#define _INTEGER_LITERAL_ 310
#define _DECIMAL_LITERAL_ 311
#define _DOUBLE_LITERAL_ 312
#define _ATTRIBUTE_ 313
#define _COMMENT_ 314
#define _DOCUMENT_NODE_ 315
#define _NAMESPACE_NODE_ 316
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
#define _USING_ 342
#define _NO_ 343
#define _SENSITIVE_ 344
#define _INSENSITIVE_ 345
#define _DIACRITICS_ 346
#define _WITHOUT_ 347
#define _WITHOUT_C_ 348
#define _STEMMING_ 349
#define _THESAURUS_ 350
#define _STOP_ 351
#define _WILDCARDS_ 352
#define _ENTIRE_ 353
#define _CONTENT_ 354
#define _WORD_ 355
#define _TYPE_ 356
#define _START_ 357
#define _END_ 358
#define _MOST_ 359
#define _SKIP_ 360
#define _COPY_ 361
#define _VALUE_ 362
#define _WHITESPACE_ 363
#define _PI_CONTENT_ 364
#define _XML_COMMENT_CONTENT_ 365
#define _EQ_ 366
#define _NE_ 367
#define _LT_ 368
#define _LE_ 369
#define _GT_ 370
#define _GE_ 371
#define _AT_ 372
#define _QUOT_ATTR_CONTENT_ 373
#define _APOS_ATTR_CONTENT_ 374
#define _WHITESPACE_ELEMENT_CONTENT_ 375
#define _ELEMENT_CONTENT_ 376
#define _AT_LM_ 377
#define _ORDERED_ 378
#define _UNORDERED_ 379
#define _QNAME_ 380
#define _XMLNS_QNAME_ 381
#define _CONSTR_QNAME_ 382
#define _STRING_LITERAL_ 383
#define _VARIABLE_ 384
#define _NCNAME_COLON_STAR_ 385
#define _STAR_COLON_NCNAME_ 386
#define _PI_TARGET_ 387
#define _PRAGMA_CONTENT_ 388
#define _RETURN_ 389
#define _FOR_ 390
#define _IN_ 391
#define _LET_ 392
#define _WHERE_ 393
#define _COUNT_ 394
#define _BY_ 395
#define _ORDER_ 396
#define _STABLE_ 397
#define _ASCENDING_ 398
#define _DESCENDING_ 399
#define _EMPTY_ 400
#define _GREATEST_ 401
#define _LEAST_ 402
#define _COLLATION_ 403
#define _SOME_ 404
#define _EVERY_ 405
#define _SATISFIES_ 406
#define _TYPESWITCH_ 407
#define _CASE_ 408
#define _CASE_S_ 409
#define _AS_ 410
#define _IF_ 411
#define _THEN_ 412
#define _ELSE_ 413
#define _OR_ 414
#define _AND_ 415
#define _INSTANCE_ 416
#define _OF_ 417
#define _CASTABLE_ 418
#define _TO_ 419
#define _DIV_ 420
#define _MOD_ 421
#define _UNION_ 422
#define _INTERSECT_ 423
#define _EXCEPT_ 424
#define _VALIDATE_ 425
#define _CAST_ 426
#define _TREAT_ 427
#define _IS_ 428
#define _PRESERVE_ 429
#define _STRIP_ 430
#define _NAMESPACE_ 431
#define _ITEM_ 432
#define _EXTERNAL_ 433
#define _ENCODING_ 434
#define _NO_PRESERVE_ 435
#define _INHERIT_ 436
#define _NO_INHERIT_ 437
#define _DECLARE_ 438
#define _CONSTRUCTION_ 439
#define _ORDERING_ 440
#define _DEFAULT_ 441
#define _COPY_NAMESPACES_ 442
#define _OPTION_ 443
#define _XQUERY_ 444
#define _VERSION_ 445
#define _IMPORT_ 446
#define _SCHEMA_ 447
#define _MODULE_ 448
#define _ELEMENT_ 449
#define _FUNCTION_ 450
#define _FUNCTION_EXT_ 451
#define _SCORE_ 452
#define _CONTAINS_ 453
#define _WEIGHT_ 454
#define _WINDOW_ 455
#define _DISTANCE_ 456
#define _OCCURS_ 457
#define _TIMES_ 458
#define _SAME_ 459
#define _DIFFERENT_ 460
#define _LOWERCASE_ 461
#define _UPPERCASE_ 462
#define _RELATIONSHIP_ 463
#define _LEVELS_ 464
#define _LANGUAGE_ 465
#define _ANY_ 466
#define _ALL_ 467
#define _PHRASE_ 468
#define _EXACTLY_ 469
#define _FROM_ 470
#define _WORDS_ 471
#define _SENTENCES_ 472
#define _PARAGRAPHS_ 473
#define _SENTENCE_ 474
#define _PARAGRAPH_ 475
#define _REPLACE_ 476
#define _MODIFY_ 477
#define _FIRST_ 478
#define _INSERT_ 479
#define _BEFORE_ 480
#define _AFTER_ 481
#define _REVALIDATION_ 482
#define _WITH_ 483
#define _NODES_ 484
#define _RENAME_ 485
#define _LAST_ 486
#define _DELETE_ 487
#define _INTO_ 488
#define _UPDATING_ 489
#define _ID_ 490
#define _KEY_ 491
#define _TEMPLATE_ 492
#define _MATCHES_ 493
#define _NAME_ 494
#define _CALL_ 495
#define _APPLY_ 496
#define _TEMPLATES_ 497
#define _MODE_ 498
#define _FTOR_ 499
#define _FTAND_ 500
#define _FTNOT_ 501
#define _PRIVATE_ 502
#define _PUBLIC_ 503
#define _DETERMINISTIC_ 504
#define _NONDETERMINISTIC_ 505
#define _XSLT_END_ELEMENT_ 506
#define _XSLT_STYLESHEET_ 507
#define _XSLT_TEMPLATE_ 508
#define _XSLT_VALUE_OF_ 509
#define _XSLT_TEXT_ 510
#define _XSLT_APPLY_TEMPLATES_ 511
#define _XSLT_CALL_TEMPLATE_ 512
#define _XSLT_WITH_PARAM_ 513
#define _XSLT_SEQUENCE_ 514
#define _XSLT_PARAM_ 515
#define _XSLT_FUNCTION_ 516
#define _XSLT_CHOOSE_ 517
#define _XSLT_WHEN_ 518
#define _XSLT_OTHERWISE_ 519
#define _XSLT_IF_ 520
#define _XSLT_VARIABLE_ 521
#define _XSLT_COMMENT_ 522
#define _XSLT_PI_ 523
#define _XSLT_DOCUMENT_ 524
#define _XSLT_ATTRIBUTE_ 525
#define _XSLT_NAMESPACE_ 526
#define _XSLT_ELEMENT_ 527
#define _XSLT_ANALYZE_STRING_ 528
#define _XSLT_MATCHING_SUBSTRING_ 529
#define _XSLT_NON_MATCHING_SUBSTRING_ 530
#define _XSLT_COPY_OF_ 531
#define _XSLT_COPY_ 532
#define _XSLT_FOR_EACH_ 533
#define _XSLT_OUTPUT_ 534
#define _XSLT_IMPORT_SCHEMA_ 535
#define _XSLT_VERSION_ 536
#define _XSLT_MODE_ 537
#define _XSLT_NAME_ 538
#define _XSLT_DOCTYPE_PUBLIC_ 539
#define _XSLT_DOCTYPE_SYSTEM_ 540
#define _XSLT_ENCODING_ 541
#define _XSLT_MEDIA_TYPE_ 542
#define _XSLT_NORMALIZATION_FORM_ 543
#define _XSLT_STANDALONE_ 544
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 545
#define _XSLT_NAMESPACE_STR_ 546
#define _XSLT_SCHEMA_LOCATION_ 547
#define _XSLT_TUNNEL_ 548
#define _XSLT_REQUIRED_ 549
#define _XSLT_OVERRIDE_ 550
#define _XSLT_COPY_NAMESPACES_ 551
#define _XSLT_INHERIT_NAMESPACES_ 552
#define _XSLT_BYTE_ORDER_MARK_ 553
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 554
#define _XSLT_INCLUDE_CONTENT_TYPE_ 555
#define _XSLT_INDENT_ 556
#define _XSLT_OMIT_XML_DECLARATION_ 557
#define _XSLT_UNDECLARE_PREFIXES_ 558
#define _XSLT_MATCH_ 559
#define _XSLT_AS_ 560
#define _XSLT_SELECT_ 561
#define _XSLT_PRIORITY_ 562
#define _XSLT_TEST_ 563
#define _XSLT_SEPARATOR_ 564
#define _XSLT_NAMESPACE_A_ 565
#define _XSLT_REGEX_ 566
#define _XSLT_FLAGS_ 567
#define _XSLT_METHOD_ 568
#define _XSLT_CDATA_SECTION_ELEMENTS_ 569
#define _XSLT_USE_CHARACTER_MAPS_ 570
#define _XSLT_ELEMENT_NAME_ 571
#define _XSLT_XMLNS_ATTR_ 572
#define _XSLT_ATTR_NAME_ 573
#define _XSLT_TEXT_NODE_ 574
#define _XSLT_WS_TEXT_NODE_ 575
#define _HASH_DEFAULT_ 576
#define _HASH_ALL_ 577
#define _HASH_CURRENT_ 578
#define _XML_ 579
#define _HTML_ 580
#define _XHTML_ 581




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
#line 1095 "../src/parser/XQParser.cpp"

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
#define YYFINAL  342
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  327
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  358
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1045
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1713

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   581

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
     325,   326
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    24,
      27,    30,    39,    40,    42,    46,    49,    56,    57,    60,
      69,    71,    76,    78,    79,    82,    85,    86,    89,    92,
      95,    98,   101,   104,   109,   111,   115,   118,   122,   126,
     130,   131,   134,   137,   140,   142,   144,   146,   151,   153,
     156,   160,   163,   164,   167,   171,   173,   176,   180,   184,
     187,   190,   194,   196,   199,   203,   207,   210,   213,   217,
     219,   222,   226,   230,   233,   235,   238,   242,   245,   249,
     252,   255,   258,   261,   264,   267,   270,   273,   276,   279,
     282,   286,   289,   291,   293,   295,   297,   299,   301,   304,
     307,   309,   312,   315,   319,   323,   328,   329,   333,   336,
     337,   340,   343,   344,   347,   350,   353,   355,   357,   359,
     361,   363,   365,   367,   369,   371,   373,   375,   377,   379,
     381,   383,   385,   387,   389,   393,   395,   399,   403,   407,
     409,   411,   415,   417,   421,   425,   427,   429,   431,   432,
     435,   439,   441,   444,   445,   448,   452,   454,   457,   461,
     465,   468,   471,   475,   479,   483,   488,   490,   493,   497,
     501,   502,   506,   511,   513,   517,   521,   525,   526,   530,
     531,   535,   540,   542,   545,   549,   553,   557,   559,   563,
     567,   569,   573,   577,   581,   583,   587,   589,   593,   597,
     601,   605,   609,   611,   615,   619,   623,   625,   629,   633,
     636,   638,   642,   645,   649,   651,   654,   657,   661,   663,
     667,   671,   673,   675,   677,   679,   681,   683,   688,   695,
     697,   699,   701,   703,   705,   708,   712,   716,   720,   724,
     727,   729,   733,   737,   740,   741,   746,   749,   752,   754,
     756,   759,   762,   763,   767,   771,   775,   779,   783,   787,
     791,   795,   797,   799,   801,   803,   805,   807,   809,   812,
     815,   817,   819,   822,   825,   826,   830,   834,   838,   842,
     846,   850,   854,   858,   862,   865,   868,   870,   872,   875,
     878,   879,   883,   887,   891,   895,   899,   903,   907,   911,
     914,   917,   919,   921,   925,   930,   934,   937,   940,   943,
     946,   953,   954,   958,   962,   966,   970,   974,   978,   982,
     986,   990,   992,   994,   996,   998,  1000,  1002,  1004,  1006,
    1008,  1010,  1012,  1018,  1022,  1026,  1032,  1038,  1043,  1047,
    1051,  1055,  1061,  1067,  1073,  1075,  1077,  1079,  1081,  1086,
    1090,  1096,  1101,  1102,  1105,  1109,  1113,  1117,  1125,  1130,
    1137,  1140,  1142,  1146,  1150,  1158,  1160,  1162,  1165,  1169,
    1171,  1173,  1174,  1177,  1180,  1183,  1185,  1187,  1189,  1191,
    1192,  1195,  1199,  1201,  1205,  1209,  1211,  1215,  1217,  1219,
    1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,  1239,
    1241,  1245,  1247,  1250,  1253,  1255,  1257,  1259,  1261,  1263,
    1266,  1270,  1272,  1280,  1281,  1285,  1286,  1290,  1293,  1297,
    1299,  1305,  1311,  1314,  1318,  1322,  1327,  1331,  1333,  1337,
    1343,  1345,  1346,  1348,  1350,  1351,  1354,  1357,  1362,  1367,
    1371,  1373,  1379,  1386,  1389,  1391,  1397,  1401,  1405,  1409,
    1413,  1414,  1418,  1427,  1431,  1433,  1437,  1439,  1443,  1447,
    1448,  1453,  1457,  1461,  1465,  1469,  1473,  1477,  1481,  1485,
    1489,  1493,  1497,  1501,  1503,  1508,  1514,  1516,  1520,  1522,
    1526,  1530,  1532,  1536,  1540,  1544,  1548,  1550,  1554,  1558,
    1560,  1564,  1568,  1570,  1575,  1577,  1582,  1584,  1589,  1591,
    1596,  1598,  1601,  1604,  1606,  1608,  1610,  1612,  1617,  1623,
    1629,  1633,  1638,  1640,  1643,  1648,  1650,  1653,  1655,  1658,
    1661,  1663,  1665,  1669,  1673,  1675,  1677,  1679,  1681,  1683,
    1685,  1690,  1692,  1697,  1700,  1702,  1705,  1708,  1711,  1714,
    1717,  1720,  1723,  1726,  1729,  1731,  1734,  1736,  1739,  1742,
    1745,  1748,  1751,  1753,  1755,  1757,  1759,  1761,  1763,  1765,
    1767,  1769,  1774,  1776,  1778,  1780,  1782,  1784,  1786,  1788,
    1790,  1792,  1794,  1796,  1798,  1800,  1802,  1804,  1807,  1809,
    1813,  1816,  1818,  1823,  1828,  1832,  1837,  1841,  1843,  1845,
    1847,  1849,  1851,  1853,  1855,  1857,  1863,  1874,  1876,  1878,
    1879,  1887,  1895,  1896,  1898,  1902,  1906,  1910,  1914,  1915,
    1918,  1921,  1922,  1925,  1928,  1929,  1932,  1935,  1936,  1939,
    1942,  1943,  1946,  1949,  1952,  1955,  1959,  1960,  1962,  1966,
    1968,  1971,  1973,  1975,  1977,  1979,  1981,  1983,  1985,  1990,
    1994,  1996,  2000,  2003,  2007,  2011,  2013,  2017,  2021,  2026,
    2031,  2035,  2037,  2041,  2044,  2048,  2051,  2052,  2054,  2055,
    2058,  2061,  2065,  2066,  2068,  2070,  2072,  2074,  2078,  2080,
    2082,  2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,  2100,
    2102,  2104,  2106,  2110,  2114,  2119,  2124,  2128,  2132,  2136,
    2140,  2145,  2150,  2154,  2159,  2166,  2168,  2170,  2175,  2177,
    2181,  2186,  2193,  2201,  2203,  2205,  2210,  2212,  2214,  2216,
    2218,  2220,  2224,  2225,  2228,  2229,  2232,  2236,  2238,  2242,
    2244,  2249,  2251,  2254,  2256,  2258,  2261,  2264,  2268,  2270,
    2273,  2278,  2282,  2287,  2288,  2290,  2293,  2295,  2298,  2300,
    2301,  2305,  2308,  2312,  2316,  2321,  2323,  2327,  2331,  2334,
    2337,  2340,  2343,  2346,  2348,  2350,  2352,  2354,  2356,  2359,
    2363,  2365,  2367,  2369,  2371,  2373,  2375,  2377,  2379,  2382,
    2385,  2387,  2389,  2392,  2395,  2397,  2400,  2403,  2406,  2412,
    2418,  2421,  2422,  2426,  2429,  2434,  2439,  2446,  2451,  2455,
    2460,  2461,  2464,  2467,  2471,  2473,  2477,  2480,  2483,  2486,
    2488,  2491,  2495,  2499,  2503,  2507,  2511,  2518,  2525,  2530,
    2535,  2540,  2543,  2546,  2549,  2552,  2555,  2563,  2569,  2575,
    2582,  2586,  2588,  2593,  2595,  2597,  2599,  2601,  2603,  2605,
    2611,  2619,  2628,  2639,  2646,  2655,  2656,  2659,  2662,  2666,
    2667,  2670,  2672,  2676,  2678,  2680,  2682,  2686,  2694,  2698,
    2706,  2712,  2722,  2724,  2726,  2728,  2730,  2734,  2740,  2742,
    2744,  2748,  2753,  2757,  2762,  2764,  2766,  2771,  2777,  2784,
    2786,  2790,  2794,  2796,  2798,  2800,  2802,  2804,  2806,  2808,
    2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,  2826,  2828,
    2830,  2832,  2834,  2836,  2838,  2840,  2842,  2844,  2846,  2848,
    2850,  2852,  2854,  2856,  2858,  2860,  2862,  2864,  2866,  2868,
    2870,  2872,  2874,  2876,  2878,  2880,  2882,  2884,  2886,  2888,
    2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,  2906,  2908,
    2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,  2926,  2928,
    2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,  2946,  2948,
    2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,  2966,  2968,
    2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,  2986,  2988,
    2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,  3006,  3008,
    3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,  3026,  3028,
    3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,  3046,  3048,
    3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,  3066,  3068,
    3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,  3086,  3088,
    3090,  3092,  3094,  3096,  3098,  3100,  3102,  3104,  3106,  3108,
    3110,  3112,  3114,  3116,  3118,  3120,  3122,  3124,  3126,  3128,
    3130,  3132,  3134,  3136,  3138,  3140
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     328,     0,    -1,     3,   474,    -1,     4,   420,    -1,     5,
     425,    -1,     6,   429,    -1,     7,   433,    -1,     8,   336,
      -1,     9,   329,    -1,    10,   332,    -1,    11,   331,    -1,
     183,   467,   464,   684,   465,   470,   473,   330,    -1,    -1,
     443,    -1,   467,   465,   470,    -1,   333,   334,    -1,   193,
     176,   661,    40,   612,   443,    -1,    -1,   334,   335,    -1,
     183,   467,   464,   684,   465,   470,   473,   443,    -1,   337,
      -1,   252,   338,   339,   251,    -1,   359,    -1,    -1,   338,
     281,    -1,   338,   290,    -1,    -1,   339,   340,    -1,   339,
     344,    -1,   339,   349,    -1,   339,   351,    -1,   339,   353,
      -1,   339,   357,    -1,   341,   346,   362,   251,    -1,   253,
      -1,   341,   304,   410,    -1,   341,   283,    -1,   341,   307,
     343,    -1,   341,   282,   342,    -1,   341,   305,   590,    -1,
      -1,   342,   125,    -1,   342,   321,    -1,   342,   322,    -1,
      55,    -1,    56,    -1,    57,    -1,   345,   346,   362,   251,
      -1,   261,    -1,   345,   283,    -1,   345,   305,   590,    -1,
     345,   295,    -1,    -1,   346,   347,    -1,   348,   362,   251,
      -1,   260,    -1,   348,   283,    -1,   348,   306,   475,    -1,
     348,   305,   590,    -1,   348,   294,    -1,   348,   293,    -1,
     350,   362,   251,    -1,   260,    -1,   350,   283,    -1,   350,
     306,   475,    -1,   350,   305,   590,    -1,   350,   294,    -1,
     350,   293,    -1,   352,   362,   251,    -1,   266,    -1,   352,
     283,    -1,   352,   306,   475,    -1,   352,   305,   590,    -1,
     354,   251,    -1,   279,    -1,   354,   283,    -1,   354,   313,
     355,    -1,   354,   298,    -1,   354,   314,   356,    -1,   354,
     284,    -1,   354,   285,    -1,   354,   286,    -1,   354,   299,
      -1,   354,   300,    -1,   354,   301,    -1,   354,   287,    -1,
     354,   288,    -1,   354,   302,    -1,   354,   289,    -1,   354,
     303,    -1,   354,   315,   356,    -1,   354,   281,    -1,   324,
      -1,   325,    -1,   326,    -1,    66,    -1,   125,    -1,   125,
      -1,   356,   125,    -1,   358,   251,    -1,   280,    -1,   280,
     291,    -1,   280,   292,    -1,   280,   291,   292,    -1,   280,
     292,   291,    -1,   316,   360,   362,   251,    -1,    -1,   360,
     318,   361,    -1,   360,   317,    -1,    -1,   361,   473,    -1,
     361,   118,    -1,    -1,   362,   367,    -1,   362,   359,    -1,
     362,   363,    -1,   364,    -1,   366,    -1,   368,    -1,   372,
      -1,   377,    -1,   381,    -1,   379,    -1,   390,    -1,   392,
      -1,   394,    -1,   396,    -1,   398,    -1,   400,    -1,   402,
      -1,   386,    -1,   404,    -1,   406,    -1,   408,    -1,   365,
     362,   251,    -1,   254,    -1,   365,   306,   475,    -1,   365,
     309,   361,    -1,   255,   367,   251,    -1,   319,    -1,   320,
      -1,   369,   371,   251,    -1,   256,    -1,   369,   306,   475,
      -1,   369,   282,   370,    -1,   125,    -1,   321,    -1,   323,
      -1,    -1,   371,   375,    -1,   373,   374,   251,    -1,   257,
      -1,   373,   283,    -1,    -1,   374,   375,    -1,   376,   362,
     251,    -1,   258,    -1,   376,   283,    -1,   376,   306,   475,
      -1,   376,   305,   590,    -1,   376,   293,    -1,   378,   251,
      -1,   259,   306,   475,    -1,   380,   362,   251,    -1,   265,
     308,   475,    -1,   262,   382,   385,   251,    -1,   383,    -1,
     382,   383,    -1,   384,   362,   251,    -1,   263,   308,   475,
      -1,    -1,   264,   362,   251,    -1,   387,   388,   389,   251,
      -1,   273,    -1,   387,   306,   475,    -1,   387,   311,   361,
      -1,   387,   312,   361,    -1,    -1,   274,   362,   251,    -1,
      -1,   275,   362,   251,    -1,   391,   362,   251,   362,    -1,
     266,    -1,   391,   283,    -1,   391,   306,   475,    -1,   391,
     305,   590,    -1,   393,   362,   251,    -1,   267,    -1,   393,
     306,   475,    -1,   395,   362,   251,    -1,   268,    -1,   395,
     283,   361,    -1,   395,   306,   475,    -1,   397,   362,   251,
      -1,   269,    -1,   399,   362,   251,    -1,   270,    -1,   399,
     283,   361,    -1,   399,   310,   361,    -1,   399,   306,   475,
      -1,   399,   309,   361,    -1,   401,   362,   251,    -1,   271,
      -1,   401,   283,   361,    -1,   401,   306,   475,    -1,   403,
     362,   251,    -1,   272,    -1,   403,   283,   361,    -1,   403,
     310,   361,    -1,   405,   251,    -1,   276,    -1,   405,   306,
     475,    -1,   405,   296,    -1,   407,   362,   251,    -1,   277,
      -1,   407,   296,    -1,   407,   297,    -1,   409,   362,   251,
      -1,   278,    -1,   409,   306,   475,    -1,   410,    15,   411,
      -1,   411,    -1,   416,    -1,    39,    -1,   413,    -1,    39,
      -1,    33,    -1,   235,    43,   414,    44,    -1,   236,    43,
     660,    36,   415,    44,    -1,   660,    -1,   548,    -1,   546,
      -1,   548,    -1,   417,    -1,   412,   417,    -1,   413,    39,
     417,    -1,   413,    33,   417,    -1,   416,    39,   417,    -1,
     416,    33,   417,    -1,   418,   419,    -1,   541,    -1,    74,
      22,   541,    -1,    58,    22,   541,    -1,    23,   541,    -1,
      -1,   419,    24,   475,    25,    -1,   434,   421,    -1,   434,
     422,    -1,   421,    -1,   422,    -1,   423,   474,    -1,   439,
     423,    -1,    -1,   423,   424,   443,    -1,   423,   442,   443,
      -1,   423,   444,   443,    -1,   423,   446,   443,    -1,   423,
     460,   443,    -1,   423,   463,   443,    -1,   423,   663,   443,
      -1,   423,   447,   443,    -1,   445,    -1,   454,    -1,   455,
      -1,   462,    -1,   449,    -1,   450,    -1,   451,    -1,   434,
     426,    -1,   434,   427,    -1,   426,    -1,   427,    -1,   428,
     474,    -1,   439,   428,    -1,    -1,   428,   424,   443,    -1,
     428,   442,   443,    -1,   428,   444,   443,    -1,   428,   446,
     443,    -1,   428,   460,   443,    -1,   428,   463,   443,    -1,
     428,   663,   443,    -1,   428,   447,   443,    -1,   428,   448,
     443,    -1,   434,   430,    -1,   434,   431,    -1,   430,    -1,
     431,    -1,   432,   474,    -1,   439,   432,    -1,    -1,   432,
     441,   443,    -1,   432,   442,   443,    -1,   432,   444,   443,
      -1,   432,   446,   443,    -1,   432,   460,   443,    -1,   432,
     463,   443,    -1,   432,   663,   443,    -1,   432,   447,   443,
      -1,   434,   437,    -1,   434,   438,    -1,   437,    -1,   438,
      -1,   189,   435,   443,    -1,   189,   435,   436,   443,    -1,
     189,   436,   443,    -1,   190,   128,    -1,   179,   128,    -1,
     440,   474,    -1,   439,   440,    -1,   193,   176,   661,    40,
     612,   443,    -1,    -1,   440,   441,   443,    -1,   440,   442,
     443,    -1,   440,   444,   443,    -1,   440,   446,   443,    -1,
     440,   460,   443,    -1,   440,   463,   443,    -1,   440,   663,
     443,    -1,   440,   447,   443,    -1,   440,   448,   443,    -1,
     445,    -1,   454,    -1,   455,    -1,   462,    -1,   449,    -1,
     450,    -1,   647,    -1,   451,    -1,   456,    -1,   459,    -1,
      53,    -1,   183,   176,   661,    40,   612,    -1,   183,    68,
     174,    -1,   183,    68,   175,    -1,   183,   186,   194,   176,
     612,    -1,   183,   186,   464,   176,   612,    -1,   183,   188,
     683,   128,    -1,   183,    69,   630,    -1,   183,   185,   123,
      -1,   183,   185,   124,    -1,   183,   186,   141,   145,   146,
      -1,   183,   186,   141,   145,   147,    -1,   183,   187,   452,
      36,   453,    -1,   174,    -1,   180,    -1,   181,    -1,   182,
      -1,   183,   186,   148,   612,    -1,   183,    70,   612,    -1,
     191,   192,   458,   612,   457,    -1,   191,   192,   612,   457,
      -1,    -1,   117,   612,    -1,   457,    36,   612,    -1,   176,
     661,    40,    -1,   186,   194,   176,    -1,   191,   193,   176,
     661,    40,   612,   457,    -1,   191,   193,   612,   457,    -1,
     183,   129,    12,   549,   589,   461,    -1,    13,   476,    -1,
     178,    -1,   183,   184,   174,    -1,   183,   184,   175,    -1,
     183,   467,   464,   684,   465,   470,   466,    -1,   195,    -1,
     196,    -1,    43,    44,    -1,    43,   471,    44,    -1,   473,
      -1,   178,    -1,    -1,   467,   468,    -1,   467,   469,    -1,
     467,   234,    -1,   247,    -1,   248,    -1,   249,    -1,   250,
      -1,    -1,   155,   590,    -1,   471,    36,   472,    -1,   472,
      -1,    12,   549,   589,    -1,    51,   475,    52,    -1,   475,
      -1,   475,    36,   476,    -1,   476,    -1,   477,    -1,   497,
      -1,   500,    -1,   506,    -1,   648,    -1,   650,    -1,   653,
      -1,   652,    -1,   654,    -1,   507,    -1,   669,    -1,   670,
      -1,   478,   134,   476,    -1,   479,    -1,   478,   491,    -1,
     478,   480,    -1,   481,    -1,   486,    -1,   479,    -1,   489,
      -1,   490,    -1,   135,   482,    -1,   482,    36,   483,    -1,
     483,    -1,    12,   549,   589,   484,   485,   136,   476,    -1,
      -1,   117,    12,   549,    -1,    -1,   197,    12,   549,    -1,
     137,   487,    -1,   487,    36,   488,    -1,   488,    -1,    12,
     549,   589,    13,   476,    -1,   197,    12,   549,    13,   476,
      -1,   138,   476,    -1,   139,    12,   549,    -1,   141,   140,
     492,    -1,   142,   141,   140,   492,    -1,   492,    36,   493,
      -1,   493,    -1,   494,   495,   496,    -1,   494,   495,   496,
     148,   612,    -1,   476,    -1,    -1,   143,    -1,   144,    -1,
      -1,   145,   146,    -1,   145,   147,    -1,   149,   498,   151,
     476,    -1,   150,   498,   151,   476,    -1,   498,    36,   499,
      -1,   499,    -1,    12,   549,   589,   136,   476,    -1,   152,
      43,   475,    44,   501,   502,    -1,   501,   503,    -1,   503,
      -1,   186,    12,   549,   134,   476,    -1,   186,   134,   476,
      -1,   504,   134,   476,    -1,   153,   505,   590,    -1,   504,
      15,   590,    -1,    -1,    12,   549,   155,    -1,   156,    43,
     475,    44,   157,   476,   158,   476,    -1,   507,   159,   508,
      -1,   508,    -1,   508,   160,   509,    -1,   509,    -1,   511,
      40,   511,    -1,   511,    16,   511,    -1,    -1,   511,    27,
     510,   511,    -1,   511,    17,   511,    -1,   511,    18,   511,
      -1,   511,    19,   511,    -1,   511,   111,   511,    -1,   511,
     112,   511,    -1,   511,   113,   511,    -1,   511,   114,   511,
      -1,   511,   115,   511,    -1,   511,   116,   511,    -1,   511,
     173,   511,    -1,   511,    20,   511,    -1,   511,    21,   511,
      -1,   511,    -1,   512,   198,    66,   613,    -1,   512,   198,
      66,   613,   646,    -1,   512,    -1,   513,   164,   513,    -1,
     513,    -1,   513,    37,   514,    -1,   513,    38,   514,    -1,
     514,    -1,   514,    14,   515,    -1,   514,   165,   515,    -1,
     514,    73,   515,    -1,   514,   166,   515,    -1,   515,    -1,
     515,    15,   516,    -1,   515,   167,   516,    -1,   516,    -1,
     516,   168,   517,    -1,   516,   169,   517,    -1,   517,    -1,
     518,   161,   162,   590,    -1,   518,    -1,   519,   172,   155,
     590,    -1,   519,    -1,   520,   163,   155,   587,    -1,   520,
      -1,   521,   171,   155,   587,    -1,   521,    -1,    38,   521,
      -1,    37,   521,    -1,   522,    -1,   523,    -1,   528,    -1,
     524,    -1,   170,    51,   475,    52,    -1,   170,    71,    51,
     475,    52,    -1,   170,    72,    51,   475,    52,    -1,   525,
      51,    52,    -1,   525,    51,   475,    52,    -1,   526,    -1,
     525,   526,    -1,    35,   562,   683,   527,    -1,   133,    -1,
     108,   133,    -1,   529,    -1,   529,   530,    -1,    33,   530,
      -1,   530,    -1,    39,    -1,   530,    39,   531,    -1,   530,
      33,   531,    -1,   531,    -1,   532,    -1,   544,    -1,   533,
      -1,   534,    -1,   535,    -1,   533,    24,   475,    25,    -1,
     538,    -1,   534,    24,   475,    25,    -1,   536,   541,    -1,
     537,    -1,    74,    22,    -1,    75,    22,    -1,    58,    22,
      -1,    76,    22,    -1,    77,    22,    -1,    78,    22,    -1,
      79,    22,    -1,   176,    22,    -1,    23,   541,    -1,   541,
      -1,   539,   541,    -1,   540,    -1,    80,    22,    -1,    81,
      22,    -1,    82,    22,    -1,    83,    22,    -1,    84,    22,
      -1,    42,    -1,   594,    -1,   542,    -1,   662,    -1,   543,
      -1,    14,    -1,   130,    -1,   131,    -1,   545,    -1,   544,
      24,   475,    25,    -1,   677,    -1,   546,    -1,   548,    -1,
     550,    -1,   551,    -1,   554,    -1,   557,    -1,   552,    -1,
     553,    -1,   674,    -1,   547,    -1,   660,    -1,   657,    -1,
     658,    -1,   659,    -1,    12,   549,    -1,   683,    -1,    43,
     475,    44,    -1,    43,    44,    -1,    41,    -1,   123,    51,
     475,    52,    -1,   124,    51,   475,    52,    -1,   684,    43,
      44,    -1,   684,    43,   555,    44,    -1,   555,    36,   556,
      -1,   556,    -1,   476,    -1,    26,    -1,   558,    -1,   574,
      -1,   559,    -1,   570,    -1,   572,    -1,    27,   560,   561,
     562,    45,    -1,    27,   560,   561,   562,    28,   569,    34,
     560,   562,    29,    -1,   125,    -1,   126,    -1,    -1,   561,
     108,   125,   562,    46,   562,   563,    -1,   561,   108,   126,
     562,    46,   562,   564,    -1,    -1,   108,    -1,    47,   565,
      48,    -1,    49,   567,    50,    -1,    47,   566,    48,    -1,
      49,   568,    50,    -1,    -1,   565,   473,    -1,   565,   118,
      -1,    -1,   566,   473,    -1,   566,   118,    -1,    -1,   567,
     473,    -1,   567,   119,    -1,    -1,   568,   473,    -1,   568,
     119,    -1,    -1,   569,   558,    -1,   569,   473,    -1,   569,
     121,    -1,   569,   120,    -1,    31,   571,    32,    -1,    -1,
     110,    -1,    30,   132,   573,    -1,   109,    -1,   108,   109,
      -1,   575,    -1,   576,    -1,   579,    -1,   581,    -1,   582,
      -1,   583,    -1,   584,    -1,    85,    51,   475,    52,    -1,
     194,   577,   578,    -1,   127,    -1,    51,   475,    52,    -1,
      51,    52,    -1,    51,   475,    52,    -1,    58,   580,   578,
      -1,   127,    -1,    51,   475,    52,    -1,   176,   585,   578,
      -1,    66,    51,   475,    52,    -1,    59,    51,   475,    52,
      -1,    63,   585,   586,    -1,   127,    -1,    51,   475,    52,
      -1,    51,    52,    -1,    51,   475,    52,    -1,   593,   588,
      -1,    -1,    26,    -1,    -1,   155,   590,    -1,   592,   591,
      -1,    67,    43,    44,    -1,    -1,    14,    -1,    37,    -1,
      26,    -1,   593,    -1,   177,    43,    44,    -1,   594,    -1,
     678,    -1,   682,    -1,   662,    -1,   596,    -1,   605,    -1,
     601,    -1,   607,    -1,   603,    -1,   600,    -1,   598,    -1,
     597,    -1,   599,    -1,   595,    -1,    62,    43,    44,    -1,
      60,    43,    44,    -1,    60,    43,   605,    44,    -1,    60,
      43,   607,    44,    -1,    66,    43,    44,    -1,    59,    43,
      44,    -1,    61,    43,    44,    -1,    63,    43,    44,    -1,
      63,    43,   661,    44,    -1,    63,    43,   128,    44,    -1,
      58,    43,    44,    -1,    58,    43,   602,    44,    -1,    58,
      43,   602,    36,   611,    44,    -1,   609,    -1,    14,    -1,
      64,    43,   604,    44,    -1,   609,    -1,   194,    43,    44,
      -1,   194,    43,   606,    44,    -1,   194,    43,   606,    36,
     611,    44,    -1,   194,    43,   606,    36,   611,    26,    44,
      -1,   610,    -1,    14,    -1,    65,    43,   608,    44,    -1,
     610,    -1,   662,    -1,   662,    -1,   662,    -1,   128,    -1,
     616,   615,   614,    -1,    -1,   199,   512,    -1,    -1,   615,
     627,    -1,   616,   244,   617,    -1,   617,    -1,   617,   245,
     618,    -1,   618,    -1,   618,    86,   136,   619,    -1,   619,
      -1,   246,   620,    -1,   620,    -1,   621,    -1,   621,   630,
      -1,   622,   625,    -1,    43,   613,    44,    -1,   623,    -1,
     546,   624,    -1,    51,   475,    52,   624,    -1,   525,    51,
      52,    -1,   525,    51,   613,    52,    -1,    -1,   211,    -1,
     211,   100,    -1,   212,    -1,   212,   216,    -1,   213,    -1,
      -1,   202,   626,   203,    -1,   214,   513,    -1,   122,   147,
     513,    -1,   122,   104,   513,    -1,   215,   513,   164,   513,
      -1,   123,    -1,   200,   513,   628,    -1,   201,   626,   628,
      -1,   204,   629,    -1,   205,   629,    -1,   117,   102,    -1,
     117,   103,    -1,    98,    99,    -1,   216,    -1,   217,    -1,
     218,    -1,   219,    -1,   220,    -1,    87,   631,    -1,   630,
      87,   631,    -1,   643,    -1,   644,    -1,   635,    -1,   634,
      -1,   632,    -1,   633,    -1,   638,    -1,   645,    -1,   154,
      90,    -1,   154,    89,    -1,   206,    -1,   207,    -1,    91,
      90,    -1,    91,    89,    -1,    94,    -1,    88,    94,    -1,
      95,   637,    -1,    95,   186,    -1,    95,    43,   637,   636,
      44,    -1,    95,    43,   186,   636,    44,    -1,    88,    95,
      -1,    -1,   636,    36,   637,    -1,   117,   612,    -1,   117,
     612,   208,   660,    -1,   117,   612,   626,   209,    -1,   117,
     612,   208,   660,   626,   209,    -1,    96,   216,   640,   639,
      -1,    88,    96,   216,    -1,    96,   216,   186,   639,    -1,
      -1,   639,   642,    -1,   117,   612,    -1,    43,   641,    44,
      -1,   660,    -1,   641,    36,   660,    -1,   167,   640,    -1,
     169,   640,    -1,   210,   660,    -1,    97,    -1,    88,    97,
      -1,   188,   683,   128,    -1,    93,    99,   515,    -1,   183,
     227,    72,    -1,   183,   227,    71,    -1,   183,   227,   105,
      -1,   649,   476,   155,   223,   233,   476,    -1,   649,   476,
     155,   231,   233,   476,    -1,   649,   476,   233,   476,    -1,
     649,   476,   226,   476,    -1,   649,   476,   225,   476,    -1,
     224,    62,    -1,   224,   229,    -1,   651,   476,    -1,   232,
      62,    -1,   232,   229,    -1,   221,   107,   162,    62,   476,
     228,   476,    -1,   221,    62,   476,   228,   476,    -1,   230,
      62,   476,   155,   476,    -1,   106,   655,   222,   476,   134,
     476,    -1,   655,    36,   656,    -1,   656,    -1,    12,   549,
      13,   476,    -1,    55,    -1,    56,    -1,    57,    -1,   128,
      -1,   683,    -1,   683,    -1,   183,   237,   239,   683,   473,
      -1,   183,   237,   239,   683,   665,   664,   473,    -1,   183,
     237,   239,   683,   666,   238,   410,   473,    -1,   183,   237,
     239,   683,   666,   238,   410,   665,   664,   473,    -1,   183,
     237,   666,   238,   410,   473,    -1,   183,   237,   666,   238,
     410,   665,   664,   473,    -1,    -1,   155,   590,    -1,    43,
      44,    -1,    43,   471,    44,    -1,    -1,   243,   667,    -1,
     668,    -1,   667,    36,   668,    -1,   125,    -1,   321,    -1,
     322,    -1,   240,   237,   683,    -1,   240,   237,   683,   228,
      43,   672,    44,    -1,   241,   242,   476,    -1,   241,   242,
     476,   228,    43,   672,    44,    -1,   241,   242,   476,   243,
     671,    -1,   241,   242,   476,   243,   671,   228,    43,   672,
      44,    -1,   683,    -1,   321,    -1,   323,    -1,   673,    -1,
     672,    36,   673,    -1,    12,   549,   589,    13,   476,    -1,
     675,    -1,   676,    -1,   684,    54,    55,    -1,   196,   465,
     589,   473,    -1,   544,    43,    44,    -1,   544,    43,   555,
      44,    -1,   679,    -1,   680,    -1,   196,    43,    14,    44,
      -1,   196,    43,    44,   155,   590,    -1,   196,    43,   681,
      44,   155,   590,    -1,   590,    -1,   681,    36,   590,    -1,
      43,   592,    44,    -1,   684,    -1,    58,    -1,    59,    -1,
      60,    -1,   194,    -1,   177,    -1,   156,    -1,    62,    -1,
      63,    -1,    64,    -1,    65,    -1,    66,    -1,   152,    -1,
      67,    -1,   196,    -1,    61,    -1,   125,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    94,    -1,    95,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,
     107,    -1,   111,    -1,   112,    -1,   113,    -1,   114,    -1,
     115,    -1,   116,    -1,   117,    -1,   129,    -1,   134,    -1,
     135,    -1,   136,    -1,   137,    -1,   138,    -1,   140,    -1,
     141,    -1,   142,    -1,   143,    -1,   144,    -1,   145,    -1,
     146,    -1,   147,    -1,   148,    -1,   149,    -1,   150,    -1,
     151,    -1,   153,    -1,   155,    -1,   157,    -1,   158,    -1,
     159,    -1,   160,    -1,   161,    -1,   162,    -1,   163,    -1,
     164,    -1,   165,    -1,   166,    -1,   167,    -1,   168,    -1,
     169,    -1,   170,    -1,   171,    -1,   172,    -1,   173,    -1,
     174,    -1,   175,    -1,   176,    -1,   178,    -1,   179,    -1,
     180,    -1,   181,    -1,   182,    -1,   183,    -1,   184,    -1,
     185,    -1,   186,    -1,   187,    -1,   188,    -1,   190,    -1,
     191,    -1,   192,    -1,   195,    -1,   197,    -1,    87,    -1,
      88,    -1,   198,    -1,   199,    -1,   200,    -1,   201,    -1,
     202,    -1,   203,    -1,   204,    -1,   205,    -1,   206,    -1,
     207,    -1,   208,    -1,   209,    -1,   210,    -1,   211,    -1,
     212,    -1,   213,    -1,   214,    -1,   215,    -1,   216,    -1,
     217,    -1,   218,    -1,   219,    -1,   220,    -1,   221,    -1,
     222,    -1,   223,    -1,   224,    -1,   225,    -1,   226,    -1,
     227,    -1,   228,    -1,   229,    -1,   230,    -1,   231,    -1,
     232,    -1,   233,    -1,   234,    -1,   123,    -1,   124,    -1,
     235,    -1,   236,    -1,   237,    -1,   238,    -1,   239,    -1,
     240,    -1,   241,    -1,   242,    -1,   243,    -1,   244,    -1,
     245,    -1,   246,    -1,   247,    -1,   248,    -1,   249,    -1,
     250,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   756,   756,   758,   759,   760,   761,   763,   765,   766,
     767,   771,   779,   779,   782,   791,   802,   840,   843,   849,
     885,   916,   919,   941,   943,   947,   954,   956,   957,   958,
     959,   960,   961,   965,   984,   989,   994,  1001,  1006,  1011,
    1020,  1023,  1029,  1034,  1041,  1041,  1041,  1044,  1057,  1062,
    1069,  1074,  1083,  1086,  1094,  1121,  1125,  1132,  1138,  1143,
    1148,  1157,  1181,  1185,  1192,  1197,  1202,  1207,  1218,  1236,
    1240,  1247,  1252,  1260,  1285,  1288,  1291,  1294,  1297,  1300,
    1303,  1306,  1309,  1312,  1315,  1318,  1321,  1324,  1327,  1330,
    1333,  1336,  1342,  1343,  1344,  1345,  1346,  1358,  1361,  1366,
    1369,  1374,  1379,  1387,  1395,  1406,  1417,  1420,  1427,  1437,
    1440,  1445,  1456,  1459,  1464,  1469,  1477,  1478,  1479,  1480,
    1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,  1489,  1490,
    1491,  1492,  1493,  1494,  1498,  1516,  1520,  1525,  1534,  1540,
    1540,  1543,  1563,  1567,  1572,  1580,  1585,  1589,  1597,  1600,
    1608,  1621,  1625,  1636,  1639,  1647,  1665,  1669,  1676,  1681,
    1686,  1694,  1700,  1708,  1716,  1723,  1737,  1741,  1755,  1764,
    1772,  1775,  1782,  1817,  1821,  1826,  1832,  1842,  1845,  1853,
    1856,  1863,  1881,  1885,  1892,  1897,  1905,  1923,  1927,  1935,
    1957,  1961,  1968,  1976,  1985,  1993,  2030,  2034,  2041,  2048,
    2057,  2066,  2093,  2097,  2104,  2116,  2142,  2146,  2153,  2163,
    2175,  2179,  2184,  2193,  2206,  2210,  2215,  2224,  2238,  2242,
    2255,  2260,  2272,  2276,  2284,  2297,  2305,  2318,  2325,  2339,
    2339,  2342,  2342,  2364,  2368,  2372,  2390,  2408,  2418,  2432,
    2440,  2446,  2452,  2458,  2470,  2473,  2487,  2488,  2489,  2490,
    2494,  2497,  2501,  2503,  2507,  2511,  2515,  2519,  2523,  2529,
    2535,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2563,  2564,
    2565,  2566,  2570,  2573,  2577,  2579,  2583,  2587,  2591,  2595,
    2599,  2605,  2611,  2615,  2626,  2627,  2628,  2629,  2633,  2636,
    2640,  2642,  2646,  2650,  2654,  2658,  2662,  2668,  2674,  2685,
    2686,  2687,  2688,  2694,  2695,  2696,  2700,  2720,  2737,  2740,
    2744,  2756,  2758,  2762,  2766,  2770,  2774,  2778,  2784,  2790,
    2794,  2808,  2809,  2810,  2811,  2812,  2813,  2814,  2815,  2819,
    2819,  2822,  2826,  2834,  2839,  2848,  2853,  2862,  2922,  2930,
    2935,  2944,  2949,  2958,  2968,  2972,  2980,  2984,  2992,  3008,
    3017,  3029,  3038,  3041,  3046,  3055,  3059,  3067,  3077,  3089,
    3096,  3100,  3108,  3113,  3122,  3130,  3130,  3133,  3137,  3145,
    3146,  3155,  3158,  3171,  3184,  3194,  3194,  3197,  3197,  3201,
    3204,  3212,  3217,  3227,  3235,  3243,  3256,  3271,  3278,  3279,
    3280,  3281,  3282,  3283,  3284,  3285,  3286,  3287,  3288,  3289,
    3294,  3338,  3339,  3352,  3359,  3359,  3362,  3362,  3362,  3367,
    3374,  3378,  3382,  3394,  3397,  3408,  3411,  3421,  3428,  3432,
    3436,  3440,  3453,  3461,  3469,  3474,  3482,  3486,  3492,  3499,
    3514,  3531,  3534,  3538,  3546,  3554,  3558,  3567,  3575,  3586,
    3590,  3594,  3605,  3612,  3621,  3625,  3629,  3637,  3655,  3660,
    3670,  3673,  3681,  3689,  3698,  3703,  3712,  3722,  3726,  3730,
    3730,  3734,  3738,  3742,  3746,  3750,  3754,  3758,  3762,  3766,
    3770,  3774,  3778,  3782,  3787,  3791,  3795,  3800,  3807,  3812,
    3816,  3820,  3825,  3829,  3833,  3837,  3841,  3846,  3850,  3854,
    3859,  3863,  3867,  3872,  3889,  3894,  3899,  3904,  3908,  3913,
    3917,  3922,  3928,  3934,  3939,  3940,  3941,  3949,  3953,  3957,
    3965,  3972,  3981,  3981,  3985,  4005,  4006,  4014,  4015,  4021,
    4042,  4046,  4060,  4066,  4079,  4083,  4083,  4087,  4088,  4097,
    4098,  4104,  4105,  4114,  4126,  4137,  4141,  4145,  4149,  4153,
    4157,  4161,  4165,  4173,  4181,  4198,  4206,  4215,  4219,  4223,
    4227,  4231,  4239,  4251,  4256,  4261,  4268,  4273,  4280,  4287,
    4299,  4300,  4304,  4310,  4311,  4312,  4313,  4314,  4315,  4316,
    4317,  4318,  4322,  4322,  4325,  4325,  4325,  4329,  4336,  4340,
    4344,  4352,  4360,  4370,  4380,  4384,  4407,  4412,  4422,  4423,
    4432,  4436,  4445,  4445,  4445,  4449,  4455,  4464,  4464,  4469,
    4472,  4481,  4492,  4492,  4497,  4501,  4508,  4512,  4523,  4526,
    4531,  4542,  4545,  4549,  4563,  4566,  4571,  4582,  4585,  4589,
    4607,  4610,  4615,  4620,  4627,  4640,  4654,  4657,  4662,  4681,
    4682,  4696,  4697,  4698,  4699,  4700,  4701,  4702,  4707,  4715,
    4723,  4727,  4735,  4739,  4748,  4755,  4759,  4769,  4777,  4785,
    4793,  4800,  4810,  4817,  4821,  4829,  4840,  4843,  4852,  4855,
    4865,  4872,  4882,  4883,  4885,  4887,  4893,  4897,  4901,  4902,
    4903,  4907,  4919,  4920,  4921,  4922,  4923,  4924,  4925,  4926,
    4927,  4928,  4933,  4941,  4945,  4950,  4959,  4967,  4975,  4984,
    4988,  4992,  5000,  5004,  5008,  5016,  5017,  5025,  5033,  5038,
    5042,  5046,  5050,  5059,  5060,  5068,  5075,  5078,  5081,  5084,
    5088,  5100,  5116,  5118,  5125,  5128,  5137,  5149,  5154,  5166,
    5171,  5175,  5180,  5185,  5190,  5191,  5200,  5205,  5209,  5215,
    5219,  5227,  5232,  5242,  5245,  5249,  5253,  5257,  5261,  5269,
    5271,  5282,  5288,  5294,  5300,  5315,  5319,  5323,  5327,  5331,
    5335,  5339,  5343,  5351,  5355,  5359,  5367,  5371,  5379,  5380,
    5392,  5393,  5394,  5395,  5396,  5397,  5398,  5399,  5407,  5411,
    5415,  5419,  5428,  5432,  5440,  5444,  5454,  5458,  5462,  5466,
    5470,  5478,  5480,  5487,  5491,  5495,  5499,  5509,  5513,  5517,
    5525,  5527,  5535,  5539,  5546,  5550,  5558,  5562,  5570,  5578,
    5582,  5590,  5597,  5605,  5610,  5615,  5627,  5631,  5635,  5639,
    5643,  5649,  5649,  5654,  5660,  5660,  5665,  5669,  5679,  5687,
    5694,  5699,  5707,  5716,  5728,  5740,  5753,  5764,  5773,  5785,
    5790,  5795,  5801,  5807,  5813,  5823,  5826,  5834,  5838,  5846,
    5850,  5858,  5863,  5872,  5876,  5880,  5888,  5892,  5900,  5904,
    5908,  5912,  5920,  5924,  5928,  5936,  5941,  5951,  5964,  5964,
    5968,  5976,  5987,  5992,  6016,  6016,  6020,  6028,  6032,  6039,
    6044,  6053,  6062,  6062,  6062,  6062,  6062,  6062,  6062,  6062,
    6063,  6063,  6063,  6063,  6063,  6063,  6064,  6064,  6068,  6068,
    6068,  6068,  6068,  6068,  6068,  6068,  6068,  6068,  6069,  6069,
    6069,  6069,  6069,  6069,  6069,  6070,  6070,  6070,  6070,  6070,
    6070,  6070,  6070,  6071,  6071,  6071,  6071,  6071,  6071,  6071,
    6071,  6071,  6071,  6071,  6072,  6072,  6072,  6072,  6072,  6072,
    6072,  6072,  6072,  6072,  6072,  6072,  6073,  6073,  6073,  6073,
    6073,  6073,  6073,  6073,  6073,  6073,  6074,  6074,  6074,  6074,
    6074,  6074,  6074,  6074,  6074,  6074,  6074,  6074,  6075,  6075,
    6075,  6075,  6075,  6075,  6075,  6075,  6075,  6075,  6075,  6075,
    6076,  6076,  6076,  6076,  6076,  6076,  6076,  6076,  6076,  6077,
    6077,  6077,  6077,  6077,  6077,  6077,  6077,  6078,  6078,  6078,
    6078,  6078,  6078,  6078,  6078,  6078,  6078,  6078,  6079,  6079,
    6079,  6079,  6079,  6079,  6079,  6079,  6079,  6080,  6080,  6080,
    6080,  6080,  6080,  6080,  6080,  6080,  6080,  6081,  6081,  6081,
    6081,  6081,  6081,  6081,  6081,  6081,  6081,  6081,  6082,  6082,
    6082,  6082,  6082,  6082,  6082,  6082,  6082,  6082,  6082,  6083,
    6083,  6083,  6083,  6083,  6083,  6083
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
  "\"<Language: Function Declaration>\"", "\"<Language: Delayed Module>\"",
  "\"<Language: Function Signature>\"", "\"$\"", "\":=\"", "\"*\"",
  "\"|\"", "\"!=\"", "\"<=\"", "\"> (comparison operator)\"", "\">=\"",
  "\"<<\"", "\">>\"", "\"::\"", "\"@\"", "\"[\"", "\"]\"", "\"?\"",
  "\"<\"", "\"> (start tag close)\"", "\"> (end tag close)\"", "\"<?\"",
  "\"<!--\"", "\"-->\"", "\"//\"", "\"</\"", "\"(#\"", "\",\"", "\"+\"",
  "\"-\"", "\"/\"", "\"= (comparison operator)\"", "\".\"", "\"..\"",
  "\"(\"", "\")\"", "\"/>\"", "\"=\"", "\"\\\" (open)\"",
  "\"\\\" (close)\"", "\"' (open)\"", "\"' (close)\"", "\"{\"", "\"}\"",
  "\";\"", "\"#\"", "\"<integer literal>\"", "\"<decimal literal>\"",
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
  "\"<computed constructor qualified name>\"", "\"'...'\"", "\"variable\"",
  "\"<NCName>:*\"", "\"*:<NCName>\"",
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
  "\"function\"", "\"function (ext)\"", "\"score\"", "\"contains\"",
  "\"weight\"", "\"window\"", "\"distance\"", "\"occurs\"", "\"times\"",
  "\"same\"", "\"different\"", "\"lowercase\"", "\"uppercase\"",
  "\"relationship\"", "\"levels\"", "\"language\"", "\"any\"", "\"all\"",
  "\"phrase\"", "\"exactly\"", "\"from\"", "\"words\"", "\"sentences\"",
  "\"paragraphs\"", "\"sentence\"", "\"paragraph\"", "\"replace\"",
  "\"modify\"", "\"first\"", "\"insert\"", "\"before\"", "\"after\"",
  "\"revalidation\"", "\"with\"", "\"nodes\"", "\"rename\"", "\"last\"",
  "\"delete\"", "\"into\"", "\"updating\"", "\"id\"", "\"key\"",
  "\"template\"", "\"matches\"", "\"name\"", "\"call\"", "\"apply\"",
  "\"templates\"", "\"mode\"", "\"ftor\"", "\"ftand\"", "\"ftnot\"",
  "\"private\"", "\"public\"", "\"deterministic\"", "\"nondeterministic\"",
  "\"<XSLT end element>\"", "\"<xsl:stylesheet...\"",
  "\"<xsl:template...\"", "\"<xsl:value-of...\"", "\"<xsl:text...\"",
  "\"<xsl:apply-templates...\"", "\"<xsl:call-template...\"",
  "\"<xsl:with-param...\"", "\"<xsl:sequence...\"", "\"<xsl:param...\"",
  "\"<xsl:function...\"", "\"<xsl:choose...\"", "\"<xsl:when...\"",
  "\"<xsl:otherwise...\"", "\"<xsl:if...\"", "\"<xsl:variable...\"",
  "\"<xsl:comment...\"", "\"<xsl:processing-instruction...\"",
  "\"<xsl:document...\"", "\"<xsl:attribute...\"", "\"<xsl:namespace...\"",
  "\"<xsl:element...\"", "\"<xsl:analyze-string...\"",
  "\"<xsl:matching-substring...\"", "\"<xsl:non-matching-substring...\"",
  "\"<xsl:copy-of...\"", "\"<xsl:copy...\"", "\"<xsl:for-each...\"",
  "\"<xsl:output...\"", "\"<xsl:import-schema...\"", "\"version='...'\"",
  "\"mode='...'\"", "\"name='...'\"", "\"doctype-public='...'\"",
  "\"doctype-system='...'\"", "\"encoding='...'\"", "\"media-type='...'\"",
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
  "SelectLanguage", "Start_FunctionDecl", "FunctionDecl_MaybeSemicolon",
  "Start_FunctionSignature", "Start_DelayedModule", "DM_ModuleDecl",
  "DM_Prolog", "DM_FunctionDecl", "Start_XSLT", "Stylesheet_XSLT",
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
  "AttributeAttrs_XSLT", "Namespace_XSLT", "NamespaceAttrs_XSLT",
  "Element_XSLT", "ElementAttrs_XSLT", "CopyOf_XSLT", "CopyOfAttrs_XSLT",
  "Copy_XSLT", "CopyAttrs_XSLT", "ForEach_XSLT", "ForEachAttrs_XSLT",
  "Pattern_XSLT", "PathPattern_XSLT", "PathPatternStart_XSLT",
  "IdKeyPattern_XSLT", "IdValue_XSLT", "KeyValue_XSLT",
  "RelativePathPattern_XSLT", "PatternStep_XSLT", "PatternAxis_XSLT",
  "PatternStepPredicateList_XSLT", "Module_XQ", "MainModule_XQ",
  "LibraryModule_XQ", "Prolog_XQ", "Setter_XQ", "Module_XQF",
  "MainModule_XQF", "LibraryModule_XQF", "Prolog_XQF", "Module_XQU",
  "MainModule_XQU", "LibraryModule_XQU", "Prolog_XQU", "Module",
  "VersionDecl", "Version", "Encoding", "MainModule", "LibraryModule",
  "ModuleDecl", "Prolog", "Setter", "Import", "Separator", "NamespaceDecl",
  "BoundarySpaceDecl", "DefaultNamespaceDecl", "OptionDecl",
  "FTOptionDecl", "OrderingModeDecl", "EmptyOrderDecl",
  "CopyNamespacesDecl", "PreserveMode", "InheritMode",
  "DefaultCollationDecl", "BaseURIDecl", "SchemaImport",
  "ResourceLocations", "SchemaPrefix", "ModuleImport", "VarDecl",
  "VarDeclValue", "ConstructionDecl", "FunctionDecl", "FunctionKeyword",
  "FunctionParamList", "FunctionBody", "FunctionOptions", "PrivateOption",
  "DeterministicOption", "FunctionDeclReturnType", "ParamList", "Param",
  "EnclosedExpr", "QueryBody", "Expr", "ExprSingle", "FLWORExpr",
  "FLWORTuples", "InitialClause", "IntermediateClause", "ForClause",
  "ForBindingList", "ForBinding", "PositionalVar", "FTScoreVar",
  "LetClause", "LetBindingList", "LetBinding", "WhereClause",
  "CountClause", "OrderByClause", "OrderSpecList", "OrderSpec",
  "OrderExpr", "OrderDirection", "EmptyHandling", "QuantifiedExpr",
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
  "FunctionTest", "AnyFunctionTest", "TypedFunctionTest",
  "FunctionTypeArguments", "ParenthesizedItemType", "QNameValue",
  "FunctionName", 0
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
     575,   576,   577,   578,   579,   580,   581
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   327,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   329,   330,   330,   331,   332,   333,   334,   334,   335,
     336,   337,   337,   338,   338,   338,   339,   339,   339,   339,
     339,   339,   339,   340,   341,   341,   341,   341,   341,   341,
     342,   342,   342,   342,   343,   343,   343,   344,   345,   345,
     345,   345,   346,   346,   347,   348,   348,   348,   348,   348,
     348,   349,   350,   350,   350,   350,   350,   350,   351,   352,
     352,   352,   352,   353,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   355,   355,   355,   355,   355,   356,   356,   357,
     358,   358,   358,   358,   358,   359,   360,   360,   360,   361,
     361,   361,   362,   362,   362,   362,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   364,   365,   365,   365,   366,   367,
     367,   368,   369,   369,   369,   370,   370,   370,   371,   371,
     372,   373,   373,   374,   374,   375,   376,   376,   376,   376,
     376,   377,   378,   379,   380,   381,   382,   382,   383,   384,
     385,   385,   386,   387,   387,   387,   387,   388,   388,   389,
     389,   390,   391,   391,   391,   391,   392,   393,   393,   394,
     395,   395,   395,   396,   397,   398,   399,   399,   399,   399,
     399,   400,   401,   401,   401,   402,   403,   403,   403,   404,
     405,   405,   405,   406,   407,   407,   407,   408,   409,   409,
     410,   410,   411,   411,   411,   412,   412,   413,   413,   414,
     414,   415,   415,   416,   416,   416,   416,   416,   416,   417,
     418,   418,   418,   418,   419,   419,   420,   420,   420,   420,
     421,   422,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   424,   424,   424,   424,   424,   424,   424,   425,   425,
     425,   425,   426,   427,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   428,   429,   429,   429,   429,   430,   431,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   433,
     433,   433,   433,   434,   434,   434,   435,   436,   437,   438,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   441,   441,   441,   441,   441,   441,   441,   441,   442,
     442,   443,   444,   445,   445,   446,   446,   447,   448,   449,
     449,   450,   450,   451,   452,   452,   453,   453,   454,   455,
     456,   456,   457,   457,   457,   458,   458,   459,   459,   460,
     461,   461,   462,   462,   463,   464,   464,   465,   465,   466,
     466,   467,   467,   467,   467,   468,   468,   469,   469,   470,
     470,   471,   471,   472,   473,   474,   475,   475,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     477,   478,   478,   478,   479,   479,   480,   480,   480,   481,
     482,   482,   483,   484,   484,   485,   485,   486,   487,   487,
     488,   488,   489,   490,   491,   491,   492,   492,   493,   493,
     494,   495,   495,   495,   496,   496,   496,   497,   497,   498,
     498,   499,   500,   501,   501,   502,   502,   503,   504,   504,
     505,   505,   506,   507,   507,   508,   508,   509,   509,   510,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   511,   511,   511,   512,   512,   513,
     513,   513,   514,   514,   514,   514,   514,   515,   515,   515,
     516,   516,   516,   517,   517,   518,   518,   519,   519,   520,
     520,   521,   521,   521,   522,   522,   522,   523,   523,   523,
     524,   524,   525,   525,   526,   527,   527,   528,   528,   528,
     528,   529,   530,   530,   530,   531,   531,   532,   532,   533,
     533,   534,   534,   535,   535,   536,   536,   536,   536,   536,
     536,   536,   536,   537,   537,   538,   538,   539,   539,   539,
     539,   539,   540,   541,   541,   542,   542,   543,   543,   543,
     544,   544,   544,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   546,   546,   547,   547,   547,   548,   549,   550,
     550,   551,   552,   553,   554,   554,   555,   555,   556,   556,
     557,   557,   558,   558,   558,   559,   559,   560,   560,   561,
     561,   561,   562,   562,   563,   563,   564,   564,   565,   565,
     565,   566,   566,   566,   567,   567,   567,   568,   568,   568,
     569,   569,   569,   569,   569,   570,   571,   571,   572,   573,
     573,   574,   574,   574,   574,   574,   574,   574,   575,   576,
     577,   577,   578,   578,   579,   580,   580,   581,   582,   583,
     584,   585,   585,   586,   586,   587,   588,   588,   589,   589,
     590,   590,   591,   591,   591,   591,   592,   592,   592,   592,
     592,   593,   594,   594,   594,   594,   594,   594,   594,   594,
     594,   594,   595,   596,   596,   596,   597,   598,   599,   600,
     600,   600,   601,   601,   601,   602,   602,   603,   604,   605,
     605,   605,   605,   606,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   614,   615,   615,   616,   616,   617,   617,
     618,   618,   619,   619,   620,   620,   621,   621,   621,   622,
     622,   623,   623,   624,   624,   624,   624,   624,   624,   625,
     625,   626,   626,   626,   626,   627,   627,   627,   627,   627,
     627,   627,   627,   628,   628,   628,   629,   629,   630,   630,
     631,   631,   631,   631,   631,   631,   631,   631,   632,   632,
     632,   632,   633,   633,   634,   634,   635,   635,   635,   635,
     635,   636,   636,   637,   637,   637,   637,   638,   638,   638,
     639,   639,   640,   640,   641,   641,   642,   642,   643,   644,
     644,   645,   646,   647,   647,   647,   648,   648,   648,   648,
     648,   649,   649,   650,   651,   651,   652,   652,   653,   654,
     655,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     663,   663,   663,   663,   663,   664,   664,   665,   665,   666,
     666,   667,   667,   668,   668,   668,   669,   669,   670,   670,
     670,   670,   671,   671,   671,   672,   672,   673,   674,   674,
     675,   676,   677,   677,   678,   678,   679,   680,   680,   681,
     681,   682,   683,   683,   683,   683,   683,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   683,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684,   684,   684,   684,   684,
     684,   684,   684,   684,   684,   684
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     8,     0,     1,     3,     2,     6,     0,     2,     8,
       1,     4,     1,     0,     2,     2,     0,     2,     2,     2,
       2,     2,     2,     4,     1,     3,     2,     3,     3,     3,
       0,     2,     2,     2,     1,     1,     1,     4,     1,     2,
       3,     2,     0,     2,     3,     1,     2,     3,     3,     2,
       2,     3,     1,     2,     3,     3,     2,     2,     3,     1,
       2,     3,     3,     2,     1,     2,     3,     2,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     2,     3,     3,     4,     0,     3,     2,     0,
       2,     2,     0,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     1,
       1,     3,     1,     3,     3,     1,     1,     1,     0,     2,
       3,     1,     2,     0,     2,     3,     1,     2,     3,     3,
       2,     2,     3,     3,     3,     4,     1,     2,     3,     3,
       0,     3,     4,     1,     3,     3,     3,     0,     3,     0,
       3,     4,     1,     2,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     3,     1,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     3,     2,
       1,     3,     2,     3,     1,     2,     2,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     2,     3,     3,     3,     3,     2,
       1,     3,     3,     2,     0,     4,     2,     2,     1,     1,
       2,     2,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     2,     0,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     1,     3,     4,     3,     2,     2,     2,     2,
       6,     0,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     3,     3,     5,     5,     4,     3,     3,
       3,     5,     5,     5,     1,     1,     1,     1,     4,     3,
       5,     4,     0,     2,     3,     3,     3,     7,     4,     6,
       2,     1,     3,     3,     7,     1,     1,     2,     3,     1,
       1,     0,     2,     2,     2,     1,     1,     1,     1,     0,
       2,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     2,     2,     1,     1,     1,     1,     1,     2,
       3,     1,     7,     0,     3,     0,     3,     2,     3,     1,
       5,     5,     2,     3,     3,     4,     3,     1,     3,     5,
       1,     0,     1,     1,     0,     2,     2,     4,     4,     3,
       1,     5,     6,     2,     1,     5,     3,     3,     3,     3,
       0,     3,     8,     3,     1,     3,     1,     3,     3,     0,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     5,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     4,     1,     4,     1,     4,     1,     4,
       1,     2,     2,     1,     1,     1,     1,     4,     5,     5,
       3,     4,     1,     2,     4,     1,     2,     1,     2,     2,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       4,     1,     4,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       2,     1,     4,     4,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     5,    10,     1,     1,     0,
       7,     7,     0,     1,     3,     3,     3,     3,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     3,     0,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       1,     3,     2,     3,     3,     1,     3,     3,     4,     4,
       3,     1,     3,     2,     3,     2,     0,     1,     0,     2,
       2,     3,     0,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     4,     3,     3,     3,     3,
       4,     4,     3,     4,     6,     1,     1,     4,     1,     3,
       4,     6,     7,     1,     1,     4,     1,     1,     1,     1,
       1,     3,     0,     2,     0,     2,     3,     1,     3,     1,
       4,     1,     2,     1,     1,     2,     2,     3,     1,     2,
       4,     3,     4,     0,     1,     2,     1,     2,     1,     0,
       3,     2,     3,     3,     4,     1,     3,     3,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     2,     2,     1,     2,     2,     2,     5,     5,
       2,     0,     3,     2,     4,     4,     6,     4,     3,     4,
       0,     2,     2,     3,     1,     3,     2,     2,     2,     1,
       2,     3,     3,     3,     3,     3,     6,     6,     4,     4,
       4,     2,     2,     2,     2,     2,     7,     5,     5,     6,
       3,     1,     4,     1,     1,     1,     1,     1,     1,     5,
       7,     8,    10,     6,     8,     0,     2,     2,     3,     0,
       2,     1,     3,     1,     1,     1,     3,     7,     3,     7,
       5,     9,     1,     1,     1,     1,     3,     5,     1,     1,
       3,     4,     3,     4,     1,     1,     4,     5,     6,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   252,   274,   290,   311,     0,     0,     0,   371,
       0,     0,   557,     0,     0,     0,   626,     0,   602,     0,
       0,   521,   581,   552,     0,   823,   824,   825,   873,   874,
     875,   887,   879,   880,   881,   882,   883,   885,   889,   890,
     891,   892,   893,   894,   895,   896,   897,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   989,   990,   908,
     909,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   931,   932,  1028,  1029,   888,   826,   933,   558,
     559,   934,   935,   936,   937,   938,   939,   940,   941,   942,
     943,   944,   945,   946,   947,   948,   949,   950,   884,   951,
     952,   878,   953,   954,   955,   956,   957,   958,   959,   960,
     961,   962,   963,   964,   965,   966,   967,   968,   969,   970,
     971,   972,   877,   973,   974,   975,   976,   977,   978,   979,
     980,   981,   982,   983,   984,   985,   986,   876,   987,   886,
     988,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,     2,   385,   387,   388,     0,   401,
     404,   405,   389,   390,   391,   397,   454,   456,   473,   476,
     478,   481,   486,   489,   492,   494,   496,   498,   500,   503,
     504,   506,     0,   512,   505,   517,   520,   524,   525,   527,
     528,   529,     0,   534,   531,     0,   546,   544,   554,   556,
     526,   560,   563,   572,   564,   565,   566,   569,   570,   567,
     568,   590,   592,   593,   594,   591,   631,   632,   633,   634,
     635,   636,   637,   553,   681,   672,   679,   678,   680,   677,
     674,   676,   673,   675,   392,     0,   393,     0,   395,   394,
     396,   574,   575,   576,   573,   555,   398,   399,   571,   858,
     859,   562,   828,   872,     0,     0,     3,   248,   249,     0,
     252,   252,     4,   270,   271,     0,   274,   274,     5,   286,
     287,     0,   290,   290,     6,   311,   301,   302,   311,     0,
      23,   106,     7,    20,    22,   371,     8,     0,     9,    17,
      10,     0,     1,   873,   874,   875,   887,   879,   880,   881,
     882,   883,   895,   896,   897,   898,   899,   900,   901,   902,
     903,   904,   905,   906,   924,  1028,  1029,   935,   937,   948,
     949,   884,   878,   966,   972,   876,   886,  1014,  1017,  1023,
    1025,  1035,  1036,   577,   578,   872,   873,   874,   880,   883,
     876,   543,   597,   598,   599,     0,   627,     0,   519,   603,
       0,   502,   501,   580,     0,   537,     0,     0,   645,     0,
       0,     0,     0,     0,     0,     0,     0,   651,     0,     0,
       0,     0,     0,   535,   536,   538,   539,   540,   541,   547,
     548,   549,   550,   551,     0,     0,     0,   821,     0,     0,
       0,   409,   411,     0,     0,   417,   419,     0,     0,   440,
       0,     0,     0,     0,     0,     0,   542,     0,     0,     0,
     640,     0,     0,   658,     0,     0,   811,   812,     0,   814,
     815,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   406,   403,   407,   408,   402,     0,     0,     0,     0,
       0,     0,     0,     0,   459,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     513,   518,     0,     0,     0,     0,   533,   545,     0,     0,
       0,   813,     0,     0,     0,     0,     0,     0,     0,   978,
     985,     0,     0,     0,   261,     0,     0,   265,   266,   267,
     262,   263,   329,   330,     0,   264,     0,   250,     0,   246,
     247,   251,   978,     0,     0,     0,     0,     0,     0,     0,
       0,   272,     0,   268,   269,   273,   978,     0,     0,     0,
     321,     0,     0,   325,   326,   328,   322,   323,     0,   324,
       0,   288,   327,     0,   284,   285,   289,   299,   300,   309,
     978,     0,     0,     0,     0,     0,     0,     0,     0,   308,
       0,    26,   112,     0,     0,    15,   374,   375,   376,   377,
     378,   379,   372,   373,   602,     0,   629,   628,   625,     0,
     579,   696,   692,     0,   695,   707,     0,     0,   644,   687,
       0,   683,     0,     0,     0,     0,   688,   682,   689,     0,
       0,   827,     0,     0,   650,     0,   698,     0,   706,   708,
     686,     0,     0,     0,     0,     0,     0,     0,   658,     0,
     658,     0,     0,   658,     0,     0,     0,     0,     0,     0,
       0,     0,   647,   704,   699,     0,   703,     0,   639,     0,
     367,     0,   382,     0,     0,     0,     0,     0,   846,   848,
     386,   400,   422,     0,     0,     0,   453,   455,   458,   461,
     462,   463,   471,   472,     0,   457,   464,   465,   466,   467,
     468,   469,   470,     0,   479,   480,   477,   482,   484,   483,
     485,   487,   488,   490,   491,     0,     0,     0,     0,   510,
       0,   523,   522,     0,     0,     0,   589,   862,   588,     0,
     587,     0,     0,     0,     0,   584,     0,   860,   307,   306,
     331,     0,   303,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   839,     0,     0,     0,   253,   254,
     255,   256,   260,   257,   258,   259,   371,     0,     0,   275,
     276,   277,   278,   282,   283,   279,   280,   281,   371,     0,
     291,   292,   293,   294,   298,   295,   296,   297,   371,   371,
     312,   313,   314,   315,   319,   320,   316,   317,   318,    24,
      25,     0,   108,   109,     0,   365,   366,     0,     0,   371,
      18,     0,    14,   603,     0,   630,     0,   515,   514,     0,
     693,   646,   642,     0,   649,   684,   685,   691,   690,   652,
     653,     0,   697,   705,   648,   638,     0,   820,     0,   582,
     583,   413,   410,     0,     0,   418,     0,   439,   437,   438,
       0,     0,   507,     0,     0,     0,   700,   641,   658,     0,
     368,     0,   885,   877,   886,   659,   662,   666,   668,   671,
     669,   864,   865,   670,     0,   861,     0,     0,     0,     0,
       0,     0,   423,   430,   424,   427,   431,     0,   460,     0,
       0,     0,     0,   733,   474,   714,   717,   719,   721,   723,
     724,   739,   728,   493,   495,   497,   656,   499,   511,   530,
     532,   561,     0,   863,     0,     0,   810,   809,   808,   585,
     304,     0,   333,   334,   710,   349,     0,     0,   362,   363,
     339,   340,     0,     0,     0,     0,   344,   345,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   352,     0,   352,
       0,   338,   804,   803,   805,    21,    34,    62,    48,    69,
      74,   100,    27,    52,    28,    52,    29,   112,    30,   112,
      31,     0,    32,     0,   107,   105,   135,     0,   142,   151,
       0,     0,     0,   182,   187,   190,   194,   196,   202,   206,
     173,   210,   214,   218,   139,   140,   114,   115,   116,   112,
     117,   113,   118,   148,   119,   153,   120,     0,   122,   112,
     121,   130,   177,   123,   112,   124,   112,   125,   112,   126,
     112,   127,   112,   128,   112,   129,   112,   131,     0,   132,
     112,   133,   112,     0,     0,     0,   380,   602,   602,   620,
     595,   516,     0,   709,   643,   654,   822,     0,     0,   415,
       0,     0,     0,   450,     0,   444,     0,     0,   508,   509,
       0,   383,   381,     0,     0,     0,     0,   663,   665,   664,
     660,     0,   817,     0,   818,     0,     0,   853,   854,   850,
     852,     0,   432,   433,   434,   425,     0,     0,   722,     0,
     734,   736,   738,   729,     0,   475,     0,   712,     0,     0,
     725,     0,   726,   657,   655,   586,     0,     0,     0,   658,
       0,     0,   348,     0,     0,     0,   337,   839,   843,   844,
     845,   840,   841,     0,     0,     0,     0,   352,     0,   351,
       0,   358,     0,     0,   774,     0,     0,   799,     0,     0,
     770,   771,     0,   758,   764,   765,   763,   762,   766,   760,
     761,   767,     0,   101,   102,    40,    36,     0,     0,     0,
     112,    49,    51,     0,   112,    63,    67,    66,     0,     0,
       0,    70,     0,     0,     0,    73,    91,    75,    79,    80,
      81,    85,    86,    88,    77,    82,    83,    84,    87,    89,
       0,     0,     0,    99,   111,   110,     0,     0,     0,   170,
     166,   112,     0,     0,   109,     0,     0,     0,     0,   152,
       0,   161,     0,   112,     0,   109,   109,   179,   183,     0,
       0,     0,     0,     0,   109,     0,     0,     0,   109,     0,
     109,   109,     0,   109,     0,     0,   109,   109,     0,   209,
     212,     0,   215,   216,     0,     0,     0,   379,     0,     0,
       0,     0,     0,   694,   819,     0,     0,     0,   420,   421,
     441,     0,     0,     0,   442,   443,     0,     0,     0,     0,
     701,   871,   661,   667,     0,     0,   869,     0,   384,     0,
       0,     0,   855,     0,     0,   426,     0,   428,   727,   733,
     731,     0,   735,   737,     0,   716,     0,     0,   745,     0,
       0,     0,     0,     0,   711,   715,   718,     0,     0,     0,
       0,     0,   806,   807,   310,     0,   332,   341,   342,   335,
     336,   346,   347,   343,     0,   829,   835,     0,     0,     0,
     226,   225,   873,   895,  1030,  1031,     0,   221,     0,   224,
     222,   233,   244,   240,   379,   355,   356,   350,   353,     0,
       0,   775,   780,     0,   800,   773,   772,     0,     0,   777,
     776,     0,   769,   768,     0,   798,   759,   103,   104,    38,
      35,    39,    44,    45,    46,    37,    55,    53,   112,     0,
      50,     0,    65,    64,    61,    72,    71,    68,    95,    96,
      92,    93,    94,    76,    97,    78,    90,   138,   162,     0,
     112,   167,     0,     0,   164,   136,   137,   134,   145,   146,
     147,   144,   143,   141,   156,   149,   112,   150,   154,   163,
       0,   174,   175,   176,   112,     0,   185,   184,   112,   188,
     186,   191,   192,   189,   193,   197,   199,   200,   198,   195,
     203,   204,   201,   207,   208,   205,   211,   213,   219,   217,
       0,    16,     0,   602,   602,     0,   624,   623,   622,   621,
     414,     0,     0,     0,   448,     0,     0,   449,   447,     0,
     702,   866,     0,     0,     0,   816,   658,     0,   847,   849,
       0,   435,   436,     0,   730,   732,   802,   752,   750,   751,
     713,     0,     0,   756,   757,   748,   749,   720,     0,     0,
     741,     0,   740,     0,   361,   359,   837,     0,     0,     0,
       0,   842,   243,     0,     0,     0,     0,     0,   833,   835,
     234,     0,     0,     0,     0,   239,     0,   354,   352,   788,
     781,   781,   783,     0,     0,   790,   790,   801,    41,    42,
      43,    56,    60,    59,     0,     0,     0,    33,    47,    98,
     169,     0,   165,   168,   157,   160,     0,     0,     0,   178,
       0,   172,   181,    12,   379,     0,     0,   602,   416,   412,
     451,     0,   446,   452,   867,   870,     0,     0,   856,     0,
     429,   753,   754,   755,   746,   747,   743,   742,     0,   360,
     838,   836,   830,     0,   242,   241,     0,   230,   229,     0,
     220,     0,   236,   235,   238,   237,     0,   370,   364,   369,
     357,     0,     0,     0,     0,     0,   794,   792,   789,   787,
      58,    57,    54,   171,   159,   158,   155,   180,    11,    13,
       0,   608,   614,   600,   611,   617,   601,     0,     0,   868,
       0,   851,   744,   831,   835,   227,     0,   834,     0,     0,
     779,   778,   784,   785,     0,   793,     0,     0,   791,     0,
       0,     0,     0,     0,   596,   445,   857,     0,     0,   231,
     232,   245,   782,     0,   795,   796,   797,    19,   604,   610,
     609,   605,   616,   615,   606,   613,   612,   607,   619,   618,
     832,   228,   786
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   336,  1648,   340,   338,   339,   615,   830,   332,
     333,   611,   821,   982,   983,  1389,  1395,   984,   985,  1180,
    1397,  1398,   986,   987,   988,   989,   990,   991,  1413,  1415,
     992,   993,  1016,   612,   994,   824,  1017,  1018,  1019,  1020,
    1021,  1022,  1023,  1431,  1228,  1024,  1025,  1230,  1435,  1436,
    1026,  1027,  1028,  1029,  1030,  1219,  1220,  1221,  1422,  1031,
    1032,  1237,  1445,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,
    1050,  1051,  1052,  1356,  1357,  1358,  1359,  1616,  1688,  1360,
    1361,  1362,  1545,   306,   307,   308,   309,   541,   312,   313,
     314,   315,   318,   319,   320,   321,   324,   310,   536,   537,
     326,   327,   311,   329,   577,   542,   762,   543,   544,   545,
     546,   568,   547,   548,   549,   958,  1343,   550,   551,   552,
    1149,   966,   553,   554,  1525,   555,   556,   827,   463,  1628,
     775,   622,   623,   832,   691,   692,  1215,   204,   205,   206,
     207,   208,   209,   482,   210,   441,   442,  1069,  1277,   211,
     445,   446,   483,   484,   485,   904,   905,   906,  1104,  1307,
     212,   448,   449,   213,  1074,  1284,  1075,  1076,  1282,   214,
     215,   216,   217,   714,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     838,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   383,   255,   256,   257,   258,   259,   749,   750,
     260,   261,   262,   394,   624,   400,  1653,  1656,  1680,  1682,
    1681,  1683,  1272,   263,   397,   264,   627,   265,   266,   267,
     461,   638,   268,   409,   269,   270,   271,   272,   418,   654,
     925,  1124,   694,   885,  1090,   886,   887,   273,   274,   275,
     276,   277,   278,   279,   280,   633,   281,   655,   282,   685,
     283,   657,   634,   658,  1062,   945,   914,  1324,  1117,   915,
     916,   917,   918,   919,   920,   921,   922,  1113,  1122,  1331,
    1325,  1604,  1515,   971,  1163,  1164,  1165,  1166,  1167,  1631,
    1380,  1168,  1638,  1556,  1635,  1678,  1169,  1170,  1171,  1115,
     592,   284,   285,   286,   287,   288,   289,   290,   436,   437,
     291,   292,   293,   294,   650,   295,   558,  1529,  1346,   962,
    1141,  1142,   296,   297,  1099,  1301,  1302,   298,   299,   300,
     301,   890,   891,   892,  1297,   893,   302,   303
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1466
static const yytype_int16 yypact[] =
{
     979,  3487,   621,   621,   621,   621,  -132,   -38,   160, -1466,
     226,  7159, -1466,  5632,   725,   235,   271,  4921,   323,  3726,
    3726, -1466, -1466, -1466,  2292, -1466, -1466, -1466,   313,   547,
     410,   424,   434,   103,   466,   487,   652, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,   556,   669,   726,   786,   789,   802,
     817,   823,   876,   883,   890,   497, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,   598, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,   670,   815, -1466, -1466, -1466, -1466,
   -1466, -1466,   610, -1466,    71, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,   700,   700, -1466,   888, -1466,
   -1466,   901, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,   419, -1466, -1466, -1466, -1466,
   -1466,   262, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466,   299, -1466,   925,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,    99, -1466, -1466,    -4, -1466, -1466,
   -1466, -1466, -1466,   839, -1466,    32, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466,   704,   695, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,   912, -1466, -1466,   659, -1466,
   -1466, -1466, -1466, -1466, -1466,   811,   831, -1466,   534,   812,
     101,   123,   111,   708, -1466,   852,   861,   873,   884, -1466,
   -1466, -1466,   184, -1466, -1466,  4921,   544, -1466, -1466,  1034,
    1046, -1466,  5632, -1466, -1466,  5632, -1466, -1466, -1466, -1466,
     133, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,  3487, -1466,  3487, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466,   402,   294,   897, -1466, -1466, -1466,  3965,
     887, -1466, -1466, -1466, -1466,  4204,   887, -1466, -1466, -1466,
   -1466,  4443,   887, -1466, -1466,   887, -1466, -1466, -1466,  4682,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466,   900, -1466, -1466,
   -1466,    33, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466,  1042,  1066,  1068,  1079,
    1080, -1466, -1466, -1466, -1466,   783, -1466,  1082,   544, -1466,
    7159, -1466, -1466, -1466,   622, -1466,  6106,  3487, -1466,  1073,
    1081,  3487,   105,  1083,  1084,  6966,  3487, -1466,  1078,  7159,
    7159,  1090,  3487, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,  3487,  7159,    12, -1466,  3487,  3487,
    7159,  1100, -1466,  7159,  1125,  1102, -1466,  7159,    72, -1466,
      81,  3487,  3487,  3487,  1088,  1089, -1466,  1073,  6343,  3487,
   -1466,  1073,   219,   986,  3487,   981, -1466, -1466,  3487, -1466,
   -1466,  7159,  3487,  3487,  3487,   610,    71,  3487,  1132,  1007,
    1008, -1466, -1466, -1466, -1466, -1466,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  3726, -1466,  3726,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  1085,  3726,  3726,  3726,  3726,  3726,  3726,
    3726,  3726,  3726,  3726,  3726,   988,   993,   998,   999,  2531,
   -1466,   544,  4921,  4921,  3487,  3487, -1466, -1466,  3487,  1814,
     -22, -1466,  2053,  1104,  1033,  1035,    91,  1111,  7159,  1170,
     764,  1111,  1111,  1111, -1466,  1111,  1111, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,  1111, -1466,  1111, -1466,  1111, -1466,
   -1466,   579,  1144,  1111,  1111,  1111,  1111,  1111,  1111,  1111,
    1111, -1466,  1111, -1466, -1466,   632,  1063,  1111,  1111,  1111,
   -1466,  1111,  1111, -1466, -1466, -1466, -1466, -1466,  1111, -1466,
    1111, -1466, -1466,  1111, -1466, -1466,   642, -1466, -1466,   646,
     908,  1111,  1111,  1111,  1111,  1111,  1111,  1111,  1111, -1466,
    1111,    64,   600,   468,  7159,   983, -1466, -1466, -1466, -1466,
   -1466,  1012, -1466, -1466,  1060,  1062, -1466, -1466, -1466,   243,
   -1466, -1466, -1466,   769, -1466, -1466,   330,  2770, -1466, -1466,
     460, -1466,   487,  1080,  1128,  1129, -1466, -1466, -1466,  1130,
    1133, -1466,   481,  3009, -1466,  1134, -1466,  1135, -1466, -1466,
   -1466,   571,   576,  1163,   598,  3487,   583,   584,   986,   610,
     986,  7159,    71,   986,   700,  3487,  3487,   799,   829,   615,
    3487,  3487, -1466, -1466, -1466,   843, -1466,   619, -1466,  7159,
   -1466,   844, -1466,  6551,  1131,   955,  1122,  1030,   959,   236,
   -1466, -1466, -1466,  7159,  3487,  1049,   831, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,  3726, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466,   459,   123,   123,   922,   111,   111,   111,
     111,   708,   708, -1466, -1466,  6551,  6551,  7159,  7159, -1466,
     624, -1466, -1466,   502,   520,   637, -1466, -1466, -1466,   846,
   -1466,   688,  3487,  3487,  3487, -1466,   878, -1466, -1466, -1466,
   -1466,  1111, -1466, -1466,  1150,   805,  1069,  1184,  7159,   830,
     903,   529,   570,  7159,   601,   468,     6,     4, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466,   569,   764,  1107, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   709,   267,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   546,   456,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466,   595, -1466, -1466,  1182, -1466, -1466,  7342,  1161, -1466,
   -1466,  6551, -1466,   906,   265, -1466,  1072, -1466, -1466,  7159,
   -1466, -1466, -1466,   649, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466,   690, -1466, -1466, -1466, -1466,  3487, -1466,  1074, -1466,
   -1466,  1092, -1466,  1189,  1193, -1466,  1075, -1466, -1466, -1466,
    1054,  1058, -1466,   691,   699,  7159, -1466, -1466,   986,  1205,
   -1466,  6759,  1176,  1179,  1180, -1466,   349, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,  3487, -1466,  3487,  3487,  3487,  1181,
    1183,  1545, -1466, -1466,  1191, -1466,   895,  3487, -1466,   459,
    3487,   525,   714,   193,  1136,   984,   987,  1145, -1466, -1466,
    1107,  1031, -1466, -1466, -1466, -1466,  1208, -1466, -1466, -1466,
   -1466, -1466,  3248, -1466,  1002,  1003, -1466, -1466, -1466, -1466,
   -1466,  1069, -1466, -1466, -1466, -1466,  7159,  1203, -1466, -1466,
   -1466, -1466,  1099,  1069,  1070,  1076, -1466, -1466,  1209,  1126,
    7159,    -3,  1015,  7342,  7159,  1061,  1069,  1139,  7159,  1139,
     693,  1173, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466,   756, -1466,   404, -1466,   254, -1466,   453, -1466,   303,
   -1466,  7926, -1466,  1006,   124, -1466, -1466,   724, -1466, -1466,
     956,  1000,   953, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   222,
   -1466, -1466, -1466,   -99, -1466,   982, -1466,  1016, -1466, -1466,
   -1466, -1466,   315, -1466,   414, -1466,   960, -1466,  -118, -1466,
   -1466, -1466,   263, -1466,    41, -1466,  -112, -1466,   217, -1466,
     753, -1466,   963,   925,  1069,   468, -1466,   323,   323, -1466,
   -1466, -1466,  1226, -1466, -1466, -1466, -1466,  3487,  1262,  1086,
    3487,  3487,  3487,  1263,    -5, -1466,    90,  3487, -1466, -1466,
     416, -1466, -1466,  1233,  1235,  1236,  5869, -1466, -1466, -1466,
   -1466,   716, -1466,  1053, -1466,  1274,  1274, -1466, -1466,  1059,
   -1466,  3487, -1466, -1466,  1143,  1191,  1247,   739, -1466,   134,
    1192,  1077, -1466, -1466,  1195, -1466,   459,   841,   459,  1159,
    1173,    25, -1466, -1466, -1466, -1466,  3487,  3487,  1111,   986,
    1069,   905, -1466,  1069,  1069,   872, -1466,    44, -1466, -1466,
   -1466,  1260, -1466,  5158,   925,  1258,  1138,  1139,  1069,  1266,
    1264,  1266,   857,   971, -1466,    85,  1091, -1466,   973,  7159,
   -1466, -1466,  1178, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466,   693,  1017,  1024, -1466, -1466,  5158,  6551,   917,
    1048, -1466, -1466,  6551,  1048, -1466, -1466, -1466,  6551,  3487,
    7343, -1466,  6551,  3487,  7371, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
     -34,  1194,  1194, -1466, -1466, -1466,  1065,  3487,  1009,   801,
   -1466, -1466,  3487,  3487, -1466,  7399,   -44,  3487,   174, -1466,
     541, -1466,  7427, -1466,  3487, -1466, -1466,  1043, -1466,  6551,
    3487,  7455,  3487,  7483, -1466,  3487,  7511,  7539, -1466,  3487,
   -1466, -1466,  7567, -1466,  3487,  7595, -1466, -1466,  7623, -1466,
   -1466,  3487, -1466, -1466,  7651,  3487,  7679,  1012,  1111,  7342,
    1275,  1276,   513, -1466, -1466,  7159,  1311,  1188, -1466, -1466,
   -1466,  7159,  6551,    95, -1466, -1466,  6551,  3487,  1167,  1282,
   -1466, -1466, -1466, -1466,  1283,  1186, -1466,   879, -1466,  3487,
    7159,   880, -1466,   885,  1290, -1466,   920,  1187, -1466,   193,
   -1466,  1284, -1466, -1466,  3726,   987,  1238,   972, -1466,  3726,
    3726,    25,   858,   858, -1466, -1466,  1145,   459,    26,  3726,
    3726,  1140, -1466, -1466, -1466,    38, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,   340, -1466,  1190,  1096,    -3,  5632,
   -1466,   752,   287,  1316,  1299,  1301,   314, -1466,  5395,   592,
     661, -1466, -1466, -1466,  1012, -1466, -1466,  1266, -1466,  1069,
    1069, -1466, -1466,  1137, -1466, -1466, -1466,    23,  1069, -1466,
   -1466,   100, -1466, -1466,  1219, -1466, -1466, -1466, -1466,     0,
    1333, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   526,  7707,
   -1466,  7735, -1466,   912, -1466, -1466,   912, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466,  1224,  1224, -1466,   912,  3487,
   -1466, -1466,  1108,  7763,   912,   912,   124, -1466, -1466, -1466,
   -1466, -1466,   912, -1466, -1466, -1466,   376, -1466, -1466, -1466,
    7791,   912,   124,   124, -1466,  1109, -1466,   912, -1466,   912,
   -1466,   124,   912, -1466, -1466,   124,   912,   124,   124, -1466,
     124,   912, -1466,   124,   124, -1466,   912, -1466,   912, -1466,
    1131, -1466,   925,   323,   323,   725, -1466, -1466, -1466, -1466,
   -1466,  7159,  3487,  1196, -1466,  7159,  3487, -1466, -1466,  3487,
   -1466, -1466,  6551,  6551,  1207, -1466,   986,  1274, -1466, -1466,
    1274, -1466, -1466,  1069, -1466, -1466,   111, -1466, -1466, -1466,
   -1466,   115,   780, -1466, -1466, -1466, -1466, -1466,  3726,  3726,
     922,   141, -1466,  3487, -1466, -1466, -1466,   891,  6551,  1131,
    5158, -1466, -1466,  5632,  5632,   119,  1178,  5158, -1466,  1190,
   -1466,  5395,  5395,  5395,  5395,  1326,    42, -1466,  1139, -1466,
   -1466, -1466,    93,  1178,  1069, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,  6551,  3487,  7819, -1466, -1466, -1466,
     912,  7847, -1466, -1466, -1466, -1466,  6551,  3487,  7875, -1466,
    7903, -1466,  1543,  1111,  1012,   516,   605,   323, -1466, -1466,
   -1466,  1229, -1466, -1466, -1466, -1466,  6551,  1351, -1466,   892,
   -1466, -1466, -1466, -1466, -1466, -1466,   922,   922,  3726, -1466,
   -1466, -1466, -1466,   314, -1466, -1466,  1323, -1466, -1466,  1332,
   -1466,  1131, -1466, -1466, -1466, -1466,  3487, -1466, -1466, -1466,
    1266,   894,   896,  1178,  1160,   898, -1466, -1466,   594,   594,
   -1466,   912, -1466, -1466, -1466,   912, -1466, -1466, -1466, -1466,
    1131, -1466, -1466, -1466, -1466, -1466, -1466,  1341,  3487, -1466,
    3487, -1466,   922, -1466,  1190, -1466,   241, -1466,   663,  1254,
   -1466, -1466,    25, -1466,  1178, -1466,    80,    80, -1466,  1111,
     289,   276,   293,   320, -1466, -1466, -1466,  1131,  1328, -1466,
   -1466, -1466, -1466,  1164, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   389,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   163,
   -1466, -1466,  1371, -1466,  -138,  -878, -1466, -1466, -1466, -1466,
     382, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   150, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466,   164, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1172,  -155, -1466, -1466, -1466, -1466, -1466,
   -1268, -1466, -1466, -1466,  1087,  1093,  1094,  -281, -1466,  1095,
    1097,  1067, -1466,  1064,  1101,  1098, -1466,   997, -1466,   851,
    1103,  1105,    52,  1106,  -314,  -202,  -504,  -121,  -276,  -116,
     -93,  -304,  -250,  -211,  -200, -1466, -1466,  -179,  -166, -1466,
    -960, -1466, -1466,   -88, -1466,  -162,   -78,  -740,  -340, -1466,
      -7, -1466, -1466, -1248,    45,   509,  -688,   451,   -24,  -218,
   -1466, -1466,  1198, -1466, -1466, -1466,   721, -1466, -1466, -1466,
   -1466,   727, -1466, -1466, -1466,   489,   297, -1466, -1466, -1466,
   -1466,  1294,   728, -1466, -1466, -1466,   327, -1466, -1466, -1466,
   -1466,   923,   921, -1466,   104,    96,  -503,   578,  -486,   588,
     574, -1466, -1466, -1466,  1071, -1466, -1466, -1466,  -697,  -228,
   -1466, -1466, -1466,    29,   585, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466,    27, -1466, -1466, -1466, -1466,  -716,
   -1466, -1465,  -355, -1466, -1466, -1466, -1466, -1466,   882,   478,
   -1466,   140, -1466,   -59, -1466,  -606, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466,   403, -1466, -1466, -1466, -1466, -1466, -1466,  1291, -1466,
     686, -1466,  -660,  -707, -1466,   545,   364,  -621, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,  1013, -1466,
    1019, -1466,  1010,   969,   557,  -641,  -860, -1466, -1466, -1466,
     319,   325,   118,   535, -1466, -1466, -1466,   147, -1466, -1294,
   -1466,   -55,   138,   542,   291, -1466, -1466, -1466, -1466,   -87,
   -1366, -1466,   -91,  -556, -1466, -1466, -1466, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466, -1466,   803,
   -1466, -1466, -1466, -1145,  -502,  -376,   -77, -1443, -1309,   329,
   -1466,   120, -1466, -1466, -1466, -1076,   -28, -1466, -1466, -1466,
   -1466, -1466, -1466, -1466, -1466, -1466,     1,     3
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -372
static const yytype_int16 yytable[] =
{
     404,   621,   341,   726,   520,  1390,   895,   913,   861,  1151,
     863,  1551,   384,   866,   385,   601,   385,  1385,   834,  1470,
    1303,   727,   728,   729,   730,   606,   912,  1512,   923,   924,
     635,   955,  1408,   763,   563,   963,   764,   778,   779,   780,
     391,   781,   782,   635,   659,   580,   398,  1539,   664,  1106,
     783,  1523,   784,   580,   785,   317,   323,   328,   466,   789,
     790,   791,   792,   793,   794,   795,   796,   530,   797,   531,
    1617,   583,   888,   800,   801,   802,   462,   803,   804,   583,
     663,  1428,   659,   443,   805,   668,   806,  1344,   670,   807,
    1540,  1409,   673,   894,   469,   894,  1621,   810,   811,   812,
     813,   814,   815,   816,   817,  1286,   818,  1485,   674,  1190,
     584,  1194,   828,   564,   888,   888,  1546,   674,   584,   578,
     330,   585,  1138,  1553,  1056,  1558,   511,   602,  1377,   585,
    1518,    11,   944,   751,   944,   967,   969,   507,   504,   505,
    1378,  1225,   586,  1553,   760,   335,   415,  1328,  1073,   641,
     586,  1232,   504,   505,   416,   587,  1241,   528,  1243,   589,
    1246,   464,  1247,   587,  1252,  1244,  1255,   589,  1258,    18,
     642,  1256,  1264,  1519,  1266,   894,   529,   909,   504,   505,
     968,  1283,   964,  1226,   331,   910,  1310,  1367,  1245,    25,
      26,    27,   965,   913,   565,   913,   508,  1554,  1257,   566,
     579,  1690,  1378,   752,   753,   581,   465,  1227,   603,  1550,
     888,   754,   912,   604,   912,  1328,  1524,  1554,  1081,    18,
    1627,  1687,   567,   675,  1287,   467,   342,   569,   582,  1486,
     417,   689,   676,   588,   665,   519,   605,   570,   572,  1329,
    1330,   607,  1214,   590,   593,   385,   695,    87,   385,  1311,
     697,   608,   610,    11,   699,   700,   701,   940,  1634,   702,
     888,   470,    87,   690,   521,   506,   947,   616,   444,   526,
     534,  1379,   527,  1622,  1623,  1624,  1625,  1429,   512,  1430,
     617,   618,   619,   620,   456,   601,  1555,   961,   509,   510,
    1410,  1411,  1412,  1059,   563,   606,    25,    26,    27,   643,
    1128,  1633,  1399,  1692,  1664,  1608,  1401,  1329,  1330,  1533,
    1060,   748,  1132,   416,   748,  1269,   864,   889,  1139,  1140,
     580,  1559,  1560,   580,  1253,  1147,  1701,   894,   613,  1537,
     406,  1601,  1602,  1603,   878,   405,  1650,  1698,   972,   973,
     894,  1704,   458,  1423,   894,   819,   583,  1254,   902,   583,
     459,   836,   689,   337,   820,  1440,   406,  1344,  1613,   889,
     889,   889,   889,  1087,   407,   894,   473,   395,   317,    87,
    1707,   894,   974,   564,   323,  1088,   837,   328,  1693,  1296,
     911,   396,   841,   636,  1526,   584,  1089,   640,   584,   417,
    1618,  1619,   652,   913,   578,  1702,   585,   602,   661,   585,
     913,   629,   913,   385,  1110,  1111,  1112,  1699,  1636,   385,
     662,  1705,   912,  1268,   666,   667,   651,   586,   385,   912,
     586,   912,   385,   385,  1599,  1433,   460,   677,   678,   679,
     587,   399,  1434,   587,   589,   687,   384,   589,   385,  1708,
     408,   384,  1289,   385,   384,   532,   385,   858,   384,  1345,
     385,  1270,  1271,   412,   565,   889,   533,   868,   869,   566,
    1290,   385,  1145,  1063,   900,   888,  1150,   413,  1259,  1335,
     453,  1391,   698,   534,   385,   579,  1400,   414,   603,   901,
     581,  1402,   567,   604,   535,  1405,   903,   569,  1672,  1336,
     454,   455,  1339,  1340,    18,   740,   473,   570,   572,  1063,
     743,   744,   909,   582,   745,   889,   605,  1368,   588,   419,
     910,   607,   844,  1260,    25,    26,    27,   473,   590,   593,
    1566,   608,   610,  1261,   765,   788,   766,   929,  1223,  1694,
     420,  1224,  1446,   849,   936,   937,   938,  1181,   473,   651,
      14,   385,  1571,    15,    16,   930,  1248,  1475,   434,  1182,
     488,   489,   490,   491,   492,   493,   473,   888,  1578,  1183,
      18,   494,   888,  1651,   894,  1652,  1580,   888,   909,  1249,
    1582,   888,  1250,  1251,   495,  1484,   910,   522,   423,  1487,
      25,    26,    27,   523,  1478,   767,  1191,    87,  1630,  1233,
     410,  1129,   708,   709,   710,   711,   712,   713,   411,   715,
     716,   717,   718,   719,   720,   721,   722,   473,  1192,  1193,
     435,   913,   473,   843,   765,   651,   766,   385,   888,   473,
     473,  1234,   440,   854,  1334,  1541,  1235,  1236,   855,   851,
     912,  1542,   768,  1476,  1477,   859,   860,   765,  1066,   766,
     769,   770,   771,   772,   773,   496,   497,   498,   499,   500,
     501,   473,  1654,    87,  1655,   473,   873,   874,   473,  1574,
     473,   888,   931,   825,   826,   888,   630,   872,  1538,  1575,
     952,   877,   384,   473,   385,   767,   928,   953,  1092,  1093,
    1094,  1576,  1577,   799,   520,   473,  1175,  1176,  1691,   903,
     384,   424,   385,   774,  1543,   421,   385,  1238,   767,   473,
    1544,  1064,   616,   422,   384,   911,   385,   502,  1177,  1178,
     889,  1179,   447,  1267,   748,   617,   618,   619,   620,  1239,
    1240,   438,   768,   954,   825,   826,   473,   473,  1547,  1548,
     769,   770,   771,   772,   773,   473,  1185,  1552,   385,   385,
     385,   385,  1065,  1078,   956,   768,  1186,  1187,   425,    18,
     957,  1079,   473,   769,   770,   771,   772,   773,  1188,  1189,
     557,  1676,   786,  1677,  1471,  1109,   571,  -223,  1298,   651,
     787,   385,   591,   799,   959,   473,   385,   765,   788,   766,
     609,  1152,  1583,   774,  1153,  1594,  1595,  1154,  1155,  1156,
    1157,  1309,  1437,   474,   475,  -223,   476,   477,   478,  1434,
     479,   480,   889,  -223,  1364,   839,   774,   889,   426,  1561,
     304,   427,   889,   840,   305,   798,   889,  1511,   908,  1562,
    1563,  1611,  1055,   787,   428,   808,  1520,  1521,  1506,   809,
    1053,  1564,  1565,   787,   385,   473,  1597,   787,   767,   429,
     960,  1612,   385,   870,   961,   430,   975,  1158,   976,  1274,
     392,   393,  1278,  1279,  1280,   977,   978,  1640,  1629,  1288,
     682,   979,  1600,   889,   688,   473,   439,  1585,  1586,  1644,
    1091,   888,   888,   871,   980,   981,   513,   514,   385,   875,
     879,  1159,   932,   903,   385,   768,  1107,   876,   880,  1659,
     933,   625,   626,   769,   770,   771,   772,   773,   431,  1160,
    1161,   468,  1100,  1162,   385,   432,   889,   888,  1332,  1333,
     889,   934,   433,  1637,   932,  1493,  1497,   822,   823,   935,
    1480,  1497,   939,  1494,  1498,  1663,  1483,   879,  1497,  1499,
    1669,   451,  1669,  1667,  1674,  1610,  1661,   472,  1670,  1316,
    1671,   471,  1675,   888,   452,  1496,   774,   384,   473,   385,
    1689,  1371,  1372,  1373,  1374,   888,   776,   777,  1317,   504,
     505,  1137,  1679,   385,  1318,   651,  1144,   385,   462,   651,
     486,   385,  1392,  1393,  1394,   888,   765,   788,   766,   942,
     943,  1657,     1,     2,     3,     4,     5,     6,     7,     8,
       9,   487,  1700,  1703,  1706,  1709,  1601,  1602,  1603,  1710,
     316,   322,   325,  -223,   948,   949,  -223,  -223,  -223,  -223,
     503,  -223,  -223,   515,  -223,  1606,  1607,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,   950,   951,  -223,  -223,
    -223,  1057,  1058,   516,  -223,  -223,   517,   767,  1102,  1103,
    1319,  1320,  1321,  1014,  1015,  1322,  1323,  1173,  1174,  1262,
    1263,  1337,  1338,  1341,  1342,   518,  -223,  -223,   524,  -223,
    1375,  1376,  1382,  1383,  1218,  1420,  1501,  1502,  -223,  1488,
     525,  -223,  -223,   538,  1508,  1509,   614,  1513,  1514,  1649,
     305,  1495,   724,   725,   768,   406,  1426,   733,   734,   385,
     401,   402,   769,   770,   771,   772,   773,  1442,  1443,   731,
     732,   926,   926,  -371,  -371,  1662,  1451,   741,   742,   410,
    1455,   415,  1457,  1458,   628,  1460,   889,   889,  1463,  1464,
    1695,  1696,   421,   458,   637,   639,  1588,   646,   647,   653,
    1591,   765,  1584,   766,   660,   799,   669,   671,   672,   680,
     681,   693,  -371,   696,   703,   774,   385,   704,   736,   705,
     735,   723,   889,   737,   738,  -371,  -371,  -371,  -371,   757,
    1384,   758,   385,   759,   760,  1403,   829,   831,   833,  1406,
    1363,   835,   845,   846,   847,  1697,   856,   848,   852,   853,
     385,   385,   894,   896,   897,   898,   385,   899,   889,   907,
     941,   385,   767,  1418,   970,   385,   946,   944,  1424,  1425,
     889,  1054,  1070,  1432,  1363,  1061,  1071,  1073,  1067,  1068,
    1441,  1072,   765,   788,   766,  1077,  1447,   689,  1449,  1084,
     889,  1452,  1085,  1086,  1095,  1456,  1096,  1101,  1116,  1114,
    1461,  1119,  1118,  1121,  1123,  1126,  1127,  1466,   765,   768,
     766,  1468,   385,  1130,  1131,  1135,  1133,   769,   770,   771,
     772,   773,  1134,  1143,  1136,  1146,  1148,  1213,  -371,  -371,
    1172,  1222,  1217,  1218,  1589,  1229,  1242,  1231,  1592,  1265,
    1273,  1593,  1472,   767,  1275,  1281,   384,  1291,   385,  1292,
    1293,  1299,   384,  1276,   385,   385,  1300,  1304,  1306,   385,
     799,  1308,  1312,  1313,  1314,  1327,  1348,  -371,  1365,   767,
     774,   384,  1369,   385,  1370,  1609,    87,  1381,  1396,  1387,
    -371,  -371,  -371,  -371,  1366,  1388,  1417,  1419,  1444,  1414,
     768,  1473,  1474,  1481,  1482,  1489,  1490,  1491,   769,   770,
     771,   772,   773,  1500,  1530,  1503,  1505,  1507,  1534,  -371,
    -371,  1492,  1535,  1522,  1536,  1528,   768,  1557,  1537,  1569,
    1626,  1590,   385,  1549,   769,   770,   771,   772,   773,  1572,
    1581,   385,  1596,  1658,  1660,  -371,  -371,  1665,  1666,  1673,
    1684,  1378,  1711,  1712,  1184,  1416,  1532,   334,  -371,  1216,
    1438,   774,  1620,  1421,   575,  1363,   594,   761,  1082,  1527,
     862,  -371,  -371,  -371,  -371,  1570,  1105,   559,  1305,   865,
     450,  1285,   867,   560,  -371,   561,   481,   774,   707,   706,
    1125,   573,  1479,   574,   756,  1510,  1587,  -371,  -371,  -371,
    -371,   596,   457,   595,   927,   644,  1083,   686,   597,   656,
     598,   645,  1080,   995,   599,  1315,   996,   997,   998,   999,
    1685,  1000,  1686,  1326,  1001,  1517,  1108,  1002,  1003,  1004,
    1005,  1006,  1007,  1008,  1009,  1010,  1504,  1605,  1011,  1012,
    1013,  1516,  1120,  1386,  1632,  1639,  1347,   857,  1531,  1598,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   384,     0,   385,     0,   384,     0,   385,     0,
       0,     0,     0,     0,     0,   385,   385,     0,   331,     0,
       0,  1014,  1015,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   385,     0,   385,     0,     0,   385,   385,     0,     0,
     385,  1641,     0,     0,   385,   385,   385,   385,     0,     0,
       0,     0,     0,  1645,     0,     0,     0,  1363,     0,     0,
    1614,  1615,     0,     0,  1363,     0,     0,   385,  1363,  1363,
    1363,  1363,     0,     0,     0,     0,     0,     0,     0,   385,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   385,
       0,     0,  1668,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    37,    38,    39,    40,    41,    42,    43,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,   364,    76,     0,     0,     0,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,   365,   366,
      86,     0,     0,     0,    88,     0,     0,     0,     0,    91,
     367,    93,   368,    95,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   369,   370,   107,   371,   109,     0,
     110,   372,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   373,   126,   127,   128,   129,
     130,   374,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     0,   144,   145,   146,     0,   375,
     148,   376,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   377,   175,   176,   378,
     178,   179,   180,   181,   182,   379,   184,   380,   186,   187,
     188,   189,   190,   191,   192,   381,   382,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,   996,   997,   998,
     999,     0,  1000,     0,     0,  1001,     0,     0,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,
    1012,  1013,     0,     0,     0,     0,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
     746,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,   747,   331,
       0,     0,  1014,  1015,     0,     0,  1097,     0,  1098,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,    84,    85,    86,
       0,     0,    87,    88,    89,    90,     0,     0,    91,    92,
      93,    94,    95,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     0,   144,   145,   146,     0,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,   746,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,    84,    85,    86,     0,
       0,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,   144,   145,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,   403,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,    84,    85,    86,     0,     0,
      87,    88,    89,    90,     0,     0,    91,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     0,   144,   145,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,    17,     0,    18,     0,    19,    20,
      21,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,   739,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,    84,    85,    86,     0,     0,    87,
      88,    89,    90,     0,     0,    91,    92,    93,    94,    95,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     0,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,    11,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,     0,     0,
      15,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,   842,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    77,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     0,    84,    85,    86,     0,     0,    87,    88,
      89,    90,     0,     0,    91,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     0,
     144,   145,   146,     0,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,    11,     0,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,     0,     0,    14,     0,     0,    15,
      16,     0,    17,     0,    18,     0,    19,    20,    21,     0,
      22,    23,    24,     0,     0,     0,     0,     0,     0,     0,
       0,   850,     0,     0,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,     0,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,    84,    85,    86,     0,     0,    87,    88,    89,
      90,     0,     0,    91,    92,    93,    94,    95,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,     0,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   144,
     145,   146,     0,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      11,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,   746,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,    84,    85,    86,     0,     0,    87,    88,    89,    90,
       0,     0,    91,    92,    93,    94,    95,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     0,   144,   145,
     146,     0,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    15,    16,     0,
      17,     0,    18,     0,    19,    20,    21,     0,    22,    23,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,     0,    77,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
      84,    85,    86,     0,     0,    87,    88,    89,    90,     0,
       0,    91,    92,    93,    94,    95,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     0,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     0,   144,   145,   146,
       0,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   364,    76,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,    84,
      85,    86,     0,     0,    87,    88,    89,    90,     0,     0,
      91,   367,    93,   368,    95,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   369,   370,   107,   371,   109,
       0,   110,   372,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,   144,   145,   146,     0,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   377,   175,   176,
     378,   178,   179,   180,   181,   182,   379,   184,   380,   186,
     187,   188,   189,   190,   191,   192,   381,   382,   195,   196,
     197,   198,   199,   200,   201,   202,   203,    11,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,    14,     0,     0,    15,    16,     0,    17,     0,
      18,     0,    19,    20,    21,     0,    22,    23,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,     0,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,    84,    85,
      86,     0,     0,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   539,   139,
     140,   141,   142,   143,     0,   144,   540,   146,     0,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,     0,     0,     0,    77,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,    84,    85,    86,
       0,     0,    87,    88,    89,    90,     0,     0,    91,    92,
      93,    94,    95,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   562,   139,   140,
     141,   142,   143,     0,   144,   540,   146,     0,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,    11,     0,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
      14,     0,     0,    15,    16,     0,    17,     0,    18,     0,
      19,    20,    21,     0,    22,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,     0,     0,     0,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,    84,    85,    86,     0,
       0,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,     0,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   576,   139,   140,   141,
     142,   143,     0,   144,   540,   146,     0,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,    84,    85,    86,     0,     0,
      87,    88,    89,    90,     0,     0,    91,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   600,   139,   140,   141,   142,
     143,     0,   144,   540,   146,     0,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,    11,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,     0,    14,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,   364,    76,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,    84,    85,    86,     0,     0,    87,
      88,    89,    90,     0,     0,    91,   367,    93,   368,    95,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     369,   370,   107,   371,   109,     0,   110,   372,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   373,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145,   146,     0,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   377,   175,   176,   378,   178,   179,   180,   181,
     182,   379,   184,   380,   186,   187,   188,   189,   190,   191,
     192,   381,   382,   195,   196,   197,   198,   199,   200,   201,
     202,   203,    12,     0,     0,     0,     0,     0,     0,     0,
       0,  1349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1350,     0,     0,     0,     0,     0,  1351,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1352,   387,    30,    31,
      32,   388,    34,    35,   389,    37,    38,    39,    40,    41,
      42,    43,  1353,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    56,    57,    58,    59,    60,    61,
      62,     0,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   364,    76,     0,     0,     0,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,   365,   366,    86,     0,     0,     0,    88,    89,    90,
       0,     0,    91,   367,    93,   368,    95,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   369,   370,   107,
     371,   109,     0,   110,   372,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   373,   126,
     127,   128,   129,   130,   374,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     0,   144,   145,
     146,     0,   390,   148,   376,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   377,
     175,   176,   378,   178,   179,   180,   181,   182,   379,   184,
     380,   186,   187,  1354,  1355,   190,   191,   192,   381,   382,
     195,   196,   197,   198,   199,   200,   201,   202,   203,    12,
       0,     0,     0,     0,     0,     0,     0,     0,  1349,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1352,   387,    30,    31,    32,   388,    34,
      35,   389,    37,    38,    39,    40,    41,    42,    43,  1353,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    56,    57,    58,    59,    60,    61,    62,     0,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,   364,    76,     0,     0,     0,    77,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,   365,   366,
      86,     0,     0,     0,    88,    89,    90,     0,     0,    91,
     367,    93,   368,    95,     0,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   369,   370,   107,   371,   109,     0,
     110,   372,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   373,   126,   127,   128,   129,
     130,   374,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     0,   144,   145,   146,     0,   390,
     148,   376,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   377,   175,   176,   378,
     178,   179,   180,   181,   182,   379,   184,   380,   186,   187,
     188,   189,   190,   191,   192,   381,   382,   195,   196,   197,
     198,   199,   200,   201,   202,   203,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     386,   387,    30,    31,    32,   388,    34,    35,   389,    37,
      38,    39,    40,    41,    42,    43,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   364,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,   365,   366,    86,     0,     0,
       0,    88,    89,    90,     0,     0,    91,   367,    93,   368,
      95,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   369,   370,   107,   371,   109,     0,   110,   372,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   373,   126,   127,   128,   129,   130,   374,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     0,   144,   145,   146,     0,   390,   148,   376,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   377,   175,   176,   378,   178,   179,   180,
     181,   182,   379,   184,   380,   186,   187,   188,   189,   190,
     191,   192,   381,   382,   195,   196,   197,   198,   199,   200,
     201,   202,   203,  1294,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   881,  1295,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   386,   387,    30,
      31,    32,   388,    34,    35,   389,   882,    38,    39,    40,
      41,    42,    43,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   364,    76,     0,     0,     0,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,   365,   366,    86,     0,     0,     0,    88,     0,
       0,     0,     0,    91,   367,    93,   368,    95,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   369,   370,
     107,   371,   109,     0,   110,   372,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   373,
     126,   127,   128,   129,   130,   374,   883,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   144,
     145,   146,     0,   390,   148,   884,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     377,   175,   176,   378,   178,   179,   180,   181,   182,   379,
     184,   380,   186,   187,   188,   189,   190,   191,   192,   381,
     382,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     631,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     632,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,    37,    38,    39,    40,    41,    42,    43,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   364,    76,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,   365,
     366,    86,     0,     0,     0,    88,     0,     0,     0,     0,
      91,   367,    93,   368,    95,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   369,   370,   107,   371,   109,
       0,   110,   372,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   373,   126,   127,   128,
     129,   130,   374,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,   144,   145,   146,     0,
     375,   148,   376,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   377,   175,   176,
     378,   178,   179,   180,   181,   182,   379,   184,   380,   186,
     187,   188,   189,   190,   191,   192,   381,   382,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   684,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      37,    38,    39,    40,    41,    42,    43,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    56,
      57,    58,    59,    60,    61,    62,     0,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,   364,
      76,     0,     0,     0,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,   365,   366,    86,     0,
       0,     0,    88,     0,     0,     0,     0,    91,   367,    93,
     368,    95,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   369,   370,   107,   371,   109,     0,   110,   372,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   373,   126,   127,   128,   129,   130,   374,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     0,   144,   145,   146,     0,   375,   148,   376,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   377,   175,   176,   378,   178,   179,
     180,   181,   182,   379,   184,   380,   186,   187,   188,   189,
     190,   191,   192,   381,   382,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   881,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   386,
     387,    30,    31,    32,   388,    34,    35,   389,   882,    38,
      39,    40,    41,    42,    43,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,    56,    57,    58,
      59,    60,    61,    62,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,   364,    76,     0,
       0,     0,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,   365,   366,    86,     0,     0,     0,
      88,     0,     0,     0,     0,    91,   367,    93,   368,    95,
       0,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     369,   370,   107,   371,   109,     0,   110,   372,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   373,   126,   127,   128,   129,   130,   374,   883,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       0,   144,   145,   146,     0,   390,   148,   884,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   377,   175,   176,   378,   178,   179,   180,   181,
     182,   379,   184,   380,   186,   187,   188,   189,   190,   191,
     192,   381,   382,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   881,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   386,   387,    30,
      31,    32,   388,    34,    35,   389,    37,    38,    39,    40,
      41,    42,    43,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   364,    76,     0,     0,     0,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,   365,   366,    86,     0,     0,     0,    88,     0,
       0,     0,     0,    91,   367,    93,   368,    95,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   369,   370,
     107,   371,   109,     0,   110,   372,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   373,
     126,   127,   128,   129,   130,   374,   883,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   144,
     145,   146,     0,   390,   148,   884,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     377,   175,   176,   378,   178,   179,   180,   181,   182,   379,
     184,   380,   186,   187,   188,   189,   190,   191,   192,   381,
     382,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     648,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   343,   344,   345,   346,   347,   348,
     349,   350,   351,    37,    38,    39,    40,    41,    42,    43,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    56,    57,    58,    59,    60,    61,    62,     0,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,   364,    76,     0,     0,     0,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,   365,
     366,    86,     0,     0,   649,    88,     0,     0,     0,     0,
      91,   367,    93,   368,    95,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   369,   370,   107,   371,   109,
       0,   110,   372,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   373,   126,   127,   128,
     129,   130,   374,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     0,   144,   145,   146,     0,
     375,   148,   376,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   377,   175,   176,
     378,   178,   179,   180,   181,   182,   379,   184,   380,   186,
     187,   188,   189,   190,   191,   192,   381,   382,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    37,    38,    39,    40,
      41,    42,    43,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    56,    57,    58,    59,    60,
      61,    62,     0,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,   364,    76,     0,     0,     0,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,   365,   366,    86,     0,     0,     0,    88,     0,
       0,     0,     0,    91,   367,    93,   368,    95,     0,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   369,   370,
     107,   371,   109,     0,   110,   372,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   373,
     126,   127,   128,   129,   130,   374,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     0,   144,
     145,   146,     0,   375,   148,   376,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     377,   175,   176,   378,   178,   179,   180,   181,   182,   379,
     184,   380,   186,   187,   188,   189,   190,   191,   192,   381,
     382,   195,   196,   197,   198,   199,   200,   201,   202,   203,
      38,    39,    40,    41,    42,    43,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    56,    57,
      58,    59,    60,    61,    62,     0,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   364,    76,
       0,     0,     0,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,   365,   366,    86,     0,     0,
       0,    88,     0,     0,     0,     0,    91,   367,    93,   368,
      95,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   369,   370,   107,     0,   109,     0,   110,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   373,   126,   127,   128,   129,   130,   374,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     0,   144,   145,   146,     0,     0,   148,     0,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   377,   175,   176,   378,   178,   179,   180,
     181,   182,   379,   184,   380,   186,   187,   188,   189,   190,
     191,   192,   381,   382,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,  1404,     0,     0,   996,   997,   998,
     999,     0,  1000,     0,     0,  1001,     0,     0,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,
    1012,  1013,  1407,     0,     0,   996,   997,   998,   999,     0,
    1000,     0,     0,  1001,     0,     0,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,  1013,
    1427,     0,     0,   996,   997,   998,   999,     0,  1000,   331,
       0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,     0,     0,  1011,  1012,  1013,  1439,     0,
       0,   996,   997,   998,   999,     0,  1000,   331,     0,  1001,
    1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,     0,     0,  1011,  1012,  1013,  1448,     0,     0,   996,
     997,   998,   999,     0,  1000,   331,     0,  1001,  1014,  1015,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,
       0,  1011,  1012,  1013,  1450,     0,     0,   996,   997,   998,
     999,     0,  1000,   331,     0,  1001,  1014,  1015,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,
    1012,  1013,  1453,     0,     0,   996,   997,   998,   999,     0,
    1000,   331,     0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,  1013,
    1454,     0,     0,   996,   997,   998,   999,     0,  1000,   331,
       0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,     0,     0,  1011,  1012,  1013,  1459,     0,
       0,   996,   997,   998,   999,     0,  1000,   331,     0,  1001,
    1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,     0,     0,  1011,  1012,  1013,  1462,     0,     0,   996,
     997,   998,   999,     0,  1000,   331,     0,  1001,  1014,  1015,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,
       0,  1011,  1012,  1013,  1465,     0,     0,   996,   997,   998,
     999,     0,  1000,   331,     0,  1001,  1014,  1015,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,
    1012,  1013,  1467,     0,     0,   996,   997,   998,   999,     0,
    1000,   331,     0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,  1013,
    1469,     0,     0,   996,   997,   998,   999,     0,  1000,   331,
       0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,     0,     0,  1011,  1012,  1013,  1567,     0,
       0,   996,   997,   998,   999,     0,  1000,   331,     0,  1001,
    1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,     0,     0,  1011,  1012,  1013,  1568,     0,     0,   996,
     997,   998,   999,     0,  1000,   331,     0,  1001,  1014,  1015,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,
       0,  1011,  1012,  1013,  1573,     0,     0,   996,   997,   998,
     999,     0,  1000,   331,     0,  1001,  1014,  1015,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,     0,  1011,
    1012,  1013,  1579,     0,     0,   996,   997,   998,   999,     0,
    1000,   331,     0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,     0,     0,  1011,  1012,  1013,
    1642,     0,     0,   996,   997,   998,   999,     0,  1000,   331,
       0,  1001,  1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,     0,     0,  1011,  1012,  1013,  1643,     0,
       0,   996,   997,   998,   999,     0,  1000,   331,     0,  1001,
    1014,  1015,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1010,     0,     0,  1011,  1012,  1013,  1646,     0,     0,   996,
     997,   998,   999,     0,  1000,   331,     0,  1001,  1014,  1015,
    1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,     0,
       0,  1011,  1012,  1013,  1647,     0,     0,   996,   997,   998,
     999,     0,  1000,   331,     0,  1001,  1014,  1015,  1002,  1003,
    1004,  1005,  1006,  1007,  1008,  1009,  1010,  1195,     0,  1011,
    1012,  1013,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   331,     0,     0,  1014,  1015,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1196,     0,  1197,
    1198,  1199,  1200,  1201,  1202,  1203,     0,     0,     0,   331,
       0,     0,  1014,  1015,  1204,  1205,  1206,  1207,  1208,  1209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1210,
    1211,  1212
};

static const yytype_int16 yycheck[] =
{
      24,   341,     9,   506,   232,  1177,   694,   723,   668,   969,
     670,  1377,    11,   673,    11,   329,    13,  1162,   624,  1267,
    1096,   507,   508,   509,   510,   329,   723,  1321,   735,   736,
     406,   771,    66,   537,   315,   775,   538,   541,   542,   543,
      13,   545,   546,   419,   420,   321,    17,  1356,    36,   909,
     554,    13,   556,   329,   558,     3,     4,     5,    62,   563,
     564,   565,   566,   567,   568,   569,   570,   285,   572,   287,
    1535,   321,   693,   577,   578,   579,    43,   581,   582,   329,
     435,   125,   458,    12,   588,   440,   590,    43,   443,   593,
    1358,   125,   447,    51,    62,    51,  1539,   601,   602,   603,
     604,   605,   606,   607,   608,    15,   610,    12,    36,   987,
     321,   989,   614,   315,   735,   736,  1364,    36,   329,   321,
     252,   321,   125,    43,   831,   125,    15,   329,    43,   329,
     104,    12,   128,   155,   128,   776,   777,    14,    37,    38,
     117,  1019,   321,    43,    53,   183,    43,   122,   153,    44,
     329,  1029,    37,    38,    51,   321,  1034,    24,  1036,   321,
    1038,    62,  1040,   329,  1042,   283,  1044,   329,  1046,    35,
      65,   283,  1050,   147,  1052,    51,    43,    43,    37,    38,
     176,   186,   176,   282,   316,    51,    52,  1147,   306,    55,
      56,    57,   186,   909,   315,   911,    73,   117,   310,   315,
     321,  1666,   117,   225,   226,   321,   107,   306,   329,   186,
     831,   233,   909,   329,   911,   122,   178,   117,   878,    35,
     178,  1664,   315,   151,   134,   229,     0,   315,   321,   134,
     127,    12,   151,   321,   222,    51,   329,   315,   315,   214,
     215,   329,   118,   321,   321,   242,   464,   128,   245,  1109,
     468,   329,   329,    12,   472,   473,   474,   761,  1552,   477,
     881,   229,   128,    44,   235,   164,   768,   234,   197,   242,
     179,   186,   245,  1541,  1542,  1543,  1544,   321,   167,   323,
     247,   248,   249,   250,    22,   599,   186,   243,   165,   166,
     324,   325,   326,    28,   575,   599,    55,    56,    57,   194,
     941,   208,  1180,  1669,  1613,   164,  1184,   214,   215,    22,
      45,   529,   953,    51,   532,  1055,   671,   693,   321,   322,
     596,   321,   322,   599,   283,   966,    50,    51,   335,    15,
      43,   216,   217,   218,   689,    22,  1584,    48,    71,    72,
      51,    48,    43,  1221,    51,   281,   596,   306,   703,   599,
      51,   108,    12,   193,   290,  1233,    43,    43,  1530,   735,
     736,   737,   738,    14,    51,    51,    36,   132,   316,   128,
      50,    51,   105,   575,   322,    26,   133,   325,  1672,  1086,
     246,   110,    52,   407,    44,   596,    37,   411,   599,   127,
    1535,  1536,   416,  1109,   596,   119,   596,   599,   422,   599,
    1116,   400,  1118,   400,   211,   212,   213,   118,  1553,   406,
     434,   118,  1109,  1054,   438,   439,   415,   596,   415,  1116,
     599,  1118,   419,   420,  1500,   251,   127,   451,   452,   453,
     596,   108,   258,   599,   596,   459,   435,   599,   435,   119,
     127,   440,    26,   440,   443,    43,   443,   665,   447,  1137,
     447,  1057,  1058,    43,   575,   831,    54,   675,   676,   575,
      44,   458,   964,   839,   228,  1086,   968,    43,   251,  1129,
      51,  1178,   471,   179,   471,   596,  1183,    43,   599,   243,
     596,  1188,   575,   599,   190,  1192,   704,   575,  1633,  1130,
      71,    72,  1133,  1134,    35,   519,    36,   575,   575,   875,
     524,   525,    43,   596,   528,   881,   599,  1148,   596,    43,
      51,   599,    52,   296,    55,    56,    57,    36,   596,   596,
    1398,   599,   599,   306,    68,    69,    70,    25,   306,  1674,
      43,   309,  1239,    52,   752,   753,   754,   283,    36,   538,
      27,   538,  1420,    30,    31,    25,   283,    34,    51,   295,
      16,    17,    18,    19,    20,    21,    36,  1178,  1436,   305,
      35,    27,  1183,    47,    51,    49,  1444,  1188,    43,   306,
    1448,  1192,   309,   310,    40,  1282,    51,    33,    22,  1286,
      55,    56,    57,    39,  1272,   129,   283,   128,  1548,   274,
      43,   946,   488,   489,   490,   491,   492,   493,    51,   495,
     496,   497,   498,   499,   500,   501,   502,    36,   305,   306,
      12,  1327,    36,   637,    68,   614,    70,   614,  1239,    36,
      36,   306,    12,    52,  1128,    33,   311,   312,    52,   653,
    1327,    39,   176,   120,   121,    52,    52,    68,   856,    70,
     184,   185,   186,   187,   188,   111,   112,   113,   114,   115,
     116,    36,    47,   128,    49,    36,   680,   681,    36,   283,
      36,  1282,    25,   195,   196,  1286,    44,    52,  1356,   293,
     141,    52,   671,    36,   671,   129,    52,   148,   896,   897,
     898,   305,   306,   227,   912,    36,   282,   283,    25,   907,
     689,    22,   689,   237,    33,    43,   693,   283,   129,    36,
      39,    52,   234,    51,   703,   246,   703,   173,   304,   305,
    1086,   307,    12,  1053,   932,   247,   248,   249,   250,   305,
     306,    51,   176,   194,   195,   196,    36,    36,  1369,  1370,
     184,   185,   186,   187,   188,    36,   283,  1378,   735,   736,
     737,   738,    52,    52,   174,   176,   293,   294,    22,    35,
     180,    52,    36,   184,   185,   186,   187,   188,   305,   306,
     309,   167,   183,   169,  1268,    51,   315,    15,    52,   768,
     191,   768,   321,   227,   773,    36,   773,    68,    69,    70,
     329,    88,  1470,   237,    91,  1492,  1493,    94,    95,    96,
      97,    52,   251,   134,   135,    43,   137,   138,   139,   258,
     141,   142,  1178,    51,  1144,    36,   237,  1183,    22,   283,
     189,    22,  1188,    44,   193,   183,  1192,  1320,   714,   293,
     294,  1528,   829,   191,    22,   183,  1329,  1330,  1314,   183,
     827,   305,   306,   191,   831,    36,  1496,   191,   129,    22,
     239,  1529,   839,    44,   243,    22,   251,   154,   253,  1067,
     125,   126,  1070,  1071,  1072,   260,   261,  1564,  1546,  1077,
     457,   266,  1503,  1239,   461,    36,    51,  1473,  1474,  1576,
     894,  1492,  1493,    44,   279,   280,   168,   169,   875,    36,
      36,   188,    36,  1101,   881,   176,   910,    44,    44,  1596,
      44,   108,   109,   184,   185,   186,   187,   188,    22,   206,
     207,    62,   901,   210,   901,    22,  1282,  1528,  1126,  1127,
    1286,   223,    22,  1554,    36,    36,    36,   317,   318,   231,
    1275,    36,    44,    44,    44,  1613,  1281,    36,    36,    44,
      36,    43,    36,  1621,    36,    44,    44,   242,    44,    98,
      44,   237,    44,  1564,    43,  1300,   237,   946,    36,   946,
    1666,    94,    95,    96,    97,  1576,   192,   193,   117,    37,
      38,   960,  1650,   960,   123,   964,   963,   964,    43,   968,
     159,   968,    55,    56,    57,  1596,    68,    69,    70,   174,
     175,  1587,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   160,  1680,  1681,  1682,  1683,   216,   217,   218,  1687,
       3,     4,     5,   251,   174,   175,   254,   255,   256,   257,
     198,   259,   260,   161,   262,  1518,  1519,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   123,   124,   276,   277,
     278,   125,   126,   172,   282,   283,   163,   129,   143,   144,
     199,   200,   201,   319,   320,   204,   205,   291,   292,   296,
     297,   146,   147,   181,   182,   171,   304,   305,    24,   307,
      89,    90,    89,    90,   263,   264,   146,   147,   316,  1287,
      24,   319,   320,   176,   102,   103,   176,   219,   220,  1583,
     193,  1299,   504,   505,   176,    43,  1224,   513,   514,  1086,
      19,    20,   184,   185,   186,   187,   188,  1235,  1236,   511,
     512,   737,   738,   195,   196,  1608,  1244,   522,   523,    43,
    1248,    43,  1250,  1251,    32,  1253,  1492,  1493,  1256,  1257,
    1676,  1677,    43,    43,    51,    44,  1481,    44,    44,    51,
    1485,    68,  1472,    70,    44,   227,    36,    12,    36,    51,
      51,   155,   234,   162,    12,   237,  1143,   140,   155,   141,
     162,    66,  1528,   155,   155,   247,   248,   249,   250,    55,
    1159,   128,  1159,   128,    53,  1189,   183,   155,   108,  1193,
    1143,   109,    44,    44,    44,  1679,    13,    44,    44,    44,
    1177,  1178,    51,   228,    62,   155,  1183,   228,  1564,   140,
      40,  1188,   129,  1217,    87,  1192,    12,   128,  1222,  1223,
    1576,    40,    13,  1227,  1177,   133,    13,   153,   134,   117,
    1234,   136,    68,    69,    70,   157,  1240,    12,  1242,    43,
    1596,  1245,    43,    43,    43,  1249,    43,    36,   244,    93,
    1254,    86,   245,   202,    26,   233,   233,  1261,    68,   176,
      70,  1265,  1239,    40,   145,    36,   176,   184,   185,   186,
     187,   188,   176,   238,   128,   194,   117,   251,   195,   196,
      87,   308,   306,   263,  1482,   283,   306,   251,  1486,   306,
      44,  1489,  1269,   129,    12,    12,  1275,    44,  1275,    44,
      44,   228,  1281,   197,  1281,  1282,    12,   228,   145,  1286,
     227,    44,   100,   216,    99,   136,    36,   234,    40,   129,
     237,  1300,    36,  1300,    40,  1523,   128,   216,   260,   292,
     247,   248,   249,   250,   176,   291,   251,   308,   275,   125,
     176,    46,    46,    12,   136,   158,    44,    44,   184,   185,
     186,   187,   188,    43,   238,   148,    52,    99,    22,   195,
     196,   155,    43,   203,    43,   155,   176,   128,    15,   125,
      24,   155,  1349,   216,   184,   185,   186,   187,   188,   251,
     251,  1358,   155,   134,    13,   195,   196,    44,    36,   209,
      29,   117,    44,   209,   985,  1212,  1349,     6,   234,   997,
    1230,   237,  1537,  1219,   317,  1358,   322,   536,   879,  1344,
     669,   247,   248,   249,   250,  1419,   907,   310,  1101,   672,
     106,  1074,   674,   310,   234,   311,   208,   237,   487,   486,
     932,   316,  1272,   316,   532,  1319,  1475,   247,   248,   249,
     250,   323,   131,   322,   738,   412,   881,   458,   325,   419,
     325,   412,   875,   251,   328,  1116,   254,   255,   256,   257,
    1658,   259,  1660,  1118,   262,  1327,   911,   265,   266,   267,
     268,   269,   270,   271,   272,   273,  1309,  1512,   276,   277,
     278,  1323,   920,  1172,  1551,  1556,  1137,   664,  1348,  1497,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1481,    -1,  1481,    -1,  1485,    -1,  1485,    -1,
      -1,    -1,    -1,    -1,    -1,  1492,  1493,    -1,   316,    -1,
      -1,   319,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1528,    -1,  1530,    -1,    -1,  1533,  1534,    -1,    -1,
    1537,  1565,    -1,    -1,  1541,  1542,  1543,  1544,    -1,    -1,
      -1,    -1,    -1,  1577,    -1,    -1,    -1,  1530,    -1,    -1,
    1533,  1534,    -1,    -1,  1537,    -1,    -1,  1564,  1541,  1542,
    1543,  1544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1576,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1596,
      -1,    -1,  1626,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    -1,   190,   191,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,    -1,   254,   255,   256,
     257,    -1,   259,    -1,    -1,   262,    -1,    -1,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    44,   316,
      -1,    -1,   319,   320,    -1,    -1,   321,    -1,   323,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,   111,   112,   113,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,   190,   191,   192,    -1,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,   190,   191,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,   190,   191,   192,    -1,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,   111,   112,   113,   114,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,   190,   191,   192,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    -1,    -1,
      -1,   111,   112,   113,   114,   115,   116,   117,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,    -1,    -1,   128,   129,
     130,   131,    -1,    -1,   134,   135,   136,   137,   138,    -1,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,    -1,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
     190,   191,   192,    -1,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,
      31,    -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,    -1,    -1,   128,   129,   130,
     131,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,    -1,   190,
     191,   192,    -1,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,    -1,    -1,   128,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,   190,   191,
     192,    -1,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,
      33,    -1,    35,    -1,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,   111,   112,
     113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,    -1,    -1,   128,   129,   130,   131,    -1,
      -1,   134,   135,   136,   137,   138,    -1,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,    -1,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,   190,   191,   192,
      -1,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,   128,   129,   130,   131,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,   190,   191,   192,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    12,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,
      35,    -1,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,   128,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    -1,   190,   191,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,   111,   112,   113,   114,   115,
     116,   117,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
      -1,    -1,   128,   129,   130,   131,    -1,    -1,   134,   135,
     136,   137,   138,    -1,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,    -1,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,    -1,   190,   191,   192,    -1,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,
      37,    38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,   128,   129,   130,   131,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,   190,   191,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
     128,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,   190,   191,   192,    -1,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    12,    -1,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,   111,   112,   113,   114,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,   128,
     129,   130,   131,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,   190,   191,   192,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,   111,
     112,   113,   114,   115,   116,   117,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,    -1,    -1,    -1,   129,   130,   131,
      -1,    -1,   134,   135,   136,   137,   138,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    -1,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,    -1,   190,   191,
     192,    -1,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,   111,   112,   113,   114,
     115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,    -1,    -1,    -1,   129,   130,   131,    -1,    -1,   134,
     135,   136,   137,   138,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,    -1,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,    -1,   190,   191,   192,    -1,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,   130,   131,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    -1,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,   190,   191,   192,    -1,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,    -1,   190,
     191,   192,    -1,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,   190,   191,   192,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,   111,   112,   113,   114,   115,   116,
     117,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,    -1,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    -1,   190,   191,   192,    -1,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,   111,   112,   113,   114,   115,   116,   117,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,    -1,
     129,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
      -1,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,    -1,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
      -1,   190,   191,   192,    -1,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,    -1,   190,
     191,   192,    -1,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,   111,   112,   113,
     114,   115,   116,   117,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,    -1,    -1,   128,   129,    -1,    -1,    -1,    -1,
     134,   135,   136,   137,   138,    -1,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      -1,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,    -1,   190,   191,   192,    -1,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
     111,   112,   113,   114,   115,   116,   117,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,    -1,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    -1,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,    -1,   190,
     191,   192,    -1,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    -1,   111,   112,   113,   114,   115,   116,   117,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,    -1,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    -1,   153,    -1,   155,    -1,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,    -1,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,    -1,   190,   191,   192,    -1,    -1,   195,    -1,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,    -1,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,    -1,    -1,   262,    -1,    -1,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,    -1,    -1,   262,    -1,    -1,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   316,
      -1,   262,   319,   320,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   316,    -1,   262,
     319,   320,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   316,    -1,   262,   319,   320,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   316,    -1,   262,   319,   320,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,   316,    -1,   262,   319,   320,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   316,
      -1,   262,   319,   320,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   316,    -1,   262,
     319,   320,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   316,    -1,   262,   319,   320,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   316,    -1,   262,   319,   320,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,   316,    -1,   262,   319,   320,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   316,
      -1,   262,   319,   320,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   316,    -1,   262,
     319,   320,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   316,    -1,   262,   319,   320,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   316,    -1,   262,   319,   320,   265,   266,
     267,   268,   269,   270,   271,   272,   273,    -1,    -1,   276,
     277,   278,   251,    -1,    -1,   254,   255,   256,   257,    -1,
     259,   316,    -1,   262,   319,   320,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,   276,   277,   278,
     251,    -1,    -1,   254,   255,   256,   257,    -1,   259,   316,
      -1,   262,   319,   320,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,   276,   277,   278,   251,    -1,
      -1,   254,   255,   256,   257,    -1,   259,   316,    -1,   262,
     319,   320,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,   276,   277,   278,   251,    -1,    -1,   254,
     255,   256,   257,    -1,   259,   316,    -1,   262,   319,   320,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,   276,   277,   278,   251,    -1,    -1,   254,   255,   256,
     257,    -1,   259,   316,    -1,   262,   319,   320,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   251,    -1,   276,
     277,   278,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   316,    -1,    -1,   319,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,   283,
     284,   285,   286,   287,   288,   289,    -1,    -1,    -1,   316,
      -1,    -1,   319,   320,   298,   299,   300,   301,   302,   303,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   313,
     314,   315
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     328,    12,    14,    23,    27,    30,    31,    33,    35,    37,
      38,    39,    41,    42,    43,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   111,   112,   113,
     114,   115,   116,   117,   123,   124,   125,   128,   129,   130,
     131,   134,   135,   136,   137,   138,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   190,   191,   192,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   474,   475,   476,   477,   478,   479,
     481,   486,   497,   500,   506,   507,   508,   509,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   550,   551,   552,   553,   554,
     557,   558,   559,   570,   572,   574,   575,   576,   579,   581,
     582,   583,   584,   594,   595,   596,   597,   598,   599,   600,
     601,   603,   605,   607,   648,   649,   650,   651,   652,   653,
     654,   657,   658,   659,   660,   662,   669,   670,   674,   675,
     676,   677,   683,   684,   189,   193,   420,   421,   422,   423,
     434,   439,   425,   426,   427,   428,   434,   439,   429,   430,
     431,   432,   434,   439,   433,   434,   437,   438,   439,   440,
     252,   316,   336,   337,   359,   183,   329,   193,   332,   333,
     331,   467,     0,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   106,   123,   124,   135,   137,   149,
     150,   152,   156,   170,   176,   194,   196,   221,   224,   230,
     232,   240,   241,   549,   683,   684,    58,    59,    63,    66,
     194,   541,   125,   126,   560,   132,   110,   571,   530,   108,
     562,   521,   521,    44,   475,    22,    43,    51,   127,   580,
      43,    51,    43,    43,    43,    43,    51,   127,   585,    43,
      43,    43,    51,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    51,    12,   655,   656,    51,    51,
      12,   482,   483,    12,   197,   487,   488,    12,   498,   499,
     498,    43,    43,    51,    71,    72,    22,   585,    43,    51,
     127,   577,    43,   465,    62,   107,    62,   229,    62,    62,
     229,   237,   242,    36,   134,   135,   137,   138,   139,   141,
     142,   479,   480,   489,   490,   491,   159,   160,    16,    17,
      18,    19,    20,    21,    27,    40,   111,   112,   113,   114,
     115,   116,   173,   198,    37,    38,   164,    14,    73,   165,
     166,    15,   167,   168,   169,   161,   172,   163,   171,    51,
     526,   530,    33,    39,    24,    24,   541,   541,    24,    43,
     476,   476,    43,    54,   179,   190,   435,   436,   176,   183,
     191,   424,   442,   444,   445,   446,   447,   449,   450,   451,
     454,   455,   456,   459,   460,   462,   463,   474,   663,   421,
     422,   423,   183,   424,   442,   444,   446,   447,   448,   460,
     463,   474,   663,   426,   427,   428,   183,   441,   442,   444,
     445,   446,   447,   449,   450,   451,   454,   455,   460,   462,
     463,   474,   647,   663,   430,   431,   432,   437,   438,   440,
     183,   441,   442,   444,   446,   447,   448,   460,   463,   474,
     663,   338,   360,   467,   176,   334,   234,   247,   248,   249,
     250,   465,   468,   469,   561,   108,   109,   573,    32,   683,
      44,    14,    44,   602,   609,   662,   475,    51,   578,    44,
     475,    44,    65,   194,   605,   607,    44,    44,    44,   128,
     661,   683,   475,    51,   586,   604,   609,   608,   610,   662,
      44,   475,   475,   549,    36,   222,   475,   475,   549,    36,
     549,    12,    36,   549,    36,   151,   151,   475,   475,   475,
      51,    51,   578,    14,    44,   606,   610,   475,   578,    12,
      44,   471,   472,   155,   589,   476,   162,   476,   683,   476,
     476,   476,   476,    12,   140,   141,   508,   509,   511,   511,
     511,   511,   511,   511,   510,   511,   511,   511,   511,   511,
     511,   511,   511,    66,   514,   514,   513,   515,   515,   515,
     515,   516,   516,   517,   517,   162,   155,   155,   155,    52,
     475,   531,   531,   475,   475,   475,    26,    44,   476,   555,
     556,   155,   225,   226,   233,    44,   555,    55,   128,   128,
      53,   436,   443,   443,   661,    68,    70,   129,   176,   184,
     185,   186,   187,   188,   237,   467,   192,   193,   443,   443,
     443,   443,   443,   443,   443,   443,   183,   191,    69,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   183,   227,
     443,   443,   443,   443,   443,   443,   443,   443,   183,   183,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   281,
     290,   339,   317,   318,   362,   195,   196,   464,   661,   183,
     335,   155,   470,   108,   562,   109,   108,   133,   527,    36,
      44,    52,    52,   475,    52,    44,    44,    44,    44,    52,
      52,   475,    44,    44,    52,    52,    13,   656,   476,    52,
      52,   589,   483,   589,   549,   488,   589,   499,   476,   476,
      44,    44,    52,   475,   475,    36,    44,    52,   549,    36,
      44,    43,    67,   177,   196,   590,   592,   593,   594,   662,
     678,   679,   680,   682,    51,   473,   228,    62,   155,   228,
     228,   243,   549,   476,   492,   493,   494,   140,   511,    43,
      51,   246,   525,   546,   613,   616,   617,   618,   619,   620,
     621,   622,   623,   590,   590,   587,   593,   587,    52,    25,
      25,    25,    36,    44,   223,   231,   476,   476,   476,    44,
     443,    40,   174,   175,   128,   612,    12,   661,   174,   175,
     123,   124,   141,   148,   194,   464,   174,   180,   452,   683,
     239,   243,   666,   464,   176,   186,   458,   612,   176,   612,
      87,   630,    71,    72,   105,   251,   253,   260,   261,   266,
     279,   280,   340,   341,   344,   345,   349,   350,   351,   352,
     353,   354,   357,   358,   361,   251,   254,   255,   256,   257,
     259,   262,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   276,   277,   278,   319,   320,   359,   363,   364,   365,
     366,   367,   368,   369,   372,   373,   377,   378,   379,   380,
     381,   386,   387,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   684,    40,   467,   590,   125,   126,    28,
      45,   133,   611,   662,    52,    52,   476,   134,   117,   484,
      13,    13,   136,   153,   501,   503,   504,   157,    52,    52,
     611,   589,   472,   592,    43,    43,    43,    14,    26,    37,
     591,   475,   476,   476,   476,    43,    43,   321,   323,   671,
     683,    36,   143,   144,   495,   492,   613,   475,   620,    51,
     211,   212,   213,   624,    93,   646,   244,   615,   245,    86,
     630,   202,   625,    26,   588,   556,   233,   233,   612,   549,
      40,   145,   612,   176,   176,    36,   128,   683,   125,   321,
     322,   667,   668,   238,   684,   661,   194,   612,   117,   457,
     661,   457,    88,    91,    94,    95,    96,    97,   154,   188,
     206,   207,   210,   631,   632,   633,   634,   635,   638,   643,
     644,   645,    87,   291,   292,   282,   283,   304,   305,   307,
     346,   283,   295,   305,   346,   283,   293,   294,   305,   306,
     362,   283,   305,   306,   362,   251,   281,   283,   284,   285,
     286,   287,   288,   289,   298,   299,   300,   301,   302,   303,
     313,   314,   315,   251,   118,   473,   367,   306,   263,   382,
     383,   384,   308,   306,   309,   362,   282,   306,   371,   283,
     374,   251,   362,   274,   306,   311,   312,   388,   283,   305,
     306,   362,   306,   362,   283,   306,   362,   362,   283,   306,
     309,   310,   362,   283,   306,   362,   283,   310,   362,   251,
     296,   306,   296,   297,   362,   306,   362,   465,   612,   464,
     562,   562,   569,    44,   476,    12,   197,   485,   476,   476,
     476,    12,   505,   186,   502,   503,    15,   134,   476,    26,
      44,    44,    44,    44,    14,    44,   590,   681,    52,   228,
      12,   672,   673,   672,   228,   493,   145,   496,    44,    52,
      52,   613,   100,   216,    99,   617,    98,   117,   123,   199,
     200,   201,   204,   205,   614,   627,   618,   136,   122,   214,
     215,   626,   476,   476,   443,   589,   612,   146,   147,   612,
     612,   181,   182,   453,    43,   473,   665,   666,    36,    23,
      33,    39,    58,    74,   235,   236,   410,   411,   412,   413,
     416,   417,   418,   541,   465,    40,   176,   457,   612,    36,
      40,    94,    95,    96,    97,    89,    90,    43,   117,   186,
     637,   216,    89,    90,   683,   660,   631,   292,   291,   342,
     410,   590,    55,    56,    57,   343,   260,   347,   348,   362,
     590,   362,   590,   475,   251,   590,   475,   251,    66,   125,
     324,   325,   326,   355,   125,   356,   356,   251,   475,   308,
     264,   383,   385,   362,   475,   475,   361,   251,   125,   321,
     323,   370,   475,   251,   258,   375,   376,   251,   375,   251,
     362,   475,   361,   361,   275,   389,   590,   475,   251,   475,
     251,   361,   475,   251,   251,   361,   475,   361,   361,   251,
     361,   475,   251,   361,   361,   251,   475,   251,   475,   251,
     470,   443,   684,    46,    46,    34,   120,   121,   473,   558,
     549,    12,   136,   549,   590,    12,   134,   590,   476,   158,
      44,    44,   155,    36,    44,   476,   549,    36,    44,    44,
      43,   146,   147,   148,   624,    52,   515,    99,   102,   103,
     512,   513,   626,   219,   220,   629,   629,   619,   104,   147,
     513,   513,   203,    13,   178,   461,    44,   471,   155,   664,
     238,   668,   541,    22,    22,    43,    43,    15,   473,   665,
     417,    33,    39,    33,    39,   419,   470,   612,   612,   216,
     186,   637,   612,    43,   117,   186,   640,   128,   125,   321,
     322,   283,   293,   294,   305,   306,   362,   251,   251,   125,
     475,   362,   251,   251,   283,   293,   305,   306,   362,   251,
     362,   251,   362,   473,   465,   562,   562,   560,   549,   476,
     155,   549,   476,   476,   590,   590,   155,   589,   673,   672,
     612,   216,   217,   218,   628,   628,   513,   513,   164,   476,
      44,   590,   473,   410,   541,   541,   414,   548,   660,   660,
     411,   664,   417,   417,   417,   417,    24,   178,   466,   473,
     457,   636,   636,   208,   626,   641,   660,   612,   639,   639,
     590,   475,   251,   251,   590,   475,   251,   251,   330,   443,
     470,    47,    49,   563,    47,    49,   564,   562,   134,   590,
      13,    44,   513,   473,   665,    44,    36,   473,   475,    36,
      44,    44,   660,   209,    36,    44,   167,   169,   642,   473,
     565,   567,   566,   568,    29,   476,   476,   664,   415,   546,
     548,    25,   637,   626,   660,   640,   640,   443,    48,   118,
     473,    50,   119,   473,    48,   118,   473,    50,   119,   473,
     473,    44,   209
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
        case 11:

/* Line 1455 of yacc.c  */
#line 772 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 783 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 792 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 803 "../src/parser/XQParser.y"
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

  case 17:

/* Line 1455 of yacc.c  */
#line 840 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 844 "../src/parser/XQParser.y"
    {
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 850 "../src/parser/XQParser.y"
    {
    XMLBuffer buf;

    const XMLCh *localname = XPath2NSUtils::getLocalName((yyvsp[(4) - (8)].str));

    printf("  {\n    \"%s\", %d, %s, %d, %d,\n", UTF8(localname), ((yyvsp[(5) - (8)].argSpecs) ? (yyvsp[(5) - (8)].argSpecs)->size() : 0),
           (yyvsp[(2) - (8)].signature)->privateOption == FunctionSignature::OP_TRUE ? "true" : "false", (yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column);
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

  case 20:

/* Line 1455 of yacc.c  */
#line 886 "../src/parser/XQParser.y"
    {
    SequenceType *optionalString =
      WRAP((yylsp[(1) - (1)]), new (MEMMGR) SequenceType(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                         AnyAtomicType::fgDT_ANYATOMICTYPE,
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

    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    ASTNode *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQFunctionCall(0, XQFunction::XMLChFunctionURI,
                                                           MEMMGR->getPooledString("exists"), args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 917 "../src/parser/XQParser.y"
    {
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 920 "../src/parser/XQParser.y"
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

    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, signature, (yyvsp[(1) - (1)].astNode), MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 944 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 948 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 966 "../src/parser/XQParser.y"
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

  case 34:

/* Line 1455 of yacc.c  */
#line 985 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 990 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 995 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1002 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1007 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1012 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1020 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1024 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1030 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1035 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1045 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->getSignature()->argSpecs = (yyvsp[(2) - (4)].argSpecs);
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1058 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1063 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1070 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1075 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1083 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1087 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1095 "../src/parser/XQParser.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 1122 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1126 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1133 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1139 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1144 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1149 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1158 "../src/parser/XQParser.y"
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

  case 62:

/* Line 1455 of yacc.c  */
#line 1182 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1186 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1193 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1198 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1203 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1219 "../src/parser/XQParser.y"
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

  case 69:

/* Line 1455 of yacc.c  */
#line 1237 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1241 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1248 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1253 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1261 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1286 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1289 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1292 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1295 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1298 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1301 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1304 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1307 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1310 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1313 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1316 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1319 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1322 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1325 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1328 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1331 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1334 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1337 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1347 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1359 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1362 "../src/parser/XQParser.y"
    {
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1370 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1375 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1380 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1388 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1396 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1407 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1417 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1421 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1428 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1437 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1441 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1446 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1456 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1460 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1465 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1470 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1499 "../src/parser/XQParser.y"
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

  case 135:

/* Line 1455 of yacc.c  */
#line 1517 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1521 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1535 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1544 "../src/parser/XQParser.y"
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

  case 142:

/* Line 1455 of yacc.c  */
#line 1564 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1568 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1573 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1581 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1586 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1590 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1597 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1601 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1609 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1622 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1636 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1640 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1648 "../src/parser/XQParser.y"
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

  case 156:

/* Line 1455 of yacc.c  */
#line 1666 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1670 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1677 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1682 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1687 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1695 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1701 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1709 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1724 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1738 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1742 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1756 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1765 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1772 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1776 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1783 "../src/parser/XQParser.y"
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

  case 173:

/* Line 1455 of yacc.c  */
#line 1818 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1822 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1827 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1842 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1846 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1853 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1857 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1864 "../src/parser/XQParser.y"
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

  case 182:

/* Line 1455 of yacc.c  */
#line 1882 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1886 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1893 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1898 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1906 "../src/parser/XQParser.y"
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

  case 187:

/* Line 1455 of yacc.c  */
#line 1924 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1928 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1936 "../src/parser/XQParser.y"
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

  case 190:

/* Line 1455 of yacc.c  */
#line 1958 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1962 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1969 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1977 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1986 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1994 "../src/parser/XQParser.y"
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

  case 196:

/* Line 1455 of yacc.c  */
#line 2031 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2035 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2042 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2049 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2058 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2067 "../src/parser/XQParser.y"
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

  case 202:

/* Line 1455 of yacc.c  */
#line 2094 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2098 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2105 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2117 "../src/parser/XQParser.y"
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

  case 206:

/* Line 1455 of yacc.c  */
#line 2143 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2147 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2154 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2164 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2176 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2180 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2185 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2194 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2207 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2211 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2216 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2225 "../src/parser/XQParser.y"
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

  case 218:

/* Line 1455 of yacc.c  */
#line 2239 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2243 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2256 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2261 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2273 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2277 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2285 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 2298 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2306 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2319 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2326 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2365 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2369 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2373 "../src/parser/XQParser.y"
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

  case 236:

/* Line 1455 of yacc.c  */
#line 2391 "../src/parser/XQParser.y"
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

  case 237:

/* Line 1455 of yacc.c  */
#line 2409 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2419 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2433 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2441 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2447 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2453 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2459 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2470 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2474 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2504 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2508 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2512 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2516 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2520 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2524 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2530 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2536 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2580 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2584 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2588 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2592 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2596 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2600 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2606 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2612 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2616 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2643 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2647 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2651 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2655 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2659 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2663 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2669 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2675 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2701 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0)) {
      QP->_lexer->setVersion11(false);
      QP->_query->setVersion11(false);
    }
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_1)) {
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

  case 307:

/* Line 1455 of yacc.c  */
#line 2721 "../src/parser/XQParser.y"
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

  case 310:

/* Line 1455 of yacc.c  */
#line 2745 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2759 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2763 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2767 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2771 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2775 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2779 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2785 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2791 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2795 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2827 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2835 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2840 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2849 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2854 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2863 "../src/parser/XQParser.y"
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

  case 338:

/* Line 1455 of yacc.c  */
#line 2923 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2931 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2936 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2945 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2950 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2959 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2969 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2973 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2981 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2985 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2993 "../src/parser/XQParser.y"
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

  case 349:

/* Line 1455 of yacc.c  */
#line 3009 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 3018 "../src/parser/XQParser.y"
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

  case 351:

/* Line 1455 of yacc.c  */
#line 3030 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 3038 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3042 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3047 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3056 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3060 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3068 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), &loc);
  }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3078 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3090 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3097 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3101 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3109 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3114 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3123 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3134 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3138 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3147 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3155 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3159 "../src/parser/XQParser.y"
    {
    switch((yyvsp[(1) - (2)].signature)->privateOption) {
    case FunctionSignature::OP_TRUE:
      yyerror((yylsp[(2) - (2)]), "Function option 'private' already specified [err:XQST0106]");
    case FunctionSignature::OP_FALSE:
      yyerror((yylsp[(2) - (2)]), "Function option 'public' already specified [err:XQST0106]");
    case FunctionSignature::OP_DEFAULT:
      (yyvsp[(1) - (2)].signature)->privateOption = (yyvsp[(2) - (2)].boolean) ? FunctionSignature::OP_TRUE : FunctionSignature::OP_FALSE;
      break;
    }
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3172 "../src/parser/XQParser.y"
    {
    switch((yyvsp[(1) - (2)].signature)->nondeterministic) {
    case FunctionSignature::OP_TRUE:
      yyerror((yylsp[(2) - (2)]), "Function option 'nondeterministic' already specified [err:XQST0106]");
    case FunctionSignature::OP_FALSE:
      yyerror((yylsp[(2) - (2)]), "Function option 'deterministic' already specified [err:XQST0106]");
    case FunctionSignature::OP_DEFAULT:
      (yyvsp[(1) - (2)].signature)->nondeterministic = (yyvsp[(2) - (2)].boolean) ? FunctionSignature::OP_TRUE : FunctionSignature::OP_FALSE;
      break;
    }
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 3185 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3194 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3194 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3197 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3197 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3201 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3205 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3213 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3218 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3228 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3236 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3244 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 3257 "../src/parser/XQParser.y"
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

  case 400:

/* Line 1455 of yacc.c  */
#line 3295 "../src/parser/XQParser.y"
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

  case 402:

/* Line 1455 of yacc.c  */
#line 3340 "../src/parser/XQParser.y"
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

  case 403:

/* Line 1455 of yacc.c  */
#line 3353 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3368 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3375 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3383 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3394 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3398 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3408 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3412 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3422 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3429 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3437 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3441 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3454 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3462 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3470 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3475 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3483 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3493 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3500 "../src/parser/XQParser.y"
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

  case 430:

/* Line 1455 of yacc.c  */
#line 3515 "../src/parser/XQParser.y"
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

  case 431:

/* Line 1455 of yacc.c  */
#line 3531 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3535 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3539 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3546 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3555 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3568 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3576 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3587 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3595 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3606 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3613 "../src/parser/XQParser.y"
    {
    XQTypeswitch::Cases::iterator it = (yyvsp[(2) - (2)].caseClauses)->begin();
    for(; it != (yyvsp[(2) - (2)].caseClauses)->end(); ++it) {
      (yyvsp[(1) - (2)].caseClauses)->push_back(*it);
    }

    (yyval.caseClauses) = (yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3626 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3630 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3638 "../src/parser/XQParser.y"
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

  case 448:

/* Line 1455 of yacc.c  */
#line 3656 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3661 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3670 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3674 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3682 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3690 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3704 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 3723 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3727 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3730 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3731 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3735 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3739 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3743 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3747 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3751 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3755 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3759 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3763 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3767 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3771 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3775 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3779 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3788 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3792 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3801 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3813 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3817 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3826 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3830 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3834 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3847 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3851 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 3860 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3864 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3873 "../src/parser/XQParser.y"
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

  case 495:

/* Line 1455 of yacc.c  */
#line 3895 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 3914 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3923 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3929 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3950 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3954 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3958 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3966 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3973 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3986 "../src/parser/XQParser.y"
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

  case 516:

/* Line 1455 of yacc.c  */
#line 4007 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 4016 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 4022 "../src/parser/XQParser.y"
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

  case 521:

/* Line 1455 of yacc.c  */
#line 4047 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 4061 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 4067 "../src/parser/XQParser.y"
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

  case 528:

/* Line 1455 of yacc.c  */
#line 4089 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4099 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4106 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4115 "../src/parser/XQParser.y"
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

  case 535:

/* Line 1455 of yacc.c  */
#line 4138 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4142 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4146 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4150 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4154 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4158 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4162 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4166 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4174 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4182 "../src/parser/XQParser.y"
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

  case 545:

/* Line 1455 of yacc.c  */
#line 4199 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4216 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4220 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4224 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4228 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4232 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4240 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 4252 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4262 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4274 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4281 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4288 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4301 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4330 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4341 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4345 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4353 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4361 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4371 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4381 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4385 "../src/parser/XQParser.y"
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

  case 586:

/* Line 1455 of yacc.c  */
#line 4408 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4413 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4424 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4433 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4437 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4450 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4456 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4469 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4473 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4482 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4498 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4502 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4509 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4513 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4523 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4527 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4532 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4542 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4546 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4550 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4563 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4567 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4572 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4582 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4590 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4607 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4611 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4616 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4621 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4628 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4641 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4654 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4663 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(3) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor(
                    WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR)), 
                  value, MEMMGR));
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4683 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4708 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4716 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4724 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4728 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4736 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4740 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4756 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4760 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQNamespaceConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4786 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4794 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4801 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4811 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4818 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4822 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4830 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4840 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4844 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4852 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4856 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4866 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4873 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4882 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4884 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4886 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4888 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4894 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4898 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4934 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4942 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4946 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4951 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4960 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4968 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4976 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(NamespaceNodeTest, (yylsp[(1) - (3)]));
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NAMESPACE);
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4985 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4989 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4993 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 5001 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5005 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 5009 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5018 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5026 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 699:

/* Line 1455 of yacc.c  */
#line 5039 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5043 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5047 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 5051 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 704:

/* Line 1455 of yacc.c  */
#line 5061 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 5069 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5089 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5101 "../src/parser/XQParser.y"
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

  case 712:

/* Line 1455 of yacc.c  */
#line 5116 "../src/parser/XQParser.y"
    {
}
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5119 "../src/parser/XQParser.y"
    {
}
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5125 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5129 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5139 "../src/parser/XQParser.y"
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

  case 718:

/* Line 1455 of yacc.c  */
#line 5156 "../src/parser/XQParser.y"
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

  case 720:

/* Line 1455 of yacc.c  */
#line 5172 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5182 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5192 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5201 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5206 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5216 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5220 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5228 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5233 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5242 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5246 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5250 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5254 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5258 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5262 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5272 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5283 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5289 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5295 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5301 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5316 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5320 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5324 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5328 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5332 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5336 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5340 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5344 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5352 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5356 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5360 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5368 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5372 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5408 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5412 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5416 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5420 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5429 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5433 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5441 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5445 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5459 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5463 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5467 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5471 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5478 "../src/parser/XQParser.y"
    {
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5481 "../src/parser/XQParser.y"
    {
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5488 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5492 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5496 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5500 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5510 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5514 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5518 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5525 "../src/parser/XQParser.y"
    {
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5540 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5547 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5551 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5559 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5571 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5579 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5583 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5591 "../src/parser/XQParser.y"
    {
}
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5598 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5606 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5611 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5616 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5628 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5636 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5640 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5644 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5655 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5666 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5670 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5680 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5688 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5695 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5700 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5708 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5729 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5741 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5765 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5774 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5786 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5791 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5796 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5802 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5808 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5814 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5823 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5827 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5835 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5839 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5846 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5851 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5859 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5864 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5873 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5877 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5881 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5889 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5893 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5901 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5905 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5909 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 5921 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5925 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 5929 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 5937 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 5942 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 5952 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 5969 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 5977 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 5988 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 5993 "../src/parser/XQParser.y"
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

  case 866:

/* Line 1455 of yacc.c  */
#line 6021 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 6029 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 6033 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 6040 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 6045 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 6054 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12375 "../src/parser/XQParser.cpp"
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
#line 6089 "../src/parser/XQParser.y"


}  // namespace XQParser


