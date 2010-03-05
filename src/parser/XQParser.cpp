
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
#include <xqilla/ast/XQInstanceOf.hpp>
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
#include <xqilla/operators/Range.hpp>

#include <xqilla/functions/FunctionConstructor.hpp>
#include <xqilla/functions/FunctionRoot.hpp>
#include <xqilla/functions/FunctionQName.hpp>
#include <xqilla/functions/FunctionId.hpp>
#include <xqilla/functions/FunctionExists.hpp>
#include <xqilla/functions/XQillaFunction.hpp>

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
#define MEMMGR   (CONTEXT->getMemoryManager())

#define REJECT_NOT_XQUERY(where,pos)      if(!QP->_lexer->isXQuery()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }
#define REJECT_NOT_VERSION11(where,pos)   if(!QP->_lexer->isVersion11()) { yyerror(LANGUAGE, #where, (pos).first_line, (pos).first_column); }

#define WRAP(pos,object)        (wrapForDebug((QP), (object), (pos).first_line, (pos).first_column))

#define LOCATION(pos,name) LocationInfo name(QP->_query->getFile(), (pos).first_line, (pos).first_column)

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
    pObjToWrap->setLocationInfo(QP->_query->getFile(), line, column);
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
#line 390 "../src/parser/XQParser.cpp"

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
     _LESS_THAN_OP_OR_TAG_ = 279,
     _START_TAG_CLOSE_ = 280,
     _END_TAG_CLOSE_ = 281,
     _PI_START_ = 282,
     _XML_COMMENT_START_ = 283,
     _XML_COMMENT_END_ = 284,
     _SLASH_SLASH_ = 285,
     _END_TAG_OPEN_ = 286,
     _PRAGMA_OPEN_ = 287,
     _COMMA_ = 288,
     _PLUS_ = 289,
     _MINUS_ = 290,
     _SLASH_ = 291,
     _EQUALS_ = 292,
     _DOT_ = 293,
     _DOT_DOT_ = 294,
     _LPAR_ = 295,
     _RPAR_ = 296,
     _EMPTY_TAG_CLOSE_ = 297,
     _VALUE_INDICATOR_ = 298,
     _OPEN_QUOT_ = 299,
     _CLOSE_QUOT_ = 300,
     _OPEN_APOS_ = 301,
     _CLOSE_APOS_ = 302,
     _LBRACE_ = 303,
     _RBRACE_ = 304,
     _SEMICOLON_ = 305,
     _HASH_ = 306,
     _INTEGER_LITERAL_ = 307,
     _DECIMAL_LITERAL_ = 308,
     _DOUBLE_LITERAL_ = 309,
     _ATTRIBUTE_ = 310,
     _COMMENT_ = 311,
     _DOCUMENT_NODE_ = 312,
     _NODE_ = 313,
     _PROCESSING_INSTRUCTION_ = 314,
     _SCHEMA_ATTRIBUTE_ = 315,
     _SCHEMA_ELEMENT_ = 316,
     _TEXT_ = 317,
     _EMPTY_SEQUENCE_ = 318,
     _BOUNDARY_SPACE_ = 319,
     _FT_OPTION_ = 320,
     _BASE_URI_ = 321,
     _LAX_ = 322,
     _STRICT_ = 323,
     _IDIV_ = 324,
     _CHILD_ = 325,
     _DESCENDANT_ = 326,
     _SELF_ = 327,
     _DESCENDANT_OR_SELF_ = 328,
     _FOLLOWING_SIBLING_ = 329,
     _FOLLOWING_ = 330,
     _PARENT_ = 331,
     _ANCESTOR_ = 332,
     _PRECEDING_SIBLING_ = 333,
     _PRECEDING_ = 334,
     _ANCESTOR_OR_SELF_ = 335,
     _DOCUMENT_ = 336,
     _NOT_ = 337,
     _USING_ = 338,
     _NO_ = 339,
     _SENSITIVE_ = 340,
     _INSENSITIVE_ = 341,
     _DIACRITICS_ = 342,
     _WITHOUT_ = 343,
     _WITHOUT_C_ = 344,
     _STEMMING_ = 345,
     _THESAURUS_ = 346,
     _STOP_ = 347,
     _WILDCARDS_ = 348,
     _ENTIRE_ = 349,
     _CONTENT_ = 350,
     _WORD_ = 351,
     _TYPE_ = 352,
     _START_ = 353,
     _END_ = 354,
     _MOST_ = 355,
     _SKIP_ = 356,
     _COPY_ = 357,
     _VALUE_ = 358,
     _WHITESPACE_ = 359,
     _PI_CONTENT_ = 360,
     _XML_COMMENT_CONTENT_ = 361,
     _EQ_ = 362,
     _NE_ = 363,
     _LT_ = 364,
     _LE_ = 365,
     _GT_ = 366,
     _GE_ = 367,
     _AT_ = 368,
     _QUOT_ATTR_CONTENT_ = 369,
     _APOS_ATTR_CONTENT_ = 370,
     _WHITESPACE_ELEMENT_CONTENT_ = 371,
     _ELEMENT_CONTENT_ = 372,
     _AT_LM_ = 373,
     _ORDERED_ = 374,
     _UNORDERED_ = 375,
     _QNAME_ = 376,
     _XMLNS_QNAME_ = 377,
     _CONSTR_QNAME_ = 378,
     _STRING_LITERAL_ = 379,
     _VARIABLE_ = 380,
     _NCNAME_COLON_STAR_ = 381,
     _STAR_COLON_NCNAME_ = 382,
     _PI_TARGET_ = 383,
     _PRAGMA_CONTENT_ = 384,
     _RETURN_ = 385,
     _FOR_ = 386,
     _IN_ = 387,
     _LET_ = 388,
     _WHERE_ = 389,
     _COUNT_ = 390,
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
     _FUNCTION_EXT_ = 447,
     _SCORE_ = 448,
     _CONTAINS_ = 449,
     _WEIGHT_ = 450,
     _WINDOW_ = 451,
     _DISTANCE_ = 452,
     _OCCURS_ = 453,
     _TIMES_ = 454,
     _SAME_ = 455,
     _DIFFERENT_ = 456,
     _LOWERCASE_ = 457,
     _UPPERCASE_ = 458,
     _RELATIONSHIP_ = 459,
     _LEVELS_ = 460,
     _LANGUAGE_ = 461,
     _ANY_ = 462,
     _ALL_ = 463,
     _PHRASE_ = 464,
     _EXACTLY_ = 465,
     _FROM_ = 466,
     _WORDS_ = 467,
     _SENTENCES_ = 468,
     _PARAGRAPHS_ = 469,
     _SENTENCE_ = 470,
     _PARAGRAPH_ = 471,
     _REPLACE_ = 472,
     _MODIFY_ = 473,
     _FIRST_ = 474,
     _INSERT_ = 475,
     _BEFORE_ = 476,
     _AFTER_ = 477,
     _REVALIDATION_ = 478,
     _WITH_ = 479,
     _NODES_ = 480,
     _RENAME_ = 481,
     _LAST_ = 482,
     _DELETE_ = 483,
     _INTO_ = 484,
     _UPDATING_ = 485,
     _ID_ = 486,
     _KEY_ = 487,
     _TEMPLATE_ = 488,
     _MATCHES_ = 489,
     _NAME_ = 490,
     _CALL_ = 491,
     _APPLY_ = 492,
     _TEMPLATES_ = 493,
     _MODE_ = 494,
     _FTOR_ = 495,
     _FTAND_ = 496,
     _FTNOT_ = 497,
     _PRIVATE_ = 498,
     _PUBLIC_ = 499,
     _DETERMINISTIC_ = 500,
     _NONDETERMINISTIC_ = 501,
     _XSLT_END_ELEMENT_ = 502,
     _XSLT_STYLESHEET_ = 503,
     _XSLT_TEMPLATE_ = 504,
     _XSLT_VALUE_OF_ = 505,
     _XSLT_TEXT_ = 506,
     _XSLT_APPLY_TEMPLATES_ = 507,
     _XSLT_CALL_TEMPLATE_ = 508,
     _XSLT_WITH_PARAM_ = 509,
     _XSLT_SEQUENCE_ = 510,
     _XSLT_PARAM_ = 511,
     _XSLT_FUNCTION_ = 512,
     _XSLT_CHOOSE_ = 513,
     _XSLT_WHEN_ = 514,
     _XSLT_OTHERWISE_ = 515,
     _XSLT_IF_ = 516,
     _XSLT_VARIABLE_ = 517,
     _XSLT_COMMENT_ = 518,
     _XSLT_PI_ = 519,
     _XSLT_DOCUMENT_ = 520,
     _XSLT_ATTRIBUTE_ = 521,
     _XSLT_NAMESPACE_ = 522,
     _XSLT_ELEMENT_ = 523,
     _XSLT_ANALYZE_STRING_ = 524,
     _XSLT_MATCHING_SUBSTRING_ = 525,
     _XSLT_NON_MATCHING_SUBSTRING_ = 526,
     _XSLT_COPY_OF_ = 527,
     _XSLT_COPY_ = 528,
     _XSLT_FOR_EACH_ = 529,
     _XSLT_OUTPUT_ = 530,
     _XSLT_IMPORT_SCHEMA_ = 531,
     _XSLT_VERSION_ = 532,
     _XSLT_MODE_ = 533,
     _XSLT_NAME_ = 534,
     _XSLT_DOCTYPE_PUBLIC_ = 535,
     _XSLT_DOCTYPE_SYSTEM_ = 536,
     _XSLT_ENCODING_ = 537,
     _XSLT_MEDIA_TYPE_ = 538,
     _XSLT_NORMALIZATION_FORM_ = 539,
     _XSLT_STANDALONE_ = 540,
     _XSLT_EXCLUDE_RESULT_PREFIXES_ = 541,
     _XSLT_NAMESPACE_STR_ = 542,
     _XSLT_SCHEMA_LOCATION_ = 543,
     _XSLT_TUNNEL_ = 544,
     _XSLT_REQUIRED_ = 545,
     _XSLT_OVERRIDE_ = 546,
     _XSLT_COPY_NAMESPACES_ = 547,
     _XSLT_INHERIT_NAMESPACES_ = 548,
     _XSLT_BYTE_ORDER_MARK_ = 549,
     _XSLT_ESCAPE_URI_ATTRIBUTES_ = 550,
     _XSLT_INCLUDE_CONTENT_TYPE_ = 551,
     _XSLT_INDENT_ = 552,
     _XSLT_OMIT_XML_DECLARATION_ = 553,
     _XSLT_UNDECLARE_PREFIXES_ = 554,
     _XSLT_MATCH_ = 555,
     _XSLT_AS_ = 556,
     _XSLT_SELECT_ = 557,
     _XSLT_PRIORITY_ = 558,
     _XSLT_TEST_ = 559,
     _XSLT_SEPARATOR_ = 560,
     _XSLT_NAMESPACE_A_ = 561,
     _XSLT_REGEX_ = 562,
     _XSLT_FLAGS_ = 563,
     _XSLT_METHOD_ = 564,
     _XSLT_CDATA_SECTION_ELEMENTS_ = 565,
     _XSLT_USE_CHARACTER_MAPS_ = 566,
     _XSLT_ELEMENT_NAME_ = 567,
     _XSLT_XMLNS_ATTR_ = 568,
     _XSLT_ATTR_NAME_ = 569,
     _XSLT_TEXT_NODE_ = 570,
     _XSLT_WS_TEXT_NODE_ = 571,
     _HASH_DEFAULT_ = 572,
     _HASH_ALL_ = 573,
     _HASH_CURRENT_ = 574,
     _XML_ = 575,
     _HTML_ = 576,
     _XHTML_ = 577
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
#define _LESS_THAN_OP_OR_TAG_ 279
#define _START_TAG_CLOSE_ 280
#define _END_TAG_CLOSE_ 281
#define _PI_START_ 282
#define _XML_COMMENT_START_ 283
#define _XML_COMMENT_END_ 284
#define _SLASH_SLASH_ 285
#define _END_TAG_OPEN_ 286
#define _PRAGMA_OPEN_ 287
#define _COMMA_ 288
#define _PLUS_ 289
#define _MINUS_ 290
#define _SLASH_ 291
#define _EQUALS_ 292
#define _DOT_ 293
#define _DOT_DOT_ 294
#define _LPAR_ 295
#define _RPAR_ 296
#define _EMPTY_TAG_CLOSE_ 297
#define _VALUE_INDICATOR_ 298
#define _OPEN_QUOT_ 299
#define _CLOSE_QUOT_ 300
#define _OPEN_APOS_ 301
#define _CLOSE_APOS_ 302
#define _LBRACE_ 303
#define _RBRACE_ 304
#define _SEMICOLON_ 305
#define _HASH_ 306
#define _INTEGER_LITERAL_ 307
#define _DECIMAL_LITERAL_ 308
#define _DOUBLE_LITERAL_ 309
#define _ATTRIBUTE_ 310
#define _COMMENT_ 311
#define _DOCUMENT_NODE_ 312
#define _NODE_ 313
#define _PROCESSING_INSTRUCTION_ 314
#define _SCHEMA_ATTRIBUTE_ 315
#define _SCHEMA_ELEMENT_ 316
#define _TEXT_ 317
#define _EMPTY_SEQUENCE_ 318
#define _BOUNDARY_SPACE_ 319
#define _FT_OPTION_ 320
#define _BASE_URI_ 321
#define _LAX_ 322
#define _STRICT_ 323
#define _IDIV_ 324
#define _CHILD_ 325
#define _DESCENDANT_ 326
#define _SELF_ 327
#define _DESCENDANT_OR_SELF_ 328
#define _FOLLOWING_SIBLING_ 329
#define _FOLLOWING_ 330
#define _PARENT_ 331
#define _ANCESTOR_ 332
#define _PRECEDING_SIBLING_ 333
#define _PRECEDING_ 334
#define _ANCESTOR_OR_SELF_ 335
#define _DOCUMENT_ 336
#define _NOT_ 337
#define _USING_ 338
#define _NO_ 339
#define _SENSITIVE_ 340
#define _INSENSITIVE_ 341
#define _DIACRITICS_ 342
#define _WITHOUT_ 343
#define _WITHOUT_C_ 344
#define _STEMMING_ 345
#define _THESAURUS_ 346
#define _STOP_ 347
#define _WILDCARDS_ 348
#define _ENTIRE_ 349
#define _CONTENT_ 350
#define _WORD_ 351
#define _TYPE_ 352
#define _START_ 353
#define _END_ 354
#define _MOST_ 355
#define _SKIP_ 356
#define _COPY_ 357
#define _VALUE_ 358
#define _WHITESPACE_ 359
#define _PI_CONTENT_ 360
#define _XML_COMMENT_CONTENT_ 361
#define _EQ_ 362
#define _NE_ 363
#define _LT_ 364
#define _LE_ 365
#define _GT_ 366
#define _GE_ 367
#define _AT_ 368
#define _QUOT_ATTR_CONTENT_ 369
#define _APOS_ATTR_CONTENT_ 370
#define _WHITESPACE_ELEMENT_CONTENT_ 371
#define _ELEMENT_CONTENT_ 372
#define _AT_LM_ 373
#define _ORDERED_ 374
#define _UNORDERED_ 375
#define _QNAME_ 376
#define _XMLNS_QNAME_ 377
#define _CONSTR_QNAME_ 378
#define _STRING_LITERAL_ 379
#define _VARIABLE_ 380
#define _NCNAME_COLON_STAR_ 381
#define _STAR_COLON_NCNAME_ 382
#define _PI_TARGET_ 383
#define _PRAGMA_CONTENT_ 384
#define _RETURN_ 385
#define _FOR_ 386
#define _IN_ 387
#define _LET_ 388
#define _WHERE_ 389
#define _COUNT_ 390
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
#define _FUNCTION_EXT_ 447
#define _SCORE_ 448
#define _CONTAINS_ 449
#define _WEIGHT_ 450
#define _WINDOW_ 451
#define _DISTANCE_ 452
#define _OCCURS_ 453
#define _TIMES_ 454
#define _SAME_ 455
#define _DIFFERENT_ 456
#define _LOWERCASE_ 457
#define _UPPERCASE_ 458
#define _RELATIONSHIP_ 459
#define _LEVELS_ 460
#define _LANGUAGE_ 461
#define _ANY_ 462
#define _ALL_ 463
#define _PHRASE_ 464
#define _EXACTLY_ 465
#define _FROM_ 466
#define _WORDS_ 467
#define _SENTENCES_ 468
#define _PARAGRAPHS_ 469
#define _SENTENCE_ 470
#define _PARAGRAPH_ 471
#define _REPLACE_ 472
#define _MODIFY_ 473
#define _FIRST_ 474
#define _INSERT_ 475
#define _BEFORE_ 476
#define _AFTER_ 477
#define _REVALIDATION_ 478
#define _WITH_ 479
#define _NODES_ 480
#define _RENAME_ 481
#define _LAST_ 482
#define _DELETE_ 483
#define _INTO_ 484
#define _UPDATING_ 485
#define _ID_ 486
#define _KEY_ 487
#define _TEMPLATE_ 488
#define _MATCHES_ 489
#define _NAME_ 490
#define _CALL_ 491
#define _APPLY_ 492
#define _TEMPLATES_ 493
#define _MODE_ 494
#define _FTOR_ 495
#define _FTAND_ 496
#define _FTNOT_ 497
#define _PRIVATE_ 498
#define _PUBLIC_ 499
#define _DETERMINISTIC_ 500
#define _NONDETERMINISTIC_ 501
#define _XSLT_END_ELEMENT_ 502
#define _XSLT_STYLESHEET_ 503
#define _XSLT_TEMPLATE_ 504
#define _XSLT_VALUE_OF_ 505
#define _XSLT_TEXT_ 506
#define _XSLT_APPLY_TEMPLATES_ 507
#define _XSLT_CALL_TEMPLATE_ 508
#define _XSLT_WITH_PARAM_ 509
#define _XSLT_SEQUENCE_ 510
#define _XSLT_PARAM_ 511
#define _XSLT_FUNCTION_ 512
#define _XSLT_CHOOSE_ 513
#define _XSLT_WHEN_ 514
#define _XSLT_OTHERWISE_ 515
#define _XSLT_IF_ 516
#define _XSLT_VARIABLE_ 517
#define _XSLT_COMMENT_ 518
#define _XSLT_PI_ 519
#define _XSLT_DOCUMENT_ 520
#define _XSLT_ATTRIBUTE_ 521
#define _XSLT_NAMESPACE_ 522
#define _XSLT_ELEMENT_ 523
#define _XSLT_ANALYZE_STRING_ 524
#define _XSLT_MATCHING_SUBSTRING_ 525
#define _XSLT_NON_MATCHING_SUBSTRING_ 526
#define _XSLT_COPY_OF_ 527
#define _XSLT_COPY_ 528
#define _XSLT_FOR_EACH_ 529
#define _XSLT_OUTPUT_ 530
#define _XSLT_IMPORT_SCHEMA_ 531
#define _XSLT_VERSION_ 532
#define _XSLT_MODE_ 533
#define _XSLT_NAME_ 534
#define _XSLT_DOCTYPE_PUBLIC_ 535
#define _XSLT_DOCTYPE_SYSTEM_ 536
#define _XSLT_ENCODING_ 537
#define _XSLT_MEDIA_TYPE_ 538
#define _XSLT_NORMALIZATION_FORM_ 539
#define _XSLT_STANDALONE_ 540
#define _XSLT_EXCLUDE_RESULT_PREFIXES_ 541
#define _XSLT_NAMESPACE_STR_ 542
#define _XSLT_SCHEMA_LOCATION_ 543
#define _XSLT_TUNNEL_ 544
#define _XSLT_REQUIRED_ 545
#define _XSLT_OVERRIDE_ 546
#define _XSLT_COPY_NAMESPACES_ 547
#define _XSLT_INHERIT_NAMESPACES_ 548
#define _XSLT_BYTE_ORDER_MARK_ 549
#define _XSLT_ESCAPE_URI_ATTRIBUTES_ 550
#define _XSLT_INCLUDE_CONTENT_TYPE_ 551
#define _XSLT_INDENT_ 552
#define _XSLT_OMIT_XML_DECLARATION_ 553
#define _XSLT_UNDECLARE_PREFIXES_ 554
#define _XSLT_MATCH_ 555
#define _XSLT_AS_ 556
#define _XSLT_SELECT_ 557
#define _XSLT_PRIORITY_ 558
#define _XSLT_TEST_ 559
#define _XSLT_SEPARATOR_ 560
#define _XSLT_NAMESPACE_A_ 561
#define _XSLT_REGEX_ 562
#define _XSLT_FLAGS_ 563
#define _XSLT_METHOD_ 564
#define _XSLT_CDATA_SECTION_ELEMENTS_ 565
#define _XSLT_USE_CHARACTER_MAPS_ 566
#define _XSLT_ELEMENT_NAME_ 567
#define _XSLT_XMLNS_ATTR_ 568
#define _XSLT_ATTR_NAME_ 569
#define _XSLT_TEXT_NODE_ 570
#define _XSLT_WS_TEXT_NODE_ 571
#define _HASH_DEFAULT_ 572
#define _HASH_ALL_ 573
#define _HASH_CURRENT_ 574
#define _XML_ 575
#define _HTML_ 576
#define _XHTML_ 577




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
#line 1090 "../src/parser/XQParser.cpp"

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
#define YYFINAL  329
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  323
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  345
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1024
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1669

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   577

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
     315,   316,   317,   318,   319,   320,   321,   322
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    15,    18,    21,    23,
      28,    30,    31,    34,    37,    38,    41,    44,    47,    50,
      53,    56,    61,    63,    67,    70,    74,    78,    82,    83,
      86,    89,    92,    94,    96,    98,   103,   105,   108,   112,
     115,   116,   119,   123,   125,   128,   132,   136,   139,   142,
     146,   148,   151,   155,   159,   162,   165,   169,   171,   174,
     178,   182,   185,   187,   190,   194,   197,   201,   204,   207,
     210,   213,   216,   219,   222,   225,   228,   231,   234,   238,
     241,   243,   245,   247,   249,   251,   253,   256,   259,   261,
     264,   267,   271,   275,   280,   281,   285,   288,   289,   292,
     295,   296,   299,   302,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     337,   339,   341,   345,   347,   351,   355,   359,   361,   363,
     367,   369,   373,   377,   379,   381,   383,   384,   387,   391,
     393,   396,   397,   400,   404,   406,   409,   413,   417,   420,
     423,   427,   431,   435,   440,   442,   445,   449,   453,   454,
     458,   463,   465,   469,   473,   477,   478,   482,   483,   487,
     492,   494,   497,   501,   505,   509,   511,   515,   519,   521,
     525,   529,   533,   535,   539,   541,   545,   549,   553,   557,
     561,   563,   567,   571,   575,   577,   581,   585,   588,   590,
     594,   597,   601,   603,   606,   609,   613,   615,   619,   623,
     625,   627,   629,   631,   633,   635,   640,   647,   649,   651,
     653,   655,   657,   660,   664,   668,   672,   676,   679,   681,
     685,   689,   692,   693,   698,   701,   704,   706,   708,   711,
     714,   715,   719,   723,   727,   731,   735,   739,   743,   747,
     749,   751,   753,   755,   757,   759,   761,   764,   767,   769,
     771,   774,   777,   778,   782,   786,   790,   794,   798,   802,
     806,   810,   814,   817,   820,   822,   824,   827,   830,   831,
     835,   839,   843,   847,   851,   855,   859,   863,   866,   869,
     871,   873,   877,   882,   886,   889,   892,   895,   898,   905,
     906,   910,   914,   918,   922,   926,   930,   934,   938,   942,
     944,   946,   948,   950,   952,   954,   956,   958,   960,   962,
     964,   970,   974,   978,   984,   990,   995,   999,  1003,  1007,
    1013,  1019,  1025,  1027,  1029,  1031,  1033,  1038,  1042,  1048,
    1053,  1054,  1057,  1061,  1065,  1069,  1077,  1082,  1089,  1092,
    1094,  1098,  1102,  1109,  1118,  1125,  1134,  1136,  1138,  1141,
    1145,  1146,  1149,  1152,  1155,  1157,  1159,  1161,  1163,  1167,
    1169,  1173,  1177,  1179,  1183,  1185,  1187,  1189,  1191,  1193,
    1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,  1213,  1215,
    1218,  1221,  1223,  1225,  1227,  1229,  1231,  1234,  1238,  1240,
    1248,  1249,  1253,  1254,  1258,  1261,  1265,  1267,  1273,  1279,
    1282,  1286,  1290,  1295,  1299,  1301,  1305,  1311,  1313,  1314,
    1316,  1318,  1319,  1322,  1325,  1330,  1335,  1339,  1341,  1347,
    1354,  1357,  1359,  1365,  1369,  1374,  1382,  1391,  1395,  1397,
    1401,  1403,  1407,  1411,  1412,  1417,  1421,  1425,  1429,  1433,
    1437,  1441,  1445,  1449,  1453,  1457,  1461,  1465,  1467,  1472,
    1478,  1480,  1484,  1486,  1490,  1494,  1496,  1500,  1504,  1508,
    1512,  1514,  1518,  1522,  1524,  1528,  1532,  1534,  1539,  1541,
    1546,  1548,  1553,  1555,  1560,  1562,  1565,  1568,  1570,  1572,
    1574,  1576,  1581,  1587,  1593,  1597,  1602,  1604,  1607,  1612,
    1614,  1617,  1619,  1622,  1625,  1627,  1629,  1633,  1637,  1639,
    1641,  1643,  1645,  1647,  1649,  1654,  1656,  1661,  1664,  1666,
    1669,  1672,  1675,  1678,  1681,  1684,  1687,  1690,  1693,  1695,
    1698,  1700,  1703,  1706,  1709,  1712,  1715,  1717,  1719,  1721,
    1723,  1725,  1727,  1729,  1731,  1733,  1738,  1740,  1742,  1744,
    1746,  1748,  1750,  1752,  1754,  1756,  1758,  1760,  1762,  1764,
    1766,  1768,  1771,  1773,  1777,  1780,  1782,  1787,  1792,  1796,
    1801,  1805,  1807,  1809,  1811,  1813,  1815,  1817,  1819,  1821,
    1827,  1838,  1840,  1842,  1843,  1851,  1859,  1860,  1862,  1866,
    1870,  1874,  1878,  1879,  1882,  1885,  1886,  1889,  1892,  1893,
    1896,  1899,  1900,  1903,  1906,  1907,  1910,  1913,  1916,  1919,
    1923,  1924,  1926,  1930,  1932,  1935,  1937,  1939,  1941,  1943,
    1945,  1947,  1952,  1956,  1958,  1962,  1965,  1969,  1973,  1975,
    1979,  1984,  1989,  1993,  1995,  1999,  2002,  2006,  2009,  2010,
    2012,  2013,  2016,  2019,  2023,  2024,  2026,  2028,  2030,  2032,
    2036,  2038,  2040,  2042,  2044,  2046,  2048,  2050,  2052,  2054,
    2056,  2058,  2060,  2062,  2066,  2070,  2075,  2080,  2084,  2088,
    2092,  2097,  2102,  2106,  2111,  2118,  2120,  2122,  2127,  2129,
    2133,  2138,  2145,  2153,  2155,  2157,  2162,  2164,  2166,  2168,
    2170,  2172,  2176,  2177,  2180,  2181,  2184,  2188,  2190,  2194,
    2196,  2201,  2203,  2206,  2208,  2210,  2213,  2216,  2220,  2222,
    2225,  2230,  2234,  2239,  2240,  2242,  2245,  2247,  2250,  2252,
    2253,  2257,  2260,  2264,  2268,  2273,  2275,  2279,  2283,  2286,
    2289,  2292,  2295,  2298,  2300,  2302,  2304,  2306,  2308,  2311,
    2315,  2317,  2319,  2321,  2323,  2325,  2327,  2329,  2331,  2334,
    2337,  2339,  2341,  2344,  2347,  2349,  2352,  2355,  2358,  2364,
    2370,  2373,  2374,  2378,  2381,  2386,  2391,  2398,  2403,  2407,
    2412,  2413,  2416,  2419,  2423,  2425,  2429,  2432,  2435,  2438,
    2440,  2443,  2447,  2451,  2455,  2459,  2463,  2470,  2477,  2482,
    2487,  2492,  2495,  2498,  2501,  2504,  2507,  2515,  2521,  2527,
    2534,  2538,  2540,  2545,  2547,  2549,  2551,  2553,  2555,  2557,
    2563,  2571,  2580,  2591,  2598,  2607,  2608,  2611,  2614,  2618,
    2619,  2622,  2624,  2628,  2630,  2632,  2634,  2638,  2646,  2650,
    2658,  2664,  2674,  2676,  2678,  2680,  2682,  2686,  2692,  2694,
    2696,  2700,  2705,  2709,  2714,  2716,  2718,  2723,  2729,  2736,
    2738,  2742,  2746,  2748,  2750,  2752,  2754,  2756,  2758,  2760,
    2762,  2764,  2766,  2768,  2770,  2772,  2774,  2776,  2778,  2780,
    2782,  2784,  2786,  2788,  2790,  2792,  2794,  2796,  2798,  2800,
    2802,  2804,  2806,  2808,  2810,  2812,  2814,  2816,  2818,  2820,
    2822,  2824,  2826,  2828,  2830,  2832,  2834,  2836,  2838,  2840,
    2842,  2844,  2846,  2848,  2850,  2852,  2854,  2856,  2858,  2860,
    2862,  2864,  2866,  2868,  2870,  2872,  2874,  2876,  2878,  2880,
    2882,  2884,  2886,  2888,  2890,  2892,  2894,  2896,  2898,  2900,
    2902,  2904,  2906,  2908,  2910,  2912,  2914,  2916,  2918,  2920,
    2922,  2924,  2926,  2928,  2930,  2932,  2934,  2936,  2938,  2940,
    2942,  2944,  2946,  2948,  2950,  2952,  2954,  2956,  2958,  2960,
    2962,  2964,  2966,  2968,  2970,  2972,  2974,  2976,  2978,  2980,
    2982,  2984,  2986,  2988,  2990,  2992,  2994,  2996,  2998,  3000,
    3002,  3004,  3006,  3008,  3010,  3012,  3014,  3016,  3018,  3020,
    3022,  3024,  3026,  3028,  3030,  3032,  3034,  3036,  3038,  3040,
    3042,  3044,  3046,  3048,  3050,  3052,  3054,  3056,  3058,  3060,
    3062,  3064,  3066,  3068,  3070,  3072,  3074,  3076,  3078,  3080,
    3082,  3084,  3086,  3088,  3090
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     324,     0,    -1,     3,   461,    -1,     4,   409,    -1,     5,
     414,    -1,     6,   418,    -1,     7,   422,    -1,     8,   325,
      -1,   326,    -1,   248,   327,   328,   247,    -1,   348,    -1,
      -1,   327,   277,    -1,   327,   286,    -1,    -1,   328,   329,
      -1,   328,   333,    -1,   328,   338,    -1,   328,   340,    -1,
     328,   342,    -1,   328,   346,    -1,   330,   335,   351,   247,
      -1,   249,    -1,   330,   300,   399,    -1,   330,   279,    -1,
     330,   303,   332,    -1,   330,   278,   331,    -1,   330,   301,
     574,    -1,    -1,   331,   121,    -1,   331,   317,    -1,   331,
     318,    -1,    52,    -1,    53,    -1,    54,    -1,   334,   335,
     351,   247,    -1,   257,    -1,   334,   279,    -1,   334,   301,
     574,    -1,   334,   291,    -1,    -1,   335,   336,    -1,   337,
     351,   247,    -1,   256,    -1,   337,   279,    -1,   337,   302,
     462,    -1,   337,   301,   574,    -1,   337,   290,    -1,   337,
     289,    -1,   339,   351,   247,    -1,   256,    -1,   339,   279,
      -1,   339,   302,   462,    -1,   339,   301,   574,    -1,   339,
     290,    -1,   339,   289,    -1,   341,   351,   247,    -1,   262,
      -1,   341,   279,    -1,   341,   302,   462,    -1,   341,   301,
     574,    -1,   343,   247,    -1,   275,    -1,   343,   279,    -1,
     343,   309,   344,    -1,   343,   294,    -1,   343,   310,   345,
      -1,   343,   280,    -1,   343,   281,    -1,   343,   282,    -1,
     343,   295,    -1,   343,   296,    -1,   343,   297,    -1,   343,
     283,    -1,   343,   284,    -1,   343,   298,    -1,   343,   285,
      -1,   343,   299,    -1,   343,   311,   345,    -1,   343,   277,
      -1,   320,    -1,   321,    -1,   322,    -1,    62,    -1,   121,
      -1,   121,    -1,   345,   121,    -1,   347,   247,    -1,   276,
      -1,   276,   287,    -1,   276,   288,    -1,   276,   287,   288,
      -1,   276,   288,   287,    -1,   312,   349,   351,   247,    -1,
      -1,   349,   314,   350,    -1,   349,   313,    -1,    -1,   350,
     460,    -1,   350,   114,    -1,    -1,   351,   356,    -1,   351,
     348,    -1,   351,   352,    -1,   353,    -1,   355,    -1,   357,
      -1,   361,    -1,   366,    -1,   370,    -1,   368,    -1,   379,
      -1,   381,    -1,   383,    -1,   385,    -1,   387,    -1,   389,
      -1,   391,    -1,   375,    -1,   393,    -1,   395,    -1,   397,
      -1,   354,   351,   247,    -1,   250,    -1,   354,   302,   462,
      -1,   354,   305,   350,    -1,   251,   356,   247,    -1,   315,
      -1,   316,    -1,   358,   360,   247,    -1,   252,    -1,   358,
     302,   462,    -1,   358,   278,   359,    -1,   121,    -1,   317,
      -1,   319,    -1,    -1,   360,   364,    -1,   362,   363,   247,
      -1,   253,    -1,   362,   279,    -1,    -1,   363,   364,    -1,
     365,   351,   247,    -1,   254,    -1,   365,   279,    -1,   365,
     302,   462,    -1,   365,   301,   574,    -1,   365,   289,    -1,
     367,   247,    -1,   255,   302,   462,    -1,   369,   351,   247,
      -1,   261,   304,   462,    -1,   258,   371,   374,   247,    -1,
     372,    -1,   371,   372,    -1,   373,   351,   247,    -1,   259,
     304,   462,    -1,    -1,   260,   351,   247,    -1,   376,   377,
     378,   247,    -1,   269,    -1,   376,   302,   462,    -1,   376,
     307,   350,    -1,   376,   308,   350,    -1,    -1,   270,   351,
     247,    -1,    -1,   271,   351,   247,    -1,   380,   351,   247,
     351,    -1,   262,    -1,   380,   279,    -1,   380,   302,   462,
      -1,   380,   301,   574,    -1,   382,   351,   247,    -1,   263,
      -1,   382,   302,   462,    -1,   384,   351,   247,    -1,   264,
      -1,   384,   279,   350,    -1,   384,   302,   462,    -1,   386,
     351,   247,    -1,   265,    -1,   388,   351,   247,    -1,   266,
      -1,   388,   279,   350,    -1,   388,   306,   350,    -1,   388,
     302,   462,    -1,   388,   305,   350,    -1,   390,   351,   247,
      -1,   267,    -1,   390,   279,   350,    -1,   390,   302,   462,
      -1,   392,   351,   247,    -1,   268,    -1,   392,   279,   350,
      -1,   392,   306,   350,    -1,   394,   247,    -1,   272,    -1,
     394,   302,   462,    -1,   394,   292,    -1,   396,   351,   247,
      -1,   273,    -1,   396,   292,    -1,   396,   293,    -1,   398,
     351,   247,    -1,   274,    -1,   398,   302,   462,    -1,   399,
      12,   400,    -1,   400,    -1,   405,    -1,    36,    -1,   402,
      -1,    36,    -1,    30,    -1,   231,    40,   403,    41,    -1,
     232,    40,   643,    33,   404,    41,    -1,   643,    -1,   533,
      -1,   531,    -1,   533,    -1,   406,    -1,   401,   406,    -1,
     402,    36,   406,    -1,   402,    30,   406,    -1,   405,    36,
     406,    -1,   405,    30,   406,    -1,   407,   408,    -1,   526,
      -1,    70,    19,   526,    -1,    55,    19,   526,    -1,    20,
     526,    -1,    -1,   408,    21,   462,    22,    -1,   423,   410,
      -1,   423,   411,    -1,   410,    -1,   411,    -1,   412,   461,
      -1,   428,   412,    -1,    -1,   412,   413,   432,    -1,   412,
     431,   432,    -1,   412,   433,   432,    -1,   412,   435,   432,
      -1,   412,   449,   432,    -1,   412,   452,   432,    -1,   412,
     646,   432,    -1,   412,   436,   432,    -1,   434,    -1,   443,
      -1,   444,    -1,   451,    -1,   438,    -1,   439,    -1,   440,
      -1,   423,   415,    -1,   423,   416,    -1,   415,    -1,   416,
      -1,   417,   461,    -1,   428,   417,    -1,    -1,   417,   413,
     432,    -1,   417,   431,   432,    -1,   417,   433,   432,    -1,
     417,   435,   432,    -1,   417,   449,   432,    -1,   417,   452,
     432,    -1,   417,   646,   432,    -1,   417,   436,   432,    -1,
     417,   437,   432,    -1,   423,   419,    -1,   423,   420,    -1,
     419,    -1,   420,    -1,   421,   461,    -1,   428,   421,    -1,
      -1,   421,   430,   432,    -1,   421,   431,   432,    -1,   421,
     433,   432,    -1,   421,   435,   432,    -1,   421,   449,   432,
      -1,   421,   452,   432,    -1,   421,   646,   432,    -1,   421,
     436,   432,    -1,   423,   426,    -1,   423,   427,    -1,   426,
      -1,   427,    -1,   185,   424,   432,    -1,   185,   424,   425,
     432,    -1,   185,   425,   432,    -1,   186,   124,    -1,   175,
     124,    -1,   429,   461,    -1,   428,   429,    -1,   189,   172,
     644,    37,   595,   432,    -1,    -1,   429,   430,   432,    -1,
     429,   431,   432,    -1,   429,   433,   432,    -1,   429,   435,
     432,    -1,   429,   449,   432,    -1,   429,   452,   432,    -1,
     429,   646,   432,    -1,   429,   436,   432,    -1,   429,   437,
     432,    -1,   434,    -1,   443,    -1,   444,    -1,   451,    -1,
     438,    -1,   439,    -1,   630,    -1,   440,    -1,   445,    -1,
     448,    -1,    50,    -1,   179,   172,   644,    37,   595,    -1,
     179,    64,   170,    -1,   179,    64,   171,    -1,   179,   182,
     190,   172,   595,    -1,   179,   182,   453,   172,   595,    -1,
     179,   184,   666,   124,    -1,   179,    65,   613,    -1,   179,
     181,   119,    -1,   179,   181,   120,    -1,   179,   182,   137,
     141,   142,    -1,   179,   182,   137,   141,   143,    -1,   179,
     183,   441,    33,   442,    -1,   170,    -1,   176,    -1,   177,
      -1,   178,    -1,   179,   182,   144,   595,    -1,   179,    66,
     595,    -1,   187,   188,   447,   595,   446,    -1,   187,   188,
     595,   446,    -1,    -1,   113,   595,    -1,   446,    33,   595,
      -1,   172,   644,    37,    -1,   182,   190,   172,    -1,   187,
     189,   172,   644,    37,   595,   446,    -1,   187,   189,   595,
     446,    -1,   179,   125,     9,   534,   573,   450,    -1,    10,
     463,    -1,   174,    -1,   179,   180,   170,    -1,   179,   180,
     171,    -1,   179,   455,   453,   667,   454,   460,    -1,   179,
     455,   453,   667,   454,   151,   574,   460,    -1,   179,   455,
     453,   667,   454,   174,    -1,   179,   455,   453,   667,   454,
     151,   574,   174,    -1,   191,    -1,   192,    -1,    40,    41,
      -1,    40,   458,    41,    -1,    -1,   455,   456,    -1,   455,
     457,    -1,   455,   230,    -1,   243,    -1,   244,    -1,   245,
      -1,   246,    -1,   458,    33,   459,    -1,   459,    -1,     9,
     534,   573,    -1,    48,   462,    49,    -1,   462,    -1,   462,
      33,   463,    -1,   463,    -1,   464,    -1,   484,    -1,   487,
      -1,   491,    -1,   631,    -1,   633,    -1,   636,    -1,   635,
      -1,   637,    -1,   492,    -1,   652,    -1,   653,    -1,   465,
     130,   463,    -1,   466,    -1,   465,   478,    -1,   465,   467,
      -1,   468,    -1,   473,    -1,   466,    -1,   476,    -1,   477,
      -1,   131,   469,    -1,   469,    33,   470,    -1,   470,    -1,
       9,   534,   573,   471,   472,   132,   463,    -1,    -1,   113,
       9,   534,    -1,    -1,   193,     9,   534,    -1,   133,   474,
      -1,   474,    33,   475,    -1,   475,    -1,     9,   534,   573,
      10,   463,    -1,   193,     9,   534,    10,   463,    -1,   134,
     463,    -1,   135,     9,   534,    -1,   137,   136,   479,    -1,
     138,   137,   136,   479,    -1,   479,    33,   480,    -1,   480,
      -1,   481,   482,   483,    -1,   481,   482,   483,   144,   595,
      -1,   463,    -1,    -1,   139,    -1,   140,    -1,    -1,   141,
     142,    -1,   141,   143,    -1,   145,   485,   147,   463,    -1,
     146,   485,   147,   463,    -1,   485,    33,   486,    -1,   486,
      -1,     9,   534,   573,   132,   463,    -1,   148,    40,   462,
      41,   488,   489,    -1,   488,   490,    -1,   490,    -1,   182,
       9,   534,   130,   463,    -1,   182,   130,   463,    -1,   149,
     574,   130,   463,    -1,   149,     9,   534,   151,   574,   130,
     463,    -1,   152,    40,   462,    41,   153,   463,   154,   463,
      -1,   492,   155,   493,    -1,   493,    -1,   493,   156,   494,
      -1,   494,    -1,   496,    37,   496,    -1,   496,    13,   496,
      -1,    -1,   496,    24,   495,   496,    -1,   496,    14,   496,
      -1,   496,    15,   496,    -1,   496,    16,   496,    -1,   496,
     107,   496,    -1,   496,   108,   496,    -1,   496,   109,   496,
      -1,   496,   110,   496,    -1,   496,   111,   496,    -1,   496,
     112,   496,    -1,   496,   169,   496,    -1,   496,    17,   496,
      -1,   496,    18,   496,    -1,   496,    -1,   497,   194,    62,
     596,    -1,   497,   194,    62,   596,   629,    -1,   497,    -1,
     498,   160,   498,    -1,   498,    -1,   498,    34,   499,    -1,
     498,    35,   499,    -1,   499,    -1,   499,    11,   500,    -1,
     499,   161,   500,    -1,   499,    69,   500,    -1,   499,   162,
     500,    -1,   500,    -1,   500,    12,   501,    -1,   500,   163,
     501,    -1,   501,    -1,   501,   164,   502,    -1,   501,   165,
     502,    -1,   502,    -1,   503,   157,   158,   574,    -1,   503,
      -1,   504,   168,   151,   574,    -1,   504,    -1,   505,   159,
     151,   571,    -1,   505,    -1,   506,   167,   151,   571,    -1,
     506,    -1,    35,   506,    -1,    34,   506,    -1,   507,    -1,
     508,    -1,   513,    -1,   509,    -1,   166,    48,   462,    49,
      -1,   166,    67,    48,   462,    49,    -1,   166,    68,    48,
     462,    49,    -1,   510,    48,    49,    -1,   510,    48,   462,
      49,    -1,   511,    -1,   510,   511,    -1,    32,   547,   666,
     512,    -1,   129,    -1,   104,   129,    -1,   514,    -1,   514,
     515,    -1,    30,   515,    -1,   515,    -1,    36,    -1,   515,
      36,   516,    -1,   515,    30,   516,    -1,   516,    -1,   517,
      -1,   529,    -1,   518,    -1,   519,    -1,   520,    -1,   518,
      21,   462,    22,    -1,   523,    -1,   519,    21,   462,    22,
      -1,   521,   526,    -1,   522,    -1,    70,    19,    -1,    71,
      19,    -1,    55,    19,    -1,    72,    19,    -1,    73,    19,
      -1,    74,    19,    -1,    75,    19,    -1,   172,    19,    -1,
      20,   526,    -1,   526,    -1,   524,   526,    -1,   525,    -1,
      76,    19,    -1,    77,    19,    -1,    78,    19,    -1,    79,
      19,    -1,    80,    19,    -1,    39,    -1,   578,    -1,   527,
      -1,   645,    -1,   528,    -1,    11,    -1,   126,    -1,   127,
      -1,   530,    -1,   529,    21,   462,    22,    -1,   660,    -1,
     531,    -1,   533,    -1,   535,    -1,   536,    -1,   539,    -1,
     542,    -1,   537,    -1,   538,    -1,   657,    -1,   532,    -1,
     643,    -1,   640,    -1,   641,    -1,   642,    -1,     9,   534,
      -1,   666,    -1,    40,   462,    41,    -1,    40,    41,    -1,
      38,    -1,   119,    48,   462,    49,    -1,   120,    48,   462,
      49,    -1,   667,    40,    41,    -1,   667,    40,   540,    41,
      -1,   540,    33,   541,    -1,   541,    -1,   463,    -1,    23,
      -1,   543,    -1,   559,    -1,   544,    -1,   555,    -1,   557,
      -1,    24,   545,   546,   547,    42,    -1,    24,   545,   546,
     547,    25,   554,    31,   545,   547,    26,    -1,   121,    -1,
     122,    -1,    -1,   546,   104,   121,   547,    43,   547,   548,
      -1,   546,   104,   122,   547,    43,   547,   549,    -1,    -1,
     104,    -1,    44,   550,    45,    -1,    46,   552,    47,    -1,
      44,   551,    45,    -1,    46,   553,    47,    -1,    -1,   550,
     460,    -1,   550,   114,    -1,    -1,   551,   460,    -1,   551,
     114,    -1,    -1,   552,   460,    -1,   552,   115,    -1,    -1,
     553,   460,    -1,   553,   115,    -1,    -1,   554,   543,    -1,
     554,   460,    -1,   554,   117,    -1,   554,   116,    -1,    28,
     556,    29,    -1,    -1,   106,    -1,    27,   128,   558,    -1,
     105,    -1,   104,   105,    -1,   560,    -1,   561,    -1,   564,
      -1,   566,    -1,   567,    -1,   568,    -1,    81,    48,   462,
      49,    -1,   190,   562,   563,    -1,   123,    -1,    48,   462,
      49,    -1,    48,    49,    -1,    48,   462,    49,    -1,    55,
     565,   563,    -1,   123,    -1,    48,   462,    49,    -1,    62,
      48,   462,    49,    -1,    56,    48,   462,    49,    -1,    59,
     569,   570,    -1,   123,    -1,    48,   462,    49,    -1,    48,
      49,    -1,    48,   462,    49,    -1,   577,   572,    -1,    -1,
      23,    -1,    -1,   151,   574,    -1,   576,   575,    -1,    63,
      40,    41,    -1,    -1,    11,    -1,    34,    -1,    23,    -1,
     577,    -1,   173,    40,    41,    -1,   578,    -1,   661,    -1,
     665,    -1,   645,    -1,   580,    -1,   588,    -1,   584,    -1,
     590,    -1,   586,    -1,   583,    -1,   582,    -1,   581,    -1,
     579,    -1,    58,    40,    41,    -1,    57,    40,    41,    -1,
      57,    40,   588,    41,    -1,    57,    40,   590,    41,    -1,
      62,    40,    41,    -1,    56,    40,    41,    -1,    59,    40,
      41,    -1,    59,    40,   644,    41,    -1,    59,    40,   124,
      41,    -1,    55,    40,    41,    -1,    55,    40,   585,    41,
      -1,    55,    40,   585,    33,   594,    41,    -1,   592,    -1,
      11,    -1,    60,    40,   587,    41,    -1,   592,    -1,   190,
      40,    41,    -1,   190,    40,   589,    41,    -1,   190,    40,
     589,    33,   594,    41,    -1,   190,    40,   589,    33,   594,
      23,    41,    -1,   593,    -1,    11,    -1,    61,    40,   591,
      41,    -1,   593,    -1,   645,    -1,   645,    -1,   645,    -1,
     124,    -1,   599,   598,   597,    -1,    -1,   195,   497,    -1,
      -1,   598,   610,    -1,   599,   240,   600,    -1,   600,    -1,
     600,   241,   601,    -1,   601,    -1,   601,    82,   132,   602,
      -1,   602,    -1,   242,   603,    -1,   603,    -1,   604,    -1,
     604,   613,    -1,   605,   608,    -1,    40,   596,    41,    -1,
     606,    -1,   531,   607,    -1,    48,   462,    49,   607,    -1,
     510,    48,    49,    -1,   510,    48,   596,    49,    -1,    -1,
     207,    -1,   207,    96,    -1,   208,    -1,   208,   212,    -1,
     209,    -1,    -1,   198,   609,   199,    -1,   210,   498,    -1,
     118,   143,   498,    -1,   118,   100,   498,    -1,   211,   498,
     160,   498,    -1,   119,    -1,   196,   498,   611,    -1,   197,
     609,   611,    -1,   200,   612,    -1,   201,   612,    -1,   113,
      98,    -1,   113,    99,    -1,    94,    95,    -1,   212,    -1,
     213,    -1,   214,    -1,   215,    -1,   216,    -1,    83,   614,
      -1,   613,    83,   614,    -1,   626,    -1,   627,    -1,   618,
      -1,   617,    -1,   615,    -1,   616,    -1,   621,    -1,   628,
      -1,   150,    86,    -1,   150,    85,    -1,   202,    -1,   203,
      -1,    87,    86,    -1,    87,    85,    -1,    90,    -1,    84,
      90,    -1,    91,   620,    -1,    91,   182,    -1,    91,    40,
     620,   619,    41,    -1,    91,    40,   182,   619,    41,    -1,
      84,    91,    -1,    -1,   619,    33,   620,    -1,   113,   595,
      -1,   113,   595,   204,   643,    -1,   113,   595,   609,   205,
      -1,   113,   595,   204,   643,   609,   205,    -1,    92,   212,
     623,   622,    -1,    84,    92,   212,    -1,    92,   212,   182,
     622,    -1,    -1,   622,   625,    -1,   113,   595,    -1,    40,
     624,    41,    -1,   643,    -1,   624,    33,   643,    -1,   163,
     623,    -1,   165,   623,    -1,   206,   643,    -1,    93,    -1,
      84,    93,    -1,   184,   666,   124,    -1,    89,    95,   500,
      -1,   179,   223,    68,    -1,   179,   223,    67,    -1,   179,
     223,   101,    -1,   632,   463,   151,   219,   229,   463,    -1,
     632,   463,   151,   227,   229,   463,    -1,   632,   463,   229,
     463,    -1,   632,   463,   222,   463,    -1,   632,   463,   221,
     463,    -1,   220,    58,    -1,   220,   225,    -1,   634,   463,
      -1,   228,    58,    -1,   228,   225,    -1,   217,   103,   158,
      58,   463,   224,   463,    -1,   217,    58,   463,   224,   463,
      -1,   226,    58,   463,   151,   463,    -1,   102,   638,   218,
     463,   130,   463,    -1,   638,    33,   639,    -1,   639,    -1,
       9,   534,    10,   463,    -1,    52,    -1,    53,    -1,    54,
      -1,   124,    -1,   666,    -1,   666,    -1,   179,   233,   235,
     666,   460,    -1,   179,   233,   235,   666,   648,   647,   460,
      -1,   179,   233,   235,   666,   649,   234,   399,   460,    -1,
     179,   233,   235,   666,   649,   234,   399,   648,   647,   460,
      -1,   179,   233,   649,   234,   399,   460,    -1,   179,   233,
     649,   234,   399,   648,   647,   460,    -1,    -1,   151,   574,
      -1,    40,    41,    -1,    40,   458,    41,    -1,    -1,   239,
     650,    -1,   651,    -1,   650,    33,   651,    -1,   121,    -1,
     317,    -1,   318,    -1,   236,   233,   666,    -1,   236,   233,
     666,   224,    40,   655,    41,    -1,   237,   238,   463,    -1,
     237,   238,   463,   224,    40,   655,    41,    -1,   237,   238,
     463,   239,   654,    -1,   237,   238,   463,   239,   654,   224,
      40,   655,    41,    -1,   666,    -1,   317,    -1,   319,    -1,
     656,    -1,   655,    33,   656,    -1,     9,   534,   573,    10,
     463,    -1,   658,    -1,   659,    -1,   667,    51,    52,    -1,
     192,   454,   573,   460,    -1,   529,    40,    41,    -1,   529,
      40,   540,    41,    -1,   662,    -1,   663,    -1,   192,    40,
      11,    41,    -1,   192,    40,    41,   151,   574,    -1,   192,
      40,   664,    41,   151,   574,    -1,   574,    -1,   664,    33,
     574,    -1,    40,   576,    41,    -1,   667,    -1,    55,    -1,
      56,    -1,    57,    -1,   190,    -1,   173,    -1,   152,    -1,
      58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,    -1,
     148,    -1,    63,    -1,   192,    -1,   121,    -1,    64,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    82,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,
     103,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   125,    -1,   130,    -1,
     131,    -1,   132,    -1,   133,    -1,   134,    -1,   136,    -1,
     137,    -1,   138,    -1,   139,    -1,   140,    -1,   141,    -1,
     142,    -1,   143,    -1,   144,    -1,   145,    -1,   146,    -1,
     147,    -1,   149,    -1,   151,    -1,   153,    -1,   154,    -1,
     155,    -1,   156,    -1,   157,    -1,   158,    -1,   159,    -1,
     160,    -1,   161,    -1,   162,    -1,   163,    -1,   164,    -1,
     165,    -1,   166,    -1,   167,    -1,   168,    -1,   169,    -1,
     170,    -1,   171,    -1,   172,    -1,   174,    -1,   175,    -1,
     176,    -1,   177,    -1,   178,    -1,   179,    -1,   180,    -1,
     181,    -1,   182,    -1,   183,    -1,   184,    -1,   186,    -1,
     187,    -1,   188,    -1,   191,    -1,   193,    -1,    83,    -1,
      84,    -1,   194,    -1,   195,    -1,   196,    -1,   197,    -1,
     198,    -1,   199,    -1,   200,    -1,   201,    -1,   202,    -1,
     203,    -1,   204,    -1,   205,    -1,   206,    -1,   207,    -1,
     208,    -1,   209,    -1,   210,    -1,   211,    -1,   212,    -1,
     213,    -1,   214,    -1,   215,    -1,   216,    -1,   217,    -1,
     218,    -1,   219,    -1,   220,    -1,   221,    -1,   222,    -1,
     223,    -1,   224,    -1,   225,    -1,   226,    -1,   227,    -1,
     228,    -1,   229,    -1,   230,    -1,   119,    -1,   120,    -1,
     231,    -1,   232,    -1,   233,    -1,   234,    -1,   235,    -1,
     236,    -1,   237,    -1,   238,    -1,   239,    -1,   240,    -1,
     241,    -1,   242,    -1,   243,    -1,   244,    -1,   245,    -1,
     246,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   755,   755,   757,   758,   759,   760,   762,   769,   799,
     802,   823,   825,   829,   836,   838,   839,   840,   841,   842,
     843,   847,   866,   870,   875,   882,   887,   892,   901,   904,
     910,   915,   922,   922,   922,   925,   938,   942,   949,   954,
     963,   966,   974,  1001,  1005,  1012,  1018,  1023,  1028,  1037,
    1061,  1065,  1072,  1077,  1082,  1087,  1098,  1116,  1120,  1127,
    1132,  1140,  1165,  1168,  1171,  1174,  1177,  1180,  1183,  1186,
    1189,  1192,  1195,  1198,  1201,  1204,  1207,  1210,  1213,  1216,
    1222,  1223,  1224,  1225,  1226,  1238,  1241,  1246,  1249,  1254,
    1259,  1267,  1275,  1286,  1297,  1300,  1307,  1317,  1320,  1325,
    1336,  1339,  1344,  1349,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,
    1373,  1374,  1378,  1396,  1400,  1405,  1414,  1420,  1420,  1423,
    1443,  1447,  1452,  1460,  1465,  1469,  1477,  1480,  1488,  1501,
    1505,  1516,  1519,  1527,  1545,  1549,  1556,  1561,  1566,  1574,
    1580,  1588,  1596,  1603,  1617,  1621,  1635,  1644,  1652,  1655,
    1662,  1697,  1701,  1706,  1712,  1722,  1725,  1733,  1736,  1743,
    1761,  1765,  1772,  1777,  1785,  1803,  1807,  1815,  1837,  1841,
    1848,  1856,  1865,  1873,  1910,  1914,  1921,  1928,  1937,  1946,
    1973,  1977,  1984,  1996,  2022,  2026,  2033,  2043,  2055,  2059,
    2064,  2073,  2086,  2090,  2095,  2104,  2118,  2122,  2135,  2140,
    2152,  2156,  2164,  2177,  2185,  2198,  2205,  2219,  2219,  2222,
    2222,  2244,  2248,  2252,  2270,  2288,  2298,  2312,  2320,  2326,
    2332,  2338,  2350,  2353,  2367,  2368,  2369,  2370,  2374,  2377,
    2381,  2383,  2387,  2391,  2395,  2399,  2403,  2409,  2415,  2429,
    2430,  2431,  2432,  2433,  2434,  2435,  2443,  2444,  2445,  2446,
    2450,  2453,  2457,  2459,  2463,  2467,  2471,  2475,  2479,  2485,
    2491,  2495,  2506,  2507,  2508,  2509,  2513,  2516,  2520,  2522,
    2526,  2530,  2534,  2538,  2542,  2548,  2554,  2565,  2566,  2567,
    2568,  2574,  2575,  2576,  2580,  2597,  2614,  2617,  2621,  2633,
    2635,  2639,  2643,  2647,  2651,  2655,  2661,  2667,  2671,  2685,
    2686,  2687,  2688,  2689,  2690,  2691,  2692,  2696,  2696,  2699,
    2703,  2711,  2716,  2725,  2730,  2739,  2799,  2807,  2812,  2821,
    2826,  2835,  2845,  2849,  2857,  2861,  2869,  2885,  2894,  2906,
    2915,  2918,  2923,  2932,  2936,  2944,  2954,  2966,  2973,  2977,
    2985,  2990,  3000,  3004,  3008,  3012,  3018,  3018,  3021,  3025,
    3034,  3037,  3050,  3063,  3073,  3073,  3076,  3076,  3080,  3085,
    3095,  3103,  3111,  3124,  3139,  3146,  3147,  3148,  3149,  3150,
    3151,  3152,  3153,  3154,  3155,  3156,  3157,  3162,  3206,  3207,
    3220,  3227,  3227,  3230,  3230,  3230,  3235,  3242,  3246,  3250,
    3262,  3265,  3276,  3279,  3289,  3296,  3300,  3304,  3308,  3321,
    3329,  3337,  3342,  3350,  3354,  3360,  3367,  3382,  3399,  3402,
    3406,  3414,  3422,  3426,  3435,  3443,  3454,  3458,  3462,  3473,
    3480,  3485,  3493,  3497,  3505,  3509,  3517,  3525,  3534,  3539,
    3548,  3558,  3562,  3566,  3566,  3570,  3574,  3578,  3582,  3586,
    3590,  3594,  3598,  3602,  3606,  3610,  3614,  3618,  3623,  3627,
    3631,  3636,  3640,  3645,  3649,  3653,  3658,  3662,  3666,  3670,
    3674,  3679,  3683,  3687,  3692,  3696,  3700,  3705,  3709,  3714,
    3719,  3724,  3728,  3733,  3737,  3742,  3748,  3754,  3759,  3760,
    3761,  3769,  3773,  3777,  3785,  3792,  3801,  3801,  3805,  3825,
    3826,  3834,  3835,  3841,  3862,  3866,  3880,  3886,  3899,  3903,
    3903,  3907,  3908,  3917,  3918,  3924,  3925,  3934,  3946,  3957,
    3961,  3965,  3969,  3973,  3977,  3981,  3985,  3993,  4001,  4018,
    4026,  4035,  4039,  4043,  4047,  4051,  4059,  4071,  4076,  4081,
    4088,  4093,  4100,  4107,  4119,  4120,  4124,  4130,  4131,  4132,
    4133,  4134,  4135,  4136,  4137,  4138,  4142,  4142,  4145,  4145,
    4145,  4149,  4156,  4160,  4164,  4172,  4180,  4190,  4200,  4204,
    4227,  4232,  4242,  4243,  4252,  4256,  4265,  4265,  4265,  4269,
    4275,  4284,  4284,  4289,  4292,  4301,  4312,  4312,  4317,  4321,
    4328,  4332,  4343,  4346,  4351,  4362,  4365,  4369,  4383,  4386,
    4391,  4402,  4405,  4409,  4427,  4430,  4435,  4440,  4447,  4460,
    4474,  4477,  4482,  4501,  4502,  4515,  4516,  4517,  4518,  4519,
    4520,  4525,  4533,  4541,  4545,  4553,  4557,  4566,  4573,  4577,
    4585,  4593,  4601,  4608,  4618,  4625,  4629,  4637,  4648,  4651,
    4660,  4663,  4673,  4680,  4690,  4691,  4693,  4695,  4701,  4705,
    4709,  4710,  4711,  4715,  4727,  4728,  4729,  4730,  4731,  4732,
    4733,  4734,  4735,  4740,  4748,  4752,  4757,  4766,  4774,  4782,
    4786,  4790,  4798,  4802,  4806,  4814,  4815,  4823,  4831,  4836,
    4840,  4844,  4848,  4857,  4858,  4866,  4873,  4876,  4879,  4882,
    4886,  4898,  4914,  4916,  4923,  4926,  4935,  4947,  4952,  4964,
    4969,  4973,  4978,  4983,  4988,  4989,  4998,  5003,  5007,  5013,
    5017,  5025,  5030,  5040,  5043,  5047,  5051,  5055,  5059,  5067,
    5069,  5080,  5086,  5092,  5098,  5113,  5117,  5121,  5125,  5129,
    5133,  5137,  5141,  5149,  5153,  5157,  5165,  5169,  5177,  5178,
    5190,  5191,  5192,  5193,  5194,  5195,  5196,  5197,  5205,  5209,
    5213,  5217,  5226,  5230,  5238,  5242,  5252,  5256,  5260,  5264,
    5268,  5276,  5278,  5285,  5289,  5293,  5297,  5307,  5311,  5315,
    5323,  5325,  5333,  5337,  5344,  5348,  5356,  5360,  5368,  5376,
    5380,  5388,  5395,  5403,  5408,  5413,  5425,  5429,  5433,  5437,
    5441,  5447,  5447,  5452,  5458,  5458,  5463,  5467,  5477,  5485,
    5492,  5497,  5505,  5514,  5526,  5538,  5551,  5562,  5571,  5583,
    5587,  5591,  5596,  5601,  5606,  5615,  5618,  5626,  5630,  5638,
    5642,  5650,  5655,  5664,  5668,  5672,  5680,  5684,  5692,  5696,
    5700,  5704,  5712,  5716,  5720,  5728,  5733,  5743,  5756,  5756,
    5760,  5768,  5778,  5783,  5807,  5807,  5811,  5819,  5823,  5830,
    5835,  5844,  5853,  5853,  5853,  5853,  5853,  5853,  5853,  5853,
    5854,  5854,  5854,  5854,  5854,  5854,  5855,  5859,  5859,  5859,
    5859,  5859,  5859,  5859,  5859,  5859,  5859,  5860,  5860,  5860,
    5860,  5860,  5860,  5860,  5861,  5861,  5861,  5861,  5861,  5861,
    5861,  5861,  5862,  5862,  5862,  5862,  5862,  5862,  5862,  5862,
    5862,  5862,  5862,  5863,  5863,  5863,  5863,  5863,  5863,  5863,
    5863,  5863,  5863,  5863,  5863,  5864,  5864,  5864,  5864,  5864,
    5864,  5864,  5864,  5864,  5864,  5865,  5865,  5865,  5865,  5865,
    5865,  5865,  5865,  5865,  5865,  5865,  5865,  5866,  5866,  5866,
    5866,  5866,  5866,  5866,  5866,  5866,  5866,  5866,  5866,  5867,
    5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5868,  5868,
    5868,  5868,  5868,  5868,  5868,  5868,  5869,  5869,  5869,  5869,
    5869,  5869,  5869,  5869,  5869,  5869,  5869,  5870,  5870,  5870,
    5870,  5870,  5870,  5870,  5870,  5870,  5871,  5871,  5871,  5871,
    5871,  5871,  5871,  5871,  5871,  5871,  5872,  5872,  5872,  5872,
    5872,  5872,  5872,  5872,  5872,  5872,  5872,  5873,  5873,  5873,
    5873,  5873,  5873,  5873,  5873,  5873,  5873,  5873,  5874,  5874,
    5874,  5874,  5874,  5874,  5874
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
  "\"$\"", "\":=\"", "\"*\"", "\"|\"", "\"!=\"", "\"<=\"",
  "\"> (comparison operator)\"", "\">=\"", "\"<<\"", "\">>\"", "\"::\"",
  "\"@\"", "\"[\"", "\"]\"", "\"?\"", "\"<\"", "\"> (start tag close)\"",
  "\"> (end tag close)\"", "\"<?\"", "\"<!--\"", "\"-->\"", "\"//\"",
  "\"</\"", "\"(#\"", "\",\"", "\"+\"", "\"-\"", "\"/\"",
  "\"= (comparison operator)\"", "\".\"", "\"..\"", "\"(\"", "\")\"",
  "\"/>\"", "\"=\"", "\"\\\" (open)\"", "\"\\\" (close)\"", "\"' (open)\"",
  "\"' (close)\"", "\"{\"", "\"}\"", "\";\"", "\"#\"",
  "\"<integer literal>\"", "\"<decimal literal>\"", "\"<double literal>\"",
  "\"attribute\"", "\"comment\"", "\"document-node\"", "\"node\"",
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
  "SelectLanguage", "Start_XSLT", "Stylesheet_XSLT",
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
  "FunctionParamList", "FunctionOptions", "PrivateOption",
  "DeterministicOption", "ParamList", "Param", "EnclosedExpr", "QueryBody",
  "Expr", "ExprSingle", "FLWORExpr", "FLWORTuples", "InitialClause",
  "IntermediateClause", "ForClause", "ForBindingList", "ForBinding",
  "PositionalVar", "FTScoreVar", "LetClause", "LetBindingList",
  "LetBinding", "WhereClause", "CountClause", "OrderByClause",
  "OrderSpecList", "OrderSpec", "OrderExpr", "OrderDirection",
  "EmptyHandling", "QuantifiedExpr", "QuantifyBindingList",
  "QuantifyBinding", "TypeswitchExpr", "CaseClauseList", "DefaultCase",
  "CaseClause", "IfExpr", "OrExpr", "AndExpr", "ComparisonExpr", "$@1",
  "FTContainsExpr", "RangeExpr", "AdditiveExpr", "MultiplicativeExpr",
  "UnionExpr", "IntersectExceptExpr", "InstanceofExpr", "TreatExpr",
  "CastableExpr", "CastExpr", "UnaryExpr", "ValueExpr", "ValidateExpr",
  "ExtensionExpr", "PragmaList", "Pragma", "PragmaContents", "PathExpr",
  "LeadingSlash", "RelativePathExpr", "StepExpr", "AxisStep",
  "ForwardStepPredicateList", "ReverseStepPredicateList", "ForwardStep",
  "ForwardAxis", "AbbrevForwardStep", "ReverseStep", "ReverseAxis",
  "AbbrevReverseStep", "NodeTest", "NameTest", "Wildcard", "PostfixExpr",
  "PrimaryExpr", "Literal", "NumericLiteral", "VarRef", "VarName",
  "ParenthesizedExpr", "ContextItemExpr", "OrderedExpr", "UnorderedExpr",
  "FunctionCall", "FunctionCallArgumentList", "Argument", "Constructor",
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
     575,   576,   577
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   323,   324,   324,   324,   324,   324,   324,   325,   326,
     326,   327,   327,   327,   328,   328,   328,   328,   328,   328,
     328,   329,   330,   330,   330,   330,   330,   330,   331,   331,
     331,   331,   332,   332,   332,   333,   334,   334,   334,   334,
     335,   335,   336,   337,   337,   337,   337,   337,   337,   338,
     339,   339,   339,   339,   339,   339,   340,   341,   341,   341,
     341,   342,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     344,   344,   344,   344,   344,   345,   345,   346,   347,   347,
     347,   347,   347,   348,   349,   349,   349,   350,   350,   350,
     351,   351,   351,   351,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   353,   354,   354,   354,   355,   356,   356,   357,
     358,   358,   358,   359,   359,   359,   360,   360,   361,   362,
     362,   363,   363,   364,   365,   365,   365,   365,   365,   366,
     367,   368,   369,   370,   371,   371,   372,   373,   374,   374,
     375,   376,   376,   376,   376,   377,   377,   378,   378,   379,
     380,   380,   380,   380,   381,   382,   382,   383,   384,   384,
     384,   385,   386,   387,   388,   388,   388,   388,   388,   389,
     390,   390,   390,   391,   392,   392,   392,   393,   394,   394,
     394,   395,   396,   396,   396,   397,   398,   398,   399,   399,
     400,   400,   400,   401,   401,   402,   402,   403,   403,   404,
     404,   405,   405,   405,   405,   405,   405,   406,   407,   407,
     407,   407,   408,   408,   409,   409,   409,   409,   410,   411,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   413,
     413,   413,   413,   413,   413,   413,   414,   414,   414,   414,
     415,   416,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   418,   418,   418,   418,   419,   420,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   422,   422,   422,
     422,   423,   423,   423,   424,   425,   426,   427,   428,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   430,
     430,   430,   430,   430,   430,   430,   430,   431,   431,   432,
     433,   434,   434,   435,   435,   436,   437,   438,   438,   439,
     439,   440,   441,   441,   442,   442,   443,   444,   445,   445,
     446,   446,   446,   447,   447,   448,   448,   449,   450,   450,
     451,   451,   452,   452,   452,   452,   453,   453,   454,   454,
     455,   455,   455,   455,   456,   456,   457,   457,   458,   458,
     459,   460,   461,   462,   462,   463,   463,   463,   463,   463,
     463,   463,   463,   463,   463,   463,   463,   464,   465,   465,
     465,   466,   466,   467,   467,   467,   468,   469,   469,   470,
     471,   471,   472,   472,   473,   474,   474,   475,   475,   476,
     477,   478,   478,   479,   479,   480,   480,   481,   482,   482,
     482,   483,   483,   483,   484,   484,   485,   485,   486,   487,
     488,   488,   489,   489,   490,   490,   491,   492,   492,   493,
     493,   494,   494,   495,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   496,   496,
     496,   497,   497,   498,   498,   498,   499,   499,   499,   499,
     499,   500,   500,   500,   501,   501,   501,   502,   502,   503,
     503,   504,   504,   505,   505,   506,   506,   506,   507,   507,
     507,   508,   508,   508,   509,   509,   510,   510,   511,   512,
     512,   513,   513,   513,   513,   514,   515,   515,   515,   516,
     516,   517,   517,   518,   518,   519,   519,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   521,   522,   522,   523,
     523,   524,   524,   524,   524,   524,   525,   526,   526,   527,
     527,   528,   528,   528,   529,   529,   529,   530,   530,   530,
     530,   530,   530,   530,   530,   530,   531,   531,   532,   532,
     532,   533,   534,   535,   535,   536,   537,   538,   539,   539,
     540,   540,   541,   541,   542,   542,   543,   543,   543,   544,
     544,   545,   545,   546,   546,   546,   547,   547,   548,   548,
     549,   549,   550,   550,   550,   551,   551,   551,   552,   552,
     552,   553,   553,   553,   554,   554,   554,   554,   554,   555,
     556,   556,   557,   558,   558,   559,   559,   559,   559,   559,
     559,   560,   561,   562,   562,   563,   563,   564,   565,   565,
     566,   567,   568,   569,   569,   570,   570,   571,   572,   572,
     573,   573,   574,   574,   575,   575,   575,   575,   576,   576,
     576,   576,   576,   577,   578,   578,   578,   578,   578,   578,
     578,   578,   578,   579,   580,   580,   580,   581,   582,   583,
     583,   583,   584,   584,   584,   585,   585,   586,   587,   588,
     588,   588,   588,   589,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   597,   598,   598,   599,   599,   600,   600,
     601,   601,   602,   602,   603,   603,   604,   604,   604,   605,
     605,   606,   606,   607,   607,   607,   607,   607,   607,   608,
     608,   609,   609,   609,   609,   610,   610,   610,   610,   610,
     610,   610,   610,   611,   611,   611,   612,   612,   613,   613,
     614,   614,   614,   614,   614,   614,   614,   614,   615,   615,
     615,   615,   616,   616,   617,   617,   618,   618,   618,   618,
     618,   619,   619,   620,   620,   620,   620,   621,   621,   621,
     622,   622,   623,   623,   624,   624,   625,   625,   626,   627,
     627,   628,   629,   630,   630,   630,   631,   631,   631,   631,
     631,   632,   632,   633,   634,   634,   635,   635,   636,   637,
     638,   638,   639,   640,   641,   642,   643,   644,   645,   646,
     646,   646,   646,   646,   646,   647,   647,   648,   648,   649,
     649,   650,   650,   651,   651,   651,   652,   652,   653,   653,
     653,   653,   654,   654,   654,   655,   655,   656,   657,   657,
     658,   659,   660,   660,   661,   661,   662,   663,   663,   664,
     664,   665,   666,   666,   666,   666,   666,   666,   666,   666,
     666,   666,   666,   666,   666,   666,   666,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667,   667,   667,   667,   667,   667,
     667,   667,   667,   667,   667
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     1,     4,
       1,     0,     2,     2,     0,     2,     2,     2,     2,     2,
       2,     4,     1,     3,     2,     3,     3,     3,     0,     2,
       2,     2,     1,     1,     1,     4,     1,     2,     3,     2,
       0,     2,     3,     1,     2,     3,     3,     2,     2,     3,
       1,     2,     3,     3,     2,     2,     3,     1,     2,     3,
       3,     2,     1,     2,     3,     2,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     2,
       2,     3,     3,     4,     0,     3,     2,     0,     2,     2,
       0,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     3,     1,     1,     3,
       1,     3,     3,     1,     1,     1,     0,     2,     3,     1,
       2,     0,     2,     3,     1,     2,     3,     3,     2,     2,
       3,     3,     3,     4,     1,     2,     3,     3,     0,     3,
       4,     1,     3,     3,     3,     0,     3,     0,     3,     4,
       1,     2,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     3,     1,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     1,     3,     3,     2,     1,     3,
       2,     3,     1,     2,     2,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     4,     6,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     2,     1,     3,
       3,     2,     0,     4,     2,     2,     1,     1,     2,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     2,     2,     0,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       1,     3,     4,     3,     2,     2,     2,     2,     6,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     5,     5,     4,     3,     3,     3,     5,
       5,     5,     1,     1,     1,     1,     4,     3,     5,     4,
       0,     2,     3,     3,     3,     7,     4,     6,     2,     1,
       3,     3,     6,     8,     6,     8,     1,     1,     2,     3,
       0,     2,     2,     2,     1,     1,     1,     1,     3,     1,
       3,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     2,
       2,     1,     1,     1,     1,     1,     2,     3,     1,     7,
       0,     3,     0,     3,     2,     3,     1,     5,     5,     2,
       3,     3,     4,     3,     1,     3,     5,     1,     0,     1,
       1,     0,     2,     2,     4,     4,     3,     1,     5,     6,
       2,     1,     5,     3,     4,     7,     8,     3,     1,     3,
       1,     3,     3,     0,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     4,     5,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     4,     1,     4,
       1,     4,     1,     4,     1,     2,     2,     1,     1,     1,
       1,     4,     5,     5,     3,     4,     1,     2,     4,     1,
       2,     1,     2,     2,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     4,     1,     4,     2,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     2,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     2,     1,     4,     4,     3,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     5,
      10,     1,     1,     0,     7,     7,     0,     1,     3,     3,
       3,     3,     0,     2,     2,     0,     2,     2,     0,     2,
       2,     0,     2,     2,     0,     2,     2,     2,     2,     3,
       0,     1,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     4,     3,     1,     3,     2,     3,     3,     1,     3,
       4,     4,     3,     1,     3,     2,     3,     2,     0,     1,
       0,     2,     2,     3,     0,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     4,     3,     3,     3,
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
       1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   240,   262,   278,   299,     0,     0,     0,   541,
       0,     0,     0,   610,     0,   586,     0,     0,   505,   565,
     536,     0,   803,   804,   805,   853,   854,   855,   859,   860,
     861,   862,   863,   865,   868,   869,   870,   871,   872,   873,
     874,   875,   876,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   886,   968,   969,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   900,   901,
     902,   903,   904,   905,   906,   907,   908,   909,   910,   911,
    1007,  1008,   867,   806,   912,   542,   543,   913,   914,   915,
     916,   917,   918,   919,   920,   921,   922,   923,   924,   925,
     926,   927,   928,   929,   864,   930,   931,   858,   932,   933,
     934,   935,   936,   937,   938,   939,   940,   941,   942,   943,
     944,   945,   946,   947,   948,   949,   950,   951,   857,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   856,   966,   866,   967,   970,   971,   972,
     973,   974,   975,   976,   977,   978,   979,   980,   981,   982,
     983,   984,   985,   986,   987,   988,   989,   990,   991,   992,
     993,   994,   995,   996,   997,   998,   999,  1000,  1001,  1002,
    1003,  1004,  1005,  1006,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
       2,   372,   374,   375,     0,   388,   391,   392,   376,   377,
     378,   384,   438,   440,   457,   460,   462,   465,   470,   473,
     476,   478,   480,   482,   484,   487,   488,   490,     0,   496,
     489,   501,   504,   508,   509,   511,   512,   513,     0,   518,
     515,     0,   530,   528,   538,   540,   510,   544,   547,   556,
     548,   549,   550,   553,   554,   551,   552,   574,   576,   577,
     578,   575,   615,   616,   617,   618,   619,   620,   537,   662,
     654,   661,   660,   659,   656,   658,   655,   657,   379,     0,
     380,     0,   382,   381,   383,   558,   559,   560,   557,   539,
     385,   386,   555,   838,   839,   546,   808,   852,     0,     0,
       3,   236,   237,     0,   240,   240,     4,   258,   259,     0,
     262,   262,     5,   274,   275,     0,   278,   278,     6,   299,
     289,   290,   299,     0,    11,    94,     7,     8,    10,     1,
     853,   854,   855,   859,   860,   861,   862,   863,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     903,  1007,  1008,   914,   916,   927,   928,   864,   858,   945,
     951,   856,   866,   993,   996,  1002,  1004,  1014,  1015,   561,
     562,   852,   853,   854,   860,   863,   856,   527,   581,   582,
     583,     0,   611,     0,   503,   587,     0,   486,   485,   564,
       0,   521,     0,     0,   628,     0,     0,     0,     0,     0,
       0,     0,   633,     0,     0,     0,     0,     0,   519,   520,
     522,   523,   524,   525,   531,   532,   533,   534,   535,     0,
       0,     0,   801,     0,     0,     0,   396,   398,     0,     0,
     404,   406,     0,     0,   427,     0,     0,     0,     0,     0,
       0,   526,     0,     0,   623,     0,     0,   640,     0,     0,
     791,   792,     0,   794,   795,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   393,   390,   394,   395,   389,
       0,     0,     0,     0,     0,     0,     0,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   497,   502,     0,     0,     0,     0,
     517,   529,     0,     0,     0,   793,     0,     0,     0,     0,
       0,     0,     0,   957,   964,     0,     0,     0,   249,     0,
       0,   253,   254,   255,   250,   251,   317,   318,     0,   252,
       0,   238,     0,   234,   235,   239,   957,     0,     0,     0,
       0,     0,     0,     0,     0,   260,     0,   256,   257,   261,
     957,     0,     0,     0,   309,     0,     0,   313,   314,   316,
     310,   311,     0,   312,     0,   276,   315,     0,   272,   273,
     277,   287,   288,   297,   957,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,    14,   100,   586,     0,   613,
     612,   609,     0,   563,   676,   672,     0,   675,   687,     0,
       0,   627,   668,     0,   664,     0,     0,     0,     0,   663,
     669,     0,     0,   807,     0,     0,   632,     0,   678,     0,
     686,   688,   667,     0,     0,     0,     0,     0,     0,     0,
     640,     0,   640,     0,     0,   640,     0,     0,     0,     0,
       0,     0,     0,     0,   684,   679,     0,   683,     0,   622,
       0,   358,     0,   369,     0,     0,     0,     0,     0,   826,
     828,   373,   387,   409,     0,     0,     0,   437,   439,   442,
     445,   446,   447,   455,   456,     0,   441,   448,   449,   450,
     451,   452,   453,   454,     0,   463,   464,   461,   466,   468,
     467,   469,   471,   472,   474,   475,     0,     0,     0,     0,
     494,     0,   507,   506,     0,     0,     0,   573,   842,   572,
       0,   571,     0,     0,     0,     0,   568,     0,   840,   295,
     294,   319,     0,   291,   293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   819,     0,     0,     0,   241,
     242,   243,   244,   248,   245,   246,   247,   360,     0,     0,
     263,   264,   265,   266,   270,   271,   267,   268,   269,   360,
       0,   279,   280,   281,   282,   286,   283,   284,   285,   360,
     360,   300,   301,   302,   303,   307,   308,   304,   305,   306,
      12,    13,     0,    96,    97,     0,   587,     0,   614,     0,
     499,   498,     0,   673,   629,   625,     0,   631,   665,   666,
     671,   670,   634,   635,     0,   677,   685,   630,   621,     0,
     800,     0,   566,   567,   400,   397,     0,     0,   405,     0,
     426,   424,   425,     0,     0,   491,     0,     0,     0,   680,
     624,   640,     0,   359,     0,   865,   857,   866,   641,   644,
     648,   650,   653,   651,   844,   845,   652,     0,   841,     0,
       0,     0,     0,     0,     0,   410,   417,   411,   414,   418,
       0,   444,     0,     0,     0,     0,   713,   458,   694,   697,
     699,   701,   703,   704,   719,   708,   477,   479,   481,   638,
     483,   495,   514,   516,   545,     0,   843,     0,     0,   790,
     789,   788,   569,   292,     0,   321,   322,   690,   337,     0,
       0,   350,   351,   327,   328,     0,     0,     0,   356,   357,
       0,   332,   333,     0,     0,     0,     0,     0,   363,   364,
     365,   366,   367,     0,   361,   362,     0,     0,     0,   340,
       0,   340,     0,   326,   784,   783,   785,     9,    22,    50,
      36,    57,    62,    88,    15,    40,    16,    40,    17,   100,
      18,   100,    19,     0,    20,     0,    95,    93,   123,     0,
     130,   139,     0,     0,     0,   170,   175,   178,   182,   184,
     190,   194,   161,   198,   202,   206,   127,   128,   102,   103,
     104,   100,   105,   101,   106,   136,   107,   141,   108,     0,
     110,   100,   109,   118,   165,   111,   100,   112,   100,   113,
     100,   114,   100,   115,   100,   116,   100,   117,   100,   119,
       0,   120,   100,   121,   100,   586,   586,   604,   579,   500,
       0,   689,   626,   636,   802,     0,     0,   402,     0,     0,
       0,     0,     0,   431,     0,   492,   493,     0,   370,   368,
       0,     0,     0,     0,   645,   647,   646,   642,     0,   797,
       0,   798,     0,     0,   833,   834,   830,   832,     0,   419,
     420,   421,   412,     0,     0,   702,     0,   714,   716,   718,
     709,     0,   459,     0,   692,     0,     0,   705,     0,   706,
     639,   637,   570,     0,     0,     0,   640,     0,     0,   336,
       0,     0,     0,   325,   819,   823,   824,   825,   820,   821,
       0,     0,     0,     0,   340,     0,   339,     0,   346,     0,
       0,   754,     0,     0,   779,     0,     0,   750,   751,     0,
     738,   744,   745,   743,   742,   746,   740,   741,   747,     0,
      89,    90,    28,    24,     0,     0,     0,   100,    37,    39,
       0,   100,    51,    55,    54,     0,     0,     0,    58,     0,
       0,     0,    61,    79,    63,    67,    68,    69,    73,    74,
      76,    65,    70,    71,    72,    75,    77,     0,     0,     0,
      87,    99,    98,     0,     0,     0,   158,   154,   100,     0,
       0,    97,     0,     0,     0,     0,   140,     0,   149,     0,
     100,     0,    97,    97,   167,   171,     0,     0,     0,     0,
       0,    97,     0,     0,     0,    97,     0,    97,    97,     0,
      97,     0,     0,    97,    97,     0,   197,   200,     0,   203,
     204,     0,     0,     0,     0,     0,     0,   674,   799,     0,
       0,     0,   407,   408,   428,     0,     0,     0,   429,   430,
       0,     0,   681,   851,   643,   649,     0,     0,   849,     0,
     371,     0,     0,     0,   835,     0,     0,   413,     0,   415,
     707,   713,   711,     0,   715,   717,     0,   696,     0,     0,
     725,     0,     0,     0,     0,     0,   691,   695,   698,     0,
       0,     0,     0,     0,   786,   787,   298,     0,   320,   329,
     330,   323,   324,   334,   335,   331,     0,   809,   815,     0,
       0,     0,   214,   213,   853,   874,  1009,  1010,     0,   209,
       0,   212,   210,   221,   232,   228,     0,   343,   344,   338,
     341,     0,     0,   755,   760,     0,   780,   753,   752,     0,
       0,   757,   756,     0,   749,   748,     0,   778,   739,    91,
      92,    26,    23,    27,    32,    33,    34,    25,    43,    41,
     100,     0,    38,     0,    53,    52,    49,    60,    59,    56,
      83,    84,    80,    81,    82,    64,    85,    66,    78,   126,
     150,     0,   100,   155,     0,     0,   152,   124,   125,   122,
     133,   134,   135,   132,   131,   129,   144,   137,   100,   138,
     142,   151,     0,   162,   163,   164,   100,     0,   173,   172,
     100,   176,   174,   179,   180,   177,   181,   185,   187,   188,
     186,   183,   191,   192,   189,   195,   196,   193,   199,   201,
     207,   205,   586,   586,     0,   608,   607,   606,   605,   401,
       0,     0,     0,     0,     0,     0,     0,   682,   846,     0,
       0,     0,   796,   640,     0,   827,   829,     0,   422,   423,
       0,   710,   712,   782,   732,   730,   731,   693,     0,     0,
     736,   737,   728,   729,   700,     0,     0,   721,     0,   720,
       0,   349,   347,   817,     0,     0,     0,     0,   822,   231,
       0,     0,     0,     0,     0,   813,   815,   222,     0,     0,
       0,     0,   227,     0,   354,   352,   342,   340,   768,   761,
     761,   763,     0,     0,   770,   770,   781,    29,    30,    31,
      44,    48,    47,     0,     0,     0,    21,    35,    86,   157,
       0,   153,   156,   145,   148,     0,     0,     0,   166,     0,
     160,   169,     0,     0,   586,   403,   399,     0,   434,     0,
     433,   436,   847,   850,     0,     0,   836,     0,   416,   733,
     734,   735,   726,   727,   723,   722,     0,   348,   818,   816,
     810,     0,   230,   229,     0,   218,   217,     0,   208,     0,
     224,   223,   226,   225,     0,     0,   345,     0,     0,     0,
       0,     0,   774,   772,   769,   767,    46,    45,    42,   159,
     147,   146,   143,   168,   592,   598,   584,   595,   601,   585,
       0,     0,     0,   848,     0,   831,   724,   811,   815,   215,
       0,   814,     0,   355,   353,     0,   759,   758,   764,   765,
       0,   773,     0,     0,   771,     0,     0,     0,     0,   580,
       0,   432,   837,     0,     0,   219,   220,   233,   762,     0,
     775,   776,   777,   588,   594,   593,   589,   600,   599,   590,
     597,   596,   591,   603,   602,   435,   812,   216,   766
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,   326,   327,   595,   792,   954,   955,  1351,  1357,
     956,   957,  1147,  1359,  1360,   958,   959,   960,   961,   962,
     963,  1375,  1377,   964,   965,   988,   596,   966,   795,   989,
     990,   991,   992,   993,   994,   995,  1393,  1195,   996,   997,
    1197,  1397,  1398,   998,   999,  1000,  1001,  1002,  1186,  1187,
    1188,  1384,  1003,  1004,  1204,  1407,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1318,  1319,  1320,  1321,
    1574,  1644,  1322,  1323,  1324,  1502,   300,   301,   302,   303,
     525,   306,   307,   308,   309,   312,   313,   314,   315,   318,
     304,   520,   521,   320,   321,   305,   323,   561,   526,   733,
     527,   528,   529,   530,   552,   531,   532,   533,   923,  1305,
     534,   535,   536,  1116,   938,   537,   538,  1482,   539,   540,
     920,   447,   746,   934,   935,   662,   663,  1182,   200,   201,
     202,   203,   204,   205,   466,   206,   426,   427,  1037,  1241,
     207,   430,   431,   467,   468,   469,   867,   868,   869,  1071,
    1269,   208,   433,   434,   209,  1042,  1248,  1043,   210,   211,
     212,   213,   685,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   801,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   369,   251,   252,   253,   254,   255,   720,   721,   256,
     257,   258,   380,   597,   386,  1606,  1609,  1635,  1637,  1636,
    1638,  1236,   259,   383,   260,   600,   261,   262,   263,   445,
     611,   264,   395,   265,   266,   267,   403,   626,   888,  1091,
     665,   848,  1057,   849,   850,   268,   269,   270,   271,   272,
     273,   274,   606,   275,   627,   276,   656,   277,   629,   607,
     630,  1030,   908,   877,  1286,  1084,   878,   879,   880,   881,
     882,   883,   884,   885,  1080,  1089,  1293,  1287,  1562,  1472,
     943,  1130,  1131,  1132,  1133,  1134,  1587,  1342,  1135,  1594,
    1515,  1591,  1634,  1136,  1137,  1138,  1082,   576,   278,   279,
     280,   281,   282,   283,   284,   421,   422,   285,   286,   287,
     288,   622,   289,   542,  1486,  1308,   927,  1108,  1109,   290,
     291,  1066,  1263,  1264,   292,   293,   294,   295,   853,   854,
     855,  1259,   856,   296,   297
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1427
static const yytype_int16 yypact[] =
{
     949,  3443,   266,   266,   266,   266,  -130,   136,  7337, -1427,
    5817,   183,    18,   156,  4871,    52,  3681,  3681, -1427, -1427,
   -1427,  2253, -1427, -1427, -1427,   259,   454,   234,   284,   112,
     305,   329,   656, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     207,   395,   541,   551,   553,   605,   641,   680,   702,   712,
     731,   402, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   694, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     424,   573, -1427, -1427, -1427, -1427, -1427, -1427,   724, -1427,
      56, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   748,   748, -1427,   527, -1427, -1427,   768, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   509, -1427, -1427, -1427, -1427, -1427,   791, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   260, -1427,   777, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
      67, -1427, -1427,    -2, -1427, -1427, -1427, -1427, -1427,   764,
   -1427,    43, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   604,
     623, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   795, -1427, -1427,   752, -1427, -1427, -1427, -1427, -1427,
   -1427,   695,   711, -1427,   911,   669,   113,   110,    62,   493,
   -1427,   716,   710,   740,   726, -1427, -1427, -1427,   186, -1427,
   -1427,  4871,   560, -1427, -1427,   890,   894, -1427,  5817, -1427,
   -1427,  5817, -1427, -1427, -1427, -1427,   256, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,  3443,
   -1427,  3443, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,   471,   387,   750,
   -1427, -1427, -1427,  3919,   742, -1427, -1427, -1427, -1427,  4157,
     742, -1427, -1427, -1427, -1427,  4395,   742, -1427, -1427,   742,
   -1427, -1427, -1427,  4633, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   904,   906,   924,   937,   939, -1427, -1427, -1427,
   -1427,   701, -1427,   962,   560, -1427,  7337, -1427, -1427, -1427,
     722, -1427,  6289,  3443, -1427,   950,   969,  3443,    41,   989,
    7145,  3443, -1427,   955,  7337,  7337,   992,  3443, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,  3443,
    7337,    28, -1427,  3443,  3443,  7337,  1003, -1427,  7337,  1032,
    1012, -1427,  7337,    81, -1427,   107,  3443,  3443,  3443,   999,
    1007, -1427,  6525,  3443, -1427,   950,   166,   913,  3443,   914,
   -1427, -1427,  3443, -1427, -1427,  7337,  3443,  3443,  3443,   724,
      56,  3443,  1064,   938,   944, -1427, -1427, -1427, -1427, -1427,
    3681,  3681,  3681,  3681,  3681,  3681,  3681,  3681, -1427,  3681,
    3681,  3681,  3681,  3681,  3681,  3681,  3681,  1013,  3681,  3681,
    3681,  3681,  3681,  3681,  3681,  3681,  3681,  3681,  3681,   918,
     927,   935,   952,  2491, -1427,   560,  4871,  4871,  3443,  3443,
   -1427, -1427,  3443,  1777,    -9, -1427,  2015,  1036,   965,   978,
      36,  1057,  7337,  1196,   591,  1057,  1057,  1057, -1427,  1057,
    1057, -1427, -1427, -1427, -1427, -1427, -1427, -1427,  1057, -1427,
    1057, -1427,  1057, -1427, -1427,   583,   528,  1057,  1057,  1057,
    1057,  1057,  1057,  1057,  1057, -1427,  1057, -1427, -1427,   599,
    1173,  1057,  1057,  1057, -1427,  1057,  1057, -1427, -1427, -1427,
   -1427, -1427,  1057, -1427,  1057, -1427, -1427,  1057, -1427, -1427,
     602, -1427, -1427,   612,  1128,  1057,  1057,  1057,  1057,  1057,
    1057,  1057,  1057, -1427,  1057,   491,   530,  1004,  1005, -1427,
   -1427, -1427,   218, -1427, -1427, -1427,   774, -1427, -1427,   432,
    2729, -1427, -1427,   519, -1427,   329,   939,  1068,  1070, -1427,
   -1427,  1071,  1072, -1427,   546,  2967, -1427,  1073, -1427,  1074,
   -1427, -1427, -1427,   548,   577,  1106,   694,  3443,   590,   594,
     913,   724,   913,  7337,    56,   913,   748,  3443,  3443,   793,
     794,   595,  3443,  3443, -1427, -1427,   827, -1427,   596, -1427,
    7337, -1427,   829, -1427,  6732,  1075,   895,  1060,   970,   896,
     180, -1427, -1427, -1427,  7337,  3443,   986,   711, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427,  3681, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   137,   110,   110,   899,    62,    62,
      62,    62,   493,   493, -1427, -1427,  6732,  6732,  7337,  7337,
   -1427,   597, -1427, -1427,   705,   707,   721, -1427, -1427, -1427,
     831, -1427,   657,  3443,  3443,  3443, -1427,   847, -1427, -1427,
   -1427, -1427,  1057, -1427, -1427,  1087,   766,  1001,  1117,  7337,
     788,   830,   322,   558,  7337,   420,   568,   159,    33, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,   813,   591,  1045,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   453,
     422, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   675,
     658, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   307, -1427, -1427,   832,   840,   287, -1427,  1000,
   -1427, -1427,  7337, -1427, -1427, -1427,   619, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427,   621, -1427, -1427, -1427, -1427,  3443,
   -1427,  1002, -1427, -1427,  1017, -1427,  1124,  1127, -1427,  1006,
   -1427, -1427, -1427,   991,   988, -1427,   628,   629,  7337, -1427,
   -1427,   913,  1133, -1427,  6939,  1103,  1109,  1110, -1427,   341,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,  3443, -1427,  3443,
    3443,  3443,  1113,  1114,  1509, -1427, -1427,  1122, -1427,   860,
    3443, -1427,   137,  3443,   566,   567,   587,  1067,   919,   905,
    1076, -1427, -1427,  1045,   963, -1427, -1427, -1427, -1427,  1137,
   -1427, -1427, -1427, -1427, -1427,  3205, -1427,   942,   943, -1427,
   -1427, -1427, -1427, -1427,  1001, -1427, -1427, -1427, -1427,  7337,
    1130, -1427, -1427, -1427, -1427,  1033,  1001,  1009, -1427, -1427,
    1010, -1427, -1427,  1131,  1051,  7337,   -77,   945, -1427, -1427,
   -1427, -1427, -1427,  7520, -1427, -1427,  7337,   993,  1001,  1063,
    7337,  1063,   582,  1095, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,   684, -1427,   200, -1427,   312, -1427,   446,
   -1427,   247, -1427,  8076, -1427,   940,    96, -1427, -1427,   686,
   -1427, -1427,   882,   926,   886, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,    65, -1427, -1427, -1427,    88, -1427,   920, -1427,   954,
   -1427, -1427, -1427, -1427,   251, -1427,   286, -1427,   900, -1427,
      94, -1427, -1427, -1427,   245, -1427,   106, -1427,  -141, -1427,
     223, -1427,   714, -1427,   902,    52,    52, -1427, -1427, -1427,
    1156, -1427, -1427, -1427, -1427,  3443,  1189,  1015,  3443,  3443,
    3443,  5109,    -6, -1427,  3443, -1427, -1427,   173, -1427, -1427,
    1162,  1164,  1165,  6053, -1427, -1427, -1427, -1427,   649, -1427,
     990, -1427,  1200,  1200, -1427, -1427,   994, -1427,  3443, -1427,
   -1427,  1069,  1122,  1171,   668, -1427,   119,  1119,  1008, -1427,
   -1427,  1121, -1427,   137,   492,   137,  1085,  1095,    74, -1427,
   -1427, -1427, -1427,  3443,  3443,  1057,   913,  1001,   866, -1427,
    1001,  1001,   835, -1427,    31, -1427, -1427, -1427,  1186, -1427,
    5345,   777,  1184,  1053,  1063,  1001,  1190,  1191,  1190,   876,
     929, -1427,    37,  1018, -1427,   941,  7337, -1427, -1427,  1105,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   582,
     946,   948, -1427, -1427,  5345,  6732,   779,   975, -1427, -1427,
    6732,   975, -1427, -1427, -1427,  6732,  3443,  1216, -1427,  6732,
    3443,  7521, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,   -34,  1111,  1111,
   -1427, -1427, -1427,   995,  3443,   932,   780, -1427, -1427,  3443,
    3443, -1427,  7549,   -54,  3443,   140, -1427,   221, -1427,  7577,
   -1427,  3443, -1427, -1427,   967, -1427,  6732,  3443,  7605,  3443,
    7633, -1427,  3443,  7661,  7689, -1427,  3443, -1427, -1427,  7717,
   -1427,  3443,  7745, -1427, -1427,  7773, -1427, -1427,  3443, -1427,
   -1427,  7801,  3443,  7829,  1197,  1198,   468, -1427, -1427,  7337,
    1224,  1115, -1427, -1427, -1427,  7337,  1118,    91, -1427, -1427,
    1089,  1204, -1427, -1427, -1427, -1427,  1208,  1100, -1427,   859,
   -1427,  3443,  7337,   861, -1427,   862,  1214, -1427,   901,  1112,
   -1427,   587, -1427,  1206, -1427, -1427,  3681,   905,  1163,   951,
   -1427,  3681,  3681,    74,   836,   836, -1427, -1427,  1076,   137,
     -24,  3681,  3681,  1058, -1427, -1427, -1427,    79, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,   294, -1427,  1108,  1029,
     -77,  5817, -1427,  1023,   143,  1245,  1225,  1226,   315, -1427,
    5581,   739,   746, -1427, -1427, -1427,    50, -1427, -1427,  1190,
   -1427,  1001,  1001, -1427, -1427,  1056, -1427, -1427, -1427,    13,
    1001, -1427, -1427,    87, -1427, -1427,  1147, -1427, -1427, -1427,
   -1427,   -67,  1260, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     463,  7857, -1427,  7885, -1427,   795, -1427, -1427,   795, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427,  1159,  1159, -1427,
     795,  3443, -1427, -1427,  1030,  7913,   795,   795,    96, -1427,
   -1427, -1427, -1427, -1427,   795, -1427, -1427, -1427,   405, -1427,
   -1427, -1427,  7941,   795,    96,    96, -1427,  1035, -1427,   795,
   -1427,   795, -1427,    96,   795, -1427, -1427,    96,   795,    96,
      96, -1427,    96,   795, -1427,    96,    96, -1427,   795, -1427,
     795, -1427,    52,    52,   183, -1427, -1427, -1427, -1427, -1427,
    7337,  3443,  1132,  3443,  7337,  3443,  3443, -1427, -1427,  6732,
    6732,  1142, -1427,   913,  1200, -1427, -1427,  1200, -1427, -1427,
    1001, -1427, -1427,    62, -1427, -1427, -1427, -1427,    78,   770,
   -1427, -1427, -1427, -1427, -1427,  3681,  3681,   899,   120, -1427,
    3443, -1427, -1427, -1427,   863,  6732,  1075,  5345, -1427, -1427,
    5817,  5817,    98,  1105,  5345, -1427,  1108, -1427,  5581,  5581,
    5581,  5581,  1273,  6732, -1427, -1427, -1427,  1063, -1427, -1427,
   -1427,   129,  1105,  1001, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,  6732,  3443,  7969, -1427, -1427, -1427,   795,
    7997, -1427, -1427, -1427, -1427,  6732,  3443,  8025, -1427,  8053,
   -1427,  1507,   392,   484,    52, -1427, -1427,  6732, -1427,  1169,
   -1427, -1427, -1427, -1427,  6732,  1293, -1427,   864, -1427, -1427,
   -1427, -1427, -1427, -1427,   899,   899,  3681, -1427, -1427, -1427,
   -1427,   315, -1427, -1427,  1263, -1427, -1427,  1272, -1427,  1075,
   -1427, -1427, -1427, -1427,  3443,    30,  1190,   877,   879,  1105,
    1101,   880, -1427, -1427,   344,   344, -1427,   795, -1427, -1427,
   -1427,   795, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
    1281,  1183,  3443, -1427,  3443, -1427,   899, -1427,  1108, -1427,
     431, -1427,   734, -1427, -1427,  1201, -1427, -1427,    74, -1427,
    1105, -1427,    48,    48, -1427,   211,   151,   317,   416, -1427,
    3443, -1427, -1427,  1075,  1274, -1427, -1427, -1427, -1427,  1120,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   360, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427,   149, -1427, -1427,  1310, -1427,  -186,  -680, -1427,
   -1427, -1427, -1427,   353, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427,   132, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   144,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1133,  -163, -1427, -1427,
   -1427, -1427, -1427, -1142, -1427, -1427, -1427,  1028,  1037,  1031,
    -283, -1427,  1024,  1034,  1022, -1427,  1026,  1027,  1046, -1427,
     985, -1427,   820,  1040,  1043,    27,  1025,  -288,  -270,  -457,
    -266,  -282,  -199,  -170,  -281,  -265,  -264,  -260, -1427, -1427,
    -212,  -174, -1427,  -927, -1427, -1427,  -135, -1427,  -157,  -107,
     603,   237, -1427, -1427, -1427,    44,   510,  -662,   382,   -21,
    -219, -1427, -1427,  1166, -1427, -1427, -1427,   725, -1427, -1427,
   -1427, -1427,   723, -1427, -1427, -1427,   499,   313, -1427, -1427,
   -1427, -1427,  1280,   729, -1427, -1427, -1427,   342, -1427, -1427,
     915,   912, -1427,    60,   105,  -489,   565,  -472,   561,   564,
   -1427, -1427, -1427,  1042, -1427, -1427, -1427,  -688,  -226, -1427,
   -1427, -1427,    24,   559, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,    26, -1427, -1427, -1427, -1427,  -642, -1427,
   -1426,  -416, -1427, -1427, -1427, -1427, -1427,   873,   495, -1427,
     155, -1427,   -42, -1427,  -579, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
     953, -1427, -1427, -1427, -1427, -1427, -1427, -1427,   685, -1427,
    -635,  -543, -1427,   555,   359,  -584, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427,  1011, -1427,  1014, -1427,   996,
     959,   569,  -723,  -824, -1427, -1427, -1427,   314,   319,   116,
     534, -1427, -1427, -1427,   131, -1427, -1275, -1427,   -59,   126,
     531,   274, -1427, -1427, -1427, -1427,   -95, -1316, -1427,   -93,
    -563, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427, -1427, -1427, -1427,   784, -1427, -1427, -1427,
   -1092,  -482,  -358,  -106, -1421, -1289,   320, -1427,   115, -1427,
   -1427, -1427, -1036,   -31, -1427, -1427, -1427, -1427, -1427, -1427,
   -1427, -1427, -1427,     5,     7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -361
static const yytype_int16 yytable[] =
{
     390,   697,   504,   858,   635,   824,   875,   826,  1469,   640,
     829,  1352,   642,   370,  1118,   371,   645,   371,   797,   698,
     699,   700,   701,  1510,   939,   941,   547,  1265,  1370,  1496,
     311,   317,   322,   564,   608,   585,   377,  1347,   384,   548,
     735,   564,   590,   549,  1105,   562,   608,   631,  1073,   563,
     567,   568,   876,   586,  1517,   569,   450,   587,   567,   568,
     514,   636,   515,   569,   734,   428,  1575,  1390,   749,   750,
     751,  1306,   752,   753,   495,  1579,  1475,  1339,   857,   857,
     851,   754,   614,   755,   631,   756,   731,  1371,  1512,  1480,
     760,   761,   762,   763,   764,   765,   766,   767,   857,   768,
    1444,   453,   615,   570,   771,   772,   773,     8,   774,   775,
     550,   570,   488,   489,   646,   776,   565,   777,   324,  1476,
     778,   491,   851,   851,   588,   448,  1340,  1512,   781,   782,
     783,   784,   785,   786,   787,   788,   329,   789,  1223,   551,
     646,   571,   722,  1041,   857,   566,   381,   488,   489,   571,
    1340,    15,   400,   589,   488,   489,   385,   907,   573,   872,
     401,  1513,  1490,   886,   887,  1224,   573,   873,  1272,    15,
     449,    22,    23,    24,   553,   660,  1247,   872,  1497,   492,
     572,  1095,   325,   392,   875,   873,   875,  1329,   591,    22,
      23,    24,  1290,  1099,  1646,  1509,  1251,  1643,  1656,   857,
    1513,  1503,   554,   556,  1623,   940,  1048,   661,   574,   577,
    1181,   518,   723,   724,  1252,  1114,   592,   594,    15,  1341,
     725,  1445,    83,   451,  1504,   496,   408,   827,   647,   666,
     876,   616,   876,   668,   503,   402,  1590,   670,   671,   672,
    1106,  1107,   673,    83,   841,   371,   637,  1290,   371,   429,
    1518,  1519,  1273,  1481,   648,   505,  1653,   910,   865,   857,
     851,    83,   382,  1391,   510,  1392,  1657,   511,   454,  1514,
     926,   493,   494,   490,   398,   903,   547,   512,   391,  1157,
    1566,  1161,  1618,   907,  1291,  1292,  1372,  1373,  1374,   548,
    1559,  1560,  1561,   549,   719,   585,   513,   719,   564,   392,
     442,   564,   590,   660,   378,   379,   852,   393,   443,  1648,
     562,  1192,  1027,   586,   563,   567,   568,   587,   567,   568,
     569,  1199,   799,   569,   399,  1654,  1208,  1494,  1210,  1028,
    1213,   936,  1214,  1589,  1219,  1483,  1222,   311,  1225,  1291,
    1292,   937,  1231,   317,  1233,   404,   322,   800,   852,   852,
     852,   852,  1054,  1649,  1571,  1306,  1580,  1581,  1582,  1583,
     550,   874,  1659,   857,  1055,   857,  1193,  1190,   570,   405,
    1191,   570,   609,  1211,  1298,  1056,   613,  1301,  1302,   874,
     624,   565,   394,   444,   588,  1220,   633,  1395,   875,   551,
    1194,   602,  1330,   371,  1396,   875,  1212,   875,   634,   371,
    1576,  1577,   638,   639,   863,   623,   571,   371,  1221,   571,
     566,   371,   371,   589,   409,   649,   650,   651,   821,   864,
    1592,  1557,   658,   573,   553,   370,   573,   371,   831,   832,
     370,  1660,   371,   370,   876,   371,  1604,   370,  1605,   371,
       8,   876,  1307,   876,  1031,   572,  1234,  1235,   591,   371,
     419,   298,   554,   556,  1112,   299,   866,   851,  1117,   915,
     669,  1297,   371,  1662,   857,   457,   916,  1361,  1399,   851,
    1226,  1363,   423,   574,   577,  1396,   592,   594,  1142,  1143,
    1031,   804,   711,    22,    23,    24,   852,   714,   715,   944,
     945,   716,    11,  1096,   396,    12,    13,  1628,  1246,  1434,
    1144,  1145,   397,  1146,   899,   900,   901,  1632,  1385,  1633,
    1258,   516,   917,   918,   919,  1227,   857,   736,   759,   737,
    1402,  1200,   517,   946,  1215,  1228,  1158,   623,  1607,   371,
    1608,  1663,   679,   680,   681,   682,   683,   684,  1650,   686,
     687,   688,   689,   690,   691,   692,   693,  1216,  1159,  1160,
    1217,  1218,   457,  1201,   947,    83,   948,   438,  1202,  1203,
     410,   851,   518,   949,   950,  1205,   851,   436,   807,   951,
     411,   851,   412,   519,  1437,   851,   439,   440,   738,   457,
    1586,   457,   952,   953,  1435,  1436,  1278,  1206,  1207,   806,
     506,  1148,   736,   759,   737,   812,   507,   817,    15,    15,
    1034,   875,  1353,  1149,   814,  1279,   872,  1362,  1506,  1507,
     457,  1280,  1364,  1150,   873,  1076,  1367,  1511,    22,    23,
      24,   424,   851,   457,   413,   739,   818,   457,   457,   457,
     457,   836,   837,   740,   741,   742,   743,   744,  1296,   822,
    1059,  1060,  1061,   823,   835,   840,   891,   876,   370,   504,
     371,   866,   457,   738,   457,   925,  1495,   497,   498,   926,
     414,   457,   457,  1408,  1505,   370,  1119,   371,  1032,  1120,
    1033,   371,  1121,  1122,  1123,  1124,   719,  1045,  1046,   370,
    1525,   371,   457,   852,  1533,   541,   745,  1281,  1282,  1283,
      83,   555,  1284,  1285,  1534,   852,   406,   575,  1260,   415,
     739,   457,  1530,   420,   407,   593,  1535,  1536,   740,   741,
     742,   743,   744,   371,   371,   371,   371,  1271,  1537,  -360,
    -360,   416,   736,   759,   737,  1152,  1539,   892,   921,   893,
    1541,   417,  1125,   425,   922,  1153,  1154,  1558,   457,   736,
     457,   737,  1520,   894,   623,   871,   371,  1155,  1156,   924,
     418,   371,  1521,  1522,   457,   457,  1647,   432,  -360,   918,
     919,   745,   757,   603,  1523,  1524,  1126,   457,   790,  1498,
     758,  -360,  -360,  -360,  -360,  1499,  1500,   791,   769,   747,
     748,   779,  1501,   738,  1127,  1128,   758,   852,  1129,   758,
    1593,   780,   852,  1468,  1077,  1078,  1079,   852,   928,   758,
     738,   852,  1477,  1478,  1463,   598,   599,   802,   437,   371,
     441,   929,   930,   931,   932,   803,  1238,   446,  1555,  1242,
    1243,  1244,   452,  1439,  1570,  1250,   457,   457,   457,  1442,
     739,  1354,  1355,  1356,   833,   834,  1058,   455,   740,   741,
     742,   743,   744,   793,   794,   371,  1453,   739,   852,   866,
     470,   371,  1074,  1542,  1543,   740,   741,   742,   743,   744,
     838,   456,   842,   487,   895,   851,   851,   471,   839,  1067,
     843,   371,   896,   499,  1294,  1295,   897,   736,   500,   737,
     895,   770,   458,   459,   898,   460,   461,   462,   902,   463,
     464,   745,  1450,   502,  1454,  1454,   842,  1454,   770,   501,
    1451,   851,  1455,  1456,  1568,  1615,  1552,  1553,   745,  1617,
    1625,   508,  1625,  1630,   370,   509,   371,  1621,  1626,   851,
    1627,  1631,   522,  1624,   472,   473,   474,   475,   476,   477,
    1104,   299,   371,   488,   489,   478,   905,   906,   738,   851,
    1111,   623,  1569,   371,   392,   623,   396,   371,   479,   913,
     914,   851,     1,     2,     3,     4,     5,     6,   911,   912,
    1585,  1025,  1026,   851,   400,  1610,  1333,  1334,  1335,  1336,
     851,  1140,  1141,  1655,  1658,  1661,  1664,   406,  1645,   442,
    1596,  1666,  1559,  1560,  1561,   739,  1564,  1565,   310,   316,
     319,   601,  1600,   740,   741,   742,   743,   744,   610,  1069,
    1070,   986,   987,   625,  1611,  1388,  1229,  1230,  1299,  1300,
     612,  1613,  1303,  1304,  1337,  1338,  1404,  1405,   480,   481,
     482,   483,   484,   485,  1545,  1413,  1344,  1345,  1549,  1417,
     619,  1419,  1420,   632,  1422,  -211,   641,  1425,  1426,  1185,
    1382,   643,  1452,  1458,  1459,   644,   745,   652,   371,  1465,
    1466,  1470,  1471,   695,   696,   653,   702,   703,   387,   388,
     371,   704,   705,  -211,   664,   712,   713,   889,   889,  1651,
    1652,  -211,   667,   674,   675,   694,   706,  1616,   707,   967,
     486,   676,   968,   969,   970,   971,   708,   972,   728,   729,
     973,   852,   852,   974,   975,   976,   977,   978,   979,   980,
     981,   982,   730,   709,   983,   984,   985,   731,   796,   808,
     798,   809,   810,   811,   815,   816,   819,   371,   860,   859,
     862,   861,   870,   857,   904,   907,   909,   852,   942,  1029,
    1036,  1346,  1035,   371,  1038,  1365,  1325,  1039,  1040,  1368,
    1041,  1044,   660,  1051,   325,   852,  1085,   986,   987,  1052,
    1053,   371,   371,  1062,  1063,  1068,  1081,   371,  1086,  1083,
    1090,  1088,   371,  1380,  1102,   852,   371,  1097,  1386,  1387,
    1325,  1093,  1094,  1394,  1098,  1103,  1115,   852,  1139,  1110,
    1403,  1100,  1101,  1113,  1184,  1185,  1409,  1180,  1411,   852,
    1189,  1414,   736,   759,   737,  1418,   852,  1237,  1239,  1196,
    1423,  1198,  1209,  1253,  1232,  1254,  1255,  1428,  1240,  1262,
    1268,  1430,  1270,   371,  1261,  1274,  1276,  1289,  1266,  1310,
    1275,  1327,  1546,  1331,  1548,  1328,  1550,  1551,  1332,    83,
    1343,  1358,  1376,  1440,  1349,  1350,  1381,   736,  1406,   737,
    1432,  1433,  1379,  1446,   370,  1447,   371,  1441,  1443,  1448,
     370,  1449,   371,   738,  1457,  1462,  1460,  1479,  1464,  1485,
     736,  1567,   737,  1487,  1491,  1492,  1493,   370,  1508,   371,
    -211,  1516,  1494,  -211,  -211,  -211,  -211,  1531,  -211,  -211,
    1528,  -211,  1540,  1547,  -211,  -211,  -211,  -211,  -211,  -211,
    -211,  -211,  -211,  1554,  1584,  -211,  -211,  -211,   738,  1612,
     739,  -211,  -211,  1614,  1619,  1620,  1629,  1639,   740,   741,
     742,   743,   744,  1640,  1340,  1667,   328,  1151,   371,  -360,
    -360,   738,  1183,  -211,  -211,  1668,  -211,   371,  1378,  1400,
    1383,  1578,   543,   559,   557,  -211,   545,  1489,  -211,  -211,
     732,   544,   578,   579,   558,   739,  1325,   583,  1326,   933,
    1484,   770,  1049,   740,   741,   742,   743,   744,  -360,   581,
    1529,   745,   582,   580,  -360,  -360,   825,   828,   739,  1072,
     465,  -360,  -360,  -360,  -360,   830,   740,   741,   742,   743,
     744,  1267,   435,   678,  1249,   677,  1467,  -360,  -360,   727,
    1092,  1438,  1544,  1641,   890,  1642,   770,  1277,   659,  1050,
     628,   657,  1461,  -360,  1288,  1474,   745,  1047,  1075,   617,
    1563,  1473,   618,  1348,  1087,  1588,  -360,  -360,  -360,  -360,
     820,  1665,  1595,  1556,  1309,  1488,  -360,     0,     0,   745,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -360,
    -360,  -360,  -360,     0,     0,   370,     0,   371,     0,   370,
       0,   371,     0,     0,     0,     0,   371,   371,     0,     0,
       0,     0,     0,  1366,     0,     0,   968,   969,   970,   971,
       0,   972,     0,     0,   973,     0,     0,   974,   975,   976,
     977,   978,   979,   980,   981,   982,     0,     0,   983,   984,
     985,     0,   371,     0,   371,     0,     0,   371,   371,     0,
       0,   371,     0,  1597,     0,   371,   371,   371,   371,     0,
     371,     0,     0,  1325,     0,  1601,  1572,  1573,     0,     0,
    1325,     0,     0,     0,  1325,  1325,  1325,  1325,   325,     0,
     371,   986,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   371,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,     0,
       0,   371,     0,  1622,   330,   331,   332,   333,   334,   335,
     336,   337,    33,    34,    35,    36,    37,    38,    39,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   350,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   351,   352,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     353,    89,   354,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   355,   356,   103,   357,   105,     0,
     106,   358,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   359,   122,   123,   124,   125,
     126,   360,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   361,
     144,   362,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   363,   171,   172,   364,
     174,   175,   176,   177,   178,   365,   180,   366,   182,   183,
     184,   185,   186,   187,   188,   367,   368,   191,   192,   193,
     194,   195,   196,   197,   198,   199,     0,   968,   969,   970,
     971,     0,   972,     0,     0,   973,     0,     0,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,   983,
     984,   985,     0,     0,     0,     0,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
     717,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,   718,   325,
       0,     0,   986,   987,     0,     0,  1064,     0,  1065,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,    83,    84,    85,    86,     0,     0,    87,    88,    89,
      90,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   717,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    80,    81,    82,     0,     0,    83,
      84,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,   389,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,    83,    84,    85,
      86,     0,     0,    87,    88,    89,    90,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   140,
     141,   142,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
     710,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,    85,    86,     0,
       0,    87,    88,    89,    90,    91,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,   805,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,    80,    81,
      82,     0,     0,    83,    84,    85,    86,     0,     0,    87,
      88,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,   813,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,    83,    84,    85,    86,     0,     0,    87,    88,    89,
      90,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,   717,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    80,    81,    82,     0,     0,    83,
      84,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,    83,    84,    85,
      86,     0,     0,    87,    88,    89,    90,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   140,
     141,   142,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,    14,     0,    15,     0,    16,    17,    18,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   350,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,    85,    86,     0,
       0,    87,   353,    89,   354,    91,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   355,   356,   103,   357,
     105,     0,   106,   358,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   363,   171,
     172,   364,   174,   175,   176,   177,   178,   365,   180,   366,
     182,   183,   184,   185,   186,   187,   188,   367,   368,   191,
     192,   193,   194,   195,   196,   197,   198,   199,     8,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    11,     0,     0,    12,    13,     0,    14,
       0,    15,     0,    16,    17,    18,     0,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,    80,    81,
      82,     0,     0,    83,    84,    85,    86,     0,     0,    87,
      88,    89,    90,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   523,   135,
     136,   137,   138,   139,     0,   140,   524,   142,     0,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,     8,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,    11,     0,     0,    12,    13,     0,    14,     0,    15,
       0,    16,    17,    18,     0,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,    80,    81,    82,     0,
       0,    83,    84,    85,    86,     0,     0,    87,    88,    89,
      90,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   546,   135,   136,   137,
     138,   139,     0,   140,   524,   142,     0,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,     8,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    11,
       0,     0,    12,    13,     0,    14,     0,    15,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,    80,    81,    82,     0,     0,    83,
      84,    85,    86,     0,     0,    87,    88,    89,    90,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   560,   135,   136,   137,   138,   139,
       0,   140,   524,   142,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     8,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    11,     0,     0,
      12,    13,     0,    14,     0,    15,     0,    16,    17,    18,
       0,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,    80,    81,    82,     0,     0,    83,    84,    85,
      86,     0,     0,    87,    88,    89,    90,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,     0,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   584,   135,   136,   137,   138,   139,     0,   140,
     524,   142,     0,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
       8,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    11,     0,     0,    12,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   350,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
      80,    81,    82,     0,     0,    83,    84,    85,    86,     0,
       0,    87,   353,    89,   354,    91,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   355,   356,   103,   357,
     105,     0,   106,   358,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   359,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   363,   171,
     172,   364,   174,   175,   176,   177,   178,   365,   180,   366,
     182,   183,   184,   185,   186,   187,   188,   367,   368,   191,
     192,   193,   194,   195,   196,   197,   198,   199,  1245,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   844,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   373,    27,    28,   374,    30,
      31,   375,   845,    34,    35,    36,    37,    38,    39,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   350,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   351,   352,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     353,    89,   354,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   355,   356,   103,   357,   105,     0,
     106,   358,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   359,   122,   123,   124,   125,
     126,   360,   846,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   376,
     144,   847,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   363,   171,   172,   364,
     174,   175,   176,   177,   178,   365,   180,   366,   182,   183,
     184,   185,   186,   187,   188,   367,   368,   191,   192,   193,
     194,   195,   196,   197,   198,   199,     9,     0,     0,     0,
       0,     0,     0,     0,     0,  1311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1312,     0,     0,     0,     0,
       0,  1313,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1314,   373,    27,    28,   374,    30,    31,   375,    33,    34,
      35,    36,    37,    38,    39,  1315,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   350,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   351,   352,    82,     0,     0,     0,
      84,    85,    86,     0,     0,    87,   353,    89,   354,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     355,   356,   103,   357,   105,     0,   106,   358,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   359,   122,   123,   124,   125,   126,   360,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   376,   144,   362,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   363,   171,   172,   364,   174,   175,   176,   177,
     178,   365,   180,   366,   182,   183,  1316,  1317,   186,   187,
     188,   367,   368,   191,   192,   193,   194,   195,   196,   197,
     198,   199,     9,     0,     0,     0,     0,     0,     0,     0,
       0,  1311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1314,   373,    27,    28,
     374,    30,    31,   375,    33,    34,    35,    36,    37,    38,
      39,  1315,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,    52,    53,    54,    55,    56,    57,    58,
       0,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,   350,    72,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
     351,   352,    82,     0,     0,     0,    84,    85,    86,     0,
       0,    87,   353,    89,   354,    91,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   355,   356,   103,   357,
     105,     0,   106,   358,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   359,   122,   123,
     124,   125,   126,   360,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   140,   141,   142,
       0,   376,   144,   362,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   363,   171,
     172,   364,   174,   175,   176,   177,   178,   365,   180,   366,
     182,   183,   184,   185,   186,   187,   188,   367,   368,   191,
     192,   193,   194,   195,   196,   197,   198,   199,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   372,   373,    27,    28,   374,    30,    31,   375,
      33,    34,    35,    36,    37,    38,    39,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   350,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   351,   352,    82,     0,
       0,     0,    84,    85,    86,     0,     0,    87,   353,    89,
     354,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   355,   356,   103,   357,   105,     0,   106,   358,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   359,   122,   123,   124,   125,   126,   360,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   376,   144,   362,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   363,   171,   172,   364,   174,   175,
     176,   177,   178,   365,   180,   366,   182,   183,   184,   185,
     186,   187,   188,   367,   368,   191,   192,   193,   194,   195,
     196,   197,   198,   199,  1256,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   844,  1257,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,   373,
      27,    28,   374,    30,    31,   375,   845,    34,    35,    36,
      37,    38,    39,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    52,    53,    54,    55,    56,
      57,    58,     0,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,   350,    72,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,     0,   351,   352,    82,     0,     0,     0,    84,     0,
       0,     0,     0,    87,   353,    89,   354,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   355,   356,
     103,   357,   105,     0,   106,   358,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   359,
     122,   123,   124,   125,   126,   360,   846,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   140,
     141,   142,     0,   376,   144,   847,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     363,   171,   172,   364,   174,   175,   176,   177,   178,   365,
     180,   366,   182,   183,   184,   185,   186,   187,   188,   367,
     368,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     604,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     605,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   330,   331,   332,   333,   334,   335,
     336,   337,    33,    34,    35,    36,    37,    38,    39,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   350,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   351,   352,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     353,    89,   354,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   355,   356,   103,   357,   105,     0,
     106,   358,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   359,   122,   123,   124,   125,
     126,   360,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   361,
     144,   362,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   363,   171,   172,   364,
     174,   175,   176,   177,   178,   365,   180,   366,   182,   183,
     184,   185,   186,   187,   188,   367,   368,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   654,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   655,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,   331,   332,   333,   334,   335,   336,   337,    33,    34,
      35,    36,    37,    38,    39,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   350,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   351,   352,    82,     0,     0,     0,
      84,     0,     0,     0,     0,    87,   353,    89,   354,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     355,   356,   103,   357,   105,     0,   106,   358,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   359,   122,   123,   124,   125,   126,   360,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   361,   144,   362,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   363,   171,   172,   364,   174,   175,   176,   177,
     178,   365,   180,   366,   182,   183,   184,   185,   186,   187,
     188,   367,   368,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   844,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   372,   373,    27,
      28,   374,    30,    31,   375,   845,    34,    35,    36,    37,
      38,    39,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,    52,    53,    54,    55,    56,    57,
      58,     0,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,   350,    72,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,   351,   352,    82,     0,     0,     0,    84,     0,     0,
       0,     0,    87,   353,    89,   354,    91,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   355,   356,   103,
     357,   105,     0,   106,   358,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   359,   122,
     123,   124,   125,   126,   360,   846,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,     0,   140,   141,
     142,     0,   376,   144,   847,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   363,
     171,   172,   364,   174,   175,   176,   177,   178,   365,   180,
     366,   182,   183,   184,   185,   186,   187,   188,   367,   368,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   844,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,   373,    27,    28,   374,    30,
      31,   375,    33,    34,    35,    36,    37,    38,    39,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,    52,    53,    54,    55,    56,    57,    58,     0,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,   350,    72,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,   351,   352,
      82,     0,     0,     0,    84,     0,     0,     0,     0,    87,
     353,    89,   354,    91,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   355,   356,   103,   357,   105,     0,
     106,   358,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   359,   122,   123,   124,   125,
     126,   360,   846,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,     0,   140,   141,   142,     0,   376,
     144,   847,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   363,   171,   172,   364,
     174,   175,   176,   177,   178,   365,   180,   366,   182,   183,
     184,   185,   186,   187,   188,   367,   368,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   620,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     330,   331,   332,   333,   334,   335,   336,   337,    33,    34,
      35,    36,    37,    38,    39,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,    52,    53,    54,
      55,    56,    57,    58,     0,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   350,    72,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,     0,
       0,     0,     0,     0,   351,   352,    82,     0,     0,   621,
      84,     0,     0,     0,     0,    87,   353,    89,   354,    91,
       0,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     355,   356,   103,   357,   105,     0,   106,   358,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   359,   122,   123,   124,   125,   126,   360,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       0,   140,   141,   142,     0,   361,   144,   362,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   363,   171,   172,   364,   174,   175,   176,   177,
     178,   365,   180,   366,   182,   183,   184,   185,   186,   187,
     188,   367,   368,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   330,   331,   332,   333,   334,   335,   336,   337,
      33,    34,    35,    36,    37,    38,    39,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,    52,
      53,    54,    55,    56,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   350,
      72,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,     0,     0,     0,     0,     0,   351,   352,    82,     0,
       0,     0,    84,     0,     0,     0,     0,    87,   353,    89,
     354,    91,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   355,   356,   103,   357,   105,     0,   106,   358,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   359,   122,   123,   124,   125,   126,   360,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,     0,   140,   141,   142,     0,   361,   144,   362,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   363,   171,   172,   364,   174,   175,
     176,   177,   178,   365,   180,   366,   182,   183,   184,   185,
     186,   187,   188,   367,   368,   191,   192,   193,   194,   195,
     196,   197,   198,   199,    34,    35,    36,    37,    38,    39,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,    52,    53,    54,    55,    56,    57,    58,     0,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   350,    72,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,     0,   351,
     352,    82,     0,     0,     0,    84,     0,     0,     0,     0,
      87,   353,    89,   354,    91,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   355,   356,   103,     0,   105,
       0,   106,     0,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   359,   122,   123,   124,
     125,   126,   360,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,     0,   140,   141,   142,     0,
       0,   144,     0,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   363,   171,   172,
     364,   174,   175,   176,   177,   178,   365,   180,   366,   182,
     183,   184,   185,   186,   187,   188,   367,   368,   191,   192,
     193,   194,   195,   196,   197,   198,   199,     0,  1369,     0,
       0,   968,   969,   970,   971,     0,   972,     0,     0,   973,
       0,     0,   974,   975,   976,   977,   978,   979,   980,   981,
     982,     0,     0,   983,   984,   985,  1389,     0,     0,   968,
     969,   970,   971,     0,   972,     0,     0,   973,     0,     0,
     974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
       0,   983,   984,   985,  1401,     0,     0,   968,   969,   970,
     971,     0,   972,   325,     0,   973,   986,   987,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,   983,
     984,   985,  1410,     0,     0,   968,   969,   970,   971,     0,
     972,   325,     0,   973,   986,   987,   974,   975,   976,   977,
     978,   979,   980,   981,   982,     0,     0,   983,   984,   985,
    1412,     0,     0,   968,   969,   970,   971,     0,   972,   325,
       0,   973,   986,   987,   974,   975,   976,   977,   978,   979,
     980,   981,   982,     0,     0,   983,   984,   985,  1415,     0,
       0,   968,   969,   970,   971,     0,   972,   325,     0,   973,
     986,   987,   974,   975,   976,   977,   978,   979,   980,   981,
     982,     0,     0,   983,   984,   985,  1416,     0,     0,   968,
     969,   970,   971,     0,   972,   325,     0,   973,   986,   987,
     974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
       0,   983,   984,   985,  1421,     0,     0,   968,   969,   970,
     971,     0,   972,   325,     0,   973,   986,   987,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,   983,
     984,   985,  1424,     0,     0,   968,   969,   970,   971,     0,
     972,   325,     0,   973,   986,   987,   974,   975,   976,   977,
     978,   979,   980,   981,   982,     0,     0,   983,   984,   985,
    1427,     0,     0,   968,   969,   970,   971,     0,   972,   325,
       0,   973,   986,   987,   974,   975,   976,   977,   978,   979,
     980,   981,   982,     0,     0,   983,   984,   985,  1429,     0,
       0,   968,   969,   970,   971,     0,   972,   325,     0,   973,
     986,   987,   974,   975,   976,   977,   978,   979,   980,   981,
     982,     0,     0,   983,   984,   985,  1431,     0,     0,   968,
     969,   970,   971,     0,   972,   325,     0,   973,   986,   987,
     974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
       0,   983,   984,   985,  1526,     0,     0,   968,   969,   970,
     971,     0,   972,   325,     0,   973,   986,   987,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,   983,
     984,   985,  1527,     0,     0,   968,   969,   970,   971,     0,
     972,   325,     0,   973,   986,   987,   974,   975,   976,   977,
     978,   979,   980,   981,   982,     0,     0,   983,   984,   985,
    1532,     0,     0,   968,   969,   970,   971,     0,   972,   325,
       0,   973,   986,   987,   974,   975,   976,   977,   978,   979,
     980,   981,   982,     0,     0,   983,   984,   985,  1538,     0,
       0,   968,   969,   970,   971,     0,   972,   325,     0,   973,
     986,   987,   974,   975,   976,   977,   978,   979,   980,   981,
     982,     0,     0,   983,   984,   985,  1598,     0,     0,   968,
     969,   970,   971,     0,   972,   325,     0,   973,   986,   987,
     974,   975,   976,   977,   978,   979,   980,   981,   982,     0,
       0,   983,   984,   985,  1599,     0,     0,   968,   969,   970,
     971,     0,   972,   325,     0,   973,   986,   987,   974,   975,
     976,   977,   978,   979,   980,   981,   982,     0,     0,   983,
     984,   985,  1602,     0,     0,   968,   969,   970,   971,     0,
     972,   325,     0,   973,   986,   987,   974,   975,   976,   977,
     978,   979,   980,   981,   982,     0,     0,   983,   984,   985,
    1603,     0,     0,   968,   969,   970,   971,     0,   972,   325,
       0,   973,   986,   987,   974,   975,   976,   977,   978,   979,
     980,   981,   982,  1162,     0,   983,   984,   985,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,     0,     0,
     986,   987,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1163,     0,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,     0,     0,     0,   325,     0,     0,   986,   987,
    1171,  1172,  1173,  1174,  1175,  1176,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1177,  1178,  1179
};

static const yytype_int16 yycheck[] =
{
      21,   490,   228,   665,   420,   640,   694,   642,  1283,   425,
     645,  1144,   428,     8,   941,     8,   432,    10,   597,   491,
     492,   493,   494,  1339,   747,   748,   309,  1063,    62,  1318,
       3,     4,     5,   315,   392,   323,    10,  1129,    14,   309,
     522,   323,   323,   309,   121,   315,   404,   405,   872,   315,
     315,   315,   694,   323,   121,   315,    58,   323,   323,   323,
     279,    33,   281,   323,   521,     9,  1492,   121,   525,   526,
     527,    40,   529,   530,    12,  1496,   100,    40,    48,    48,
     664,   538,    41,   540,   442,   542,    50,   121,    40,    10,
     547,   548,   549,   550,   551,   552,   553,   554,    48,   556,
       9,    58,    61,   315,   561,   562,   563,     9,   565,   566,
     309,   323,    34,    35,    33,   572,   315,   574,   248,   143,
     577,    11,   706,   707,   323,    58,   113,    40,   585,   586,
     587,   588,   589,   590,   591,   592,     0,   594,   279,   309,
      33,   315,   151,   149,    48,   315,   128,    34,    35,   323,
     113,    32,    40,   323,    34,    35,   104,   124,   315,    40,
      48,   113,    19,   706,   707,   306,   323,    48,    49,    32,
     103,    52,    53,    54,   309,     9,   182,    40,  1320,    69,
     315,   904,   312,    40,   872,    48,   874,  1114,   323,    52,
      53,    54,   118,   916,  1620,   182,    23,  1618,    47,    48,
     113,   151,   309,   309,   174,   172,   841,    41,   315,   315,
     114,   175,   221,   222,    41,   938,   323,   323,    32,   182,
     229,   130,   124,   225,   174,   163,    19,   643,   147,   448,
     872,   190,   874,   452,    48,   123,  1511,   456,   457,   458,
     317,   318,   461,   124,   660,   238,   218,   118,   241,   193,
     317,   318,  1076,   174,   147,   231,    45,   739,   674,    48,
     844,   124,   106,   317,   238,   319,   115,   241,   225,   182,
     239,   161,   162,   160,    40,   732,   559,    21,    19,   959,
     160,   961,  1571,   124,   210,   211,   320,   321,   322,   559,
     212,   213,   214,   559,   513,   583,    40,   516,   580,    40,
      40,   583,   583,     9,   121,   122,   664,    48,    48,  1625,
     580,   991,    25,   583,   580,   580,   580,   583,   583,   583,
     580,  1001,   104,   583,    40,   114,  1006,    12,  1008,    42,
    1010,   172,  1012,   204,  1014,    41,  1016,   310,  1018,   210,
     211,   182,  1022,   316,  1024,    40,   319,   129,   706,   707,
     708,   709,    11,  1628,  1487,    40,  1498,  1499,  1500,  1501,
     559,   242,    45,    48,    23,    48,   278,   302,   580,    40,
     305,   583,   393,   279,  1097,    34,   397,  1100,  1101,   242,
     401,   580,   123,   123,   583,   279,   407,   247,  1076,   559,
     302,   386,  1115,   386,   254,  1083,   302,  1085,   419,   392,
    1492,  1493,   423,   424,   224,   400,   580,   400,   302,   583,
     580,   404,   405,   583,    19,   436,   437,   438,   637,   239,
    1512,  1457,   443,   580,   559,   420,   583,   420,   647,   648,
     425,   114,   425,   428,  1076,   428,    44,   432,    46,   432,
       9,  1083,  1104,  1085,   802,   580,  1025,  1026,   583,   442,
      48,   185,   559,   559,   936,   189,   675,  1041,   940,   137,
     455,  1096,   455,    47,    48,    33,   144,  1147,   247,  1053,
     247,  1151,    48,   580,   580,   254,   583,   583,   278,   279,
     838,    49,   503,    52,    53,    54,   844,   508,   509,    67,
      68,   512,    24,   909,    40,    27,    28,  1589,  1041,    31,
     300,   301,    48,   303,   723,   724,   725,   163,  1188,   165,
    1053,    40,   190,   191,   192,   292,    48,    64,    65,    66,
    1200,   270,    51,   101,   279,   302,   279,   522,    44,   522,
      46,   115,   472,   473,   474,   475,   476,   477,  1630,   479,
     480,   481,   482,   483,   484,   485,   486,   302,   301,   302,
     305,   306,    33,   302,   247,   124,   249,    48,   307,   308,
      19,  1145,   175,   256,   257,   279,  1150,    40,    49,   262,
      19,  1155,    19,   186,  1236,  1159,    67,    68,   125,    33,
    1507,    33,   275,   276,   116,   117,    94,   301,   302,   610,
      30,   279,    64,    65,    66,    49,    36,    49,    32,    32,
     819,  1289,  1145,   291,   625,   113,    40,  1150,  1331,  1332,
      33,   119,  1155,   301,    48,    48,  1159,  1340,    52,    53,
      54,    48,  1206,    33,    19,   172,    49,    33,    33,    33,
      33,   652,   653,   180,   181,   182,   183,   184,  1095,    49,
     859,   860,   861,    49,    49,    49,    49,  1289,   643,   875,
     643,   870,    33,   125,    33,   235,  1318,   164,   165,   239,
      19,    33,    33,  1206,  1326,   660,    84,   660,    49,    87,
      49,   664,    90,    91,    92,    93,   895,    49,    49,   674,
    1360,   674,    33,  1041,   279,   303,   233,   195,   196,   197,
     124,   309,   200,   201,   289,  1053,    40,   315,    49,    19,
     172,    33,  1382,     9,    48,   323,   301,   302,   180,   181,
     182,   183,   184,   706,   707,   708,   709,    49,  1398,   191,
     192,    19,    64,    65,    66,   279,  1406,    22,   170,    22,
    1410,    19,   150,     9,   176,   289,   290,  1460,    33,    64,
      33,    66,   279,    22,   739,   685,   739,   301,   302,   744,
      19,   744,   289,   290,    33,    33,    22,     9,   230,   191,
     192,   233,   179,    41,   301,   302,   184,    33,   277,    30,
     187,   243,   244,   245,   246,    36,    30,   286,   179,   188,
     189,   179,    36,   125,   202,   203,   187,  1145,   206,   187,
    1513,   179,  1150,  1282,   207,   208,   209,  1155,   230,   187,
     125,  1159,  1291,  1292,  1276,   104,   105,    33,    40,   802,
      19,   243,   244,   245,   246,    41,  1035,    40,  1453,  1038,
    1039,  1040,    58,  1239,  1486,  1044,    33,    33,    33,  1245,
     172,    52,    53,    54,    41,    41,   857,   233,   180,   181,
     182,   183,   184,   313,   314,   838,  1262,   172,  1206,  1068,
     155,   844,   873,  1432,  1433,   180,   181,   182,   183,   184,
      33,   238,    33,   194,    33,  1449,  1450,   156,    41,   864,
      41,   864,    41,   157,  1093,  1094,   219,    64,   168,    66,
      33,   223,   130,   131,   227,   133,   134,   135,    41,   137,
     138,   233,    33,   167,    33,    33,    33,    33,   223,   159,
      41,  1485,    41,    41,    41,    41,  1449,  1450,   233,  1571,
      33,    21,    33,    33,   909,    21,   909,  1579,    41,  1503,
      41,    41,   172,  1585,    13,    14,    15,    16,    17,    18,
     925,   189,   925,    34,    35,    24,   170,   171,   125,  1523,
     933,   936,  1485,   936,    40,   940,    40,   940,    37,   119,
     120,  1535,     3,     4,     5,     6,     7,     8,   170,   171,
    1503,   121,   122,  1547,    40,  1544,    90,    91,    92,    93,
    1554,   287,   288,  1635,  1636,  1637,  1638,    40,  1620,    40,
    1523,  1643,   212,   213,   214,   172,  1475,  1476,     3,     4,
       5,    29,  1535,   180,   181,   182,   183,   184,    48,   139,
     140,   315,   316,    48,  1547,  1191,   292,   293,   142,   143,
      41,  1554,   177,   178,    85,    86,  1202,  1203,   107,   108,
     109,   110,   111,   112,  1440,  1211,    85,    86,  1444,  1215,
      41,  1217,  1218,    41,  1220,    12,    33,  1223,  1224,   259,
     260,     9,  1261,   142,   143,    33,   233,    48,  1041,    98,
      99,   215,   216,   488,   489,    48,   495,   496,    16,    17,
    1053,   497,   498,    40,   151,   506,   507,   708,   709,  1632,
    1633,    48,   158,     9,   136,    62,   158,  1566,   151,   247,
     169,   137,   250,   251,   252,   253,   151,   255,    52,   124,
     258,  1449,  1450,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   124,   151,   272,   273,   274,    50,   104,    41,
     105,    41,    41,    41,    41,    41,    10,  1110,    58,   224,
     224,   151,   136,    48,    37,   124,     9,  1485,    83,   129,
     113,  1126,   130,  1126,    10,  1156,  1110,    10,   132,  1160,
     149,   153,     9,    40,   312,  1503,   241,   315,   316,    40,
      40,  1144,  1145,    40,    40,    33,    89,  1150,    82,   240,
      23,   198,  1155,  1184,    33,  1523,  1159,    37,  1189,  1190,
    1144,   229,   229,  1194,   141,   124,   113,  1535,    83,   234,
    1201,   172,   172,   190,   302,   259,  1207,   247,  1209,  1547,
     304,  1212,    64,    65,    66,  1216,  1554,    41,     9,   279,
    1221,   247,   302,    41,   302,    41,    41,  1228,   193,     9,
     141,  1232,    41,  1206,   224,    96,    95,   132,   224,    33,
     212,    37,  1441,    33,  1443,   172,  1445,  1446,    37,   124,
     212,   256,   121,     9,   288,   287,   304,    64,   271,    66,
      43,    43,   247,   154,  1239,    41,  1239,   132,   130,    41,
    1245,   151,  1245,   125,    40,    49,   144,   199,    95,   151,
      64,  1480,    66,   234,    19,    40,    40,  1262,   212,  1262,
     247,   124,    12,   250,   251,   252,   253,   247,   255,   256,
     121,   258,   247,   151,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   151,    21,   272,   273,   274,   125,   130,
     172,   278,   279,    10,    41,    33,   205,    26,   180,   181,
     182,   183,   184,   130,   113,    41,     6,   957,  1311,   191,
     192,   125,   969,   300,   301,   205,   303,  1320,  1179,  1197,
    1186,  1494,   304,   311,   310,   312,   305,  1311,   315,   316,
     520,   304,   316,   316,   310,   172,  1320,   322,  1111,   746,
    1306,   223,   842,   180,   181,   182,   183,   184,   230,   319,
    1381,   233,   319,   317,   191,   192,   641,   644,   172,   870,
     204,   243,   244,   245,   246,   646,   180,   181,   182,   183,
     184,  1068,   102,   471,  1042,   470,  1281,   191,   192,   516,
     895,  1236,  1434,  1612,   709,  1614,   223,  1083,   445,   844,
     404,   442,  1271,   230,  1085,  1289,   233,   838,   874,   398,
    1469,  1285,   398,  1139,   883,  1510,   243,   244,   245,   246,
     636,  1640,  1515,  1454,  1104,  1310,   230,    -1,    -1,   233,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,
     244,   245,   246,    -1,    -1,  1440,    -1,  1440,    -1,  1444,
      -1,  1444,    -1,    -1,    -1,    -1,  1449,  1450,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,   250,   251,   252,   253,
      -1,   255,    -1,    -1,   258,    -1,    -1,   261,   262,   263,
     264,   265,   266,   267,   268,   269,    -1,    -1,   272,   273,
     274,    -1,  1485,    -1,  1487,    -1,    -1,  1490,  1491,    -1,
      -1,  1494,    -1,  1524,    -1,  1498,  1499,  1500,  1501,    -1,
    1503,    -1,    -1,  1487,    -1,  1536,  1490,  1491,    -1,    -1,
    1494,    -1,    -1,    -1,  1498,  1499,  1500,  1501,   312,    -1,
    1523,   315,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1535,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1547,    -1,    -1,    -1,    -1,    -1,
      -1,  1554,    -1,  1584,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    -1,   250,   251,   252,
     253,    -1,   255,    -1,    -1,   258,    -1,    -1,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    -1,    -1,   272,
     273,   274,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,   312,
      -1,    -1,   315,   316,    -1,    -1,   317,    -1,   319,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,
      -1,   124,   125,   126,   127,    -1,    -1,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,
     125,   126,   127,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,   124,   125,   126,
     127,    -1,    -1,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,   124,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,   124,   125,   126,   127,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,
      -1,   124,   125,   126,   127,    -1,    -1,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    23,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,
     125,   126,   127,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,   124,   125,   126,
     127,    -1,    -1,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    36,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,   124,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    24,    -1,    -1,    27,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    36,    -1,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,   124,   125,   126,   127,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,
      -1,   124,   125,   126,   127,    -1,    -1,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    24,
      -1,    -1,    27,    28,    -1,    30,    -1,    32,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,
     125,   126,   127,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      27,    28,    -1,    30,    -1,    32,    -1,    34,    35,    36,
      -1,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,   124,   125,   126,
     127,    -1,    -1,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       9,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,   124,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
     125,   126,   127,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,    -1,    -1,    -1,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
     119,   120,   121,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,    -1,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,   186,   187,   188,
      -1,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    -1,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,    -1,    -1,    -1,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,
      -1,    -1,    -1,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,   186,
     187,   188,    -1,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,    -1,
     125,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,    -1,    -1,    -1,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,   119,   120,   121,    -1,    -1,    -1,   125,    -1,    -1,
      -1,    -1,   130,   131,   132,   133,   134,    -1,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,    -1,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,    -1,   186,   187,
     188,    -1,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    -1,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,    -1,    -1,    -1,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,   120,
     121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,   186,   187,   188,    -1,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    -1,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,    -1,
      -1,    -1,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,   124,
     125,    -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
      -1,   186,   187,   188,    -1,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    -1,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,    -1,    -1,    -1,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,
      -1,    -1,   125,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,   186,   187,   188,    -1,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,    -1,    -1,    -1,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,   119,
     120,   121,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
     130,   131,   132,   133,   134,    -1,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,    -1,   149,
      -1,   151,    -1,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,    -1,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,   186,   187,   188,    -1,
      -1,   191,    -1,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,    -1,   247,    -1,
      -1,   250,   251,   252,   253,    -1,   255,    -1,    -1,   258,
      -1,    -1,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    -1,    -1,   272,   273,   274,   247,    -1,    -1,   250,
     251,   252,   253,    -1,   255,    -1,    -1,   258,    -1,    -1,
     261,   262,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,   272,   273,   274,   247,    -1,    -1,   250,   251,   252,
     253,    -1,   255,   312,    -1,   258,   315,   316,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    -1,    -1,   272,
     273,   274,   247,    -1,    -1,   250,   251,   252,   253,    -1,
     255,   312,    -1,   258,   315,   316,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    -1,    -1,   272,   273,   274,
     247,    -1,    -1,   250,   251,   252,   253,    -1,   255,   312,
      -1,   258,   315,   316,   261,   262,   263,   264,   265,   266,
     267,   268,   269,    -1,    -1,   272,   273,   274,   247,    -1,
      -1,   250,   251,   252,   253,    -1,   255,   312,    -1,   258,
     315,   316,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    -1,    -1,   272,   273,   274,   247,    -1,    -1,   250,
     251,   252,   253,    -1,   255,   312,    -1,   258,   315,   316,
     261,   262,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,   272,   273,   274,   247,    -1,    -1,   250,   251,   252,
     253,    -1,   255,   312,    -1,   258,   315,   316,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    -1,    -1,   272,
     273,   274,   247,    -1,    -1,   250,   251,   252,   253,    -1,
     255,   312,    -1,   258,   315,   316,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    -1,    -1,   272,   273,   274,
     247,    -1,    -1,   250,   251,   252,   253,    -1,   255,   312,
      -1,   258,   315,   316,   261,   262,   263,   264,   265,   266,
     267,   268,   269,    -1,    -1,   272,   273,   274,   247,    -1,
      -1,   250,   251,   252,   253,    -1,   255,   312,    -1,   258,
     315,   316,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    -1,    -1,   272,   273,   274,   247,    -1,    -1,   250,
     251,   252,   253,    -1,   255,   312,    -1,   258,   315,   316,
     261,   262,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,   272,   273,   274,   247,    -1,    -1,   250,   251,   252,
     253,    -1,   255,   312,    -1,   258,   315,   316,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    -1,    -1,   272,
     273,   274,   247,    -1,    -1,   250,   251,   252,   253,    -1,
     255,   312,    -1,   258,   315,   316,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    -1,    -1,   272,   273,   274,
     247,    -1,    -1,   250,   251,   252,   253,    -1,   255,   312,
      -1,   258,   315,   316,   261,   262,   263,   264,   265,   266,
     267,   268,   269,    -1,    -1,   272,   273,   274,   247,    -1,
      -1,   250,   251,   252,   253,    -1,   255,   312,    -1,   258,
     315,   316,   261,   262,   263,   264,   265,   266,   267,   268,
     269,    -1,    -1,   272,   273,   274,   247,    -1,    -1,   250,
     251,   252,   253,    -1,   255,   312,    -1,   258,   315,   316,
     261,   262,   263,   264,   265,   266,   267,   268,   269,    -1,
      -1,   272,   273,   274,   247,    -1,    -1,   250,   251,   252,
     253,    -1,   255,   312,    -1,   258,   315,   316,   261,   262,
     263,   264,   265,   266,   267,   268,   269,    -1,    -1,   272,
     273,   274,   247,    -1,    -1,   250,   251,   252,   253,    -1,
     255,   312,    -1,   258,   315,   316,   261,   262,   263,   264,
     265,   266,   267,   268,   269,    -1,    -1,   272,   273,   274,
     247,    -1,    -1,   250,   251,   252,   253,    -1,   255,   312,
      -1,   258,   315,   316,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   247,    -1,   272,   273,   274,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   312,    -1,    -1,
     315,   316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,   279,   280,   281,   282,   283,
     284,   285,    -1,    -1,    -1,   312,    -1,    -1,   315,   316,
     294,   295,   296,   297,   298,   299,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,   310,   311
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,   324,     9,    11,
      20,    24,    27,    28,    30,    32,    34,    35,    36,    38,
      39,    40,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   107,   108,   109,   110,   111,   112,   113,
     119,   120,   121,   124,   125,   126,   127,   130,   131,   132,
     133,   134,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     186,   187,   188,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     461,   462,   463,   464,   465,   466,   468,   473,   484,   487,
     491,   492,   493,   494,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     513,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   535,   536,   537,   538,   539,   542,   543,   544,   555,
     557,   559,   560,   561,   564,   566,   567,   568,   578,   579,
     580,   581,   582,   583,   584,   586,   588,   590,   631,   632,
     633,   634,   635,   636,   637,   640,   641,   642,   643,   645,
     652,   653,   657,   658,   659,   660,   666,   667,   185,   189,
     409,   410,   411,   412,   423,   428,   414,   415,   416,   417,
     423,   428,   418,   419,   420,   421,   423,   428,   422,   423,
     426,   427,   428,   429,   248,   312,   325,   326,   348,     0,
      55,    56,    57,    58,    59,    60,    61,    62,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     102,   119,   120,   131,   133,   145,   146,   148,   152,   166,
     172,   190,   192,   217,   220,   226,   228,   236,   237,   534,
     666,   667,    55,    56,    59,    62,   190,   526,   121,   122,
     545,   128,   106,   556,   515,   104,   547,   506,   506,    41,
     462,    19,    40,    48,   123,   565,    40,    48,    40,    40,
      40,    48,   123,   569,    40,    40,    40,    48,    19,    19,
      19,    19,    19,    19,    19,    19,    19,    19,    19,    48,
       9,   638,   639,    48,    48,     9,   469,   470,     9,   193,
     474,   475,     9,   485,   486,   485,    40,    40,    48,    67,
      68,    19,    40,    48,   123,   562,    40,   454,    58,   103,
      58,   225,    58,    58,   225,   233,   238,    33,   130,   131,
     133,   134,   135,   137,   138,   466,   467,   476,   477,   478,
     155,   156,    13,    14,    15,    16,    17,    18,    24,    37,
     107,   108,   109,   110,   111,   112,   169,   194,    34,    35,
     160,    11,    69,   161,   162,    12,   163,   164,   165,   157,
     168,   159,   167,    48,   511,   515,    30,    36,    21,    21,
     526,   526,    21,    40,   463,   463,    40,    51,   175,   186,
     424,   425,   172,   179,   187,   413,   431,   433,   434,   435,
     436,   438,   439,   440,   443,   444,   445,   448,   449,   451,
     452,   461,   646,   410,   411,   412,   179,   413,   431,   433,
     435,   436,   437,   449,   452,   461,   646,   415,   416,   417,
     179,   430,   431,   433,   434,   435,   436,   438,   439,   440,
     443,   444,   449,   451,   452,   461,   630,   646,   419,   420,
     421,   426,   427,   429,   179,   430,   431,   433,   435,   436,
     437,   449,   452,   461,   646,   327,   349,   546,   104,   105,
     558,    29,   666,    41,    11,    41,   585,   592,   645,   462,
      48,   563,    41,   462,    41,    61,   190,   588,   590,    41,
      41,   124,   644,   666,   462,    48,   570,   587,   592,   591,
     593,   645,    41,   462,   462,   534,    33,   218,   462,   462,
     534,    33,   534,     9,    33,   534,    33,   147,   147,   462,
     462,   462,    48,    48,    11,    41,   589,   593,   462,   563,
       9,    41,   458,   459,   151,   573,   463,   158,   463,   666,
     463,   463,   463,   463,     9,   136,   137,   493,   494,   496,
     496,   496,   496,   496,   496,   495,   496,   496,   496,   496,
     496,   496,   496,   496,    62,   499,   499,   498,   500,   500,
     500,   500,   501,   501,   502,   502,   158,   151,   151,   151,
      49,   462,   516,   516,   462,   462,   462,    23,    41,   463,
     540,   541,   151,   221,   222,   229,    41,   540,    52,   124,
     124,    50,   425,   432,   432,   644,    64,    66,   125,   172,
     180,   181,   182,   183,   184,   233,   455,   188,   189,   432,
     432,   432,   432,   432,   432,   432,   432,   179,   187,    65,
     432,   432,   432,   432,   432,   432,   432,   432,   432,   179,
     223,   432,   432,   432,   432,   432,   432,   432,   432,   179,
     179,   432,   432,   432,   432,   432,   432,   432,   432,   432,
     277,   286,   328,   313,   314,   351,   104,   547,   105,   104,
     129,   512,    33,    41,    49,    49,   462,    49,    41,    41,
      41,    41,    49,    49,   462,    41,    41,    49,    49,    10,
     639,   463,    49,    49,   573,   470,   573,   534,   475,   573,
     486,   463,   463,    41,    41,    49,   462,   462,    33,    41,
      49,   534,    33,    41,    40,    63,   173,   192,   574,   576,
     577,   578,   645,   661,   662,   663,   665,    48,   460,   224,
      58,   151,   224,   224,   239,   534,   463,   479,   480,   481,
     136,   496,    40,    48,   242,   510,   531,   596,   599,   600,
     601,   602,   603,   604,   605,   606,   574,   574,   571,   577,
     571,    49,    22,    22,    22,    33,    41,   219,   227,   463,
     463,   463,    41,   432,    37,   170,   171,   124,   595,     9,
     644,   170,   171,   119,   120,   137,   144,   190,   191,   192,
     453,   170,   176,   441,   666,   235,   239,   649,   230,   243,
     244,   245,   246,   453,   456,   457,   172,   182,   447,   595,
     172,   595,    83,   613,    67,    68,   101,   247,   249,   256,
     257,   262,   275,   276,   329,   330,   333,   334,   338,   339,
     340,   341,   342,   343,   346,   347,   350,   247,   250,   251,
     252,   253,   255,   258,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   272,   273,   274,   315,   316,   348,   352,
     353,   354,   355,   356,   357,   358,   361,   362,   366,   367,
     368,   369,   370,   375,   376,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   396,   397,   398,   121,   122,    25,    42,   129,
     594,   645,    49,    49,   463,   130,   113,   471,    10,    10,
     132,   149,   488,   490,   153,    49,    49,   594,   573,   459,
     576,    40,    40,    40,    11,    23,    34,   575,   462,   463,
     463,   463,    40,    40,   317,   319,   654,   666,    33,   139,
     140,   482,   479,   596,   462,   603,    48,   207,   208,   209,
     607,    89,   629,   240,   598,   241,    82,   613,   198,   608,
      23,   572,   541,   229,   229,   595,   534,    37,   141,   595,
     172,   172,    33,   124,   666,   121,   317,   318,   650,   651,
     234,   667,   644,   190,   595,   113,   446,   644,   446,    84,
      87,    90,    91,    92,    93,   150,   184,   202,   203,   206,
     614,   615,   616,   617,   618,   621,   626,   627,   628,    83,
     287,   288,   278,   279,   300,   301,   303,   335,   279,   291,
     301,   335,   279,   289,   290,   301,   302,   351,   279,   301,
     302,   351,   247,   277,   279,   280,   281,   282,   283,   284,
     285,   294,   295,   296,   297,   298,   299,   309,   310,   311,
     247,   114,   460,   356,   302,   259,   371,   372,   373,   304,
     302,   305,   351,   278,   302,   360,   279,   363,   247,   351,
     270,   302,   307,   308,   377,   279,   301,   302,   351,   302,
     351,   279,   302,   351,   351,   279,   302,   305,   306,   351,
     279,   302,   351,   279,   306,   351,   247,   292,   302,   292,
     293,   351,   302,   351,   547,   547,   554,    41,   463,     9,
     193,   472,   463,   463,   463,     9,   574,   182,   489,   490,
     463,    23,    41,    41,    41,    41,    11,    41,   574,   664,
      49,   224,     9,   655,   656,   655,   224,   480,   141,   483,
      41,    49,    49,   596,    96,   212,    95,   600,    94,   113,
     119,   195,   196,   197,   200,   201,   597,   610,   601,   132,
     118,   210,   211,   609,   463,   463,   432,   573,   595,   142,
     143,   595,   595,   177,   178,   442,    40,   460,   648,   649,
      33,    20,    30,    36,    55,    70,   231,   232,   399,   400,
     401,   402,   405,   406,   407,   526,   454,    37,   172,   446,
     595,    33,    37,    90,    91,    92,    93,    85,    86,    40,
     113,   182,   620,   212,    85,    86,   666,   643,   614,   288,
     287,   331,   399,   574,    52,    53,    54,   332,   256,   336,
     337,   351,   574,   351,   574,   462,   247,   574,   462,   247,
      62,   121,   320,   321,   322,   344,   121,   345,   345,   247,
     462,   304,   260,   372,   374,   351,   462,   462,   350,   247,
     121,   317,   319,   359,   462,   247,   254,   364,   365,   247,
     364,   247,   351,   462,   350,   350,   271,   378,   574,   462,
     247,   462,   247,   350,   462,   247,   247,   350,   462,   350,
     350,   247,   350,   462,   247,   350,   350,   247,   462,   247,
     462,   247,    43,    43,    31,   116,   117,   460,   543,   534,
       9,   132,   534,   130,     9,   130,   154,    41,    41,   151,
      33,    41,   463,   534,    33,    41,    41,    40,   142,   143,
     144,   607,    49,   500,    95,    98,    99,   497,   498,   609,
     215,   216,   612,   612,   602,   100,   143,   498,   498,   199,
      10,   174,   450,    41,   458,   151,   647,   234,   651,   526,
      19,    19,    40,    40,    12,   460,   648,   406,    30,    36,
      30,    36,   408,   151,   174,   460,   595,   595,   212,   182,
     620,   595,    40,   113,   182,   623,   124,   121,   317,   318,
     279,   289,   290,   301,   302,   351,   247,   247,   121,   462,
     351,   247,   247,   279,   289,   301,   302,   351,   247,   351,
     247,   351,   547,   547,   545,   534,   463,   151,   463,   534,
     463,   463,   574,   574,   151,   573,   656,   655,   595,   212,
     213,   214,   611,   611,   498,   498,   160,   463,    41,   574,
     460,   399,   526,   526,   403,   533,   643,   643,   400,   647,
     406,   406,   406,   406,    21,   574,   446,   619,   619,   204,
     609,   624,   643,   595,   622,   622,   574,   462,   247,   247,
     574,   462,   247,   247,    44,    46,   548,    44,    46,   549,
     547,   574,   130,   574,    10,    41,   498,   460,   648,    41,
      33,   460,   462,   174,   460,    33,    41,    41,   643,   205,
      33,    41,   163,   165,   625,   550,   552,   551,   553,    26,
     130,   463,   463,   647,   404,   531,   533,    22,   620,   609,
     643,   623,   623,    45,   114,   460,    47,   115,   460,    45,
     114,   460,    47,   115,   460,   463,   460,    41,   205
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
        case 8:

/* Line 1455 of yacc.c  */
#line 770 "../src/parser/XQParser.y"
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

    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    args.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQVariable(XQillaFunction::XMLChFunctionURI, var_name, MEMMGR)));
    FunctionExists *exists = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionExists(args, MEMMGR));

    QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQIf(exists, call, apply, MEMMGR)));
  }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 800 "../src/parser/XQParser.y"
    {
  }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 803 "../src/parser/XQParser.y"
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

    XQUserFunction *func = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, pattern, 0, (yyvsp[(1) - (1)].astNode), 0, MEMMGR));
    func->setModeList(modelist);

    QP->_query->addFunction(func);
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 826 "../src/parser/XQParser.y"
    {
    // TBD Check the value - jpcs
  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 830 "../src/parser/XQParser.y"
    {
    // TBD implement exclude-result-prefixes - jpcs
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 848 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0 && (yyvsp[(1) - (4)].functDecl)->getPattern() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:template declaration does not have either a {}name or {}match attribute, or both [err:XTSE0500]");
    }

    if((yyvsp[(1) - (4)].functDecl)->getPattern() != 0 && (yyvsp[(1) - (4)].functDecl)->getModeList() == 0) {
      XQUserFunction::ModeList *modelist = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
      modelist->push_back(WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
      (yyvsp[(1) - (4)].functDecl)->setModeList(modelist);
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 867 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, MEMMGR));
  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 871 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setPattern((yyvsp[(3) - (3)].itemList));
  }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 876 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 883 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    // TBD priority - jpcs
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 888 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setModeList((yyvsp[(3) - (3)].modeList));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 893 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 901 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 905 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(uri, name)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 911 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 916 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].modeList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL)));
    (yyval.modeList) = (yyvsp[(1) - (2)].modeList);
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 926 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (4)].functDecl)->getName() == 0) {
      yyerror((yylsp[(1) - (4)]), "The xsl:function declaration does not have a {}name attribute");
    }

    (yyvsp[(1) - (4)].functDecl)->setArgumentSpecs((yyvsp[(2) - (4)].argSpecs));
    (yyvsp[(1) - (4)].functDecl)->setFunctionBody((yyvsp[(3) - (4)].parenExpr));
    QP->_query->addFunction((yyvsp[(1) - (4)].functDecl));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 939 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction(0, 0, 0, 0, 0, true, MEMMGR));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 943 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.functDecl)->setURI(uri);
    (yyval.functDecl)->setName(name);
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 950 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (3)].functDecl);
    (yyval.functDecl)->setReturnType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 955 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = (yyvsp[(1) - (2)].functDecl);
    // TBD override - jpcs
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 963 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 967 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(1) - (2)].argSpecs);
    (yyval.argSpecs)->push_back((yyvsp[(2) - (2)].argSpec));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 975 "../src/parser/XQParser.y"
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

  case 43:

