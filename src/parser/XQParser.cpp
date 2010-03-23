
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
     _USING_ = 341,
     _NO_ = 342,
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
     _COUNT_ = 393,
     _BY_ = 394,
     _ORDER_ = 395,
     _STABLE_ = 396,
     _ASCENDING_ = 397,
     _DESCENDING_ = 398,
     _EMPTY_ = 399,
     _GREATEST_ = 400,
     _LEAST_ = 401,
     _COLLATION_ = 402,
     _SOME_ = 403,
     _EVERY_ = 404,
     _SATISFIES_ = 405,
     _TYPESWITCH_ = 406,
     _CASE_ = 407,
     _CASE_S_ = 408,
     _AS_ = 409,
     _IF_ = 410,
     _THEN_ = 411,
     _ELSE_ = 412,
     _OR_ = 413,
     _AND_ = 414,
     _INSTANCE_ = 415,
     _OF_ = 416,
     _CASTABLE_ = 417,
     _TO_ = 418,
     _DIV_ = 419,
     _MOD_ = 420,
     _UNION_ = 421,
     _INTERSECT_ = 422,
     _EXCEPT_ = 423,
     _VALIDATE_ = 424,
     _CAST_ = 425,
     _TREAT_ = 426,
     _IS_ = 427,
     _PRESERVE_ = 428,
     _STRIP_ = 429,
     _NAMESPACE_ = 430,
     _ITEM_ = 431,
     _EXTERNAL_ = 432,
     _ENCODING_ = 433,
     _NO_PRESERVE_ = 434,
     _INHERIT_ = 435,
     _NO_INHERIT_ = 436,
     _DECLARE_ = 437,
     _CONSTRUCTION_ = 438,
     _ORDERING_ = 439,
     _DEFAULT_ = 440,
     _COPY_NAMESPACES_ = 441,
     _OPTION_ = 442,
     _XQUERY_ = 443,
     _VERSION_ = 444,
     _IMPORT_ = 445,
     _SCHEMA_ = 446,
     _MODULE_ = 447,
     _ELEMENT_ = 448,
     _FUNCTION_ = 449,
     _FUNCTION_EXT_ = 450,
     _SCORE_ = 451,
     _CONTAINS_ = 452,
     _WEIGHT_ = 453,
     _WINDOW_ = 454,
     _DISTANCE_ = 455,
     _OCCURS_ = 456,
     _TIMES_ = 457,
     _SAME_ = 458,
     _DIFFERENT_ = 459,
     _LOWERCASE_ = 460,
     _UPPERCASE_ = 461,
     _RELATIONSHIP_ = 462,
     _LEVELS_ = 463,
     _LANGUAGE_ = 464,
     _ANY_ = 465,
     _ALL_ = 466,
     _PHRASE_ = 467,
     _EXACTLY_ = 468,
     _FROM_ = 469,
     _WORDS_ = 470,
     _SENTENCES_ = 471,
     _PARAGRAPHS_ = 472,
     _SENTENCE_ = 473,
     _PARAGRAPH_ = 474,
     _REPLACE_ = 475,
     _MODIFY_ = 476,
     _FIRST_ = 477,
     _INSERT_ = 478,
     _BEFORE_ = 479,
     _AFTER_ = 480,
     _REVALIDATION_ = 481,
     _WITH_ = 482,
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
     _MODE_ = 497,
     _FTOR_ = 498,
     _FTAND_ = 499,
     _FTNOT_ = 500,
     _PRIVATE_ = 501,
     _PUBLIC_ = 502,
     _DETERMINISTIC_ = 503,
     _NONDETERMINISTIC_ = 504,
     _XSLT_END_ELEMENT_ = 505,
     _XSLT_STYLESHEET_ = 506,
     _XSLT_TEMPLATE_ = 507,
     _XSLT_VALUE_OF_ = 508,
     _XSLT_TEXT_ = 509,
     _XSLT_APPLY_TEMPLATES_ = 510,
     _XSLT_CALL_TEMPLATE_ = 511,
     _XSLT_WITH_PARAM_ = 512,
     _XSLT_SEQUENCE_ = 513,
     _XSLT_PARAM_ = 514,
     _XSLT_FUNCTION_ = 515,
     _XSLT_CHOOSE_ = 516,
     _XSLT_WHEN_ = 517,
     _XSLT_OTHERWISE_ = 518,
     _XSLT_IF_ = 519,
     _XSLT_VARIABLE_ = 520,
     _XSLT_COMMENT_ = 521,
     _XSLT_PI_ = 522,
     _XSLT_DOCUMENT_ = 523,
     _XSLT_ATTRIBUTE_ = 524,
     _XSLT_NAMESPACE_ = 525,
     _XSLT_ELEMENT_ = 526,
     _XSLT_ANALYZE_STRING_ = 527,
     _XSLT_MATCHING_SUBSTRING_ = 528,
     _XSLT_NON_MATCHING_SUBSTRING_ = 529,
     _XSLT_COPY_OF_ = 530,
     _XSLT_COPY_ = 531,
     _XSLT_FOR_EACH_ = 532,
     _XSLT_OUTPUT_ = 533,
     _XSLT_IMPORT_SCHEMA_ = 534,
     _XSLT_VERSION_ = 535,
     _XSLT_MODE_ = 536,
     _XSLT_NAME_ = 537,
     _XSLT_DOCTYPE_PUBLIC_ = 538,
     _XSLT_DOCTYPE_SYSTEM_ = 539,
     _XSLT_ENCODING_ = 540,
     _XSLT_MEDIA_TYPE_ = 541,
     _XSLT_NORMALIZATION_FORM_ = 542,
     _XSLT_STANDALONE_ = 543,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 544,
     _XSLT_NAMESPACE_STR_ = 545,
     _XSLT_SCHEMA_LOCATION_ = 546,
     _XSLT_TUNNEL_ = 547,
     _XSLT_REQUIRED_ = 548,
     _XSLT_OVERRIDE_ = 549,
     _XSLT_COPY_NAMESPACES_ = 550,
     _XSLT_INHERIT_NAMESPACES_ = 551,
     _XSLT_BYTE_ORDER_MARK_ = 552,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 553,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 554,
     _XSLT_INDENT_ = 555,
     _XSLT_OMIT_XML_DECLARATION_ = 556,
     _XSLT_UNDECLARE_PREFIXES_ = 557,
     _XSLT_MATCH_ = 558,
     _XSLT_AS_ = 559,
     _XSLT_SELECT_ = 560,
     _XSLT_PRIORITY_ = 561,
     _XSLT_TEST_ = 562,
     _XSLT_SEPARATOR_ = 563,
     _XSLT_NAMESPACE_A_ = 564,
     _XSLT_REGEX_ = 565,
     _XSLT_FLAGS_ = 566,
     _XSLT_METHOD_ = 567,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 568,
     _XSLT_USE_CHARACTER_MAPS_ = 569,
     _XSLT_ELEMENT_NAME_ = 570,
     _XSLT_XMLNS_ATTR_ = 571,
     _XSLT_ATTR_NAME_ = 572,
     _XSLT_TEXT_NODE_ = 573,
     _XSLT_WS_TEXT_NODE_ = 574,
     _HASH_DEFAULT_ = 575,
     _HASH_ALL_ = 576,
     _HASH_CURRENT_ = 577,
     _XML_ = 578,
     _HTML_ = 579,
     _XHTML_ = 580
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
#define _USING_ 341
#define _NO_ 342
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
#define _COUNT_ 393
#define _BY_ 394
#define _ORDER_ 395
#define _STABLE_ 396
#define _ASCENDING_ 397
#define _DESCENDING_ 398
#define _EMPTY_ 399
#define _GREATEST_ 400
#define _LEAST_ 401
#define _COLLATION_ 402
#define _SOME_ 403
#define _EVERY_ 404
#define _SATISFIES_ 405
#define _TYPESWITCH_ 406
#define _CASE_ 407
#define _CASE_S_ 408
#define _AS_ 409
#define _IF_ 410
#define _THEN_ 411
#define _ELSE_ 412
#define _OR_ 413
#define _AND_ 414
#define _INSTANCE_ 415
#define _OF_ 416
#define _CASTABLE_ 417
#define _TO_ 418
#define _DIV_ 419
#define _MOD_ 420
#define _UNION_ 421
#define _INTERSECT_ 422
#define _EXCEPT_ 423
#define _VALIDATE_ 424
#define _CAST_ 425
#define _TREAT_ 426
#define _IS_ 427
#define _PRESERVE_ 428
#define _STRIP_ 429
#define _NAMESPACE_ 430
#define _ITEM_ 431
#define _EXTERNAL_ 432
#define _ENCODING_ 433
#define _NO_PRESERVE_ 434
#define _INHERIT_ 435
#define _NO_INHERIT_ 436
#define _DECLARE_ 437
#define _CONSTRUCTION_ 438
#define _ORDERING_ 439
#define _DEFAULT_ 440
#define _COPY_NAMESPACES_ 441
#define _OPTION_ 442
#define _XQUERY_ 443
#define _VERSION_ 444
#define _IMPORT_ 445
#define _SCHEMA_ 446
#define _MODULE_ 447
#define _ELEMENT_ 448
#define _FUNCTION_ 449
#define _FUNCTION_EXT_ 450
#define _SCORE_ 451
#define _CONTAINS_ 452
#define _WEIGHT_ 453
#define _WINDOW_ 454
#define _DISTANCE_ 455
#define _OCCURS_ 456
#define _TIMES_ 457
#define _SAME_ 458
#define _DIFFERENT_ 459
#define _LOWERCASE_ 460
#define _UPPERCASE_ 461
#define _RELATIONSHIP_ 462
#define _LEVELS_ 463
#define _LANGUAGE_ 464
#define _ANY_ 465
#define _ALL_ 466
#define _PHRASE_ 467
#define _EXACTLY_ 468
#define _FROM_ 469
#define _WORDS_ 470
#define _SENTENCES_ 471
#define _PARAGRAPHS_ 472
#define _SENTENCE_ 473
#define _PARAGRAPH_ 474
#define _REPLACE_ 475
#define _MODIFY_ 476
#define _FIRST_ 477
#define _INSERT_ 478
#define _BEFORE_ 479
#define _AFTER_ 480
#define _REVALIDATION_ 481
#define _WITH_ 482
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
#define _MODE_ 497
#define _FTOR_ 498
#define _FTAND_ 499
#define _FTNOT_ 500
#define _PRIVATE_ 501
#define _PUBLIC_ 502
#define _DETERMINISTIC_ 503
#define _NONDETERMINISTIC_ 504
#define _XSLT_END_ELEMENT_ 505
#define _XSLT_STYLESHEET_ 506
#define _XSLT_TEMPLATE_ 507
#define _XSLT_VALUE_OF_ 508
#define _XSLT_TEXT_ 509
#define _XSLT_APPLY_TEMPLATES_ 510
#define _XSLT_CALL_TEMPLATE_ 511
#define _XSLT_WITH_PARAM_ 512
#define _XSLT_SEQUENCE_ 513
#define _XSLT_PARAM_ 514
#define _XSLT_FUNCTION_ 515
#define _XSLT_CHOOSE_ 516
#define _XSLT_WHEN_ 517
#define _XSLT_OTHERWISE_ 518
#define _XSLT_IF_ 519
#define _XSLT_VARIABLE_ 520
#define _XSLT_COMMENT_ 521
#define _XSLT_PI_ 522
#define _XSLT_DOCUMENT_ 523
#define _XSLT_ATTRIBUTE_ 524
#define _XSLT_NAMESPACE_ 525
#define _XSLT_ELEMENT_ 526
#define _XSLT_ANALYZE_STRING_ 527
#define _XSLT_MATCHING_SUBSTRING_ 528
#define _XSLT_NON_MATCHING_SUBSTRING_ 529
#define _XSLT_COPY_OF_ 530
#define _XSLT_COPY_ 531
#define _XSLT_FOR_EACH_ 532
#define _XSLT_OUTPUT_ 533
#define _XSLT_IMPORT_SCHEMA_ 534
#define _XSLT_VERSION_ 535
#define _XSLT_MODE_ 536
#define _XSLT_NAME_ 537
#define _XSLT_DOCTYPE_PUBLIC_ 538
#define _XSLT_DOCTYPE_SYSTEM_ 539
#define _XSLT_ENCODING_ 540
#define _XSLT_MEDIA_TYPE_ 541
#define _XSLT_NORMALIZATION_FORM_ 542
#define _XSLT_STANDALONE_ 543
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 544
#define _XSLT_NAMESPACE_STR_ 545
#define _XSLT_SCHEMA_LOCATION_ 546
#define _XSLT_TUNNEL_ 547
#define _XSLT_REQUIRED_ 548
#define _XSLT_OVERRIDE_ 549
#define _XSLT_COPY_NAMESPACES_ 550
#define _XSLT_INHERIT_NAMESPACES_ 551
#define _XSLT_BYTE_ORDER_MARK_ 552
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 553
#define _XSLT_INCLUDE_CONTENT_TYPE_ 554
#define _XSLT_INDENT_ 555
#define _XSLT_OMIT_XML_DECLARATION_ 556
#define _XSLT_UNDECLARE_PREFIXES_ 557
#define _XSLT_MATCH_ 558
#define _XSLT_AS_ 559
#define _XSLT_SELECT_ 560
#define _XSLT_PRIORITY_ 561
#define _XSLT_TEST_ 562
#define _XSLT_SEPARATOR_ 563
#define _XSLT_NAMESPACE_A_ 564
#define _XSLT_REGEX_ 565
#define _XSLT_FLAGS_ 566
#define _XSLT_METHOD_ 567
#define _XSLT_CDATA_SECTION_ELEMENTS_ 568
#define _XSLT_USE_CHARACTER_MAPS_ 569
#define _XSLT_ELEMENT_NAME_ 570
#define _XSLT_XMLNS_ATTR_ 571
#define _XSLT_ATTR_NAME_ 572
#define _XSLT_TEXT_NODE_ 573
#define _XSLT_WS_TEXT_NODE_ 574
#define _HASH_DEFAULT_ 575
#define _HASH_ALL_ 576
#define _HASH_CURRENT_ 577
#define _XML_ 578
#define _HTML_ 579
#define _XHTML_ 580




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
#line 1093 "../src/parser/XQParser.cpp"

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
#define YYFINAL  339
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8201

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  326
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  356
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1040
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1705

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   580

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
     325
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
    1968,  1971,  1973,  1975,  1977,  1979,  1981,  1983,  1988,  1992,
    1994,  1998,  2001,  2005,  2009,  2011,  2015,  2020,  2025,  2029,
    2031,  2035,  2038,  2042,  2045,  2046,  2048,  2049,  2052,  2055,
    2059,  2060,  2062,  2064,  2066,  2068,  2072,  2074,  2076,  2078,
    2080,  2082,  2084,  2086,  2088,  2090,  2092,  2094,  2096,  2098,
    2102,  2106,  2111,  2116,  2120,  2124,  2128,  2133,  2138,  2142,
    2147,  2154,  2156,  2158,  2163,  2165,  2169,  2174,  2181,  2189,
    2191,  2193,  2198,  2200,  2202,  2204,  2206,  2208,  2212,  2213,
    2216,  2217,  2220,  2224,  2226,  2230,  2232,  2237,  2239,  2242,
    2244,  2246,  2249,  2252,  2256,  2258,  2261,  2266,  2270,  2275,
    2276,  2278,  2281,  2283,  2286,  2288,  2289,  2293,  2296,  2300,
    2304,  2309,  2311,  2315,  2319,  2322,  2325,  2328,  2331,  2334,
    2336,  2338,  2340,  2342,  2344,  2347,  2351,  2353,  2355,  2357,
    2359,  2361,  2363,  2365,  2367,  2370,  2373,  2375,  2377,  2380,
    2383,  2385,  2388,  2391,  2394,  2400,  2406,  2409,  2410,  2414,
    2417,  2422,  2427,  2434,  2439,  2443,  2448,  2449,  2452,  2455,
    2459,  2461,  2465,  2468,  2471,  2474,  2476,  2479,  2483,  2487,
    2491,  2495,  2499,  2506,  2513,  2518,  2523,  2528,  2531,  2534,
    2537,  2540,  2543,  2551,  2557,  2563,  2570,  2574,  2576,  2581,
    2583,  2585,  2587,  2589,  2591,  2593,  2599,  2607,  2616,  2627,
    2634,  2643,  2644,  2647,  2650,  2654,  2655,  2658,  2660,  2664,
    2666,  2668,  2670,  2674,  2682,  2686,  2694,  2700,  2710,  2712,
    2714,  2716,  2718,  2722,  2728,  2730,  2732,  2736,  2741,  2745,
    2750,  2752,  2754,  2759,  2765,  2772,  2774,  2778,  2782,  2784,
    2786,  2788,  2790,  2792,  2794,  2796,  2798,  2800,  2802,  2804,
    2806,  2808,  2810,  2812,  2814,  2816,  2818,  2820,  2822,  2824,
    2826,  2828,  2830,  2832,  2834,  2836,  2838,  2840,  2842,  2844,
    2846,  2848,  2850,  2852,  2854,  2856,  2858,  2860,  2862,  2864,
    2866,  2868,  2870,  2872,  2874,  2876,  2878,  2880,  2882,  2884,
    2886,  2888,  2890,  2892,  2894,  2896,  2898,  2900,  2902,  2904,
    2906,  2908,  2910,  2912,  2914,  2916,  2918,  2920,  2922,  2924,
    2926,  2928,  2930,  2932,  2934,  2936,  2938,  2940,  2942,  2944,
    2946,  2948,  2950,  2952,  2954,  2956,  2958,  2960,  2962,  2964,
    2966,  2968,  2970,  2972,  2974,  2976,  2978,  2980,  2982,  2984,
    2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,
    3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,
    3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,
    3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3064,
    3066,  3068,  3070,  3072,  3074,  3076,  3078,  3080,  3082,  3084,
    3086,  3088,  3090,  3092,  3094,  3096,  3098,  3100,  3102,  3104,
    3106,  3108,  3110,  3112,  3114,  3116,  3118,  3120,  3122,  3124,
    3126
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     327,     0,    -1,     3,   473,    -1,     4,   419,    -1,     5,
     424,    -1,     6,   428,    -1,     7,   432,    -1,     8,   335,
      -1,     9,   328,    -1,    10,   331,    -1,    11,   330,    -1,
     182,   466,   463,   681,   464,   469,   472,   329,    -1,    -1,
     442,    -1,   466,   464,   469,    -1,   332,   333,    -1,   192,
     175,   658,    40,   609,   442,    -1,    -1,   333,   334,    -1,
     182,   466,   463,   681,   464,   469,   472,   442,    -1,   336,
      -1,   251,   337,   338,   250,    -1,   358,    -1,    -1,   337,
     280,    -1,   337,   289,    -1,    -1,   338,   339,    -1,   338,
     343,    -1,   338,   348,    -1,   338,   350,    -1,   338,   352,
      -1,   338,   356,    -1,   340,   345,   361,   250,    -1,   252,
      -1,   340,   303,   409,    -1,   340,   282,    -1,   340,   306,
     342,    -1,   340,   281,   341,    -1,   340,   304,   588,    -1,
      -1,   341,   124,    -1,   341,   320,    -1,   341,   321,    -1,
      55,    -1,    56,    -1,    57,    -1,   344,   345,   361,   250,
      -1,   260,    -1,   344,   282,    -1,   344,   304,   588,    -1,
     344,   294,    -1,    -1,   345,   346,    -1,   347,   361,   250,
      -1,   259,    -1,   347,   282,    -1,   347,   305,   474,    -1,
     347,   304,   588,    -1,   347,   293,    -1,   347,   292,    -1,
     349,   361,   250,    -1,   259,    -1,   349,   282,    -1,   349,
     305,   474,    -1,   349,   304,   588,    -1,   349,   293,    -1,
     349,   292,    -1,   351,   361,   250,    -1,   265,    -1,   351,
     282,    -1,   351,   305,   474,    -1,   351,   304,   588,    -1,
     353,   250,    -1,   278,    -1,   353,   282,    -1,   353,   312,
     354,    -1,   353,   297,    -1,   353,   313,   355,    -1,   353,
     283,    -1,   353,   284,    -1,   353,   285,    -1,   353,   298,
      -1,   353,   299,    -1,   353,   300,    -1,   353,   286,    -1,
     353,   287,    -1,   353,   301,    -1,   353,   288,    -1,   353,
     302,    -1,   353,   314,   355,    -1,   353,   280,    -1,   323,
      -1,   324,    -1,   325,    -1,    65,    -1,   124,    -1,   124,
      -1,   355,   124,    -1,   357,   250,    -1,   279,    -1,   279,
     290,    -1,   279,   291,    -1,   279,   290,   291,    -1,   279,
     291,   290,    -1,   315,   359,   361,   250,    -1,    -1,   359,
     317,   360,    -1,   359,   316,    -1,    -1,   360,   472,    -1,
     360,   117,    -1,    -1,   361,   366,    -1,   361,   358,    -1,
     361,   362,    -1,   363,    -1,   365,    -1,   367,    -1,   371,
      -1,   376,    -1,   380,    -1,   378,    -1,   389,    -1,   391,
      -1,   393,    -1,   395,    -1,   397,    -1,   399,    -1,   401,
      -1,   385,    -1,   403,    -1,   405,    -1,   407,    -1,   364,
     361,   250,    -1,   253,    -1,   364,   305,   474,    -1,   364,
     308,   360,    -1,   254,   366,   250,    -1,   318,    -1,   319,
      -1,   368,   370,   250,    -1,   255,    -1,   368,   305,   474,
      -1,   368,   281,   369,    -1,   124,    -1,   320,    -1,   322,
      -1,    -1,   370,   374,    -1,   372,   373,   250,    -1,   256,
      -1,   372,   282,    -1,    -1,   373,   374,    -1,   375,   361,
     250,    -1,   257,    -1,   375,   282,    -1,   375,   305,   474,
      -1,   375,   304,   588,    -1,   375,   292,    -1,   377,   250,
      -1,   258,   305,   474,    -1,   379,   361,   250,    -1,   264,
     307,   474,    -1,   261,   381,   384,   250,    -1,   382,    -1,
     381,   382,    -1,   383,   361,   250,    -1,   262,   307,   474,
      -1,    -1,   263,   361,   250,    -1,   386,   387,   388,   250,
      -1,   272,    -1,   386,   305,   474,    -1,   386,   310,   360,
      -1,   386,   311,   360,    -1,    -1,   273,   361,   250,    -1,
      -1,   274,   361,   250,    -1,   390,   361,   250,   361,    -1,
     265,    -1,   390,   282,    -1,   390,   305,   474,    -1,   390,
     304,   588,    -1,   392,   361,   250,    -1,   266,    -1,   392,
     305,   474,    -1,   394,   361,   250,    -1,   267,    -1,   394,
     282,   360,    -1,   394,   305,   474,    -1,   396,   361,   250,
      -1,   268,    -1,   398,   361,   250,    -1,   269,    -1,   398,
     282,   360,    -1,   398,   309,   360,    -1,   398,   305,   474,
      -1,   398,   308,   360,    -1,   400,   361,   250,    -1,   270,
      -1,   400,   282,   360,    -1,   400,   305,   474,    -1,   402,
     361,   250,    -1,   271,    -1,   402,   282,   360,    -1,   402,
     309,   360,    -1,   404,   250,    -1,   275,    -1,   404,   305,
     474,    -1,   404,   295,    -1,   406,   361,   250,    -1,   276,
      -1,   406,   295,    -1,   406,   296,    -1,   408,   361,   250,
      -1,   277,    -1,   408,   305,   474,    -1,   409,    15,   410,
      -1,   410,    -1,   415,    -1,    39,    -1,   412,    -1,    39,
      -1,    33,    -1,   234,    43,   413,    44,    -1,   235,    43,
     657,    36,   414,    44,    -1,   657,    -1,   547,    -1,   545,
      -1,   547,    -1,   416,    -1,   411,   416,    -1,   412,    39,
     416,    -1,   412,    33,   416,    -1,   415,    39,   416,    -1,
     415,    33,   416,    -1,   417,   418,    -1,   540,    -1,    73,
      22,   540,    -1,    58,    22,   540,    -1,    23,   540,    -1,
      -1,   418,    24,   474,    25,    -1,   433,   420,    -1,   433,
     421,    -1,   420,    -1,   421,    -1,   422,   473,    -1,   438,
     422,    -1,    -1,   422,   423,   442,    -1,   422,   441,   442,
      -1,   422,   443,   442,    -1,   422,   445,   442,    -1,   422,
     459,   442,    -1,   422,   462,   442,    -1,   422,   660,   442,
      -1,   422,   446,   442,    -1,   444,    -1,   453,    -1,   454,
      -1,   461,    -1,   448,    -1,   449,    -1,   450,    -1,   433,
     425,    -1,   433,   426,    -1,   425,    -1,   426,    -1,   427,
     473,    -1,   438,   427,    -1,    -1,   427,   423,   442,    -1,
     427,   441,   442,    -1,   427,   443,   442,    -1,   427,   445,
     442,    -1,   427,   459,   442,    -1,   427,   462,   442,    -1,
     427,   660,   442,    -1,   427,   446,   442,    -1,   427,   447,
     442,    -1,   433,   429,    -1,   433,   430,    -1,   429,    -1,
     430,    -1,   431,   473,    -1,   438,   431,    -1,    -1,   431,
     440,   442,    -1,   431,   441,   442,    -1,   431,   443,   442,
      -1,   431,   445,   442,    -1,   431,   459,   442,    -1,   431,
     462,   442,    -1,   431,   660,   442,    -1,   431,   446,   442,
      -1,   433,   436,    -1,   433,   437,    -1,   436,    -1,   437,
      -1,   188,   434,   442,    -1,   188,   434,   435,   442,    -1,
     188,   435,   442,    -1,   189,   127,    -1,   178,   127,    -1,
     439,   473,    -1,   438,   439,    -1,   192,   175,   658,    40,
     609,   442,    -1,    -1,   439,   440,   442,    -1,   439,   441,
     442,    -1,   439,   443,   442,    -1,   439,   445,   442,    -1,
     439,   459,   442,    -1,   439,   462,   442,    -1,   439,   660,
     442,    -1,   439,   446,   442,    -1,   439,   447,   442,    -1,
     444,    -1,   453,    -1,   454,    -1,   461,    -1,   448,    -1,
     449,    -1,   644,    -1,   450,    -1,   455,    -1,   458,    -1,
      53,    -1,   182,   175,   658,    40,   609,    -1,   182,    67,
     173,    -1,   182,    67,   174,    -1,   182,   185,   193,   175,
     609,    -1,   182,   185,   463,   175,   609,    -1,   182,   187,
     680,   127,    -1,   182,    68,   627,    -1,   182,   184,   122,
      -1,   182,   184,   123,    -1,   182,   185,   140,   144,   145,
      -1,   182,   185,   140,   144,   146,    -1,   182,   186,   451,
      36,   452,    -1,   173,    -1,   179,    -1,   180,    -1,   181,
      -1,   182,   185,   147,   609,    -1,   182,    69,   609,    -1,
     190,   191,   457,   609,   456,    -1,   190,   191,   609,   456,
      -1,    -1,   116,   609,    -1,   456,    36,   609,    -1,   175,
     658,    40,    -1,   185,   193,   175,    -1,   190,   192,   175,
     658,    40,   609,   456,    -1,   190,   192,   609,   456,    -1,
     182,   128,    12,   548,   587,   460,    -1,    13,   475,    -1,
     177,    -1,   182,   183,   173,    -1,   182,   183,   174,    -1,
     182,   466,   463,   681,   464,   469,   465,    -1,   194,    -1,
     195,    -1,    43,    44,    -1,    43,   470,    44,    -1,   472,
      -1,   177,    -1,    -1,   466,   467,    -1,   466,   468,    -1,
     466,   233,    -1,   246,    -1,   247,    -1,   248,    -1,   249,
      -1,    -1,   154,   588,    -1,   470,    36,   471,    -1,   471,
      -1,    12,   548,   587,    -1,    51,   474,    52,    -1,   474,
      -1,   474,    36,   475,    -1,   475,    -1,   476,    -1,   496,
      -1,   499,    -1,   505,    -1,   645,    -1,   647,    -1,   650,
      -1,   649,    -1,   651,    -1,   506,    -1,   666,    -1,   667,
      -1,   477,   133,   475,    -1,   478,    -1,   477,   490,    -1,
     477,   479,    -1,   480,    -1,   485,    -1,   478,    -1,   488,
      -1,   489,    -1,   134,   481,    -1,   481,    36,   482,    -1,
     482,    -1,    12,   548,   587,   483,   484,   135,   475,    -1,
      -1,   116,    12,   548,    -1,    -1,   196,    12,   548,    -1,
     136,   486,    -1,   486,    36,   487,    -1,   487,    -1,    12,
     548,   587,    13,   475,    -1,   196,    12,   548,    13,   475,
      -1,   137,   475,    -1,   138,    12,   548,    -1,   140,   139,
     491,    -1,   141,   140,   139,   491,    -1,   491,    36,   492,
      -1,   492,    -1,   493,   494,   495,    -1,   493,   494,   495,
     147,   609,    -1,   475,    -1,    -1,   142,    -1,   143,    -1,
      -1,   144,   145,    -1,   144,   146,    -1,   148,   497,   150,
     475,    -1,   149,   497,   150,   475,    -1,   497,    36,   498,
      -1,   498,    -1,    12,   548,   587,   135,   475,    -1,   151,
      43,   474,    44,   500,   501,    -1,   500,   502,    -1,   502,
      -1,   185,    12,   548,   133,   475,    -1,   185,   133,   475,
      -1,   503,   133,   475,    -1,   152,   504,   588,    -1,   503,
      15,   588,    -1,    -1,    12,   548,   154,    -1,   155,    43,
     474,    44,   156,   475,   157,   475,    -1,   506,   158,   507,
      -1,   507,    -1,   507,   159,   508,    -1,   508,    -1,   510,
      40,   510,    -1,   510,    16,   510,    -1,    -1,   510,    27,
     509,   510,    -1,   510,    17,   510,    -1,   510,    18,   510,
      -1,   510,    19,   510,    -1,   510,   110,   510,    -1,   510,
     111,   510,    -1,   510,   112,   510,    -1,   510,   113,   510,
      -1,   510,   114,   510,    -1,   510,   115,   510,    -1,   510,
     172,   510,    -1,   510,    20,   510,    -1,   510,    21,   510,
      -1,   510,    -1,   511,   197,    65,   610,    -1,   511,   197,
      65,   610,   643,    -1,   511,    -1,   512,   163,   512,    -1,
     512,    -1,   512,    37,   513,    -1,   512,    38,   513,    -1,
     513,    -1,   513,    14,   514,    -1,   513,   164,   514,    -1,
     513,    72,   514,    -1,   513,   165,   514,    -1,   514,    -1,
     514,    15,   515,    -1,   514,   166,   515,    -1,   515,    -1,
     515,   167,   516,    -1,   515,   168,   516,    -1,   516,    -1,
     517,   160,   161,   588,    -1,   517,    -1,   518,   171,   154,
     588,    -1,   518,    -1,   519,   162,   154,   585,    -1,   519,
      -1,   520,   170,   154,   585,    -1,   520,    -1,    38,   520,
      -1,    37,   520,    -1,   521,    -1,   522,    -1,   527,    -1,
     523,    -1,   169,    51,   474,    52,    -1,   169,    70,    51,
     474,    52,    -1,   169,    71,    51,   474,    52,    -1,   524,
      51,    52,    -1,   524,    51,   474,    52,    -1,   525,    -1,
     524,   525,    -1,    35,   561,   680,   526,    -1,   132,    -1,
     107,   132,    -1,   528,    -1,   528,   529,    -1,    33,   529,
      -1,   529,    -1,    39,    -1,   529,    39,   530,    -1,   529,
      33,   530,    -1,   530,    -1,   531,    -1,   543,    -1,   532,
      -1,   533,    -1,   534,    -1,   532,    24,   474,    25,    -1,
     537,    -1,   533,    24,   474,    25,    -1,   535,   540,    -1,
     536,    -1,    73,    22,    -1,    74,    22,    -1,    58,    22,
      -1,    75,    22,    -1,    76,    22,    -1,    77,    22,    -1,
      78,    22,    -1,   175,    22,    -1,    23,   540,    -1,   540,
      -1,   538,   540,    -1,   539,    -1,    79,    22,    -1,    80,
      22,    -1,    81,    22,    -1,    82,    22,    -1,    83,    22,
      -1,    42,    -1,   592,    -1,   541,    -1,   659,    -1,   542,
      -1,    14,    -1,   129,    -1,   130,    -1,   544,    -1,   543,
      24,   474,    25,    -1,   674,    -1,   545,    -1,   547,    -1,
     549,    -1,   550,    -1,   553,    -1,   556,    -1,   551,    -1,
     552,    -1,   671,    -1,   546,    -1,   657,    -1,   654,    -1,
     655,    -1,   656,    -1,    12,   548,    -1,   680,    -1,    43,
     474,    44,    -1,    43,    44,    -1,    41,    -1,   122,    51,
     474,    52,    -1,   123,    51,   474,    52,    -1,   681,    43,
      44,    -1,   681,    43,   554,    44,    -1,   554,    36,   555,
      -1,   555,    -1,   475,    -1,    26,    -1,   557,    -1,   573,
      -1,   558,    -1,   569,    -1,   571,    -1,    27,   559,   560,
     561,    45,    -1,    27,   559,   560,   561,    28,   568,    34,
     559,   561,    29,    -1,   124,    -1,   125,    -1,    -1,   560,
     107,   124,   561,    46,   561,   562,    -1,   560,   107,   125,
     561,    46,   561,   563,    -1,    -1,   107,    -1,    47,   564,
      48,    -1,    49,   566,    50,    -1,    47,   565,    48,    -1,
      49,   567,    50,    -1,    -1,   564,   472,    -1,   564,   117,
      -1,    -1,   565,   472,    -1,   565,   117,    -1,    -1,   566,
     472,    -1,   566,   118,    -1,    -1,   567,   472,    -1,   567,
     118,    -1,    -1,   568,   557,    -1,   568,   472,    -1,   568,
     120,    -1,   568,   119,    -1,    31,   570,    32,    -1,    -1,
     109,    -1,    30,   131,   572,    -1,   108,    -1,   107,   108,
      -1,   574,    -1,   575,    -1,   578,    -1,   580,    -1,   581,
      -1,   582,    -1,    84,    51,   474,    52,    -1,   193,   576,
     577,    -1,   126,    -1,    51,   474,    52,    -1,    51,    52,
      -1,    51,   474,    52,    -1,    58,   579,   577,    -1,   126,
      -1,    51,   474,    52,    -1,    65,    51,   474,    52,    -1,
      59,    51,   474,    52,    -1,    62,   583,   584,    -1,   126,
      -1,    51,   474,    52,    -1,    51,    52,    -1,    51,   474,
      52,    -1,   591,   586,    -1,    -1,    26,    -1,    -1,   154,
     588,    -1,   590,   589,    -1,    66,    43,    44,    -1,    -1,
      14,    -1,    37,    -1,    26,    -1,   591,    -1,   176,    43,
      44,    -1,   592,    -1,   675,    -1,   679,    -1,   659,    -1,
     594,    -1,   602,    -1,   598,    -1,   604,    -1,   600,    -1,
     597,    -1,   596,    -1,   595,    -1,   593,    -1,    61,    43,
      44,    -1,    60,    43,    44,    -1,    60,    43,   602,    44,
      -1,    60,    43,   604,    44,    -1,    65,    43,    44,    -1,
      59,    43,    44,    -1,    62,    43,    44,    -1,    62,    43,
     658,    44,    -1,    62,    43,   127,    44,    -1,    58,    43,
      44,    -1,    58,    43,   599,    44,    -1,    58,    43,   599,
      36,   608,    44,    -1,   606,    -1,    14,    -1,    63,    43,
     601,    44,    -1,   606,    -1,   193,    43,    44,    -1,   193,
      43,   603,    44,    -1,   193,    43,   603,    36,   608,    44,
      -1,   193,    43,   603,    36,   608,    26,    44,    -1,   607,
      -1,    14,    -1,    64,    43,   605,    44,    -1,   607,    -1,
     659,    -1,   659,    -1,   659,    -1,   127,    -1,   613,   612,
     611,    -1,    -1,   198,   511,    -1,    -1,   612,   624,    -1,
     613,   243,   614,    -1,   614,    -1,   614,   244,   615,    -1,
     615,    -1,   615,    85,   135,   616,    -1,   616,    -1,   245,
     617,    -1,   617,    -1,   618,    -1,   618,   627,    -1,   619,
     622,    -1,    43,   610,    44,    -1,   620,    -1,   545,   621,
      -1,    51,   474,    52,   621,    -1,   524,    51,    52,    -1,
     524,    51,   610,    52,    -1,    -1,   210,    -1,   210,    99,
      -1,   211,    -1,   211,   215,    -1,   212,    -1,    -1,   201,
     623,   202,    -1,   213,   512,    -1,   121,   146,   512,    -1,
     121,   103,   512,    -1,   214,   512,   163,   512,    -1,   122,
      -1,   199,   512,   625,    -1,   200,   623,   625,    -1,   203,
     626,    -1,   204,   626,    -1,   116,   101,    -1,   116,   102,
      -1,    97,    98,    -1,   215,    -1,   216,    -1,   217,    -1,
     218,    -1,   219,    -1,    86,   628,    -1,   627,    86,   628,
      -1,   640,    -1,   641,    -1,   632,    -1,   631,    -1,   629,
      -1,   630,    -1,   635,    -1,   642,    -1,   153,    89,    -1,
     153,    88,    -1,   205,    -1,   206,    -1,    90,    89,    -1,
      90,    88,    -1,    93,    -1,    87,    93,    -1,    94,   634,
      -1,    94,   185,    -1,    94,    43,   634,   633,    44,    -1,
      94,    43,   185,   633,    44,    -1,    87,    94,    -1,    -1,
     633,    36,   634,    -1,   116,   609,    -1,   116,   609,   207,
     657,    -1,   116,   609,   623,   208,    -1,   116,   609,   207,
     657,   623,   208,    -1,    95,   215,   637,   636,    -1,    87,
      95,   215,    -1,    95,   215,   185,   636,    -1,    -1,   636,
     639,    -1,   116,   609,    -1,    43,   638,    44,    -1,   657,
      -1,   638,    36,   657,    -1,   166,   637,    -1,   168,   637,
      -1,   209,   657,    -1,    96,    -1,    87,    96,    -1,   187,
     680,   127,    -1,    92,    98,   514,    -1,   182,   226,    71,
      -1,   182,   226,    70,    -1,   182,   226,   104,    -1,   646,
     475,   154,   222,   232,   475,    -1,   646,   475,   154,   230,
     232,   475,    -1,   646,   475,   232,   475,    -1,   646,   475,
     225,   475,    -1,   646,   475,   224,   475,    -1,   223,    61,
      -1,   223,   228,    -1,   648,   475,    -1,   231,    61,    -1,
     231,   228,    -1,   220,   106,   161,    61,   475,   227,   475,
      -1,   220,    61,   475,   227,   475,    -1,   229,    61,   475,
     154,   475,    -1,   105,   652,   221,   475,   133,   475,    -1,
     652,    36,   653,    -1,   653,    -1,    12,   548,    13,   475,
      -1,    55,    -1,    56,    -1,    57,    -1,   127,    -1,   680,
      -1,   680,    -1,   182,   236,   238,   680,   472,    -1,   182,
     236,   238,   680,   662,   661,   472,    -1,   182,   236,   238,
     680,   663,   237,   409,   472,    -1,   182,   236,   238,   680,
     663,   237,   409,   662,   661,   472,    -1,   182,   236,   663,
     237,   409,   472,    -1,   182,   236,   663,   237,   409,   662,
     661,   472,    -1,    -1,   154,   588,    -1,    43,    44,    -1,
      43,   470,    44,    -1,    -1,   242,   664,    -1,   665,    -1,
     664,    36,   665,    -1,   124,    -1,   320,    -1,   321,    -1,
     239,   236,   680,    -1,   239,   236,   680,   227,    43,   669,
      44,    -1,   240,   241,   475,    -1,   240,   241,   475,   227,
      43,   669,    44,    -1,   240,   241,   475,   242,   668,    -1,
     240,   241,   475,   242,   668,   227,    43,   669,    44,    -1,
     680,    -1,   320,    -1,   322,    -1,   670,    -1,   669,    36,
     670,    -1,    12,   548,   587,    13,   475,    -1,   672,    -1,
     673,    -1,   681,    54,    55,    -1,   195,   464,   587,   472,
      -1,   543,    43,    44,    -1,   543,    43,   554,    44,    -1,
     676,    -1,   677,    -1,   195,    43,    14,    44,    -1,   195,
      43,    44,   154,   588,    -1,   195,    43,   678,    44,   154,
     588,    -1,   588,    -1,   678,    36,   588,    -1,    43,   590,
      44,    -1,   681,    -1,    58,    -1,    59,    -1,    60,    -1,
     193,    -1,   176,    -1,   155,    -1,    61,    -1,    62,    -1,
      63,    -1,    64,    -1,    65,    -1,   151,    -1,    66,    -1,
     195,    -1,   124,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,
      85,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   104,    -1,   105,    -1,   106,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,   128,    -1,   133,    -1,   134,    -1,   135,    -1,
     136,    -1,   137,    -1,   139,    -1,   140,    -1,   141,    -1,
     142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,
     147,    -1,   148,    -1,   149,    -1,   150,    -1,   152,    -1,
     154,    -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,
     160,    -1,   161,    -1,   162,    -1,   163,    -1,   164,    -1,
     165,    -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,
     170,    -1,   171,    -1,   172,    -1,   173,    -1,   174,    -1,
     175,    -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,
     181,    -1,   182,    -1,   183,    -1,   184,    -1,   185,    -1,
     186,    -1,   187,    -1,   189,    -1,   190,    -1,   191,    -1,
     194,    -1,   196,    -1,    86,    -1,    87,    -1,   197,    -1,
     198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,
     203,    -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,
     208,    -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,
     213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,
     218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,
     223,    -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,
     228,    -1,   229,    -1,   230,    -1,   231,    -1,   232,    -1,
     233,    -1,   122,    -1,   123,    -1,   234,    -1,   235,    -1,
     236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,    -1,
     241,    -1,   242,    -1,   243,    -1,   244,    -1,   245,    -1,
     246,    -1,   247,    -1,   248,    -1,   249,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   755,   755,   757,   758,   759,   760,   762,   764,   765,
     766,   770,   778,   778,   781,   790,   801,   839,   842,   848,
     884,   915,   918,   940,   942,   946,   953,   955,   956,   957,
     958,   959,   960,   964,   983,   988,   993,  1000,  1005,  1010,
    1019,  1022,  1028,  1033,  1040,  1040,  1040,  1043,  1056,  1061,
    1068,  1073,  1082,  1085,  1093,  1120,  1124,  1131,  1137,  1142,
    1147,  1156,  1180,  1184,  1191,  1196,  1201,  1206,  1217,  1235,
    1239,  1246,  1251,  1259,  1284,  1287,  1290,  1293,  1296,  1299,
    1302,  1305,  1308,  1311,  1314,  1317,  1320,  1323,  1326,  1329,
    1332,  1335,  1341,  1342,  1343,  1344,  1345,  1357,  1360,  1365,
    1368,  1373,  1378,  1386,  1394,  1405,  1416,  1419,  1426,  1436,
    1439,  1444,  1455,  1458,  1463,  1468,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487,  1488,  1489,
    1490,  1491,  1492,  1493,  1497,  1515,  1519,  1524,  1533,  1539,
    1539,  1542,  1562,  1566,  1571,  1579,  1584,  1588,  1596,  1599,
    1607,  1620,  1624,  1635,  1638,  1646,  1664,  1668,  1675,  1680,
    1685,  1693,  1699,  1707,  1715,  1722,  1736,  1740,  1754,  1763,
    1771,  1774,  1781,  1816,  1820,  1825,  1831,  1841,  1844,  1852,
    1855,  1862,  1880,  1884,  1891,  1896,  1904,  1922,  1926,  1934,
    1956,  1960,  1967,  1975,  1984,  1992,  2029,  2033,  2040,  2047,
    2056,  2065,  2092,  2096,  2103,  2115,  2141,  2145,  2152,  2162,
    2174,  2178,  2183,  2192,  2205,  2209,  2214,  2223,  2237,  2241,
    2254,  2259,  2271,  2275,  2283,  2296,  2304,  2317,  2324,  2338,
    2338,  2341,  2341,  2363,  2367,  2371,  2389,  2407,  2417,  2431,
    2439,  2445,  2451,  2457,  2469,  2472,  2486,  2487,  2488,  2489,
    2493,  2496,  2500,  2502,  2506,  2510,  2514,  2518,  2522,  2528,
    2534,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2562,  2563,
    2564,  2565,  2569,  2572,  2576,  2578,  2582,  2586,  2590,  2594,
    2598,  2604,  2610,  2614,  2625,  2626,  2627,  2628,  2632,  2635,
    2639,  2641,  2645,  2649,  2653,  2657,  2661,  2667,  2673,  2684,
    2685,  2686,  2687,  2693,  2694,  2695,  2699,  2719,  2736,  2739,
    2743,  2755,  2757,  2761,  2765,  2769,  2773,  2777,  2783,  2789,
    2793,  2807,  2808,  2809,  2810,  2811,  2812,  2813,  2814,  2818,
    2818,  2821,  2825,  2833,  2838,  2847,  2852,  2861,  2921,  2929,
    2934,  2943,  2948,  2957,  2967,  2971,  2979,  2983,  2991,  3007,
    3016,  3028,  3037,  3040,  3045,  3054,  3058,  3066,  3076,  3088,
    3095,  3099,  3107,  3112,  3121,  3129,  3129,  3132,  3136,  3144,
    3145,  3154,  3157,  3170,  3183,  3193,  3193,  3196,  3196,  3200,
    3203,  3211,  3216,  3226,  3234,  3242,  3255,  3270,  3277,  3278,
    3279,  3280,  3281,  3282,  3283,  3284,  3285,  3286,  3287,  3288,
    3293,  3337,  3338,  3351,  3358,  3358,  3361,  3361,  3361,  3366,
    3373,  3377,  3381,  3393,  3396,  3407,  3410,  3420,  3427,  3431,
    3435,  3439,  3452,  3460,  3468,  3473,  3481,  3485,  3491,  3498,
    3513,  3530,  3533,  3537,  3545,  3553,  3557,  3566,  3574,  3585,
    3589,  3593,  3604,  3611,  3620,  3624,  3628,  3636,  3654,  3659,
    3669,  3672,  3680,  3688,  3697,  3702,  3711,  3721,  3725,  3729,
    3729,  3733,  3737,  3741,  3745,  3749,  3753,  3757,  3761,  3765,
    3769,  3773,  3777,  3781,  3786,  3790,  3794,  3799,  3806,  3811,
    3815,  3819,  3824,  3828,  3832,  3836,  3840,  3845,  3849,  3853,
    3858,  3862,  3866,  3871,  3888,  3893,  3898,  3903,  3907,  3912,
    3916,  3921,  3927,  3933,  3938,  3939,  3940,  3948,  3952,  3956,
    3964,  3971,  3980,  3980,  3984,  4004,  4005,  4013,  4014,  4020,
    4041,  4045,  4059,  4065,  4078,  4082,  4082,  4086,  4087,  4096,
    4097,  4103,  4104,  4113,  4125,  4136,  4140,  4144,  4148,  4152,
    4156,  4160,  4164,  4172,  4180,  4197,  4205,  4214,  4218,  4222,
    4226,  4230,  4238,  4250,  4255,  4260,  4267,  4272,  4279,  4286,
    4298,  4299,  4303,  4309,  4310,  4311,  4312,  4313,  4314,  4315,
    4316,  4317,  4321,  4321,  4324,  4324,  4324,  4328,  4335,  4339,
    4343,  4351,  4359,  4369,  4379,  4383,  4406,  4411,  4421,  4422,
    4431,  4435,  4444,  4444,  4444,  4448,  4454,  4463,  4463,  4468,
    4471,  4480,  4491,  4491,  4496,  4500,  4507,  4511,  4522,  4525,
    4530,  4541,  4544,  4548,  4562,  4565,  4570,  4581,  4584,  4588,
    4606,  4609,  4614,  4619,  4626,  4639,  4653,  4656,  4661,  4680,
    4681,  4694,  4695,  4696,  4697,  4698,  4699,  4704,  4712,  4720,
    4724,  4732,  4736,  4745,  4752,  4756,  4764,  4772,  4780,  4787,
    4797,  4804,  4808,  4816,  4827,  4830,  4839,  4842,  4852,  4859,
    4869,  4870,  4872,  4874,  4880,  4884,  4888,  4889,  4890,  4894,
    4906,  4907,  4908,  4909,  4910,  4911,  4912,  4913,  4914,  4919,
    4927,  4931,  4936,  4945,  4953,  4961,  4965,  4969,  4977,  4981,
    4985,  4993,  4994,  5002,  5010,  5015,  5019,  5023,  5027,  5036,
    5037,  5045,  5052,  5055,  5058,  5061,  5065,  5077,  5093,  5095,
    5102,  5105,  5114,  5126,  5131,  5143,  5148,  5152,  5157,  5162,
    5167,  5168,  5177,  5182,  5186,  5192,  5196,  5204,  5209,  5219,
    5222,  5226,  5230,  5234,  5238,  5246,  5248,  5259,  5265,  5271,
    5277,  5292,  5296,  5300,  5304,  5308,  5312,  5316,  5320,  5328,
    5332,  5336,  5344,  5348,  5356,  5357,  5369,  5370,  5371,  5372,
    5373,  5374,  5375,  5376,  5384,  5388,  5392,  5396,  5405,  5409,
    5417,  5421,  5431,  5435,  5439,  5443,  5447,  5455,  5457,  5464,
    5468,  5472,  5476,  5486,  5490,  5494,  5502,  5504,  5512,  5516,
    5523,  5527,  5535,  5539,  5547,  5555,  5559,  5567,  5574,  5582,
    5587,  5592,  5604,  5608,  5612,  5616,  5620,  5626,  5626,  5631,
    5637,  5637,  5642,  5646,  5656,  5664,  5671,  5676,  5684,  5693,
    5705,  5717,  5730,  5741,  5750,  5762,  5767,  5772,  5778,  5784,
    5790,  5800,  5803,  5811,  5815,  5823,  5827,  5835,  5840,  5849,
    5853,  5857,  5865,  5869,  5877,  5881,  5885,  5889,  5897,  5901,
    5905,  5913,  5918,  5928,  5941,  5941,  5945,  5953,  5964,  5969,
    5993,  5993,  5997,  6005,  6009,  6016,  6021,  6030,  6039,  6039,
    6039,  6039,  6039,  6039,  6039,  6039,  6040,  6040,  6040,  6040,
    6040,  6040,  6041,  6045,  6045,  6045,  6045,  6045,  6045,  6045,
    6045,  6045,  6045,  6046,  6046,  6046,  6046,  6046,  6046,  6046,
    6047,  6047,  6047,  6047,  6047,  6047,  6047,  6047,  6048,  6048,
    6048,  6048,  6048,  6048,  6048,  6048,  6048,  6048,  6048,  6049,
    6049,  6049,  6049,  6049,  6049,  6049,  6049,  6049,  6049,  6049,
    6049,  6050,  6050,  6050,  6050,  6050,  6050,  6050,  6050,  6050,
    6050,  6051,  6051,  6051,  6051,  6051,  6051,  6051,  6051,  6051,
    6051,  6051,  6051,  6052,  6052,  6052,  6052,  6052,  6052,  6052,
    6052,  6052,  6052,  6052,  6052,  6053,  6053,  6053,  6053,  6053,
    6053,  6053,  6053,  6053,  6054,  6054,  6054,  6054,  6054,  6054,
    6054,  6054,  6055,  6055,  6055,  6055,  6055,  6055,  6055,  6055,
    6055,  6055,  6055,  6056,  6056,  6056,  6056,  6056,  6056,  6056,
    6056,  6056,  6057,  6057,  6057,  6057,  6057,  6057,  6057,  6057,
    6057,  6057,  6058,  6058,  6058,  6058,  6058,  6058,  6058,  6058,
    6058,  6058,  6058,  6059,  6059,  6059,  6059,  6059,  6059,  6059,
    6059,  6059,  6059,  6059,  6060,  6060,  6060,  6060,  6060,  6060,
    6060
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
  "\"document-node\"", "\"node\"", "\"processing-instruction\"",
  "\"schema-attribute\"", "\"schema-element\"", "\"text\"",
  "\"empty-sequence\"", "\"boundary-space\"", "\"ft-option\"",
  "\"base-uri\"", "\"lax\"", "\"strict\"", "\"idiv\"", "\"child\"",
  "\"descendant\"", "\"self\"", "\"descendant-or-self\"",
  "\"following-sibling\"", "\"following\"", "\"parent\"", "\"ancestor\"",
  "\"preceding-sibling\"", "\"preceding\"", "\"ancestor-of-self\"",
  "\"document\"", "\"not\"", "\"using\"", "\"no\"", "\"sensitive\"",
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
  "CompAttrConstructor", "CompAttrName", "CompTextConstructor",
  "CompCommentConstructor", "CompPIConstructor", "CompPINCName",
  "CompPIConstructorContent", "SingleType", "SingleTypeOccurrence",
  "TypeDeclaration", "SequenceType", "OccurrenceIndicator", "ItemType",
  "AtomicType", "KindTest", "AnyKindTest", "DocumentTest", "TextTest",
  "CommentTest", "PITest", "AttributeTest", "AttribNameOrWildcard",
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
     575,   576,   577,   578,   579,   580
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   326,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   328,   329,   329,   330,   331,   332,   333,   333,   334,
     335,   336,   336,   337,   337,   337,   338,   338,   338,   338,
     338,   338,   338,   339,   340,   340,   340,   340,   340,   340,
     341,   341,   341,   341,   342,   342,   342,   343,   344,   344,
     344,   344,   345,   345,   346,   347,   347,   347,   347,   347,
     347,   348,   349,   349,   349,   349,   349,   349,   350,   351,
     351,   351,   351,   352,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   354,   354,   354,   354,   354,   355,   355,   356,
     357,   357,   357,   357,   357,   358,   359,   359,   359,   360,
     360,   360,   361,   361,   361,   361,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   363,   364,   364,   364,   365,   366,
     366,   367,   368,   368,   368,   369,   369,   369,   370,   370,
     371,   372,   372,   373,   373,   374,   375,   375,   375,   375,
     375,   376,   377,   378,   379,   380,   381,   381,   382,   383,
     384,   384,   385,   386,   386,   386,   386,   387,   387,   388,
     388,   389,   390,   390,   390,   390,   391,   392,   392,   393,
     394,   394,   394,   395,   396,   397,   398,   398,   398,   398,
     398,   399,   400,   400,   400,   401,   402,   402,   402,   403,
     404,   404,   404,   405,   406,   406,   406,   407,   408,   408,
     409,   409,   410,   410,   410,   411,   411,   412,   412,   413,
     413,   414,   414,   415,   415,   415,   415,   415,   415,   416,
     417,   417,   417,   417,   418,   418,   419,   419,   419,   419,
     420,   421,   422,   422,   422,   422,   422,   422,   422,   422,
     422,   423,   423,   423,   423,   423,   423,   423,   424,   424,
     424,   424,   425,   426,   427,   427,   427,   427,   427,   427,
     427,   427,   427,   427,   428,   428,   428,   428,   429,   430,
     431,   431,   431,   431,   431,   431,   431,   431,   431,   432,
     432,   432,   432,   433,   433,   433,   434,   435,   436,   437,
     438,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   441,
     441,   442,   443,   444,   444,   445,   445,   446,   447,   448,
     448,   449,   449,   450,   451,   451,   452,   452,   453,   454,
     455,   455,   456,   456,   456,   457,   457,   458,   458,   459,
     460,   460,   461,   461,   462,   463,   463,   464,   464,   465,
     465,   466,   466,   466,   466,   467,   467,   468,   468,   469,
     469,   470,   470,   471,   472,   473,   474,   474,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     476,   477,   477,   477,   478,   478,   479,   479,   479,   480,
     481,   481,   482,   483,   483,   484,   484,   485,   486,   486,
     487,   487,   488,   489,   490,   490,   491,   491,   492,   492,
     493,   494,   494,   494,   495,   495,   495,   496,   496,   497,
     497,   498,   499,   500,   500,   501,   501,   502,   503,   503,
     504,   504,   505,   506,   506,   507,   507,   508,   508,   509,
     508,   508,   508,   508,   508,   508,   508,   508,   508,   508,
     508,   508,   508,   508,   510,   510,   510,   511,   511,   512,
     512,   512,   513,   513,   513,   513,   513,   514,   514,   514,
     515,   515,   515,   516,   516,   517,   517,   518,   518,   519,
     519,   520,   520,   520,   521,   521,   521,   522,   522,   522,
     523,   523,   524,   524,   525,   526,   526,   527,   527,   527,
     527,   528,   529,   529,   529,   530,   530,   531,   531,   532,
     532,   533,   533,   534,   534,   535,   535,   535,   535,   535,
     535,   535,   535,   536,   536,   537,   537,   538,   538,   538,
     538,   538,   539,   540,   540,   541,   541,   542,   542,   542,
     543,   543,   543,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   545,   545,   546,   546,   546,   547,   548,   549,
     549,   550,   551,   552,   553,   553,   554,   554,   555,   555,
     556,   556,   557,   557,   557,   558,   558,   559,   559,   560,
     560,   560,   561,   561,   562,   562,   563,   563,   564,   564,
     564,   565,   565,   565,   566,   566,   566,   567,   567,   567,
     568,   568,   568,   568,   568,   569,   570,   570,   571,   572,
     572,   573,   573,   573,   573,   573,   573,   574,   575,   576,
     576,   577,   577,   578,   579,   579,   580,   581,   582,   583,
     583,   584,   584,   585,   586,   586,   587,   587,   588,   588,
     589,   589,   589,   589,   590,   590,   590,   590,   590,   591,
     592,   592,   592,   592,   592,   592,   592,   592,   592,   593,
     594,   594,   594,   595,   596,   597,   597,   597,   598,   598,
     598,   599,   599,   600,   601,   602,   602,   602,   602,   603,
     603,   604,   605,   606,   607,   608,   609,   610,   611,   611,
     612,   612,   613,   613,   614,   614,   615,   615,   616,   616,
     617,   617,   618,   618,   618,   619,   619,   620,   620,   621,
     621,   621,   621,   621,   621,   622,   622,   623,   623,   623,
     623,   624,   624,   624,   624,   624,   624,   624,   624,   625,
     625,   625,   626,   626,   627,   627,   628,   628,   628,   628,
     628,   628,   628,   628,   629,   629,   629,   629,   630,   630,
     631,   631,   632,   632,   632,   632,   632,   633,   633,   634,
     634,   634,   634,   635,   635,   635,   636,   636,   637,   637,
     638,   638,   639,   639,   640,   641,   641,   642,   643,   644,
     644,   644,   645,   645,   645,   645,   645,   646,   646,   647,
     648,   648,   649,   649,   650,   651,   652,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   660,   660,   660,   660,
     660,   661,   661,   662,   662,   663,   663,   664,   664,   665,
     665,   665,   666,   666,   667,   667,   667,   667,   668,   668,
     668,   669,   669,   670,   671,   671,   672,   673,   674,   674,
     675,   675,   676,   677,   677,   678,   678,   679,   680,   680,
     680,   680,   680,   680,   680,   680,   680,   680,   680,   680,
     680,   680,   680,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681,   681,   681,   681,   681,   681,   681,   681,   681,   681,
     681
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
       2,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       3,     2,     3,     3,     1,     3,     4,     4,     3,     1,
       3,     2,     3,     2,     0,     1,     0,     2,     2,     3,
       0,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     4,     4,     3,     3,     3,     4,     4,     3,     4,
       6,     1,     1,     4,     1,     3,     4,     6,     7,     1,
       1,     4,     1,     1,     1,     1,     1,     3,     0,     2,
       0,     2,     3,     1,     3,     1,     4,     1,     2,     1,
       1,     2,     2,     3,     1,     2,     4,     3,     4,     0,
       1,     2,     1,     2,     1,     0,     3,     2,     3,     3,
       4,     1,     3,     3,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     2,     2,
       1,     2,     2,     2,     5,     5,     2,     0,     3,     2,
       4,     4,     6,     4,     3,     4,     0,     2,     2,     3,
       1,     3,     2,     2,     2,     1,     2,     3,     3,     3,
       3,     3,     6,     6,     4,     4,     4,     2,     2,     2,
       2,     2,     7,     5,     5,     6,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     5,     7,     8,    10,     6,
       8,     0,     2,     2,     3,     0,     2,     1,     3,     1,
       1,     1,     3,     7,     3,     7,     5,     9,     1,     1,
       1,     1,     3,     5,     1,     1,     3,     4,     3,     4,
       1,     1,     4,     5,     6,     1,     3,     3,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   252,   274,   290,   311,     0,     0,     0,   371,
       0,     0,   557,     0,     0,     0,   626,     0,   602,     0,
       0,   521,   581,   552,     0,   819,   820,   821,   869,   870,
     871,   875,   876,   877,   878,   879,   881,   884,   885,   886,
     887,   888,   889,   890,   891,   892,   893,   894,   895,   896,
     897,   898,   899,   900,   901,   902,   984,   985,   903,   904,
     905,   906,   907,   908,   909,   910,   911,   912,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   927,  1023,  1024,   883,   822,   928,   558,   559,
     929,   930,   931,   932,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,   943,   944,   945,   880,   946,   947,
     874,   948,   949,   950,   951,   952,   953,   954,   955,   956,
     957,   958,   959,   960,   961,   962,   963,   964,   965,   966,
     967,   873,   968,   969,   970,   971,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   872,   982,   882,   983,
     986,   987,   988,   989,   990,   991,   992,   993,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,     2,   385,   387,   388,     0,   401,   404,
     405,   389,   390,   391,   397,   454,   456,   473,   476,   478,
     481,   486,   489,   492,   494,   496,   498,   500,   503,   504,
     506,     0,   512,   505,   517,   520,   524,   525,   527,   528,
     529,     0,   534,   531,     0,   546,   544,   554,   556,   526,
     560,   563,   572,   564,   565,   566,   569,   570,   567,   568,
     590,   592,   593,   594,   591,   631,   632,   633,   634,   635,
     636,   553,   678,   670,   677,   676,   675,   672,   674,   671,
     673,   392,     0,   393,     0,   395,   394,   396,   574,   575,
     576,   573,   555,   398,   399,   571,   854,   855,   562,   824,
     868,     0,     0,     3,   248,   249,     0,   252,   252,     4,
     270,   271,     0,   274,   274,     5,   286,   287,     0,   290,
     290,     6,   311,   301,   302,   311,     0,    23,   106,     7,
      20,    22,   371,     8,     0,     9,    17,    10,     0,     1,
     869,   870,   871,   875,   876,   877,   878,   879,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     919,  1023,  1024,   930,   932,   943,   944,   880,   874,   961,
     967,   872,   882,  1009,  1012,  1018,  1020,  1030,  1031,   577,
     578,   868,   869,   870,   876,   879,   872,   543,   597,   598,
     599,     0,   627,     0,   519,   603,     0,   502,   501,   580,
       0,   537,     0,     0,   644,     0,     0,     0,     0,     0,
       0,     0,   649,     0,     0,     0,     0,     0,   535,   536,
     538,   539,   540,   541,   547,   548,   549,   550,   551,     0,
       0,     0,   817,     0,     0,     0,   409,   411,     0,     0,
     417,   419,     0,     0,   440,     0,     0,     0,     0,     0,
       0,   542,     0,     0,   639,     0,     0,   656,     0,     0,
     807,   808,     0,   810,   811,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   406,   403,   407,   408,   402,
       0,     0,     0,     0,     0,     0,     0,     0,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   513,   518,     0,     0,     0,     0,
     533,   545,     0,     0,     0,   809,     0,     0,     0,     0,
       0,     0,     0,   973,   980,     0,     0,     0,   261,     0,
       0,   265,   266,   267,   262,   263,   329,   330,     0,   264,
       0,   250,     0,   246,   247,   251,   973,     0,     0,     0,
       0,     0,     0,     0,     0,   272,     0,   268,   269,   273,
     973,     0,     0,     0,   321,     0,     0,   325,   326,   328,
     322,   323,     0,   324,     0,   288,   327,     0,   284,   285,
     289,   299,   300,   309,   973,     0,     0,     0,     0,     0,
       0,     0,     0,   308,     0,    26,   112,     0,     0,    15,
     374,   375,   376,   377,   378,   379,   372,   373,   602,     0,
     629,   628,   625,     0,   579,   692,   688,     0,   691,   703,
       0,     0,   643,   684,     0,   680,     0,     0,     0,     0,
     679,   685,     0,     0,   823,     0,     0,   648,     0,   694,
       0,   702,   704,   683,     0,     0,     0,     0,     0,     0,
       0,   656,     0,   656,     0,     0,   656,     0,     0,     0,
       0,     0,     0,     0,     0,   700,   695,     0,   699,     0,
     638,     0,   367,     0,   382,     0,     0,     0,     0,     0,
     842,   844,   386,   400,   422,     0,     0,     0,   453,   455,
     458,   461,   462,   463,   471,   472,     0,   457,   464,   465,
     466,   467,   468,   469,   470,     0,   479,   480,   477,   482,
     484,   483,   485,   487,   488,   490,   491,     0,     0,     0,
       0,   510,     0,   523,   522,     0,     0,     0,   589,   858,
     588,     0,   587,     0,     0,     0,     0,   584,     0,   856,
     307,   306,   331,     0,   303,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   835,     0,     0,     0,
     253,   254,   255,   256,   260,   257,   258,   259,   371,     0,
       0,   275,   276,   277,   278,   282,   283,   279,   280,   281,
     371,     0,   291,   292,   293,   294,   298,   295,   296,   297,
     371,   371,   312,   313,   314,   315,   319,   320,   316,   317,
     318,    24,    25,     0,   108,   109,     0,   365,   366,     0,
       0,   371,    18,     0,    14,   603,     0,   630,     0,   515,
     514,     0,   689,   645,   641,     0,   647,   681,   682,   687,
     686,   650,   651,     0,   693,   701,   646,   637,     0,   816,
       0,   582,   583,   413,   410,     0,     0,   418,     0,   439,
     437,   438,     0,     0,   507,     0,     0,     0,   696,   640,
     656,     0,   368,     0,   881,   873,   882,   657,   660,   664,
     666,   669,   667,   860,   861,   668,     0,   857,     0,     0,
       0,     0,     0,     0,   423,   430,   424,   427,   431,     0,
     460,     0,     0,     0,     0,   729,   474,   710,   713,   715,
     717,   719,   720,   735,   724,   493,   495,   497,   654,   499,
     511,   530,   532,   561,     0,   859,     0,     0,   806,   805,
     804,   585,   304,     0,   333,   334,   706,   349,     0,     0,
     362,   363,   339,   340,     0,     0,     0,     0,   344,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   352,
       0,   352,     0,   338,   800,   799,   801,    21,    34,    62,
      48,    69,    74,   100,    27,    52,    28,    52,    29,   112,
      30,   112,    31,     0,    32,     0,   107,   105,   135,     0,
     142,   151,     0,     0,     0,   182,   187,   190,   194,   196,
     202,   206,   173,   210,   214,   218,   139,   140,   114,   115,
     116,   112,   117,   113,   118,   148,   119,   153,   120,     0,
     122,   112,   121,   130,   177,   123,   112,   124,   112,   125,
     112,   126,   112,   127,   112,   128,   112,   129,   112,   131,
       0,   132,   112,   133,   112,     0,     0,     0,   380,   602,
     602,   620,   595,   516,     0,   705,   642,   652,   818,     0,
       0,   415,     0,     0,     0,   450,     0,   444,     0,     0,
     508,   509,     0,   383,   381,     0,     0,     0,     0,   661,
     663,   662,   658,     0,   813,     0,   814,     0,     0,   849,
     850,   846,   848,     0,   432,   433,   434,   425,     0,     0,
     718,     0,   730,   732,   734,   725,     0,   475,     0,   708,
       0,     0,   721,     0,   722,   655,   653,   586,     0,     0,
       0,   656,     0,     0,   348,     0,     0,     0,   337,   835,
     839,   840,   841,   836,   837,     0,     0,     0,     0,   352,
       0,   351,     0,   358,     0,     0,   770,     0,     0,   795,
       0,     0,   766,   767,     0,   754,   760,   761,   759,   758,
     762,   756,   757,   763,     0,   101,   102,    40,    36,     0,
       0,     0,   112,    49,    51,     0,   112,    63,    67,    66,
       0,     0,     0,    70,     0,     0,     0,    73,    91,    75,
      79,    80,    81,    85,    86,    88,    77,    82,    83,    84,
      87,    89,     0,     0,     0,    99,   111,   110,     0,     0,
       0,   170,   166,   112,     0,     0,   109,     0,     0,     0,
       0,   152,     0,   161,     0,   112,     0,   109,   109,   179,
     183,     0,     0,     0,     0,     0,   109,     0,     0,     0,
     109,     0,   109,   109,     0,   109,     0,     0,   109,   109,
       0,   209,   212,     0,   215,   216,     0,     0,     0,   379,
       0,     0,     0,     0,     0,   690,   815,     0,     0,     0,
     420,   421,   441,     0,     0,     0,   442,   443,     0,     0,
       0,     0,   697,   867,   659,   665,     0,     0,   865,     0,
     384,     0,     0,     0,   851,     0,     0,   426,     0,   428,
     723,   729,   727,     0,   731,   733,     0,   712,     0,     0,
     741,     0,     0,     0,     0,     0,   707,   711,   714,     0,
       0,     0,     0,     0,   802,   803,   310,     0,   332,   341,
     342,   335,   336,   346,   347,   343,     0,   825,   831,     0,
       0,     0,   226,   225,   869,   890,  1025,  1026,     0,   221,
       0,   224,   222,   233,   244,   240,   379,   355,   356,   350,
     353,     0,     0,   771,   776,     0,   796,   769,   768,     0,
       0,   773,   772,     0,   765,   764,     0,   794,   755,   103,
     104,    38,    35,    39,    44,    45,    46,    37,    55,    53,
     112,     0,    50,     0,    65,    64,    61,    72,    71,    68,
      95,    96,    92,    93,    94,    76,    97,    78,    90,   138,
     162,     0,   112,   167,     0,     0,   164,   136,   137,   134,
     145,   146,   147,   144,   143,   141,   156,   149,   112,   150,
     154,   163,     0,   174,   175,   176,   112,     0,   185,   184,
     112,   188,   186,   191,   192,   189,   193,   197,   199,   200,
     198,   195,   203,   204,   201,   207,   208,   205,   211,   213,
     219,   217,     0,    16,     0,   602,   602,     0,   624,   623,
     622,   621,   414,     0,     0,     0,   448,     0,     0,   449,
     447,     0,   698,   862,     0,     0,     0,   812,   656,     0,
     843,   845,     0,   435,   436,     0,   726,   728,   798,   748,
     746,   747,   709,     0,     0,   752,   753,   744,   745,   716,
       0,     0,   737,     0,   736,     0,   361,   359,   833,     0,
       0,     0,     0,   838,   243,     0,     0,     0,     0,     0,
     829,   831,   234,     0,     0,     0,     0,   239,     0,   354,
     352,   784,   777,   777,   779,     0,     0,   786,   786,   797,
      41,    42,    43,    56,    60,    59,     0,     0,     0,    33,
      47,    98,   169,     0,   165,   168,   157,   160,     0,     0,
       0,   178,     0,   172,   181,    12,   379,     0,     0,   602,
     416,   412,   451,     0,   446,   452,   863,   866,     0,     0,
     852,     0,   429,   749,   750,   751,   742,   743,   739,   738,
       0,   360,   834,   832,   826,     0,   242,   241,     0,   230,
     229,     0,   220,     0,   236,   235,   238,   237,     0,   370,
     364,   369,   357,     0,     0,     0,     0,     0,   790,   788,
     785,   783,    58,    57,    54,   171,   159,   158,   155,   180,
      11,    13,     0,   608,   614,   600,   611,   617,   601,     0,
       0,   864,     0,   847,   740,   827,   831,   227,     0,   830,
       0,     0,   775,   774,   780,   781,     0,   789,     0,     0,
     787,     0,     0,     0,     0,     0,   596,   445,   853,     0,
       0,   231,   232,   245,   778,     0,   791,   792,   793,    19,
     604,   610,   609,   605,   616,   615,   606,   613,   612,   607,
     619,   618,   828,   228,   782
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,   333,  1640,   337,   335,   336,   609,   822,   329,
     330,   605,   813,   974,   975,  1381,  1387,   976,   977,  1172,
    1389,  1390,   978,   979,   980,   981,   982,   983,  1405,  1407,
     984,   985,  1008,   606,   986,   816,  1009,  1010,  1011,  1012,
    1013,  1014,  1015,  1423,  1220,  1016,  1017,  1222,  1427,  1428,
    1018,  1019,  1020,  1021,  1022,  1211,  1212,  1213,  1414,  1023,
    1024,  1229,  1437,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,
    1042,  1043,  1044,  1348,  1349,  1350,  1351,  1608,  1680,  1352,
    1353,  1354,  1537,   303,   304,   305,   306,   535,   309,   310,
     311,   312,   315,   316,   317,   318,   321,   307,   530,   531,
     323,   324,   308,   326,   571,   536,   754,   537,   538,   539,
     540,   562,   541,   542,   543,   950,  1335,   544,   545,   546,
    1141,   958,   547,   548,  1517,   549,   550,   819,   457,  1620,
     767,   616,   617,   824,   683,   684,  1207,   203,   204,   205,
     206,   207,   208,   476,   209,   436,   437,  1061,  1269,   210,
     440,   441,   477,   478,   479,   896,   897,   898,  1096,  1299,
     211,   443,   444,   212,  1066,  1276,  1067,  1068,  1274,   213,
     214,   215,   216,   706,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     830,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   379,   254,   255,   256,   257,   258,   741,   742,
     259,   260,   261,   390,   618,   396,  1645,  1648,  1672,  1674,
    1673,  1675,  1264,   262,   393,   263,   621,   264,   265,   266,
     455,   632,   267,   405,   268,   269,   270,   413,   647,   917,
    1116,   686,   877,  1082,   878,   879,   271,   272,   273,   274,
     275,   276,   277,   627,   278,   648,   279,   677,   280,   650,
     628,   651,  1054,   937,   906,  1316,  1109,   907,   908,   909,
     910,   911,   912,   913,   914,  1105,  1114,  1323,  1317,  1596,
    1507,   963,  1155,  1156,  1157,  1158,  1159,  1623,  1372,  1160,
    1630,  1548,  1627,  1670,  1161,  1162,  1163,  1107,   586,   281,
     282,   283,   284,   285,   286,   287,   431,   432,   288,   289,
     290,   291,   643,   292,   552,  1521,  1338,   954,  1133,  1134,
     293,   294,  1091,  1293,  1294,   295,   296,   297,   298,   882,
     883,   884,  1289,   885,   299,   300
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1453
static const yytype_int16 yypact[] =
{
    1020,  3482,   -34,   -34,   -34,   -34,   -71,   185,    71, -1453,
     275,  7138, -1453,  5618,   616,   373,   410,  4910,   447,  3720,
    3720, -1453, -1453, -1453,  2292, -1453, -1453, -1453,   194,   509,
     585,   602,    94,   662,   681,   562, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,   656,   709,   745,   748,   754,   761,   763,
     802,   819,   823,   836,   700, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   742, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,   816,   844, -1453, -1453, -1453, -1453, -1453,
   -1453,   858, -1453,    51, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   893,   893, -1453,   872, -1453, -1453,
     875, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   527, -1453, -1453, -1453, -1453, -1453,
     898, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,   286, -1453,   897, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,    80, -1453, -1453,    -5, -1453, -1453, -1453,
   -1453, -1453,   884, -1453,     4, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453,   714,   726, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   925, -1453, -1453,   766, -1453, -1453,
   -1453, -1453, -1453, -1453,   813,   840, -1453,   969,   807,   133,
     126,    65,   597, -1453,   853,   837,   859,   871, -1453, -1453,
   -1453,   115, -1453, -1453,  4910,   352, -1453, -1453,   971,  1019,
   -1453,  5618, -1453, -1453,  5618, -1453, -1453, -1453, -1453,   378,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453,  3482, -1453,  3482, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
     341,   413,   870, -1453, -1453, -1453,  3958,   855, -1453, -1453,
   -1453, -1453,  4196,   855, -1453, -1453, -1453, -1453,  4434,   855,
   -1453, -1453,   855, -1453, -1453, -1453,  4672, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   878, -1453, -1453, -1453,    76, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453,  1013,  1026,  1027,  1031,  1032, -1453, -1453, -1453,
   -1453,   707, -1453,  1044,   352, -1453,  7138, -1453, -1453, -1453,
     679, -1453,  6090,  3482, -1453,  1034,  1042,  3482,    85,  1045,
    6946,  3482, -1453,  1037,  7138,  7138,  1046,  3482, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,  3482,
    7138,    18, -1453,  3482,  3482,  7138,  1055, -1453,  7138,  1080,
    1057, -1453,  7138,   124, -1453,   142,  3482,  3482,  3482,  1043,
    1047, -1453,  6326,  3482, -1453,  1034,   334,   942,  3482,   940,
   -1453, -1453,  3482, -1453, -1453,  7138,  3482,  3482,  3482,   858,
      51,  3482,  1091,   966,   967, -1453, -1453, -1453, -1453, -1453,
    3720,  3720,  3720,  3720,  3720,  3720,  3720,  3720, -1453,  3720,
    3720,  3720,  3720,  3720,  3720,  3720,  3720,  1041,  3720,  3720,
    3720,  3720,  3720,  3720,  3720,  3720,  3720,  3720,  3720,   947,
     956,   958,   959,  2530, -1453,   352,  4910,  4910,  3482,  3482,
   -1453, -1453,  3482,  1816,   182, -1453,  2054,  1061,   990,   991,
      15,  1066,  7138,  1159,   664,  1066,  1066,  1066, -1453,  1066,
    1066, -1453, -1453, -1453, -1453, -1453, -1453, -1453,  1066, -1453,
    1066, -1453,  1066, -1453, -1453,   537,  1137,  1066,  1066,  1066,
    1066,  1066,  1066,  1066,  1066, -1453,  1066, -1453, -1453,   540,
    1165,  1066,  1066,  1066, -1453,  1066,  1066, -1453, -1453, -1453,
   -1453, -1453,  1066, -1453,  1066, -1453, -1453,  1066, -1453, -1453,
     584, -1453, -1453,   604,  1068,  1066,  1066,  1066,  1066,  1066,
    1066,  1066,  1066, -1453,  1066,   319,   556,   558,  7138,   938,
   -1453, -1453, -1453, -1453, -1453,   972, -1453, -1453,  1014,  1015,
   -1453, -1453, -1453,   293, -1453, -1453, -1453,   719, -1453, -1453,
     295,  2768, -1453, -1453,   390, -1453,   681,  1032,  1081,  1086,
   -1453, -1453,  1087,  1088, -1453,   392,  3006, -1453,  1094, -1453,
    1095, -1453, -1453, -1453,   470,   506,  1127,   742,  3482,   552,
     581,   942,   858,   942,  7138,    51,   942,   893,  3482,  3482,
     752,   759,   587,  3482,  3482, -1453, -1453,   764, -1453,   594,
   -1453,  7138, -1453,   776, -1453,  6533,  1092,   917,  1084,   993,
     923,   155, -1453, -1453, -1453,  7138,  3482,  1017,   840, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,  3720, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453,    87,   126,   126,   851,    65,
      65,    65,    65,   597,   597, -1453, -1453,  6533,  6533,  7138,
    7138, -1453,   605, -1453, -1453,   611,   612,   650, -1453, -1453,
   -1453,   799, -1453,   580,  3482,  3482,  3482, -1453,   806, -1453,
   -1453, -1453, -1453,  1066, -1453, -1453,  1113,   718,  1033,  1150,
    7138,   724,   786,   377,   328,  7138,   579,   558,   213,    50,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,   647,   664,
    1078, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
     551,   363, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
     573,   507, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,   519, -1453, -1453,  1168, -1453, -1453,  7321,
    1125, -1453, -1453,  6533, -1453,   788,   140, -1453,  1035, -1453,
   -1453,  7138, -1453, -1453, -1453,   631, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,   644, -1453, -1453, -1453, -1453,  3482, -1453,
    1036, -1453, -1453,  1050, -1453,  1157,  1158, -1453,  1038, -1453,
   -1453, -1453,  1022,  1016, -1453,   659,   661,  7138, -1453, -1453,
     942,  1163, -1453,  6740,  1133,  1134,  1135, -1453,   425, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,  3482, -1453,  3482,  3482,
    3482,  1136,  1138,  1548, -1453, -1453,  1144, -1453,   792,  3482,
   -1453,    87,  3482,   500,   304,   720,  1090,   941,   944,  1104,
   -1453, -1453,  1078,   992, -1453, -1453, -1453, -1453,  1172, -1453,
   -1453, -1453, -1453, -1453,  3244, -1453,   962,   968, -1453, -1453,
   -1453, -1453, -1453,  1033, -1453, -1453, -1453, -1453,  7138,  1167,
   -1453, -1453, -1453, -1453,  1059,  1033,  1039,  1040, -1453, -1453,
    1173,  1085,  7138,   -38,   979,  7321,  7138,  1025,  1033,  1103,
    7138,  1103,   829,  1139, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453,   666, -1453,   244, -1453,   181, -1453,   395,
   -1453,   186, -1453,  1277, -1453,   970,   101, -1453, -1453,   640,
   -1453, -1453,   916,   961,   920, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453,   197, -1453, -1453, -1453,    21, -1453,   948, -1453,   974,
   -1453, -1453, -1453, -1453,   143, -1453,   264, -1453,   930, -1453,
     -55, -1453, -1453, -1453,   285, -1453,    -1, -1453,  -135, -1453,
    -116, -1453,   667, -1453,   931,   897,  1033,   558, -1453,   447,
     447, -1453, -1453, -1453,  1193, -1453, -1453, -1453, -1453,  3482,
    1226,  1048,  3482,  3482,  3482,  1227,    12, -1453,   120,  3482,
   -1453, -1453,   157, -1453, -1453,  1196,  1197,  1198,  5854, -1453,
   -1453, -1453, -1453,   668, -1453,  1018, -1453,  1234,  1234, -1453,
   -1453,  1023, -1453,  3482, -1453, -1453,  1105,  1144,  1203,   673,
   -1453,   216,  1160,  1049, -1453, -1453,  1162, -1453,    87,   411,
      87,  1121,  1139,    81, -1453, -1453, -1453, -1453,  3482,  3482,
    1066,   942,  1033,   830, -1453,  1033,  1033,   798, -1453,    77,
   -1453, -1453, -1453,  1221, -1453,  5146,   897,  1218,  1093,  1103,
    1033,  1225,  1229,  1225,   833,   892, -1453,    49,  1051, -1453,
     895,  7138, -1453, -1453,  1140, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   829,   980,   982, -1453, -1453,  5146,
    6533,   887,  1011, -1453, -1453,  6533,  1011, -1453, -1453, -1453,
    6533,  3482,  7322, -1453,  6533,  3482,  7350, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453,    38,  1149,  1149, -1453, -1453, -1453,  1024,  3482,
     973,   729, -1453, -1453,  3482,  3482, -1453,  7378,   -58,  3482,
     214, -1453,   316, -1453,  7406, -1453,  3482, -1453, -1453,  1002,
   -1453,  6533,  3482,  7434,  3482,  7462, -1453,  3482,  7490,  7518,
   -1453,  3482, -1453, -1453,  7546, -1453,  3482,  7574, -1453, -1453,
    7602, -1453, -1453,  3482, -1453, -1453,  7630,  3482,  7658,   972,
    1066,  7321,  1231,  1233,   550, -1453, -1453,  7138,  1270,  1148,
   -1453, -1453, -1453,  7138,  6533,    93, -1453, -1453,  6533,  3482,
    1128,  1242, -1453, -1453, -1453, -1453,  1244,  1143, -1453,   810,
   -1453,  3482,  7138,   815, -1453,   821,  1246, -1453,   848,  1151,
   -1453,   720, -1453,  1250, -1453, -1453,  3720,   944,  1205,   896,
   -1453,  3720,  3720,    81,   787,   787, -1453, -1453,  1104,    87,
      45,  3720,  3720,  1106, -1453, -1453, -1453,    64, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,   337, -1453,  1152,  1070,
     -38,  5618, -1453,   796,   368,  1283,  1267,  1268,   141, -1453,
    5382,   567,   635, -1453, -1453, -1453,   972, -1453, -1453,  1225,
   -1453,  1033,  1033, -1453, -1453,  1098, -1453, -1453, -1453,     5,
    1033, -1453, -1453,    84, -1453, -1453,  1191, -1453, -1453, -1453,
   -1453,   -33,  1304, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
     457,  7686, -1453,  7714, -1453,   925, -1453, -1453,   925, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453,  1201,  1201, -1453,
     925,  3482, -1453, -1453,  1076,  7742,   925,   925,   101, -1453,
   -1453, -1453, -1453, -1453,   925, -1453, -1453, -1453,   339, -1453,
   -1453, -1453,  7770,   925,   101,   101, -1453,  1077, -1453,   925,
   -1453,   925, -1453,   101,   925, -1453, -1453,   101,   925,   101,
     101, -1453,   101,   925, -1453,   101,   101, -1453,   925, -1453,
     925, -1453,  1092, -1453,   897,   447,   447,   616, -1453, -1453,
   -1453, -1453, -1453,  7138,  3482,  1174, -1453,  7138,  3482, -1453,
   -1453,  3482, -1453, -1453,  6533,  6533,  1175, -1453,   942,  1234,
   -1453, -1453,  1234, -1453, -1453,  1033, -1453, -1453,    65, -1453,
   -1453, -1453, -1453,   296,   732, -1453, -1453, -1453, -1453, -1453,
    3720,  3720,   851,   135, -1453,  3482, -1453, -1453, -1453,   824,
    6533,  1092,  5146, -1453, -1453,  5618,  5618,   111,  1140,  5146,
   -1453,  1152, -1453,  5382,  5382,  5382,  5382,  1311,    47, -1453,
    1103, -1453, -1453, -1453,    86,  1140,  1033, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,  6533,  3482,  7798, -1453,
   -1453, -1453,   925,  7826, -1453, -1453, -1453, -1453,  6533,  3482,
    7854, -1453,  7882, -1453,  1546,  1066,   972,   487,   538,   447,
   -1453, -1453, -1453,  1204, -1453, -1453, -1453, -1453,  6533,  1323,
   -1453,   825, -1453, -1453, -1453, -1453, -1453, -1453,   851,   851,
    3720, -1453, -1453, -1453, -1453,   141, -1453, -1453,  1294, -1453,
   -1453,  1305, -1453,  1092, -1453, -1453, -1453, -1453,  3482, -1453,
   -1453, -1453,  1225,   835,   849,  1140,  1147,   850, -1453, -1453,
     505,   505, -1453,   925, -1453, -1453, -1453,   925, -1453, -1453,
   -1453, -1453,  1092, -1453, -1453, -1453, -1453, -1453, -1453,  1318,
    3482, -1453,  3482, -1453,   851, -1453,  1152, -1453,   303, -1453,
     693,  1240, -1453, -1453,    81, -1453,  1140, -1453,    90,    90,
   -1453,  1066,   257,   125,   318,   161, -1453, -1453, -1453,  1092,
    1313, -1453, -1453, -1453, -1453,  1153, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,   385,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,   159,
   -1453, -1453,  1358, -1453,   -94,  -875, -1453, -1453, -1453, -1453,
     376, -1453, -1453, -1453, -1453, -1453, -1453, -1453,   144, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,   158, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1146,  -161, -1453, -1453, -1453, -1453, -1453,
   -1005, -1453, -1453, -1453,  1064,  1065,  1067,  -253, -1453,  1063,
    1069,  1060, -1453,  1058,  1062,  1073, -1453,   949, -1453,   860,
    1056,  1072,    29,  1054,  -286,  -194,  -488,  -113,  -287,  -109,
     -97,  -282,  -280,  -276,  -237, -1453, -1453,  -236,  -225, -1453,
    -944, -1453, -1453,   -90, -1453,  -201,   -72,  -726,  -335, -1453,
      -2, -1453, -1453, -1241,    44,   517,  -672,   277,   -24,  -182,
   -1453, -1453,  1182, -1453, -1453, -1453,   734, -1453, -1453, -1453,
   -1453,   735, -1453, -1453, -1453,   498,   306, -1453, -1453, -1453,
   -1453,  1297,   736, -1453, -1453, -1453,   338, -1453, -1453, -1453,
   -1453,   929,   934, -1453,   169,    99,  -496,   513,  -477,   512,
     525, -1453, -1453, -1453,  1000, -1453, -1453, -1453,  -693,  -220,
   -1453, -1453, -1453,    36,   520, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,   -11, -1453, -1453, -1453, -1453,  -707,
   -1453, -1401,  -429, -1453, -1453, -1453, -1453, -1453,   890,   493,
   -1453,   156, -1453,   -48, -1453,  -613, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453,   975, -1453, -1453, -1453, -1453, -1453, -1453, -1453,   695,
   -1453,  -651,  -692, -1453,   554,   310,  -546, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453,  1052, -1453,  1053, -1453,
    1028,   976,   564,  -581,  -846, -1453, -1453, -1453,   333,   336,
     128,   545, -1453, -1453, -1453,   148, -1453, -1284, -1453,   -54,
     136,   541,   288, -1453, -1453, -1453, -1453,   -89, -1349, -1453,
     -93,  -610, -1453, -1453, -1453, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453, -1453, -1453, -1453,   800, -1453, -1453,
   -1453, -1087,  -511,  -357,   -70, -1452, -1287,   327, -1453,   118,
   -1453, -1453, -1453, -1072,   -30, -1453, -1453, -1453, -1453, -1453,
   -1453, -1453, -1453, -1453,     8,    17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -372
static const yytype_int16 yytable[] =
{
     400,   656,   387,   615,   718,   826,   661,   338,   905,   663,
     853,   514,   855,   666,   887,   858,  1295,  1143,  1462,   380,
    1543,   756,   904,  1382,   719,   720,   721,   722,   381,  1504,
     381,   574,   314,   320,   325,   915,   916,   947,   577,   574,
     595,   955,   578,   755,   600,   629,   577,   770,   771,   772,
     578,   773,   774,   394,   657,  1098,   460,   629,   652,   557,
     775,  1531,   776,   438,   777,   463,  1420,  1377,   752,   781,
     782,   783,   784,   785,   786,   787,   788,  1515,   789,  1613,
     505,   579,   580,   792,   793,   794,  1130,   795,   796,   579,
     580,  1550,  1369,   581,   797,   652,   798,   820,   886,   799,
     524,   581,   525,  1400,  1182,  1477,  1186,   802,   803,   804,
     805,   806,   807,   808,   809,  1538,   810,   583,   558,   456,
    1336,  1370,    18,    11,   572,   583,  1609,  1545,   886,   635,
     901,  1048,   596,  1545,  1251,  1278,  1217,   410,   902,   880,
     501,   458,    25,    26,    27,   411,  1224,  1248,  1510,   636,
      18,  1233,   886,  1235,   301,  1238,  1529,  1239,   302,  1244,
     667,  1247,  1401,  1250,  1065,  1370,   513,  1256,  1051,  1258,
     498,   499,   498,   499,  1249,  1693,   886,   936,   667,  1252,
     327,   880,   880,  1281,  1336,  1052,   459,   959,   961,  1253,
    1542,  1511,   886,   528,   905,  1359,   905,  1275,   502,   559,
    1546,  1282,  1320,   560,  1679,   573,  1546,  1320,   904,   575,
     904,  1699,   886,   597,    86,   561,   401,   598,  1206,  1073,
     412,   576,   563,   461,  1619,   960,  1478,  1236,   582,   599,
     520,   506,   464,   521,  1371,   856,   601,   402,    86,   658,
     564,  1516,   566,  1694,   328,   403,   584,   439,   587,   939,
    1237,    18,   870,  1279,   602,  1303,   604,  1682,   381,   901,
    1626,   381,  1421,   334,  1422,   932,   894,   902,  1302,  1547,
     515,    25,    26,    27,   668,   339,   687,   880,   637,  1700,
     689,  1245,  1131,  1132,   691,   692,   693,  1551,  1552,   694,
     503,   504,   669,  1625,  1321,  1322,   500,  1391,  1600,  1321,
    1322,  1393,  1218,   574,  1246,  1690,   574,   595,   886,   610,
     577,   600,  1684,   577,   578,    11,   557,   578,  1656,   953,
     404,  1261,   611,   612,   613,   614,  1219,   880,   881,   452,
     607,   467,   903,   498,   499,  1642,   743,   453,  1415,    18,
     936,   740,   314,    86,   740,  1532,   681,   833,   320,   681,
    1432,   325,  1120,   579,   580,  1101,   579,   580,    25,    26,
      27,  1402,  1403,  1404,  1124,   581,  1696,   332,   581,   886,
     881,   881,   881,   881,  1691,   558,  1605,  1139,   682,   630,
    1685,  1518,   892,   634,   526,   516,  1288,   645,   956,   583,
    1525,   517,   583,   654,   905,   527,   572,   893,   957,   596,
     828,   905,   522,   905,   623,   655,   744,   745,   904,   659,
     660,   402,   454,   381,   746,   904,  1225,   904,   644,   381,
    1591,   523,   670,   671,   672,   829,   467,   381,   467,   679,
      86,   381,   381,   964,   965,  1697,  1262,  1263,   380,  1079,
    1610,  1611,   836,   380,   841,  1137,   380,   381,  1226,  1142,
     380,  1080,   381,  1227,  1228,   381,   559,  1337,  1628,   381,
     560,   903,  1081,  1173,  1425,  1260,   881,   966,  1183,   381,
    1327,  1426,   561,   690,  1055,  1174,   850,   573,  1383,   563,
     597,   575,   381,  1392,   598,  1175,   860,   861,  1394,   732,
    1184,  1185,  1397,   576,   735,   736,   599,   564,   737,   566,
     582,   948,  1215,   601,   391,  1216,   467,   949,  1308,  1121,
    1055,  1593,  1594,  1595,   895,  1558,   881,   944,   584,   392,
     587,   602,   846,   604,   945,  1167,  1168,  1309,  1614,  1615,
    1616,  1617,   880,  1310,  1643,    18,  1644,  1563,  1664,  1438,
     644,  1328,   467,   901,  1331,  1332,  1230,  1169,  1170,   381,
    1171,   902,   406,  1570,   395,    25,    26,    27,   847,  1360,
     407,  1572,   928,   929,   930,  1574,  1429,  1240,  1231,  1232,
     946,   817,   818,  1426,   757,   780,   758,    14,   448,  1686,
      15,    16,  1476,   551,  1467,  1646,  1479,  1647,   467,   565,
    1241,   528,  1470,  1242,  1243,   585,  1622,   449,   450,   811,
    1533,   886,   529,   603,   851,   416,  1534,   835,   812,  1311,
    1312,  1313,   905,   417,  1314,  1315,   644,   467,   757,   780,
     758,  1566,   843,   467,   880,   381,   904,    86,   408,   880,
     467,  1567,  1326,   852,   880,   759,   921,   922,   880,   864,
     757,   467,   758,  1568,  1569,   409,   869,   467,   467,   865,
     866,   700,   701,   702,   703,   704,   705,   920,   707,   708,
     709,   710,   711,   712,   713,   714,  1058,   467,  1535,  1468,
    1469,  1668,   380,  1669,  1536,   923,  1530,  1177,   418,   759,
     467,   381,   760,  1056,   514,   880,   467,  1178,  1179,   380,
     761,   762,   763,   764,   765,   467,  1057,   467,   381,  1180,
    1181,   759,   381,   380,   467,   414,  1084,  1085,  1086,   467,
    1259,  1070,   381,  1071,   757,   467,   758,   895,  1683,   778,
    1290,   881,   790,   624,   415,  1301,   760,   779,   880,   467,
     779,   419,   880,   791,   761,   762,   763,   764,   765,  1553,
     388,   389,   740,   766,   381,   381,   381,   381,   760,  1554,
    1555,   429,   817,   818,   430,   831,   761,   762,   763,   764,
     765,  1556,  1557,   832,   507,   508,   800,   420,   644,   967,
     421,   968,  1463,   951,   779,   759,   422,   381,   969,   970,
    1539,  1540,   381,   423,   971,   424,   801,   766,   467,  1544,
    1575,   610,  1586,  1587,   779,   467,   862,   972,   973,   791,
     867,  1356,   926,   863,   611,   612,   613,   614,   868,   766,
     927,  -223,   871,   881,   619,   620,  1503,   952,   881,  1047,
     872,   953,   760,   881,   425,  1512,  1513,   881,  1603,  1498,
     761,   762,   763,   764,   765,   924,  1045,  1589,  1472,  -223,
     381,   426,   924,   925,  1475,   427,  1485,  -223,   381,  1604,
     931,  1489,  1577,  1578,  1486,   768,   769,  1489,   428,  1490,
     871,  1489,  1083,  1488,  1632,  1491,  1621,   433,  1602,  1653,
     435,  1661,   814,   815,   881,   900,  1636,  1266,  1099,  1662,
    1270,  1271,  1272,   766,   381,  1661,  1666,  1280,   498,   499,
     381,   934,   935,  1663,  1667,   434,  1651,   940,   941,   468,
     469,  1092,   470,   471,   472,   442,   473,   474,   942,   943,
     381,   895,  1049,  1050,  1592,   446,  1144,   881,   447,  1145,
     451,   881,  1146,  1147,  1148,  1149,  1363,  1364,  1365,  1366,
    1102,  1103,  1104,  1655,  1094,  1095,  1324,  1325,   880,   880,
     456,  1659,  1384,  1385,  1386,   462,   380,  1593,  1594,  1595,
     465,  1681,   313,   319,   322,   381,  1165,  1166,  1006,  1007,
    1129,   467,  1254,  1255,   644,  1629,  1649,   466,   644,   381,
    1671,   480,  1136,   381,   880,  1329,  1330,   381,  1333,  1334,
    1367,  1368,  1150,  1374,  1375,   482,   483,   484,   485,   486,
     487,  1210,  1412,  1493,  1494,   518,   488,  1500,  1501,   481,
    1692,  1695,  1698,  1701,   497,  1505,  1506,  1702,   510,   489,
     880,   716,   717,   509,  1598,  1599,  1151,   723,   724,   397,
     398,   511,   880,     1,     2,     3,     4,     5,     6,     7,
       8,     9,   725,   726,  1152,  1153,   733,   734,  1154,   918,
     918,   512,   880,   519,  1580,   532,  -223,   302,  1583,  -223,
    -223,  -223,  -223,   608,  -223,  -223,   402,  -223,  1687,  1688,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   406,
     410,  -223,  -223,  -223,   416,   452,   622,  -223,  -223,   490,
     491,   492,   493,   494,   495,   631,   633,  1641,   646,   640,
     653,   662,   664,   665,   673,   381,   685,  1480,   674,  -223,
    -223,   688,  -223,   695,  1654,   696,   715,   697,   727,  1487,
     728,  -223,   729,   730,  -223,  -223,   749,   750,   751,   752,
     821,   825,  1418,   827,  1355,   837,   823,   881,   881,  1576,
     838,   839,   840,  1434,  1435,   757,   780,   758,   844,   845,
     848,   496,  1443,   886,   888,   889,  1447,   890,  1449,  1450,
     891,  1452,   381,   933,  1455,  1456,   899,  1395,  1355,  1376,
     936,  1398,   938,   881,   962,  1046,  1060,  1053,   381,  1059,
    1062,  1063,  1069,  1064,  1065,   681,  1076,  1077,  1078,  1087,
    1093,  1088,  1106,  1689,  1108,  1410,   381,   381,  1110,  1111,
    1416,  1417,   381,  1113,  1118,  1424,   759,   381,  1115,   881,
    1119,   381,  1433,  1123,   757,   780,   758,  1122,  1439,  1127,
    1441,   881,  1128,  1444,  1125,  1126,  1135,  1448,  1138,  1140,
    1205,  1209,  1453,  1210,  1223,  1164,   757,  1214,   758,  1458,
    1221,   881,   757,  1460,   758,  1234,  1257,  1265,  1267,  1273,
    1283,  1284,  1285,   760,  1268,  1291,  1292,  1300,   381,  1298,
    1296,   761,   762,   763,   764,   765,  1319,  1340,  1357,  1304,
    1306,  1361,  -371,  -371,  1305,   759,  1373,    86,  1358,  1362,
    1388,  1379,  1380,  1406,  1409,   380,  1436,  1465,  1464,  1466,
    1411,   380,  1473,  1474,   381,  1481,  1482,   759,  1483,  1492,
     381,   381,  1581,   759,   791,   381,  1584,  1484,  1495,  1585,
     380,  -371,  1497,  1499,   766,  1526,  1520,  1522,  1514,   381,
    1527,  1528,   760,  1541,  -371,  -371,  -371,  -371,  1549,  1529,
     761,   762,   763,   764,   765,  1561,  1564,  1573,  1582,  1588,
    1524,  -371,  -371,  1601,   760,  1618,  1652,  1650,  1657,  1355,
     760,  1658,   761,   762,   763,   764,   765,  1676,   761,   762,
     763,   764,   765,  -371,  -371,  1665,  1370,  1703,   381,  -371,
    -371,  1704,  1176,  1408,   331,  1208,  1430,   381,  1612,  1413,
    -371,   553,   554,   766,   569,   555,   567,   588,   591,   593,
    1519,   589,   568,  -371,  -371,  -371,  -371,  1562,  1074,   475,
     753,   791,  -371,   590,   592,   766,   854,  1097,  -371,  1297,
     857,   766,   445,   859,  1277,  -371,  -371,  -371,  -371,   698,
    1502,  -371,  -371,  -371,  -371,   699,   748,  1117,   987,  1579,
    1471,   988,   989,   990,   991,   919,   992,  1075,   678,   993,
     680,  1072,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,  1307,   649,  1003,  1004,  1005,  1318,  1509,  1100,  1496,
    1597,  1508,  1378,  1112,  1624,  1631,  1339,   849,  1523,  1590,
     638,   639,     0,     0,     0,     0,     0,     0,  1677,     0,
    1678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   380,     0,   328,     0,   380,  1006,  1007,     0,     0,
     381,     0,     0,     0,   381,     0,     0,     0,     0,     0,
       0,   381,   381,     0,     0,     0,     0,     0,     0,     0,
       0,  1355,     0,     0,  1606,  1607,     0,     0,  1355,     0,
       0,     0,  1355,  1355,  1355,  1355,     0,  1187,     0,     0,
       0,     0,     0,  1633,     0,     0,     0,   381,     0,   381,
       0,     0,   381,   381,     0,  1637,   381,     0,     0,     0,
     381,   381,   381,   381,     0,     0,     0,  1188,     0,  1189,
    1190,  1191,  1192,  1193,  1194,  1195,     0,     0,     0,     0,
       0,     0,     0,   381,  1196,  1197,  1198,  1199,  1200,  1201,
       0,     0,     0,     0,     0,   381,     0,     0,     0,  1202,
    1203,  1204,     0,     0,  1660,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   381,   340,   341,   342,   343,
     344,   345,   346,   347,    36,    37,    38,    39,    40,    41,
      42,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   360,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
     361,   362,    85,     0,     0,     0,    87,     0,     0,     0,
       0,    90,   363,    92,   364,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   365,   366,   106,   367,
     108,     0,   109,   368,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   369,   125,   126,
     127,   128,   129,   370,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
       0,   371,   147,   372,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   373,   174,
     175,   374,   177,   178,   179,   180,   181,   375,   183,   376,
     185,   186,   187,   188,   189,   190,   191,   377,   378,   194,
     195,   196,   197,   198,   199,   200,   201,   202,     0,   988,
     989,   990,   991,     0,   992,     0,     0,   993,     0,     0,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,     0,
       0,  1003,  1004,  1005,     0,     0,     0,     0,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,   738,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    23,    24,
     739,   328,     0,     0,  1006,  1007,     0,     0,  1089,     0,
    1090,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,    83,    84,
      85,     0,     0,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
     738,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,   747,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,    83,    84,    85,     0,
       0,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,   143,   144,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,   399,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,    83,    84,    85,     0,     0,    86,
      87,    88,    89,     0,     0,    90,    91,    92,    93,    94,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    11,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,     0,     0,
      15,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,   731,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,    83,    84,    85,     0,     0,    86,    87,    88,
      89,     0,     0,    90,    91,    92,    93,    94,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,     0,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      11,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
     834,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
      83,    84,    85,     0,     0,    86,    87,    88,    89,     0,
       0,    90,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,   842,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,    83,    84,
      85,     0,     0,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
     738,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,    83,    84,    85,     0,
       0,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,   143,   144,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,    83,    84,    85,     0,     0,    86,
      87,    88,    89,     0,     0,    90,    91,    92,    93,    94,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    11,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,     0,     0,
      15,    16,     0,    17,     0,    18,     0,    19,    20,    21,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   360,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,    83,    84,    85,     0,     0,    86,    87,    88,
      89,     0,     0,    90,   363,    92,   364,    94,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   365,   366,
     106,   367,   108,     0,   109,   368,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     373,   174,   175,   374,   177,   178,   179,   180,   181,   375,
     183,   376,   185,   186,   187,   188,   189,   190,   191,   377,
     378,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      11,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,    14,     0,     0,    15,    16,
       0,    17,     0,    18,     0,    19,    20,    21,     0,    22,
      23,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
      83,    84,    85,     0,     0,    86,    87,    88,    89,     0,
       0,    90,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     0,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     533,   138,   139,   140,   141,   142,     0,   143,   534,   145,
       0,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    11,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,    14,     0,     0,    15,    16,     0,    17,
       0,    18,     0,    19,    20,    21,     0,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,    83,    84,
      85,     0,     0,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     0,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   556,   138,
     139,   140,   141,   142,     0,   143,   534,   145,     0,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    11,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,    14,     0,     0,    15,    16,     0,    17,     0,    18,
       0,    19,    20,    21,     0,    22,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,    83,    84,    85,     0,
       0,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     0,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   570,   138,   139,   140,
     141,   142,     0,   143,   534,   145,     0,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,    11,     0,    12,     0,     0,     0,
       0,     0,     0,     0,     0,    13,     0,     0,     0,    14,
       0,     0,    15,    16,     0,    17,     0,    18,     0,    19,
      20,    21,     0,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,    83,    84,    85,     0,     0,    86,
      87,    88,    89,     0,     0,    90,    91,    92,    93,    94,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     0,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   594,   138,   139,   140,   141,   142,
       0,   143,   534,   145,     0,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    11,     0,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,    14,     0,     0,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   360,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,    83,    84,    85,     0,     0,    86,    87,    88,
      89,     0,     0,    90,   363,    92,   364,    94,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   365,   366,
     106,   367,   108,     0,   109,   368,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   369,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   143,
     144,   145,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     373,   174,   175,   374,   177,   178,   179,   180,   181,   375,
     183,   376,   185,   186,   187,   188,   189,   190,   191,   377,
     378,   194,   195,   196,   197,   198,   199,   200,   201,   202,
      12,     0,     0,     0,     0,     0,     0,     0,     0,  1341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1342,
       0,     0,     0,     0,     0,  1343,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1344,   383,    30,    31,   384,    33,
      34,   385,    36,    37,    38,    39,    40,    41,    42,  1345,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   360,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,   361,   362,
      85,     0,     0,     0,    87,    88,    89,     0,     0,    90,
     363,    92,   364,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   365,   366,   106,   367,   108,     0,
     109,   368,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   369,   125,   126,   127,   128,
     129,   370,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,     0,   386,
     147,   372,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   373,   174,   175,   374,
     177,   178,   179,   180,   181,   375,   183,   376,   185,   186,
    1346,  1347,   189,   190,   191,   377,   378,   194,   195,   196,
     197,   198,   199,   200,   201,   202,    12,     0,     0,     0,
       0,     0,     0,     0,     0,  1341,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1344,   383,    30,    31,   384,    33,    34,   385,    36,    37,
      38,    39,    40,    41,    42,  1345,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,    55,    56,    57,
      58,    59,    60,    61,     0,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,   360,    75,     0,
       0,     0,    76,    77,    78,    79,    80,    81,    82,     0,
       0,     0,     0,     0,   361,   362,    85,     0,     0,     0,
      87,    88,    89,     0,     0,    90,   363,    92,   364,    94,
       0,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     365,   366,   106,   367,   108,     0,   109,   368,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   369,   125,   126,   127,   128,   129,   370,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
       0,   143,   144,   145,     0,   386,   147,   372,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   373,   174,   175,   374,   177,   178,   179,   180,
     181,   375,   183,   376,   185,   186,   187,   188,   189,   190,
     191,   377,   378,   194,   195,   196,   197,   198,   199,   200,
     201,   202,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   382,   383,    30,    31,
     384,    33,    34,   385,    36,    37,    38,    39,    40,    41,
      42,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   360,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
     361,   362,    85,     0,     0,     0,    87,    88,    89,     0,
       0,    90,   363,    92,   364,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   365,   366,   106,   367,
     108,     0,   109,   368,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   369,   125,   126,
     127,   128,   129,   370,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
       0,   386,   147,   372,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   373,   174,
     175,   374,   177,   178,   179,   180,   181,   375,   183,   376,
     185,   186,   187,   188,   189,   190,   191,   377,   378,   194,
     195,   196,   197,   198,   199,   200,   201,   202,  1286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   873,  1287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,   383,    30,    31,   384,    33,    34,   385,
     874,    37,    38,    39,    40,    41,    42,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,    55,
      56,    57,    58,    59,    60,    61,     0,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,   360,
      75,     0,     0,     0,    76,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,   361,   362,    85,     0,
       0,     0,    87,     0,     0,     0,     0,    90,   363,    92,
     364,    94,     0,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   365,   366,   106,   367,   108,     0,   109,   368,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   369,   125,   126,   127,   128,   129,   370,
     875,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     0,   143,   144,   145,     0,   386,   147,   876,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   373,   174,   175,   374,   177,   178,
     179,   180,   181,   375,   183,   376,   185,   186,   187,   188,
     189,   190,   191,   377,   378,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   626,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   340,   341,
     342,   343,   344,   345,   346,   347,    36,    37,    38,    39,
      40,    41,    42,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,    55,    56,    57,    58,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   360,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,   361,   362,    85,     0,     0,     0,    87,     0,
       0,     0,     0,    90,   363,    92,   364,    94,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   365,   366,
     106,   367,   108,     0,   109,   368,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   369,
     125,   126,   127,   128,   129,   370,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   143,
     144,   145,     0,   371,   147,   372,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     373,   174,   175,   374,   177,   178,   179,   180,   181,   375,
     183,   376,   185,   186,   187,   188,   189,   190,   191,   377,
     378,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     676,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,   345,
     346,   347,    36,    37,    38,    39,    40,    41,    42,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   360,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,   361,   362,
      85,     0,     0,     0,    87,     0,     0,     0,     0,    90,
     363,    92,   364,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   365,   366,   106,   367,   108,     0,
     109,   368,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   369,   125,   126,   127,   128,
     129,   370,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,     0,   371,
     147,   372,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   373,   174,   175,   374,
     177,   178,   179,   180,   181,   375,   183,   376,   185,   186,
     187,   188,   189,   190,   191,   377,   378,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   382,   383,    30,    31,   384,    33,    34,   385,   874,
      37,    38,    39,    40,    41,    42,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,    55,    56,
      57,    58,    59,    60,    61,     0,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   360,    75,
       0,     0,     0,    76,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,   361,   362,    85,     0,     0,
       0,    87,     0,     0,     0,     0,    90,   363,    92,   364,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   365,   366,   106,   367,   108,     0,   109,   368,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   369,   125,   126,   127,   128,   129,   370,   875,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     0,   143,   144,   145,     0,   386,   147,   876,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   373,   174,   175,   374,   177,   178,   179,
     180,   181,   375,   183,   376,   185,   186,   187,   188,   189,
     190,   191,   377,   378,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   873,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   382,   383,
      30,    31,   384,    33,    34,   385,    36,    37,    38,    39,
      40,    41,    42,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,    55,    56,    57,    58,    59,
      60,    61,     0,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,   360,    75,     0,     0,     0,
      76,    77,    78,    79,    80,    81,    82,     0,     0,     0,
       0,     0,   361,   362,    85,     0,     0,     0,    87,     0,
       0,     0,     0,    90,   363,    92,   364,    94,     0,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   365,   366,
     106,   367,   108,     0,   109,   368,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   369,
     125,   126,   127,   128,   129,   370,   875,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,     0,   143,
     144,   145,     0,   386,   147,   876,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     373,   174,   175,   374,   177,   178,   179,   180,   181,   375,
     183,   376,   185,   186,   187,   188,   189,   190,   191,   377,
     378,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     641,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   340,   341,   342,   343,   344,   345,
     346,   347,    36,    37,    38,    39,    40,    41,    42,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,    55,    56,    57,    58,    59,    60,    61,     0,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   360,    75,     0,     0,     0,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,   361,   362,
      85,     0,     0,   642,    87,     0,     0,     0,     0,    90,
     363,    92,   364,    94,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   365,   366,   106,   367,   108,     0,
     109,   368,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   369,   125,   126,   127,   128,
     129,   370,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,     0,   143,   144,   145,     0,   371,
     147,   372,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   373,   174,   175,   374,
     177,   178,   179,   180,   181,   375,   183,   376,   185,   186,
     187,   188,   189,   190,   191,   377,   378,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   340,   341,   342,   343,
     344,   345,   346,   347,    36,    37,    38,    39,    40,    41,
      42,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,    55,    56,    57,    58,    59,    60,    61,
       0,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,   360,    75,     0,     0,     0,    76,    77,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
     361,   362,    85,     0,     0,     0,    87,     0,     0,     0,
       0,    90,   363,    92,   364,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   365,   366,   106,   367,
     108,     0,   109,   368,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   369,   125,   126,
     127,   128,   129,   370,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,     0,   143,   144,   145,
       0,   371,   147,   372,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   373,   174,
     175,   374,   177,   178,   179,   180,   181,   375,   183,   376,
     185,   186,   187,   188,   189,   190,   191,   377,   378,   194,
     195,   196,   197,   198,   199,   200,   201,   202,    37,    38,
      39,    40,    41,    42,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,    55,    56,    57,    58,
      59,    60,    61,     0,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,   360,    75,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,   361,   362,    85,     0,     0,     0,    87,
       0,     0,     0,     0,    90,   363,    92,   364,    94,     0,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   365,
     366,   106,     0,   108,     0,   109,     0,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     369,   125,   126,   127,   128,   129,   370,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,     0,
     143,   144,   145,     0,     0,   147,     0,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   373,   174,   175,   374,   177,   178,   179,   180,   181,
     375,   183,   376,   185,   186,   187,   188,   189,   190,   191,
     377,   378,   194,   195,   196,   197,   198,   199,   200,   201,
     202,     0,  1396,     0,     0,   988,   989,   990,   991,     0,
     992,     0,     0,   993,     0,     0,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,
    1399,     0,     0,   988,   989,   990,   991,     0,   992,     0,
       0,   993,     0,     0,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1419,     0,
       0,   988,   989,   990,   991,     0,   992,   328,     0,   993,
    1006,  1007,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,     0,     0,  1003,  1004,  1005,  1431,     0,     0,   988,
     989,   990,   991,     0,   992,   328,     0,   993,  1006,  1007,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,     0,
       0,  1003,  1004,  1005,  1440,     0,     0,   988,   989,   990,
     991,     0,   992,   328,     0,   993,  1006,  1007,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,
    1004,  1005,  1442,     0,     0,   988,   989,   990,   991,     0,
     992,   328,     0,   993,  1006,  1007,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,
    1445,     0,     0,   988,   989,   990,   991,     0,   992,   328,
       0,   993,  1006,  1007,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1446,     0,
       0,   988,   989,   990,   991,     0,   992,   328,     0,   993,
    1006,  1007,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,     0,     0,  1003,  1004,  1005,  1451,     0,     0,   988,
     989,   990,   991,     0,   992,   328,     0,   993,  1006,  1007,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,     0,
       0,  1003,  1004,  1005,  1454,     0,     0,   988,   989,   990,
     991,     0,   992,   328,     0,   993,  1006,  1007,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,
    1004,  1005,  1457,     0,     0,   988,   989,   990,   991,     0,
     992,   328,     0,   993,  1006,  1007,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,
    1459,     0,     0,   988,   989,   990,   991,     0,   992,   328,
       0,   993,  1006,  1007,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1461,     0,
       0,   988,   989,   990,   991,     0,   992,   328,     0,   993,
    1006,  1007,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,     0,     0,  1003,  1004,  1005,  1559,     0,     0,   988,
     989,   990,   991,     0,   992,   328,     0,   993,  1006,  1007,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,     0,
       0,  1003,  1004,  1005,  1560,     0,     0,   988,   989,   990,
     991,     0,   992,   328,     0,   993,  1006,  1007,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,
    1004,  1005,  1565,     0,     0,   988,   989,   990,   991,     0,
     992,   328,     0,   993,  1006,  1007,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,
    1571,     0,     0,   988,   989,   990,   991,     0,   992,   328,
       0,   993,  1006,  1007,   994,   995,   996,   997,   998,   999,
    1000,  1001,  1002,     0,     0,  1003,  1004,  1005,  1634,     0,
       0,   988,   989,   990,   991,     0,   992,   328,     0,   993,
    1006,  1007,   994,   995,   996,   997,   998,   999,  1000,  1001,
    1002,     0,     0,  1003,  1004,  1005,  1635,     0,     0,   988,
     989,   990,   991,     0,   992,   328,     0,   993,  1006,  1007,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,     0,
       0,  1003,  1004,  1005,  1638,     0,     0,   988,   989,   990,
     991,     0,   992,   328,     0,   993,  1006,  1007,   994,   995,
     996,   997,   998,   999,  1000,  1001,  1002,     0,     0,  1003,
    1004,  1005,  1639,     0,     0,   988,   989,   990,   991,     0,
     992,   328,     0,   993,  1006,  1007,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,     0,     0,  1003,  1004,  1005,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   328,
       0,     0,  1006,  1007,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   328,     0,     0,
    1006,  1007
};

static const yytype_int16 yycheck[] =
{
      24,   430,    13,   338,   500,   618,   435,     9,   715,   438,
     661,   231,   663,   442,   686,   666,  1088,   961,  1259,    11,
    1369,   532,   715,  1169,   501,   502,   503,   504,    11,  1313,
      13,   318,     3,     4,     5,   727,   728,   763,   318,   326,
     326,   767,   318,   531,   326,   402,   326,   535,   536,   537,
     326,   539,   540,    17,    36,   901,    61,   414,   415,   312,
     548,  1348,   550,    12,   552,    61,   124,  1154,    53,   557,
     558,   559,   560,   561,   562,   563,   564,    13,   566,  1531,
      15,   318,   318,   571,   572,   573,   124,   575,   576,   326,
     326,   124,    43,   318,   582,   452,   584,   608,    51,   587,
     282,   326,   284,    65,   979,    12,   981,   595,   596,   597,
     598,   599,   600,   601,   602,  1356,   604,   318,   312,    43,
      43,   116,    35,    12,   318,   326,  1527,    43,    51,    44,
      43,   823,   326,    43,   250,    15,  1011,    43,    51,   685,
      14,    61,    55,    56,    57,    51,  1021,   282,   103,    64,
      35,  1026,    51,  1028,   188,  1030,    15,  1032,   192,  1034,
      36,  1036,   124,  1038,   152,   116,    51,  1042,    28,  1044,
      37,    38,    37,    38,   309,    50,    51,   127,    36,   295,
     251,   727,   728,    26,    43,    45,   106,   768,   769,   305,
     185,   146,    51,   178,   901,  1139,   903,   185,    72,   312,
     116,    44,   121,   312,  1656,   318,   116,   121,   901,   318,
     903,    50,    51,   326,   127,   312,    22,   326,   117,   870,
     126,   318,   312,   228,   177,   175,   133,   282,   318,   326,
     241,   166,   228,   244,   185,   664,   326,    43,   127,   221,
     312,   177,   312,   118,   315,    51,   318,   196,   318,   760,
     305,    35,   681,   133,   326,  1101,   326,  1658,   241,    43,
    1544,   244,   320,   192,   322,   753,   695,    51,    52,   185,
     234,    55,    56,    57,   150,     0,   458,   823,   193,   118,
     462,   282,   320,   321,   466,   467,   468,   320,   321,   471,
     164,   165,   150,   207,   213,   214,   163,  1172,   163,   213,
     214,  1176,   281,   590,   305,    48,   593,   593,    51,   233,
     590,   593,  1661,   593,   590,    12,   569,   593,  1605,   242,
     126,  1047,   246,   247,   248,   249,   305,   873,   685,    43,
     332,    36,   245,    37,    38,  1576,   154,    51,  1213,    35,
     127,   523,   313,   127,   526,  1350,    12,    52,   319,    12,
    1225,   322,   933,   590,   590,    51,   593,   593,    55,    56,
      57,   323,   324,   325,   945,   590,    48,   182,   593,    51,
     727,   728,   729,   730,   117,   569,  1522,   958,    44,   403,
    1664,    44,   227,   407,    43,    33,  1078,   411,   175,   590,
      22,    39,   593,   417,  1101,    54,   590,   242,   185,   593,
     107,  1108,    24,  1110,   396,   429,   224,   225,  1101,   433,
     434,    43,   126,   396,   232,  1108,   273,  1110,   410,   402,
    1492,    43,   446,   447,   448,   132,    36,   410,    36,   453,
     127,   414,   415,    70,    71,   117,  1049,  1050,   430,    14,
    1527,  1528,    52,   435,    52,   956,   438,   430,   305,   960,
     442,    26,   435,   310,   311,   438,   569,  1129,  1545,   442,
     569,   245,    37,   282,   250,  1046,   823,   104,   282,   452,
    1121,   257,   569,   465,   831,   294,   658,   590,  1170,   569,
     593,   590,   465,  1175,   593,   304,   668,   669,  1180,   513,
     304,   305,  1184,   590,   518,   519,   593,   569,   522,   569,
     590,   173,   305,   593,   131,   308,    36,   179,    97,   938,
     867,   215,   216,   217,   696,  1390,   873,   140,   590,   109,
     590,   593,    52,   593,   147,   281,   282,   116,  1533,  1534,
    1535,  1536,  1078,   122,    47,    35,    49,  1412,  1625,  1231,
     532,  1122,    36,    43,  1125,  1126,   282,   303,   304,   532,
     306,    51,    43,  1428,   107,    55,    56,    57,    52,  1140,
      51,  1436,   744,   745,   746,  1440,   250,   282,   304,   305,
     193,   194,   195,   257,    67,    68,    69,    27,    51,  1666,
      30,    31,  1274,   306,    34,    47,  1278,    49,    36,   312,
     305,   178,  1264,   308,   309,   318,  1540,    70,    71,   280,
      33,    51,   189,   326,    52,    43,    39,   631,   289,   198,
     199,   200,  1319,    51,   203,   204,   608,    36,    67,    68,
      69,   282,   646,    36,  1170,   608,  1319,   127,    43,  1175,
      36,   292,  1120,    52,  1180,   128,    25,    25,  1184,    52,
      67,    36,    69,   304,   305,    43,    52,    36,    36,   673,
     674,   482,   483,   484,   485,   486,   487,    52,   489,   490,
     491,   492,   493,   494,   495,   496,   848,    36,    33,   119,
     120,   166,   664,   168,    39,    25,  1348,   282,    22,   128,
      36,   664,   175,    52,   904,  1231,    36,   292,   293,   681,
     183,   184,   185,   186,   187,    36,    52,    36,   681,   304,
     305,   128,   685,   695,    36,    43,   888,   889,   890,    36,
    1045,    52,   695,    52,    67,    36,    69,   899,    25,   182,
      52,  1078,   182,    44,    43,    52,   175,   190,  1274,    36,
     190,    22,  1278,   226,   183,   184,   185,   186,   187,   282,
     124,   125,   924,   236,   727,   728,   729,   730,   175,   292,
     293,    51,   194,   195,    12,    36,   183,   184,   185,   186,
     187,   304,   305,    44,   167,   168,   182,    22,   760,   250,
      22,   252,  1260,   765,   190,   128,    22,   760,   259,   260,
    1361,  1362,   765,    22,   265,    22,   182,   236,    36,  1370,
    1462,   233,  1484,  1485,   190,    36,    44,   278,   279,   226,
      36,  1136,   222,    44,   246,   247,   248,   249,    44,   236,
     230,    15,    36,  1170,   107,   108,  1312,   238,  1175,   821,
      44,   242,   175,  1180,    22,  1321,  1322,  1184,  1520,  1306,
     183,   184,   185,   186,   187,    36,   819,  1488,  1267,    43,
     823,    22,    36,    44,  1273,    22,    36,    51,   831,  1521,
      44,    36,  1465,  1466,    44,   191,   192,    36,    22,    44,
      36,    36,   886,  1292,  1556,    44,  1538,    51,    44,    44,
      12,    36,   316,   317,  1231,   706,  1568,  1059,   902,    44,
    1062,  1063,  1064,   236,   867,    36,    36,  1069,    37,    38,
     873,   173,   174,    44,    44,    51,  1588,   173,   174,   133,
     134,   893,   136,   137,   138,    12,   140,   141,   122,   123,
     893,  1093,   124,   125,  1495,    43,    87,  1274,    43,    90,
      22,  1278,    93,    94,    95,    96,    93,    94,    95,    96,
     210,   211,   212,  1605,   142,   143,  1118,  1119,  1484,  1485,
      43,  1613,    55,    56,    57,    61,   938,   215,   216,   217,
     236,  1658,     3,     4,     5,   938,   290,   291,   318,   319,
     952,    36,   295,   296,   956,  1546,  1579,   241,   960,   952,
    1642,   158,   955,   956,  1520,   145,   146,   960,   180,   181,
      88,    89,   153,    88,    89,    16,    17,    18,    19,    20,
      21,   262,   263,   145,   146,    24,    27,   101,   102,   159,
    1672,  1673,  1674,  1675,   197,   218,   219,  1679,   171,    40,
    1556,   498,   499,   160,  1510,  1511,   187,   505,   506,    19,
      20,   162,  1568,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   507,   508,   205,   206,   516,   517,   209,   729,
     730,   170,  1588,    24,  1473,   175,   250,   192,  1477,   253,
     254,   255,   256,   175,   258,   259,    43,   261,  1668,  1669,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    43,
      43,   275,   276,   277,    43,    43,    32,   281,   282,   110,
     111,   112,   113,   114,   115,    51,    44,  1575,    51,    44,
      44,    36,    12,    36,    51,  1078,   154,  1279,    51,   303,
     304,   161,   306,    12,  1600,   139,    65,   140,   161,  1291,
     154,   315,   154,   154,   318,   319,    55,   127,   127,    53,
     182,   107,  1216,   108,  1135,    44,   154,  1484,  1485,  1464,
      44,    44,    44,  1227,  1228,    67,    68,    69,    44,    44,
      13,   172,  1236,    51,   227,    61,  1240,   154,  1242,  1243,
     227,  1245,  1135,    40,  1248,  1249,   139,  1181,  1169,  1151,
     127,  1185,    12,  1520,    86,    40,   116,   132,  1151,   133,
      13,    13,   156,   135,   152,    12,    43,    43,    43,    43,
      36,    43,    92,  1671,   243,  1209,  1169,  1170,   244,    85,
    1214,  1215,  1175,   201,   232,  1219,   128,  1180,    26,  1556,
     232,  1184,  1226,   144,    67,    68,    69,    40,  1232,    36,
    1234,  1568,   127,  1237,   175,   175,   237,  1241,   193,   116,
     250,   305,  1246,   262,   250,    86,    67,   307,    69,  1253,
     282,  1588,    67,  1257,    69,   305,   305,    44,    12,    12,
      44,    44,    44,   175,   196,   227,    12,    44,  1231,   144,
     227,   183,   184,   185,   186,   187,   135,    36,    40,    99,
      98,    36,   194,   195,   215,   128,   215,   127,   175,    40,
     259,   291,   290,   124,   250,  1267,   274,    46,  1261,    46,
     307,  1273,    12,   135,  1267,   157,    44,   128,    44,    43,
    1273,  1274,  1474,   128,   226,  1278,  1478,   154,   147,  1481,
    1292,   233,    52,    98,   236,    22,   154,   237,   202,  1292,
      43,    43,   175,   215,   246,   247,   248,   249,   127,    15,
     183,   184,   185,   186,   187,   124,   250,   250,   154,   154,
    1341,   194,   195,  1515,   175,    24,    13,   133,    44,  1350,
     175,    36,   183,   184,   185,   186,   187,    29,   183,   184,
     185,   186,   187,   194,   195,   208,   116,    44,  1341,   194,
     195,   208,   977,  1204,     6,   989,  1222,  1350,  1529,  1211,
     233,   307,   307,   236,   314,   308,   313,   319,   322,   325,
    1336,   319,   313,   246,   247,   248,   249,  1411,   871,   207,
     530,   226,   233,   320,   322,   236,   662,   899,   233,  1093,
     665,   236,   105,   667,  1066,   246,   247,   248,   249,   480,
    1311,   246,   247,   248,   249,   481,   526,   924,   250,  1467,
    1264,   253,   254,   255,   256,   730,   258,   873,   452,   261,
     455,   867,   264,   265,   266,   267,   268,   269,   270,   271,
     272,  1108,   414,   275,   276,   277,  1110,  1319,   903,  1301,
    1504,  1315,  1164,   912,  1543,  1548,  1129,   657,  1340,  1489,
     408,   408,    -1,    -1,    -1,    -1,    -1,    -1,  1650,    -1,
    1652,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1473,    -1,   315,    -1,  1477,   318,   319,    -1,    -1,
    1473,    -1,    -1,    -1,  1477,    -1,    -1,    -1,    -1,    -1,
      -1,  1484,  1485,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1522,    -1,    -1,  1525,  1526,    -1,    -1,  1529,    -1,
      -1,    -1,  1533,  1534,  1535,  1536,    -1,   250,    -1,    -1,
      -1,    -1,    -1,  1557,    -1,    -1,    -1,  1520,    -1,  1522,
      -1,    -1,  1525,  1526,    -1,  1569,  1529,    -1,    -1,    -1,
    1533,  1534,  1535,  1536,    -1,    -1,    -1,   280,    -1,   282,
     283,   284,   285,   286,   287,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1556,   297,   298,   299,   300,   301,   302,
      -1,    -1,    -1,    -1,    -1,  1568,    -1,    -1,    -1,   312,
     313,   314,    -1,    -1,  1618,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1588,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    -1,   253,
     254,   255,   256,    -1,   258,    -1,    -1,   261,    -1,    -1,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,    -1,    -1,    -1,    -1,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      44,   315,    -1,    -1,   318,   319,    -1,    -1,   320,    -1,
     322,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    33,    -1,    35,    -1,    37,    38,    39,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      12,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    27,    -1,    -1,    30,    31,
      -1,    33,    -1,    35,    -1,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,   127,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    12,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    30,    31,    -1,    33,
      -1,    35,    -1,    37,    38,    39,    -1,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,   127,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    27,    -1,    -1,    30,    31,    -1,    33,    -1,    35,
      -1,    37,    38,    39,    -1,    41,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,   127,   128,   129,   130,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    12,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    27,
      -1,    -1,    30,    31,    -1,    33,    -1,    35,    -1,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,   127,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    12,    -1,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    27,    -1,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,   127,   128,   129,
     130,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,   110,   111,   112,   113,   114,   115,   116,    -1,
      -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,
     128,   129,   130,    -1,    -1,   133,   134,   135,   136,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,    -1,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
      -1,   189,   190,   191,    -1,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,    -1,   128,   129,   130,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,   110,   111,   112,   113,   114,   115,
     116,    -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,   133,   134,   135,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    -1,   189,   190,   191,    -1,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,    -1,   128,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,   110,   111,   112,   113,   114,   115,   116,
      -1,    -1,    -1,    -1,    -1,   122,   123,   124,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,   133,   134,   135,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,    -1,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,    -1,   189,   190,   191,    -1,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
     110,   111,   112,   113,   114,   115,   116,    -1,    -1,    -1,
      -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,    -1,
      -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,    -1,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,    -1,   189,
     190,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,   110,   111,   112,   113,
     114,   115,   116,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,   127,   128,    -1,    -1,    -1,    -1,   133,
     134,   135,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,    -1,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,    -1,   189,   190,   191,    -1,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   110,   111,
     112,   113,   114,   115,   116,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,    -1,   128,    -1,    -1,    -1,
      -1,   133,   134,   135,   136,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    -1,   189,   190,   191,
      -1,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,   110,   111,   112,   113,   114,   115,   116,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,   128,
      -1,    -1,    -1,    -1,   133,   134,   135,   136,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,    -1,   152,    -1,   154,    -1,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,    -1,
     189,   190,   191,    -1,    -1,   194,    -1,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,    -1,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,    -1,    -1,   261,    -1,    -1,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
     250,    -1,    -1,   253,   254,   255,   256,    -1,   258,    -1,
      -1,   261,    -1,    -1,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,   275,   276,   277,   250,    -1,
      -1,   253,   254,   255,   256,    -1,   258,   315,    -1,   261,
     318,   319,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   315,    -1,   261,   318,   319,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   315,    -1,   261,   318,   319,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   315,    -1,   261,   318,   319,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
     250,    -1,    -1,   253,   254,   255,   256,    -1,   258,   315,
      -1,   261,   318,   319,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,   275,   276,   277,   250,    -1,
      -1,   253,   254,   255,   256,    -1,   258,   315,    -1,   261,
     318,   319,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   315,    -1,   261,   318,   319,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   315,    -1,   261,   318,   319,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   315,    -1,   261,   318,   319,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
     250,    -1,    -1,   253,   254,   255,   256,    -1,   258,   315,
      -1,   261,   318,   319,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,   275,   276,   277,   250,    -1,
      -1,   253,   254,   255,   256,    -1,   258,   315,    -1,   261,
     318,   319,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   315,    -1,   261,   318,   319,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   315,    -1,   261,   318,   319,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   315,    -1,   261,   318,   319,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
     250,    -1,    -1,   253,   254,   255,   256,    -1,   258,   315,
      -1,   261,   318,   319,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,   275,   276,   277,   250,    -1,
      -1,   253,   254,   255,   256,    -1,   258,   315,    -1,   261,
     318,   319,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,   275,   276,   277,   250,    -1,    -1,   253,
     254,   255,   256,    -1,   258,   315,    -1,   261,   318,   319,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,   275,   276,   277,   250,    -1,    -1,   253,   254,   255,
     256,    -1,   258,   315,    -1,   261,   318,   319,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,   275,
     276,   277,   250,    -1,    -1,   253,   254,   255,   256,    -1,
     258,   315,    -1,   261,   318,   319,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,   275,   276,   277,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,
      -1,    -1,   318,   319,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,    -1,
     318,   319
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     327,    12,    14,    23,    27,    30,    31,    33,    35,    37,
      38,    39,    41,    42,    43,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   110,   111,   112,   113,
     114,   115,   116,   122,   123,   124,   127,   128,   129,   130,
     133,   134,   135,   136,   137,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   189,   190,   191,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   473,   474,   475,   476,   477,   478,   480,
     485,   496,   499,   505,   506,   507,   508,   510,   511,   512,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   527,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   549,   550,   551,   552,   553,   556,
     557,   558,   569,   571,   573,   574,   575,   578,   580,   581,
     582,   592,   593,   594,   595,   596,   597,   598,   600,   602,
     604,   645,   646,   647,   648,   649,   650,   651,   654,   655,
     656,   657,   659,   666,   667,   671,   672,   673,   674,   680,
     681,   188,   192,   419,   420,   421,   422,   433,   438,   424,
     425,   426,   427,   433,   438,   428,   429,   430,   431,   433,
     438,   432,   433,   436,   437,   438,   439,   251,   315,   335,
     336,   358,   182,   328,   192,   331,   332,   330,   466,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     105,   122,   123,   134,   136,   148,   149,   151,   155,   169,
     175,   193,   195,   220,   223,   229,   231,   239,   240,   548,
     680,   681,    58,    59,    62,    65,   193,   540,   124,   125,
     559,   131,   109,   570,   529,   107,   561,   520,   520,    44,
     474,    22,    43,    51,   126,   579,    43,    51,    43,    43,
      43,    51,   126,   583,    43,    43,    43,    51,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    51,
      12,   652,   653,    51,    51,    12,   481,   482,    12,   196,
     486,   487,    12,   497,   498,   497,    43,    43,    51,    70,
      71,    22,    43,    51,   126,   576,    43,   464,    61,   106,
      61,   228,    61,    61,   228,   236,   241,    36,   133,   134,
     136,   137,   138,   140,   141,   478,   479,   488,   489,   490,
     158,   159,    16,    17,    18,    19,    20,    21,    27,    40,
     110,   111,   112,   113,   114,   115,   172,   197,    37,    38,
     163,    14,    72,   164,   165,    15,   166,   167,   168,   160,
     171,   162,   170,    51,   525,   529,    33,    39,    24,    24,
     540,   540,    24,    43,   475,   475,    43,    54,   178,   189,
     434,   435,   175,   182,   190,   423,   441,   443,   444,   445,
     446,   448,   449,   450,   453,   454,   455,   458,   459,   461,
     462,   473,   660,   420,   421,   422,   182,   423,   441,   443,
     445,   446,   447,   459,   462,   473,   660,   425,   426,   427,
     182,   440,   441,   443,   444,   445,   446,   448,   449,   450,
     453,   454,   459,   461,   462,   473,   644,   660,   429,   430,
     431,   436,   437,   439,   182,   440,   441,   443,   445,   446,
     447,   459,   462,   473,   660,   337,   359,   466,   175,   333,
     233,   246,   247,   248,   249,   464,   467,   468,   560,   107,
     108,   572,    32,   680,    44,    14,    44,   599,   606,   659,
     474,    51,   577,    44,   474,    44,    64,   193,   602,   604,
      44,    44,   127,   658,   680,   474,    51,   584,   601,   606,
     605,   607,   659,    44,   474,   474,   548,    36,   221,   474,
     474,   548,    36,   548,    12,    36,   548,    36,   150,   150,
     474,   474,   474,    51,    51,    14,    44,   603,   607,   474,
     577,    12,    44,   470,   471,   154,   587,   475,   161,   475,
     680,   475,   475,   475,   475,    12,   139,   140,   507,   508,
     510,   510,   510,   510,   510,   510,   509,   510,   510,   510,
     510,   510,   510,   510,   510,    65,   513,   513,   512,   514,
     514,   514,   514,   515,   515,   516,   516,   161,   154,   154,
     154,    52,   474,   530,   530,   474,   474,   474,    26,    44,
     475,   554,   555,   154,   224,   225,   232,    44,   554,    55,
     127,   127,    53,   435,   442,   442,   658,    67,    69,   128,
     175,   183,   184,   185,   186,   187,   236,   466,   191,   192,
     442,   442,   442,   442,   442,   442,   442,   442,   182,   190,
      68,   442,   442,   442,   442,   442,   442,   442,   442,   442,
     182,   226,   442,   442,   442,   442,   442,   442,   442,   442,
     182,   182,   442,   442,   442,   442,   442,   442,   442,   442,
     442,   280,   289,   338,   316,   317,   361,   194,   195,   463,
     658,   182,   334,   154,   469,   107,   561,   108,   107,   132,
     526,    36,    44,    52,    52,   474,    52,    44,    44,    44,
      44,    52,    52,   474,    44,    44,    52,    52,    13,   653,
     475,    52,    52,   587,   482,   587,   548,   487,   587,   498,
     475,   475,    44,    44,    52,   474,   474,    36,    44,    52,
     548,    36,    44,    43,    66,   176,   195,   588,   590,   591,
     592,   659,   675,   676,   677,   679,    51,   472,   227,    61,
     154,   227,   227,   242,   548,   475,   491,   492,   493,   139,
     510,    43,    51,   245,   524,   545,   610,   613,   614,   615,
     616,   617,   618,   619,   620,   588,   588,   585,   591,   585,
      52,    25,    25,    25,    36,    44,   222,   230,   475,   475,
     475,    44,   442,    40,   173,   174,   127,   609,    12,   658,
     173,   174,   122,   123,   140,   147,   193,   463,   173,   179,
     451,   680,   238,   242,   663,   463,   175,   185,   457,   609,
     175,   609,    86,   627,    70,    71,   104,   250,   252,   259,
     260,   265,   278,   279,   339,   340,   343,   344,   348,   349,
     350,   351,   352,   353,   356,   357,   360,   250,   253,   254,
     255,   256,   258,   261,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   275,   276,   277,   318,   319,   358,   362,
     363,   364,   365,   366,   367,   368,   371,   372,   376,   377,
     378,   379,   380,   385,   386,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   681,    40,   466,   588,   124,
     125,    28,    45,   132,   608,   659,    52,    52,   475,   133,
     116,   483,    13,    13,   135,   152,   500,   502,   503,   156,
      52,    52,   608,   587,   471,   590,    43,    43,    43,    14,
      26,    37,   589,   474,   475,   475,   475,    43,    43,   320,
     322,   668,   680,    36,   142,   143,   494,   491,   610,   474,
     617,    51,   210,   211,   212,   621,    92,   643,   243,   612,
     244,    85,   627,   201,   622,    26,   586,   555,   232,   232,
     609,   548,    40,   144,   609,   175,   175,    36,   127,   680,
     124,   320,   321,   664,   665,   237,   681,   658,   193,   609,
     116,   456,   658,   456,    87,    90,    93,    94,    95,    96,
     153,   187,   205,   206,   209,   628,   629,   630,   631,   632,
     635,   640,   641,   642,    86,   290,   291,   281,   282,   303,
     304,   306,   345,   282,   294,   304,   345,   282,   292,   293,
     304,   305,   361,   282,   304,   305,   361,   250,   280,   282,
     283,   284,   285,   286,   287,   288,   297,   298,   299,   300,
     301,   302,   312,   313,   314,   250,   117,   472,   366,   305,
     262,   381,   382,   383,   307,   305,   308,   361,   281,   305,
     370,   282,   373,   250,   361,   273,   305,   310,   311,   387,
     282,   304,   305,   361,   305,   361,   282,   305,   361,   361,
     282,   305,   308,   309,   361,   282,   305,   361,   282,   309,
     361,   250,   295,   305,   295,   296,   361,   305,   361,   464,
     609,   463,   561,   561,   568,    44,   475,    12,   196,   484,
     475,   475,   475,    12,   504,   185,   501,   502,    15,   133,
     475,    26,    44,    44,    44,    44,    14,    44,   588,   678,
      52,   227,    12,   669,   670,   669,   227,   492,   144,   495,
      44,    52,    52,   610,    99,   215,    98,   614,    97,   116,
     122,   198,   199,   200,   203,   204,   611,   624,   615,   135,
     121,   213,   214,   623,   475,   475,   442,   587,   609,   145,
     146,   609,   609,   180,   181,   452,    43,   472,   662,   663,
      36,    23,    33,    39,    58,    73,   234,   235,   409,   410,
     411,   412,   415,   416,   417,   540,   464,    40,   175,   456,
     609,    36,    40,    93,    94,    95,    96,    88,    89,    43,
     116,   185,   634,   215,    88,    89,   680,   657,   628,   291,
     290,   341,   409,   588,    55,    56,    57,   342,   259,   346,
     347,   361,   588,   361,   588,   474,   250,   588,   474,   250,
      65,   124,   323,   324,   325,   354,   124,   355,   355,   250,
     474,   307,   263,   382,   384,   361,   474,   474,   360,   250,
     124,   320,   322,   369,   474,   250,   257,   374,   375,   250,
     374,   250,   361,   474,   360,   360,   274,   388,   588,   474,
     250,   474,   250,   360,   474,   250,   250,   360,   474,   360,
     360,   250,   360,   474,   250,   360,   360,   250,   474,   250,
     474,   250,   469,   442,   681,    46,    46,    34,   119,   120,
     472,   557,   548,    12,   135,   548,   588,    12,   133,   588,
     475,   157,    44,    44,   154,    36,    44,   475,   548,    36,
      44,    44,    43,   145,   146,   147,   621,    52,   514,    98,
     101,   102,   511,   512,   623,   218,   219,   626,   626,   616,
     103,   146,   512,   512,   202,    13,   177,   460,    44,   470,
     154,   661,   237,   665,   540,    22,    22,    43,    43,    15,
     472,   662,   416,    33,    39,    33,    39,   418,   469,   609,
     609,   215,   185,   634,   609,    43,   116,   185,   637,   127,
     124,   320,   321,   282,   292,   293,   304,   305,   361,   250,
     250,   124,   474,   361,   250,   250,   282,   292,   304,   305,
     361,   250,   361,   250,   361,   472,   464,   561,   561,   559,
     548,   475,   154,   548,   475,   475,   588,   588,   154,   587,
     670,   669,   609,   215,   216,   217,   625,   625,   512,   512,
     163,   475,    44,   588,   472,   409,   540,   540,   413,   547,
     657,   657,   410,   661,   416,   416,   416,   416,    24,   177,
     465,   472,   456,   633,   633,   207,   623,   638,   657,   609,
     636,   636,   588,   474,   250,   250,   588,   474,   250,   250,
     329,   442,   469,    47,    49,   562,    47,    49,   563,   561,
     133,   588,    13,    44,   512,   472,   662,    44,    36,   472,
     474,    36,    44,    44,   657,   208,    36,    44,   166,   168,
     639,   472,   564,   566,   565,   567,    29,   475,   475,   661,
     414,   545,   547,    25,   634,   623,   657,   637,   637,   442,
      48,   117,   472,    50,   118,   472,    48,   117,   472,    50,
     118,   472,   472,    44,   208
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
#line 771 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (8)].signature)->argSpecs = (yyvsp[(5) - (8)].argSpecs);
    (yyvsp[(2) - (8)].signature)->returnType = (yyvsp[(6) - (8)].sequenceType);
    QP->_function = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(2) - (8)].signature), (yyvsp[(7) - (8)].astNode), true, MEMMGR));
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 782 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].signature)->argSpecs = (yyvsp[(2) - (3)].argSpecs);
    (yyvsp[(1) - (3)].signature)->returnType = (yyvsp[(3) - (3)].sequenceType);
    QP->_signature = (yyvsp[(1) - (3)].signature);
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 791 "../src/parser/XQParser.y"
    {
    printf("  { 0, 0, 0, 0, 0 }\n};\n\n");

    UTF8Str module(QP->_moduleName);
    printf("static const DelayedModule %s_module = { %s_file, %s_prefix, %s_uri, %s_functions };\n",
           module.str(), module.str(), module.str(), module.str(), module.str());
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 802 "../src/parser/XQParser.y"
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
#line 839 "../src/parser/XQParser.y"
    {
    printf("static const DelayedModule::FuncDef %s_functions[] = {\n", UTF8(QP->_moduleName));
  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 843 "../src/parser/XQParser.y"
    {
  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 849 "../src/parser/XQParser.y"
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
#line 885 "../src/parser/XQParser.y"
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
#line 916 "../src/parser/XQParser.y"
    {
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 919 "../src/parser/XQParser.y"
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
#line 943 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 947 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 965 "../src/parser/XQParser.y"
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
#line 984 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, signature, 0, MEMMGR));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 989 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 994 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1001 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1006 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 1011 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1023 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1034 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1044 "../src/parser/XQParser.y"
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
#line 1057 "../src/parser/XQParser.y"
    {    
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, signature, 0, true, MEMMGR));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1062 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1069 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->getSignature()->returnType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1074 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1082 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1086 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1094 "../src/parser/XQParser.y"
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
#line 1121 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1125 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 1132 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1138 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1143 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1148 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1157 "../src/parser/XQParser.y"
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
#line 1181 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1185 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1192 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1197 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1202 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1207 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1218 "../src/parser/XQParser.y"
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
#line 1236 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1240 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1247 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1252 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1260 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1285 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1288 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1291 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1294 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1297 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1300 "../src/parser/XQParser.y"
    {
  }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1303 "../src/parser/XQParser.y"
    {
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1306 "../src/parser/XQParser.y"
    {
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1309 "../src/parser/XQParser.y"
    {
  }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1312 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1315 "../src/parser/XQParser.y"
    {
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1318 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1321 "../src/parser/XQParser.y"
    {
  }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1324 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1327 "../src/parser/XQParser.y"
    {
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1330 "../src/parser/XQParser.y"
    {
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1333 "../src/parser/XQParser.y"
    {
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1346 "../src/parser/XQParser.y"
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
#line 1358 "../src/parser/XQParser.y"
    {
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1361 "../src/parser/XQParser.y"
    {
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1369 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1374 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1379 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1387 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1395 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1406 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1416 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1420 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1427 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1436 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1440 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1445 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1455 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1459 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1464 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1469 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1498 "../src/parser/XQParser.y"
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
#line 1516 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1520 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1525 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1534 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1543 "../src/parser/XQParser.y"
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
#line 1563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1572 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1580 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1585 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1589 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1596 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1600 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1608 "../src/parser/XQParser.y"
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
#line 1621 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1625 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1635 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1639 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1647 "../src/parser/XQParser.y"
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
#line 1665 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1669 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1676 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1681 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1686 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1700 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1708 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1716 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1723 "../src/parser/XQParser.y"
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
#line 1737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1741 "../src/parser/XQParser.y"
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
#line 1755 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1764 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1771 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1775 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1782 "../src/parser/XQParser.y"
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
#line 1817 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1821 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1826 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1832 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1841 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1845 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1852 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1856 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1863 "../src/parser/XQParser.y"
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
#line 1881 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1885 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1892 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1897 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1905 "../src/parser/XQParser.y"
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
#line 1923 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1927 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1935 "../src/parser/XQParser.y"
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
#line 1957 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1961 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1968 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1976 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1985 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1993 "../src/parser/XQParser.y"
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
#line 2030 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2034 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2041 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2048 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2057 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2066 "../src/parser/XQParser.y"
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
#line 2093 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2097 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2104 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2116 "../src/parser/XQParser.y"
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
#line 2142 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2146 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2153 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2163 "../src/parser/XQParser.y"
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
#line 2175 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2179 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2184 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2193 "../src/parser/XQParser.y"
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
#line 2206 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2210 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2215 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2224 "../src/parser/XQParser.y"
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
#line 2238 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2242 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2255 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2260 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2272 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2276 "../src/parser/XQParser.y"
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
#line 2284 "../src/parser/XQParser.y"
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
#line 2297 "../src/parser/XQParser.y"
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
#line 2305 "../src/parser/XQParser.y"
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
#line 2318 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2325 "../src/parser/XQParser.y"
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
#line 2364 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2368 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2372 "../src/parser/XQParser.y"
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
#line 2390 "../src/parser/XQParser.y"
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
#line 2408 "../src/parser/XQParser.y"
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
#line 2418 "../src/parser/XQParser.y"
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
#line 2432 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2440 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2446 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2452 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2458 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2469 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2473 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2503 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2507 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 2511 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2515 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2519 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2523 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2529 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 2535 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2579 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2583 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2587 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2591 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2595 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2599 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2605 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2611 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2615 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2642 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2646 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2650 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2654 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2658 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2662 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2668 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2674 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2700 "../src/parser/XQParser.y"
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
#line 2720 "../src/parser/XQParser.y"
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
#line 2744 "../src/parser/XQParser.y"
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
#line 2758 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2762 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2766 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2770 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2774 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2778 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2784 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2790 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2794 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2826 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2834 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2839 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2848 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2853 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2862 "../src/parser/XQParser.y"
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
#line 2922 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2930 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2935 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2944 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2949 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2958 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2968 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2972 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2980 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2984 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2992 "../src/parser/XQParser.y"
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
#line 3008 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 3017 "../src/parser/XQParser.y"
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
#line 3029 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 3037 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3041 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3046 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3055 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 3059 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 3067 "../src/parser/XQParser.y"
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
#line 3077 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3089 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3096 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3100 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3108 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3113 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3122 "../src/parser/XQParser.y"
    {
    (yyvsp[(2) - (7)].signature)->argSpecs = (yyvsp[(5) - (7)].argSpecs);
    (yyvsp[(2) - (7)].signature)->returnType = (yyvsp[(6) - (7)].sequenceType);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), (yyvsp[(2) - (7)].signature), (yyvsp[(7) - (7)].astNode), true, MEMMGR));
  }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3133 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3137 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3146 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3154 "../src/parser/XQParser.y"
    {
    (yyval.signature) = new (MEMMGR) FunctionSignature(MEMMGR);
  }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3158 "../src/parser/XQParser.y"
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
#line 3171 "../src/parser/XQParser.y"
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
#line 3184 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].signature)->updating != FunctionSignature::OP_DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].signature)->updating = FunctionSignature::OP_TRUE;
    (yyval.signature) = (yyvsp[(1) - (2)].signature);
  }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 3193 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 3193 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 3196 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 3196 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 3200 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 3204 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 3212 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 3217 "../src/parser/XQParser.y"
    {
    ArgumentSpecs* paramList = new (MEMMGR) ArgumentSpecs(XQillaAllocator<ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 3227 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 3235 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 3243 "../src/parser/XQParser.y"
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
#line 3256 "../src/parser/XQParser.y"
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
#line 3294 "../src/parser/XQParser.y"
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
#line 3339 "../src/parser/XQParser.y"
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
#line 3352 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3367 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3374 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3382 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3393 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 3397 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3411 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 3421 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 3428 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3436 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3440 "../src/parser/XQParser.y"
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
#line 3453 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3461 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3469 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3474 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3482 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3492 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3499 "../src/parser/XQParser.y"
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
#line 3514 "../src/parser/XQParser.y"
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
#line 3530 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3534 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3538 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3545 "../src/parser/XQParser.y"
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
#line 3554 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3558 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 3575 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3586 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3594 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3605 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3612 "../src/parser/XQParser.y"
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
#line 3625 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3629 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3637 "../src/parser/XQParser.y"
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
#line 3655 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses) = new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back(WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), 0)));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3660 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(SequenceTypeUnion, (yylsp[(2) - (3)]));
    (yyvsp[(1) - (3)].caseClauses)->push_back(WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(1) - (3)].caseClauses)->back()->getQName(), (yyvsp[(3) - (3)].sequenceType), 0)));
    (yyval.caseClauses) = (yyvsp[(1) - (3)].caseClauses);
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3669 "../src/parser/XQParser.y"
    {
    (yyval.str) = 0;
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3673 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3681 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3689 "../src/parser/XQParser.y"
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
#line 3703 "../src/parser/XQParser.y"
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
#line 3722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3729 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 3730 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 3738 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3742 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 3750 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3754 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3758 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3762 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3766 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3774 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3787 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3791 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3800 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *args = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    args->push_back((yyvsp[(1) - (3)].astNode));
    args->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionCall(0, BuiltInModules::core.uri, MEMMGR->getPooledString("to"), args, MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3812 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 3816 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 3825 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3829 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 3833 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3837 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 3846 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 3850 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 3859 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3863 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3872 "../src/parser/XQParser.y"
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
#line 3894 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 3904 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 3913 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 3922 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3928 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3949 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 3953 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 3957 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 3965 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 3972 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3985 "../src/parser/XQParser.y"
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
#line 4006 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 4015 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 4021 "../src/parser/XQParser.y"
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
#line 4046 "../src/parser/XQParser.y"
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
#line 4060 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 4066 "../src/parser/XQParser.y"
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
#line 4088 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 530:

/* Line 1455 of yacc.c  */
#line 4098 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4105 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4114 "../src/parser/XQParser.y"
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
#line 4137 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4141 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4145 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 538:

/* Line 1455 of yacc.c  */
#line 4149 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4153 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 4157 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4161 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 4181 "../src/parser/XQParser.y"
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
#line 4198 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 4215 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 548:

/* Line 1455 of yacc.c  */
#line 4219 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 549:

/* Line 1455 of yacc.c  */
#line 4223 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 550:

/* Line 1455 of yacc.c  */
#line 4227 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 4231 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 4239 "../src/parser/XQParser.y"
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
#line 4251 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 4261 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 4273 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 4280 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 559:

/* Line 1455 of yacc.c  */
#line 4287 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4300 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 4329 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4340 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4344 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 4352 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 582:

/* Line 1455 of yacc.c  */
#line 4360 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4380 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4384 "../src/parser/XQParser.y"
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
#line 4407 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 587:

/* Line 1455 of yacc.c  */
#line 4412 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4423 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4432 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4449 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4455 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4468 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4472 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4481 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4497 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4501 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4508 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4512 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4522 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4526 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4531 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 611:

/* Line 1455 of yacc.c  */
#line 4541 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4545 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 613:

/* Line 1455 of yacc.c  */
#line 4549 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 614:

/* Line 1455 of yacc.c  */
#line 4562 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 615:

/* Line 1455 of yacc.c  */
#line 4566 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 616:

/* Line 1455 of yacc.c  */
#line 4571 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 617:

/* Line 1455 of yacc.c  */
#line 4581 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 618:

/* Line 1455 of yacc.c  */
#line 4585 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 619:

/* Line 1455 of yacc.c  */
#line 4589 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 620:

/* Line 1455 of yacc.c  */
#line 4606 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4610 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4615 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4620 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4627 "../src/parser/XQParser.y"
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
#line 4640 "../src/parser/XQParser.y"
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
#line 4653 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4662 "../src/parser/XQParser.y"
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
#line 4682 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4713 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4721 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4733 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4737 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4746 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4753 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4757 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4765 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4773 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4781 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4788 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 650:

/* Line 1455 of yacc.c  */
#line 4798 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 651:

/* Line 1455 of yacc.c  */
#line 4805 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 652:

/* Line 1455 of yacc.c  */
#line 4809 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 653:

/* Line 1455 of yacc.c  */
#line 4817 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 654:

/* Line 1455 of yacc.c  */
#line 4827 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 655:

/* Line 1455 of yacc.c  */
#line 4831 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 656:

/* Line 1455 of yacc.c  */
#line 4839 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 657:

/* Line 1455 of yacc.c  */
#line 4843 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 658:

/* Line 1455 of yacc.c  */
#line 4853 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 659:

/* Line 1455 of yacc.c  */
#line 4860 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 660:

/* Line 1455 of yacc.c  */
#line 4869 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 661:

/* Line 1455 of yacc.c  */
#line 4871 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 662:

/* Line 1455 of yacc.c  */
#line 4873 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4875 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4881 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4885 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4920 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4928 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 4932 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4937 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 4946 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4954 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4962 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 4966 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 4970 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 688:

/* Line 1455 of yacc.c  */
#line 4978 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 689:

/* Line 1455 of yacc.c  */
#line 4982 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4986 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 692:

/* Line 1455 of yacc.c  */
#line 4995 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 5003 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 5016 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 5020 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 697:

/* Line 1455 of yacc.c  */
#line 5024 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 698:

/* Line 1455 of yacc.c  */
#line 5028 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 700:

/* Line 1455 of yacc.c  */
#line 5038 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 701:

/* Line 1455 of yacc.c  */
#line 5046 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 5066 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5078 "../src/parser/XQParser.y"
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

  case 708:

/* Line 1455 of yacc.c  */
#line 5093 "../src/parser/XQParser.y"
    {
}
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5096 "../src/parser/XQParser.y"
    {
}
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5102 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5106 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5116 "../src/parser/XQParser.y"
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

  case 714:

/* Line 1455 of yacc.c  */
#line 5133 "../src/parser/XQParser.y"
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

  case 716:

/* Line 1455 of yacc.c  */
#line 5149 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5159 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5169 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5178 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5183 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5193 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5197 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5205 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5210 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5219 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5223 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5227 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5231 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5235 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5239 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5249 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5260 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 738:

/* Line 1455 of yacc.c  */
#line 5266 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 739:

/* Line 1455 of yacc.c  */
#line 5272 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 740:

/* Line 1455 of yacc.c  */
#line 5278 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 741:

/* Line 1455 of yacc.c  */
#line 5293 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 742:

/* Line 1455 of yacc.c  */
#line 5297 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 743:

/* Line 1455 of yacc.c  */
#line 5301 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 744:

/* Line 1455 of yacc.c  */
#line 5305 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 745:

/* Line 1455 of yacc.c  */
#line 5309 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 746:

/* Line 1455 of yacc.c  */
#line 5313 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 747:

/* Line 1455 of yacc.c  */
#line 5317 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5321 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5329 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5333 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5337 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5345 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5349 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5385 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5389 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5393 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5397 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5406 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5410 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5418 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5422 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5432 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5436 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5440 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5444 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5448 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5455 "../src/parser/XQParser.y"
    {
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5458 "../src/parser/XQParser.y"
    {
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5465 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5469 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5473 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5477 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5487 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5491 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5495 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5502 "../src/parser/XQParser.y"
    {
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5505 "../src/parser/XQParser.y"
    {
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5513 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5517 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5524 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 791:

/* Line 1455 of yacc.c  */
#line 5528 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 5536 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5540 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 5548 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 5556 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5560 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5568 "../src/parser/XQParser.y"
    {
}
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5583 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5588 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5593 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5605 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5609 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5613 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5617 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5621 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5632 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5643 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5647 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5657 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5665 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5672 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5677 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5685 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5694 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5718 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5731 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5742 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5751 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5763 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, signature, (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5768 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(5) - (7)].argSpecs), (yyvsp[(6) - (7)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, signature, (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5773 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5779 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(8) - (10)].argSpecs), (yyvsp[(9) - (10)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), signature, (yyvsp[(10) - (10)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5785 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature(MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), signature, (yyvsp[(6) - (6)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5791 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(6) - (8)].argSpecs), (yyvsp[(7) - (8)].sequenceType), MEMMGR);
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), signature, (yyvsp[(8) - (8)].astNode), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5800 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5804 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5812 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5816 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5823 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5828 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5836 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 5841 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 5850 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5854 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5858 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5866 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5870 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 5878 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 5882 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 846:

/* Line 1455 of yacc.c  */
#line 5886 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5890 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5898 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5902 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5906 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5914 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 5919 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 5929 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 5946 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 5954 "../src/parser/XQParser.y"
    {
    FunctionSignature *signature = new (MEMMGR) FunctionSignature((yyvsp[(2) - (4)].argSpecs), (yyvsp[(3) - (4)].sequenceType), MEMMGR);
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, signature, (yyvsp[(4) - (4)].astNode), false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 5965 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 5970 "../src/parser/XQParser.y"
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

  case 862:

/* Line 1455 of yacc.c  */
#line 5998 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 6006 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 6010 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 6017 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 6022 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 6031 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12340 "../src/parser/XQParser.cpp"
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
#line 6066 "../src/parser/XQParser.y"


}  // namespace XQParser