/* Line 1455 of yacc.c  */
#line 1002 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::ArgumentSpec(0, 0, MEMMGR));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1006 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.argSpec)->setURI(uri);
    (yyval.argSpec)->setName(name);
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 1013 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    // TBD default parameter values - jpcs
/*     $$->value = PRESERVE_NS(@2, $3); */
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1019 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (3)].argSpec);
    (yyval.argSpec)->setType((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 1024 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD required - jpcs
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 1029 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = (yyvsp[(1) - (2)].argSpec);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1038 "../src/parser/XQParser.y"
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

  case 50:

/* Line 1455 of yacc.c  */
#line 1062 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR, /*isParam*/true));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1066 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 1073 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 1078 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 1083 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    (yyval.globalVar)->setRequired((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 1088 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
    if((yyvsp[(2) - (2)].boolean)) {
      yyerror((yylsp[(2) - (2)]), "An xsl:param declaration cannot have a {}tunnel attribute with a value of \"yes\"");
    }
  }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 1099 "../src/parser/XQParser.y"
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

  case 57:

/* Line 1455 of yacc.c  */
#line 1117 "../src/parser/XQParser.y"
    {
    (yyval.globalVar) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQGlobalVariable(0, 0, 0, MEMMGR));
  }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1121 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].globalVar)->setVariableURI(uri);
    (yyvsp[(1) - (2)].globalVar)->setVariableLocalName(name);
    (yyval.globalVar) = (yyvsp[(1) - (2)].globalVar);
  }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1128 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setVariableExpr(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1133 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].globalVar)->setSequenceType((yyvsp[(3) - (3)].sequenceType));
    (yyval.globalVar) = (yyvsp[(1) - (3)].globalVar);
  }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1141 "../src/parser/XQParser.y"
    {
    // TBD Add the output to the static context - jpcs
  }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1166 "../src/parser/XQParser.y"
    {
  }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1169 "../src/parser/XQParser.y"
    {
  }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1172 "../src/parser/XQParser.y"
    {
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1175 "../src/parser/XQParser.y"
    {
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 1178 "../src/parser/XQParser.y"
    {
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 1181 "../src/parser/XQParser.y"
    {
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 1184 "../src/parser/XQParser.y"
    {
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 1187 "../src/parser/XQParser.y"
    {
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 1190 "../src/parser/XQParser.y"
    {
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1193 "../src/parser/XQParser.y"
    {
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1196 "../src/parser/XQParser.y"
    {
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1199 "../src/parser/XQParser.y"
    {
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1202 "../src/parser/XQParser.y"
    {
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1205 "../src/parser/XQParser.y"
    {
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1208 "../src/parser/XQParser.y"
    {
  }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1211 "../src/parser/XQParser.y"
    {
  }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1214 "../src/parser/XQParser.y"
    {
  }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1217 "../src/parser/XQParser.y"
    {
  }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1227 "../src/parser/XQParser.y"
    {
//     $$ = $1;
    const XMLCh *p = (yyvsp[(1) - (1)].str);
    while(*p && *p != ':') ++p;
    if(*p == 0) {
      yyerror((yylsp[(1) - (1)]), "The method for the xsl:output declaration does not have a prefix");
    }
  }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1239 "../src/parser/XQParser.y"
    {
  }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1242 "../src/parser/XQParser.y"
    {
  }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1250 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (1)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, 0, &loc);
  }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1255 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (2)].str), 0, &loc);
  }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1260 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (2)].str));

    LOCATION((yylsp[(1) - (2)]), loc);
    CONTEXT->addSchemaLocation(XMLUni::fgZeroLenString, &schemaLoc, &loc);
  }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1268 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(3) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(2) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1276 "../src/parser/XQParser.y"
    {
    VectorOfStrings schemaLoc(XQillaAllocator<const XMLCh*>(MEMMGR));
    schemaLoc.push_back((yyvsp[(2) - (3)].str));

    LOCATION((yylsp[(1) - (3)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (3)].str), &schemaLoc, &loc);
  }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1287 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    *children = (yyvsp[(3) - (4)].parenExpr)->getChildren();

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQElementConstructor((yyvsp[(1) - (4)].astNode), (yyvsp[(2) - (4)].itemList), children, MEMMGR));
  }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1297 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1301 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);

    ASTNode *attrItem = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1308 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->insert((yyval.itemList)->begin(), (yyvsp[(2) - (2)].astNode));
  }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1317 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1321 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].astNode)));
  }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1326 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1336 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1340 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (2)].astNode), MEMMGR)));
  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1345 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1350 "../src/parser/XQParser.y"
    {
    (yyval.parenExpr) = (yyvsp[(1) - (2)].parenExpr);
    (yyval.parenExpr)->addItem((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1379 "../src/parser/XQParser.y"
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

  case 123:

/* Line 1455 of yacc.c  */
#line 1397 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTextConstructor(0, MEMMGR));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1401 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQTextConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1406 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQTextConstructor*)$$)->setValue(PRESERVE_NS(@2, $3)); */
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1415 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTextConstructor((yyvsp[(2) - (3)].astNode), MEMMGR));
  }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1424 "../src/parser/XQParser.y"
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

  case 130:

/* Line 1455 of yacc.c  */
#line 1444 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQApplyTemplates(0, 0, 0, MEMMGR));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1448 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQApplyTemplates*)(yyval.astNode))->setMode((yyvsp[(3) - (3)].mode));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1461 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].str));
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(uri, name));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1466 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1470 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1477 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1481 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1489 "../src/parser/XQParser.y"
    {
    XQCallTemplate *call = (XQCallTemplate*)(yyvsp[(1) - (3)].astNode);
    call->setArguments((yyvsp[(2) - (3)].templateArgs));
    (yyval.astNode) = call;

    if(call->getName() == 0) {
      yyerror((yylsp[(1) - (3)]), "The xsl:call-template instruction does not have a {}name attribute");
    }
  }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1502 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCallTemplate((const XMLCh*)0, 0, MEMMGR));
  }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1506 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    ((XQCallTemplate*)(yyval.astNode))->setURI(uri);
    ((XQCallTemplate*)(yyval.astNode))->setName(name);
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1516 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1520 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (2)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(2) - (2)].templateArg));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1528 "../src/parser/XQParser.y"
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

  case 144:

/* Line 1455 of yacc.c  */
#line 1546 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTemplateArgument(0, 0, MEMMGR));
  }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1550 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyval.templateArg)->uri = uri;
    (yyval.templateArg)->name = name;
  }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1557 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->value = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1562 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (3)].templateArg);
    (yyval.templateArg)->seqType = (yyvsp[(3) - (3)].sequenceType);
  }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1567 "../src/parser/XQParser.y"
    {
    (yyval.templateArg) = (yyvsp[(1) - (2)].templateArg);
    // TBD tunnel parameters - jpcs
  }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1581 "../src/parser/XQParser.y"
    {
    // TBD xsl:fallback - jpcs
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1589 "../src/parser/XQParser.y"
    {
    ASTNode *empty = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQSequence(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf((yyvsp[(1) - (3)].astNode), (yyvsp[(2) - (3)].parenExpr), empty, MEMMGR));
  }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1597 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode));
  }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1604 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(2) - (4)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = (yyvsp[(2) - (4)].astNode);
  }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1618 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1622 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (2)].astNode);
    while(iff->getWhenFalse() != 0) {
      iff = (XQIf*)iff->getWhenFalse();
    }

    iff->setWhenFalse((yyvsp[(2) - (2)].astNode));

    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
  }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1636 "../src/parser/XQParser.y"
    {
    XQIf *iff = (XQIf*)(yyvsp[(1) - (3)].astNode);
    iff->setWhenTrue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
  }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1645 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQIf(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)), 0, 0, MEMMGR));
  }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1652 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1656 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1663 "../src/parser/XQParser.y"
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

  case 161:

/* Line 1455 of yacc.c  */
#line 1698 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQAnalyzeString(MEMMGR));
  }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1702 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQAnalyzeString*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1707 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setRegex(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 1713 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAnalyzeString*)(yyval.astNode))->setFlags(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 1722 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1726 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1733 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = 0;
  }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1737 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].parenExpr);
  }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1744 "../src/parser/XQParser.y"
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

  case 170:

/* Line 1455 of yacc.c  */
#line 1762 "../src/parser/XQParser.y"
    {
    (yyval.letTuple) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) LetTuple(WRAP((yylsp[(1) - (1)]), new (MEMMGR) ContextTuple(MEMMGR)), 0, 0, MEMMGR));
  }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1766 "../src/parser/XQParser.y"
    {
    RESOLVE_QNAME((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].str));
    (yyvsp[(1) - (2)].letTuple)->setVarURI(uri);
    (yyvsp[(1) - (2)].letTuple)->setVarName(name);
    (yyval.letTuple) = (yyvsp[(1) - (2)].letTuple);
  }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1773 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->setExpression((yyvsp[(3) - (3)].astNode));
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1778 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].letTuple)->seqType = (yyvsp[(3) - (3)].sequenceType);
    (yyval.letTuple) = (yyvsp[(1) - (3)].letTuple);
  }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1786 "../src/parser/XQParser.y"
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

  case 175:

/* Line 1455 of yacc.c  */
#line 1804 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQCommentConstructor(0, MEMMGR, /*xslt*/true));
  }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1808 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCommentConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1816 "../src/parser/XQParser.y"
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

  case 178:

/* Line 1455 of yacc.c  */
#line 1838 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQPIConstructor(0, 0, MEMMGR, /*xslt*/true));
  }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1842 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQPIConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1849 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQPIConstructor*)(yyval.astNode))->setValue(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1857 "../src/parser/XQParser.y"
    {
    XQDocumentConstructor *doc = (XQDocumentConstructor*)(yyvsp[(1) - (3)].astNode);
    doc->setValue((yyvsp[(2) - (3)].parenExpr));
    (yyval.astNode) = doc;
  }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1866 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentConstructor(0, MEMMGR));
  }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1874 "../src/parser/XQParser.y"
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

  case 184:

/* Line 1455 of yacc.c  */
#line 1911 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQAttributeConstructor(0, 0, MEMMGR));
  }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1915 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1922 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQAttributeConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1929 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQAttributeConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1938 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    // TBD separator - jpcs
/*     ((XQAttributeConstructor*)$$)->setChildren(children); */
  }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1947 "../src/parser/XQParser.y"
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

  case 190:

/* Line 1455 of yacc.c  */
#line 1974 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQNamespaceConstructor(0, 0, MEMMGR));
  }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQNamespaceConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1985 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    VectorOfASTNodes *children = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    children->push_back(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));

    ((XQNamespaceConstructor*)(yyval.astNode))->setChildren(children);
  }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1997 "../src/parser/XQParser.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 2023 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQElementConstructor(0, 0, 0, MEMMGR));
  }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 2027 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->setName(PRESERVE_NS((yylsp[(2) - (3)]), content));
  }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 2034 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);

    ASTNode *content = WRAP((yylsp[(3) - (3)]), new (MEMMGR) XQSimpleContent((yyvsp[(3) - (3)].itemList), MEMMGR));
    ((XQElementConstructor*)(yyval.astNode))->namespaceExpr = PRESERVE_NS((yylsp[(2) - (3)]), content);
  }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 2044 "../src/parser/XQParser.y"
    {
    XQCopyOf *as = (XQCopyOf*)(yyval.astNode);
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);

    if(as->getExpression() == 0) {
      yyerror((yylsp[(1) - (2)]), "The xsl:copy-of instruction does not have a {}select attribute");
    }
  }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 2056 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopyOf(MEMMGR));
  }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 2060 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setExpression(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 2065 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopyOf*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2074 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    XQCopy *as = (XQCopy*)(yyval.astNode);

    XQContextItem *ci = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQContextItem(MEMMGR));
    as->setExpression(ci);

    as->setChildren((yyvsp[(2) - (3)].parenExpr)->getChildren());
  }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 2087 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yyloc), new (MEMMGR) XQCopy(MEMMGR));
  }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 2091 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setCopyNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2096 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (2)].astNode);
    ((XQCopy*)(yyval.astNode))->setInheritNamespaces((yyvsp[(2) - (2)].boolean));
  }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2105 "../src/parser/XQParser.y"
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

  case 206:

/* Line 1455 of yacc.c  */
#line 2119 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQMap(0, 0, MEMMGR));
  }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 2123 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    ((XQMap*)(yyval.astNode))->setArg1(PRESERVE_NS((yylsp[(2) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2136 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 2141 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back(PRESERVE_NS((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].astNode)));
  }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2153 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2157 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::SELF, nt, MEMMGR));
  }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2165 "../src/parser/XQParser.y"
    {
    // . intersect id("a")

    VectorOfASTNodes oargs(XQillaAllocator<ASTNode*>(MEMMGR));
    oargs.push_back(WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR)));
    oargs.push_back((yyvsp[(1) - (1)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) Intersect(oargs, MEMMGR));
  }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2178 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, nt, MEMMGR));
  }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2186 "../src/parser/XQParser.y"
    {
    NodeTest *nt = new (MEMMGR) NodeTest();
    nt->setNodeType(Node::document_string);
    nt->setNameWildcard();
    nt->setNamespaceWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::ANCESTOR, nt, MEMMGR));
  }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2199 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
    fargs.push_back((yyvsp[(3) - (4)].astNode));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) FunctionId(fargs, MEMMGR));
  }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 2206 "../src/parser/XQParser.y"
    {
//     VectorOfASTNodes fargs(XQillaAllocator<ASTNode*>(MEMMGR));
//     fargs.push_back($3);
//     fargs.push_back($5);

//     $$ = WRAP(@1, new (MEMMGR) FunctionKey(fargs, MEMMGR));

    // TBD key() - jpcs
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2245 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(1) - (1)].astNode);
  }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2249 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQPredicate((yyvsp[(2) - (2)].astNode), (yyvsp[(1) - (2)].astNode), MEMMGR));
  }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2253 "../src/parser/XQParser.y"
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

  case 224:

/* Line 1455 of yacc.c  */
#line 2271 "../src/parser/XQParser.y"
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

  case 225:

/* Line 1455 of yacc.c  */
#line 2289 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::PARENT);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2299 "../src/parser/XQParser.y"
    {
    ASTNode *step = (yyvsp[(1) - (3)].astNode);
    while(step->getType() == ASTNode::PREDICATE)
      step = (ASTNode*)((XQPredicate*)step)->getExpression();

    ((XQStep*)step)->setAxis(XQStep::ANCESTOR);

    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (3)].astNode), (yyvsp[(1) - (3)].astNode), MEMMGR));
  }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 2313 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = XQPredicate::addPredicates(WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::SELF, (yyvsp[(1) - (2)].nodeTest), MEMMGR)), (yyvsp[(2) - (2)].predicates));
  }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 2321 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(1) - (1)].nodeTest)->isNodeTypeSet())
      (yyvsp[(1) - (1)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(1) - (1)].nodeTest);
  }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2327 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::element_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2333 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(3) - (3)].nodeTest)->isNodeTypeSet())
      (yyvsp[(3) - (3)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(3) - (3)].nodeTest);
  }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2339 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet())
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    (yyval.nodeTest) = (yyvsp[(2) - (2)].nodeTest);
  }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2350 "../src/parser/XQParser.y"
    {
    (yyval.predicates) = new (MEMMGR) VectorOfPredicates(MEMMGR);
  }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2354 "../src/parser/XQParser.y"
    {
    XQPredicate *pred = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(3) - (4)].astNode), MEMMGR));
    (yyvsp[(1) - (4)].predicates)->push_back(pred);
    (yyval.predicates) = (yyvsp[(1) - (4)].predicates); 
  }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2384 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2388 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2392 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2396 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2400 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2404 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2410 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2416 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 2460 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2464 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 2468 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2472 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 2476 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2480 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2486 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2492 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2496 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2523 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2527 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2531 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2535 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2539 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2543 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2549 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2555 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2581 "../src/parser/XQParser.y"
    {
    // TBD Set the language correctly on the context - jpcs
    if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_0))
      QP->_lexer->setVersion11(false);
    else if(XPath2Utils::equals((yyvsp[(2) - (2)].str),sz1_1)) {
      if(!QP->_lexer->isVersion11()) {
        yyerror((yylsp[(1) - (2)]), "This XQuery processor is not configured to support XQuery 1.1 [err:XQST0031]");
      }
      QP->_lexer->setVersion11(true);
    }
    else
      yyerror((yylsp[(1) - (2)]), "This XQuery processor only supports version 1.0 and 1.1 [err:XQST0031]");
  }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2598 "../src/parser/XQParser.y"
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

  case 298:

/* Line 1455 of yacc.c  */
#line 2622 "../src/parser/XQParser.y"
    {
    if(*(yyvsp[(5) - (6)].str) == 0)
      yyerror((yylsp[(5) - (6)]), "The literal that specifies the namespace of a module must not be of zero length [err:XQST0088]");
    QP->_query->setIsLibraryModule();
    QP->_query->setModuleTargetNamespace((yyvsp[(5) - (6)].str));
    SET_NAMESPACE((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].str), (yyvsp[(5) - (6)].str));
  }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2636 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a setter");
  }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2640 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an import");
  }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2644 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a namespace");
  }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2648 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "a default namespace");
  }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2652 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2656 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2662 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
    XQUserFunction* decl=(yyvsp[(2) - (3)].functDecl);
    QP->_query->addFunction(decl);
  }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2668 "../src/parser/XQParser.y"
    {
    QP->_flags.set(BIT_DECLARE_SECOND_STEP);
  }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2672 "../src/parser/XQParser.y"
    {
    CHECK_SECOND_STEP((yylsp[(2) - (3)]), "an ftoption declaration");
  }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2704 "../src/parser/XQParser.y"
    {
    SET_NAMESPACE((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].str), (yyvsp[(5) - (5)].str));
  }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2712 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(true);
  }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 2717 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BOUNDARY_SPECIFIED, "boundary space", "XQST0068");
    CONTEXT->setPreserveBoundarySpace(false);
  }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 2726 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTELEMENTNAMESPACE_SPECIFIED, "default element namespace", "XQST0066");
    CONTEXT->setDefaultElementAndTypeNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 2731 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_DEFAULTFUNCTIONNAMESPACE_SPECIFIED, "default function namespace", "XQST0066");
    CONTEXT->setDefaultFuncNS((yyvsp[(5) - (5)].str));
  }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 2740 "../src/parser/XQParser.y"
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

  case 326:

/* Line 1455 of yacc.c  */
#line 2800 "../src/parser/XQParser.y"
    {
    // TBD FTOptionDecl
  }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2808 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_ORDERED);
  }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2813 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_ORDERING_SPECIFIED, "ordering mode", "XQST0065");
    CONTEXT->setNodeSetOrdering(StaticContext::ORDERING_UNORDERED);
  }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2822 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_GREATEST);
  }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2827 "../src/parser/XQParser.y"
    { 
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_EMPTYORDERING_SPECIFIED, "empty ordering mode", "XQST0069");
    CONTEXT->setDefaultFLWOROrderingMode(StaticContext::FLWOR_ORDER_EMPTY_LEAST);
  }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2836 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (5)]), BIT_COPYNAMESPACE_SPECIFIED, "copy namespace", "XQST0055");
    CONTEXT->setPreserveNamespaces((yyvsp[(3) - (5)].boolean));
    CONTEXT->setInheritNamespaces((yyvsp[(5) - (5)].boolean));
  }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2846 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2850 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2858 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = true;
  }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2862 "../src/parser/XQParser.y"
    {
    (yyval.boolean) = false;
  }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2870 "../src/parser/XQParser.y"
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

  case 337:

/* Line 1455 of yacc.c  */
#line 2886 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_BASEURI_SPECIFIED, "base URI", "XQST0032");
    CONTEXT->setBaseURI((yyvsp[(3) - (3)].str));
  }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2895 "../src/parser/XQParser.y"
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

  case 339:

/* Line 1455 of yacc.c  */
#line 2907 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (4)]), loc);
    CONTEXT->addSchemaLocation((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), &loc);
  }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2915 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = NULL;
  }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2919 "../src/parser/XQParser.y"
    {
    (yyval.stringList) = new (MEMMGR) VectorOfStrings(XQillaAllocator<const XMLCh*>(MEMMGR));
    (yyval.stringList)->push_back((yyvsp[(2) - (2)].str));
  }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2924 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].stringList)->push_back((yyvsp[(3) - (3)].str));
    (yyval.stringList) = (yyvsp[(1) - (3)].stringList);
  }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2933 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (3)].str);
  }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2937 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2945 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(6) - (7)].str))==0)
      yyerror((yylsp[(6) - (7)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    SET_NAMESPACE((yylsp[(4) - (7)]), (yyvsp[(4) - (7)].str), (yyvsp[(6) - (7)].str));

    LOCATION((yylsp[(1) - (7)]), loc);
    QP->_query->importModule((yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].stringList), CONTEXT, &loc);
  }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2955 "../src/parser/XQParser.y"
    {
    if(XMLString::stringLen((yyvsp[(3) - (4)].str))==0)
      yyerror((yylsp[(3) - (4)]), "The literal that specifies the target namespace in a module import must not be of zero length [err:XQST0088]");

    LOCATION((yylsp[(1) - (4)]), loc);
    QP->_query->importModule((yyvsp[(3) - (4)].str), (yyvsp[(4) - (4)].stringList), CONTEXT, &loc);
  }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2967 "../src/parser/XQParser.y"
    {
    QP->_query->addVariable(WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQGlobalVariable((yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].sequenceType), (yyvsp[(6) - (6)].astNode), MEMMGR)));
  }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2974 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (2)].astNode);
  }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 2978 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = NULL;
  }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2986 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_PRESERVE);
  }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2991 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_CONSTRUCTION_SPECIFIED, "construction mode", "XQST0067");
    CONTEXT->setConstructionMode(StaticContext::CONSTRUCTION_MODE_STRIP);
  }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 3001 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),WRAP((yylsp[(6) - (6)]), (yyvsp[(6) - (6)].astNode)),NULL, (yyvsp[(2) - (6)].functionOptions), true, MEMMGR));
    }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 3005 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),WRAP((yylsp[(8) - (8)]), (yyvsp[(8) - (8)].astNode)),(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].functionOptions), true, MEMMGR));
    }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 3009 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].argSpecs),NULL,NULL, (yyvsp[(2) - (6)].functionOptions), true, MEMMGR));
    }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 3013 "../src/parser/XQParser.y"
    {
      (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].argSpecs),NULL,(yyvsp[(7) - (8)].sequenceType), (yyvsp[(2) - (8)].functionOptions), true, MEMMGR));
    }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 3022 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = NULL;
  }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 3026 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 3034 "../src/parser/XQParser.y"
    {
    (yyval.functionOptions) = new (MEMMGR) XQUserFunction::Options();
  }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 3038 "../src/parser/XQParser.y"
    {
    switch((yyvsp[(1) - (2)].functionOptions)->privateOption) {
    case XQUserFunction::Options::TRUE:
      yyerror((yylsp[(2) - (2)]), "Function option 'private' already specified [err:XQST0106]");
    case XQUserFunction::Options::FALSE:
      yyerror((yylsp[(2) - (2)]), "Function option 'public' already specified [err:XQST0106]");
    case XQUserFunction::Options::DEFAULT:
      (yyvsp[(1) - (2)].functionOptions)->privateOption = (yyvsp[(2) - (2)].boolean) ? XQUserFunction::Options::TRUE : XQUserFunction::Options::FALSE;
      break;
    }
    (yyval.functionOptions) = (yyvsp[(1) - (2)].functionOptions);
  }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 3051 "../src/parser/XQParser.y"
    {
    switch((yyvsp[(1) - (2)].functionOptions)->nondeterministic) {
    case XQUserFunction::Options::TRUE:
      yyerror((yylsp[(2) - (2)]), "Function option 'nondeterministic' already specified [err:XQST0106]");
    case XQUserFunction::Options::FALSE:
      yyerror((yylsp[(2) - (2)]), "Function option 'deterministic' already specified [err:XQST0106]");
    case XQUserFunction::Options::DEFAULT:
      (yyvsp[(1) - (2)].functionOptions)->nondeterministic = (yyvsp[(2) - (2)].boolean) ? XQUserFunction::Options::TRUE : XQUserFunction::Options::FALSE;
      break;
    }
    (yyval.functionOptions) = (yyvsp[(1) - (2)].functionOptions);
  }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 3064 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (2)].functionOptions)->updating != XQUserFunction::Options::DEFAULT)
      yyerror((yylsp[(2) - (2)]), "Function option 'updating' already specified [err:XPST0003]");
    (yyvsp[(1) - (2)].functionOptions)->updating = XQUserFunction::Options::TRUE;
    (yyval.functionOptions) = (yyvsp[(1) - (2)].functionOptions);
  }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 3073 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 3076 "../src/parser/XQParser.y"
    { (yyval.boolean) = false; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 3076 "../src/parser/XQParser.y"
    { (yyval.boolean) = true; }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 3081 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].argSpecs)->push_back((yyvsp[(3) - (3)].argSpec));
    (yyval.argSpecs) = (yyvsp[(1) - (3)].argSpecs);
  }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 3086 "../src/parser/XQParser.y"
    {
    XQUserFunction::ArgumentSpecs* paramList = new (MEMMGR) XQUserFunction::ArgumentSpecs(XQillaAllocator<XQUserFunction::ArgumentSpec*>(MEMMGR));
    paramList->push_back((yyvsp[(1) - (1)].argSpec));
    (yyval.argSpecs) = paramList;
  }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 3096 "../src/parser/XQParser.y"
    {
    (yyval.argSpec) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQUserFunction::ArgumentSpec((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].sequenceType), MEMMGR));
  }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 3104 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
    }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 3112 "../src/parser/XQParser.y"
    {
    if(QP->_lexer->isUpdate()) {
      QP->_query->setQueryBody(WRAP((yylsp[(1) - (1)]), new (MEMMGR) UApplyUpdates((yyvsp[(1) - (1)].astNode), MEMMGR)));
    }
    else {
      QP->_query->setQueryBody((yyvsp[(1) - (1)].astNode));
    }
  }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 3125 "../src/parser/XQParser.y"
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

  case 387:

/* Line 1455 of yacc.c  */
#line 3163 "../src/parser/XQParser.y"
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

  case 389:

/* Line 1455 of yacc.c  */
#line 3208 "../src/parser/XQParser.y"
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

  case 390:

/* Line 1455 of yacc.c  */
#line 3221 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(2) - (2)].tupleNode), (yyvsp[(1) - (2)].tupleNode));
  }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 3236 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
    }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 3243 "../src/parser/XQParser.y"
    {
      (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
    }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 3251 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (7)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (7)].str), (yyvsp[(4) - (7)].str), WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQTreatAs((yyvsp[(7) - (7)].astNode), (yyvsp[(3) - (7)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 3262 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 3266 "../src/parser/XQParser.y"
    { 
    REJECT_NOT_XQUERY(PositionalVar, (yylsp[(1) - (3)]));

    (yyval.str) = (yyvsp[(3) - (3)].str); 
  }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 3276 "../src/parser/XQParser.y"
    {
    (yyval.str) = NULL;
  }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 3280 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(3) - (3)].str);
  }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 3290 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(2) - (2)].tupleNode);
  }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 3297 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 3305 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(2) - (5)].str), WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 3309 "../src/parser/XQParser.y"
    {
    ASTNode *literal = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  X("0"), AnyAtomicType::DECIMAL,
                  MEMMGR));
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) LetTuple(0, (yyvsp[(3) - (5)].str), literal, MEMMGR));
  }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 3322 "../src/parser/XQParser.y"
    { 
    (yyval.tupleNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) WhereTuple(0, (yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 3330 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) CountTuple(0, (yyvsp[(3) - (3)].str), MEMMGR));
  }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 3338 "../src/parser/XQParser.y"
    {
    ((OrderByTuple*)getLastAncestor((yyvsp[(3) - (3)].tupleNode)))->setUnstable();
    (yyval.tupleNode) = (yyvsp[(3) - (3)].tupleNode);
  }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 3343 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = (yyvsp[(4) - (4)].tupleNode);
  }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 3351 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(1) - (3)].tupleNode), (yyvsp[(3) - (3)].tupleNode));
  }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 3361 "../src/parser/XQParser.y"
    {
    LOCATION((yylsp[(1) - (3)]), loc);
    Collation *collation = CONTEXT->getDefaultCollation(&loc);
    
    (yyval.tupleNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) OrderByTuple(0, (yyvsp[(1) - (3)].astNode), OrderByTuple::STABLE | (yyvsp[(2) - (3)].orderByModifier) | (yyvsp[(3) - (3)].orderByModifier), collation, MEMMGR));
  }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 3368 "../src/parser/XQParser.y"
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

  case 417:

/* Line 1455 of yacc.c  */
#line 3383 "../src/parser/XQParser.y"
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

  case 418:

/* Line 1455 of yacc.c  */
#line 3399 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 3403 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::ASCENDING;
  }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 3407 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::DESCENDING;
  }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 3414 "../src/parser/XQParser.y"
    {
    switch(CONTEXT->getDefaultFLWOROrderingMode()) {
    case StaticContext::FLWOR_ORDER_EMPTY_LEAST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST; break;
    case StaticContext::FLWOR_ORDER_EMPTY_GREATEST:
      (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST; break;
    }
  }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 3423 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_GREATEST;
  }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 3427 "../src/parser/XQParser.y"
    {
    (yyval.orderByModifier) = OrderByTuple::EMPTY_LEAST;
  }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 3436 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::SOME, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 3444 "../src/parser/XQParser.y"
    {
    // Add a ContextTuple at the start
    TupleNode *tmp = setLastAncestor((yyvsp[(2) - (4)].tupleNode), WRAP((yylsp[(1) - (4)]), new (MEMMGR) ContextTuple(MEMMGR)));

    // Add the return expression
    (yyval.astNode) = WRAP((yylsp[(3) - (4)]), new (MEMMGR) XQQuantified(XQQuantified::EVERY, tmp, (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 3455 "../src/parser/XQParser.y"
    {
    (yyval.tupleNode) = setLastAncestor((yyvsp[(3) - (3)].tupleNode), (yyvsp[(1) - (3)].tupleNode));
  }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 3463 "../src/parser/XQParser.y"
    {
    // the SequenceType has been specified for each item of the sequence, but we can only apply to the
    // sequence itself, so allow it to match multiple matches
    (yyvsp[(3) - (5)].sequenceType)->setOccurrence(SequenceType::STAR);
    (yyval.tupleNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) ForTuple(0, (yyvsp[(2) - (5)].str), 0, WRAP((yylsp[(3) - (5)]), new (MEMMGR) XQTreatAs((yyvsp[(5) - (5)].astNode), (yyvsp[(3) - (5)].sequenceType), MEMMGR)), MEMMGR));
  }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 3474 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = new (MEMMGR) XQTypeswitch( WRAP((yylsp[(1) - (6)]), (yyvsp[(3) - (6)].astNode)), (yyvsp[(5) - (6)].caseClauses), (yyvsp[(6) - (6)].caseClause), MEMMGR);
  }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 3481 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (2)].caseClauses)->push_back((yyvsp[(2) - (2)].caseClause));
    (yyval.caseClauses)=(yyvsp[(1) - (2)].caseClauses);
  }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 3486 "../src/parser/XQParser.y"
    {
    (yyval.caseClauses)=new (MEMMGR) XQTypeswitch::Cases(XQillaAllocator<XQTypeswitch::Case*>(MEMMGR));
    (yyval.caseClauses)->push_back((yyvsp[(1) - (1)].caseClause));
  }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 3494 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (5)].str), NULL, (yyvsp[(5) - (5)].astNode)));
  }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 3498 "../src/parser/XQParser.y"
    {
    (yyval.caseClause) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQTypeswitch::Case(NULL, NULL, (yyvsp[(3) - (3)].astNode)));
  }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 3506 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTypeswitch::Case(NULL, (yyvsp[(2) - (4)].sequenceType), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 3510 "../src/parser/XQParser.y"
    { 
    (yyval.caseClause) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQTypeswitch::Case((yyvsp[(3) - (7)].str), (yyvsp[(5) - (7)].sequenceType), (yyvsp[(7) - (7)].astNode)));
  }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 3518 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQIf((yyvsp[(3) - (8)].astNode), (yyvsp[(6) - (8)].astNode), (yyvsp[(8) - (8)].astNode), MEMMGR));
  }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 3526 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType() == ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == Or::name) {
      ((Or*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Or(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 3540 "../src/parser/XQParser.y"
    {
    if((yyvsp[(1) - (3)].astNode)->getType()==ASTNode::OPERATOR && ((XQOperator*)(yyvsp[(1) - (3)].astNode))->getOperatorName() == And::name) {
      ((And*)(yyvsp[(1) - (3)].astNode))->addArgument((yyvsp[(3) - (3)].astNode));
      (yyval.astNode) = (yyvsp[(1) - (3)].astNode);
    }
    else
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) And(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 3559 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 3563 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::NOT_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 3566 "../src/parser/XQParser.y"
    { /* Careful! */ QP->_lexer->undoLessThan(); }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 3567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN,packageArgs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 3571 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::LESS_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 3575 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 3579 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GeneralComp(GeneralComp::GREATER_THAN_EQUAL,packageArgs((yyvsp[(1) - (3)].astNode),(yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 3583 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Equals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 3587 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NotEquals(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 3591 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 3595 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) LessThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 3599 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThan(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 3603 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) GreaterThanEqual(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 3607 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) NodeComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), MEMMGR));
  }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 3611 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), true, MEMMGR));
  }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 3615 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) OrderComparison(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR), false,MEMMGR));
  }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 3624 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTContains((yyvsp[(1) - (4)].astNode), (yyvsp[(4) - (4)].ftselection), NULL, MEMMGR));
  }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 3628 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (5)]), new (MEMMGR) FTContains((yyvsp[(1) - (5)].astNode), (yyvsp[(4) - (5)].ftselection), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 3637 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Range(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 3646 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Plus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 3650 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Minus(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 3659 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Multiply(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 3663 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Divide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 3667 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) IntegerDivide(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 3671 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Mod(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
  }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 3680 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 3684 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Union(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 3693 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Intersect(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 3697 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) Except(packageArgs((yyvsp[(1) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR),MEMMGR));
    }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 3706 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQInstanceOf((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 3715 "../src/parser/XQParser.y"
    {
    XQTreatAs* treatAs = new (MEMMGR) XQTreatAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR, XQTreatAs::err_XPDY0050);
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), treatAs);
  }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 3725 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQCastableAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 3734 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCastAs((yyvsp[(1) - (4)].astNode),(yyvsp[(4) - (4)].sequenceType),MEMMGR));
  }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 3743 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/false, args, MEMMGR));
    }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 3749 "../src/parser/XQParser.y"
    {
      VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
      args.push_back((yyvsp[(2) - (2)].astNode));
      (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UnaryMinus(/*positive*/true, args, MEMMGR));
    }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 3770 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQValidate((yyvsp[(3) - (4)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 3774 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_LAX,MEMMGR));
    }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 3778 "../src/parser/XQParser.y"
    {
      (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQValidate((yyvsp[(4) - (5)].astNode),DocumentCache::VALIDATION_STRICT,MEMMGR));
    }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 3786 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (3)]));

    // we don't support any pragma
    yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
  }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 3793 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(ExtensionExpr, (yylsp[(1) - (4)]));

    // we don't support any pragma
    (yyval.astNode) = (yyvsp[(3) - (4)].astNode);
  }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 3806 "../src/parser/XQParser.y"
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

  case 500:

/* Line 1455 of yacc.c  */
#line 3827 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 3836 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].astNode));
    nav->addStep((yyvsp[(2) - (2)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 3842 "../src/parser/XQParser.y"
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

  case 505:

/* Line 1455 of yacc.c  */
#line 3867 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes args(XQillaAllocator<ASTNode*>(MEMMGR));
    FunctionRoot *root = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FunctionRoot(args, MEMMGR));

    SequenceType *documentNode = WRAP((yylsp[(1) - (1)]), new (MEMMGR)
      SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT)));

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQTreatAs(root, documentNode, MEMMGR));
  }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 3881 "../src/parser/XQParser.y"
    {
    XQNav *nav = GET_NAVIGATION((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].astNode));
    nav->addStep((yyvsp[(3) - (3)].astNode));
    (yyval.astNode) = nav;
  }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 3887 "../src/parser/XQParser.y"
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

  case 512:

/* Line 1455 of yacc.c  */
#line 3909 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDocumentOrder((yyvsp[(1) - (1)].astNode), MEMMGR));
  }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 3919 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 3926 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), /*reverse*/true, MEMMGR));
  }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 3935 "../src/parser/XQParser.y"
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

  case 519:

/* Line 1455 of yacc.c  */
#line 3958 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::CHILD;
  }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 3962 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT;
  }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 3966 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ATTRIBUTE;
  }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 3970 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::SELF;
  }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 3974 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::DESCENDANT_OR_SELF;
  }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 3978 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING_SIBLING;
  }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 3982 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::FOLLOWING;
  }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 3986 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::NAMESPACE;
  }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 3994 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::attribute_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep(XQStep::ATTRIBUTE, (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 528:

/* Line 1455 of yacc.c  */
#line 4002 "../src/parser/XQParser.y"
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

  case 529:

/* Line 1455 of yacc.c  */
#line 4019 "../src/parser/XQParser.y"
    {
    if(!(yyvsp[(2) - (2)].nodeTest)->isNodeTypeSet()) {
      (yyvsp[(2) - (2)].nodeTest)->setNodeType(Node::element_string);
    }

    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQStep((yyvsp[(1) - (2)].axis), (yyvsp[(2) - (2)].nodeTest), MEMMGR));
  }
    break;

  case 531:

/* Line 1455 of yacc.c  */
#line 4036 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PARENT;
  }
    break;

  case 532:

/* Line 1455 of yacc.c  */
#line 4040 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR;
  }
    break;

  case 533:

/* Line 1455 of yacc.c  */
#line 4044 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING_SIBLING;
  }
    break;

  case 534:

/* Line 1455 of yacc.c  */
#line 4048 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::PRECEDING;
  }
    break;

  case 535:

/* Line 1455 of yacc.c  */
#line 4052 "../src/parser/XQParser.y"
    {
    (yyval.axis) = XQStep::ANCESTOR_OR_SELF;
  }
    break;

  case 536:

/* Line 1455 of yacc.c  */
#line 4060 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    step->setTypeWildcard();
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQStep(XQStep::PARENT, step, MEMMGR));
  }
    break;

  case 537:

/* Line 1455 of yacc.c  */
#line 4072 "../src/parser/XQParser.y"
    {
    (yyval.nodeTest) = new (MEMMGR) NodeTest();
    (yyval.nodeTest)->setItemType((yyvsp[(1) - (1)].itemType));
  }
    break;

  case 539:

/* Line 1455 of yacc.c  */
#line 4082 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].qName)->getPrefix());
    step->setNodeName((yyvsp[(1) - (1)].qName)->getName());
    (yyval.nodeTest) = step;
  }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 4094 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNameWildcard();
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 4101 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodePrefix((yyvsp[(1) - (1)].str));
    step->setNameWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 4108 "../src/parser/XQParser.y"
    {
    NodeTest *step = new (MEMMGR) NodeTest();
    step->setNodeName((yyvsp[(1) - (1)].str));
    step->setNamespaceWildcard();
    (yyval.nodeTest) = step;
  }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 4121 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) XQPredicate((yyvsp[(1) - (4)].astNode), (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 561:

/* Line 1455 of yacc.c  */
#line 4150 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQVariable((yyvsp[(2) - (2)].str), MEMMGR));
  }
    break;

  case 563:

/* Line 1455 of yacc.c  */
#line 4161 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 564:

/* Line 1455 of yacc.c  */
#line 4165 "../src/parser/XQParser.y"
    { 
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 4173 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQContextItem(MEMMGR));
  }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 4181 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(OrderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_ORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 4191 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(UnorderedExpr, (yylsp[(1) - (4)]));

    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQOrderingChange(StaticContext::ORDERING_UNORDERED, (yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 4201 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionCall((yyvsp[(1) - (3)].str), NULL, MEMMGR));
  }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 4205 "../src/parser/XQParser.y"
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

  case 570:

/* Line 1455 of yacc.c  */
#line 4228 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].itemList)->push_back((yyvsp[(3) - (3)].astNode));
    (yyval.itemList) = (yyvsp[(1) - (3)].itemList);
  }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 4233 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(1) - (1)].astNode));
  }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 4244 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(Argument, (yylsp[(1) - (1)]));
    (yyval.astNode) = 0;
  }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 4253 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 4257 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(Constructor, (yylsp[(1) - (1)]));
  }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 4270 "../src/parser/XQParser.y"
    { 
    VectorOfASTNodes* content = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    ASTNode *name = WRAP((yylsp[(2) - (5)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (5)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (5)].itemList), content, MEMMGR));
  }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 4276 "../src/parser/XQParser.y"
    { 
    if(!XPath2Utils::equals((yyvsp[(2) - (10)].str), (yyvsp[(8) - (10)].str)))
      yyerror((yylsp[(7) - (10)]), "Close tag does not match open tag");
    ASTNode *name = WRAP((yylsp[(2) - (10)]), new (MEMMGR) XQDirectName((yyvsp[(2) - (10)].str), /*useDefaultNamespace*/true, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQElementConstructor(name, (yyvsp[(3) - (10)].itemList), (yyvsp[(6) - (10)].itemList), MEMMGR));
  }
    break;

  case 583:

/* Line 1455 of yacc.c  */
#line 4289 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 584:

/* Line 1455 of yacc.c  */
#line 4293 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->push_back(attrItem);
  }
    break;

  case 585:

/* Line 1455 of yacc.c  */
#line 4302 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (7)].itemList);

    ASTNode *name = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQDirectName((yyvsp[(3) - (7)].str), /*useDefaultNamespace*/false, MEMMGR));
    ASTNode *attrItem = WRAP((yylsp[(3) - (7)]), new (MEMMGR) XQAttributeConstructor(name, (yyvsp[(7) - (7)].itemList),MEMMGR));

    (yyval.itemList)->insert((yyval.itemList)->begin(), attrItem);
  }
    break;

  case 588:

/* Line 1455 of yacc.c  */
#line 4318 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 589:

/* Line 1455 of yacc.c  */
#line 4322 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 590:

/* Line 1455 of yacc.c  */
#line 4329 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 591:

/* Line 1455 of yacc.c  */
#line 4333 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = (yyvsp[(2) - (3)].itemList);
  }
    break;

  case 592:

/* Line 1455 of yacc.c  */
#line 4343 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 4347 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 4352 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 595:

/* Line 1455 of yacc.c  */
#line 4362 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 596:

/* Line 1455 of yacc.c  */
#line 4366 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 597:

/* Line 1455 of yacc.c  */
#line 4370 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 4383 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 599:

/* Line 1455 of yacc.c  */
#line 4387 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 600:

/* Line 1455 of yacc.c  */
#line 4392 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 601:

/* Line 1455 of yacc.c  */
#line 4402 "../src/parser/XQParser.y"
    { 
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 602:

/* Line 1455 of yacc.c  */
#line 4406 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(2) - (2)]), "Namespace URI of a namespace declaration must be a literal [err:XQST0022]");
  }
    break;

  case 603:

/* Line 1455 of yacc.c  */
#line 4410 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 604:

/* Line 1455 of yacc.c  */
#line 4427 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)); 
  }
    break;

  case 605:

/* Line 1455 of yacc.c  */
#line 4431 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 606:

/* Line 1455 of yacc.c  */
#line 4436 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back((yyvsp[(2) - (2)].astNode));
  }
    break;

  case 607:

/* Line 1455 of yacc.c  */
#line 4441 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
  }
    break;

  case 608:

/* Line 1455 of yacc.c  */
#line 4448 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = (yyvsp[(1) - (2)].itemList);
    if(CONTEXT->getPreserveBoundarySpace()) {
      (yyval.itemList)->push_back(WRAP((yylsp[(2) - (2)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                                 SchemaSymbols::fgDT_STRING,
                                 (yyvsp[(2) - (2)].str), AnyAtomicType::STRING, MEMMGR)));
    }
  }
    break;

  case 609:

/* Line 1455 of yacc.c  */
#line 4461 "../src/parser/XQParser.y"
    {
    ASTNode *value = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(2) - (3)].str), AnyAtomicType::STRING,
                  MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCommentConstructor(value, MEMMGR));
  }
    break;

  case 610:

/* Line 1455 of yacc.c  */
#line 4474 "../src/parser/XQParser.y"
    {
    (yyval.str) = (XMLCh*)XMLUni::fgZeroLenString;
  }
    break;

  case 612:

/* Line 1455 of yacc.c  */
#line 4483 "../src/parser/XQParser.y"
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

  case 614:

/* Line 1455 of yacc.c  */
#line 4503 "../src/parser/XQParser.y"
    {
    (yyval.str) = (yyvsp[(2) - (2)].str);
  }
    break;

  case 621:

/* Line 1455 of yacc.c  */
#line 4526 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQDocumentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 622:

/* Line 1455 of yacc.c  */
#line 4534 "../src/parser/XQParser.y"
    {
    VectorOfASTNodes* empty = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQElementConstructor((yyvsp[(2) - (3)].astNode), empty, (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 623:

/* Line 1455 of yacc.c  */
#line 4542 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/true, MEMMGR));
  }
    break;

  case 624:

/* Line 1455 of yacc.c  */
#line 4546 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 625:

/* Line 1455 of yacc.c  */
#line 4554 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
  }
    break;

  case 626:

/* Line 1455 of yacc.c  */
#line 4558 "../src/parser/XQParser.y"
    {
    (yyval.itemList) = new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR));
    (yyval.itemList)->push_back((yyvsp[(2) - (3)].astNode));
  }
    break;

  case 627:

/* Line 1455 of yacc.c  */
#line 4567 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQAttributeConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].itemList), MEMMGR));
  }
    break;

  case 628:

/* Line 1455 of yacc.c  */
#line 4574 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQDirectName((yyvsp[(1) - (1)].str), /*useDefaultNamespace*/false, MEMMGR));
  }
    break;

  case 629:

/* Line 1455 of yacc.c  */
#line 4578 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 630:

/* Line 1455 of yacc.c  */
#line 4586 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQTextConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 631:

/* Line 1455 of yacc.c  */
#line 4594 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQCommentConstructor((yyvsp[(3) - (4)].astNode), MEMMGR));
  }
    break;

  case 632:

/* Line 1455 of yacc.c  */
#line 4602 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQPIConstructor((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].astNode), MEMMGR));
  }
    break;

  case 633:

/* Line 1455 of yacc.c  */
#line 4609 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");

    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                               SchemaSymbols::fgDT_STRING,
                               (yyvsp[(1) - (1)].str), AnyAtomicType::STRING, MEMMGR));
  }
    break;

  case 634:

/* Line 1455 of yacc.c  */
#line 4619 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 635:

/* Line 1455 of yacc.c  */
#line 4626 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) XQSequence(MEMMGR));
  }
    break;

  case 636:

/* Line 1455 of yacc.c  */
#line 4630 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(2) - (3)].astNode);
  }
    break;

  case 637:

/* Line 1455 of yacc.c  */
#line 4638 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (2)].qName)));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 638:

/* Line 1455 of yacc.c  */
#line 4648 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::EXACTLY_ONE;
  }
    break;

  case 639:

/* Line 1455 of yacc.c  */
#line 4652 "../src/parser/XQParser.y"
    {
    (yyval.occurrence) = SequenceType::QUESTION_MARK;
  }
    break;

  case 640:

/* Line 1455 of yacc.c  */
#line 4660 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = WRAP((yyloc), new (MEMMGR) SequenceType(new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING), SequenceType::STAR));
  }
    break;

  case 641:

/* Line 1455 of yacc.c  */
#line 4664 "../src/parser/XQParser.y"
    {
    REJECT_NOT_XQUERY(TypeDeclaration, (yylsp[(1) - (2)]));

    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 642:

/* Line 1455 of yacc.c  */
#line 4674 "../src/parser/XQParser.y"
    {
    SequenceType* seq = WRAP((yylsp[(1) - (2)]), new (MEMMGR) SequenceType());
    seq->setItemType((yyvsp[(1) - (2)].itemType));
    seq->setOccurrence((yyvsp[(2) - (2)].occurrence));
    (yyval.sequenceType) = seq;
  }
    break;

  case 643:

/* Line 1455 of yacc.c  */
#line 4681 "../src/parser/XQParser.y"
    { 
    (yyval.sequenceType) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) SequenceType()); 
  }
    break;

  case 644:

/* Line 1455 of yacc.c  */
#line 4690 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::EXACTLY_ONE; }
    break;

  case 645:

/* Line 1455 of yacc.c  */
#line 4692 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::STAR; }
    break;

  case 646:

/* Line 1455 of yacc.c  */
#line 4694 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::PLUS; }
    break;

  case 647:

/* Line 1455 of yacc.c  */
#line 4696 "../src/parser/XQParser.y"
    { (yyval.occurrence) = SequenceType::QUESTION_MARK; }
    break;

  case 648:

/* Line 1455 of yacc.c  */
#line 4702 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATOMIC_TYPE, NULL, (yyvsp[(1) - (1)].qName));
  }
    break;

  case 649:

/* Line 1455 of yacc.c  */
#line 4706 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ANYTHING);
  }
    break;

  case 663:

/* Line 1455 of yacc.c  */
#line 4741 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_NODE);
  }
    break;

  case 664:

/* Line 1455 of yacc.c  */
#line 4749 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 665:

/* Line 1455 of yacc.c  */
#line 4753 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_DOCUMENT);
  }
    break;

  case 666:

/* Line 1455 of yacc.c  */
#line 4758 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(3) - (4)].itemType);
    (yyval.itemType)->setItemTestType(SequenceType::ItemType::TEST_SCHEMA_DOCUMENT);
  }
    break;

  case 667:

/* Line 1455 of yacc.c  */
#line 4767 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_TEXT);
  }
    break;

  case 668:

/* Line 1455 of yacc.c  */
#line 4775 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_COMMENT);
  }
    break;

  case 669:

/* Line 1455 of yacc.c  */
#line 4783 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI);
  }
    break;

  case 670:

/* Line 1455 of yacc.c  */
#line 4787 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 671:

/* Line 1455 of yacc.c  */
#line 4791 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_PI, new (MEMMGR) QualifiedName((yyvsp[(3) - (4)].str), MEMMGR));
  }
    break;

  case 672:

/* Line 1455 of yacc.c  */
#line 4799 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE);
  }
    break;

  case 673:

/* Line 1455 of yacc.c  */
#line 4803 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 674:

/* Line 1455 of yacc.c  */
#line 4807 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ATTRIBUTE,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 676:

/* Line 1455 of yacc.c  */
#line 4816 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 677:

/* Line 1455 of yacc.c  */
#line 4824 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ATTRIBUTE,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 679:

/* Line 1455 of yacc.c  */
#line 4837 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT);
  }
    break;

  case 680:

/* Line 1455 of yacc.c  */
#line 4841 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 4845 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (6)].qName),(yyvsp[(5) - (6)].qName));
  }
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 4849 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_ELEMENT,(yyvsp[(3) - (7)].qName),(yyvsp[(5) - (7)].qName));
    (yyval.itemType)->setAllowNilled(true);
  }
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 4859 "../src/parser/XQParser.y"
    {
    (yyval.qName) = NULL;
  }
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 4867 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_SCHEMA_ELEMENT,(yyvsp[(3) - (4)].qName));
  }
    break;

  case 690:

/* Line 1455 of yacc.c  */
#line 4887 "../src/parser/XQParser.y"
    {
    // the string must be whitespace-normalized
    XMLString::collapseWS((yyvsp[(1) - (1)].str), MEMMGR);
    if((yyvsp[(1) - (1)].str) && *(yyvsp[(1) - (1)].str) && !XPath2Utils::isValidURI((yyvsp[(1) - (1)].str), MEMMGR))
      yyerror((yylsp[(1) - (1)]), "The URI literal is not valid [err:XQST0046]");
    (yyval.str) = (yyvsp[(1) - (1)].str);
  }
    break;

  case 691:

/* Line 1455 of yacc.c  */
#line 4899 "../src/parser/XQParser.y"
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

  case 692:

/* Line 1455 of yacc.c  */
#line 4914 "../src/parser/XQParser.y"
    {
}
    break;

  case 693:

/* Line 1455 of yacc.c  */
#line 4917 "../src/parser/XQParser.y"
    {
}
    break;

  case 694:

/* Line 1455 of yacc.c  */
#line 4923 "../src/parser/XQParser.y"
    {
  (yyval.ftoptionlist) = new (MEMMGR) VectorOfFTOptions(XQillaAllocator<FTOption*>(MEMMGR));
}
    break;

  case 695:

/* Line 1455 of yacc.c  */
#line 4927 "../src/parser/XQParser.y"
    {
  if((yyvsp[(2) - (2)].ftoption) != NULL) (yyvsp[(1) - (2)].ftoptionlist)->push_back((yyvsp[(2) - (2)].ftoption));
  (yyval.ftoptionlist) = (yyvsp[(1) - (2)].ftoptionlist);
}
    break;

  case 696:

/* Line 1455 of yacc.c  */
#line 4937 "../src/parser/XQParser.y"
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

  case 698:

/* Line 1455 of yacc.c  */
#line 4954 "../src/parser/XQParser.y"
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

  case 700:

/* Line 1455 of yacc.c  */
#line 4970 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTMildnot((yyvsp[(1) - (4)].ftselection), (yyvsp[(4) - (4)].ftselection), MEMMGR));
  }
    break;

  case 702:

/* Line 1455 of yacc.c  */
#line 4980 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTUnaryNot((yyvsp[(2) - (2)].ftselection), MEMMGR));
  }
    break;

  case 705:

/* Line 1455 of yacc.c  */
#line 4990 "../src/parser/XQParser.y"
    {
  // TBD match options
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 706:

/* Line 1455 of yacc.c  */
#line 4999 "../src/parser/XQParser.y"
    {
  // TBD FTTimes
  (yyval.ftselection) = (yyvsp[(1) - (2)].ftselection);
}
    break;

  case 707:

/* Line 1455 of yacc.c  */
#line 5004 "../src/parser/XQParser.y"
    {
  (yyval.ftselection) = (yyvsp[(2) - (3)].ftselection);
}
    break;

  case 709:

/* Line 1455 of yacc.c  */
#line 5014 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTWords((yyvsp[(1) - (2)].astNode), (yyvsp[(2) - (2)].ftanyalloption), MEMMGR));
  }
    break;

  case 710:

/* Line 1455 of yacc.c  */
#line 5018 "../src/parser/XQParser.y"
    {
    (yyval.ftselection) = WRAP((yylsp[(2) - (4)]), new (MEMMGR) FTWords((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].ftanyalloption), MEMMGR));
  }
    break;

  case 711:

/* Line 1455 of yacc.c  */
#line 5026 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  yyerror((yylsp[(1) - (3)]), "This pragma is not recognized, and no alternative expression is specified [err:XQST0079]");
}
    break;

  case 712:

/* Line 1455 of yacc.c  */
#line 5031 "../src/parser/XQParser.y"
    {
  // we don't support any pragma
  (yyval.ftselection) = (yyvsp[(3) - (4)].ftselection);
}
    break;

  case 713:

/* Line 1455 of yacc.c  */
#line 5040 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 714:

/* Line 1455 of yacc.c  */
#line 5044 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY;
  }
    break;

  case 715:

/* Line 1455 of yacc.c  */
#line 5048 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ANY_WORD;
  }
    break;

  case 716:

/* Line 1455 of yacc.c  */
#line 5052 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL;
  }
    break;

  case 717:

/* Line 1455 of yacc.c  */
#line 5056 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::ALL_WORDS;
  }
    break;

  case 718:

/* Line 1455 of yacc.c  */
#line 5060 "../src/parser/XQParser.y"
    {
    (yyval.ftanyalloption) = FTWords::PHRASE;
  }
    break;

  case 720:

/* Line 1455 of yacc.c  */
#line 5070 "../src/parser/XQParser.y"
    {
  yyerror((yylsp[(1) - (3)]), "The FTTimes operator is not supported. [err:FTST0005]");
}
    break;

  case 721:

/* Line 1455 of yacc.c  */
#line 5081 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::EXACTLY;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (2)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 722:

/* Line 1455 of yacc.c  */
#line 5087 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_LEAST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 723:

/* Line 1455 of yacc.c  */
#line 5093 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::AT_MOST;
    (yyval.ftrange).arg1 = (yyvsp[(3) - (3)].astNode);
    (yyval.ftrange).arg2 = 0;
  }
    break;

  case 724:

/* Line 1455 of yacc.c  */
#line 5099 "../src/parser/XQParser.y"
    {
    (yyval.ftrange).type = FTRange::FROM_TO;
    (yyval.ftrange).arg1 = (yyvsp[(2) - (4)].astNode);
    (yyval.ftrange).arg2 = (yyvsp[(4) - (4)].astNode);
  }
    break;

  case 725:

/* Line 1455 of yacc.c  */
#line 5114 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) FTOrder(MEMMGR));
  }
    break;

  case 726:

/* Line 1455 of yacc.c  */
#line 5118 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTWindow((yyvsp[(2) - (3)].astNode), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 5122 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) FTDistance((yyvsp[(2) - (3)].ftrange), (yyvsp[(3) - (3)].ftunit), MEMMGR));
  }
    break;

  case 728:

/* Line 1455 of yacc.c  */
#line 5126 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::SAME, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 729:

/* Line 1455 of yacc.c  */
#line 5130 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTScope(FTScope::DIFFERENT, (yyvsp[(2) - (2)].ftunit), MEMMGR));
  }
    break;

  case 730:

/* Line 1455 of yacc.c  */
#line 5134 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_START, MEMMGR));
  }
    break;

  case 731:

/* Line 1455 of yacc.c  */
#line 5138 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::AT_END, MEMMGR));
  }
    break;

  case 732:

/* Line 1455 of yacc.c  */
#line 5142 "../src/parser/XQParser.y"
    {
    (yyval.ftoption) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) FTContent(FTContent::ENTIRE_CONTENT, MEMMGR));
  }
    break;

  case 733:

/* Line 1455 of yacc.c  */
#line 5150 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::WORDS;
  }
    break;

  case 734:

/* Line 1455 of yacc.c  */
#line 5154 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 735:

/* Line 1455 of yacc.c  */
#line 5158 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 736:

/* Line 1455 of yacc.c  */
#line 5166 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::SENTENCES;
  }
    break;

  case 737:

/* Line 1455 of yacc.c  */
#line 5170 "../src/parser/XQParser.y"
    {
    (yyval.ftunit) = FTOption::PARAGRAPHS;
  }
    break;

  case 748:

/* Line 1455 of yacc.c  */
#line 5206 "../src/parser/XQParser.y"
    {
    std::cerr << "case insensitive" << std::endl;
  }
    break;

  case 749:

/* Line 1455 of yacc.c  */
#line 5210 "../src/parser/XQParser.y"
    {
    std::cerr << "case sensitive" << std::endl;
  }
    break;

  case 750:

/* Line 1455 of yacc.c  */
#line 5214 "../src/parser/XQParser.y"
    {
    std::cerr << "lowercase" << std::endl;
  }
    break;

  case 751:

/* Line 1455 of yacc.c  */
#line 5218 "../src/parser/XQParser.y"
    {
    std::cerr << "uppercase" << std::endl;
  }
    break;

  case 752:

/* Line 1455 of yacc.c  */
#line 5227 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics insensitive" << std::endl;
  }
    break;

  case 753:

/* Line 1455 of yacc.c  */
#line 5231 "../src/parser/XQParser.y"
    {
    std::cerr << "diacritics sensitive" << std::endl;
  }
    break;

  case 754:

/* Line 1455 of yacc.c  */
#line 5239 "../src/parser/XQParser.y"
    {
    std::cerr << "using stemming" << std::endl;
  }
    break;

  case 755:

/* Line 1455 of yacc.c  */
#line 5243 "../src/parser/XQParser.y"
    {
    std::cerr << "no stemming" << std::endl;
  }
    break;

  case 756:

/* Line 1455 of yacc.c  */
#line 5253 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus" << std::endl;
  }
    break;

  case 757:

/* Line 1455 of yacc.c  */
#line 5257 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus default" << std::endl;
  }
    break;

  case 758:

/* Line 1455 of yacc.c  */
#line 5261 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus ()" << std::endl;
  }
    break;

  case 759:

/* Line 1455 of yacc.c  */
#line 5265 "../src/parser/XQParser.y"
    {
    std::cerr << "using thesaurus (default)" << std::endl;
  }
    break;

  case 760:

/* Line 1455 of yacc.c  */
#line 5269 "../src/parser/XQParser.y"
    {
    std::cerr << "no thesaurus" << std::endl;
  }
    break;

  case 761:

/* Line 1455 of yacc.c  */
#line 5276 "../src/parser/XQParser.y"
    {
  }
    break;

  case 762:

/* Line 1455 of yacc.c  */
#line 5279 "../src/parser/XQParser.y"
    {
  }
    break;

  case 763:

/* Line 1455 of yacc.c  */
#line 5286 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral" << std::endl;
  }
    break;

  case 764:

/* Line 1455 of yacc.c  */
#line 5290 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral" << std::endl;
  }
    break;

  case 765:

/* Line 1455 of yacc.c  */
#line 5294 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral levels" << std::endl;
  }
    break;

  case 766:

/* Line 1455 of yacc.c  */
#line 5298 "../src/parser/XQParser.y"
    {
    std::cerr << "at StringLiteral relationship StringLiteral levels" << std::endl;
  }
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 5308 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 768:

/* Line 1455 of yacc.c  */
#line 5312 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (3)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 769:

/* Line 1455 of yacc.c  */
#line 5316 "../src/parser/XQParser.y"
    {
    yyerror((yylsp[(1) - (4)]), "FTStopWordOption is not supported. [err:FTST0006]");
  }
    break;

  case 770:

/* Line 1455 of yacc.c  */
#line 5323 "../src/parser/XQParser.y"
    {
  }
    break;

  case 771:

/* Line 1455 of yacc.c  */
#line 5326 "../src/parser/XQParser.y"
    {
  }
    break;

  case 772:

/* Line 1455 of yacc.c  */
#line 5334 "../src/parser/XQParser.y"
    {
    std::cerr << "at URILiteral" << std::endl;
  }
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 5338 "../src/parser/XQParser.y"
    {
    std::cerr << "()" << std::endl;
  }
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 5345 "../src/parser/XQParser.y"
    {
    std::cerr << "StringLiteral" << std::endl;
  }
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 5349 "../src/parser/XQParser.y"
    {
    std::cerr << ", StringLiteral" << std::endl;
  }
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 5357 "../src/parser/XQParser.y"
    {
    std::cerr << "union" << std::endl;
  }
    break;

  case 777:

/* Line 1455 of yacc.c  */
#line 5361 "../src/parser/XQParser.y"
    {
    std::cerr << "except" << std::endl;
  }
    break;

  case 778:

/* Line 1455 of yacc.c  */
#line 5369 "../src/parser/XQParser.y"
    {
    std::cerr << "language StringLiteral" << std::endl;
  }
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 5377 "../src/parser/XQParser.y"
    {
    std::cerr << "using wildcards" << std::endl;
  }
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 5381 "../src/parser/XQParser.y"
    {
    std::cerr << "no wildcards" << std::endl;
  }
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 5389 "../src/parser/XQParser.y"
    {
}
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 5396 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = (yyvsp[(3) - (3)].astNode);
  }
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 5404 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_STRICT);
  }
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 5409 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_LAX);
  }
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 5414 "../src/parser/XQParser.y"
    {
    CHECK_SPECIFIED((yylsp[(1) - (3)]), BIT_REVALIDATION_SPECIFIED, "revalidation", "XUST0003");
    CONTEXT->setRevalidationMode(DocumentCache::VALIDATION_SKIP);
  }
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 5426 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsFirst((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 5430 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UInsertAsLast((yyvsp[(2) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 5434 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertInto((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 5438 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertAfter((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 790:

/* Line 1455 of yacc.c  */
#line 5442 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) UInsertBefore((yyvsp[(2) - (4)].astNode), (yyvsp[(4) - (4)].astNode), MEMMGR));
  }
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 5453 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (2)]), new (MEMMGR) UDelete((yyvsp[(2) - (2)].astNode), MEMMGR));
  }
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 5464 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) UReplaceValueOf((yyvsp[(5) - (7)].astNode), (yyvsp[(7) - (7)].astNode), MEMMGR));
  }
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 5468 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) UReplace((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 5478 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) URename((yyvsp[(3) - (5)].astNode), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 5486 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) UTransform((yyvsp[(2) - (6)].copyBindingList), (yyvsp[(4) - (6)].astNode), (yyvsp[(6) - (6)].astNode), MEMMGR));
  }
    break;

  case 800:

/* Line 1455 of yacc.c  */
#line 5493 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].copyBindingList)->push_back((yyvsp[(3) - (3)].copyBinding));
    (yyval.copyBindingList) = (yyvsp[(1) - (3)].copyBindingList);
  }
    break;

  case 801:

/* Line 1455 of yacc.c  */
#line 5498 "../src/parser/XQParser.y"
    {
    (yyval.copyBindingList) = new (MEMMGR) VectorOfCopyBinding(XQillaAllocator<CopyBinding*>(MEMMGR));
    (yyval.copyBindingList)->push_back((yyvsp[(1) - (1)].copyBinding));
  }
    break;

  case 802:

/* Line 1455 of yacc.c  */
#line 5506 "../src/parser/XQParser.y"
    {
    (yyval.copyBinding) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) CopyBinding(MEMMGR, (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].astNode)));
  }
    break;

  case 803:

/* Line 1455 of yacc.c  */
#line 5515 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_INTEGER,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 804:

/* Line 1455 of yacc.c  */
#line 5527 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DECIMAL,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DECIMAL,
                  MEMMGR));
  }
    break;

  case 805:

/* Line 1455 of yacc.c  */
#line 5539 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_DOUBLE,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::DOUBLE,
                  MEMMGR));
  }
    break;

  case 806:

/* Line 1455 of yacc.c  */
#line 5552 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQLiteral(
                  SchemaSymbols::fgURI_SCHEMAFORSCHEMA,
                  SchemaSymbols::fgDT_STRING,
                  (yyvsp[(1) - (1)].str), AnyAtomicType::STRING,
                  MEMMGR));
  }
    break;

  case 807:

/* Line 1455 of yacc.c  */
#line 5563 "../src/parser/XQParser.y"
    {
    // Check for a colon
    for(XMLCh *tmp = (yyvsp[(1) - (1)].str); *tmp; ++tmp)
      if(*tmp == ':') yyerror((yylsp[(1) - (1)]), "Expecting an NCName, found a QName");
  }
    break;

  case 808:

/* Line 1455 of yacc.c  */
#line 5572 "../src/parser/XQParser.y"
    {
    (yyval.qName) = new (MEMMGR) QualifiedName((yyvsp[(1) - (1)].str),MEMMGR);
  }
    break;

  case 809:

/* Line 1455 of yacc.c  */
#line 5584 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (5)].str), 0, 0, (yyvsp[(5) - (5)].astNode), 0, MEMMGR));
  }
    break;

  case 810:

/* Line 1455 of yacc.c  */
#line 5588 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (7)].str), 0, (yyvsp[(5) - (7)].argSpecs), (yyvsp[(7) - (7)].astNode), (yyvsp[(6) - (7)].sequenceType), MEMMGR));
  }
    break;

  case 811:

/* Line 1455 of yacc.c  */
#line 5592 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (8)].str), (yyvsp[(7) - (8)].itemList), 0, (yyvsp[(8) - (8)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (8)].modeList));
  }
    break;

  case 812:

/* Line 1455 of yacc.c  */
#line 5597 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (10)]), new (MEMMGR) XQUserFunction((yyvsp[(4) - (10)].str), (yyvsp[(7) - (10)].itemList), (yyvsp[(8) - (10)].argSpecs), (yyvsp[(10) - (10)].astNode), (yyvsp[(9) - (10)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(5) - (10)].modeList));
  }
    break;

  case 813:

/* Line 1455 of yacc.c  */
#line 5602 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (6)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (6)].itemList), 0, (yyvsp[(6) - (6)].astNode), 0, MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (6)].modeList));
  }
    break;

  case 814:

/* Line 1455 of yacc.c  */
#line 5607 "../src/parser/XQParser.y"
    {
    (yyval.functDecl) = WRAP((yylsp[(1) - (8)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(5) - (8)].itemList), (yyvsp[(6) - (8)].argSpecs), (yyvsp[(8) - (8)].astNode), (yyvsp[(7) - (8)].sequenceType), MEMMGR));
    (yyval.functDecl)->setModeList((yyvsp[(3) - (8)].modeList));
  }
    break;

  case 815:

/* Line 1455 of yacc.c  */
#line 5615 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = 0;
  }
    break;

  case 816:

/* Line 1455 of yacc.c  */
#line 5619 "../src/parser/XQParser.y"
    {
    (yyval.sequenceType) = (yyvsp[(2) - (2)].sequenceType);
  }
    break;

  case 817:

/* Line 1455 of yacc.c  */
#line 5627 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = 0;
  }
    break;

  case 818:

/* Line 1455 of yacc.c  */
#line 5631 "../src/parser/XQParser.y"
    {
    (yyval.argSpecs) = (yyvsp[(2) - (3)].argSpecs);
  }
    break;

  case 819:

/* Line 1455 of yacc.c  */
#line 5638 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back(WRAP((yyloc), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT)));
  }
    break;

  case 820:

/* Line 1455 of yacc.c  */
#line 5643 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = (yyvsp[(2) - (2)].modeList);
  }
    break;

  case 821:

/* Line 1455 of yacc.c  */
#line 5651 "../src/parser/XQParser.y"
    {
    (yyval.modeList) = new (MEMMGR) XQUserFunction::ModeList(XQillaAllocator<XQUserFunction::Mode*>(MEMMGR));
    (yyval.modeList)->push_back((yyvsp[(1) - (1)].mode));
  }
    break;

  case 822:

/* Line 1455 of yacc.c  */
#line 5656 "../src/parser/XQParser.y"
    {
    (yyvsp[(1) - (3)].modeList)->push_back((yyvsp[(3) - (3)].mode));
    (yyval.modeList) = (yyvsp[(1) - (3)].modeList);
  }
    break;

  case 823:

/* Line 1455 of yacc.c  */
#line 5665 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 824:

/* Line 1455 of yacc.c  */
#line 5669 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 825:

/* Line 1455 of yacc.c  */
#line 5673 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::ALL));
  }
    break;

  case 826:

/* Line 1455 of yacc.c  */
#line 5681 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (3)].str), 0, MEMMGR));
  }
    break;

  case 827:

/* Line 1455 of yacc.c  */
#line 5685 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQCallTemplate((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].templateArgs), MEMMGR));
  }
    break;

  case 828:

/* Line 1455 of yacc.c  */
#line 5693 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (3)].astNode), 0, 0, MEMMGR));
  }
    break;

  case 829:

/* Line 1455 of yacc.c  */
#line 5697 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (7)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (7)].astNode), (yyvsp[(6) - (7)].templateArgs), 0, MEMMGR));
  }
    break;

  case 830:

/* Line 1455 of yacc.c  */
#line 5701 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (5)].astNode), 0, (yyvsp[(5) - (5)].mode), MEMMGR));
  }
    break;

  case 831:

/* Line 1455 of yacc.c  */
#line 5705 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (9)]), new (MEMMGR) XQApplyTemplates((yyvsp[(3) - (9)].astNode), (yyvsp[(8) - (9)].templateArgs), (yyvsp[(5) - (9)].mode), MEMMGR));
  }
    break;

  case 832:

/* Line 1455 of yacc.c  */
#line 5713 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode((yyvsp[(1) - (1)].str)));
  }
    break;

  case 833:

/* Line 1455 of yacc.c  */
#line 5717 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::DEFAULT));
  }
    break;

  case 834:

/* Line 1455 of yacc.c  */
#line 5721 "../src/parser/XQParser.y"
    {
    (yyval.mode) = WRAP((yylsp[(1) - (1)]), new (MEMMGR) XQUserFunction::Mode(XQUserFunction::Mode::CURRENT));
  }
    break;

  case 835:

/* Line 1455 of yacc.c  */
#line 5729 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = new (MEMMGR) TemplateArguments(XQillaAllocator<XQTemplateArgument*>(MEMMGR));
    (yyval.templateArgs)->push_back((yyvsp[(1) - (1)].templateArg));
  }
    break;

  case 836:

/* Line 1455 of yacc.c  */
#line 5734 "../src/parser/XQParser.y"
    {
    (yyval.templateArgs) = (yyvsp[(1) - (3)].templateArgs);
    (yyval.templateArgs)->push_back((yyvsp[(3) - (3)].templateArg));
  }
    break;

  case 837:

/* Line 1455 of yacc.c  */
#line 5744 "../src/parser/XQParser.y"
    {
    if((yyvsp[(3) - (5)].sequenceType) != 0)
      (yyvsp[(5) - (5)].astNode) = (yyvsp[(3) - (5)].sequenceType)->convertFunctionArg((yyvsp[(5) - (5)].astNode), CONTEXT, /*numericfunction*/false, (yyvsp[(3) - (5)].sequenceType));
    (yyval.templateArg) = WRAP((yylsp[(1) - (5)]), new (MEMMGR) XQTemplateArgument((yyvsp[(2) - (5)].str), (yyvsp[(5) - (5)].astNode), MEMMGR));
  }
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 5761 "../src/parser/XQParser.y"
    {
    (yyval.astNode) = WRAP((yylsp[(1) - (3)]), new (MEMMGR) XQFunctionRef((yyvsp[(1) - (3)].str), atoi(UTF8((yyvsp[(3) - (3)].str))), MEMMGR));
  }
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 5769 "../src/parser/XQParser.y"
    {
    XQUserFunction *func = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQUserFunction(0, (yyvsp[(2) - (4)].argSpecs), (yyvsp[(4) - (4)].astNode), (yyvsp[(3) - (4)].sequenceType), 0, false, MEMMGR));
    (yyval.astNode) = WRAP((yylsp[(1) - (4)]), new (MEMMGR) XQInlineFunction(func, MEMMGR));
  }
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 5779 "../src/parser/XQParser.y"
    {
    REJECT_NOT_VERSION11(DynamicFunctionInvocation, (yylsp[(1) - (3)]));
    (yyval.astNode) = WRAP((yylsp[(2) - (3)]), new (MEMMGR) XQFunctionDeref((yyvsp[(1) - (3)].astNode), new (MEMMGR) VectorOfASTNodes(XQillaAllocator<ASTNode*>(MEMMGR)), MEMMGR));
  }
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 5784 "../src/parser/XQParser.y"
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

  case 846:

/* Line 1455 of yacc.c  */
#line 5812 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(SequenceType::ItemType::TEST_FUNCTION);
  }
    break;

  case 847:

/* Line 1455 of yacc.c  */
#line 5820 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType(new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR)), (yyvsp[(5) - (5)].sequenceType));
  }
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 5824 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = new (MEMMGR) SequenceType::ItemType((yyvsp[(3) - (6)].sequenceTypes), (yyvsp[(6) - (6)].sequenceType));
  }
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 5831 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = new (MEMMGR) VectorOfSequenceTypes(XQillaAllocator<SequenceType*>(MEMMGR));
    (yyval.sequenceTypes)->push_back((yyvsp[(1) - (1)].sequenceType));
  }
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 5836 "../src/parser/XQParser.y"
    {
    (yyval.sequenceTypes) = (yyvsp[(1) - (3)].sequenceTypes);
    (yyval.sequenceTypes)->push_back((yyvsp[(3) - (3)].sequenceType));
  }
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 5845 "../src/parser/XQParser.y"
    {
    (yyval.itemType) = (yyvsp[(2) - (3)].itemType);
  }
    break;



/* Line 1455 of yacc.c  */
#line 12149 "../src/parser/XQParser.cpp"
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
#line 5880 "../src/parser/XQParser.y"


}  // namespace XQParser


